export const data = {
  "key": "v-8daa1a0e",
  "path": "/",
  "title": "首页",
  "lang": "en-US",
  "frontmatter": {
    "home": true,
    "title": "首页",
    "heroImage": "/images/hero.png",
    "actions": [
      {
        "text": "快速开始",
        "link": "/guide/getting-started.html",
        "type": "primary"
      },
      {
        "text": "介绍",
        "link": "/guide/",
        "type": "secondary"
      }
    ],
    "features": [
      {
        "title": "Simplicity First",
        "details": "Minimal setup with markdown-centered project structure helps you focus on writing."
      },
      {
        "title": "Vue-Powered",
        "details": "Enjoy the dev experience of Vue, use Vue components in markdown, and develop custom themes with Vue."
      },
      {
        "title": "Performant",
        "details": "VuePress generates pre-rendered static HTML for each page, and runs as an SPA once a page is loaded."
      },
      {
        "title": "Themes",
        "details": "Providing a default theme out of the box. You can also choose a community theme or create your own one."
      },
      {
        "title": "Plugins",
        "details": "Flexible plugin API, allowing plugins to provide lots of plug-and-play features for your site."
      },
      {
        "title": "Bundlers",
        "details": "Default bundler is Vite, while Webpack is also supported. Choose the one you like!"
      }
    ],
    "footer": "Copyright © 2020-2022 Moriafly"
  },
  "excerpt": "",
  "headers": [],
  "git": {
    "updatedTime": 1600773657000,
    "contributors": [
      {
        "name": "Moriafly",
        "email": "62319450+Moriafly@users.noreply.github.com",
        "commits": 2
      }
    ]
  },
  "filePathRelative": "README.md"
}

if (import.meta.webpackHot) {
  import.meta.webpackHot.accept()
  if (__VUE_HMR_RUNTIME__.updatePageData) {
    __VUE_HMR_RUNTIME__.updatePageData(data)
  }
}

if (import.meta.hot) {
  import.meta.hot.accept(({ data }) => {
    __VUE_HMR_RUNTIME__.updatePageData(data)
  })
}
