#pragma once
// IWYU pragma private; include "System/Xml/Schema/XdrBuilder.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder_DeclBaseInfo::*)()>(&::System::Xml::Schema::XdrBuilder_DeclBaseInfo::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x606eddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_DeclBaseInfo*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_DeclBaseInfo.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder_DeclBaseInfo::*)()>(&::System::Xml::Schema::XdrBuilder_DeclBaseInfo::Reset)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x606f238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_DeclBaseInfo*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Prefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TypeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TypePrefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Default)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Revises)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ElementDecl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Attdef)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Schema::XdrBuilder_DeclBaseInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_DeclBaseInfo*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrBuilder_DeclBaseInfo::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_DeclBaseInfo*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XdrBuilder_DeclBaseInfo* System::Xml::Schema::XdrBuilder_DeclBaseInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XdrBuilder_DeclBaseInfo*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XdrBuilder_DeclBaseInfo::XdrBuilder_DeclBaseInfo() {}
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_GroupContent.Copy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder_GroupContent*, ::System::Xml::Schema::XdrBuilder_GroupContent*)>(
    &::System::Xml::Schema::XdrBuilder_GroupContent::Copy)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x607197c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_GroupContent*>::get(), "Copy", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder_GroupContent*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder_GroupContent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_GroupContent.Copy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XdrBuilder_GroupContent* (*)(::System::Xml::Schema::XdrBuilder_GroupContent*)>(
    &::System::Xml::Schema::XdrBuilder_GroupContent::Copy)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x606bc14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_GroupContent*>::get(), "Copy", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder_GroupContent*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_GroupContent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder_GroupContent::*)()>(&::System::Xml::Schema::XdrBuilder_GroupContent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x606a808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_GroupContent*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_GroupContent*>::get(), "Copy", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder_GroupContent*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder_GroupContent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, from, to);
}
inline ::System::Xml::Schema::XdrBuilder_GroupContent* System::Xml::Schema::XdrBuilder_GroupContent::Copy(::System::Xml::Schema::XdrBuilder_GroupContent* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_GroupContent*>::get(), "Copy", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder_GroupContent*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XdrBuilder_GroupContent*, false>(nullptr, ___internal_method, other);
}
inline void System::Xml::Schema::XdrBuilder_GroupContent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_GroupContent*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XdrBuilder_GroupContent* System::Xml::Schema::XdrBuilder_GroupContent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XdrBuilder_GroupContent*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XdrBuilder_GroupContent::XdrBuilder_GroupContent() {}
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_ElementContent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder_ElementContent::*)()>(
    &::System::Xml::Schema::XdrBuilder_ElementContent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x606a800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_ElementContent*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ElementDecl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AttDefList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Schema::XdrBuilder_ElementContent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_ElementContent*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XdrBuilder_ElementContent* System::Xml::Schema::XdrBuilder_ElementContent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XdrBuilder_ElementContent*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XdrBuilder_ElementContent::XdrBuilder_ElementContent() {}
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_AttributeContent._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder_AttributeContent::*)()>(
    &::System::Xml::Schema::XdrBuilder_AttributeContent::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x606a804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_AttributeContent*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AttDef)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Prefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Default)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Schema::XdrBuilder_AttributeContent::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_AttributeContent*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::XdrBuilder_AttributeContent* System::Xml::Schema::XdrBuilder_AttributeContent::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XdrBuilder_AttributeContent*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XdrBuilder_AttributeContent::XdrBuilder_AttributeContent() {}
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_XdrBuildFunction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder_XdrBuildFunction::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Xml::Schema::XdrBuilder_XdrBuildFunction::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6071708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrBuildFunction*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_XdrBuildFunction.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder_XdrBuildFunction::*)(
    ::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(&::System::Xml::Schema::XdrBuilder_XdrBuildFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60719a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrBuildFunction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrBuildFunction*>::get(), 13));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XdrBuilder_XdrBuildFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrBuildFunction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::Xml::Schema::XdrBuilder_XdrBuildFunction::Invoke(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrBuildFunction*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, builder, obj, prefix);
}
inline ::System::Xml::Schema::XdrBuilder_XdrBuildFunction* System::Xml::Schema::XdrBuilder_XdrBuildFunction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XdrBuilder_XdrBuildFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XdrBuilder_XdrBuildFunction::XdrBuilder_XdrBuildFunction() {}
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_XdrInitFunction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder_XdrInitFunction::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Xml::Schema::XdrBuilder_XdrInitFunction::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6071804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrInitFunction*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_XdrInitFunction.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder_XdrInitFunction::*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*)>(
    &::System::Xml::Schema::XdrBuilder_XdrInitFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60719b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrInitFunction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrInitFunction*>::get(), 13));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XdrBuilder_XdrInitFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrInitFunction*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::Xml::Schema::XdrBuilder_XdrInitFunction::Invoke(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrInitFunction*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, builder, obj);
}
inline ::System::Xml::Schema::XdrBuilder_XdrInitFunction* System::Xml::Schema::XdrBuilder_XdrInitFunction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XdrBuilder_XdrInitFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XdrBuilder_XdrInitFunction::XdrBuilder_XdrInitFunction() {}
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6071884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction::*)(::System::Xml::Schema::XdrBuilder*)>(
    &::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60719cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction*>::get(), 13));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XdrBuilder_XdrBeginChildFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::Xml::Schema::XdrBuilder_XdrBeginChildFunction::Invoke(::System::Xml::Schema::XdrBuilder* builder) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, builder);
}
inline ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction* System::Xml::Schema::XdrBuilder_XdrBeginChildFunction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction::XdrBuilder_XdrBeginChildFunction() {}
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder_XdrEndChildFunction::*)(::System::Object*, ::System::IntPtr)>(
    &::System::Xml::Schema::XdrBuilder_XdrEndChildFunction::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6071900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrEndChildFunction*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder_XdrEndChildFunction::*)(::System::Xml::Schema::XdrBuilder*)>(
    &::System::Xml::Schema::XdrBuilder_XdrEndChildFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x60719e0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrEndChildFunction*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrEndChildFunction*>::get(), 13));
    return ___internal_method;
  }
};
inline void System::Xml::Schema::XdrBuilder_XdrEndChildFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrEndChildFunction*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                                             ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void System::Xml::Schema::XdrBuilder_XdrEndChildFunction::Invoke(::System::Xml::Schema::XdrBuilder* builder) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrEndChildFunction*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, builder);
}
inline ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction* System::Xml::Schema::XdrBuilder_XdrEndChildFunction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XdrBuilder_XdrEndChildFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction::XdrBuilder_XdrEndChildFunction() {}
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_XdrAttributeEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder_XdrAttributeEntry::*)(
    ::System::Xml::Schema::SchemaNames_Token, ::System::Xml::XmlTokenizedType, ::System::Xml::Schema::XdrBuilder_XdrBuildFunction*)>(&::System::Xml::Schema::XdrBuilder_XdrAttributeEntry::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6071788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaNames_Token>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlTokenizedType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder_XdrBuildFunction*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_XdrAttributeEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder_XdrAttributeEntry::*)(
    ::System::Xml::Schema::SchemaNames_Token, ::System::Xml::XmlTokenizedType, int32_t, ::System::Xml::Schema::XdrBuilder_XdrBuildFunction*)>(
    &::System::Xml::Schema::XdrBuilder_XdrAttributeEntry::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x60717b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaNames_Token>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlTokenizedType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder_XdrBuildFunction*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Datatype)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____BuildFunc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Schema::XdrBuilder_XdrAttributeEntry::_ctor(::System::Xml::Schema::SchemaNames_Token a, ::System::Xml::XmlTokenizedType ttype,
                                                                     ::System::Xml::Schema::XdrBuilder_XdrBuildFunction* build) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaNames_Token>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlTokenizedType>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder_XdrBuildFunction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a, ttype, build);
}
inline void System::Xml::Schema::XdrBuilder_XdrAttributeEntry::_ctor(::System::Xml::Schema::SchemaNames_Token a, ::System::Xml::XmlTokenizedType ttype, int32_t schemaFlags,
                                                                     ::System::Xml::Schema::XdrBuilder_XdrBuildFunction* build) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaNames_Token>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlTokenizedType>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder_XdrBuildFunction*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, a, ttype, schemaFlags, build);
}
inline ::System::Xml::Schema::XdrBuilder_XdrAttributeEntry* System::Xml::Schema::XdrBuilder_XdrAttributeEntry::New_ctor(::System::Xml::Schema::SchemaNames_Token a,
                                                                                                                        ::System::Xml::XmlTokenizedType ttype,
                                                                                                                        ::System::Xml::Schema::XdrBuilder_XdrBuildFunction* build) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>(a, ttype, build));
}
inline ::System::Xml::Schema::XdrBuilder_XdrAttributeEntry* System::Xml::Schema::XdrBuilder_XdrAttributeEntry::New_ctor(::System::Xml::Schema::SchemaNames_Token a,
                                                                                                                        ::System::Xml::XmlTokenizedType ttype, int32_t schemaFlags,
                                                                                                                        ::System::Xml::Schema::XdrBuilder_XdrBuildFunction* build) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>(a, ttype, schemaFlags, build));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XdrBuilder_XdrAttributeEntry::XdrBuilder_XdrAttributeEntry() {}
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder_XdrEntry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder_XdrEntry::*)(
    ::System::Xml::Schema::SchemaNames_Token, ::ArrayW<int32_t, ::Array<int32_t>*>,
    ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>, ::System::Xml::Schema::XdrBuilder_XdrInitFunction*,
    ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction*, ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction*, bool)>(&::System::Xml::Schema::XdrBuilder_XdrEntry::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x60717ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaNames_Token>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder_XdrInitFunction*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder_XdrEndChildFunction*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
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
constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_get__NextStates() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NextStates;
}
constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_get__NextStates() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____NextStates;
}
constexpr void System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_set__NextStates(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____NextStates)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>&
System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_get__Attributes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Attributes;
}
constexpr ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> const&
System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_get__Attributes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Attributes;
}
constexpr void System::Xml::Schema::XdrBuilder_XdrEntry::__cordl_internal_set__Attributes(
    ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Attributes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____InitFunc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____BeginChildFunc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____EndChildFunc)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline void System::Xml::Schema::XdrBuilder_XdrEntry::_ctor(::System::Xml::Schema::SchemaNames_Token n, ::ArrayW<int32_t, ::Array<int32_t>*> states,
                                                            ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> attributes,
                                                            ::System::Xml::Schema::XdrBuilder_XdrInitFunction* init, ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction* begin,
                                                            ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction* end, bool fText) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder_XdrEntry*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaNames_Token>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t, ::Array<int32_t>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder_XdrInitFunction*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder_XdrEndChildFunction*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, n, states, attributes, init, begin, end, fText);
}
inline ::System::Xml::Schema::XdrBuilder_XdrEntry*
System::Xml::Schema::XdrBuilder_XdrEntry::New_ctor(::System::Xml::Schema::SchemaNames_Token n, ::ArrayW<int32_t, ::Array<int32_t>*> states,
                                                   ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> attributes,
                                                   ::System::Xml::Schema::XdrBuilder_XdrInitFunction* init, ::System::Xml::Schema::XdrBuilder_XdrBeginChildFunction* begin,
                                                   ::System::Xml::Schema::XdrBuilder_XdrEndChildFunction* end, bool fText) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XdrBuilder_XdrEntry*>(n, states, attributes, init, begin, end, fText));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XdrBuilder_XdrEntry::XdrBuilder_XdrEntry() {}
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::System::Xml::Schema::XdrBuilder::*)(::System::Xml::XmlReader*, ::System::Xml::XmlNamespaceManager*, ::System::Xml::Schema::SchemaInfo*, ::StringW, ::System::Xml::XmlNameTable*,
                                                            ::System::Xml::Schema::SchemaNames*, ::System::Xml::Schema::ValidationEventHandler*)>(&::System::Xml::Schema::XdrBuilder::_ctor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x606a620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceManager*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaInfo*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaNames*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ValidationEventHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.ProcessElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XdrBuilder::*)(::StringW, ::StringW, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::ProcessElement)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x606a80c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.ProcessAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)(::StringW, ::StringW, ::StringW, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::ProcessAttribute)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x606ae7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.set_XmlResolver
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)(::System::Xml::XmlResolver*)>(
    &::System::Xml::Schema::XdrBuilder::set_XmlResolver)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x606b8d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "set_XmlResolver", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlResolver*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.LoadSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XdrBuilder::*)(::StringW)>(&::System::Xml::Schema::XdrBuilder::LoadSchema)> {
  constexpr static std::size_t size = 0x4d4;
  constexpr static std::size_t addrs = 0x606b2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "LoadSchema", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.IsXdrSchema
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW)>(&::System::Xml::Schema::XdrBuilder::IsXdrSchema)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x606b234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "IsXdrSchema", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.IsContentParsed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XdrBuilder::*)()>(&::System::Xml::Schema::XdrBuilder::IsContentParsed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x606b9f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.ProcessMarkup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)(::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*>)>(
    &::System::Xml::Schema::XdrBuilder::ProcessMarkup)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x606ba00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.ProcessCData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)(::StringW)>(&::System::Xml::Schema::XdrBuilder::ProcessCData)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x606ba50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.StartChildren
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)()>(&::System::Xml::Schema::XdrBuilder::StartChildren)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x606bad4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.EndChildren
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)()>(&::System::Xml::Schema::XdrBuilder::EndChildren)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x606bb04;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.Push
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)()>(&::System::Xml::Schema::XdrBuilder::Push)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x606ac90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "Push",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.Pop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)()>(&::System::Xml::Schema::XdrBuilder::Pop)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x606bb40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "Pop",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.PushGroupInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)()>(&::System::Xml::Schema::XdrBuilder::PushGroupInfo)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x606bbc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "PushGroupInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.PopGroupInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)()>(&::System::Xml::Schema::XdrBuilder::PopGroupInfo)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x606bc74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "PopGroupInfo",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_InitRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*)>(&::System::Xml::Schema::XdrBuilder::XDR_InitRoot)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x606bcf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_InitRoot", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildRoot_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildRoot_Name)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x606bd38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildRoot_Name", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildRoot_ID
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildRoot_ID)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x606bd88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildRoot_ID", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BeginRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::XDR_BeginRoot)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x606bd8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BeginRoot", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_EndRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::XDR_EndRoot)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x606be6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_EndRoot", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_InitElementType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*)>(
    &::System::Xml::Schema::XdrBuilder::XDR_InitElementType)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x606c3ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_InitElementType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildElementType_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildElementType_Name)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x606c4bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildElementType_Name", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildElementType_Content
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildElementType_Content)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x606c684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildElementType_Content", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildElementType_Model
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildElementType_Model)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x606c8c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildElementType_Model", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildElementType_Order
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildElementType_Order)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x606ca50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildElementType_Order", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildElementType_DtType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildElementType_DtType)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x606cc30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildElementType_DtType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildElementType_DtValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildElementType_DtValues)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x606cdb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildElementType_DtValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildElementType_DtMaxLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildElementType_DtMaxLength)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x606ce98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildElementType_DtMaxLength", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildElementType_DtMinLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildElementType_DtMinLength)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x606d054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildElementType_DtMinLength", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BeginElementType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::XDR_BeginElementType)> {
  constexpr static std::size_t size = 0x328;
  constexpr static std::size_t addrs = 0x606d210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BeginElementType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_EndElementType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::XDR_EndElementType)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x606d538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_EndElementType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_InitAttributeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*)>(
    &::System::Xml::Schema::XdrBuilder::XDR_InitAttributeType)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x606d938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_InitAttributeType", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildAttributeType_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_Name)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x606da24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildAttributeType_Name", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildAttributeType_Required
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_Required)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x606dc74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildAttributeType_Required", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildAttributeType_Default
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_Default)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x606de14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildAttributeType_Default", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildAttributeType_DtType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_DtType)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x606de34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildAttributeType_DtType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildAttributeType_DtValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_DtValues)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x606e048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildAttributeType_DtValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildAttributeType_DtMaxLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_DtMaxLength)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x606e130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildAttributeType_DtMaxLength", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildAttributeType_DtMinLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_DtMinLength)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x606e1ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildAttributeType_DtMinLength", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BeginAttributeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::XDR_BeginAttributeType)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x606e228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BeginAttributeType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_EndAttributeType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::XDR_EndAttributeType)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x606e2b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_EndAttributeType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_InitElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*)>(
    &::System::Xml::Schema::XdrBuilder::XDR_InitElement)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x606e664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_InitElement", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildElement_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildElement_Type)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x606e704;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildElement_Type", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildElement_MinOccurs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildElement_MinOccurs)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x606e95c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildElement_MinOccurs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildElement_MaxOccurs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildElement_MaxOccurs)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x606ead0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildElement_MaxOccurs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_EndElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::XDR_EndElement)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x606ec80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_EndElement", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_InitAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*)>(
    &::System::Xml::Schema::XdrBuilder::XDR_InitAttribute)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x606ed6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_InitAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildAttribute_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildAttribute_Type)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x606ede0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildAttribute_Type", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildAttribute_Required
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildAttribute_Required)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x606eeac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildAttribute_Required", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildAttribute_Default
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildAttribute_Default)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x606ef34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildAttribute_Default", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BeginAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::XDR_BeginAttribute)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x606ef54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BeginAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_EndAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::XDR_EndAttribute)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x606f21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_EndAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_InitGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*)>(&::System::Xml::Schema::XdrBuilder::XDR_InitGroup)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x606f2b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_InitGroup", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildGroup_Order
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildGroup_Order)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x606f398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildGroup_Order", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildGroup_MinOccurs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildGroup_MinOccurs)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x606f4a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildGroup_MinOccurs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_BuildGroup_MaxOccurs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::XDR_BuildGroup_MaxOccurs)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x606f538;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildGroup_MaxOccurs", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_EndGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::XDR_EndGroup)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x606f5c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_EndGroup", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_InitElementDtType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*)>(
    &::System::Xml::Schema::XdrBuilder::XDR_InitElementDtType)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x606f724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_InitElementDtType", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_EndElementDtType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::XDR_EndElementDtType)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x606f7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_EndElementDtType", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_InitAttributeDtType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*, ::System::Object*)>(
    &::System::Xml::Schema::XdrBuilder::XDR_InitAttributeDtType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x606f8c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_InitAttributeDtType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_EndAttributeDtType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::XDR_EndAttributeDtType)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x606f940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_EndAttributeDtType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.GetNextState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XdrBuilder::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::XdrBuilder::GetNextState)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x606aaf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "GetNextState", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.IsSkipableElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XdrBuilder::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::XdrBuilder::IsSkipableElement)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x606acd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "IsSkipableElement", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.IsSkipableAttribute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XdrBuilder::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::XdrBuilder::IsSkipableAttribute)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x606b7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "IsSkipableAttribute", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.GetOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XdrBuilder::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::XdrBuilder::GetOrder)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x606cb00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "GetOrder", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.AddOrder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)()>(&::System::Xml::Schema::XdrBuilder::AddOrder)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x606e8a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "AddOrder",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.IsYes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Object*, ::System::Xml::Schema::XdrBuilder*)>(&::System::Xml::Schema::XdrBuilder::IsYes)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x606dcf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "IsYes", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.ParseMinOccurs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::System::Object*, ::System::Xml::Schema::XdrBuilder*)>(
    &::System::Xml::Schema::XdrBuilder::ParseMinOccurs)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x606e9dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "ParseMinOccurs", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.ParseMaxOccurs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (*)(::System::Object*, ::System::Xml::Schema::XdrBuilder*)>(
    &::System::Xml::Schema::XdrBuilder::ParseMaxOccurs)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x606eb50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "ParseMaxOccurs", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.HandleMinMax
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Xml::Schema::ParticleContentValidator*, uint32_t, uint32_t)>(
    &::System::Xml::Schema::XdrBuilder::HandleMinMax)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x606ed3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "HandleMinMax", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ParticleContentValidator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.ParseDtMaxLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<uint32_t>, ::System::Object*, ::System::Xml::Schema::XdrBuilder*)>(
    &::System::Xml::Schema::XdrBuilder::ParseDtMaxLength)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x606cf14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "ParseDtMaxLength", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.ParseDtMinLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<uint32_t>, ::System::Object*, ::System::Xml::Schema::XdrBuilder*)>(
    &::System::Xml::Schema::XdrBuilder::ParseDtMinLength)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x606d0d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "ParseDtMinLength", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.CompareMinMaxLength
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint32_t, uint32_t, ::System::Xml::Schema::XdrBuilder*)>(
    &::System::Xml::Schema::XdrBuilder::CompareMinMaxLength)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x606d8a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "CompareMinMaxLength", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.ParseInteger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::ByRef<uint32_t>)>(&::System::Xml::Schema::XdrBuilder::ParseInteger)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x606fa48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "ParseInteger", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.XDR_CheckAttributeDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)(
    ::System::Xml::Schema::XdrBuilder_DeclBaseInfo*, ::System::Xml::Schema::SchemaAttDef*)>(&::System::Xml::Schema::XdrBuilder::XDR_CheckAttributeDefault)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x606c310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_CheckAttributeDefault", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder_DeclBaseInfo*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.SetAttributePresence
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)(::System::Xml::Schema::SchemaAttDef*, bool)>(
    &::System::Xml::Schema::XdrBuilder::SetAttributePresence)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x606e618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "SetAttributePresence", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.GetContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Xml::Schema::XdrBuilder::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::XdrBuilder::GetContent)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x606c72c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "GetContent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.GetModel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XdrBuilder::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Schema::XdrBuilder::GetModel)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x606c96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "GetModel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.CheckDatatype
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::XmlSchemaDatatype* (::System::Xml::Schema::XdrBuilder::*)(::StringW)>(
    &::System::Xml::Schema::XdrBuilder::CheckDatatype)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x606def0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "CheckDatatype", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.CheckDefaultAttValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)(::System::Xml::Schema::SchemaAttDef*)>(
    &::System::Xml::Schema::XdrBuilder::CheckDefaultAttValue)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x606e51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "CheckDefaultAttValue", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.IsGlobal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Xml::Schema::XdrBuilder::*)(int32_t)>(&::System::Xml::Schema::XdrBuilder::IsGlobal)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x606b228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "IsGlobal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.SendValidationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)(
    ::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>, ::System::Xml::Schema::XmlSeverityType)>(&::System::Xml::Schema::XdrBuilder::SendValidationEvent)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x606b8e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.SendValidationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)(::StringW)>(&::System::Xml::Schema::XdrBuilder::SendValidationEvent)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x606cd40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.SendValidationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)(::StringW, ::StringW)>(
    &::System::Xml::Schema::XdrBuilder::SendValidationEvent)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x606ad94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XdrBuilder.SendValidationEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XdrBuilder::*)(
    ::System::Xml::Schema::XmlSchemaException*, ::System::Xml::Schema::XmlSeverityType)>(&::System::Xml::Schema::XdrBuilder::SendValidationEvent)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x606ff60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaException*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SchemaInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____TargetNamespace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____reader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___positionInfo)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____contentValidator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CurState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____NextState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____StateHistory)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____GroupStack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____XdrName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____XdrPrefix)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ElementDef)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____GroupDef)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AttributeDef)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____UndefinedAttributeTypes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____BaseDecl)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____NameTable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____SchemaNames)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____CurNsMgr)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___validationEventHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____UndeclaredElements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xmlResolver)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_Root_Element(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "S_XDR_Root_Element", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_Root_Element() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "S_XDR_Root_Element",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_Root_SubElements(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "S_XDR_Root_SubElements", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_Root_SubElements() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "S_XDR_Root_SubElements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_ElementType_SubElements(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "S_XDR_ElementType_SubElements",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>(std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_ElementType_SubElements() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "S_XDR_ElementType_SubElements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_AttributeType_SubElements(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "S_XDR_AttributeType_SubElements",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>(std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_AttributeType_SubElements() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "S_XDR_AttributeType_SubElements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_Group_SubElements(::ArrayW<int32_t, ::Array<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "S_XDR_Group_SubElements", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>(
      std::forward<::ArrayW<int32_t, ::Array<int32_t>*>>(value));
}
inline ::ArrayW<int32_t, ::Array<int32_t>*> System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_Group_SubElements() {
  return ::cordl_internals::getStaticField<::ArrayW<int32_t, ::Array<int32_t>*>, "S_XDR_Group_SubElements",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_Root_Attributes(
    ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>, "S_XDR_Root_Attributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>
System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_Root_Attributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>, "S_XDR_Root_Attributes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_ElementType_Attributes(
    ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>, "S_XDR_ElementType_Attributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>
System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_ElementType_Attributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>,
                                           "S_XDR_ElementType_Attributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_AttributeType_Attributes(
    ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>, "S_XDR_AttributeType_Attributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>
System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_AttributeType_Attributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>,
                                           "S_XDR_AttributeType_Attributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_Element_Attributes(
    ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>, "S_XDR_Element_Attributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>
System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_Element_Attributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>, "S_XDR_Element_Attributes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_Attribute_Attributes(
    ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>, "S_XDR_Attribute_Attributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>
System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_Attribute_Attributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>, "S_XDR_Attribute_Attributes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_Group_Attributes(
    ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>, "S_XDR_Group_Attributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>
System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_Group_Attributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>, "S_XDR_Group_Attributes",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_ElementDataType_Attributes(
    ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>, "S_XDR_ElementDataType_Attributes",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>
System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_ElementDataType_Attributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>,
                                           "S_XDR_ElementDataType_Attributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_XDR_AttributeDataType_Attributes(
    ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>,
                                    "S_XDR_AttributeDataType_Attributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>
System::Xml::Schema::XdrBuilder::getStaticF_S_XDR_AttributeDataType_Attributes() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrAttributeEntry*>*>,
                                           "S_XDR_AttributeDataType_Attributes", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>();
}
inline void System::Xml::Schema::XdrBuilder::setStaticF_S_SchemaEntries(::ArrayW<::System::Xml::Schema::XdrBuilder_XdrEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrEntry*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrEntry*>*>, "S_SchemaEntries",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>(
      std::forward<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrEntry*>*>>(value));
}
inline ::ArrayW<::System::Xml::Schema::XdrBuilder_XdrEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrEntry*>*> System::Xml::Schema::XdrBuilder::getStaticF_S_SchemaEntries() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Xml::Schema::XdrBuilder_XdrEntry*, ::Array<::System::Xml::Schema::XdrBuilder_XdrEntry*>*>, "S_SchemaEntries",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get>();
}
inline void System::Xml::Schema::XdrBuilder::_ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlNamespaceManager* curmgr, ::System::Xml::Schema::SchemaInfo* sinfo, ::StringW targetNamspace,
                                                   ::System::Xml::XmlNameTable* nameTable, ::System::Xml::Schema::SchemaNames* schemaNames,
                                                   ::System::Xml::Schema::ValidationEventHandler* eventhandler) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlReader*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceManager*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaInfo*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNameTable*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaNames*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ValidationEventHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader, curmgr, sinfo, targetNamspace, nameTable, schemaNames, eventhandler);
}
inline bool System::Xml::Schema::XdrBuilder::ProcessElement(::StringW prefix, ::StringW name, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, prefix, name, ns);
}
inline void System::Xml::Schema::XdrBuilder::ProcessAttribute(::StringW prefix, ::StringW name, ::StringW ns, ::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefix, name, ns, value);
}
inline void System::Xml::Schema::XdrBuilder::set_XmlResolver(::System::Xml::XmlResolver* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "set_XmlResolver", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlResolver*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Xml::Schema::XdrBuilder::LoadSchema(::StringW uri) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "LoadSchema", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, uri);
}
inline bool System::Xml::Schema::XdrBuilder::IsXdrSchema(::StringW uri) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "IsXdrSchema", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, uri);
}
inline bool System::Xml::Schema::XdrBuilder::IsContentParsed() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrBuilder::ProcessMarkup(::ArrayW<::System::Xml::XmlNode*, ::Array<::System::Xml::XmlNode*>*> markup) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markup);
}
inline void System::Xml::Schema::XdrBuilder::ProcessCData(::StringW value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XdrBuilder::StartChildren() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrBuilder::EndChildren() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrBuilder::Push() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "Push",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrBuilder::Pop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "Pop",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrBuilder::PushGroupInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "PushGroupInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrBuilder::PopGroupInfo() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "PopGroupInfo",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::XdrBuilder::XDR_InitRoot(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_InitRoot", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildRoot_Name(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildRoot_Name", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildRoot_ID(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildRoot_ID", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BeginRoot(::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BeginRoot", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XdrBuilder::XDR_EndRoot(::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_EndRoot", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XdrBuilder::XDR_InitElementType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_InitElementType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildElementType_Name(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildElementType_Name", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildElementType_Content(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildElementType_Content", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildElementType_Model(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildElementType_Model", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildElementType_Order(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildElementType_Order", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildElementType_DtType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildElementType_DtType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildElementType_DtValues(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildElementType_DtValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildElementType_DtMaxLength(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildElementType_DtMaxLength", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildElementType_DtMinLength(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildElementType_DtMinLength", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BeginElementType(::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BeginElementType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XdrBuilder::XDR_EndElementType(::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_EndElementType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XdrBuilder::XDR_InitAttributeType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_InitAttributeType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_Name(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildAttributeType_Name", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_Required(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildAttributeType_Required", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_Default(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildAttributeType_Default", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_DtType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildAttributeType_DtType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_DtValues(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildAttributeType_DtValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_DtMaxLength(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildAttributeType_DtMaxLength", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildAttributeType_DtMinLength(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildAttributeType_DtMinLength", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BeginAttributeType(::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BeginAttributeType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XdrBuilder::XDR_EndAttributeType(::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_EndAttributeType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XdrBuilder::XDR_InitElement(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_InitElement", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildElement_Type(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildElement_Type", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildElement_MinOccurs(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildElement_MinOccurs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildElement_MaxOccurs(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildElement_MaxOccurs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_EndElement(::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_EndElement", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XdrBuilder::XDR_InitAttribute(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_InitAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildAttribute_Type(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildAttribute_Type", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildAttribute_Required(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildAttribute_Required", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildAttribute_Default(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildAttribute_Default", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BeginAttribute(::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BeginAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XdrBuilder::XDR_EndAttribute(::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_EndAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XdrBuilder::XDR_InitGroup(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_InitGroup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildGroup_Order(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildGroup_Order", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildGroup_MinOccurs(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildGroup_MinOccurs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_BuildGroup_MaxOccurs(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj, ::StringW prefix) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_BuildGroup_MaxOccurs", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj, prefix);
}
inline void System::Xml::Schema::XdrBuilder::XDR_EndGroup(::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_EndGroup", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XdrBuilder::XDR_InitElementDtType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_InitElementDtType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj);
}
inline void System::Xml::Schema::XdrBuilder::XDR_EndElementDtType(::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_EndElementDtType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder);
}
inline void System::Xml::Schema::XdrBuilder::XDR_InitAttributeDtType(::System::Xml::Schema::XdrBuilder* builder, ::System::Object* obj) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_InitAttributeDtType", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder, obj);
}
inline void System::Xml::Schema::XdrBuilder::XDR_EndAttributeDtType(::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_EndAttributeDtType", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, builder);
}
inline bool System::Xml::Schema::XdrBuilder::GetNextState(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "GetNextState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, qname);
}
inline bool System::Xml::Schema::XdrBuilder::IsSkipableElement(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "IsSkipableElement", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, qname);
}
inline bool System::Xml::Schema::XdrBuilder::IsSkipableAttribute(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "IsSkipableAttribute", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, qname);
}
inline int32_t System::Xml::Schema::XdrBuilder::GetOrder(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "GetOrder", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, qname);
}
inline void System::Xml::Schema::XdrBuilder::AddOrder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "AddOrder",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Xml::Schema::XdrBuilder::IsYes(::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "IsYes", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, obj, builder);
}
inline uint32_t System::Xml::Schema::XdrBuilder::ParseMinOccurs(::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "ParseMinOccurs", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, obj, builder);
}
inline uint32_t System::Xml::Schema::XdrBuilder::ParseMaxOccurs(::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "ParseMaxOccurs", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(nullptr, ___internal_method, obj, builder);
}
inline void System::Xml::Schema::XdrBuilder::HandleMinMax(::System::Xml::Schema::ParticleContentValidator* pContent, uint32_t cMin, uint32_t cMax) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "HandleMinMax", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::ParticleContentValidator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, pContent, cMin, cMax);
}
inline void System::Xml::Schema::XdrBuilder::ParseDtMaxLength(::ByRef<uint32_t> cVal, ::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "ParseDtMaxLength", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cVal, obj, builder);
}
inline void System::Xml::Schema::XdrBuilder::ParseDtMinLength(::ByRef<uint32_t> cVal, ::System::Object* obj, ::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "ParseDtMinLength", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cVal, obj, builder);
}
inline void System::Xml::Schema::XdrBuilder::CompareMinMaxLength(uint32_t cMin, uint32_t cMax, ::System::Xml::Schema::XdrBuilder* builder) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "CompareMinMaxLength", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, cMin, cMax, builder);
}
inline bool System::Xml::Schema::XdrBuilder::ParseInteger(::StringW str, ::ByRef<uint32_t> n) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "ParseInteger", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, str, n);
}
inline void System::Xml::Schema::XdrBuilder::XDR_CheckAttributeDefault(::System::Xml::Schema::XdrBuilder_DeclBaseInfo* decl, ::System::Xml::Schema::SchemaAttDef* pAttdef) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "XDR_CheckAttributeDefault", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XdrBuilder_DeclBaseInfo*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, decl, pAttdef);
}
inline void System::Xml::Schema::XdrBuilder::SetAttributePresence(::System::Xml::Schema::SchemaAttDef* pAttdef, bool fRequired) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "SetAttributePresence", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pAttdef, fRequired);
}
inline int32_t System::Xml::Schema::XdrBuilder::GetContent(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "GetContent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, qname);
}
inline bool System::Xml::Schema::XdrBuilder::GetModel(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "GetModel", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlQualifiedName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, qname);
}
inline ::System::Xml::Schema::XmlSchemaDatatype* System::Xml::Schema::XdrBuilder::CheckDatatype(::StringW str) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "CheckDatatype", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::XmlSchemaDatatype*, false>(this, ___internal_method, str);
}
inline void System::Xml::Schema::XdrBuilder::CheckDefaultAttValue(::System::Xml::Schema::SchemaAttDef* attDef) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "CheckDefaultAttValue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::SchemaAttDef*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, attDef);
}
inline bool System::Xml::Schema::XdrBuilder::IsGlobal(int32_t flags) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "IsGlobal", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, flags);
}
inline void System::Xml::Schema::XdrBuilder::SendValidationEvent(::StringW code, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Xml::Schema::XmlSeverityType severity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, code, args, severity);
}
inline void System::Xml::Schema::XdrBuilder::SendValidationEvent(::StringW code) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, code);
}
inline void System::Xml::Schema::XdrBuilder::SendValidationEvent(::StringW code, ::StringW msg) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, code, msg);
}
inline void System::Xml::Schema::XdrBuilder::SendValidationEvent(::System::Xml::Schema::XmlSchemaException* e, ::System::Xml::Schema::XmlSeverityType severity) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XdrBuilder*>::get(), "SendValidationEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaException*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSeverityType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, e, severity);
}
inline ::System::Xml::Schema::XdrBuilder* System::Xml::Schema::XdrBuilder::New_ctor(::System::Xml::XmlReader* reader, ::System::Xml::XmlNamespaceManager* curmgr,
                                                                                    ::System::Xml::Schema::SchemaInfo* sinfo, ::StringW targetNamspace, ::System::Xml::XmlNameTable* nameTable,
                                                                                    ::System::Xml::Schema::SchemaNames* schemaNames, ::System::Xml::Schema::ValidationEventHandler* eventhandler) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XdrBuilder*>(reader, curmgr, sinfo, targetNamspace, nameTable, schemaNames, eventhandler));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XdrBuilder::XdrBuilder() {}
