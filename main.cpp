#include <cstdlib>
#include <iostream>
#include <memory>
#include <utility>
#include <boost/asio.hpp>

using boost::asio::ip::tcp;

class session
{
public:
    session(tcp::socket socket)
            : socket_(std::move(socket))
    {
        void connect()
        {
            void Connecting_threads();
        }
        void id.socket();
    }
private:
    returnSession();
    getSession();
    void Thread;
    tcp::socket socket_;
    size_t max_length;

};

class server
{
public:
    server(boost::asio::io_context& io_context, short port)
            : acceptor_(io_context, tcp::endpoint(tcp::v4(), port))
    {
        getThread();
        returnThread();
        returnIdSocket();
    }

    int main()
    {
        return 0;
    }
