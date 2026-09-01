#pragma once
// IWYU pragma private; include "GlobalNamespace\SetAnimationPlayAutomatically.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SetAnimationPlayAutomatically_def.hpp"
#include "GlobalNamespace/zzzz__DeterminismConfig_def.hpp"
#include "UnityEngine/zzzz__Animation_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SetAnimationPlayAutomatically.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetAnimationPlayAutomatically::*)(::GlobalNamespace::DeterminismConfig*)>(
    &::GlobalNamespace::SetAnimationPlayAutomatically::Init)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x59888a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetAnimationPlayAutomatically*>(), { "Init", {}, { ::i2c::type_of<::GlobalNamespace::DeterminismConfig*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetAnimationPlayAutomatically.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetAnimationPlayAutomatically::*)()>(&::GlobalNamespace::SetAnimationPlayAutomatically::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5988a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetAnimationPlayAutomatically*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetAnimationPlayAutomatically.OnDeterminismSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetAnimationPlayAutomatically::*)(bool)>(&::GlobalNamespace::SetAnimationPlayAutomatically::OnDeterminismSet)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5988afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetAnimationPlayAutomatically*>(), { "OnDeterminismSet", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetAnimationPlayAutomatically.OnValidate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetAnimationPlayAutomatically::*)()>(&::GlobalNamespace::SetAnimationPlayAutomatically::OnValidate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5988b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetAnimationPlayAutomatically*>(), { "OnValidate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SetAnimationPlayAutomatically._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SetAnimationPlayAutomatically::*)()>(&::GlobalNamespace::SetAnimationPlayAutomatically::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5988bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetAnimationPlayAutomatically*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Animation>& GlobalNamespace::SetAnimationPlayAutomatically::__cordl_internal_get__animationToPlay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationToPlay;
}
constexpr ::UnityW<::UnityEngine::Animation> const& GlobalNamespace::SetAnimationPlayAutomatically::__cordl_internal_get__animationToPlay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____animationToPlay;
}
constexpr void GlobalNamespace::SetAnimationPlayAutomatically::__cordl_internal_set__animationToPlay(::UnityW<::UnityEngine::Animation> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____animationToPlay = value;
}
constexpr ::GlobalNamespace::DeterminismConfig*& GlobalNamespace::SetAnimationPlayAutomatically::__cordl_internal_get__determinismConfig() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____determinismConfig;
}
constexpr ::GlobalNamespace::DeterminismConfig* const& GlobalNamespace::SetAnimationPlayAutomatically::__cordl_internal_get__determinismConfig() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____determinismConfig;
}
constexpr void GlobalNamespace::SetAnimationPlayAutomatically::__cordl_internal_set__determinismConfig(::GlobalNamespace::DeterminismConfig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____determinismConfig = value;
}
inline void GlobalNamespace::SetAnimationPlayAutomatically::Init(::GlobalNamespace::DeterminismConfig* determinismConfig) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetAnimationPlayAutomatically*>(), { "Init", {}, { ::i2c::type_of<::GlobalNamespace::DeterminismConfig*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, determinismConfig);
}
inline void GlobalNamespace::SetAnimationPlayAutomatically::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetAnimationPlayAutomatically*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SetAnimationPlayAutomatically::OnDeterminismSet(bool isDeterministic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetAnimationPlayAutomatically*>(), { "OnDeterminismSet", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isDeterministic);
}
inline void GlobalNamespace::SetAnimationPlayAutomatically::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetAnimationPlayAutomatically*>(), { "OnValidate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SetAnimationPlayAutomatically::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SetAnimationPlayAutomatically*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SetAnimationPlayAutomatically* GlobalNamespace::SetAnimationPlayAutomatically::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SetAnimationPlayAutomatically*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SetAnimationPlayAutomatically::SetAnimationPlayAutomatically() {}
