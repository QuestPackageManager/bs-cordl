#pragma once
// IWYU pragma private; include "System\Xml\Schema\XmlSchemaSubstitutionGroup.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaObject_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSubstitutionGroup_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSubstitutionGroup.get_Members
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::System::Xml::Schema::XmlSchemaSubstitutionGroup::*)()>(
    &::System::Xml::Schema::XmlSchemaSubstitutionGroup::get_Members)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x623c284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>(), { "get_Members", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSubstitutionGroup.get_Examplar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Xml::Schema::XmlSchemaSubstitutionGroup::*)()>(
    &::System::Xml::Schema::XmlSchemaSubstitutionGroup::get_Examplar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x623c28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>(), { "get_Examplar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSubstitutionGroup.set_Examplar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSubstitutionGroup::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::XmlSchemaSubstitutionGroup::set_Examplar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x623c294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>(), { "set_Examplar", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaSubstitutionGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XmlSchemaSubstitutionGroup::*)()>(&::System::Xml::Schema::XmlSchemaSubstitutionGroup::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x623c29c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::ArrayList*& System::Xml::Schema::XmlSchemaSubstitutionGroup::__cordl_internal_get_membersList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___membersList;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Schema::XmlSchemaSubstitutionGroup::__cordl_internal_get_membersList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___membersList;
}
constexpr void System::Xml::Schema::XmlSchemaSubstitutionGroup::__cordl_internal_set_membersList(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___membersList = value;
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::XmlSchemaSubstitutionGroup::__cordl_internal_get_examplar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___examplar;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::XmlSchemaSubstitutionGroup::__cordl_internal_get_examplar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___examplar;
}
constexpr void System::Xml::Schema::XmlSchemaSubstitutionGroup::__cordl_internal_set_examplar(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___examplar = value;
}
inline ::System::Collections::ArrayList* System::Xml::Schema::XmlSchemaSubstitutionGroup::get_Members() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>(), { "get_Members", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline ::System::Xml::XmlQualifiedName* System::Xml::Schema::XmlSchemaSubstitutionGroup::get_Examplar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>(), { "get_Examplar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method);
}
inline void System::Xml::Schema::XmlSchemaSubstitutionGroup::set_Examplar(::System::Xml::XmlQualifiedName* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>(), { "set_Examplar", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaSubstitutionGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XmlSchemaSubstitutionGroup* System::Xml::Schema::XmlSchemaSubstitutionGroup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XmlSchemaSubstitutionGroup*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaSubstitutionGroup::XmlSchemaSubstitutionGroup() {}
