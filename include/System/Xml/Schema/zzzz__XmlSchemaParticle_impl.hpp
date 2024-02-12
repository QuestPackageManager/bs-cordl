#pragma once
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_impl.hpp"
#include "System/zzzz__Decimal_impl.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_EmptyParticle_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaParticle_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::Schema::__XmlSchemaParticle__Occurs::__XmlSchemaParticle__Occurs(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::__XmlSchemaParticle__Occurs::__XmlSchemaParticle__Occurs() {}
constexpr ::System::Xml::Schema::__XmlSchemaParticle__Occurs System::Xml::Schema::__XmlSchemaParticle__Occurs::None{ static_cast<int32_t>(0x0) };
constexpr ::System::Xml::Schema::__XmlSchemaParticle__Occurs System::Xml::Schema::__XmlSchemaParticle__Occurs::Min{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::Schema::__XmlSchemaParticle__Occurs System::Xml::Schema::__XmlSchemaParticle__Occurs::Max{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaParticle.set_MinOccurs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaParticle::*)(::System::Decimal)>(
    &::System::Xml::Schema::XmlSchemaParticle::set_MinOccurs)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x28c9f38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaParticle*>::get(), "set_MinOccurs", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaParticle.set_MaxOccurs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaParticle::*)(::System::Decimal)>(
    &::System::Xml::Schema::XmlSchemaParticle::set_MaxOccurs)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x28ca064;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaParticle*>::get(), "set_MaxOccurs", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Schema::XmlSchemaParticle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Xml::Schema::XmlSchemaParticle::*)()>(&::System::Xml::Schema::XmlSchemaParticle::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x28c9830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaParticle*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Decimal& System::Xml::Schema::XmlSchemaParticle::__cordl_internal_get_minOccurs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minOccurs;
}
constexpr ::System::Decimal const& System::Xml::Schema::XmlSchemaParticle::__cordl_internal_get_minOccurs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___minOccurs;
}
constexpr void System::Xml::Schema::XmlSchemaParticle::__cordl_internal_set_minOccurs(::System::Decimal value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___minOccurs = value;
}
constexpr ::System::Decimal& System::Xml::Schema::XmlSchemaParticle::__cordl_internal_get_maxOccurs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxOccurs;
}
constexpr ::System::Decimal const& System::Xml::Schema::XmlSchemaParticle::__cordl_internal_get_maxOccurs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___maxOccurs;
}
constexpr void System::Xml::Schema::XmlSchemaParticle::__cordl_internal_set_maxOccurs(::System::Decimal value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___maxOccurs = value;
}
constexpr ::System::Xml::Schema::__XmlSchemaParticle__Occurs& System::Xml::Schema::XmlSchemaParticle::__cordl_internal_get_flags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr ::System::Xml::Schema::__XmlSchemaParticle__Occurs const& System::Xml::Schema::XmlSchemaParticle::__cordl_internal_get_flags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___flags;
}
constexpr void System::Xml::Schema::XmlSchemaParticle::__cordl_internal_set_flags(::System::Xml::Schema::__XmlSchemaParticle__Occurs value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___flags = value;
}
inline void System::Xml::Schema::XmlSchemaParticle::setStaticF_Empty(::System::Xml::Schema::XmlSchemaParticle* value) {
  ::cordl_internals::setStaticField<::System::Xml::Schema::XmlSchemaParticle*, "Empty", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaParticle*>::get>(
      std::forward<::System::Xml::Schema::XmlSchemaParticle*>(value));
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::XmlSchemaParticle::getStaticF_Empty() {
  return ::cordl_internals::getStaticField<::System::Xml::Schema::XmlSchemaParticle*, "Empty",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaParticle*>::get>();
}
inline void System::Xml::Schema::XmlSchemaParticle::set_MinOccurs(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaParticle*>::get(), "set_MinOccurs", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void System::Xml::Schema::XmlSchemaParticle::set_MaxOccurs(::System::Decimal value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaParticle*>::get(), "set_MaxOccurs", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Decimal>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::Schema::XmlSchemaParticle* System::Xml::Schema::XmlSchemaParticle::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Xml::Schema::XmlSchemaParticle*>());
}
inline void System::Xml::Schema::XmlSchemaParticle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Xml::Schema::XmlSchemaParticle*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Xml::Schema::XmlSchemaParticle::XmlSchemaParticle() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
