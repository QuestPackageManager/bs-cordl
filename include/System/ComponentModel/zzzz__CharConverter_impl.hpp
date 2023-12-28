#pragma once
#include "System/ComponentModel/zzzz__TypeConverter_impl.hpp"
#include "System/ComponentModel/zzzz__CharConverter_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/ComponentModel/zzzz__ITypeDescriptorContext_def.hpp"
#include "System/Globalization/zzzz__CultureInfo_def.hpp"
//  Writing Method size for method: ::System::ComponentModel::CharConverter.CanConvertFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::System::ComponentModel::CharConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Type*)>(&::System::ComponentModel::CharConverter::CanConvertFrom)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x29073e4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CharConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CharConverter*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CharConverter.ConvertTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::ComponentModel::CharConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*, ::System::Type*)>(
    &::System::ComponentModel::CharConverter::ConvertTo)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x29074ac;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CharConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CharConverter*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CharConverter.ConvertFrom
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::ComponentModel::CharConverter::*)(::System::ComponentModel::ITypeDescriptorContext*, ::System::Globalization::CultureInfo*, ::System::Object*)>(
        &::System::ComponentModel::CharConverter::ConvertFrom)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x29075dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CharConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CharConverter*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::ComponentModel::CharConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::ComponentModel::CharConverter::*)()>(&::System::ComponentModel::CharConverter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2907764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CharConverter*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline bool System::ComponentModel::CharConverter::CanConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Type* sourceType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CharConverter*>::get(), "CanConvertFrom", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ITypeDescriptorContext*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context, sourceType);
}
inline ::System::Object* System::ComponentModel::CharConverter::ConvertTo(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                          ::System::Object* value, ::System::Type* destinationType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CharConverter*>::get(), "ConvertTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ITypeDescriptorContext*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context, culture, value, destinationType);
}
inline ::System::Object* System::ComponentModel::CharConverter::ConvertFrom(::System::ComponentModel::ITypeDescriptorContext* context, ::System::Globalization::CultureInfo* culture,
                                                                            ::System::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CharConverter*>::get(), "ConvertFrom", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ComponentModel::ITypeDescriptorContext*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Globalization::CultureInfo*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, context, culture, value);
}
inline ::System::ComponentModel::CharConverter* System::ComponentModel::CharConverter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::System::ComponentModel::CharConverter*>());
}
inline void System::ComponentModel::CharConverter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::ComponentModel::CharConverter*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::ComponentModel::CharConverter::CharConverter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
