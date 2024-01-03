class Github{
    constructor() {
        this.client_id = "755214ee50b7edd9fd60";
        this.client_secret = "1a1b45f669cb47b43fe6a4778d60f10afe0e8dee"
    }

    async getUser(user) {
        const profileResponse = await fetch(`https://api.github.com/users/${user}?client_id=${this.client_id}&client_secret=${this.client_secret}`);

        const profile = await profileResponse.json();

        return {
            profile
        }
    }
}

