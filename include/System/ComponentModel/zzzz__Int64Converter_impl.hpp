#pragma once
#include "System/ComponentModel/zzzz__BaseNumberConverter_impl.hpp"
#include "System/ComponentModel/zzzz__Int64Converter_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::Int64Converter.get_TargetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::ComponentModel::Int64Converter::*)()>(
    &::System::ComponentModel::Int64Converter::get_TargetType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x29112a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Int64Converter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Int64Converter*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Int64Converter.FromString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::ComponentModel::Int64Converter::*)(::StringW, int32_t)>(
    &::System::ComponentModel::Int64Converter::FromString)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x291130c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Int64Converter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Int64Converter*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Int64Converter.FromString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::ComponentModel::Int64Converter::*)(::StringW, ::System::Globalization::NumberFormatInfo*)>(&::System::ComponentModel::Int64Converter::FromString)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x29113a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Int64Converter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Int64Converter*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Int64Converter.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::ComponentModel::Int64Converter::*)(::System::Object*, ::System::Globalization::NumberFormatInfo*)>(&::System::ComponentModel::Int64Converter::ToString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2911414;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Int64Converter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Int64Converter*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::Int64Converter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::Int64Converter::*)()>(&::System::ComponentModel::Int64Converter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29114c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Int64Converter*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline ::System::Type* System::ComponentModel::Int64Converter::get_TargetType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Int64Converter*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::Int64Converter::FromString(::StringW value, int32_t radix) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Int64Converter*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, value, radix);
}
inline ::System::Object* System::ComponentModel::Int64Converter::FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Int64Converter*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, value, formatInfo);
}
inline ::StringW System::ComponentModel::Int64Converter::ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Int64Converter*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value, formatInfo);
}
inline ::System::ComponentModel::Int64Converter* System::ComponentModel::Int64Converter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::Int64Converter*>());
}
inline void System::ComponentModel::Int64Converter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::Int64Converter*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::Int64Converter::Int64Converter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
