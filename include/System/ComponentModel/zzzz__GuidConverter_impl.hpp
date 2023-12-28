#pragma once
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
#include "System/ComponentModel/zzzz__GuidConverter_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::GuidConverter.CanConvertFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::ComponentModel::GuidConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(&::System::ComponentModel::GuidConverter::CanConvertFrom)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x29108a8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::GuidConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::GuidConverter*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::GuidConverter.CanConvertTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::ComponentModel::GuidConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(&::System::ComponentModel::GuidConverter::CanConvertTo)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2910970;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::GuidConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::GuidConverter*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::GuidConverter.ConvertFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::ComponentModel::GuidConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*)>(
        &::System::ComponentModel::GuidConverter::ConvertFrom)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2910a38;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::GuidConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::GuidConverter*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::GuidConverter.ConvertTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::ComponentModel::GuidConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*)>(
    &::System::ComponentModel::GuidConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x2910b18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::GuidConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::GuidConverter*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::GuidConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::GuidConverter::*)()>(&::System::ComponentModel::GuidConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2910e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::GuidConverter*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline bool System::ComponentModel::GuidConverter::CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::GuidConverter*>::get(), "CanConvertFrom", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ITypeDescriptorContext*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context, sourceType);
}
inline bool System::ComponentModel::GuidConverter::CanConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* destinationType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::GuidConverter*>::get(), "CanConvertTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ITypeDescriptorContext*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context, destinationType);
}
inline ::System::Object* System::ComponentModel::GuidConverter::ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                            ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::GuidConverter*>::get(), "ConvertFrom", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ITypeDescriptorContext*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context, culture, value);
}
inline ::System::Object* System::ComponentModel::GuidConverter::ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                          ::System::Object* value, ::System::Type* destinationType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::GuidConverter*>::get(), "ConvertTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ITypeDescriptorContext*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context, culture, value, destinationType);
}
inline ::System::ComponentModel::GuidConverter* System::ComponentModel::GuidConverter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::GuidConverter*>());
}
inline void System::ComponentModel::GuidConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::GuidConverter*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::GuidConverter::GuidConverter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
