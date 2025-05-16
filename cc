const express = require('express');
const app = express();
const PORT = 3000;

app.get('/', (req, res) => {
  res.send('Hello, World!');
});

app.listen(PORT, () => {
  console.log(`Server is running on http://localhost:${PORT}`);
});

{
  "name": "hello-world-app",
  "version": "1.0.0",
  "main": "app.js",
  "scripts": {
    "start": "node app.js"
  },
  "dependencies": {
    "express": "^4.17.1"
  }
}

docker images
docker pull nginx
docker ps
docker ps -a

# Use official Node.js runtime as a parent image
FROM node:14

# Set working directory in the container
WORKDIR /usr/src/app

# Copy package.json and package-lock.json
COPY package*.json ./

# Install dependencies
RUN npm install

# Copy the rest of the application source code
COPY . .

# Expose port 3000
EXPOSE 3000

# Run the app when the container launches
CMD ["npm", "start"]

docker build -t myapp:1.0 .
docker run -p 3000:3000 myapp:1.0
  
