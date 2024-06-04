#pragma once
// IWYU pragma private; include "System/ComponentModel/DoubleConverter.hpp"
#include "System/ComponentModel/zzzz__BaseNumberConverter_impl.hpp"
#include "System/ComponentModel/zzzz__DoubleConverter_def.hpp"
#include "System/Globalization/zzzz__NumberFormatInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::DoubleConverter.get_AllowHex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::DoubleConverter::*)()>(&::System::ComponentModel::DoubleConverter::get_AllowHex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f5dce8;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DoubleConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DoubleConverter*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DoubleConverter.get_TargetType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::ComponentModel::DoubleConverter::*)()>(
    &::System::ComponentModel::DoubleConverter::get_TargetType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2f5dcf0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DoubleConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DoubleConverter*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DoubleConverter.FromString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::System::ComponentModel::DoubleConverter::*)(::StringW, int32_t)>(
    &::System::ComponentModel::DoubleConverter::FromString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2f5dd5c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DoubleConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DoubleConverter*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DoubleConverter.FromString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::ComponentModel::DoubleConverter::*)(::StringW, ::System::Globalization::NumberFormatInfo*)>(&::System::ComponentModel::DoubleConverter::FromString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2f5de1c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DoubleConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DoubleConverter*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DoubleConverter.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::StringW (::System::ComponentModel::DoubleConverter::*)(::System::Object*, ::System::Globalization::NumberFormatInfo*)>(&::System::ComponentModel::DoubleConverter::ToString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x2f5de8c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DoubleConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DoubleConverter*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DoubleConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::DoubleConverter::*)()>(&::System::ComponentModel::DoubleConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2f5df3c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DoubleConverter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool System::ComponentModel::DoubleConverter::get_AllowHex() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DoubleConverter*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Type* System::ComponentModel::DoubleConverter::get_TargetType() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DoubleConverter*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Object* System::ComponentModel::DoubleConverter::FromString(::StringW value, int32_t radix) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DoubleConverter*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, value, radix);
}
inline ::System::Object* System::ComponentModel::DoubleConverter::FromString(::StringW value, ::System::Globalization::NumberFormatInfo* formatInfo) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DoubleConverter*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, value, formatInfo);
}
inline ::StringW System::ComponentModel::DoubleConverter::ToString(::System::Object* value, ::System::Globalization::NumberFormatInfo* formatInfo) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DoubleConverter*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value, formatInfo);
}
inline ::System::ComponentModel::DoubleConverter* System::ComponentModel::DoubleConverter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::DoubleConverter*>());
}
inline void System::ComponentModel::DoubleConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DoubleConverter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::DoubleConverter::DoubleConverter() {}
