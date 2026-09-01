#pragma once
// IWYU pragma private; include "GlobalNamespace\ConditionalActivation.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ConditionalActivation_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConditionalActivation.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConditionalActivation::*)()>(&::GlobalNamespace::ConditionalActivation::Awake)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5900f60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConditionalActivation*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalActivation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ConditionalActivation::*)()>(&::GlobalNamespace::ConditionalActivation::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5900fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConditionalActivation*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BoolSO>& GlobalNamespace::ConditionalActivation::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr ::UnityW<::GlobalNamespace::BoolSO> const& GlobalNamespace::ConditionalActivation::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void GlobalNamespace::ConditionalActivation::__cordl_internal_set__value(::UnityW<::GlobalNamespace::BoolSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
constexpr bool& GlobalNamespace::ConditionalActivation::__cordl_internal_get__activateOnFalse() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activateOnFalse;
}
constexpr bool const& GlobalNamespace::ConditionalActivation::__cordl_internal_get__activateOnFalse() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____activateOnFalse;
}
constexpr void GlobalNamespace::ConditionalActivation::__cordl_internal_set__activateOnFalse(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____activateOnFalse = value;
}
inline void GlobalNamespace::ConditionalActivation::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConditionalActivation*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ConditionalActivation::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ConditionalActivation*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ConditionalActivation* GlobalNamespace::ConditionalActivation::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ConditionalActivation*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConditionalActivation::ConditionalActivation() {}
