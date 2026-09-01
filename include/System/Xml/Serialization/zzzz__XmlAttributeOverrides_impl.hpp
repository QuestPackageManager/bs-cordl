#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlAttributeOverrides.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlAttributeOverrides_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Xml/Serialization/zzzz__TypeMember_def.hpp"
#include "System/Xml/Serialization/zzzz__XmlAttributes_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlAttributeOverrides._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlAttributeOverrides::*)()>(&::System::Xml::Serialization::XmlAttributeOverrides::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x62f2fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeOverrides*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlAttributeOverrides.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlAttributes* (::System::Xml::Serialization::XmlAttributeOverrides::*)(::System::Type*)>(
    &::System::Xml::Serialization::XmlAttributeOverrides::get_Item)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62f3008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeOverrides*>(), { "get_Item", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlAttributeOverrides.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlAttributes* (::System::Xml::Serialization::XmlAttributeOverrides::*)(::System::Type*, ::StringW)>(
    &::System::Xml::Serialization::XmlAttributeOverrides::get_Item)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x62f301c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeOverrides*>(),
                                                                                           { "get_Item", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlAttributeOverrides.GetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::TypeMember* (::System::Xml::Serialization::XmlAttributeOverrides::*)(::System::Type*, ::StringW)>(
    &::System::Xml::Serialization::XmlAttributeOverrides::GetKey)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x62f30d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeOverrides*>(),
                                                                                           { "GetKey", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlAttributeOverrides.AddKeyHash
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlAttributeOverrides::*)(::System::Text::StringBuilder*)>(
    &::System::Xml::Serialization::XmlAttributeOverrides::AddKeyHash)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0x62ec7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeOverrides*>(), { "AddKeyHash", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Hashtable*& System::Xml::Serialization::XmlAttributeOverrides::__cordl_internal_get_overrides() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrides;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Serialization::XmlAttributeOverrides::__cordl_internal_get_overrides() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___overrides;
}
constexpr void System::Xml::Serialization::XmlAttributeOverrides::__cordl_internal_set_overrides(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___overrides = value;
}
inline void System::Xml::Serialization::XmlAttributeOverrides::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeOverrides*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlAttributes* System::Xml::Serialization::XmlAttributeOverrides::get_Item(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeOverrides*>(), { "get_Item", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlAttributes*>(this, ___internal_method, type);
}
inline ::System::Xml::Serialization::XmlAttributes* System::Xml::Serialization::XmlAttributeOverrides::get_Item(::System::Type* type, ::StringW member) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeOverrides*>(),
                                                                                         { "get_Item", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlAttributes*>(this, ___internal_method, type, member);
}
inline ::System::Xml::Serialization::TypeMember* System::Xml::Serialization::XmlAttributeOverrides::GetKey(::System::Type* type, ::StringW member) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeOverrides*>(), { "GetKey", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::TypeMember*>(this, ___internal_method, type, member);
}
inline void System::Xml::Serialization::XmlAttributeOverrides::AddKeyHash(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlAttributeOverrides*>(), { "AddKeyHash", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb);
}
inline ::System::Xml::Serialization::XmlAttributeOverrides* System::Xml::Serialization::XmlAttributeOverrides::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlAttributeOverrides*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlAttributeOverrides::XmlAttributeOverrides() {}
