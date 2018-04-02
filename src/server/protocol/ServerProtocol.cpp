 
#include "ServerProtocol.h"

namespace HttpServer
{
	ServerProtocol::ServerProtocol(Socket::Adapter *sock) noexcept
		: sock(sock)
	{

	}

	Socket::Adapter *ServerProtocol::getSocket() noexcept {
		return this->sock;
	}

	void ServerProtocol::close() noexcept {
		this->sock->close();
	}
}
