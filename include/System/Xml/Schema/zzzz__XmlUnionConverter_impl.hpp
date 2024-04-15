#pragma once
#include "System/Xml/Schema/zzzz__XmlBaseConverter_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlUnionConverter_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/Schema/zzzz__XmlValueConverter_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlUnionConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlUnionConverter::*)(::System::Xml::Schema::XmlSchemaType*)>(
    &::System::Xml::Schema::XmlUnionConverter::_ctor)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x2d4b02c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlUnionConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUnionConverter.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlValueConverter* (*)(::System::Xml::Schema::XmlSchemaType*)>(
    &::System::Xml::Schema::XmlUnionConverter::Create)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2d4b274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlUnionConverter*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlUnionConverter.ChangeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Xml::Schema::XmlUnionConverter::*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&::System::Xml::Schema::XmlUnionConverter::ChangeType)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x2d4b2d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlUnionConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlUnionConverter*>::get(), 61));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::System::Xml::Schema::XmlValueConverter*, ::Array<::System::Xml::Schema::XmlValueConverter*>*>& System::Xml::Schema::XmlUnionConverter::__cordl_internal_get_converters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___converters;
}
constexpr ::ArrayW<::System::Xml::Schema::XmlValueConverter*, ::Array<::System::Xml::Schema::XmlValueConverter*>*> const&
System::Xml::Schema::XmlUnionConverter::__cordl_internal_get_converters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___converters;
}
constexpr void System::Xml::Schema::XmlUnionConverter::__cordl_internal_set_converters(::ArrayW<::System::Xml::Schema::XmlValueConverter*, ::Array<::System::Xml::Schema::XmlValueConverter*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___converters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Xml::Schema::XmlUnionConverter::__cordl_internal_get_hasAtomicMember() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasAtomicMember;
}
constexpr bool const& System::Xml::Schema::XmlUnionConverter::__cordl_internal_get_hasAtomicMember() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasAtomicMember;
}
constexpr void System::Xml::Schema::XmlUnionConverter::__cordl_internal_set_hasAtomicMember(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasAtomicMember = value;
}
constexpr bool& System::Xml::Schema::XmlUnionConverter::__cordl_internal_get_hasListMember() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasListMember;
}
constexpr bool const& System::Xml::Schema::XmlUnionConverter::__cordl_internal_get_hasListMember() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasListMember;
}
constexpr void System::Xml::Schema::XmlUnionConverter::__cordl_internal_set_hasListMember(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasListMember = value;
}
inline ::System::Xml::Schema::XmlUnionConverter* System::Xml::Schema::XmlUnionConverter::New_ctor(::System::Xml::Schema::XmlSchemaType* schemaType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlUnionConverter*>(schemaType));
}
inline void System::Xml::Schema::XmlUnionConverter::_ctor(::System::Xml::Schema::XmlSchemaType* schemaType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlUnionConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, schemaType);
}
inline ::System::Xml::Schema::XmlValueConverter* System::Xml::Schema::XmlUnionConverter::Create(::System::Xml::Schema::XmlSchemaType* schemaType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlUnionConverter*>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlValueConverter*, false>(nullptr, ___internal_method, schemaType);
}
inline ::System::Object* System::Xml::Schema::XmlUnionConverter::ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlUnionConverter*>::get(), 61)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, value, destinationType, nsResolver);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlUnionConverter::XmlUnionConverter() {}
