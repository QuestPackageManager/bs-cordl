#pragma once
// IWYU pragma private; include "System\Security\Principal\WindowsIdentity.hpp"
#include "System/Security/Claims/zzzz__ClaimsIdentity_impl.hpp"
#include "System/Security/Principal/zzzz__WindowsAccountType_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/Security/Principal/zzzz__WindowsIdentity_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDeserializationCallback_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Security/Claims/zzzz__ClaimsIdentity_def.hpp"
#include "System/Security/Principal/zzzz__IIdentity_def.hpp"
#include "System/Security/Principal/zzzz__SecurityIdentifier_def.hpp"
#include "System/Security/Principal/zzzz__WindowsAccountType_def.hpp"
#include "System/Security/Principal/zzzz__WindowsImpersonationContext_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::WindowsIdentity::*)(::System::IntPtr, ::StringW, ::System::Security::Principal::WindowsAccountType, bool)>(
    &::System::Security::Principal::WindowsIdentity::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5b1736c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(),
            { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Principal::WindowsAccountType>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::WindowsIdentity::*)(
    ::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(&::System::Security::Principal::WindowsIdentity::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b17470;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::WindowsIdentity::*)(::System::Security::Claims::ClaimsIdentity*, ::System::IntPtr)>(
    &::System::Security::Principal::WindowsIdentity::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5b174ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Security::Claims::ClaimsIdentity*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::WindowsIdentity::*)()>(&::System::Security::Principal::WindowsIdentity::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b174e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.GetCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Principal::WindowsIdentity* (*)()>(&::System::Security::Principal::WindowsIdentity::GetCurrent)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5b174f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(), { "GetCurrent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.Impersonate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Principal::WindowsImpersonationContext* (::System::Security::Principal::WindowsIdentity::*)()>(
    &::System::Security::Principal::WindowsIdentity::Impersonate)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5b1756c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(), { ::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.get_AuthenticationType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Principal::WindowsIdentity::*)()>(&::System::Security::Principal::WindowsIdentity::get_AuthenticationType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b175c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(), { "get_AuthenticationType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Principal::WindowsIdentity::*)()>(&::System::Security::Principal::WindowsIdentity::get_Name)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5b175cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(), { ::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.get_User
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Principal::SecurityIdentifier* (::System::Security::Principal::WindowsIdentity::*)()>(
    &::System::Security::Principal::WindowsIdentity::get_User)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5b17640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(), { "get_User", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::WindowsIdentity::*)(::System::Object*)>(
    &::System::Security::Principal::WindowsIdentity::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x5b17678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(),
                                                             { "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::System::Security::Principal::WindowsIdentity::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
        &::System::Security::Principal::WindowsIdentity::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5b17938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(),
                                                { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.CloneAsBase
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Security::Claims::ClaimsIdentity* (::System::Security::Principal::WindowsIdentity::*)()>(
    &::System::Security::Principal::WindowsIdentity::CloneAsBase)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b17a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(), { "CloneAsBase", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.GetTokenInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::System::Security::Principal::WindowsIdentity::*)()>(&::System::Security::Principal::WindowsIdentity::GetTokenInternal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b17be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(), { "GetTokenInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.SetToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Principal::WindowsIdentity::*)(::System::IntPtr)>(&::System::Security::Principal::WindowsIdentity::SetToken)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5b173d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(), { "SetToken", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.GetCurrentToken
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::System::Security::Principal::WindowsIdentity::GetCurrentToken)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b17564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(), { "GetCurrentToken", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Principal::WindowsIdentity.GetTokenName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::IntPtr)>(&::System::Security::Principal::WindowsIdentity::GetTokenName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b17634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(), { "GetTokenName", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& System::Security::Principal::WindowsIdentity::__cordl_internal_get__token() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____token;
}
constexpr ::System::IntPtr const& System::Security::Principal::WindowsIdentity::__cordl_internal_get__token() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____token;
}
constexpr void System::Security::Principal::WindowsIdentity::__cordl_internal_set__token(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____token = value;
}
constexpr ::StringW& System::Security::Principal::WindowsIdentity::__cordl_internal_get__type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr ::StringW const& System::Security::Principal::WindowsIdentity::__cordl_internal_get__type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____type;
}
constexpr void System::Security::Principal::WindowsIdentity::__cordl_internal_set__type(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____type = value;
}
constexpr ::System::Security::Principal::WindowsAccountType& System::Security::Principal::WindowsIdentity::__cordl_internal_get__account() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____account;
}
constexpr ::System::Security::Principal::WindowsAccountType const& System::Security::Principal::WindowsIdentity::__cordl_internal_get__account() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____account;
}
constexpr void System::Security::Principal::WindowsIdentity::__cordl_internal_set__account(::System::Security::Principal::WindowsAccountType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____account = value;
}
constexpr bool& System::Security::Principal::WindowsIdentity::__cordl_internal_get__authenticated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____authenticated;
}
constexpr bool const& System::Security::Principal::WindowsIdentity::__cordl_internal_get__authenticated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____authenticated;
}
constexpr void System::Security::Principal::WindowsIdentity::__cordl_internal_set__authenticated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____authenticated = value;
}
constexpr ::StringW& System::Security::Principal::WindowsIdentity::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& System::Security::Principal::WindowsIdentity::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void System::Security::Principal::WindowsIdentity::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____name = value;
}
constexpr ::System::Runtime::Serialization::SerializationInfo*& System::Security::Principal::WindowsIdentity::__cordl_internal_get__info() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____info;
}
constexpr ::System::Runtime::Serialization::SerializationInfo* const& System::Security::Principal::WindowsIdentity::__cordl_internal_get__info() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____info;
}
constexpr void System::Security::Principal::WindowsIdentity::__cordl_internal_set__info(::System::Runtime::Serialization::SerializationInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____info = value;
}
inline void System::Security::Principal::WindowsIdentity::setStaticF_invalidWindows(::System::IntPtr value) {
  ::cordl_internals::setStaticField<::System::IntPtr, "invalidWindows", ::System::Security::Principal::WindowsIdentity*>(std::forward<::System::IntPtr>(value));
}
inline ::System::IntPtr System::Security::Principal::WindowsIdentity::getStaticF_invalidWindows() {
  return ::cordl_internals::getStaticField<::System::IntPtr, "invalidWindows", ::System::Security::Principal::WindowsIdentity*>();
}
inline void System::Security::Principal::WindowsIdentity::_ctor(::System::IntPtr userToken, ::StringW type, ::System::Security::Principal::WindowsAccountType acctType, bool isAuthenticated) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(),
          { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Security::Principal::WindowsAccountType>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userToken, type, acctType, isAuthenticated);
}
inline void System::Security::Principal::WindowsIdentity::_ctor(::System::Runtime::Serialization::SerializationInfo* info, ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Security::Principal::WindowsIdentity::_ctor(::System::Security::Claims::ClaimsIdentity* claimsIdentity, ::System::IntPtr userToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::Claims::ClaimsIdentity*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, claimsIdentity, userToken);
}
inline void System::Security::Principal::WindowsIdentity::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Principal::WindowsIdentity* System::Security::Principal::WindowsIdentity::GetCurrent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(), { "GetCurrent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Principal::WindowsIdentity*>(nullptr, ___internal_method);
}
inline ::System::Security::Principal::WindowsImpersonationContext* System::Security::Principal::WindowsIdentity::Impersonate() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Principal::WindowsImpersonationContext*>(this, ___internal_method);
}
inline ::StringW System::Security::Principal::WindowsIdentity::get_AuthenticationType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(), { "get_AuthenticationType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Security::Principal::WindowsIdentity::get_Name() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Security::Principal::SecurityIdentifier* System::Security::Principal::WindowsIdentity::get_User() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(), { "get_User", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Principal::SecurityIdentifier*>(this, ___internal_method);
}
inline void System::Security::Principal::WindowsIdentity::System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::System::Object* sender) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(),
                                                           { "System.Runtime.Serialization.IDeserializationCallback.OnDeserialization", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sender);
}
inline void System::Security::Principal::WindowsIdentity::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                   ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(),
                                              { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Security::Claims::ClaimsIdentity* System::Security::Principal::WindowsIdentity::CloneAsBase() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(), { "CloneAsBase", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Security::Claims::ClaimsIdentity*>(this, ___internal_method);
}
inline ::System::IntPtr System::Security::Principal::WindowsIdentity::GetTokenInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(), { "GetTokenInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method);
}
inline void System::Security::Principal::WindowsIdentity::SetToken(::System::IntPtr token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(), { "SetToken", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, token);
}
inline ::System::IntPtr System::Security::Principal::WindowsIdentity::GetCurrentToken() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(), { "GetCurrentToken", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::StringW System::Security::Principal::WindowsIdentity::GetTokenName(::System::IntPtr token) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Principal::WindowsIdentity*>(), { "GetTokenName", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, token);
}
inline ::System::Security::Principal::WindowsIdentity* System::Security::Principal::WindowsIdentity::New_ctor(::System::IntPtr userToken, ::StringW type,
                                                                                                              ::System::Security::Principal::WindowsAccountType acctType, bool isAuthenticated) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Principal::WindowsIdentity*>(userToken, type, acctType, isAuthenticated));
}
inline ::System::Security::Principal::WindowsIdentity* System::Security::Principal::WindowsIdentity::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                              ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Principal::WindowsIdentity*>(info, context));
}
inline ::System::Security::Principal::WindowsIdentity* System::Security::Principal::WindowsIdentity::New_ctor(::System::Security::Claims::ClaimsIdentity* claimsIdentity, ::System::IntPtr userToken) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Principal::WindowsIdentity*>(claimsIdentity, userToken));
}
/// @brief Convert operator to "::System::Security::Principal::IIdentity"
constexpr System::Security::Principal::WindowsIdentity::operator ::System::Security::Principal::IIdentity*() noexcept {
  return static_cast<::System::Security::Principal::IIdentity*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Security::Principal::IIdentity"
constexpr ::System::Security::Principal::IIdentity* System::Security::Principal::WindowsIdentity::i___System__Security__Principal__IIdentity() noexcept {
  return static_cast<::System::Security::Principal::IIdentity*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr System::Security::Principal::WindowsIdentity::operator ::System::Runtime::Serialization::IDeserializationCallback*() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::IDeserializationCallback"
constexpr ::System::Runtime::Serialization::IDeserializationCallback* System::Security::Principal::WindowsIdentity::i___System__Runtime__Serialization__IDeserializationCallback() noexcept {
  return static_cast<::System::Runtime::Serialization::IDeserializationCallback*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Security::Principal::WindowsIdentity::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Security::Principal::WindowsIdentity::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Security::Principal::WindowsIdentity::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Security::Principal::WindowsIdentity::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Principal::WindowsIdentity::WindowsIdentity() {}
