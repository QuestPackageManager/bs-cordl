#pragma once
// IWYU pragma private; include "System\Xml\Schema\SchemaNotation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__SchemaNotation_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::SchemaNotation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaNotation::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::SchemaNotation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x620b508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaNotation*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaNotation.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Schema::SchemaNotation::*)()>(&::System::Xml::Schema::SchemaNotation::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x620b510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaNotation*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaNotation.get_SystemLiteral
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::SchemaNotation::*)()>(&::System::Xml::Schema::SchemaNotation::get_SystemLiteral)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x620b518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaNotation*>(), { "get_SystemLiteral", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaNotation.set_SystemLiteral
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaNotation::*)(::StringW)>(&::System::Xml::Schema::SchemaNotation::set_SystemLiteral)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x620b520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaNotation*>(), { "set_SystemLiteral", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaNotation.get_Pubid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Schema::SchemaNotation::*)()>(&::System::Xml::Schema::SchemaNotation::get_Pubid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x620b528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaNotation*>(), { "get_Pubid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::SchemaNotation.set_Pubid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::SchemaNotation::*)(::StringW)>(&::System::Xml::Schema::SchemaNotation::set_Pubid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x620b530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaNotation*>(), { "set_Pubid", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::SchemaNotation::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::SchemaNotation::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Xml::Schema::SchemaNotation::__cordl_internal_set_name(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::StringW& System::Xml::Schema::SchemaNotation::__cordl_internal_get_systemLiteral() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemLiteral;
}
constexpr ::StringW const& System::Xml::Schema::SchemaNotation::__cordl_internal_get_systemLiteral() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___systemLiteral;
}
constexpr void System::Xml::Schema::SchemaNotation::__cordl_internal_set_systemLiteral(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___systemLiteral = value;
}
constexpr ::StringW& System::Xml::Schema::SchemaNotation::__cordl_internal_get_pubid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pubid;
}
constexpr ::StringW const& System::Xml::Schema::SchemaNotation::__cordl_internal_get_pubid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___pubid;
}
constexpr void System::Xml::Schema::SchemaNotation::__cordl_internal_set_pubid(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___pubid = value;
}
inline void System::Xml::Schema::SchemaNotation::_ctor(::System::Xml::XmlQualifiedName* name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaNotation*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::SchemaNotation::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaNotation*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method);
}
inline ::StringW System::Xml::Schema::SchemaNotation::get_SystemLiteral() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaNotation*>(), { "get_SystemLiteral", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaNotation::set_SystemLiteral(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaNotation*>(), { "set_SystemLiteral", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Schema::SchemaNotation::get_Pubid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaNotation*>(), { "get_Pubid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Schema::SchemaNotation::set_Pubid(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::SchemaNotation*>(), { "set_Pubid", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::SchemaNotation* System::Xml::Schema::SchemaNotation::New_ctor(::System::Xml::XmlQualifiedName* name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::SchemaNotation*>(name));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::SchemaNotation::SchemaNotation() {}
