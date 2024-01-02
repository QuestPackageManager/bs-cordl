#pragma once
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
#include "System/Security/Authentication/ExtendedProtection/zzzz__ExtendedProtectionPolicyTypeConverter_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter.CanConvertTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::*)(
    ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(&::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::CanConvertTo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x297437c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter.ConvertTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*,
                                                                                                      ::System::Object*, ::System::Type*)>(
    &::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x29743bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::*)()>(
    &::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29743fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter*>::get(),
                                    ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline bool System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context,
                                                                                                                      ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context, destinationType);
}
inline ::System::Object* System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context,
                                                                                                                                ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                                                                                                                ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context, culture, value, destinationType);
}
inline ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter*
System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter*>());
}
inline void System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter*>::get(),
                                  ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicyTypeConverter::ExtendedProtectionPolicyTypeConverter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
