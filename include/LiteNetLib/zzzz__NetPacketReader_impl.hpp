#pragma once
// IWYU pragma private; include "LiteNetLib\NetPacketReader.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_impl.hpp"
#include "LiteNetLib/zzzz__NetPacketReader_def.hpp"
#include "LiteNetLib/zzzz__NetEvent_def.hpp"
#include "LiteNetLib/zzzz__NetManager_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
//  Writing Method size for method: ::LiteNetLib::NetPacketReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPacketReader::*)(::LiteNetLib::NetManager*, ::LiteNetLib::NetEvent*)>(&::LiteNetLib::NetPacketReader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589da44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacketReader*>(), { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::NetManager*>(), ::i2c::type_of<::LiteNetLib::NetEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacketReader.SetSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPacketReader::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::NetPacketReader::SetSource)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x589da4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacketReader*>(), { "SetSource", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacketReader.RecycleInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPacketReader::*)()>(&::LiteNetLib::NetPacketReader::RecycleInternal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x589daf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacketReader*>(), { "RecycleInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacketReader.Recycle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPacketReader::*)()>(&::LiteNetLib::NetPacketReader::Recycle)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x589dd80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacketReader*>(), { "Recycle", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::LiteNetLib::NetPacket*& LiteNetLib::NetPacketReader::__cordl_internal_get__packet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packet;
}
constexpr ::LiteNetLib::NetPacket* const& LiteNetLib::NetPacketReader::__cordl_internal_get__packet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packet;
}
constexpr void LiteNetLib::NetPacketReader::__cordl_internal_set__packet(::LiteNetLib::NetPacket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____packet = value;
}
constexpr ::LiteNetLib::NetManager*& LiteNetLib::NetPacketReader::__cordl_internal_get__manager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____manager;
}
constexpr ::LiteNetLib::NetManager* const& LiteNetLib::NetPacketReader::__cordl_internal_get__manager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____manager;
}
constexpr void LiteNetLib::NetPacketReader::__cordl_internal_set__manager(::LiteNetLib::NetManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____manager = value;
}
constexpr ::LiteNetLib::NetEvent*& LiteNetLib::NetPacketReader::__cordl_internal_get__evt() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____evt;
}
constexpr ::LiteNetLib::NetEvent* const& LiteNetLib::NetPacketReader::__cordl_internal_get__evt() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____evt;
}
constexpr void LiteNetLib::NetPacketReader::__cordl_internal_set__evt(::LiteNetLib::NetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____evt = value;
}
inline void LiteNetLib::NetPacketReader::_ctor(::LiteNetLib::NetManager* manager, ::LiteNetLib::NetEvent* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacketReader*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::NetManager*>(), ::i2c::type_of<::LiteNetLib::NetEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manager, evt);
}
inline void LiteNetLib::NetPacketReader::SetSource(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacketReader*>(), { "SetSource", {}, { ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet);
}
inline void LiteNetLib::NetPacketReader::RecycleInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacketReader*>(), { "RecycleInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LiteNetLib::NetPacketReader::Recycle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacketReader*>(), { "Recycle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::LiteNetLib::NetPacketReader* LiteNetLib::NetPacketReader::New_ctor(::LiteNetLib::NetManager* manager, ::LiteNetLib::NetEvent* evt) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::NetPacketReader*>(manager, evt));
}
// Ctor Parameters []
constexpr ::LiteNetLib::NetPacketReader::NetPacketReader() {}
