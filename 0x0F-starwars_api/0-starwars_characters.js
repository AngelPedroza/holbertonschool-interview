#!/usr/bin/node
const request = require('request');
const url = `https://swapi-api.hbtn.io/api/films/${process.argv[2]}`;

request(url, (error, response, body) => {
  if (!error) {
    const res = JSON.parse(body);
    const characters = res.characters;
    for (const i in characters) {
      request(characters[i], (error, response, body) => {
        if (!error) {
          const resChar = JSON.parse(body);
          const name = resChar.name;
          console.log(name);
        } else {
          console.log(error);
        }
      });
    }
  } else {
    console.log(error);
  }
});
