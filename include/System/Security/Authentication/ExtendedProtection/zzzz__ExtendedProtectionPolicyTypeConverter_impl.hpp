#pragma once
// IWYU pragma private; include "System/Security/Authentication/ExtendedProtection/ExtendedProtectionPolicyTypeConverter.hpp"
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__ExtendedProtectionPolicyTypeConverter_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter.CanConvertTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::*)(
    ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(&::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::CanConvertTo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x639b0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter*>(),
                                                            { ::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter.ConvertTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*,
                                                                                                      ::System::Object*, ::System::Type*)>(
    &::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x639b100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter*>(),
                                                            { ::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::*)()>(
    &::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x639b138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context,
                                                                                                                      ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, context, destinationType);
}
inline ::System::Object* System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context,
                                                                                                                                ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                                                                                                                ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, context, culture, value, destinationType);
}
inline void System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter*
System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter*>());
}
// Ctor Parameters []
constexpr ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::ExtendedProtectionPolicyTypeConverter() {}
