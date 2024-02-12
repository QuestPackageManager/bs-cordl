#pragma once
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
#include "System/ComponentModel/zzzz__DateTimeConverter_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::DateTimeConverter.CanConvertFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::DateTimeConverter::*)(
    ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(&::System::ComponentModel::DateTimeConverter::CanConvertFrom)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2911c0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DateTimeConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DateTimeConverter*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DateTimeConverter.CanConvertTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::ComponentModel::DateTimeConverter::*)(
    ::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(&::System::ComponentModel::DateTimeConverter::CanConvertTo)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2911cd4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DateTimeConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DateTimeConverter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DateTimeConverter.ConvertFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::ComponentModel::DateTimeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*)>(
        &::System::ComponentModel::DateTimeConverter::ConvertFrom)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x2911d9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DateTimeConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DateTimeConverter*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DateTimeConverter.ConvertTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::ComponentModel::DateTimeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*)>(
    &::System::ComponentModel::DateTimeConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x29120bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DateTimeConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DateTimeConverter*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::DateTimeConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::DateTimeConverter::*)()>(&::System::ComponentModel::DateTimeConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x29123e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DateTimeConverter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline bool System::ComponentModel::DateTimeConverter::CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DateTimeConverter*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context, sourceType);
}
inline bool System::ComponentModel::DateTimeConverter::CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DateTimeConverter*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context, destinationType);
}
inline ::System::Object* System::ComponentModel::DateTimeConverter::ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                                ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DateTimeConverter*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context, culture, value);
}
inline ::System::Object* System::ComponentModel::DateTimeConverter::ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                              ::System::Object* value, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DateTimeConverter*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context, culture, value, destinationType);
}
inline ::System::ComponentModel::DateTimeConverter* System::ComponentModel::DateTimeConverter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::ComponentModel::DateTimeConverter*>());
}
inline void System::ComponentModel::DateTimeConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::DateTimeConverter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::DateTimeConverter::DateTimeConverter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
