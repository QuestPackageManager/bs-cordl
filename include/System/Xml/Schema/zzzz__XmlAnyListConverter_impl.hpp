#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlAnyListConverter.hpp"
#include "System/Xml/Schema/zzzz__XmlListConverter_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlAnyListConverter_def.hpp"
#include "System/Xml/Schema/zzzz__XmlBaseConverter_def.hpp"
#include "System/Xml/Schema/zzzz__XmlValueConverter_def.hpp"
#include "System/Xml/zzzz__IXmlNamespaceResolver_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlAnyListConverter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlAnyListConverter::*)(::System::Xml::Schema::XmlBaseConverter*)>(
    &::System::Xml::Schema::XmlAnyListConverter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x625ac8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyListConverter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlBaseConverter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlAnyListConverter.ChangeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Xml::Schema::XmlAnyListConverter::*)(::System::Object*, ::System::Type*, ::System::Xml::IXmlNamespaceResolver*)>(
    &::System::Xml::Schema::XmlAnyListConverter::ChangeType)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x625ad04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyListConverter*>(), { ::i2c::class_of<::System::Xml::Schema::XmlAnyListConverter*>(), 61 }));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XmlAnyListConverter::setStaticF_ItemList(::System::Xml::Schema::XmlValueConverter* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::XmlValueConverter*, "ItemList", ::System::Xml::Schema::XmlAnyListConverter*>(std::forward<::System::Xml::Schema::XmlValueConverter*>(value));
}
inline ::System::Xml::Schema::XmlValueConverter* System::Xml::Schema::XmlAnyListConverter::getStaticF_ItemList() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::XmlValueConverter*, "ItemList", ::System::Xml::Schema::XmlAnyListConverter*>();
}
inline void System::Xml::Schema::XmlAnyListConverter::setStaticF_AnyAtomicList(::System::Xml::Schema::XmlValueConverter* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::XmlValueConverter*, "AnyAtomicList", ::System::Xml::Schema::XmlAnyListConverter*>(
      std::forward<::System::Xml::Schema::XmlValueConverter*>(value));
}
inline ::System::Xml::Schema::XmlValueConverter* System::Xml::Schema::XmlAnyListConverter::getStaticF_AnyAtomicList() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::XmlValueConverter*, "AnyAtomicList", ::System::Xml::Schema::XmlAnyListConverter*>();
}
inline void System::Xml::Schema::XmlAnyListConverter::_ctor(::System::Xml::Schema::XmlBaseConverter* atomicConverter) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlAnyListConverter*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlBaseConverter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, atomicConverter);
}
inline ::System::Object* System::Xml::Schema::XmlAnyListConverter::ChangeType(::System::Object* value, ::System::Type* destinationType, ::System::Xml::IXmlNamespaceResolver* nsResolver) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XmlAnyListConverter*>(), 61 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, value, destinationType, nsResolver);
}
inline ::System::Xml::Schema::XmlAnyListConverter* System::Xml::Schema::XmlAnyListConverter::New_ctor(::System::Xml::Schema::XmlBaseConverter* atomicConverter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlAnyListConverter*>(atomicConverter));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlAnyListConverter::XmlAnyListConverter() {}
