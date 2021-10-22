# Get In Touch Form 
- It is a template of get in touch with me form which you can easily use for your portfolio website or any other website
- HTML and Css template   
**Html code**
```html
<section id="contactme" class="contactme">
            <h2>Get In Touch</h2>
            <div class="content">
                <br> Name
                <br>
                <input type="text" placeholder="Your Name">
                <br> Email Address
                <br>
                <input type="email" placeholder="xyz@gmail.com">
                <br>Subject
                <br>
                <input type="text">
                <br> Your Message
                <br>
                <input type="text">
                <br>
                <button id="contactsubmit">Submit</button>
	  </div>
</section>
```
**Css code**
```css
 .contactme {
        display: flex;
        justify-content: center;
        align-items: center;
        flex-direction: column;
        background-color: white;
        font-family: 'Source Sans Pro', sans-serif;
        color: #132945;
    }

    .contactme h2 {
        font-size: 50px;
        position: relative;
        font-family: 'Source Sans Pro', sans-serif;
    }

    .contactme h2::before {
        content: "";
        position: absolute;
        bottom: 0;
        width: 0%;
        height: 3%;
        background-color: #132945;
        animation: h2-bottom 1s infinite ease-in-out alternate;
    }

    .contactme input {
        padding: 10px;
        margin-bottom: 10px;
        border: 3px solid #132945;
        border-radius: 3px;
        box-shadow: 0px 0px 2px;
        width: 100%;
    }

    .content {
        padding: 2rem;
        justify-content: center;
        flex-direction: row;
        flex-wrap: wrap;
        max-height: fit-content;
        width: 60%;
    }

    #contactsubmit {
        margin-top: 1em;
        border: 3px solid #132945;
        border-radius: 3px;
        box-shadow: 0px 0px 2px white;
        background-color: #132945;
        color: white;
        font-family: 'Source Sans Pro', sans-serif;
        padding: 10px;
        width: 50%;
    }
```
# Sreenshot 
<img width="910" alt="2021-10-22 (2)" src="https://user-images.githubusercontent.com/89654310/138461008-19f18a7f-6c28-4041-af2e-24c837c238db.png">

  

    
