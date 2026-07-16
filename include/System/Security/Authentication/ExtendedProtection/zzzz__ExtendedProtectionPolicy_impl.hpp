#pragma once
// IWYU pragma private; include "System/Security/Authentication/ExtendedProtection/ExtendedProtectionPolicy.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__ExtendedProtectionPolicy_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__PolicyEnforcement_def.hpp"
//  Writing Method size for method: ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::*)(
    ::System::Security::Authentication::ExtendedProtection::PolicyEnforcement)>(&::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x639b04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Security::Authentication::ExtendedProtection::PolicyEnforcement>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::*)(::System::Runtime::Serialization::SerializationInfo*,
                                                                                                                                                  ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x639b050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::*)()>(
    &::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x639b088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*>(),
                                                                                          { ::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::*)(::System::Runtime::Serialization::SerializationInfo*,
                                                                                                                                                  ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x639b090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*>(),
                                                { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
inline void System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::_ctor(::System::Security::Authentication::ExtendedProtection::PolicyEnforcement policyEnforcement) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Security::Authentication::ExtendedProtection::PolicyEnforcement>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, policyEnforcement);
}
inline void System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                  ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::StringW System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void
System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                                                                         ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*>(),
                                              { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*
System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::New_ctor(::System::Security::Authentication::ExtendedProtection::PolicyEnforcement policyEnforcement) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*>(policyEnforcement));
}
inline ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*
System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::New_ctor(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                         ::System::Runtime::Serialization::StreamingContext context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*>(info, context));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable*
System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy::ExtendedProtectionPolicy() {}
