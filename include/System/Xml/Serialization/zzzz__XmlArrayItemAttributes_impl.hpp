#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlArrayItemAttributes.hpp"
#include "System/Collections/zzzz__CollectionBase_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlArrayItemAttributes_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlArrayItemAttribute_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlArrayItemAttributes.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlArrayItemAttribute* (::System::Xml::Serialization::XmlArrayItemAttributes::*)(int32_t)>(
    &::System::Xml::Serialization::XmlArrayItemAttributes::get_Item)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x62ed35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlArrayItemAttributes*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlArrayItemAttributes.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Serialization::XmlArrayItemAttributes::*)(::System::Xml::Serialization::XmlArrayItemAttribute*)>(
    &::System::Xml::Serialization::XmlArrayItemAttributes::Add)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x62ed45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlArrayItemAttributes*>(),
                                                                                           { "Add", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlArrayItemAttribute*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlArrayItemAttributes.AddKeyHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlArrayItemAttributes::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::Serialization::XmlArrayItemAttributes::AddKeyHash)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x62ed510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlArrayItemAttributes*>(), { "AddKeyHash", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlArrayItemAttributes._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlArrayItemAttributes::*)()>(&::System::Xml::Serialization::XmlArrayItemAttributes::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62ed5f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlArrayItemAttributes*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Xml::Serialization::XmlArrayItemAttribute* System::Xml::Serialization::XmlArrayItemAttributes::get_Item(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlArrayItemAttributes*>(), { "get_Item", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlArrayItemAttribute*>(this, ___internal_method, index);
}
inline int32_t System::Xml::Serialization::XmlArrayItemAttributes::Add(::System::Xml::Serialization::XmlArrayItemAttribute* attribute) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlArrayItemAttributes*>(),
                                                                                         { "Add", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlArrayItemAttribute*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, attribute);
}
inline void System::Xml::Serialization::XmlArrayItemAttributes::AddKeyHash(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlArrayItemAttributes*>(), { "AddKeyHash", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb);
}
inline void System::Xml::Serialization::XmlArrayItemAttributes::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlArrayItemAttributes*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlArrayItemAttributes* System::Xml::Serialization::XmlArrayItemAttributes::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlArrayItemAttributes*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlArrayItemAttributes::XmlArrayItemAttributes() {}
