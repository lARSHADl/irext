<<<<<<< HEAD
# IRext Open Source IR Remote Control library
### 中文 README : 

__IRext is an open source Infra Red Remote Control library with encoding and decoding algorithms and remote control databases__

With IRext, you can easily get zipped remote control code from Web API and decode it in various environments including embedded devices, mobile phones, PC or even in your cloud servers.

Official Web Site : https://irext.net

----
### Features :
  - All the remote control codes are well verified and enccoded with zip algorithm.
  - IRext provides a set of universary decoding algorithm for 38KHz IR wave code.
  - Users can deploy private web console for IR remote code management.
  - Users can upload, verify and release IR code with web console.
  - IRext encoding zips millions bytes of IR remote code into hundreds bytes files.
  - IRext provids a set of resource optimized decoding algorithm for embedded devices and OS, takes up to 15KB RAM at most.
  - 14 categories of home appliances are supoorted (AC, TV, TOPSet, Net Box, IPTV, Stereo, Projector, Fan, Cleaning Robot, Air Cleaner, Light Bulb, DVD, Branded TOPBox and Dyson series).
  - Support up to 10000 types of remote controls.
  - Support various devices and OS (SCM、Linux、WiSndows、Java Web、Android、RaspBerry Pi, Aduino, etc.).
  - Inluding examples for various platforms.
  - Support decoding on line (public web console) and decoding online with boards.
  - Support offline IR codes and databases, updating monthly.

------
### Documents :

- Infra Red Remote Control Introduction: https://irext.net/doc/
- Remote Control Code Indexing Web API: https://irext.net/doc/#services
- Decode Algorithm Documentation: https://irext.net/doc/#decode
=======
## IRext Encoding and Decoding Core Library

  This project contains IRext core encode algorithm and decode algorithm.

### Summary

  IR code is base on 38000Hz or 56000Hz carrier waves, it is identified by the time interval of carrier waves.

  Identical control signal is defined by pairs of physical high and low levels.

  The lead code is identified by the 9000us time interval with carrier waves and 4500us interval without carrier waves. The logic 0 is identified by 500us time interval with carrier waves and 500us interval without carrier waves. The logic 1 is identified by 500us time interval with carrier waves and 1500us interval without carrier waves, so are the other types of encoding.

Following are some specifications:

- Physical high level is constituted by carrier waves and physical low level without any carrier waves.
- Basic protocol is constructed by different types of elements including lead code, end code, splitter, logic 0 and logic 1, different protocol has its own element structure, eg. NEC, upd6121g, tc9012, etc.
- 1 or more cycles resists in single element, but often 1 cycle.
- Lead code, end code and splitter takes 1 bit in element, for example, in NEC above, a '9000-4500' indicates 1 logic bit.
- Logic 0 and logic 1 take 8 bit in an element.
- Logic 0 and logic 1 could be big endian or little endian.
- For some of the protocols, logic 0 and logic 1 have bit masks.
- For some of the protocols, like mi-1 pattern could be in format of binary, quaternary or hexadecimal.
- For some of the protocols, like RC5 toggles its bits.
- For some of the protocols, there are 0us time intervals in lead code or end code.

2 kinds of remote control IR code:

- Command code: The receiver receives IR code as commands from emitter, and then adjusts status of itself, eg. control code of TV, DVD.
- Status code: The receiver receives IR code as status, and applies itself to this status, eg. control code of air conditioner.

### Encoder
>>>>>>> e439b135a830072638495bbd5fd51f7bde9c85ed

  The encoder composes compressed remote control IR binaries from plain text in XML format. Different kind of remote control code are differently composed.

<<<<<<< HEAD
### Sub Projects
  - Core Encoding/Decoding Algorithms : https://github.com/irext/irext-core
  - IR Code Management Console (Private Cloud Edition) : https://github.com/irext/irext-console
  - Examples : https://github.com/irext/irext-examples
  - Java Web API for Remote Code Indexing : https://github.com/irext/irext-web-api
  - WebCOM Plugin : https://github.com/irext/irext-web-com
=======
__Command code__
>>>>>>> e439b135a830072638495bbd5fd51f7bde9c85ed

  Command code is composed by 2 parts : protocol segment and control segment which are stored in 2 parts. When encode, the remote control key code would be calculated and translated according to protocol definition and merge separate segments into a complete control frame.

<<<<<<< HEAD
### Author

Email: strawmanbobi@163.com

<img src="http://irext.net/images/bobi_qr.png" align="left" height="160" width="160">
=======
__Status code__

  Status code is defined by various kinds of tags, indication each essential part in one status control frame. It is especially used for air conditioners.

### Decoder

  The decoder decodes IR remote control binaries into IR control frame which is composed by time series illustrated above.

  The input of decode algorithm is the IR remote control binary file or its content in bytes, the keycode and category id get from indexing API. 

  The output of the algorithm is the time series, which can be sent to IR emit driver function to send IR control waves to the family equipment.

  Please refer to https://irext.net/doc/ for details.


>>>>>>> e439b135a830072638495bbd5fd51f7bde9c85ed
