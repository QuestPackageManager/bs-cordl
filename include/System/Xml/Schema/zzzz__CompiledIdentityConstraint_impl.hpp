#pragma once
// IWYU pragma private; include "System/Xml/Schema/CompiledIdentityConstraint.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole (
    ::System::Xml::Schema::CompiledIdentityConstraint::*)()>(&::System::Xml::Schema::CompiledIdentityConstraint::get_Role)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4393ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::CompiledIdentityConstraint*>::get(),
                                                                               "get_Role", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::CompiledIdentityConstraint.get_Selector
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Schema::Asttree* (::System::Xml::Schema::CompiledIdentityConstraint::*)()>(
    &::System::Xml::Schema::CompiledIdentityConstraint::get_Selector)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4393ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::CompiledIdentityConstraint*>::get(),
                                                                               "get_Selector", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::CompiledIdentityConstraint.get_Fields
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Xml::Schema::Asttree*, ::Array<::System::Xml::Schema::Asttree*>*> (
    ::System::Xml::Schema::CompiledIdentityConstraint::*)()>(&::System::Xml::Schema::CompiledIdentityConstraint::get_Fields)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4393ac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::CompiledIdentityConstraint*>::get(),
                                                                               "get_Fields", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::CompiledIdentityConstraint._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::CompiledIdentityConstraint::*)()>(
    &::System::Xml::Schema::CompiledIdentityConstraint::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x4393ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::CompiledIdentityConstraint*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::CompiledIdentityConstraint._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::CompiledIdentityConstraint::*)(
    ::System::Xml::Schema::XmlSchemaIdentityConstraint*, ::System::Xml::XmlNamespaceManager*)>(&::System::Xml::Schema::CompiledIdentityConstraint::_ctor)> {
  constexpr static std::size_t size = 0x494;
  constexpr static std::size_t addrs = 0x4393b3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::CompiledIdentityConstraint*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaIdentityConstraint*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceManager*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___name)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::System::Xml::Schema::Asttree*, ::Array<::System::Xml::Schema::Asttree*>*>& System::Xml::Schema::CompiledIdentityConstraint::__cordl_internal_get_fields() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fields;
}
constexpr ::ArrayW<::System::Xml::Schema::Asttree*, ::Array<::System::Xml::Schema::Asttree*>*> const& System::Xml::Schema::CompiledIdentityConstraint::__cordl_internal_get_fields() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fields;
}
constexpr void System::Xml::Schema::CompiledIdentityConstraint::__cordl_internal_set_fields(::ArrayW<::System::Xml::Schema::Asttree*, ::Array<::System::Xml::Schema::Asttree*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fields)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___refer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Xml::Schema::CompiledIdentityConstraint::setStaticF_Empty(::System::Xml::Schema::CompiledIdentityConstraint* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::CompiledIdentityConstraint*, "Empty",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::CompiledIdentityConstraint*>::get>(
      std::forward<::System::Xml::Schema::CompiledIdentityConstraint*>(value));
}
inline ::System::Xml::Schema::CompiledIdentityConstraint* System::Xml::Schema::CompiledIdentityConstraint::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::CompiledIdentityConstraint*, "Empty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::CompiledIdentityConstraint*>::get>();
}
inline ::System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole System::Xml::Schema::CompiledIdentityConstraint::get_Role() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::CompiledIdentityConstraint*>::get(),
                                                                             "get_Role", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::CompiledIdentityConstraint_ConstraintRole, false>(this, ___internal_method);
}
inline ::System::Xml::Schema::Asttree* System::Xml::Schema::CompiledIdentityConstraint::get_Selector() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::CompiledIdentityConstraint*>::get(),
                                                                             "get_Selector", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Schema::Asttree*, false>(this, ___internal_method);
}
inline ::ArrayW<::System::Xml::Schema::Asttree*, ::Array<::System::Xml::Schema::Asttree*>*> System::Xml::Schema::CompiledIdentityConstraint::get_Fields() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::CompiledIdentityConstraint*>::get(),
                                                                             "get_Fields", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Xml::Schema::Asttree*, ::Array<::System::Xml::Schema::Asttree*>*>, false>(this, ___internal_method);
}
inline void System::Xml::Schema::CompiledIdentityConstraint::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::CompiledIdentityConstraint*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Xml::Schema::CompiledIdentityConstraint::_ctor(::System::Xml::Schema::XmlSchemaIdentityConstraint* constraint, ::System::Xml::XmlNamespaceManager* nsmgr) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::CompiledIdentityConstraint*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaIdentityConstraint*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::XmlNamespaceManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, constraint, nsmgr);
}
inline ::System::Xml::Schema::CompiledIdentityConstraint* System::Xml::Schema::CompiledIdentityConstraint::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::CompiledIdentityConstraint*>());
}
inline ::System::Xml::Schema::CompiledIdentityConstraint* System::Xml::Schema::CompiledIdentityConstraint::New_ctor(::System::Xml::Schema::XmlSchemaIdentityConstraint* constraint,
                                                                                                                    ::System::Xml::XmlNamespaceManager* nsmgr) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::CompiledIdentityConstraint*>(constraint, nsmgr));
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::CompiledIdentityConstraint::CompiledIdentityConstraint() {}
