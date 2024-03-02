#pragma once
#include "GlobalNamespace/zzzz__FlyingScoreSpawner_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreSpawner_def.hpp"
#include "GlobalNamespace/zzzz__FlyingObjectEffect_def.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreEffect_def.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreSpawner_def.hpp"
#include "GlobalNamespace/zzzz__IFlyingObjectEffectDidFinishEvent_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyCutScoreBuffer_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition::__FlyingScoreSpawner__SpawnPosition(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition::__FlyingScoreSpawner__SpawnPosition() {}
constexpr ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition GlobalNamespace::__FlyingScoreSpawner__SpawnPosition::Underground{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition GlobalNamespace::__FlyingScoreSpawner__SpawnPosition::AboveGround{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::__FlyingScoreSpawner__InitData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FlyingScoreSpawner__InitData::*)(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition)>(
    &::GlobalNamespace::__FlyingScoreSpawner__InitData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x242fe40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FlyingScoreSpawner__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition& GlobalNamespace::__FlyingScoreSpawner__InitData::__cordl_internal_get_spawnPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnPosition;
}
constexpr ::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition const& GlobalNamespace::__FlyingScoreSpawner__InitData::__cordl_internal_get_spawnPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnPosition;
}
constexpr void GlobalNamespace::__FlyingScoreSpawner__InitData::__cordl_internal_set_spawnPosition(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spawnPosition = value;
}
inline ::GlobalNamespace::__FlyingScoreSpawner__InitData* GlobalNamespace::__FlyingScoreSpawner__InitData::New_ctor(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition spawnPosition) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__FlyingScoreSpawner__InitData*>(spawnPosition));
}
inline void GlobalNamespace::__FlyingScoreSpawner__InitData::_ctor(::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition spawnPosition) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FlyingScoreSpawner__InitData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__FlyingScoreSpawner__SpawnPosition>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, spawnPosition);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__FlyingScoreSpawner__InitData::__FlyingScoreSpawner__InitData() {}
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreSpawner.SpawnFlyingScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreSpawner::*)(::GlobalNamespace::IReadonlyCutScoreBuffer*, ::UnityEngine::Color)>(
    &::GlobalNamespace::FlyingScoreSpawner::SpawnFlyingScore)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x242fa98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner*>::get(), "SpawnFlyingScore", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyCutScoreBuffer*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreSpawner.HandleFlyingObjectEffectDidFinish
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreSpawner::*)(::GlobalNamespace::FlyingObjectEffect*)>(
    &::GlobalNamespace::FlyingScoreSpawner::HandleFlyingObjectEffectDidFinish)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x242fd1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner*>::get(), "HandleFlyingObjectEffectDidFinish", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FlyingObjectEffect*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreSpawner._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FlyingScoreSpawner::*)()>(&::GlobalNamespace::FlyingScoreSpawner::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x242fe38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
constexpr GlobalNamespace::FlyingScoreSpawner::operator ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*() noexcept {
  return static_cast<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IFlyingObjectEffectDidFinishEvent"
constexpr ::GlobalNamespace::IFlyingObjectEffectDidFinishEvent* GlobalNamespace::FlyingScoreSpawner::i___GlobalNamespace__IFlyingObjectEffectDidFinishEvent() noexcept {
  return static_cast<::GlobalNamespace::IFlyingObjectEffectDidFinishEvent*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::__FlyingScoreEffect__Pool*& GlobalNamespace::FlyingScoreSpawner::__cordl_internal_get__flyingScoreEffectPool() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingScoreEffectPool;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FlyingScoreEffect__Pool*> const& GlobalNamespace::FlyingScoreSpawner::__cordl_internal_get__flyingScoreEffectPool() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flyingScoreEffectPool;
}
constexpr void GlobalNamespace::FlyingScoreSpawner::__cordl_internal_set__flyingScoreEffectPool(::GlobalNamespace::__FlyingScoreEffect__Pool* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____flyingScoreEffectPool)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__FlyingScoreSpawner__InitData*& GlobalNamespace::FlyingScoreSpawner::__cordl_internal_get__initData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__FlyingScoreSpawner__InitData*> const& GlobalNamespace::FlyingScoreSpawner::__cordl_internal_get__initData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initData;
}
constexpr void GlobalNamespace::FlyingScoreSpawner::__cordl_internal_set__initData(::GlobalNamespace::__FlyingScoreSpawner__InitData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____initData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FlyingScoreSpawner::SpawnFlyingScore(::GlobalNamespace::IReadonlyCutScoreBuffer* cutScoreBuffer, ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner*>::get(), "SpawnFlyingScore", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyCutScoreBuffer*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cutScoreBuffer, color);
}
inline void GlobalNamespace::FlyingScoreSpawner::HandleFlyingObjectEffectDidFinish(::GlobalNamespace::FlyingObjectEffect* flyingObjectEffect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner*>::get(), "HandleFlyingObjectEffectDidFinish", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::FlyingObjectEffect*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, flyingObjectEffect);
}
inline ::GlobalNamespace::FlyingScoreSpawner* GlobalNamespace::FlyingScoreSpawner::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FlyingScoreSpawner*>());
}
inline void GlobalNamespace::FlyingScoreSpawner::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FlyingScoreSpawner*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlyingScoreSpawner::FlyingScoreSpawner() {}
