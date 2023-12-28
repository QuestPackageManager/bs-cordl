#pragma once
#include "System/Xml/Schema/zzzz__XmlBaseConverter_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlStringConverter_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/Xml/Schema/zzzz__XmlValueConverter_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlStringConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlStringConverter::*)(::System::Xml::Schema::XmlSchemaType*)>(
    &::System::Xml::Schema::XmlStringConverter::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x28da7f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlStringConverter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlStringConverter.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlValueConverter* (*)(::System::Xml::Schema::XmlSchemaType*)>(
    &::System::Xml::Schema::XmlStringConverter::Create)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x28da860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlStringConverter*>::get(), "Create", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlStringConverter.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::System::Xml::Schema::XmlStringConverter::*)(::System::Object*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::Schema::XmlStringConverter::ToString)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x28da8c0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlStringConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlStringConverter*>::get(), 52));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlStringConverter.ChangeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Xml::Schema::XmlStringConverter::*)(::StringW, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&::System::Xml::Schema::XmlStringConverter::ChangeType)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x28daad0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlStringConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlStringConverter*>::get(), 59));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlStringConverter.ChangeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Xml::Schema::XmlStringConverter::*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&::System::Xml::Schema::XmlStringConverter::ChangeType)> {
  constexpr static std::size_t size = 0x43c;
  constexpr static std::size_t addrs = 0x28dad6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlStringConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlStringConverter*>::get(), 61));
    return ___internal_method;
  }
};
inline ::System::Xml::Schema::XmlStringConverter* System::Xml::Schema::XmlStringConverter::New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType) {
  return THROW_UNLESS(::il2cpp_utils::New<::System::Xml::Schema::XmlStringConverter*>(schemaType));
}
inline void System::Xml::Schema::XmlStringConverter::_ctor(::System::Xml::Schema::XmlSchemaType* schemaType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlStringConverter*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, schemaType);
}
inline ::System::Xml::Schema::XmlValueConverter* System::Xml::Schema::XmlStringConverter::Create(::System::Xml::Schema::XmlSchemaType* schemaType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlStringConverter*>::get(), "Create", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlValueConverter*, false>(nullptr, ___internal_method, schemaType);
}
inline ::StringW System::Xml::Schema::XmlStringConverter::ToString(::System::Object* value, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlStringConverter*>::get(), "ToString", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IXmlNamespaceResolver*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, value, nsResolver);
}
inline ::System::Object* System::Xml::Schema::XmlStringConverter::ChangeType(::StringW value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlStringConverter*>::get(), "ChangeType", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IXmlNamespaceResolver*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, value, destinationType, nsResolver);
}
inline ::System::Object* System::Xml::Schema::XmlStringConverter::ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlStringConverter*>::get(), "ChangeType", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::IXmlNamespaceResolver*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, value, destinationType, nsResolver);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlStringConverter::XmlStringConverter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
