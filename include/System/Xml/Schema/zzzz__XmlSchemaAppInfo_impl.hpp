#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlSchemaAppInfo.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_impl.hpp"
#include "System/Xml/zzzz__XmlNode_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaAppInfo_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAppInfo.set_Source
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaAppInfo::*)(::StringW)>(&::System::Xml::Schema::XmlSchemaAppInfo::set_Source)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622c8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAppInfo*>(), { "set_Source", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAppInfo.get_Markup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Xml::XmlNode*> (::System::Xml::Schema::XmlSchemaAppInfo::*)()>(&::System::Xml::Schema::XmlSchemaAppInfo::get_Markup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622c8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAppInfo*>(), { "get_Markup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAppInfo.set_Markup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaAppInfo::*)(::ArrayW<::System::Xml::XmlNode*>)>(&::System::Xml::Schema::XmlSchemaAppInfo::set_Markup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x622c8dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAppInfo*>(), { "set_Markup", {}, { ::i2c::type_of<::ArrayW<::System::Xml::XmlNode*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaAppInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaAppInfo::*)()>(&::System::Xml::Schema::XmlSchemaAppInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x622c8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAppInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Schema::XmlSchemaAppInfo::__cordl_internal_get_source() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr ::StringW const& System::Xml::Schema::XmlSchemaAppInfo::__cordl_internal_get_source() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___source;
}
constexpr void System::Xml::Schema::XmlSchemaAppInfo::__cordl_internal_set_source(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___source = value;
}
constexpr ::ArrayW<::System::Xml::XmlNode*>& System::Xml::Schema::XmlSchemaAppInfo::__cordl_internal_get_markup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___markup;
}
constexpr ::ArrayW<::System::Xml::XmlNode*> const& System::Xml::Schema::XmlSchemaAppInfo::__cordl_internal_get_markup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___markup;
}
constexpr void System::Xml::Schema::XmlSchemaAppInfo::__cordl_internal_set_markup(::ArrayW<::System::Xml::XmlNode*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___markup = value;
}
inline void System::Xml::Schema::XmlSchemaAppInfo::set_Source(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAppInfo*>(), { "set_Source", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::System::Xml::XmlNode*> System::Xml::Schema::XmlSchemaAppInfo::get_Markup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAppInfo*>(), { "get_Markup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Xml::XmlNode*>>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaAppInfo::set_Markup(::ArrayW<::System::Xml::XmlNode*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAppInfo*>(), { "set_Markup", {}, { ::i2c::type_of<::ArrayW<::System::Xml::XmlNode*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaAppInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaAppInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaAppInfo* System::Xml::Schema::XmlSchemaAppInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaAppInfo*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaAppInfo::XmlSchemaAppInfo() {}
