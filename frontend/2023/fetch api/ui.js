class UI{
    constructor() {
        this.profile = document.querySelector(".profile-content");
    }

    showProfile(user) {
        this.profile.innerHTML = `
        <div class="profile">
                    <div class="image-container">
                    <img src=${user.avatar_url} alt="profile image">
                  <a href=${user.html_url} target="_blank">View Profile</a>
                </div>
                <div class="link-container">
                    <span>
                        Publick Repos:${user.public_repos}
                    </span>
                    <span>
                        Publick Gists:${user.public_gists}
                    </span>
                    <span>
                        Followers:${user.followers}
                    </span>
                    <span>
                        Following:${user.following}
                    </span>
                    <br><br>
                    <ul>
                        <li>Company:${user.company}</li>
                        <li>website/blog:${user.blog}</li>
                        <li>location:${user.location}</li>
                        <li>Member since:${user.created_at}</li>
                    </ul>
                </div>           
        `
    }
    
    showAlert(message, className) {
        this.clearAlert()

        const div = document.createElement("div");
        
        div.className = className;

        div.appendChild(document.createTextNode(message))

        const container = document.querySelector("main")

        const form = document.querySelector("form")

        container.insertBefore(div, form)
        
        setTimeout(() => {
            this.clearAlert()
        }, 3000)

        
    }

    clearAlert() {
        const currentAlert = document.querySelector(".alert")

        if (currentAlert) {
            currentAlert.remove()
        }

    }

    clearProfile() {
       this.profile.innerHTML = ""
   }
}