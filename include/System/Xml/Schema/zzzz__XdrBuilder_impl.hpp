#pragma once
// IWYU pragma private; include "System\Xml\Schema\XdrBuilder.hpp"
#include "System/Xml/Schema/zzzz__SchemaBuilder_impl.hpp"
#include "System/Xml/Schema/zzzz__SchemaNames_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__XdrBuilder_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Xml/Schema/zzzz__ParticleContentValidator_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaAttDef_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaElementDecl_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaInfo_def.hpp"
#include "System/Xml/Schema/zzzz__SchemaNames_def.hpp"
#include "System/Xml/Schema/zzzz__ValidationEventHandler_def.hpp"
#include "System/Xml/Schema/zzzz__XdrBuilder_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaException_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSeverityType_def.hpp"
#include "System/Xml/zzzz__HWStack_def.hpp"
#include "System/Xml/zzzz__PositionInfo_def.hpp"
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlResolver_def.hpp"
#include "System/Xml/zzzz__XmlTokenizedType_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_DeclBaseInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder_DeclBaseInfo::*)()>(&::System::Xml::Schema::XdrBuilder_DeclBaseInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6223934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_DeclBaseInfo*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_DeclBaseInfo.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder_DeclBaseInfo::*)()>(&::System::Xml::Schema::XdrBuilder_DeclBaseInfo::Reset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6223d90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_DeclBaseInfo*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_get__Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_get__Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name;
}
constexpr void System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_set__Name(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name = value;
}
constexpr ::StringW& System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_get__Prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Prefix;
}
constexpr ::StringW const& System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_get__Prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Prefix;
}
constexpr void System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_set__Prefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Prefix = value;
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_get__TypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TypeName;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_get__TypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TypeName;
}
constexpr void System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_set__TypeName(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TypeName = value;
}
constexpr ::StringW& System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_get__TypePrefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TypePrefix;
}
constexpr ::StringW const& System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_get__TypePrefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TypePrefix;
}
constexpr void System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_set__TypePrefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TypePrefix = value;
}
constexpr ::System::Object*& System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_get__Default() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Default;
}
constexpr ::System::Object* const& System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_get__Default() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Default;
}
constexpr void System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_set__Default(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Default = value;
}
constexpr ::System::Object*& System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_get__Revises() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Revises;
}
constexpr ::System::Object* const& System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_get__Revises() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Revises;
}
constexpr void System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_set__Revises(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Revises = value;
}
constexpr uint32_t& System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_get__MaxOccurs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxOccurs;
}
constexpr uint32_t const& System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_get__MaxOccurs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxOccurs;
}
constexpr void System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_set__MaxOccurs(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MaxOccurs = value;
}
constexpr uint32_t& System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_get__MinOccurs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MinOccurs;
}
constexpr uint32_t const& System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_get__MinOccurs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MinOccurs;
}
constexpr void System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_set__MinOccurs(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MinOccurs = value;
}
constexpr bool& System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_get__Checking() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Checking;
}
constexpr bool const& System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_get__Checking() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Checking;
}
constexpr void System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_set__Checking(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Checking = value;
}
constexpr ::System::Xml::Schema::SchemaElementDecl*& System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_get__ElementDecl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ElementDecl;
}
constexpr ::System::Xml::Schema::SchemaElementDecl* const& System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_get__ElementDecl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ElementDecl;
}
constexpr void System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_set__ElementDecl(::System::Xml::Schema::SchemaElementDecl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ElementDecl = value;
}
constexpr ::System::Xml::Schema::SchemaAttDef*& System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_get__Attdef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Attdef;
}
constexpr ::System::Xml::Schema::SchemaAttDef* const& System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_get__Attdef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Attdef;
}
constexpr void System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_set__Attdef(::System::Xml::Schema::SchemaAttDef* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Attdef = value;
}
constexpr ::System::Xml::Schema::XdrBuilder_DeclBaseInfo*& System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_get__Next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Next;
}
constexpr ::System::Xml::Schema::XdrBuilder_DeclBaseInfo* const& System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_get__Next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Next;
}
constexpr void System::Xml::Schema::XdrBuilder_DeclBaseInfo::__cordl_internal_set__Next(::System::Xml::Schema::XdrBuilder_DeclBaseInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Next = value;
}
inline void System::Xml::Schema::XdrBuilder_DeclBaseInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_DeclBaseInfo*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrBuilder_DeclBaseInfo::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_DeclBaseInfo*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XdrBuilder_DeclBaseInfo* System::Xml::Schema::XdrBuilder_DeclBaseInfo::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XdrBuilder_DeclBaseInfo*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XdrBuilder_DeclBaseInfo::XdrBuilder_DeclBaseInfo() {}
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_GroupContent.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder_GroupContent*, ::System::Xml::Schema::XdrBuilder_GroupContent*)>(
    &::System::Xml::Schema::XdrBuilder_GroupContent::Copy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x62264d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_GroupContent*>(),
                                         { "Copy", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder_GroupContent*>(), ::i2c::type_of<::System::Xml::Schema::XdrBuilder_GroupContent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_GroupContent.Copy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XdrBuilder_GroupContent* (*)(::System::Xml::Schema::XdrBuilder_GroupContent*)>(
    &::System::Xml::Schema::XdrBuilder_GroupContent::Copy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x622076c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_GroupContent*>(), { "Copy", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder_GroupContent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_GroupContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder_GroupContent::*)()>(&::System::Xml::Schema::XdrBuilder_GroupContent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x621f360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_GroupContent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr uint32_t& System::Xml::Schema::XdrBuilder_GroupContent::__cordl_internal_get__MinVal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MinVal;
}
constexpr uint32_t const& System::Xml::Schema::XdrBuilder_GroupContent::__cordl_internal_get__MinVal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MinVal;
}
constexpr void System::Xml::Schema::XdrBuilder_GroupContent::__cordl_internal_set__MinVal(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MinVal = value;
}
constexpr uint32_t& System::Xml::Schema::XdrBuilder_GroupContent::__cordl_internal_get__MaxVal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxVal;
}
constexpr uint32_t const& System::Xml::Schema::XdrBuilder_GroupContent::__cordl_internal_get__MaxVal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxVal;
}
constexpr void System::Xml::Schema::XdrBuilder_GroupContent::__cordl_internal_set__MaxVal(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MaxVal = value;
}
constexpr bool& System::Xml::Schema::XdrBuilder_GroupContent::__cordl_internal_get__HasMaxAttr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HasMaxAttr;
}
constexpr bool const& System::Xml::Schema::XdrBuilder_GroupContent::__cordl_internal_get__HasMaxAttr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HasMaxAttr;
}
constexpr void System::Xml::Schema::XdrBuilder_GroupContent::__cordl_internal_set__HasMaxAttr(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____HasMaxAttr = value;
}
constexpr bool& System::Xml::Schema::XdrBuilder_GroupContent::__cordl_internal_get__HasMinAttr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HasMinAttr;
}
constexpr bool const& System::Xml::Schema::XdrBuilder_GroupContent::__cordl_internal_get__HasMinAttr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HasMinAttr;
}
constexpr void System::Xml::Schema::XdrBuilder_GroupContent::__cordl_internal_set__HasMinAttr(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____HasMinAttr = value;
}
constexpr int32_t& System::Xml::Schema::XdrBuilder_GroupContent::__cordl_internal_get__Order() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Order;
}
constexpr int32_t const& System::Xml::Schema::XdrBuilder_GroupContent::__cordl_internal_get__Order() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Order;
}
constexpr void System::Xml::Schema::XdrBuilder_GroupContent::__cordl_internal_set__Order(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Order = value;
}
inline void System::Xml::Schema::XdrBuilder_GroupContent::Copy(::System::Xml::Schema::XdrBuilder_GroupContent* from, ::System::Xml::Schema::XdrBuilder_GroupContent* to) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_GroupContent*>(),
                                       { "Copy", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder_GroupContent*>(), ::i2c::type_of<::System::Xml::Schema::XdrBuilder_GroupContent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, from, to);
}
inline ::System::Xml::Schema::XdrBuilder_GroupContent* System::Xml::Schema::XdrBuilder_GroupContent::Copy(::System::Xml::Schema::XdrBuilder_GroupContent* other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_GroupContent*>(), { "Copy", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder_GroupContent*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XdrBuilder_GroupContent*>(nullptr, ___internal_method, other);
}
inline void System::Xml::Schema::XdrBuilder_GroupContent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_GroupContent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XdrBuilder_GroupContent* System::Xml::Schema::XdrBuilder_GroupContent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XdrBuilder_GroupContent*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XdrBuilder_GroupContent::XdrBuilder_GroupContent() {}
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_ElementContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder_ElementContent::*)()>(&::System::Xml::Schema::XdrBuilder_ElementContent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x621f358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_ElementContent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::SchemaElementDecl*& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__ElementDecl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ElementDecl;
}
constexpr ::System::Xml::Schema::SchemaElementDecl* const& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__ElementDecl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ElementDecl;
}
constexpr void System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_set__ElementDecl(::System::Xml::Schema::SchemaElementDecl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ElementDecl = value;
}
constexpr int32_t& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__ContentAttr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ContentAttr;
}
constexpr int32_t const& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__ContentAttr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ContentAttr;
}
constexpr void System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_set__ContentAttr(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ContentAttr = value;
}
constexpr int32_t& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__OrderAttr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OrderAttr;
}
constexpr int32_t const& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__OrderAttr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____OrderAttr;
}
constexpr void System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_set__OrderAttr(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____OrderAttr = value;
}
constexpr bool& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__MasterGroupRequired() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MasterGroupRequired;
}
constexpr bool const& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__MasterGroupRequired() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MasterGroupRequired;
}
constexpr void System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_set__MasterGroupRequired(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MasterGroupRequired = value;
}
constexpr bool& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__ExistTerminal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExistTerminal;
}
constexpr bool const& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__ExistTerminal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ExistTerminal;
}
constexpr void System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_set__ExistTerminal(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ExistTerminal = value;
}
constexpr bool& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__AllowDataType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AllowDataType;
}
constexpr bool const& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__AllowDataType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AllowDataType;
}
constexpr void System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_set__AllowDataType(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AllowDataType = value;
}
constexpr bool& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__HasDataType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HasDataType;
}
constexpr bool const& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__HasDataType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HasDataType;
}
constexpr void System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_set__HasDataType(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____HasDataType = value;
}
constexpr bool& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__HasType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HasType;
}
constexpr bool const& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__HasType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HasType;
}
constexpr void System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_set__HasType(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____HasType = value;
}
constexpr bool& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__EnumerationRequired() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EnumerationRequired;
}
constexpr bool const& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__EnumerationRequired() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EnumerationRequired;
}
constexpr void System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_set__EnumerationRequired(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____EnumerationRequired = value;
}
constexpr uint32_t& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__MinVal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MinVal;
}
constexpr uint32_t const& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__MinVal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MinVal;
}
constexpr void System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_set__MinVal(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MinVal = value;
}
constexpr uint32_t& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__MaxVal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxVal;
}
constexpr uint32_t const& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__MaxVal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxVal;
}
constexpr void System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_set__MaxVal(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MaxVal = value;
}
constexpr uint32_t& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__MaxLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxLength;
}
constexpr uint32_t const& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__MaxLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxLength;
}
constexpr void System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_set__MaxLength(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MaxLength = value;
}
constexpr uint32_t& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__MinLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MinLength;
}
constexpr uint32_t const& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__MinLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MinLength;
}
constexpr void System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_set__MinLength(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MinLength = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__AttDefList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AttDefList;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_get__AttDefList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AttDefList;
}
constexpr void System::Xml::Schema::XdrBuilder_ElementContent::__cordl_internal_set__AttDefList(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AttDefList = value;
}
inline void System::Xml::Schema::XdrBuilder_ElementContent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_ElementContent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XdrBuilder_ElementContent* System::Xml::Schema::XdrBuilder_ElementContent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XdrBuilder_ElementContent*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XdrBuilder_ElementContent::XdrBuilder_ElementContent() {}
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_AttributeContent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder_AttributeContent::*)()>(&::System::Xml::Schema::XdrBuilder_AttributeContent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x621f35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_AttributeContent*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::SchemaAttDef*& System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_get__AttDef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AttDef;
}
constexpr ::System::Xml::Schema::SchemaAttDef* const& System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_get__AttDef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AttDef;
}
constexpr void System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_set__AttDef(::System::Xml::Schema::SchemaAttDef* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AttDef = value;
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_get__Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_get__Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name;
}
constexpr void System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_set__Name(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name = value;
}
constexpr ::StringW& System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_get__Prefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Prefix;
}
constexpr ::StringW const& System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_get__Prefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Prefix;
}
constexpr void System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_set__Prefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Prefix = value;
}
constexpr bool& System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_get__Required() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Required;
}
constexpr bool const& System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_get__Required() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Required;
}
constexpr void System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_set__Required(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Required = value;
}
constexpr uint32_t& System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_get__MinVal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MinVal;
}
constexpr uint32_t const& System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_get__MinVal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MinVal;
}
constexpr void System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_set__MinVal(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MinVal = value;
}
constexpr uint32_t& System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_get__MaxVal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxVal;
}
constexpr uint32_t const& System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_get__MaxVal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxVal;
}
constexpr void System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_set__MaxVal(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MaxVal = value;
}
constexpr uint32_t& System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_get__MaxLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxLength;
}
constexpr uint32_t const& System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_get__MaxLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MaxLength;
}
constexpr void System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_set__MaxLength(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MaxLength = value;
}
constexpr uint32_t& System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_get__MinLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MinLength;
}
constexpr uint32_t const& System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_get__MinLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____MinLength;
}
constexpr void System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_set__MinLength(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____MinLength = value;
}
constexpr bool& System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_get__EnumerationRequired() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EnumerationRequired;
}
constexpr bool const& System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_get__EnumerationRequired() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EnumerationRequired;
}
constexpr void System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_set__EnumerationRequired(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____EnumerationRequired = value;
}
constexpr bool& System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_get__HasDataType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HasDataType;
}
constexpr bool const& System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_get__HasDataType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____HasDataType;
}
constexpr void System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_set__HasDataType(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____HasDataType = value;
}
constexpr bool& System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_get__Global() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Global;
}
constexpr bool const& System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_get__Global() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Global;
}
constexpr void System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_set__Global(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Global = value;
}
constexpr ::System::Object*& System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_get__Default() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Default;
}
constexpr ::System::Object* const& System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_get__Default() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Default;
}
constexpr void System::Xml::Schema::XdrBuilder_AttributeContent::__cordl_internal_set__Default(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Default = value;
}
inline void System::Xml::Schema::XdrBuilder_AttributeContent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_AttributeContent*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Schema::XdrBuilder_AttributeContent* System::Xml::Schema::XdrBuilder_AttributeContent::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XdrBuilder_AttributeContent*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XdrBuilder_AttributeContent::XdrBuilder_AttributeContent() {}
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_XdrBuildFunction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder_XdrBuildFunction::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Xml::Schema::XdrBuilder_XdrBuildFunction::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6226260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrBuildFunction*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_XdrBuildFunction.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder_XdrBuildFunction::*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder_XdrBuildFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x62264fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrBuildFunction*>(), { ::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrBuildFunction*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XdrBuilder_XdrBuildFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrBuildFunction*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Xml::Schema::XdrBuilder_XdrBuildFunction::Invoke(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrBuildFunction*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builder, obj, prefix);
}
inline ::System::Xml::Schema::XdrBuilder_XdrBuildFunction* System::Xml::Schema::XdrBuilder_XdrBuildFunction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XdrBuilder_XdrBuildFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XdrBuilder_XdrBuildFunction::XdrBuilder_XdrBuildFunction() {}
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_XdrInitFunction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder_XdrInitFunction::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Xml::Schema::XdrBuilder_XdrInitFunction::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x622635c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrInitFunction*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_XdrInitFunction.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder_XdrInitFunction::*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*)>(
    &::System::Xml::Schema::XdrBuilder_XdrInitFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6226510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrInitFunction*>(), { ::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrInitFunction*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XdrBuilder_XdrInitFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrInitFunction*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Xml::Schema::XdrBuilder_XdrInitFunction::Invoke(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrInitFunction*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builder, obj);
}
inline ::System::Xml::Schema::XdrBuilder_XdrInitFunction* System::Xml::Schema::XdrBuilder_XdrInitFunction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XdrBuilder_XdrInitFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XdrBuilder_XdrInitFunction::XdrBuilder_XdrInitFunction() {}
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x62263dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction::*)(::System::Xml::Schema::XdrBuilder*)>(
    &::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6226524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XdrBuilder_XdrBeginChildFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Xml::Schema::XdrBuilder_XdrBeginChildFunction::Invoke(::System::Xml::Schema::XdrBuilder* builder) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builder);
}
inline ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction* System::Xml::Schema::XdrBuilder_XdrBeginChildFunction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction::XdrBuilder_XdrBeginChildFunction() {}
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder_XdrEndChildFunction::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Xml::Schema::XdrBuilder_XdrEndChildFunction::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6226458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrEndChildFunction*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder_XdrEndChildFunction::*)(::System::Xml::Schema::XdrBuilder*)>(
    &::System::Xml::Schema::XdrBuilder_XdrEndChildFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6226538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrEndChildFunction*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrEndChildFunction*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XdrBuilder_XdrEndChildFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrEndChildFunction*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Xml::Schema::XdrBuilder_XdrEndChildFunction::Invoke(::System::Xml::Schema::XdrBuilder* builder) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrEndChildFunction*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builder);
}
inline ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction* System::Xml::Schema::XdrBuilder_XdrEndChildFunction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XdrBuilder_XdrEndChildFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction::XdrBuilder_XdrEndChildFunction() {}
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_XdrAttributeEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder_XdrAttributeEntry::*)(
    ::System::Xml::Schema::SchemaNames_Token, ::System::Xml::XmlTokenizedType, ::System::Xml::Schema::XdrBuilder_XdrBuildFunction*)>(&::System::Xml::Schema::XdrBuilder_XdrAttributeEntry::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x62262e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Schema::SchemaNames_Token>(), ::i2c::type_of<::System::Xml::XmlTokenizedType>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::XdrBuilder_XdrBuildFunction*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_XdrAttributeEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder_XdrAttributeEntry::*)(::System::Xml::Schema::SchemaNames_Token, ::System::Xml::XmlTokenizedType, int32_t,
                                                                                                                     ::System::Xml::Schema::XdrBuilder_XdrBuildFunction*)>(
    &::System::Xml::Schema::XdrBuilder_XdrAttributeEntry::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6226310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::Schema::SchemaNames_Token>(), ::i2c::type_of<::System::Xml::XmlTokenizedType>(),
                                                                 ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Xml::Schema::XdrBuilder_XdrBuildFunction*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::SchemaNames_Token& System::Xml::Schema::XdrBuilder_XdrAttributeEntry::__cordl_internal_get__Attribute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Attribute;
}
constexpr ::System::Xml::Schema::SchemaNames_Token const& System::Xml::Schema::XdrBuilder_XdrAttributeEntry::__cordl_internal_get__Attribute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Attribute;
}
constexpr void System::Xml::Schema::XdrBuilder_XdrAttributeEntry::__cordl_internal_set__Attribute(::System::Xml::Schema::SchemaNames_Token value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Attribute = value;
}
constexpr int32_t& System::Xml::Schema::XdrBuilder_XdrAttributeEntry::__cordl_internal_get__SchemaFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SchemaFlags;
}
constexpr int32_t const& System::Xml::Schema::XdrBuilder_XdrAttributeEntry::__cordl_internal_get__SchemaFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SchemaFlags;
}
constexpr void System::Xml::Schema::XdrBuilder_XdrAttributeEntry::__cordl_internal_set__SchemaFlags(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SchemaFlags = value;
}
constexpr ::System::Xml::Schema::XmlSchemaDatatype*& System::Xml::Schema::XdrBuilder_XdrAttributeEntry::__cordl_internal_get__Datatype() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Datatype;
}
constexpr ::System::Xml::Schema::XmlSchemaDatatype* const& System::Xml::Schema::XdrBuilder_XdrAttributeEntry::__cordl_internal_get__Datatype() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Datatype;
}
constexpr void System::Xml::Schema::XdrBuilder_XdrAttributeEntry::__cordl_internal_set__Datatype(::System::Xml::Schema::XmlSchemaDatatype* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Datatype = value;
}
constexpr ::System::Xml::Schema::XdrBuilder_XdrBuildFunction*& System::Xml::Schema::XdrBuilder_XdrAttributeEntry::__cordl_internal_get__BuildFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BuildFunc;
}
constexpr ::System::Xml::Schema::XdrBuilder_XdrBuildFunction* const& System::Xml::Schema::XdrBuilder_XdrAttributeEntry::__cordl_internal_get__BuildFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BuildFunc;
}
constexpr void System::Xml::Schema::XdrBuilder_XdrAttributeEntry::__cordl_internal_set__BuildFunc(::System::Xml::Schema::XdrBuilder_XdrBuildFunction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BuildFunc = value;
}
inline void System::Xml::Schema::XdrBuilder_XdrAttributeEntry::_ctor(::System::Xml::Schema::SchemaNames_Token a, ::System::Xml::XmlTokenizedType ttype,
                                                                     ::System::Xml::Schema::XdrBuilder_XdrBuildFunction* build) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::SchemaNames_Token>(), ::i2c::type_of<::System::Xml::XmlTokenizedType>(),
                                                               ::i2c::type_of<::System::Xml::Schema::XdrBuilder_XdrBuildFunction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, ttype, build);
}
inline void System::Xml::Schema::XdrBuilder_XdrAttributeEntry::_ctor(::System::Xml::Schema::SchemaNames_Token a, ::System::Xml::XmlTokenizedType ttype, int32_t schemaFlags,
                                                                     ::System::Xml::Schema::XdrBuilder_XdrBuildFunction* build) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::Schema::SchemaNames_Token>(), ::i2c::type_of<::System::Xml::XmlTokenizedType>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::System::Xml::Schema::XdrBuilder_XdrBuildFunction*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, a, ttype, schemaFlags, build);
}
inline ::System::Xml::Schema::XdrBuilder_XdrAttributeEntry* System::Xml::Schema::XdrBuilder_XdrAttributeEntry::New_ctor(::System::Xml::Schema::SchemaNames_Token a,
                                                                                                                        ::System::Xml::XmlTokenizedType ttype,
                                                                                                                        ::System::Xml::Schema::XdrBuilder_XdrBuildFunction* build) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>(a, ttype, build));
}
inline ::System::Xml::Schema::XdrBuilder_XdrAttributeEntry* System::Xml::Schema::XdrBuilder_XdrAttributeEntry::New_ctor(::System::Xml::Schema::SchemaNames_Token a,
                                                                                                                        ::System::Xml::XmlTokenizedType ttype, int32_t schemaFlags,
                                                                                                                        ::System::Xml::Schema::XdrBuilder_XdrBuildFunction* build) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>(a, ttype, schemaFlags, build));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XdrBuilder_XdrAttributeEntry::XdrBuilder_XdrAttributeEntry() {}
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_XdrEntry._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder_XdrEntry::*)(
    ::System::Xml::Schema::SchemaNames_Token, ::ArrayW<int32_t>, ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>, ::System::Xml::Schema::XdrBuilder_XdrInitFunction*,
    ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction*, ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction*, bool)>(&::System::Xml::Schema::XdrBuilder_XdrEntry::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6226344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrEntry*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Xml::Schema::SchemaNames_Token>(), ::i2c::type_of<::ArrayW<int32_t>>(),
                                                    ::i2c::type_of<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>>(),
                                                    ::i2c::type_of<::System::Xml::Schema::XdrBuilder_XdrInitFunction*>(), ::i2c::type_of<::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction*>(),
                                                    ::i2c::type_of<::System::Xml::Schema::XdrBuilder_XdrEndChildFunction*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::SchemaNames_Token& System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_get__Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name;
}
constexpr ::System::Xml::Schema::SchemaNames_Token const& System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_get__Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name;
}
constexpr void System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_set__Name(::System::Xml::Schema::SchemaNames_Token value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Name = value;
}
constexpr ::ArrayW<int32_t>& System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_get__NextStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NextStates;
}
constexpr ::ArrayW<int32_t> const& System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_get__NextStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NextStates;
}
constexpr void System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_set__NextStates(::ArrayW<int32_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____NextStates = value;
}
constexpr ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>& System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_get__Attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Attributes;
}
constexpr ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*> const& System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_get__Attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Attributes;
}
constexpr void System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_set__Attributes(::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Attributes = value;
}
constexpr ::System::Xml::Schema::XdrBuilder_XdrInitFunction*& System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_get__InitFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InitFunc;
}
constexpr ::System::Xml::Schema::XdrBuilder_XdrInitFunction* const& System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_get__InitFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____InitFunc;
}
constexpr void System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_set__InitFunc(::System::Xml::Schema::XdrBuilder_XdrInitFunction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____InitFunc = value;
}
constexpr ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction*& System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_get__BeginChildFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BeginChildFunc;
}
constexpr ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction* const& System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_get__BeginChildFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BeginChildFunc;
}
constexpr void System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_set__BeginChildFunc(::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BeginChildFunc = value;
}
constexpr ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction*& System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_get__EndChildFunc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EndChildFunc;
}
constexpr ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction* const& System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_get__EndChildFunc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____EndChildFunc;
}
constexpr void System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_set__EndChildFunc(::System::Xml::Schema::XdrBuilder_XdrEndChildFunction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____EndChildFunc = value;
}
constexpr bool& System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_get__AllowText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AllowText;
}
constexpr bool const& System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_get__AllowText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AllowText;
}
constexpr void System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_set__AllowText(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AllowText = value;
}
inline void System::Xml::Schema::XdrBuilder_XdrEntry::_ctor(::System::Xml::Schema::SchemaNames_Token n, ::ArrayW<int32_t> states,
                                                            ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*> attributes, ::System::Xml::Schema::XdrBuilder_XdrInitFunction* init,
                                                            ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction* begin, ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction* end, bool fText) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder_XdrEntry*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Xml::Schema::SchemaNames_Token>(), ::i2c::type_of<::ArrayW<int32_t>>(),
                                                  ::i2c::type_of<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>>(),
                                                  ::i2c::type_of<::System::Xml::Schema::XdrBuilder_XdrInitFunction*>(), ::i2c::type_of<::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction*>(),
                                                  ::i2c::type_of<::System::Xml::Schema::XdrBuilder_XdrEndChildFunction*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, n, states, attributes, init, begin, end, fText);
}
inline ::System::Xml::Schema::XdrBuilder_XdrEntry* System::Xml::Schema::XdrBuilder_XdrEntry::New_ctor(::System::Xml::Schema::SchemaNames_Token n, ::ArrayW<int32_t> states,
                                                                                                      ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*> attributes,
                                                                                                      ::System::Xml::Schema::XdrBuilder_XdrInitFunction* init,
                                                                                                      ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction* begin,
                                                                                                      ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction* end, bool fText) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XdrBuilder_XdrEntry*>(n, states, attributes, init, begin, end, fText));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XdrBuilder_XdrEntry::XdrBuilder_XdrEntry() {}
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::System::Xml::Schema::XdrBuilder::*)(::System::Xml::XmlReader*, ::System::Xml::XmlNamespaceManager*, ::System::Xml::Schema::SchemaInfo*, ::StringW, ::System::Xml::XmlNameTable*,
                                                            ::System::Xml::Schema::SchemaNames*, ::System::Xml::Schema::ValidationEventHandler*)>(&::System::Xml::Schema::XdrBuilder::_ctor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x621f178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlNameTable*>(),
                                                                 ::i2c::type_of<::System::Xml::Schema::SchemaNames*>(), ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.ProcessElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XdrBuilder::*)(::StringW, ::StringW, ::StringW)>(&::System::Xml::Schema::XdrBuilder::ProcessElement)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x621f364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { ::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.ProcessAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)(::StringW, ::StringW, ::StringW, ::StringW)>(&::System::Xml::Schema::XdrBuilder::ProcessAttribute)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x621f9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { ::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.set_XmlResolver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)(::System::Xml::XmlResolver*)>(&::System::Xml::Schema::XdrBuilder::set_XmlResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6220430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "set_XmlResolver", {}, { ::i2c::type_of<::System::Xml::XmlResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.LoadSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XdrBuilder::*)(::StringW)>(&::System::Xml::Schema::XdrBuilder::LoadSchema)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x621fe4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "LoadSchema", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.IsXdrSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::System::Xml::Schema::XdrBuilder::IsXdrSchema)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x621fd8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "IsXdrSchema", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.IsContentParsed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XdrBuilder::*)()>(&::System::Xml::Schema::XdrBuilder::IsContentParsed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6220550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { ::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.ProcessMarkup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)(::ArrayW<::System::Xml::XmlNode*>)>(&::System::Xml::Schema::XdrBuilder::ProcessMarkup)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6220558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { ::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.ProcessCData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)(::StringW)>(&::System::Xml::Schema::XdrBuilder::ProcessCData)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x62205a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { ::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.StartChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)()>(&::System::Xml::Schema::XdrBuilder::StartChildren)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x622062c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { ::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.EndChildren
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)()>(&::System::Xml::Schema::XdrBuilder::EndChildren)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x622065c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { ::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.Push
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)()>(&::System::Xml::Schema::XdrBuilder::Push)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x621f7e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "Push", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.Pop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)()>(&::System::Xml::Schema::XdrBuilder::Pop)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6220698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "Pop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.PushGroupInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)()>(&::System::Xml::Schema::XdrBuilder::PushGroupInfo)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x622071c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "PushGroupInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.PopGroupInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)()>(&::System::Xml::Schema::XdrBuilder::PopGroupInfo)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x62207cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "PopGroupInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_InitRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*)>(&::System::Xml::Schema::XdrBuilder::XDR_InitRoot)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6220850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                                             { "XDR_InitRoot", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildRoot_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(&::System::Xml::Schema::XdrBuilder::XDR_BuildRoot_Name)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6220890;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                         { "XDR_BuildRoot_Name", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildRoot_ID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(&::System::Xml::Schema::XdrBuilder::XDR_BuildRoot_ID)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x62208e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                         { "XDR_BuildRoot_ID", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BeginRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::XDR_BeginRoot)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x62208e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "XDR_BeginRoot", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_EndRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::XDR_EndRoot)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x62209c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "XDR_EndRoot", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_InitElementType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*)>(&::System::Xml::Schema::XdrBuilder::XDR_InitElementType)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6220f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                                             { "XDR_InitElementType", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildElementType_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(&::System::Xml::Schema::XdrBuilder::XDR_BuildElementType_Name)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6221014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "XDR_BuildElementType_Name", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildElementType_Content
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(&::System::Xml::Schema::XdrBuilder::XDR_BuildElementType_Content)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x62211dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "XDR_BuildElementType_Content", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildElementType_Model
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(&::System::Xml::Schema::XdrBuilder::XDR_BuildElementType_Model)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6221418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "XDR_BuildElementType_Model", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildElementType_Order
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(&::System::Xml::Schema::XdrBuilder::XDR_BuildElementType_Order)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x62215a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "XDR_BuildElementType_Order", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildElementType_DtType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(&::System::Xml::Schema::XdrBuilder::XDR_BuildElementType_DtType)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6221788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "XDR_BuildElementType_DtType", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildElementType_DtValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(&::System::Xml::Schema::XdrBuilder::XDR_BuildElementType_DtValues)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6221908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "XDR_BuildElementType_DtValues", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildElementType_DtMaxLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildElementType_DtMaxLength)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x62219f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "XDR_BuildElementType_DtMaxLength", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildElementType_DtMinLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildElementType_DtMinLength)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6221bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "XDR_BuildElementType_DtMinLength", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BeginElementType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::XDR_BeginElementType)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x6221d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "XDR_BeginElementType", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_EndElementType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::XDR_EndElementType)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x6222090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "XDR_EndElementType", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_InitAttributeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*)>(&::System::Xml::Schema::XdrBuilder::XDR_InitAttributeType)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6222490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                                             { "XDR_InitAttributeType", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildAttributeType_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(&::System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_Name)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x622257c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "XDR_BuildAttributeType_Name", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildAttributeType_Required
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_Required)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x62227cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "XDR_BuildAttributeType_Required", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildAttributeType_Default
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_Default)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x622296c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "XDR_BuildAttributeType_Default", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildAttributeType_DtType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(&::System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_DtType)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x622298c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "XDR_BuildAttributeType_DtType", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildAttributeType_DtValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_DtValues)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x6222ba0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "XDR_BuildAttributeType_DtValues", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildAttributeType_DtMaxLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_DtMaxLength)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6222c88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "XDR_BuildAttributeType_DtMaxLength", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildAttributeType_DtMinLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_DtMinLength)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6222d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "XDR_BuildAttributeType_DtMinLength", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BeginAttributeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::XDR_BeginAttributeType)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6222d80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "XDR_BeginAttributeType", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_EndAttributeType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::XDR_EndAttributeType)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x6222e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "XDR_EndAttributeType", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_InitElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*)>(&::System::Xml::Schema::XdrBuilder::XDR_InitElement)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x62231bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                                             { "XDR_InitElement", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildElement_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(&::System::Xml::Schema::XdrBuilder::XDR_BuildElement_Type)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x622325c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                         { "XDR_BuildElement_Type", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildElement_MinOccurs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(&::System::Xml::Schema::XdrBuilder::XDR_BuildElement_MinOccurs)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x62234b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "XDR_BuildElement_MinOccurs", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildElement_MaxOccurs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(&::System::Xml::Schema::XdrBuilder::XDR_BuildElement_MaxOccurs)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6223628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "XDR_BuildElement_MaxOccurs", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_EndElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::XDR_EndElement)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x62237d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "XDR_EndElement", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_InitAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*)>(&::System::Xml::Schema::XdrBuilder::XDR_InitAttribute)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x62238c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                                             { "XDR_InitAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildAttribute_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(&::System::Xml::Schema::XdrBuilder::XDR_BuildAttribute_Type)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6223938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "XDR_BuildAttribute_Type", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildAttribute_Required
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(&::System::Xml::Schema::XdrBuilder::XDR_BuildAttribute_Required)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6223a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "XDR_BuildAttribute_Required", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildAttribute_Default
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(&::System::Xml::Schema::XdrBuilder::XDR_BuildAttribute_Default)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6223a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "XDR_BuildAttribute_Default", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BeginAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::XDR_BeginAttribute)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x6223aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "XDR_BeginAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_EndAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::XDR_EndAttribute)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6223d74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "XDR_EndAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_InitGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*)>(&::System::Xml::Schema::XdrBuilder::XDR_InitGroup)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6223e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                                             { "XDR_InitGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildGroup_Order
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(&::System::Xml::Schema::XdrBuilder::XDR_BuildGroup_Order)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6223ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                         { "XDR_BuildGroup_Order", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildGroup_MinOccurs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(&::System::Xml::Schema::XdrBuilder::XDR_BuildGroup_MinOccurs)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6224000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "XDR_BuildGroup_MinOccurs", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildGroup_MaxOccurs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(&::System::Xml::Schema::XdrBuilder::XDR_BuildGroup_MaxOccurs)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6224090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "XDR_BuildGroup_MaxOccurs", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_EndGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::XDR_EndGroup)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6224120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "XDR_EndGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_InitElementDtType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*)>(&::System::Xml::Schema::XdrBuilder::XDR_InitElementDtType)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x622427c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                                             { "XDR_InitElementDtType", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_EndElementDtType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::XDR_EndElementDtType)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6224340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "XDR_EndElementDtType", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_InitAttributeDtType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*)>(&::System::Xml::Schema::XdrBuilder::XDR_InitAttributeDtType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6224418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                                             { "XDR_InitAttributeDtType", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_EndAttributeDtType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::XDR_EndAttributeDtType)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6224498;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "XDR_EndAttributeDtType", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.GetNextState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XdrBuilder::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::XdrBuilder::GetNextState)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x621f64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "GetNextState", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.IsSkipableElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XdrBuilder::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::XdrBuilder::IsSkipableElement)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x621f830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "IsSkipableElement", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.IsSkipableAttribute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XdrBuilder::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::XdrBuilder::IsSkipableAttribute)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6220320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "IsSkipableAttribute", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.GetOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XdrBuilder::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::XdrBuilder::GetOrder)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x6221658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "GetOrder", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.AddOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)()>(&::System::Xml::Schema::XdrBuilder::AddOrder)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x62233f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "AddOrder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.IsYes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Object*, ::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::IsYes)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6222850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "IsYes", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.ParseMinOccurs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::Object*, ::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::ParseMinOccurs)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6223534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                                             { "ParseMinOccurs", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.ParseMaxOccurs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::Object*, ::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::ParseMaxOccurs)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x62236a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                                             { "ParseMaxOccurs", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.HandleMinMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Xml::Schema::ParticleContentValidator*, uint32_t, uint32_t)>(&::System::Xml::Schema::XdrBuilder::HandleMinMax)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6223894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                         { "HandleMinMax", {}, { ::i2c::type_of<::System::Xml::Schema::ParticleContentValidator*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.ParseDtMaxLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint32_t>, ::System::Object*, ::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::ParseDtMaxLength)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6221a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "ParseDtMaxLength", {}, { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.ParseDtMinLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<uint32_t>, ::System::Object*, ::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::ParseDtMinLength)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x6221c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "ParseDtMinLength", {}, { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.CompareMinMaxLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint32_t, uint32_t, ::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::CompareMinMaxLength)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x62223fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                                { "CompareMinMaxLength", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.ParseInteger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::by_ref<uint32_t>)>(&::System::Xml::Schema::XdrBuilder::ParseInteger)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x62245a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "ParseInteger", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_CheckAttributeDefault
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)(::System::Xml::Schema::XdrBuilder_DeclBaseInfo*, ::System::Xml::Schema::SchemaAttDef*)>(
    &::System::Xml::Schema::XdrBuilder::XDR_CheckAttributeDefault)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6220e68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "XDR_CheckAttributeDefault", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder_DeclBaseInfo*>(), ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.SetAttributePresence
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)(::System::Xml::Schema::SchemaAttDef*, bool)>(
    &::System::Xml::Schema::XdrBuilder::SetAttributePresence)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6223170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                                             { "SetAttributePresence", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.GetContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Schema::XdrBuilder::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::XdrBuilder::GetContent)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6221284;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "GetContent", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.GetModel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XdrBuilder::*)(::System::Xml::XmlQualifiedName*)>(&::System::Xml::Schema::XdrBuilder::GetModel)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x62214c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "GetModel", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.CheckDatatype
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::XmlSchemaDatatype* (::System::Xml::Schema::XdrBuilder::*)(::StringW)>(
    &::System::Xml::Schema::XdrBuilder::CheckDatatype)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6222a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "CheckDatatype", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.CheckDefaultAttValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)(::System::Xml::Schema::SchemaAttDef*)>(&::System::Xml::Schema::XdrBuilder::CheckDefaultAttValue)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6223074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "CheckDefaultAttValue", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.IsGlobal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Schema::XdrBuilder::*)(int32_t)>(&::System::Xml::Schema::XdrBuilder::IsGlobal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x621fd80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "IsGlobal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)(::StringW, ::ArrayW<::StringW>, ::System::Xml::Schema::XmlSeverityType)>(
    &::System::Xml::Schema::XdrBuilder::SendValidationEvent)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6220438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                            { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)(::StringW)>(&::System::Xml::Schema::XdrBuilder::SendValidationEvent)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6221898;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)(::StringW, ::StringW)>(&::System::Xml::Schema::XdrBuilder::SendValidationEvent)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x621f8ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.SendValidationEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)(::System::Xml::Schema::XmlSchemaException*, ::System::Xml::Schema::XmlSeverityType)>(
    &::System::Xml::Schema::XdrBuilder::SendValidationEvent)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6224ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                         { "SendValidationEvent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaException*>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::Schema::SchemaInfo*& System::Xml::Schema::XdrBuilder::__cordl_internal_get__SchemaInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SchemaInfo;
}
constexpr ::System::Xml::Schema::SchemaInfo* const& System::Xml::Schema::XdrBuilder::__cordl_internal_get__SchemaInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SchemaInfo;
}
constexpr void System::Xml::Schema::XdrBuilder::__cordl_internal_set__SchemaInfo(::System::Xml::Schema::SchemaInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SchemaInfo = value;
}
constexpr ::StringW& System::Xml::Schema::XdrBuilder::__cordl_internal_get__TargetNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TargetNamespace;
}
constexpr ::StringW const& System::Xml::Schema::XdrBuilder::__cordl_internal_get__TargetNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____TargetNamespace;
}
constexpr void System::Xml::Schema::XdrBuilder::__cordl_internal_set__TargetNamespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____TargetNamespace = value;
}
constexpr ::System::Xml::XmlReader*& System::Xml::Schema::XdrBuilder::__cordl_internal_get__reader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reader;
}
constexpr ::System::Xml::XmlReader* const& System::Xml::Schema::XdrBuilder::__cordl_internal_get__reader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____reader;
}
constexpr void System::Xml::Schema::XdrBuilder::__cordl_internal_set__reader(::System::Xml::XmlReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____reader = value;
}
constexpr ::System::Xml::PositionInfo*& System::Xml::Schema::XdrBuilder::__cordl_internal_get_positionInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionInfo;
}
constexpr ::System::Xml::PositionInfo* const& System::Xml::Schema::XdrBuilder::__cordl_internal_get_positionInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___positionInfo;
}
constexpr void System::Xml::Schema::XdrBuilder::__cordl_internal_set_positionInfo(::System::Xml::PositionInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___positionInfo = value;
}
constexpr ::System::Xml::Schema::ParticleContentValidator*& System::Xml::Schema::XdrBuilder::__cordl_internal_get__contentValidator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentValidator;
}
constexpr ::System::Xml::Schema::ParticleContentValidator* const& System::Xml::Schema::XdrBuilder::__cordl_internal_get__contentValidator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentValidator;
}
constexpr void System::Xml::Schema::XdrBuilder::__cordl_internal_set__contentValidator(::System::Xml::Schema::ParticleContentValidator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contentValidator = value;
}
constexpr ::System::Xml::Schema::XdrBuilder_XdrEntry*& System::Xml::Schema::XdrBuilder::__cordl_internal_get__CurState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CurState;
}
constexpr ::System::Xml::Schema::XdrBuilder_XdrEntry* const& System::Xml::Schema::XdrBuilder::__cordl_internal_get__CurState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CurState;
}
constexpr void System::Xml::Schema::XdrBuilder::__cordl_internal_set__CurState(::System::Xml::Schema::XdrBuilder_XdrEntry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CurState = value;
}
constexpr ::System::Xml::Schema::XdrBuilder_XdrEntry*& System::Xml::Schema::XdrBuilder::__cordl_internal_get__NextState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NextState;
}
constexpr ::System::Xml::Schema::XdrBuilder_XdrEntry* const& System::Xml::Schema::XdrBuilder::__cordl_internal_get__NextState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NextState;
}
constexpr void System::Xml::Schema::XdrBuilder::__cordl_internal_set__NextState(::System::Xml::Schema::XdrBuilder_XdrEntry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____NextState = value;
}
constexpr ::System::Xml::HWStack*& System::Xml::Schema::XdrBuilder::__cordl_internal_get__StateHistory() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StateHistory;
}
constexpr ::System::Xml::HWStack* const& System::Xml::Schema::XdrBuilder::__cordl_internal_get__StateHistory() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____StateHistory;
}
constexpr void System::Xml::Schema::XdrBuilder::__cordl_internal_set__StateHistory(::System::Xml::HWStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____StateHistory = value;
}
constexpr ::System::Xml::HWStack*& System::Xml::Schema::XdrBuilder::__cordl_internal_get__GroupStack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GroupStack;
}
constexpr ::System::Xml::HWStack* const& System::Xml::Schema::XdrBuilder::__cordl_internal_get__GroupStack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GroupStack;
}
constexpr void System::Xml::Schema::XdrBuilder::__cordl_internal_set__GroupStack(::System::Xml::HWStack* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____GroupStack = value;
}
constexpr ::StringW& System::Xml::Schema::XdrBuilder::__cordl_internal_get__XdrName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XdrName;
}
constexpr ::StringW const& System::Xml::Schema::XdrBuilder::__cordl_internal_get__XdrName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XdrName;
}
constexpr void System::Xml::Schema::XdrBuilder::__cordl_internal_set__XdrName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____XdrName = value;
}
constexpr ::StringW& System::Xml::Schema::XdrBuilder::__cordl_internal_get__XdrPrefix() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XdrPrefix;
}
constexpr ::StringW const& System::Xml::Schema::XdrBuilder::__cordl_internal_get__XdrPrefix() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____XdrPrefix;
}
constexpr void System::Xml::Schema::XdrBuilder::__cordl_internal_set__XdrPrefix(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____XdrPrefix = value;
}
constexpr ::System::Xml::Schema::XdrBuilder_ElementContent*& System::Xml::Schema::XdrBuilder::__cordl_internal_get__ElementDef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ElementDef;
}
constexpr ::System::Xml::Schema::XdrBuilder_ElementContent* const& System::Xml::Schema::XdrBuilder::__cordl_internal_get__ElementDef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ElementDef;
}
constexpr void System::Xml::Schema::XdrBuilder::__cordl_internal_set__ElementDef(::System::Xml::Schema::XdrBuilder_ElementContent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ElementDef = value;
}
constexpr ::System::Xml::Schema::XdrBuilder_GroupContent*& System::Xml::Schema::XdrBuilder::__cordl_internal_get__GroupDef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GroupDef;
}
constexpr ::System::Xml::Schema::XdrBuilder_GroupContent* const& System::Xml::Schema::XdrBuilder::__cordl_internal_get__GroupDef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____GroupDef;
}
constexpr void System::Xml::Schema::XdrBuilder::__cordl_internal_set__GroupDef(::System::Xml::Schema::XdrBuilder_GroupContent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____GroupDef = value;
}
constexpr ::System::Xml::Schema::XdrBuilder_AttributeContent*& System::Xml::Schema::XdrBuilder::__cordl_internal_get__AttributeDef() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AttributeDef;
}
constexpr ::System::Xml::Schema::XdrBuilder_AttributeContent* const& System::Xml::Schema::XdrBuilder::__cordl_internal_get__AttributeDef() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AttributeDef;
}
constexpr void System::Xml::Schema::XdrBuilder::__cordl_internal_set__AttributeDef(::System::Xml::Schema::XdrBuilder_AttributeContent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____AttributeDef = value;
}
constexpr ::System::Xml::Schema::XdrBuilder_DeclBaseInfo*& System::Xml::Schema::XdrBuilder::__cordl_internal_get__UndefinedAttributeTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UndefinedAttributeTypes;
}
constexpr ::System::Xml::Schema::XdrBuilder_DeclBaseInfo* const& System::Xml::Schema::XdrBuilder::__cordl_internal_get__UndefinedAttributeTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UndefinedAttributeTypes;
}
constexpr void System::Xml::Schema::XdrBuilder::__cordl_internal_set__UndefinedAttributeTypes(::System::Xml::Schema::XdrBuilder_DeclBaseInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UndefinedAttributeTypes = value;
}
constexpr ::System::Xml::Schema::XdrBuilder_DeclBaseInfo*& System::Xml::Schema::XdrBuilder::__cordl_internal_get__BaseDecl() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BaseDecl;
}
constexpr ::System::Xml::Schema::XdrBuilder_DeclBaseInfo* const& System::Xml::Schema::XdrBuilder::__cordl_internal_get__BaseDecl() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____BaseDecl;
}
constexpr void System::Xml::Schema::XdrBuilder::__cordl_internal_set__BaseDecl(::System::Xml::Schema::XdrBuilder_DeclBaseInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____BaseDecl = value;
}
constexpr ::System::Xml::XmlNameTable*& System::Xml::Schema::XdrBuilder::__cordl_internal_get__NameTable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NameTable;
}
constexpr ::System::Xml::XmlNameTable* const& System::Xml::Schema::XdrBuilder::__cordl_internal_get__NameTable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NameTable;
}
constexpr void System::Xml::Schema::XdrBuilder::__cordl_internal_set__NameTable(::System::Xml::XmlNameTable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____NameTable = value;
}
constexpr ::System::Xml::Schema::SchemaNames*& System::Xml::Schema::XdrBuilder::__cordl_internal_get__SchemaNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SchemaNames;
}
constexpr ::System::Xml::Schema::SchemaNames* const& System::Xml::Schema::XdrBuilder::__cordl_internal_get__SchemaNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____SchemaNames;
}
constexpr void System::Xml::Schema::XdrBuilder::__cordl_internal_set__SchemaNames(::System::Xml::Schema::SchemaNames* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____SchemaNames = value;
}
constexpr ::System::Xml::XmlNamespaceManager*& System::Xml::Schema::XdrBuilder::__cordl_internal_get__CurNsMgr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CurNsMgr;
}
constexpr ::System::Xml::XmlNamespaceManager* const& System::Xml::Schema::XdrBuilder::__cordl_internal_get__CurNsMgr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____CurNsMgr;
}
constexpr void System::Xml::Schema::XdrBuilder::__cordl_internal_set__CurNsMgr(::System::Xml::XmlNamespaceManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____CurNsMgr = value;
}
constexpr ::StringW& System::Xml::Schema::XdrBuilder::__cordl_internal_get__Text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Text;
}
constexpr ::StringW const& System::Xml::Schema::XdrBuilder::__cordl_internal_get__Text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Text;
}
constexpr void System::Xml::Schema::XdrBuilder::__cordl_internal_set__Text(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Text = value;
}
constexpr ::System::Xml::Schema::ValidationEventHandler*& System::Xml::Schema::XdrBuilder::__cordl_internal_get_validationEventHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationEventHandler;
}
constexpr ::System::Xml::Schema::ValidationEventHandler* const& System::Xml::Schema::XdrBuilder::__cordl_internal_get_validationEventHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___validationEventHandler;
}
constexpr void System::Xml::Schema::XdrBuilder::__cordl_internal_set_validationEventHandler(::System::Xml::Schema::ValidationEventHandler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___validationEventHandler = value;
}
constexpr ::System::Collections::Hashtable*& System::Xml::Schema::XdrBuilder::__cordl_internal_get__UndeclaredElements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UndeclaredElements;
}
constexpr ::System::Collections::Hashtable* const& System::Xml::Schema::XdrBuilder::__cordl_internal_get__UndeclaredElements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____UndeclaredElements;
}
constexpr void System::Xml::Schema::XdrBuilder::__cordl_internal_set__UndeclaredElements(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____UndeclaredElements = value;
}
constexpr ::System::Xml::XmlResolver*& System::Xml::Schema::XdrBuilder::__cordl_internal_get_xmlResolver() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlResolver;
}
constexpr ::System::Xml::XmlResolver* const& System::Xml::Schema::XdrBuilder::__cordl_internal_get_xmlResolver() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlResolver;
}
constexpr void System::Xml::Schema::XdrBuilder::__cordl_internal_set_xmlResolver(::System::Xml::XmlResolver* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlResolver = value;
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_Root_Element(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "S_XDR_Root_Element", ::System::Xml::Schema::XdrBuilder*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_Root_Element() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "S_XDR_Root_Element", ::System::Xml::Schema::XdrBuilder*>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_Root_SubElements(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "S_XDR_Root_SubElements", ::System::Xml::Schema::XdrBuilder*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_Root_SubElements() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "S_XDR_Root_SubElements", ::System::Xml::Schema::XdrBuilder*>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_ElementType_SubElements(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "S_XDR_ElementType_SubElements", ::System::Xml::Schema::XdrBuilder*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_ElementType_SubElements() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "S_XDR_ElementType_SubElements", ::System::Xml::Schema::XdrBuilder*>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_AttributeType_SubElements(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "S_XDR_AttributeType_SubElements", ::System::Xml::Schema::XdrBuilder*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_AttributeType_SubElements() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "S_XDR_AttributeType_SubElements", ::System::Xml::Schema::XdrBuilder*>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_Group_SubElements(::ArrayW<int32_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t>, "S_XDR_Group_SubElements", ::System::Xml::Schema::XdrBuilder*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_Group_SubElements() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "S_XDR_Group_SubElements", ::System::Xml::Schema::XdrBuilder*>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_Root_Attributes(::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>, "S_XDR_Root_Attributes", ::System::Xml::Schema::XdrBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*> System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_Root_Attributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>, "S_XDR_Root_Attributes", ::System::Xml::Schema::XdrBuilder*>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_ElementType_Attributes(::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>, "S_XDR_ElementType_Attributes", ::System::Xml::Schema::XdrBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*> System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_ElementType_Attributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>, "S_XDR_ElementType_Attributes", ::System::Xml::Schema::XdrBuilder*>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_AttributeType_Attributes(::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>, "S_XDR_AttributeType_Attributes", ::System::Xml::Schema::XdrBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*> System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_AttributeType_Attributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>, "S_XDR_AttributeType_Attributes", ::System::Xml::Schema::XdrBuilder*>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_Element_Attributes(::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>, "S_XDR_Element_Attributes", ::System::Xml::Schema::XdrBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*> System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_Element_Attributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>, "S_XDR_Element_Attributes", ::System::Xml::Schema::XdrBuilder*>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_Attribute_Attributes(::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>, "S_XDR_Attribute_Attributes", ::System::Xml::Schema::XdrBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*> System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_Attribute_Attributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>, "S_XDR_Attribute_Attributes", ::System::Xml::Schema::XdrBuilder*>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_Group_Attributes(::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>, "S_XDR_Group_Attributes", ::System::Xml::Schema::XdrBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*> System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_Group_Attributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>, "S_XDR_Group_Attributes", ::System::Xml::Schema::XdrBuilder*>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_ElementDataType_Attributes(::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>, "S_XDR_ElementDataType_Attributes", ::System::Xml::Schema::XdrBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*> System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_ElementDataType_Attributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>, "S_XDR_ElementDataType_Attributes", ::System::Xml::Schema::XdrBuilder*>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_AttributeDataType_Attributes(::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>, "S_XDR_AttributeDataType_Attributes", ::System::Xml::Schema::XdrBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*> System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_AttributeDataType_Attributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>, "S_XDR_AttributeDataType_Attributes", ::System::Xml::Schema::XdrBuilder*>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_SchemaEntries(::ArrayW<::System::Xml::Schema::XdrBuilder_XdrEntry*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrEntry*>, "S_SchemaEntries", ::System::Xml::Schema::XdrBuilder*>(
      std::forward<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrEntry*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrEntry*> System::Xml::Schema::XdrBuilder::getStaticF_S_SchemaEntries() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrEntry*>, "S_SchemaEntries", ::System::Xml::Schema::XdrBuilder*>();
}
inline void System::Xml::Schema::XdrBuilder::_ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlNamespaceManager* curmgr, ::System::Xml::Schema::SchemaInfo* sinfo, ::StringW targetNamspace,
                                                   ::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames,
                                                   ::System::Xml::Schema::ValidationEventHandler* eventhandler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::XmlReader*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::SchemaInfo*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::XmlNameTable*>(),
                                                               ::i2c::type_of<::System::Xml::Schema::SchemaNames*>(), ::i2c::type_of<::System::Xml::Schema::ValidationEventHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader, curmgr, sinfo, targetNamspace, nameTable, schemaNames, eventhandler);
}
inline bool System::Xml::Schema::XdrBuilder::ProcessElement(::StringW prefix, ::StringW name, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, prefix, name, ns);
}
inline void System::Xml::Schema::XdrBuilder::ProcessAttribute(::StringW prefix, ::StringW name, ::StringW ns, ::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix, name, ns, value);
}
inline void System::Xml::Schema::XdrBuilder::set_XmlResolver(::System::Xml::XmlResolver* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "set_XmlResolver", {}, { ::i2c::type_of<::System::Xml::XmlResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::Schema::XdrBuilder::LoadSchema(::StringW uri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "LoadSchema", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, uri);
}
inline bool System::Xml::Schema::XdrBuilder::IsXdrSchema(::StringW uri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "IsXdrSchema", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, uri);
}
inline bool System::Xml::Schema::XdrBuilder::IsContentParsed() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrBuilder::ProcessMarkup(::ArrayW<::System::Xml::XmlNode*> markup) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, markup);
}
inline void System::Xml::Schema::XdrBuilder::ProcessCData(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XdrBuilder::StartChildren() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrBuilder::EndChildren() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrBuilder::Push() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "Push", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrBuilder::Pop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "Pop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrBuilder::PushGroupInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "PushGroupInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrBuilder::PopGroupInfo() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "PopGroupInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrBuilder::XDR_InitRoot(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                                           { "XDR_InitRoot", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildRoot_Name(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                       { "XDR_BuildRoot_Name", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildRoot_ID(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                              { "XDR_BuildRoot_ID", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BeginRoot(::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "XDR_BeginRoot", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XdrBuilder::XDR_EndRoot(::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "XDR_EndRoot", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XdrBuilder::XDR_InitElementType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                                           { "XDR_InitElementType", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildElementType_Name(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "XDR_BuildElementType_Name", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildElementType_Content(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "XDR_BuildElementType_Content", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildElementType_Model(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "XDR_BuildElementType_Model", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildElementType_Order(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "XDR_BuildElementType_Order", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildElementType_DtType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "XDR_BuildElementType_DtType", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildElementType_DtValues(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "XDR_BuildElementType_DtValues", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildElementType_DtMaxLength(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "XDR_BuildElementType_DtMaxLength", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildElementType_DtMinLength(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "XDR_BuildElementType_DtMinLength", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BeginElementType(::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "XDR_BeginElementType", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XdrBuilder::XDR_EndElementType(::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "XDR_EndElementType", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XdrBuilder::XDR_InitAttributeType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                                           { "XDR_InitAttributeType", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_Name(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "XDR_BuildAttributeType_Name", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_Required(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "XDR_BuildAttributeType_Required", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_Default(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "XDR_BuildAttributeType_Default", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_DtType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "XDR_BuildAttributeType_DtType", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_DtValues(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "XDR_BuildAttributeType_DtValues", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_DtMaxLength(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "XDR_BuildAttributeType_DtMaxLength", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_DtMinLength(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "XDR_BuildAttributeType_DtMinLength", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BeginAttributeType(::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "XDR_BeginAttributeType", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XdrBuilder::XDR_EndAttributeType(::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "XDR_EndAttributeType", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XdrBuilder::XDR_InitElement(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                                           { "XDR_InitElement", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildElement_Type(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                       { "XDR_BuildElement_Type", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildElement_MinOccurs(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "XDR_BuildElement_MinOccurs", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildElement_MaxOccurs(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "XDR_BuildElement_MaxOccurs", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_EndElement(::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "XDR_EndElement", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XdrBuilder::XDR_InitAttribute(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                                           { "XDR_InitAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildAttribute_Type(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                       { "XDR_BuildAttribute_Type", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildAttribute_Required(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "XDR_BuildAttribute_Required", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildAttribute_Default(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "XDR_BuildAttribute_Default", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BeginAttribute(::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "XDR_BeginAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XdrBuilder::XDR_EndAttribute(::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "XDR_EndAttribute", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XdrBuilder::XDR_InitGroup(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                                           { "XDR_InitGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildGroup_Order(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                       { "XDR_BuildGroup_Order", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildGroup_MinOccurs(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "XDR_BuildGroup_MinOccurs", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildGroup_MaxOccurs(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "XDR_BuildGroup_MaxOccurs", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_EndGroup(::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "XDR_EndGroup", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XdrBuilder::XDR_InitElementDtType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                                           { "XDR_InitElementDtType", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj);
}
inline void System::Xml::Schema::XdrBuilder::XDR_EndElementDtType(::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "XDR_EndElementDtType", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XdrBuilder::XDR_InitAttributeDtType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                                           { "XDR_InitAttributeDtType", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder, obj);
}
inline void System::Xml::Schema::XdrBuilder::XDR_EndAttributeDtType(::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "XDR_EndAttributeDtType", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, builder);
}
inline bool System::Xml::Schema::XdrBuilder::GetNextState(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "GetNextState", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, qname);
}
inline bool System::Xml::Schema::XdrBuilder::IsSkipableElement(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "IsSkipableElement", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, qname);
}
inline bool System::Xml::Schema::XdrBuilder::IsSkipableAttribute(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "IsSkipableAttribute", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, qname);
}
inline int32_t System::Xml::Schema::XdrBuilder::GetOrder(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "GetOrder", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, qname);
}
inline void System::Xml::Schema::XdrBuilder::AddOrder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "AddOrder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Xml::Schema::XdrBuilder::IsYes(::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "IsYes", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, obj, builder);
}
inline uint32_t System::Xml::Schema::XdrBuilder::ParseMinOccurs(::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                                           { "ParseMinOccurs", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, obj, builder);
}
inline uint32_t System::Xml::Schema::XdrBuilder::ParseMaxOccurs(::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                                           { "ParseMaxOccurs", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, obj, builder);
}
inline void System::Xml::Schema::XdrBuilder::HandleMinMax(::System::Xml::Schema::ParticleContentValidator* pContent, uint32_t cMin, uint32_t cMax) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                              { "HandleMinMax", {}, { ::i2c::type_of<::System::Xml::Schema::ParticleContentValidator*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pContent, cMin, cMax);
}
inline void System::Xml::Schema::XdrBuilder::ParseDtMaxLength(::by_ref<uint32_t> cVal, ::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "ParseDtMaxLength", {}, { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cVal, obj, builder);
}
inline void System::Xml::Schema::XdrBuilder::ParseDtMinLength(::by_ref<uint32_t> cVal, ::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "ParseDtMinLength", {}, { ::i2c::type_of<::by_ref<uint32_t>>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cVal, obj, builder);
}
inline void System::Xml::Schema::XdrBuilder::CompareMinMaxLength(uint32_t cMin, uint32_t cMax, ::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                              { "CompareMinMaxLength", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::System::Xml::Schema::XdrBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cMin, cMax, builder);
}
inline bool System::Xml::Schema::XdrBuilder::ParseInteger(::StringW str, ::by_ref<uint32_t> n) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "ParseInteger", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<uint32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, str, n);
}
inline void System::Xml::Schema::XdrBuilder::XDR_CheckAttributeDefault(::System::Xml::Schema::XdrBuilder_DeclBaseInfo* decl, ::System::Xml::Schema::SchemaAttDef* pAttdef) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "XDR_CheckAttributeDefault", {}, { ::i2c::type_of<::System::Xml::Schema::XdrBuilder_DeclBaseInfo*>(), ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, decl, pAttdef);
}
inline void System::Xml::Schema::XdrBuilder::SetAttributePresence(::System::Xml::Schema::SchemaAttDef* pAttdef, bool fRequired) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "SetAttributePresence", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pAttdef, fRequired);
}
inline int32_t System::Xml::Schema::XdrBuilder::GetContent(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "GetContent", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, qname);
}
inline bool System::Xml::Schema::XdrBuilder::GetModel(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "GetModel", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, qname);
}
inline ::System::Xml::Schema::XmlSchemaDatatype* System::Xml::Schema::XdrBuilder::CheckDatatype(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "CheckDatatype", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaDatatype*>(this, ___internal_method, str);
}
inline void System::Xml::Schema::XdrBuilder::CheckDefaultAttValue(::System::Xml::Schema::SchemaAttDef* attDef) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "CheckDefaultAttValue", {}, { ::i2c::type_of<::System::Xml::Schema::SchemaAttDef*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attDef);
}
inline bool System::Xml::Schema::XdrBuilder::IsGlobal(int32_t flags) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "IsGlobal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, flags);
}
inline void System::Xml::Schema::XdrBuilder::SendValidationEvent(::StringW code, ::ArrayW<::StringW> args, ::System::Xml::Schema::XmlSeverityType severity) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                          { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::StringW>>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, args, severity);
}
inline void System::Xml::Schema::XdrBuilder::SendValidationEvent(::StringW code) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code);
}
inline void System::Xml::Schema::XdrBuilder::SendValidationEvent(::StringW code, ::StringW msg) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(), { "SendValidationEvent", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, code, msg);
}
inline void System::Xml::Schema::XdrBuilder::SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e, ::System::Xml::Schema::XmlSeverityType severity) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::XdrBuilder*>(),
                                       { "SendValidationEvent", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaException*>(), ::i2c::type_of<::System::Xml::Schema::XmlSeverityType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e, severity);
}
inline ::System::Xml::Schema::XdrBuilder* System::Xml::Schema::XdrBuilder::New_ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlNamespaceManager* curmgr,
                                                                                    ::System::Xml::Schema::SchemaInfo* sinfo, ::StringW targetNamspace, ::System::Xml::XmlNameTable* nameTable,
                                                                                    ::System::Xml::Schema::SchemaNames* schemaNames, ::System::Xml::Schema::ValidationEventHandler* eventhandler) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::XdrBuilder*>(reader, curmgr, sinfo, targetNamspace, nameTable, schemaNames, eventhandler));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XdrBuilder::XdrBuilder() {}
