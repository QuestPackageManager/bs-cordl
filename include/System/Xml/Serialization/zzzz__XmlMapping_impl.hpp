#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlMapping.hpp"
#include "System/Xml/Serialization/zzzz__SerializationFormat_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlMapping_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Xml/Serialization/zzzz__ObjectMap_def.hpp"
#include "System/Xml/Serialization/zzzz__SerializationFormat_def.hpp"
#include "System/Xml/Serialization/zzzz__SerializationSource_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlMapping._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlMapping::*)(::StringW, ::StringW)>(&::System::Xml::Serialization::XmlMapping::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f6478;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMapping*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlMapping.get_ElementName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlMapping::*)()>(&::System::Xml::Serialization::XmlMapping::get_ElementName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f6480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMapping*>(), { "get_ElementName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlMapping.get_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlMapping::*)()>(&::System::Xml::Serialization::XmlMapping::get_Namespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f6488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMapping*>(), { "get_Namespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlMapping.SetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlMapping::*)(::StringW)>(&::System::Xml::Serialization::XmlMapping::SetKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f6490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMapping*>(), { "SetKey", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlMapping.get_ObjectMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::ObjectMap* (::System::Xml::Serialization::XmlMapping::*)()>(
    &::System::Xml::Serialization::XmlMapping::get_ObjectMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f6498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMapping*>(), { "get_ObjectMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlMapping.set_ObjectMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlMapping::*)(::System::Xml::Serialization::ObjectMap*)>(
    &::System::Xml::Serialization::XmlMapping::set_ObjectMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f64a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMapping*>(), { "set_ObjectMap", {}, { ::i2c::type_of<::System::Xml::Serialization::ObjectMap*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlMapping.get_RelatedMaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::System::Xml::Serialization::XmlMapping::*)()>(&::System::Xml::Serialization::XmlMapping::get_RelatedMaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f64a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMapping*>(), { "get_RelatedMaps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlMapping.set_RelatedMaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlMapping::*)(::System::Collections::ArrayList*)>(
    &::System::Xml::Serialization::XmlMapping::set_RelatedMaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f64b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMapping*>(), { "set_RelatedMaps", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlMapping.get_Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::SerializationFormat (::System::Xml::Serialization::XmlMapping::*)()>(
    &::System::Xml::Serialization::XmlMapping::get_Format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f64b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMapping*>(), { "get_Format", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlMapping.set_Format
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlMapping::*)(::System::Xml::Serialization::SerializationFormat)>(
    &::System::Xml::Serialization::XmlMapping::set_Format)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f64c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMapping*>(), { "set_Format", {}, { ::i2c::type_of<::System::Xml::Serialization::SerializationFormat>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlMapping.get_Source
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::SerializationSource* (::System::Xml::Serialization::XmlMapping::*)()>(
    &::System::Xml::Serialization::XmlMapping::get_Source)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62f64c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMapping*>(), { "get_Source", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Serialization::ObjectMap*& System::Xml::Serialization::XmlMapping::__cordl_internal_get_map() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___map;
}
constexpr ::System::Xml::Serialization::ObjectMap* const& System::Xml::Serialization::XmlMapping::__cordl_internal_get_map() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___map;
}
constexpr void System::Xml::Serialization::XmlMapping::__cordl_internal_set_map(::System::Xml::Serialization::ObjectMap* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___map = value;
}
constexpr ::System::Collections::ArrayList*& System::Xml::Serialization::XmlMapping::__cordl_internal_get_relatedMaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___relatedMaps;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Serialization::XmlMapping::__cordl_internal_get_relatedMaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___relatedMaps;
}
constexpr void System::Xml::Serialization::XmlMapping::__cordl_internal_set_relatedMaps(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___relatedMaps = value;
}
constexpr ::System::Xml::Serialization::SerializationFormat& System::Xml::Serialization::XmlMapping::__cordl_internal_get_format() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___format;
}
constexpr ::System::Xml::Serialization::SerializationFormat const& System::Xml::Serialization::XmlMapping::__cordl_internal_get_format() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___format;
}
constexpr void System::Xml::Serialization::XmlMapping::__cordl_internal_set_format(::System::Xml::Serialization::SerializationFormat value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___format = value;
}
constexpr ::System::Xml::Serialization::SerializationSource*& System::Xml::Serialization::XmlMapping::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr ::System::Xml::Serialization::SerializationSource* const& System::Xml::Serialization::XmlMapping::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr void System::Xml::Serialization::XmlMapping::__cordl_internal_set_source(::System::Xml::Serialization::SerializationSource* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlMapping::__cordl_internal_get__elementName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementName;
}
constexpr ::StringW const& System::Xml::Serialization::XmlMapping::__cordl_internal_get__elementName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____elementName;
}
constexpr void System::Xml::Serialization::XmlMapping::__cordl_internal_set__elementName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____elementName = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlMapping::__cordl_internal_get__namespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namespace;
}
constexpr ::StringW const& System::Xml::Serialization::XmlMapping::__cordl_internal_get__namespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____namespace;
}
constexpr void System::Xml::Serialization::XmlMapping::__cordl_internal_set__namespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____namespace = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlMapping::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::StringW const& System::Xml::Serialization::XmlMapping::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void System::Xml::Serialization::XmlMapping::__cordl_internal_set_key(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
inline void System::Xml::Serialization::XmlMapping::_ctor(::StringW elementName, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMapping*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementName, ns);
}
inline ::StringW System::Xml::Serialization::XmlMapping::get_ElementName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMapping*>(), { "get_ElementName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::Serialization::XmlMapping::get_Namespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMapping*>(), { "get_Namespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlMapping::SetKey(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMapping*>(), { "SetKey", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline ::System::Xml::Serialization::ObjectMap* System::Xml::Serialization::XmlMapping::get_ObjectMap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMapping*>(), { "get_ObjectMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::ObjectMap*>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlMapping::set_ObjectMap(::System::Xml::Serialization::ObjectMap* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMapping*>(), { "set_ObjectMap", {}, { ::i2c::type_of<::System::Xml::Serialization::ObjectMap*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::ArrayList* System::Xml::Serialization::XmlMapping::get_RelatedMaps() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMapping*>(), { "get_RelatedMaps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlMapping::set_RelatedMaps(::System::Collections::ArrayList* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMapping*>(), { "set_RelatedMaps", {}, { ::i2c::type_of<::System::Collections::ArrayList*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Serialization::SerializationFormat System::Xml::Serialization::XmlMapping::get_Format() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMapping*>(), { "get_Format", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::SerializationFormat>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlMapping::set_Format(::System::Xml::Serialization::SerializationFormat value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMapping*>(), { "set_Format", {}, { ::i2c::type_of<::System::Xml::Serialization::SerializationFormat>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Serialization::SerializationSource* System::Xml::Serialization::XmlMapping::get_Source() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlMapping*>(), { "get_Source", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::SerializationSource*>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlMapping* System::Xml::Serialization::XmlMapping::New_ctor(::StringW elementName, ::StringW ns) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlMapping*>(elementName, ns));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlMapping::XmlMapping() {}
