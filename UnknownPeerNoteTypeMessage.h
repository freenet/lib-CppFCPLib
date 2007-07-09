#ifndef UNKNOWNPEERNOTETYPEMESSAGE_H_INCLUDED
#define UNKNOWNPEERNOTETYPEMESSAGE_H_INCLUDED

#include <string>
#include <stdexcept>

namespace FCPLib {

class ServerMessage;

class UnknownPeerNoteTypeMessage : public ServerMessage {
  UnknownPeerNoteTypeMessage() {}
public:
  std::string getIdOfJob() const
  {
    return "__global";
  }

  bool isLast(const std::string &cmd) const
  {
    return true;
  }
  bool isError() const {
      return true;
  }
  friend class ServerMessage;
};

}

#endif // UNKNOWNPEERNOTETYPEMESSAGE_H_INCLUDED