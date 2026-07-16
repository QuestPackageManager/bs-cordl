#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlElementAttributes.hpp"
#include "System/Collections/zzzz__CollectionBase_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlElementAttributes_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlElementAttribute_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlElementAttributes.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlElementAttribute* (::System::Xml::Serialization::XmlElementAttributes::*)(int32_t)>(
    &::System::Xml::Serialization::XmlElementAttributes::get_Item)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x62f0664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlElementAttributes*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlElementAttributes.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Serialization::XmlElementAttributes::*)(::System::Xml::Serialization::XmlElementAttribute*)>(
    &::System::Xml::Serialization::XmlElementAttributes::Add)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x62f0764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlElementAttributes*>(),
                                                                                           { "Add", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlElementAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlElementAttributes.AddKeyHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlElementAttributes::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::Serialization::XmlElementAttributes::AddKeyHash)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x62f0818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlElementAttributes*>(), { "AddKeyHash", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlElementAttributes.get_Order
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Serialization::XmlElementAttributes::*)()>(&::System::Xml::Serialization::XmlElementAttributes::get_Order)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0x62f0900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlElementAttributes*>(), { "get_Order", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlElementAttributes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlElementAttributes::*)()>(&::System::Xml::Serialization::XmlElementAttributes::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f0bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlElementAttributes*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Xml::Serialization::XmlElementAttribute* System::Xml::Serialization::XmlElementAttributes::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlElementAttributes*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlElementAttribute*>(this, ___internal_method, index);
}
inline int32_t System::Xml::Serialization::XmlElementAttributes::Add(::System::Xml::Serialization::XmlElementAttribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlElementAttributes*>(),
                                                                                         { "Add", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlElementAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, attribute);
}
inline void System::Xml::Serialization::XmlElementAttributes::AddKeyHash(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlElementAttributes*>(), { "AddKeyHash", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb);
}
inline int32_t System::Xml::Serialization::XmlElementAttributes::get_Order() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlElementAttributes*>(), { "get_Order", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlElementAttributes::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlElementAttributes*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlElementAttributes* System::Xml::Serialization::XmlElementAttributes::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlElementAttributes*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlElementAttributes::XmlElementAttributes() {}
