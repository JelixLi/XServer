#ifndef XSERVER_BASE_COPYABLE_H
#define XSERVER_BASE_COPYABLE_H

namespace XServer
{

/// A tag class emphasises the objects are copyable.
/// The empty base class optimization applies.
/// Any derived class of copyable should be a value type.
class copyable
{
 protected:
  copyable() = default;
  ~copyable() = default;
};

}  // namespace XServer

#endif  // XSERVER_BASE_COPYABLE_H