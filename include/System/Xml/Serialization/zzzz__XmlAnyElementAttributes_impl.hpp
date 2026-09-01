#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlAnyElementAttributes.hpp"
#include "System/Collections/zzzz__CollectionBase_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlAnyElementAttributes_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlAnyElementAttribute_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlAnyElementAttributes.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlAnyElementAttribute* (::System::Xml::Serialization::XmlAnyElementAttributes::*)(int32_t)>(
    &::System::Xml::Serialization::XmlAnyElementAttributes::get_Item)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x62f22d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAnyElementAttributes*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlAnyElementAttributes.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Serialization::XmlAnyElementAttributes::*)(::System::Xml::Serialization::XmlAnyElementAttribute*)>(
    &::System::Xml::Serialization::XmlAnyElementAttributes::Add)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x62f23d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAnyElementAttributes*>(),
                                                                                           { "Add", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlAnyElementAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlAnyElementAttributes.AddKeyHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlAnyElementAttributes::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::Serialization::XmlAnyElementAttributes::AddKeyHash)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x62f248c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAnyElementAttributes*>(), { "AddKeyHash", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlAnyElementAttributes.get_Order
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Serialization::XmlAnyElementAttributes::*)()>(&::System::Xml::Serialization::XmlAnyElementAttributes::get_Order)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x62f2574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAnyElementAttributes*>(), { "get_Order", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlAnyElementAttributes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlAnyElementAttributes::*)()>(&::System::Xml::Serialization::XmlAnyElementAttributes::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f282c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAnyElementAttributes*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Xml::Serialization::XmlAnyElementAttribute* System::Xml::Serialization::XmlAnyElementAttributes::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAnyElementAttributes*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlAnyElementAttribute*>(this, ___internal_method, index);
}
inline int32_t System::Xml::Serialization::XmlAnyElementAttributes::Add(::System::Xml::Serialization::XmlAnyElementAttribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAnyElementAttributes*>(),
                                                                                         { "Add", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlAnyElementAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, attribute);
}
inline void System::Xml::Serialization::XmlAnyElementAttributes::AddKeyHash(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAnyElementAttributes*>(), { "AddKeyHash", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb);
}
inline int32_t System::Xml::Serialization::XmlAnyElementAttributes::get_Order() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAnyElementAttributes*>(), { "get_Order", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlAnyElementAttributes::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAnyElementAttributes*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlAnyElementAttributes* System::Xml::Serialization::XmlAnyElementAttributes::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlAnyElementAttributes*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlAnyElementAttributes::XmlAnyElementAttributes() {}
