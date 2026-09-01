#pragma once
// IWYU pragma private; include "GlobalNamespace\CompositeColorGroup.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CompositeColorGroup_def.hpp"
#include "GlobalNamespace/zzzz__CompositeColorGroup_def.hpp"
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::CompositeColorGroup_AssignMethod::CompositeColorGroup_AssignMethod(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CompositeColorGroup_AssignMethod::CompositeColorGroup_AssignMethod() {}
constexpr ::GlobalNamespace::CompositeColorGroup_AssignMethod GlobalNamespace::CompositeColorGroup_AssignMethod::Static{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::CompositeColorGroup_AssignMethod GlobalNamespace::CompositeColorGroup_AssignMethod::Incremental{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::CompositeColorGroup.get_colorTargets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>> (::GlobalNamespace::CompositeColorGroup::*)()>(
    &::GlobalNamespace::CompositeColorGroup::get_colorTargets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x598daf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeColorGroup*>(), { "get_colorTargets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CompositeColorGroup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CompositeColorGroup::*)()>(&::GlobalNamespace::CompositeColorGroup::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x598dafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeColorGroup*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>>& GlobalNamespace::CompositeColorGroup::__cordl_internal_get__colorTargets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorTargets;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>> const& GlobalNamespace::CompositeColorGroup::__cordl_internal_get__colorTargets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorTargets;
}
constexpr void GlobalNamespace::CompositeColorGroup::__cordl_internal_set__colorTargets(::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorTargets = value;
}
inline ::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>> GlobalNamespace::CompositeColorGroup::get_colorTargets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeColorGroup*>(), { "get_colorTargets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::GlobalNamespace::LightWithIdMonoBehaviour>>>(this, ___internal_method);
}
inline void GlobalNamespace::CompositeColorGroup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CompositeColorGroup*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CompositeColorGroup* GlobalNamespace::CompositeColorGroup::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CompositeColorGroup*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CompositeColorGroup::CompositeColorGroup() {}
