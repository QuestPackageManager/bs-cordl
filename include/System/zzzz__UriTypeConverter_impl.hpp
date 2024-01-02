#pragma once
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
#include "System/zzzz__UriTypeConverter_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::UriTypeConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::UriTypeConverter::*)()>(&::System::UriTypeConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x294ddd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriTypeConverter*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriTypeConverter.CanConvert
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::UriTypeConverter::*)(::System::Type*)>(&::System::UriTypeConverter::CanConvert)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x294dde0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriTypeConverter*>::get(), "CanConvert", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriTypeConverter.CanConvertFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::UriTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(
    &::System::UriTypeConverter::CanConvertFrom)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x294dec4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriTypeConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriTypeConverter*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriTypeConverter.CanConvertTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::UriTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(
    &::System::UriTypeConverter::CanConvertTo)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x294df78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriTypeConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriTypeConverter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriTypeConverter.ConvertFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::UriTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*)>(&::System::UriTypeConverter::ConvertFrom)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x294dff0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriTypeConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriTypeConverter*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::UriTypeConverter.ConvertTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::UriTypeConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*)>(
        &::System::UriTypeConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x294e19c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriTypeConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriTypeConverter*>::get(), 7));
    return ___internal_method;
  }
};
inline ::System::UriTypeConverter* System::UriTypeConverter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::UriTypeConverter*>());
}
inline void System::UriTypeConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriTypeConverter*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::UriTypeConverter::CanConvert(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriTypeConverter*>::get(), "CanConvert", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, type);
}
inline bool System::UriTypeConverter::CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriTypeConverter*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context, sourceType);
}
inline bool System::UriTypeConverter::CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriTypeConverter*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context, destinationType);
}
inline ::System::Object* System::UriTypeConverter::ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriTypeConverter*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context, culture, value);
}
inline ::System::Object* System::UriTypeConverter::ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture, ::System::Object* value,
                                                             ::System::Type* destinationType) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::UriTypeConverter*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context, culture, value, destinationType);
}
// Ctor Parameters []
constexpr ::System::UriTypeConverter::UriTypeConverter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
