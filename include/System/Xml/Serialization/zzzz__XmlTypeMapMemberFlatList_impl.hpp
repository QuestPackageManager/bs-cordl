#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlTypeMapMemberFlatList.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberExpandable_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapMemberFlatList_def.hpp"
#include "System/Xml/Serialization/zzzz__ListMap_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMemberFlatList.get_ListMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::ListMap* (::System::Xml::Serialization::XmlTypeMapMemberFlatList::*)()>(
    &::System::Xml::Serialization::XmlTypeMapMemberFlatList::get_ListMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630d910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMemberFlatList*>(), { "get_ListMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMemberFlatList.set_ListMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMemberFlatList::*)(::System::Xml::Serialization::ListMap*)>(
    &::System::Xml::Serialization::XmlTypeMapMemberFlatList::set_ListMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630d918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMemberFlatList*>(),
                                                                                           { "set_ListMap", {}, { ::i2c::type_of<::System::Xml::Serialization::ListMap*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapMemberFlatList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapMemberFlatList::*)()>(&::System::Xml::Serialization::XmlTypeMapMemberFlatList::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x630d920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMemberFlatList*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Serialization::ListMap*& System::Xml::Serialization::XmlTypeMapMemberFlatList::__cordl_internal_get__listMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listMap;
}
constexpr ::System::Xml::Serialization::ListMap* const& System::Xml::Serialization::XmlTypeMapMemberFlatList::__cordl_internal_get__listMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____listMap;
}
constexpr void System::Xml::Serialization::XmlTypeMapMemberFlatList::__cordl_internal_set__listMap(::System::Xml::Serialization::ListMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____listMap = value;
}
inline ::System::Xml::Serialization::ListMap* System::Xml::Serialization::XmlTypeMapMemberFlatList::get_ListMap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMemberFlatList*>(), { "get_ListMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::ListMap*>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlTypeMapMemberFlatList::set_ListMap(::System::Xml::Serialization::ListMap* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMemberFlatList*>(),
                                                                                         { "set_ListMap", {}, { ::i2c::type_of<::System::Xml::Serialization::ListMap*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Serialization::XmlTypeMapMemberFlatList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapMemberFlatList*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlTypeMapMemberFlatList* System::Xml::Serialization::XmlTypeMapMemberFlatList::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlTypeMapMemberFlatList*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlTypeMapMemberFlatList::XmlTypeMapMemberFlatList() {}
