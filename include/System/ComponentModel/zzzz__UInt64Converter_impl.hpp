#pragma once
#include "System/ComponentModel/zzzz__BaseNumberConverter_impl.hpp"
#include "System/ComponentModel/zzzz__UInt64Converter_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::UInt64Converter.get_TargetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::ComponentModel::UInt64Converter::*)()>(
    &::System::ComponentModel::UInt64Converter::get_TargetType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x291978c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::UInt64Converter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::UInt64Converter*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::UInt64Converter.FromString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::ComponentModel::UInt64Converter::*)(::StringW, int32_t)>(
    &::System::ComponentModel::UInt64Converter::FromString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x29197f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::UInt64Converter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::UInt64Converter*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::UInt64Converter.FromString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::ComponentModel::UInt64Converter::*)(::StringW, ::System::Globalization::NumberFormatInfo*)>(&::System::ComponentModel::UInt64Converter::FromString)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x291988c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::UInt64Converter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::UInt64Converter*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::UInt64Converter.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::ComponentModel::UInt64Converter::*)(::System::Object*, ::System::Globalization::NumberFormatInfo*)>(&::System::ComponentModel::UInt64Converter::ToString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2919900;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::UInt64Converter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::UInt64Converter*>::get(), 20));
    return ___internal_method;
  }
};
inline ::System::Type* System::ComponentModel::UInt64Converter::get_TargetType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::UInt64Converter*>::get(),
                                                                             "get_TargetType", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::UInt64Converter::FromString(::StringW value, int32_t radix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::UInt64Converter*>::get(), "FromString", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, value, radix);
}
inline ::System::Object* System::ComponentModel::UInt64Converter::FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::UInt64Converter*>::get(), "FromString", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, value, formatInfo);
}
inline ::StringW System::ComponentModel::UInt64Converter::ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::UInt64Converter*>::get(), "ToString", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::NumberFormatInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value, formatInfo);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::UInt64Converter::UInt64Converter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
