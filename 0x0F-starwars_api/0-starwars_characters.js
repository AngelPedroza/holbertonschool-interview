#!/usr/bin/node
request = require('request')
request({method: 'GET', uri: `https://swapi-api.hbtn.io/api/films/${process.argv[2]}`}, (error, response, body) => {
    if (!error && response.statusCode == 200) {
        const res = JSON.parse(body)
        const characters = res.characters
        for (let i in characters){
            request({method: 'GET', uri: characters[i]}, (error, response, body) => {
                if (!error && response.statusCode == 200) {
                    const res_char = JSON.parse(body)
                    const name = res_char.name
                    console.log(name)
                }
            })
        }
    }
})