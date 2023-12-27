#pragma once
#include "LiteNetLib/zzzz__NatAddressType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__NatPunchModule_def.hpp"
#include "LiteNetLib/zzzz__NatPunchModule_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetPacketProcessor_def.hpp"
#include "LiteNetLib/zzzz__INatPunchListener_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "LiteNetLib/zzzz__NetSocket_def.hpp"
#include "LiteNetLib/zzzz__NatAddressType_def.hpp"
// Ctor Parameters [CppParam { name: "LocalEndPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "RemoteEndPoint", ty:
// "::System::Net::IPEndPoint*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Token", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::LiteNetLib::__NatPunchModule__RequestEventData::__NatPunchModule__RequestEventData(::System::Net::IPEndPoint* LocalEndPoint, ::System::Net::IPEndPoint* RemoteEndPoint,
                                                                                               ::StringW Token) noexcept {
  this->LocalEndPoint = LocalEndPoint;
  this->RemoteEndPoint = RemoteEndPoint;
  this->Token = Token;
}
// Ctor Parameters []
constexpr ::LiteNetLib::__NatPunchModule__RequestEventData::__NatPunchModule__RequestEventData() {}
// Ctor Parameters [CppParam { name: "TargetEndPoint", ty: "::System::Net::IPEndPoint*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "Type", ty: "::LiteNetLib::NatAddressType",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "Token", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }]
constexpr ::LiteNetLib::__NatPunchModule__SuccessEventData::__NatPunchModule__SuccessEventData(::System::Net::IPEndPoint* TargetEndPoint, ::LiteNetLib::NatAddressType Type, ::StringW Token) noexcept {
  this->TargetEndPoint = TargetEndPoint;
  this->Type = Type;
  this->Token = Token;
}
// Ctor Parameters []
constexpr ::LiteNetLib::__NatPunchModule__SuccessEventData::__NatPunchModule__SuccessEventData() {}
//  Writing Method size for method: ::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket.get_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPEndPoint* (::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket::*)()>(
    &::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket::get_Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fbda8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket*>::get(), "get_Internal",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket.set_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket::*)(::System::Net::IPEndPoint*)>(
    &::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket::set_Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fbdb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket*>::get(), "set_Internal",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket.get_Token
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket::*)()>(
    &::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket::get_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fbdb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket*>::get(), "get_Token",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket.set_Token
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket::*)(::StringW)>(
    &::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket::set_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fbdc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket*>::get(), "set_Token",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket::*)()>(
    &::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fb654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Net::IPEndPoint*& LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket::__get__Internal_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Internal_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> const& LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket::__get__Internal_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Internal_k__BackingField;
}
constexpr void LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket::__set__Internal_k__BackingField(::System::Net::IPEndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Internal_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket::__get__Token_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Token_k__BackingField;
}
constexpr ::StringW const& LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket::__get__Token_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Token_k__BackingField;
}
constexpr void LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket::__set__Token_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Token_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::IPEndPoint* LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket::get_Internal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket*>::get(),
                                                                             "get_Internal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*, false>(this, ___internal_method);
}
inline void LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket::set_Internal(::System::Net::IPEndPoint* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket*>::get(), "set_Internal",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket::get_Token() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket*>::get(),
                                                                             "get_Token", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket::set_Token(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket*>::get(), "set_Token",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket* LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket*>());
}
inline void LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket::__NatPunchModule__NatIntroduceRequestPacket() {}
//  Writing Method size for method: ::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket.get_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPEndPoint* (::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::*)()>(
    &::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::get_Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fbdc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket*>::get(), "get_Internal",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket.set_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::*)(::System::Net::IPEndPoint*)>(
    &::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::set_Internal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fbdd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket*>::get(), "set_Internal",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket.get_External
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Net::IPEndPoint* (::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::*)()>(
    &::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::get_External)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fbdd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket*>::get(), "get_External",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket.set_External
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::*)(::System::Net::IPEndPoint*)>(
    &::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::set_External)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fbde0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket*>::get(), "set_External",
                                    std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket.get_Token
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::*)()>(
    &::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::get_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fbde8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket*>::get(), "get_Token",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket.set_Token
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::*)(::StringW)>(
    &::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::set_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fbdf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket*>::get(), "set_Token",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::*)()>(
    &::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fae7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Net::IPEndPoint*& LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::__get__Internal_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Internal_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> const& LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::__get__Internal_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Internal_k__BackingField;
}
constexpr void LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::__set__Internal_k__BackingField(::System::Net::IPEndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Internal_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Net::IPEndPoint*& LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::__get__External_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____External_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> const& LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::__get__External_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____External_k__BackingField;
}
constexpr void LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::__set__External_k__BackingField(::System::Net::IPEndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____External_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::__get__Token_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Token_k__BackingField;
}
constexpr ::StringW const& LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::__get__Token_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Token_k__BackingField;
}
constexpr void LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::__set__Token_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Token_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Net::IPEndPoint* LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::get_Internal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket*>::get(),
                                                                             "get_Internal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*, false>(this, ___internal_method);
}
inline void LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::set_Internal(::System::Net::IPEndPoint* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket*>::get(), "set_Internal",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Net::IPEndPoint* LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::get_External() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket*>::get(),
                                                                             "get_External", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IPEndPoint*, false>(this, ___internal_method);
}
inline void LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::set_External(::System::Net::IPEndPoint* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket*>::get(), "set_External",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::get_Token() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket*>::get(),
                                                                             "get_Token", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::set_Token(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket*>::get(), "set_Token",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket* LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket*>());
}
inline void LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket::__NatPunchModule__NatIntroduceResponsePacket() {}
//  Writing Method size for method: ::LiteNetLib::__NatPunchModule__NatPunchPacket.get_Token
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::LiteNetLib::__NatPunchModule__NatPunchPacket::*)()>(
    &::LiteNetLib::__NatPunchModule__NatPunchPacket::get_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fbdf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatPunchPacket*>::get(),
                                                                               "get_Token", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__NatPunchModule__NatPunchPacket.set_Token
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__NatPunchModule__NatPunchPacket::*)(::StringW)>(
    &::LiteNetLib::__NatPunchModule__NatPunchPacket::set_Token)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fbe00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatPunchPacket*>::get(), "set_Token",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__NatPunchModule__NatPunchPacket.get_IsExternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::__NatPunchModule__NatPunchPacket::*)()>(
    &::LiteNetLib::__NatPunchModule__NatPunchPacket::get_IsExternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fbe08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatPunchPacket*>::get(),
                                                                               "get_IsExternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__NatPunchModule__NatPunchPacket.set_IsExternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__NatPunchModule__NatPunchPacket::*)(bool)>(
    &::LiteNetLib::__NatPunchModule__NatPunchPacket::set_IsExternal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x21fbe10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatPunchPacket*>::get(), "set_IsExternal",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::__NatPunchModule__NatPunchPacket._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::__NatPunchModule__NatPunchPacket::*)()>(&::LiteNetLib::__NatPunchModule__NatPunchPacket::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fb8d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatPunchPacket*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& LiteNetLib::__NatPunchModule__NatPunchPacket::__get__Token_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Token_k__BackingField;
}
constexpr ::StringW const& LiteNetLib::__NatPunchModule__NatPunchPacket::__get__Token_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Token_k__BackingField;
}
constexpr void LiteNetLib::__NatPunchModule__NatPunchPacket::__set__Token_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Token_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& LiteNetLib::__NatPunchModule__NatPunchPacket::__get__IsExternal_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____IsExternal_k__BackingField;
}
constexpr bool const& LiteNetLib::__NatPunchModule__NatPunchPacket::__get__IsExternal_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____IsExternal_k__BackingField;
}
constexpr void LiteNetLib::__NatPunchModule__NatPunchPacket::__set__IsExternal_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____IsExternal_k__BackingField = value;
}
inline ::StringW LiteNetLib::__NatPunchModule__NatPunchPacket::get_Token() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatPunchPacket*>::get(),
                                                                             "get_Token", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void LiteNetLib::__NatPunchModule__NatPunchPacket::set_Token(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatPunchPacket*>::get(), "set_Token", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool LiteNetLib::__NatPunchModule__NatPunchPacket::get_IsExternal() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatPunchPacket*>::get(),
                                                                             "get_IsExternal", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void LiteNetLib::__NatPunchModule__NatPunchPacket::set_IsExternal(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatPunchPacket*>::get(), "set_IsExternal",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::LiteNetLib::__NatPunchModule__NatPunchPacket* LiteNetLib::__NatPunchModule__NatPunchPacket::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::__NatPunchModule__NatPunchPacket*>());
}
inline void LiteNetLib::__NatPunchModule__NatPunchPacket::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::__NatPunchModule__NatPunchPacket*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::LiteNetLib::__NatPunchModule__NatPunchPacket::__NatPunchModule__NatPunchPacket() {}
//  Writing Method size for method: ::LiteNetLib::NatPunchModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NatPunchModule::*)(::LiteNetLib::NetSocket*)>(&::LiteNetLib::NatPunchModule::_ctor)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x21fa9b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NatPunchModule*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetSocket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule.ProcessMessage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NatPunchModule::*)(::System::Net::IPEndPoint*, ::LiteNetLib::NetPacket*)>(
    &::LiteNetLib::NatPunchModule::ProcessMessage)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x21fac8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NatPunchModule*>::get(), "ProcessMessage", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NatPunchModule::*)(::LiteNetLib::INatPunchListener*)>(&::LiteNetLib::NatPunchModule::Init)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21fada8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NatPunchModule*>::get(), "Init", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::INatPunchListener*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule.NatIntroduce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NatPunchModule::*)(
    ::System::Net::IPEndPoint*, ::System::Net::IPEndPoint*, ::System::Net::IPEndPoint*, ::System::Net::IPEndPoint*, ::StringW)>(&::LiteNetLib::NatPunchModule::NatIntroduce)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x21fadb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NatPunchModule*>::get(), "NatIntroduce", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule.PollEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NatPunchModule::*)()>(&::LiteNetLib::NatPunchModule::PollEvents)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x21fae84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NatPunchModule*>::get(), "PollEvents",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule.SendNatIntroduceRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NatPunchModule::*)(::StringW, int32_t, ::StringW)>(
    &::LiteNetLib::NatPunchModule::SendNatIntroduceRequest)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x21fb1f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NatPunchModule*>::get(), "SendNatIntroduceRequest", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule.SendNatIntroduceRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NatPunchModule::*)(::System::Net::IPEndPoint*, ::StringW)>(
    &::LiteNetLib::NatPunchModule::SendNatIntroduceRequest)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x21fb31c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NatPunchModule*>::get(), "SendNatIntroduceRequest", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule.OnNatIntroductionRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NatPunchModule::*)(
    ::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket*, ::System::Net::IPEndPoint*)>(&::LiteNetLib::NatPunchModule::OnNatIntroductionRequest)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x21fb65c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NatPunchModule*>::get(), "OnNatIntroductionRequest", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule.OnNatIntroductionResponse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NatPunchModule::*)(::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket*)>(
    &::LiteNetLib::NatPunchModule::OnNatIntroductionResponse)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x21fb77c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NatPunchModule*>::get(), "OnNatIntroductionResponse", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::NatPunchModule.OnNatPunch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::NatPunchModule::*)(::LiteNetLib::__NatPunchModule__NatPunchPacket*, ::System::Net::IPEndPoint*)>(
    &::LiteNetLib::NatPunchModule::OnNatPunch)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x21fbc58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NatPunchModule*>::get(), "OnNatPunch", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__NatPunchModule__NatPunchPacket*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
    return ___internal_method;
  }
};
constexpr ::LiteNetLib::NetSocket*& LiteNetLib::NatPunchModule::__get__socket() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____socket;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetSocket*> const& LiteNetLib::NatPunchModule::__get__socket() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____socket;
}
constexpr void LiteNetLib::NatPunchModule::__set__socket(::LiteNetLib::NetSocket* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____socket)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__RequestEventData>*& LiteNetLib::NatPunchModule::__get__requestEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____requestEvents;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__RequestEventData>*> const&
LiteNetLib::NatPunchModule::__get__requestEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____requestEvents;
}
constexpr void LiteNetLib::NatPunchModule::__set__requestEvents(::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__RequestEventData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____requestEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__SuccessEventData>*& LiteNetLib::NatPunchModule::__get__successEvents() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____successEvents;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__SuccessEventData>*> const&
LiteNetLib::NatPunchModule::__get__successEvents() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____successEvents;
}
constexpr void LiteNetLib::NatPunchModule::__set__successEvents(::System::Collections::Generic::Queue_1<::LiteNetLib::__NatPunchModule__SuccessEventData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____successEvents)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::Utils::NetDataReader*& LiteNetLib::NatPunchModule::__get__cacheReader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cacheReader;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataReader*> const& LiteNetLib::NatPunchModule::__get__cacheReader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cacheReader;
}
constexpr void LiteNetLib::NatPunchModule::__set__cacheReader(::LiteNetLib::Utils::NetDataReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cacheReader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::Utils::NetDataWriter*& LiteNetLib::NatPunchModule::__get__cacheWriter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cacheWriter;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataWriter*> const& LiteNetLib::NatPunchModule::__get__cacheWriter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____cacheWriter;
}
constexpr void LiteNetLib::NatPunchModule::__set__cacheWriter(::LiteNetLib::Utils::NetDataWriter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cacheWriter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::Utils::NetPacketProcessor*& LiteNetLib::NatPunchModule::__get__netPacketProcessor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____netPacketProcessor;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetPacketProcessor*> const& LiteNetLib::NatPunchModule::__get__netPacketProcessor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____netPacketProcessor;
}
constexpr void LiteNetLib::NatPunchModule::__set__netPacketProcessor(::LiteNetLib::Utils::NetPacketProcessor* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____netPacketProcessor)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::INatPunchListener*& LiteNetLib::NatPunchModule::__get__natPunchListener() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____natPunchListener;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::INatPunchListener*> const& LiteNetLib::NatPunchModule::__get__natPunchListener() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____natPunchListener;
}
constexpr void LiteNetLib::NatPunchModule::__set__natPunchListener(::LiteNetLib::INatPunchListener* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____natPunchListener)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::LiteNetLib::NatPunchModule* LiteNetLib::NatPunchModule::New_ctor(::LiteNetLib::NetSocket* socket) {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::NatPunchModule*>(socket));
}
inline void LiteNetLib::NatPunchModule::_ctor(::LiteNetLib::NetSocket* socket) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NatPunchModule*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetSocket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, socket);
}
inline void LiteNetLib::NatPunchModule::ProcessMessage(::System::Net::IPEndPoint* senderEndPoint, ::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NatPunchModule*>::get(), "ProcessMessage", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, senderEndPoint, packet);
}
inline void LiteNetLib::NatPunchModule::Init(::LiteNetLib::INatPunchListener* listener) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NatPunchModule*>::get(), "Init", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::INatPunchListener*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, listener);
}
template <typename T> inline void LiteNetLib::NatPunchModule::Send(T packet, ::System::Net::IPEndPoint* target) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NatPunchModule*>::get(), "Send",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet, target);
}
inline void LiteNetLib::NatPunchModule::NatIntroduce(::System::Net::IPEndPoint* hostInternal, ::System::Net::IPEndPoint* hostExternal, ::System::Net::IPEndPoint* clientInternal,
                                                     ::System::Net::IPEndPoint* clientExternal, ::StringW additionalInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NatPunchModule*>::get(), "NatIntroduce", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hostInternal, hostExternal, clientInternal, clientExternal, additionalInfo);
}
inline void LiteNetLib::NatPunchModule::PollEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NatPunchModule*>::get(), "PollEvents",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::NatPunchModule::SendNatIntroduceRequest(::StringW host, int32_t port, ::StringW additionalInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NatPunchModule*>::get(), "SendNatIntroduceRequest", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, host, port, additionalInfo);
}
inline void LiteNetLib::NatPunchModule::SendNatIntroduceRequest(::System::Net::IPEndPoint* masterServerEndPoint, ::StringW additionalInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NatPunchModule*>::get(), "SendNatIntroduceRequest", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, masterServerEndPoint, additionalInfo);
}
inline void LiteNetLib::NatPunchModule::OnNatIntroductionRequest(::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket* req, ::System::Net::IPEndPoint* senderEndPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NatPunchModule*>::get(), "OnNatIntroductionRequest", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__NatPunchModule__NatIntroduceRequestPacket*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, req, senderEndPoint);
}
inline void LiteNetLib::NatPunchModule::OnNatIntroductionResponse(::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket* req) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NatPunchModule*>::get(), "OnNatIntroductionResponse", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__NatPunchModule__NatIntroduceResponsePacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, req);
}
inline void LiteNetLib::NatPunchModule::OnNatPunch(::LiteNetLib::__NatPunchModule__NatPunchPacket* req, ::System::Net::IPEndPoint* senderEndPoint) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::NatPunchModule*>::get(), "OnNatPunch", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::__NatPunchModule__NatPunchPacket*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, req, senderEndPoint);
}
// Ctor Parameters []
constexpr ::LiteNetLib::NatPunchModule::NatPunchModule() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
