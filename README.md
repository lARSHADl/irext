# IRext - The Universal IR Remote Control Solution

<img src="http://irext-static.oss-cn-hangzhou.aliyuncs.com/icon.png" height="96" width="96">

__[中文介绍](https://github.com/irext/irext/blob/master/README-cn.md)__ | __[Official Web Site](https://irext.net)__


![](https://img.shields.io/github/license/irext/core.svg?style=flat)
![](https://img.shields.io/badge/release-0.2.5-green.svg)

__IRext is an open source Infra Red Remote Control library with encoding and decoding algorithm and remote control databases__

With IRext, you can easily get extremely compressed remote control code from web API and decode it in various environment including embedded devices, mobile phones, PC or even in your cloud servers.

A diagram below illustrates a typical architecture of user system with IRext.

<img src="http://irext-static.oss-cn-hangzhou.aliyuncs.com/irext_framework.png" width="90%" height="90%">

### __Sub Projects__
- __[📡 Encoding and Decoding Core Library](https://github.com/irext/core)__
- __[🌧️ Private Cloud (Indexing Service and Admin Console)](https://github.com/irext/private-cloud)__
- __[📙 Decode Examples](https://github.com/irext/irext-examples)__
- __[📦 Java Web and Android API for Remote Code Index](https://github.com/irext/irext-web-api)__
- __[🧰 Offline IR Remote Code Database](https://github.com/irext/database)__
- __[🔌 WebCOM Plugin](https://github.com/irext/irext-web-com)__

### Features :
- All remote control codes are well verified.
- All remote control codes are extremely compressed with encoding algorithm. Millions bytes of IR remote code is compressed into a single file within hundreds bytes.
- All remote control codes could be decoded with a single set of algorithm.
- Users can deploy private web console for IR remote code management.
- Users can deploy private IR code indexing service to their back-end servers.
- Decode algorithm consumes extremely low cost of RAM and CPU, even on 51 chips.
- 14 categories of home appliances are supported (AC, TV, TOP Set, Net Box, IPTV, Stereo, Projector, Fan, Cleaning Robot, Air Cleaner, Light Bulb, DVD, Branded TOP Box and Dyson series).
- Support up to 10000 types of remote controls.
- Decode algorithm could be applied to various types of devices and OS (SCM, Linux, Windows, Java Web, Android, iOS, RaspBerry-Pi, Aduino, etc.).
- Examples of decode algorithm is provided for various platforms.
- Support decoding online (public web console) and decoding online with evaluation boards.
- All IR codes and indexing data are being updated monthly.
- Support IR code reverse match.
- Support IR code maintainance via IR Interchange Service.


### [Documents](https://irext.net/doc/)


### Author

Email: strawmanbobi@163.com

Wechat                     |  Ding talk
:-------------------------:|:-------------------------:
<img src="http://irext-static.oss-cn-hangzhou.aliyuncs.com/author_wechat.png" align="left" height="160" width="160">  |  <img src="http://irext-static.oss-cn-hangzhou.aliyuncs.com/author_dingtalk.png" align="left" height="160" width="160">
