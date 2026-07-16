#pragma once
// IWYU pragma private; include "LiteNetLib/NetPacket.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
#include "LiteNetLib/zzzz__PacketProperty_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::LiteNetLib::NetPacket.get_Property
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::LiteNetLib::PacketProperty (::LiteNetLib::NetPacket::*)()>(&::LiteNetLib::NetPacket::get_Property)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58a349c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "get_Property", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacket.set_Property
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPacket::*)(::LiteNetLib::PacketProperty)>(&::LiteNetLib::NetPacket::set_Property)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58a4f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "set_Property", {}, { ::i2c::type_of<::LiteNetLib::PacketProperty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacket.get_ConnectionNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::LiteNetLib::NetPacket::*)()>(&::LiteNetLib::NetPacket::get_ConnectionNumber)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58a6300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "get_ConnectionNumber", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacket.set_ConnectionNumber
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPacket::*)(uint8_t)>(&::LiteNetLib::NetPacket::set_ConnectionNumber)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58a2a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "set_ConnectionNumber", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacket.get_Sequence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::LiteNetLib::NetPacket::*)()>(&::LiteNetLib::NetPacket::get_Sequence)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58a632c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "get_Sequence", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacket.set_Sequence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPacket::*)(uint16_t)>(&::LiteNetLib::NetPacket::set_Sequence)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58a6338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "set_Sequence", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacket.get_IsFragmented
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::NetPacket::*)()>(&::LiteNetLib::NetPacket::get_IsFragmented)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58a634c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "get_IsFragmented", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacket.MarkFragmented
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPacket::*)()>(&::LiteNetLib::NetPacket::MarkFragmented)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x58a6378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "MarkFragmented", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacket.get_ChannelId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t (::LiteNetLib::NetPacket::*)()>(&::LiteNetLib::NetPacket::get_ChannelId)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58a63a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "get_ChannelId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacket.set_ChannelId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPacket::*)(uint8_t)>(&::LiteNetLib::NetPacket::set_ChannelId)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58a63d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "set_ChannelId", {}, { ::i2c::type_of<uint8_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacket.get_FragmentId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::LiteNetLib::NetPacket::*)()>(&::LiteNetLib::NetPacket::get_FragmentId)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58a6400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "get_FragmentId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacket.set_FragmentId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPacket::*)(uint16_t)>(&::LiteNetLib::NetPacket::set_FragmentId)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58a640c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "set_FragmentId", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacket.get_FragmentPart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::LiteNetLib::NetPacket::*)()>(&::LiteNetLib::NetPacket::get_FragmentPart)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58a641c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "get_FragmentPart", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacket.set_FragmentPart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPacket::*)(uint16_t)>(&::LiteNetLib::NetPacket::set_FragmentPart)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58a6428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "set_FragmentPart", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacket.get_FragmentsTotal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint16_t (::LiteNetLib::NetPacket::*)()>(&::LiteNetLib::NetPacket::get_FragmentsTotal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58a6438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "get_FragmentsTotal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacket.set_FragmentsTotal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPacket::*)(uint16_t)>(&::LiteNetLib::NetPacket::set_FragmentsTotal)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58a6444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "set_FragmentsTotal", {}, { ::i2c::type_of<uint16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPacket::*)(int32_t)>(&::LiteNetLib::NetPacket::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58a6454;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NetPacket::*)(::LiteNetLib::PacketProperty, int32_t)>(&::LiteNetLib::NetPacket::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58a64b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::PacketProperty>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacket.GetHeaderSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::LiteNetLib::PacketProperty)>(&::LiteNetLib::NetPacket::GetHeaderSize)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x58a4f70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "GetHeaderSize", {}, { ::i2c::type_of<::LiteNetLib::PacketProperty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacket.GetHeaderSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::LiteNetLib::NetPacket::*)()>(&::LiteNetLib::NetPacket::GetHeaderSize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x589fc18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "GetHeaderSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NetPacket.FromBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::NetPacket::*)(::ArrayW<uint8_t>, int32_t, int32_t)>(&::LiteNetLib::NetPacket::FromBytes)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x58a337c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "FromBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<uint8_t>& LiteNetLib::NetPacket::__cordl_internal_get_RawData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RawData;
}
constexpr ::ArrayW<uint8_t> const& LiteNetLib::NetPacket::__cordl_internal_get_RawData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___RawData;
}
constexpr void LiteNetLib::NetPacket::__cordl_internal_set_RawData(::ArrayW<uint8_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___RawData = value;
}
constexpr int32_t& LiteNetLib::NetPacket::__cordl_internal_get_Size() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Size;
}
constexpr int32_t const& LiteNetLib::NetPacket::__cordl_internal_get_Size() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Size;
}
constexpr void LiteNetLib::NetPacket::__cordl_internal_set_Size(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___Size = value;
}
constexpr ::System::Object*& LiteNetLib::NetPacket::__cordl_internal_get_UserData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserData;
}
constexpr ::System::Object* const& LiteNetLib::NetPacket::__cordl_internal_get_UserData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___UserData;
}
constexpr void LiteNetLib::NetPacket::__cordl_internal_set_UserData(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___UserData = value;
}
inline void LiteNetLib::NetPacket::setStaticF_LastProperty(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "LastProperty", ::LiteNetLib::NetPacket*>(std::forward<int32_t>(value));
}
inline int32_t LiteNetLib::NetPacket::getStaticF_LastProperty() {
  return ::cordl_internals::getStaticField<int32_t, "LastProperty", ::LiteNetLib::NetPacket*>();
}
inline ::LiteNetLib::PacketProperty LiteNetLib::NetPacket::get_Property() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "get_Property", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::PacketProperty>(this, ___internal_method);
}
inline void LiteNetLib::NetPacket::set_Property(::LiteNetLib::PacketProperty value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "set_Property", {}, { ::i2c::type_of<::LiteNetLib::PacketProperty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint8_t LiteNetLib::NetPacket::get_ConnectionNumber() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "get_ConnectionNumber", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void LiteNetLib::NetPacket::set_ConnectionNumber(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "set_ConnectionNumber", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint16_t LiteNetLib::NetPacket::get_Sequence() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "get_Sequence", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void LiteNetLib::NetPacket::set_Sequence(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "set_Sequence", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool LiteNetLib::NetPacket::get_IsFragmented() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "get_IsFragmented", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void LiteNetLib::NetPacket::MarkFragmented() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "MarkFragmented", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline uint8_t LiteNetLib::NetPacket::get_ChannelId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "get_ChannelId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint8_t>(this, ___internal_method);
}
inline void LiteNetLib::NetPacket::set_ChannelId(uint8_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "set_ChannelId", {}, { ::i2c::type_of<uint8_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint16_t LiteNetLib::NetPacket::get_FragmentId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "get_FragmentId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void LiteNetLib::NetPacket::set_FragmentId(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "set_FragmentId", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint16_t LiteNetLib::NetPacket::get_FragmentPart() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "get_FragmentPart", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void LiteNetLib::NetPacket::set_FragmentPart(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "set_FragmentPart", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline uint16_t LiteNetLib::NetPacket::get_FragmentsTotal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "get_FragmentsTotal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint16_t>(this, ___internal_method);
}
inline void LiteNetLib::NetPacket::set_FragmentsTotal(uint16_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "set_FragmentsTotal", {}, { ::i2c::type_of<uint16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::NetPacket::_ctor(int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline void LiteNetLib::NetPacket::_ctor(::LiteNetLib::PacketProperty property, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::PacketProperty>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property, size);
}
inline int32_t LiteNetLib::NetPacket::GetHeaderSize(::LiteNetLib::PacketProperty property) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "GetHeaderSize", {}, { ::i2c::type_of<::LiteNetLib::PacketProperty>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, property);
}
inline int32_t LiteNetLib::NetPacket::GetHeaderSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "GetHeaderSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool LiteNetLib::NetPacket::FromBytes(::ArrayW<uint8_t> data, int32_t start, int32_t packetSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::NetPacket*>(), { "FromBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data, start, packetSize);
}
inline ::LiteNetLib::NetPacket* LiteNetLib::NetPacket::New_ctor(int32_t size) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::NetPacket*>(size));
}
inline ::LiteNetLib::NetPacket* LiteNetLib::NetPacket::New_ctor(::LiteNetLib::PacketProperty property, int32_t size) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::NetPacket*>(property, size));
}
// Ctor Parameters []
constexpr ::LiteNetLib::NetPacket::NetPacket() {}
