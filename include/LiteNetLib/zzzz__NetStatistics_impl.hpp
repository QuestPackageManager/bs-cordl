#pragma once
// IWYU pragma private; include "LiteNetLib\NetStatistics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__NetStatistics_def.hpp"
//  Writing Method size for method: ::LiteNetLib::NetStatistics.get_PacketsSent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::LiteNetLib::NetStatistics::*)()>(&::LiteNetLib::NetStatistics::get_PacketsSent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58a6f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "get_PacketsSent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetStatistics.get_PacketsReceived
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::LiteNetLib::NetStatistics::*)()>(&::LiteNetLib::NetStatistics::get_PacketsReceived)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58a6f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "get_PacketsReceived", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetStatistics.get_BytesSent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::LiteNetLib::NetStatistics::*)()>(&::LiteNetLib::NetStatistics::get_BytesSent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58a6f88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "get_BytesSent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetStatistics.get_BytesReceived
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::LiteNetLib::NetStatistics::*)()>(&::LiteNetLib::NetStatistics::get_BytesReceived)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58a6fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "get_BytesReceived", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetStatistics.get_PacketLoss
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::LiteNetLib::NetStatistics::*)()>(&::LiteNetLib::NetStatistics::get_PacketLoss)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58a6fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "get_PacketLoss", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetStatistics.get_PacketLossPercent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::LiteNetLib::NetStatistics::*)()>(&::LiteNetLib::NetStatistics::get_PacketLossPercent)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x58a6fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "get_PacketLossPercent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetStatistics.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetStatistics::*)()>(&::LiteNetLib::NetStatistics::Reset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x58a7030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetStatistics.IncrementPacketsSent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetStatistics::*)()>(&::LiteNetLib::NetStatistics::IncrementPacketsSent)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x589f18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "IncrementPacketsSent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetStatistics.IncrementPacketsReceived
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetStatistics::*)()>(&::LiteNetLib::NetStatistics::IncrementPacketsReceived)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58a11b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "IncrementPacketsReceived", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetStatistics.AddBytesSent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetStatistics::*)(int64_t)>(&::LiteNetLib::NetStatistics::AddBytesSent)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x589f1a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "AddBytesSent", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetStatistics.AddBytesReceived
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetStatistics::*)(int64_t)>(&::LiteNetLib::NetStatistics::AddBytesReceived)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58a11d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "AddBytesReceived", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetStatistics.IncrementPacketLoss
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetStatistics::*)()>(&::LiteNetLib::NetStatistics::IncrementPacketLoss)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x58a7090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "IncrementPacketLoss", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetStatistics.AddPacketLoss
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetStatistics::*)(int64_t)>(&::LiteNetLib::NetStatistics::AddPacketLoss)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x58a70ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "AddPacketLoss", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetStatistics.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::LiteNetLib::NetStatistics::*)()>(&::LiteNetLib::NetStatistics::ToString)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x58a70cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { ::i2c::class_of<::LiteNetLib::NetStatistics*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetStatistics._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetStatistics::*)()>(&::LiteNetLib::NetStatistics::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x589e920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int64_t& LiteNetLib::NetStatistics::__cordl_internal_get__packetsSent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetsSent;
}
constexpr int64_t const& LiteNetLib::NetStatistics::__cordl_internal_get__packetsSent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetsSent;
}
constexpr void LiteNetLib::NetStatistics::__cordl_internal_set__packetsSent(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____packetsSent = value;
}
constexpr int64_t& LiteNetLib::NetStatistics::__cordl_internal_get__packetsReceived() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetsReceived;
}
constexpr int64_t const& LiteNetLib::NetStatistics::__cordl_internal_get__packetsReceived() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetsReceived;
}
constexpr void LiteNetLib::NetStatistics::__cordl_internal_set__packetsReceived(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____packetsReceived = value;
}
constexpr int64_t& LiteNetLib::NetStatistics::__cordl_internal_get__bytesSent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bytesSent;
}
constexpr int64_t const& LiteNetLib::NetStatistics::__cordl_internal_get__bytesSent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bytesSent;
}
constexpr void LiteNetLib::NetStatistics::__cordl_internal_set__bytesSent(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bytesSent = value;
}
constexpr int64_t& LiteNetLib::NetStatistics::__cordl_internal_get__bytesReceived() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bytesReceived;
}
constexpr int64_t const& LiteNetLib::NetStatistics::__cordl_internal_get__bytesReceived() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bytesReceived;
}
constexpr void LiteNetLib::NetStatistics::__cordl_internal_set__bytesReceived(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bytesReceived = value;
}
constexpr int64_t& LiteNetLib::NetStatistics::__cordl_internal_get__packetLoss() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetLoss;
}
constexpr int64_t const& LiteNetLib::NetStatistics::__cordl_internal_get__packetLoss() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packetLoss;
}
constexpr void LiteNetLib::NetStatistics::__cordl_internal_set__packetLoss(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____packetLoss = value;
}
inline int64_t LiteNetLib::NetStatistics::get_PacketsSent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "get_PacketsSent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t LiteNetLib::NetStatistics::get_PacketsReceived() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "get_PacketsReceived", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t LiteNetLib::NetStatistics::get_BytesSent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "get_BytesSent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t LiteNetLib::NetStatistics::get_BytesReceived() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "get_BytesReceived", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t LiteNetLib::NetStatistics::get_PacketLoss() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "get_PacketLoss", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline int64_t LiteNetLib::NetStatistics::get_PacketLossPercent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "get_PacketLossPercent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void LiteNetLib::NetStatistics::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LiteNetLib::NetStatistics::IncrementPacketsSent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "IncrementPacketsSent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LiteNetLib::NetStatistics::IncrementPacketsReceived() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "IncrementPacketsReceived", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LiteNetLib::NetStatistics::AddBytesSent(int64_t bytesSent) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "AddBytesSent", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytesSent);
}
inline void LiteNetLib::NetStatistics::AddBytesReceived(int64_t bytesReceived) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "AddBytesReceived", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bytesReceived);
}
inline void LiteNetLib::NetStatistics::IncrementPacketLoss() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "IncrementPacketLoss", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LiteNetLib::NetStatistics::AddPacketLoss(int64_t packetLoss) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { "AddPacketLoss", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packetLoss);
}
inline ::StringW LiteNetLib::NetStatistics::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::LiteNetLib::NetStatistics*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void LiteNetLib::NetStatistics::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetStatistics*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::LiteNetLib::NetStatistics* LiteNetLib::NetStatistics::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::NetStatistics*>());
}
// Ctor Parameters []
constexpr ::LiteNetLib::NetStatistics::NetStatistics() {}
