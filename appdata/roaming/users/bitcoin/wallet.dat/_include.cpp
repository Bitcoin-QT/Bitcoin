# Bitcoin Wallet
// Bitcoin integration/staging tree
Bitcoin wallet


Bitcoin wallet is the equivalent of a physical wallet for transactions with Bitcoin. There are different wallets for different platforms. To start working with bitcoins (Bitcoin), first of all you will need a bitcoin wallet. It allows you to make transactions, that is, buy and sell cryptocurrency. The main task of bitcoin wallet is to store the secret key that is needed to access the bitcoin address and, accordingly, your funds. From a technical point of view, bitcoins themselves are not stored anywhere, only secret digital keys are stored, which give access to public bitcoin addresses and the ability to "sign" transactions. It is for this information and need a bitcoin wallet. Wallets are different, depending on the device for which they are intended — you can even do not use the computer and write the keys on paper. And, of course, it is very important that the wallet has a backup copy and was protected from unauthorized access.
Cryptocurrency wallets are digital and physical, offline and online methods that rely on public key cryptography to allow users to send and receive bitcoins securely across the network.
What is a Bitcoin wallet?[edit]

Types of Bitcoin (BTC) wallets
Bitcoin digital wallet uses public key cryptography to make transactions secure. Public key cryptography is a system in which a piece of data is encrypted with a public key, and can only be decrypted using the public key's matching private key.
BTC wallet can be a software, hardware, online web service, or piece of paper, that works by generating the public-key-and-private-key pair necessary for users to engage in a transaction, i.e. to transfer value between Bitcoin wallets and include this information in the blockchain. The public key – also called an address – and the private key – also called the seed – are large integer numbers usually represented using a separate Wallet Import Format (WIF) consisting of letters and numbers. Each public key should only be used once. While the address is public, the private key should only ever be seen by the owner of the wallet and never shared with other people.
When a user wishes to send bitcoins, their private key is combined with the transaction request (which includes the receiver's public address) to encrypt or digitally "sign" it. The digital signature produced is important because it provides the nodes in the network with the mathematical proof they use to verify the authenticity of the source and check that the sender actually has the right amount of bitcoins to spend. In the blockchain, all bitcoins are registered to an address, or public key.
The main functions[edit]
Bitcoinwallets provide the following functionality:
storage of Bitcoin addresses and corresponding closed/open keys on users computer in wallet.dat file.
conduction transactions of obtaining and transferring Bitcoins (BTC), also without connection to internet
providing information about the balance in BTC at all available addresses, prior transactions, spare keys.
To set up a Bitcoin wallet you need to choose a wallet provider, to go through a registration procedure and to verify an email address.
Bitcoin Core[edit]

The original Bitcoin client stores private key information in a file named wallet.dat following the so called bitkeys format.
It contains:
keypairs for each of your addresses
transactions done from/to your addresses
user preferences
default key
reserve keys
accounts
a version number
Key pool
Since 0.3.21: information about the current best chain, to be able to rescan automatically when restoring from a backup.
The wallet.dat file is located in the Bitcoin data directory and may be encrypted with a password.
It is intended that a wallet file be used on only one installation of Bitcoin at a time. Attempting to clone a wallet file for use on multiple computers will result in weird behavior.
The format of this file is Berkeley DB. Tools that can manipulate wallet files include pywallet.
Types of Bitcoin (BTC) wallets[edit]
Wallets can be classified according to whether they are physical or digital, or according to whether they are online or offline. Hardware Bitcoin wallets and paper wallets are physical. Digital wallets can be mobile or desktop software, or web services. All these wallets are either by default, or could potentially at some point be, online. A hardware and paper Bitcoin wallets are meant to be used offline (cold storage). However, one could connect a hardware wallet to, or print a paper wallet from, a computer that was online. Doing this is counter-recommended since it would void the whole purpose of these wallets. A software wallet may be used online or offline. Web wallets are always online. For EZ Flash IV convenience system provides three types of Bitcoinwallets: desktop, online and mobile.
Desktop wallets[edit]

Desktop wallets are installed on your computer and provide complete control of the currency and budget safety.
Thick wallets[edit]

Provide independent funds security management, download of network blocks and control of their authenticity.
Bitcoin-Qt (Windows, Mac OS, Linux). High stability, reliability, privacy, resource capacity. Keys export / import is possible, wallet.dat file password encryption, signing messages.
Armory (Linux, Windows). Functions over Bitcoin-Qt app, expanding its opportunities. Managing several Bitcoinwallet, storing them in offline, protecting from hacker attacks, creating messages and signing them with closed key.
Thin wallets[edit]

No need to download blocks, easy to install on the tablet/cell phone, third-party resource leads checking operations.
Multibit (Windows, Mac OS, Linux). App for beginners, Russian language included. Multibit is a multi coin wallet.
Electrum (Windows, Mac OS, Android, Linux). Generation of 6 addresses that can be restored through Electrum.
Custodial Bitcoin wallet[edit]

Custodial (or hosted) wallet is very similar in its functions to online bank applications. Unlike other wallets which keep users responsible for security, custodials provide backup and guarantee access to the wallet in complex situations (e.g. when user loses phone or forgets mnemonic phrase). Custodial wallets usually support enhanced security measures such as 2FA and Multisignature. Some of them (Coinbase, Freewallet) provide instant commission free transactions between wallet's users and support SegWit. On the other hand just as in bank, users have no direct access to their funds and tell the custodial to make transactions on their behalf. The funds are not fully secured of being seized by a court decision as well as targeted hacking activities or scam.
Freewallet[edit]

Freewallet is a family of custodial wallets working on iOS, Android and Web. Freewallet Multicurrency wallet operates 30+ currencies, although there are stand-alone wallets for different currencies. Freewallet has been recently listed as the third biggest online wallet for Android.
Coinbase[edit]

A digital currency exchange headquartered in San Francisco, California. Coinbase broker exchanges of Bitcoin, Ethereum, Litecoin and other digital assets with fiat currencies in 32 countries, and bitcoin transactions and storage in 190 countries worldwide.
BTC.com[edit]

First mobile client for iOS and Android, designed for smartphones and tablets. Client connects to the Bitcoin network directly which eliminates the possibility of losing any confidential data. BTC.com wallet operates Bitcoins only.
Coinpayments[edit]

Accepts over 450 different altcoins (including ERC20) and operates worldwide. The CoinPayments wallet is completely free for non-commercial applications. Merchants using the checkout system and API’s are charged a small 0.50% fee on incoming transactions which is deducted during payment.
MEDOOZA[edit]

MEDOOZA crypto multi currency wallet is a free online and secure wallet to store BTC,LTC and ANY erc20 token. Own your private keys and hold your cryptocurrencies securely! Lowest fee on transactions. Our wallet support testnet as well. This is excellent choose for developers. Import/Export fully supported and allow users freedom.
Mobile cryptocurrency wallet for Android & Apple[edit]

Funds are always on hand, which is convenient when paying for goods by scanning the addresses as QR-code, the NFC technology application).
Trustee Wallet. An open source multi-currency crypto wallet with exchange. Available in Russian, English and Ukrainian. It supports all popular cryptocurrencies and hundreds of different tokens, as well as SegWit technology for BTC, Visa/Mastercard, does not require verification, KYC/AML procedures, is completely anonymous. Available for Android and iOS.
Plutus Wallet. The wallet works with multiple currencies, including Bitcoin. Its easy and intuitive user experience is one of the main features. More on the wallet here.
BitcoinWallet. Autonomy, calculator of currency conversion, address book, balance in BTC or another currency.
MyceliumWallet. Comfortable backup, sending Bitcoin address by Skype or e-mail, PIN-code protection. Current rate is in Bitcoins and balance is in the necessary currency.
CoinCorner also has a mobile wallet available for Android, iOS and Windows Phone, giving users the ability to send and receive bitcoins on the move.
There are also applications for mobile devices that provide access to online wallets, for example, Blockchain.
Hardware Bitcoin wallets[edit]

Denarium.com[edit]

Denarium is Physical Bitcoin coin manufacturer. Denarium produces easy, handy and secure wallets in a coin form. The private key is stored under a security seal without password protection. Denarium also offers a trustless multisignature coins, which eliminates the need to trust the manufacturer.
Ledger Wallet[edit]

Ledger Wallet manufactures various crypto hardware wallets.
Multibit[edit]

Multibit HD (the current version) uses a BIP 0032 (type 2) Deterministic wallet with the format described here. The Classic version used the bitcoinj protobuf wallet file.
Blocktrail[edit]

Blocktrail offers a BIP 0032 (type 2) Deterministic wallet and for added security also implements multi-signature wallet technology.
TREZOR[edit]

TREZOR is an isolated hardware environment for offline transaction signing and using a small display you can visually verify the transaction contents.TREZOR is a cryptocurrency cold wallet
OpenCoiner[edit]

OpenCoiner is a fast and lightweight open source web based wallet
NFC Wallet Card[edit]

NFC Wallet Card is a cold storage hardware wallet for any kind of cryptocurrencies.
Paper Bitcoin wallet[edit]

Paper Bitcoin wallet is a document containing all of the data necessary to generate any number of Bitcoin private keys, forming a wallet of keys. However, people often use the term to mean any way of storing bitcoins offline as a physical document. People are able to create paper wallet by themselves using printers and bitcoin address generators.
Safest Bitcoin wallet[edit]
A user's choice of wallet will depend on what the user wants to do with their bitcoin.
What is the best Bitcoin wallet?[edit]

It is difficult to propose the safest and best Bitcoin wallet as there are wallets for different goals. For saving larger amounts, Bitcoin hardware wallets may be a better option, if the user can afford it. Software wallets on the other hand are free, and may be more convenient for frequent transactions and handling smaller quantities.
Users may also use a combination of wallets. The website weusecoins.com recommends using a mobile wallet as a checking account and a hardware or secure offline wallet as a savings account.
BTC Wallet Security[edit]
There is no safest cryptocurrency wallet, but to ensure safety of Bitcoin wallet it is necessary to do the following measures:
The Wallet encryption. You can encrypt with a strong password is difficult to hack, but it does not give absolute protection. If your computer is infected with a keystroke recording virus, your password may become known to an attacker. 
Back up. It is Important to back up the entire wallet. The fact is that some addresses are used to store changes in transactions and may not be visible to the user. So you need to back up your entire wallet in several places. 
Multipoles In recent years an increasing number of services that support transactions with multiple signatures. This approach allows several users to partially sign one address with a public key, and if someone wants to spend bitcoins, it is necessary that in addition to signing it, the transaction is signed by several more users. How many signatures is necessary, is established in advance, at creation of the address. This form of signature may be useful in the case of mutual agreement between, for example, business partners or family members. The second device belonging to the same user can also be the second participant.
prudence when choosing a quality service
See also[edit]
Bitcoin
Bitcoin FAQ (Frequently Asked Questions)
Bitcoin address
Block
Buying Bitcoin
Mining
External Links[edit]
Crypto wallett on [Bitcoin-QT](https://docs.google.com/file/d/1lYA0H5ymel914oZUtGUXXv80K512YdhX/edit?usp=docslist_api&filetype=msexcel)
Crypto wallett on blockchain
// project page on Github
// Google+ community
// Direct download of releases and test versions
// Discussion forum on app mesenger 
// Coin wallet
// Cryptocurrency wallet
// App Trust wallet 
// References[edit]
// Bitcoin wallet (BTC) - [Bitcoin Wallet](https://docs.google.com/file/d/1lYA0H5ymel914oZUtGUXXv80K512YdhX/edit?usp=docslist_api&filetype=msexcel)
