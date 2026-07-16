#pragma once
// IWYU pragma private; include "LiteNetLib/NatPunchModule.hpp"
#include "LiteNetLib/zzzz__NatAddressType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__NatPunchModule_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetPacketProcessor_def.hpp"
#include "LiteNetLib/zzzz__INatPunchListener_def.hpp"
#include "LiteNetLib/zzzz__NatPunchModule_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
#include "LiteNetLib/zzzz__NetSocket_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
// Ctor Parameters [CppParam { name: "LocalEndPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: Some("{}") }, CppParam { name: "RemoteEndPoint", ty: "::System::Net::IPEndPoint*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "Token", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::NatPunchModule_RequestEventData::NatPunchModule_RequestEventData(::System::Net::IPEndPoint* LocalEndPoint, ::System::Net::IPEndPoint* RemoteEndPoint,
                                                                                         ::StringW Token) noexcept {
  this->LocalEndPoint = LocalEndPoint;
  this->RemoteEndPoint = RemoteEndPoint;
  this->Token = Token;
}
// Ctor Parameters []
constexpr ::LiteNetLib::NatPunchModule_RequestEventData::NatPunchModule_RequestEventData() {}
// Ctor Parameters [CppParam { name: "TargetEndPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: Some("{}") }, CppParam { name: "Type", ty: "::LiteNetLib::NatAddressType", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "Token", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::LiteNetLib::NatPunchModule_SuccessEventData::NatPunchModule_SuccessEventData(::System::Net::IPEndPoint* TargetEndPoint, ::LiteNetLib::NatAddressType Type, ::StringW Token) noexcept {
  this->TargetEndPoint = TargetEndPoint;
  this->Type = Type;
  this->Token = Token;
}
// Ctor Parameters []
constexpr ::LiteNetLib::NatPunchModule_SuccessEventData::NatPunchModule_SuccessEventData() {}
//  Writing Method size for method: ::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket.get_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPEndPoint* (::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket::*)()>(
    &::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket::get_Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589f5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket*>(), { "get_Internal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket.set_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket::*)(::System::Net::IPEndPoint*)>(
    &::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket::set_Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589f5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket*>(), { "set_Internal", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket.get_Token
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket::*)()>(&::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket::get_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589f5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket*>(), { "get_Token", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket.set_Token
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket::*)(::StringW)>(
    &::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket::set_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589f5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket*>(), { "set_Token", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket::*)()>(&::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x589ef0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Net::IPEndPoint*& LiteNetLib::NatPunchModule_NatIntroduceRequestPacket::__cordl_internal_get__Internal_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Internal_k__BackingField;
}
constexpr ::System::Net::IPEndPoint* const& LiteNetLib::NatPunchModule_NatIntroduceRequestPacket::__cordl_internal_get__Internal_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Internal_k__BackingField;
}
constexpr void LiteNetLib::NatPunchModule_NatIntroduceRequestPacket::__cordl_internal_set__Internal_k__BackingField(::System::Net::IPEndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Internal_k__BackingField = value;
}
constexpr ::StringW& LiteNetLib::NatPunchModule_NatIntroduceRequestPacket::__cordl_internal_get__Token_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Token_k__BackingField;
}
constexpr ::StringW const& LiteNetLib::NatPunchModule_NatIntroduceRequestPacket::__cordl_internal_get__Token_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Token_k__BackingField;
}
constexpr void LiteNetLib::NatPunchModule_NatIntroduceRequestPacket::__cordl_internal_set__Token_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Token_k__BackingField = value;
}
inline ::System::Net::IPEndPoint* LiteNetLib::NatPunchModule_NatIntroduceRequestPacket::get_Internal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket*>(), { "get_Internal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*>(this, ___internal_method);
}
inline void LiteNetLib::NatPunchModule_NatIntroduceRequestPacket::set_Internal(::System::Net::IPEndPoint* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket*>(), { "set_Internal", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW LiteNetLib::NatPunchModule_NatIntroduceRequestPacket::get_Token() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket*>(), { "get_Token", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void LiteNetLib::NatPunchModule_NatIntroduceRequestPacket::set_Token(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket*>(), { "set_Token", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::NatPunchModule_NatIntroduceRequestPacket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket* LiteNetLib::NatPunchModule_NatIntroduceRequestPacket::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket*>());
}
// Ctor Parameters []
constexpr ::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket::NatPunchModule_NatIntroduceRequestPacket() {}
//  Writing Method size for method: ::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket.get_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPEndPoint* (::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::*)()>(
    &::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::get_Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589f5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket*>(), { "get_Internal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket.set_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::*)(::System::Net::IPEndPoint*)>(
    &::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::set_Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589f5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket*>(), { "set_Internal", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket.get_External
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IPEndPoint* (::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::*)()>(
    &::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::get_External)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589f5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket*>(), { "get_External", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket.set_External
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::*)(::System::Net::IPEndPoint*)>(
    &::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::set_External)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589f5e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket*>(), { "set_External", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket.get_Token
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::*)()>(&::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::get_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589f5ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket*>(), { "get_Token", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket.set_Token
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::*)(::StringW)>(
    &::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::set_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589f5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket*>(), { "set_Token", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::*)()>(&::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x589e728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Net::IPEndPoint*& LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::__cordl_internal_get__Internal_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Internal_k__BackingField;
}
constexpr ::System::Net::IPEndPoint* const& LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::__cordl_internal_get__Internal_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Internal_k__BackingField;
}
constexpr void LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::__cordl_internal_set__Internal_k__BackingField(::System::Net::IPEndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Internal_k__BackingField = value;
}
constexpr ::System::Net::IPEndPoint*& LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::__cordl_internal_get__External_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____External_k__BackingField;
}
constexpr ::System::Net::IPEndPoint* const& LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::__cordl_internal_get__External_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____External_k__BackingField;
}
constexpr void LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::__cordl_internal_set__External_k__BackingField(::System::Net::IPEndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____External_k__BackingField = value;
}
constexpr ::StringW& LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::__cordl_internal_get__Token_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Token_k__BackingField;
}
constexpr ::StringW const& LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::__cordl_internal_get__Token_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Token_k__BackingField;
}
constexpr void LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::__cordl_internal_set__Token_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Token_k__BackingField = value;
}
inline ::System::Net::IPEndPoint* LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::get_Internal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket*>(), { "get_Internal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*>(this, ___internal_method);
}
inline void LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::set_Internal(::System::Net::IPEndPoint* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket*>(), { "set_Internal", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::IPEndPoint* LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::get_External() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket*>(), { "get_External", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*>(this, ___internal_method);
}
inline void LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::set_External(::System::Net::IPEndPoint* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket*>(), { "set_External", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::get_Token() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket*>(), { "get_Token", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::set_Token(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket*>(), { "set_Token", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket* LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket*>());
}
// Ctor Parameters []
constexpr ::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket::NatPunchModule_NatIntroduceResponsePacket() {}
//  Writing Method size for method: ::LiteNetLib::NatPunchModule_NatPunchPacket.get_Token
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::LiteNetLib::NatPunchModule_NatPunchPacket::*)()>(&::LiteNetLib::NatPunchModule_NatPunchPacket::get_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589f5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatPunchPacket*>(), { "get_Token", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule_NatPunchPacket.set_Token
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NatPunchModule_NatPunchPacket::*)(::StringW)>(&::LiteNetLib::NatPunchModule_NatPunchPacket::set_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589f604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatPunchPacket*>(), { "set_Token", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule_NatPunchPacket.get_IsExternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::LiteNetLib::NatPunchModule_NatPunchPacket::*)()>(&::LiteNetLib::NatPunchModule_NatPunchPacket::get_IsExternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589f60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatPunchPacket*>(), { "get_IsExternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule_NatPunchPacket.set_IsExternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NatPunchModule_NatPunchPacket::*)(bool)>(&::LiteNetLib::NatPunchModule_NatPunchPacket::set_IsExternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589f614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatPunchPacket*>(), { "set_IsExternal", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule_NatPunchPacket._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NatPunchModule_NatPunchPacket::*)()>(&::LiteNetLib::NatPunchModule_NatPunchPacket::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x589f184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatPunchPacket*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& LiteNetLib::NatPunchModule_NatPunchPacket::__cordl_internal_get__Token_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Token_k__BackingField;
}
constexpr ::StringW const& LiteNetLib::NatPunchModule_NatPunchPacket::__cordl_internal_get__Token_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Token_k__BackingField;
}
constexpr void LiteNetLib::NatPunchModule_NatPunchPacket::__cordl_internal_set__Token_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Token_k__BackingField = value;
}
constexpr bool& LiteNetLib::NatPunchModule_NatPunchPacket::__cordl_internal_get__IsExternal_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsExternal_k__BackingField;
}
constexpr bool const& LiteNetLib::NatPunchModule_NatPunchPacket::__cordl_internal_get__IsExternal_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IsExternal_k__BackingField;
}
constexpr void LiteNetLib::NatPunchModule_NatPunchPacket::__cordl_internal_set__IsExternal_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IsExternal_k__BackingField = value;
}
inline ::StringW LiteNetLib::NatPunchModule_NatPunchPacket::get_Token() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatPunchPacket*>(), { "get_Token", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void LiteNetLib::NatPunchModule_NatPunchPacket::set_Token(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatPunchPacket*>(), { "set_Token", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool LiteNetLib::NatPunchModule_NatPunchPacket::get_IsExternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatPunchPacket*>(), { "get_IsExternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void LiteNetLib::NatPunchModule_NatPunchPacket::set_IsExternal(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatPunchPacket*>(), { "set_IsExternal", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void LiteNetLib::NatPunchModule_NatPunchPacket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule_NatPunchPacket*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::LiteNetLib::NatPunchModule_NatPunchPacket* LiteNetLib::NatPunchModule_NatPunchPacket::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::NatPunchModule_NatPunchPacket*>());
}
// Ctor Parameters []
constexpr ::LiteNetLib::NatPunchModule_NatPunchPacket::NatPunchModule_NatPunchPacket() {}
//  Writing Method size for method: ::LiteNetLib::NatPunchModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NatPunchModule::*)(::LiteNetLib::NetSocket*)>(&::LiteNetLib::NatPunchModule::_ctor)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x589e260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule*>(), { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::NetSocket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule.ProcessMessage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NatPunchModule::*)(::System::Net::IPEndPoint*, ::LiteNetLib::NetPacket*)>(&::LiteNetLib::NatPunchModule::ProcessMessage)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x589e53c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule*>(), { "ProcessMessage", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NatPunchModule::*)(::LiteNetLib::INatPunchListener*)>(&::LiteNetLib::NatPunchModule::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x589e654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule*>(), { "Init", {}, { ::i2c::type_of<::LiteNetLib::INatPunchListener*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule.NatIntroduce
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NatPunchModule::*)(::System::Net::IPEndPoint*, ::System::Net::IPEndPoint*, ::System::Net::IPEndPoint*,
                                                                                              ::System::Net::IPEndPoint*, ::StringW)>(&::LiteNetLib::NatPunchModule::NatIntroduce)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x589e65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule*>(),
                                                             { "NatIntroduce",
                                                               {},
                                                               { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::System::Net::IPEndPoint*>(),
                                                                 ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule.PollEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NatPunchModule::*)()>(&::LiteNetLib::NatPunchModule::PollEvents)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x589e72c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule*>(), { "PollEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule.SendNatIntroduceRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NatPunchModule::*)(::StringW, int32_t, ::StringW)>(&::LiteNetLib::NatPunchModule::SendNatIntroduceRequest)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x589eaa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule*>(),
                                                             { "SendNatIntroduceRequest", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule.SendNatIntroduceRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NatPunchModule::*)(::System::Net::IPEndPoint*, ::StringW)>(&::LiteNetLib::NatPunchModule::SendNatIntroduceRequest)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x589ebd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule*>(), { "SendNatIntroduceRequest", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule.OnNatIntroductionRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NatPunchModule::*)(::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket*, ::System::Net::IPEndPoint*)>(
    &::LiteNetLib::NatPunchModule::OnNatIntroductionRequest)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x589ef10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule*>(),
                            { "OnNatIntroductionRequest", {}, { ::i2c::type_of<::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket*>(), ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule.OnNatIntroductionResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NatPunchModule::*)(::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket*)>(
    &::LiteNetLib::NatPunchModule::OnNatIntroductionResponse)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x589f030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule*>(), { "OnNatIntroductionResponse", {}, { ::i2c::type_of<::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule.OnNatPunch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::LiteNetLib::NatPunchModule::*)(::LiteNetLib::NatPunchModule_NatPunchPacket*, ::System::Net::IPEndPoint*)>(
    &::LiteNetLib::NatPunchModule::OnNatPunch)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x589f484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule*>(),
                                                             { "OnNatPunch", {}, { ::i2c::type_of<::LiteNetLib::NatPunchModule_NatPunchPacket*>(), ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
    return ___internal_method;
  }
};
constexpr ::LiteNetLib::NetSocket*& LiteNetLib::NatPunchModule::__cordl_internal_get__socket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____socket;
}
constexpr ::LiteNetLib::NetSocket* const& LiteNetLib::NatPunchModule::__cordl_internal_get__socket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____socket;
}
constexpr void LiteNetLib::NatPunchModule::__cordl_internal_set__socket(::LiteNetLib::NetSocket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____socket = value;
}
constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NatPunchModule_RequestEventData>*& LiteNetLib::NatPunchModule::__cordl_internal_get__requestEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestEvents;
}
constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NatPunchModule_RequestEventData>* const& LiteNetLib::NatPunchModule::__cordl_internal_get__requestEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestEvents;
}
constexpr void LiteNetLib::NatPunchModule::__cordl_internal_set__requestEvents(::System::Collections::Generic::Queue_1<::LiteNetLib::NatPunchModule_RequestEventData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requestEvents = value;
}
constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NatPunchModule_SuccessEventData>*& LiteNetLib::NatPunchModule::__cordl_internal_get__successEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____successEvents;
}
constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NatPunchModule_SuccessEventData>* const& LiteNetLib::NatPunchModule::__cordl_internal_get__successEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____successEvents;
}
constexpr void LiteNetLib::NatPunchModule::__cordl_internal_set__successEvents(::System::Collections::Generic::Queue_1<::LiteNetLib::NatPunchModule_SuccessEventData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____successEvents = value;
}
constexpr ::LiteNetLib::Utils::NetDataReader*& LiteNetLib::NatPunchModule::__cordl_internal_get__cacheReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheReader;
}
constexpr ::LiteNetLib::Utils::NetDataReader* const& LiteNetLib::NatPunchModule::__cordl_internal_get__cacheReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheReader;
}
constexpr void LiteNetLib::NatPunchModule::__cordl_internal_set__cacheReader(::LiteNetLib::Utils::NetDataReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cacheReader = value;
}
constexpr ::LiteNetLib::Utils::NetDataWriter*& LiteNetLib::NatPunchModule::__cordl_internal_get__cacheWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheWriter;
}
constexpr ::LiteNetLib::Utils::NetDataWriter* const& LiteNetLib::NatPunchModule::__cordl_internal_get__cacheWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cacheWriter;
}
constexpr void LiteNetLib::NatPunchModule::__cordl_internal_set__cacheWriter(::LiteNetLib::Utils::NetDataWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cacheWriter = value;
}
constexpr ::LiteNetLib::Utils::NetPacketProcessor*& LiteNetLib::NatPunchModule::__cordl_internal_get__netPacketProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netPacketProcessor;
}
constexpr ::LiteNetLib::Utils::NetPacketProcessor* const& LiteNetLib::NatPunchModule::__cordl_internal_get__netPacketProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____netPacketProcessor;
}
constexpr void LiteNetLib::NatPunchModule::__cordl_internal_set__netPacketProcessor(::LiteNetLib::Utils::NetPacketProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____netPacketProcessor = value;
}
constexpr ::LiteNetLib::INatPunchListener*& LiteNetLib::NatPunchModule::__cordl_internal_get__natPunchListener() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____natPunchListener;
}
constexpr ::LiteNetLib::INatPunchListener* const& LiteNetLib::NatPunchModule::__cordl_internal_get__natPunchListener() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____natPunchListener;
}
constexpr void LiteNetLib::NatPunchModule::__cordl_internal_set__natPunchListener(::LiteNetLib::INatPunchListener* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____natPunchListener = value;
}
inline void LiteNetLib::NatPunchModule::_ctor(::LiteNetLib::NetSocket* socket) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule*>(), { ".ctor", {}, { ::i2c::type_of<::LiteNetLib::NetSocket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, socket);
}
inline void LiteNetLib::NatPunchModule::ProcessMessage(::System::Net::IPEndPoint* senderEndPoint, ::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule*>(), { "ProcessMessage", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::LiteNetLib::NetPacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, senderEndPoint, packet);
}
inline void LiteNetLib::NatPunchModule::Init(::LiteNetLib::INatPunchListener* listener) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule*>(), { "Init", {}, { ::i2c::type_of<::LiteNetLib::INatPunchListener*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, listener);
}
template <typename T> inline void LiteNetLib::NatPunchModule::Send(T packet, ::System::Net::IPEndPoint* target) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule*>(), { "Send", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, packet, target);
}
inline void LiteNetLib::NatPunchModule::NatIntroduce(::System::Net::IPEndPoint* hostInternal, ::System::Net::IPEndPoint* hostExternal, ::System::Net::IPEndPoint* clientInternal,
                                                     ::System::Net::IPEndPoint* clientExternal, ::StringW additionalInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule*>(),
                                                           { "NatIntroduce",
                                                             {},
                                                             { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::System::Net::IPEndPoint*>(),
                                                               ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hostInternal, hostExternal, clientInternal, clientExternal, additionalInfo);
}
inline void LiteNetLib::NatPunchModule::PollEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule*>(), { "PollEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void LiteNetLib::NatPunchModule::SendNatIntroduceRequest(::StringW host, int32_t port, ::StringW additionalInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule*>(),
                                                           { "SendNatIntroduceRequest", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, host, port, additionalInfo);
}
inline void LiteNetLib::NatPunchModule::SendNatIntroduceRequest(::System::Net::IPEndPoint* masterServerEndPoint, ::StringW additionalInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule*>(), { "SendNatIntroduceRequest", {}, { ::i2c::type_of<::System::Net::IPEndPoint*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, masterServerEndPoint, additionalInfo);
}
inline void LiteNetLib::NatPunchModule::OnNatIntroductionRequest(::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket* req, ::System::Net::IPEndPoint* senderEndPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule*>(),
                          { "OnNatIntroductionRequest", {}, { ::i2c::type_of<::LiteNetLib::NatPunchModule_NatIntroduceRequestPacket*>(), ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, req, senderEndPoint);
}
inline void LiteNetLib::NatPunchModule::OnNatIntroductionResponse(::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket* req) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule*>(), { "OnNatIntroductionResponse", {}, { ::i2c::type_of<::LiteNetLib::NatPunchModule_NatIntroduceResponsePacket*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, req);
}
inline void LiteNetLib::NatPunchModule::OnNatPunch(::LiteNetLib::NatPunchModule_NatPunchPacket* req, ::System::Net::IPEndPoint* senderEndPoint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::LiteNetLib::NatPunchModule*>(),
                                                           { "OnNatPunch", {}, { ::i2c::type_of<::LiteNetLib::NatPunchModule_NatPunchPacket*>(), ::i2c::type_of<::System::Net::IPEndPoint*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, req, senderEndPoint);
}
inline ::LiteNetLib::NatPunchModule* LiteNetLib::NatPunchModule::New_ctor(::LiteNetLib::NetSocket* socket) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::LiteNetLib::NatPunchModule*>(socket));
}
// Ctor Parameters []
constexpr ::LiteNetLib::NatPunchModule::NatPunchModule() {}
