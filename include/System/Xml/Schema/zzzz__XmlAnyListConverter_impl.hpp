#pragma once
#include "System/Xml/Schema/zzzz__XmlListConverter_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlAnyListConverter_def.hpp"
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "System/Xml/Schema/zzzz__XmlValueConverter_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlAnyListConverter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlAnyListConverter::*)(::System::Xml::Schema::XmlBaseConverter*)>(
    &::System::Xml::Schema::XmlAnyListConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x29cedd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAnyListConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlBaseConverter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAnyListConverter.ChangeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Xml::Schema::XmlAnyListConverter::*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(&::System::Xml::Schema::XmlAnyListConverter::ChangeType)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x29cee48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAnyListConverter*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAnyListConverter*>::get(), 61));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XmlAnyListConverter::setStaticF_ItemList(::System::Xml::Schema::XmlValueConverter* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::XmlValueConverter*, "ItemList", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAnyListConverter*>::get>(
      std::forward<::System::Xml::Schema::XmlValueConverter*>(value));
}
inline ::System::Xml::Schema::XmlValueConverter* System::Xml::Schema::XmlAnyListConverter::getStaticF_ItemList() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::XmlValueConverter*, "ItemList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAnyListConverter*>::get>();
}
inline void System::Xml::Schema::XmlAnyListConverter::setStaticF_AnyAtomicList(::System::Xml::Schema::XmlValueConverter* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::XmlValueConverter*, "AnyAtomicList",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAnyListConverter*>::get>(
      std::forward<::System::Xml::Schema::XmlValueConverter*>(value));
}
inline ::System::Xml::Schema::XmlValueConverter* System::Xml::Schema::XmlAnyListConverter::getStaticF_AnyAtomicList() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::XmlValueConverter*, "AnyAtomicList",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAnyListConverter*>::get>();
}
inline ::System::Xml::Schema::XmlAnyListConverter* System::Xml::Schema::XmlAnyListConverter::New_ctor(::System::Xml::Schema::XmlBaseConverter* atomicConverter) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlAnyListConverter*>(atomicConverter));
}
inline void System::Xml::Schema::XmlAnyListConverter::_ctor(::System::Xml::Schema::XmlBaseConverter* atomicConverter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAnyListConverter*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlBaseConverter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, atomicConverter);
}
inline ::System::Object* System::Xml::Schema::XmlAnyListConverter::ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlAnyListConverter*>::get(), 61)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, value, destinationType, nsResolver);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlAnyListConverter::XmlAnyListConverter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
