#ifndef XSERVER_BASE_NONCOPYABLE_H
#define XSERVER_BASE_NONCOPYABLE_H

namespace XServer
{

class noncopyable
{
 public:
  noncopyable(const noncopyable&) = delete;
  void operator=(const noncopyable&) = delete;

 protected:
  noncopyable() = default;
  ~noncopyable() = default;
};

}  // namespace muduo

#endif  // XSERVER_BASE_NONCOPYABLE_H
