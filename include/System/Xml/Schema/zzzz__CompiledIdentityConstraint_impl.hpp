#pragma once
// IWYU pragma private; include "System\Xml\Schema\CompiledIdentityConstraint.hpp"
#include "System/Xml/Schema/zzzz__Asttree_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Schema/zzzz__CompiledIdentityConstraint_def.hpp"
#include "System/Xml/Schema/zzzz__Asttree_def.hpp"
#include "System/Xml/Schema/zzzz__CompiledIdentityConstraint_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaIdentityConstraint_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole::CompiledIdentityConstraint_ConstraintRole(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole::CompiledIdentityConstraint_ConstraintRole() {}
constexpr ::System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole::Unique{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole::Key{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole::Keyref{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Xml::Schema::CompiledIdentityConstraint.get_Role
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole (::System::Xml::Schema::CompiledIdentityConstraint::*)()>(
    &::System::Xml::Schema::CompiledIdentityConstraint::get_Role)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631b64c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::CompiledIdentityConstraint*>(), { "get_Role", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::CompiledIdentityConstraint.get_Selector
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Schema::Asttree* (::System::Xml::Schema::CompiledIdentityConstraint::*)()>(
    &::System::Xml::Schema::CompiledIdentityConstraint::get_Selector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631b654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::CompiledIdentityConstraint*>(), { "get_Selector", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::CompiledIdentityConstraint.get_Fields
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Xml::Schema::Asttree*> (::System::Xml::Schema::CompiledIdentityConstraint::*)()>(
    &::System::Xml::Schema::CompiledIdentityConstraint::get_Fields)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x631b65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::CompiledIdentityConstraint*>(), { "get_Fields", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::CompiledIdentityConstraint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::CompiledIdentityConstraint::*)()>(&::System::Xml::Schema::CompiledIdentityConstraint::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x631b664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::CompiledIdentityConstraint*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::CompiledIdentityConstraint._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Schema::CompiledIdentityConstraint::*)(
    ::System::Xml::Schema::XmlSchemaIdentityConstraint*, ::System::Xml::XmlNamespaceManager*)>(&::System::Xml::Schema::CompiledIdentityConstraint::_ctor)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0x631b6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::CompiledIdentityConstraint*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaIdentityConstraint*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::CompiledIdentityConstraint::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::CompiledIdentityConstraint::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void System::Xml::Schema::CompiledIdentityConstraint::__cordl_internal_set_name(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
constexpr ::System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole& System::Xml::Schema::CompiledIdentityConstraint::__cordl_internal_get_role() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___role;
}
constexpr ::System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole const& System::Xml::Schema::CompiledIdentityConstraint::__cordl_internal_get_role() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___role;
}
constexpr void System::Xml::Schema::CompiledIdentityConstraint::__cordl_internal_set_role(::System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___role = value;
}
constexpr ::System::Xml::Schema::Asttree*& System::Xml::Schema::CompiledIdentityConstraint::__cordl_internal_get_selector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selector;
}
constexpr ::System::Xml::Schema::Asttree* const& System::Xml::Schema::CompiledIdentityConstraint::__cordl_internal_get_selector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selector;
}
constexpr void System::Xml::Schema::CompiledIdentityConstraint::__cordl_internal_set_selector(::System::Xml::Schema::Asttree* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selector = value;
}
constexpr ::ArrayW<::System::Xml::Schema::Asttree*>& System::Xml::Schema::CompiledIdentityConstraint::__cordl_internal_get_fields() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fields;
}
constexpr ::ArrayW<::System::Xml::Schema::Asttree*> const& System::Xml::Schema::CompiledIdentityConstraint::__cordl_internal_get_fields() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fields;
}
constexpr void System::Xml::Schema::CompiledIdentityConstraint::__cordl_internal_set_fields(::ArrayW<::System::Xml::Schema::Asttree*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fields = value;
}
constexpr ::System::Xml::XmlQualifiedName*& System::Xml::Schema::CompiledIdentityConstraint::__cordl_internal_get_refer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___refer;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Xml::Schema::CompiledIdentityConstraint::__cordl_internal_get_refer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___refer;
}
constexpr void System::Xml::Schema::CompiledIdentityConstraint::__cordl_internal_set_refer(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___refer = value;
}
inline void System::Xml::Schema::CompiledIdentityConstraint::setStaticF_Empty(::System::Xml::Schema::CompiledIdentityConstraint* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::CompiledIdentityConstraint*, "Empty", ::System::Xml::Schema::CompiledIdentityConstraint*>(
      std::forward<::System::Xml::Schema::CompiledIdentityConstraint*>(value));
}
inline ::System::Xml::Schema::CompiledIdentityConstraint* System::Xml::Schema::CompiledIdentityConstraint::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::CompiledIdentityConstraint*, "Empty", ::System::Xml::Schema::CompiledIdentityConstraint*>();
}
inline ::System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole System::Xml::Schema::CompiledIdentityConstraint::get_Role() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::CompiledIdentityConstraint*>(), { "get_Role", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole>(this, ___internal_method);
}
inline ::System::Xml::Schema::Asttree* System::Xml::Schema::CompiledIdentityConstraint::get_Selector() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::CompiledIdentityConstraint*>(), { "get_Selector", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::Asttree*>(this, ___internal_method);
}
inline ::ArrayW<::System::Xml::Schema::Asttree*> System::Xml::Schema::CompiledIdentityConstraint::get_Fields() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::CompiledIdentityConstraint*>(), { "get_Fields", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Xml::Schema::Asttree*>>(this, ___internal_method);
}
inline void System::Xml::Schema::CompiledIdentityConstraint::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::CompiledIdentityConstraint*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Schema::CompiledIdentityConstraint::_ctor(::System::Xml::Schema::XmlSchemaIdentityConstraint* constraint, ::System::Xml::XmlNamespaceManager* nsmgr) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Schema::CompiledIdentityConstraint*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaIdentityConstraint*>(), ::i2c::type_of<::System::Xml::XmlNamespaceManager*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, constraint, nsmgr);
}
inline ::System::Xml::Schema::CompiledIdentityConstraint* System::Xml::Schema::CompiledIdentityConstraint::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::CompiledIdentityConstraint*>());
}
inline ::System::Xml::Schema::CompiledIdentityConstraint* System::Xml::Schema::CompiledIdentityConstraint::New_ctor(::System::Xml::Schema::XmlSchemaIdentityConstraint* constraint,
                                                                                                                    ::System::Xml::XmlNamespaceManager* nsmgr) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Schema::CompiledIdentityConstraint*>(constraint, nsmgr));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::CompiledIdentityConstraint::CompiledIdentityConstraint() {}
