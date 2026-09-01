#pragma once
// IWYU pragma private; include "GlobalNamespace\FlyingScoreEffect.hpp"
#include "GlobalNamespace/zzzz__FlyingObjectEffect_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Mesh_impl.hpp"
#include "Zenject/zzzz__MonoMemoryPool_1_impl.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreEffect_def.hpp"
#include "GlobalNamespace/zzzz__CutScoreBuffer_def.hpp"
#include "GlobalNamespace/zzzz__FlyingScoreEffect_def.hpp"
#include "GlobalNamespace/zzzz__ICutScoreBufferDidChangeReceiver_def.hpp"
#include "GlobalNamespace/zzzz__ICutScoreBufferDidFinishReceiver_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyCutScoreBuffer_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__SpriteRenderer_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreEffect_Pool.OnDespawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlyingScoreEffect_Pool::*)(::GlobalNamespace::FlyingScoreEffect*)>(
    &::GlobalNamespace::FlyingScoreEffect_Pool::OnDespawned)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5983b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingScoreEffect_Pool*>(), { ::i2c::class_of<::GlobalNamespace::FlyingScoreEffect_Pool*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreEffect_Pool._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlyingScoreEffect_Pool::*)()>(&::GlobalNamespace::FlyingScoreEffect_Pool::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5983b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingScoreEffect_Pool*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FlyingScoreEffect_Pool::OnDespawned(::GlobalNamespace::FlyingScoreEffect* item) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FlyingScoreEffect_Pool*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, item);
}
inline void GlobalNamespace::FlyingScoreEffect_Pool::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingScoreEffect_Pool*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FlyingScoreEffect_Pool* GlobalNamespace::FlyingScoreEffect_Pool::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FlyingScoreEffect_Pool*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlyingScoreEffect_Pool::FlyingScoreEffect_Pool() {}
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreEffect.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::FlyingScoreEffect::Initialize)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5982e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingScoreEffect*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreEffect.InitAndPresent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlyingScoreEffect::*)(::GlobalNamespace::IReadonlyCutScoreBuffer*, float_t, ::UnityEngine::Vector3,
                                                                                                      ::UnityEngine::Color)>(&::GlobalNamespace::FlyingScoreEffect::InitAndPresent)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x598302c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingScoreEffect*>(), { "InitAndPresent",
                                                                                                            {},
                                                                                                            { ::i2c::type_of<::GlobalNamespace::IReadonlyCutScoreBuffer*>(), ::i2c::type_of<float_t>(),
                                                                                                              ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreEffect.ManualUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlyingScoreEffect::*)(float_t)>(&::GlobalNamespace::FlyingScoreEffect::ManualUpdate)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x59837d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingScoreEffect*>(), { ::i2c::class_of<::GlobalNamespace::FlyingScoreEffect*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreEffect.HandleCutScoreBufferDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlyingScoreEffect::*)(::GlobalNamespace::CutScoreBuffer*)>(
    &::GlobalNamespace::FlyingScoreEffect::HandleCutScoreBufferDidChange)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x59838f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingScoreEffect*>(), { "HandleCutScoreBufferDidChange", {}, { ::i2c::type_of<::GlobalNamespace::CutScoreBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreEffect.RefreshScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlyingScoreEffect::*)(int32_t, int32_t)>(&::GlobalNamespace::FlyingScoreEffect::RefreshScore)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x5983514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingScoreEffect*>(), { "RefreshScore", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreEffect.HandleCutScoreBufferDidFinish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlyingScoreEffect::*)(::GlobalNamespace::CutScoreBuffer*)>(
    &::GlobalNamespace::FlyingScoreEffect::HandleCutScoreBufferDidFinish)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5983938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingScoreEffect*>(), { "HandleCutScoreBufferDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::CutScoreBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreEffect.UnregisterCallbacksIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlyingScoreEffect::*)()>(&::GlobalNamespace::FlyingScoreEffect::UnregisterCallbacksIfNeeded)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x598393c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingScoreEffect*>(), { "UnregisterCallbacksIfNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FlyingScoreEffect._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FlyingScoreEffect::*)()>(&::GlobalNamespace::FlyingScoreEffect::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5983a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingScoreEffect*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::FlyingScoreEffect::__cordl_internal_get__fadeAnimationCurve() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeAnimationCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::FlyingScoreEffect::__cordl_internal_get__fadeAnimationCurve() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeAnimationCurve;
}
constexpr void GlobalNamespace::FlyingScoreEffect::__cordl_internal_set__fadeAnimationCurve(::UnityEngine::AnimationCurve* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeAnimationCurve = value;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer>& GlobalNamespace::FlyingScoreEffect::__cordl_internal_get__maxCutDistanceScoreIndicator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxCutDistanceScoreIndicator;
}
constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& GlobalNamespace::FlyingScoreEffect::__cordl_internal_get__maxCutDistanceScoreIndicator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxCutDistanceScoreIndicator;
}
constexpr void GlobalNamespace::FlyingScoreEffect::__cordl_internal_set__maxCutDistanceScoreIndicator(::UnityW<::UnityEngine::SpriteRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxCutDistanceScoreIndicator = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& GlobalNamespace::FlyingScoreEffect::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& GlobalNamespace::FlyingScoreEffect::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void GlobalNamespace::FlyingScoreEffect::__cordl_internal_set__text(::UnityW<::TMPro::TextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::FlyingScoreEffect::__cordl_internal_get__color() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::FlyingScoreEffect::__cordl_internal_get__color() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____color;
}
constexpr void GlobalNamespace::FlyingScoreEffect::__cordl_internal_set__color(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____color = value;
}
constexpr float_t& GlobalNamespace::FlyingScoreEffect::__cordl_internal_get__colorAMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorAMultiplier;
}
constexpr float_t const& GlobalNamespace::FlyingScoreEffect::__cordl_internal_get__colorAMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorAMultiplier;
}
constexpr void GlobalNamespace::FlyingScoreEffect::__cordl_internal_set__colorAMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorAMultiplier = value;
}
constexpr bool& GlobalNamespace::FlyingScoreEffect::__cordl_internal_get__registeredToCallbacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredToCallbacks;
}
constexpr bool const& GlobalNamespace::FlyingScoreEffect::__cordl_internal_get__registeredToCallbacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____registeredToCallbacks;
}
constexpr void GlobalNamespace::FlyingScoreEffect::__cordl_internal_set__registeredToCallbacks(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____registeredToCallbacks = value;
}
constexpr ::GlobalNamespace::IReadonlyCutScoreBuffer*& GlobalNamespace::FlyingScoreEffect::__cordl_internal_get__cutScoreBuffer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutScoreBuffer;
}
constexpr ::GlobalNamespace::IReadonlyCutScoreBuffer* const& GlobalNamespace::FlyingScoreEffect::__cordl_internal_get__cutScoreBuffer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutScoreBuffer;
}
constexpr void GlobalNamespace::FlyingScoreEffect::__cordl_internal_set__cutScoreBuffer(::GlobalNamespace::IReadonlyCutScoreBuffer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cutScoreBuffer = value;
}
inline void GlobalNamespace::FlyingScoreEffect::setStaticF__cachedMeshes(::ArrayW<::UnityW<::UnityEngine::Mesh>> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityW<::UnityEngine::Mesh>>, "_cachedMeshes", ::GlobalNamespace::FlyingScoreEffect*>(std::forward<::ArrayW<::UnityW<::UnityEngine::Mesh>>>(value));
}
inline ::ArrayW<::UnityW<::UnityEngine::Mesh>> GlobalNamespace::FlyingScoreEffect::getStaticF__cachedMeshes() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityW<::UnityEngine::Mesh>>, "_cachedMeshes", ::GlobalNamespace::FlyingScoreEffect*>();
}
inline void GlobalNamespace::FlyingScoreEffect::setStaticF__materialPropertyBlock(::UnityEngine::MaterialPropertyBlock* value) {
  ::cordl_internals::setStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock", ::GlobalNamespace::FlyingScoreEffect*>(std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
inline ::UnityEngine::MaterialPropertyBlock* GlobalNamespace::FlyingScoreEffect::getStaticF__materialPropertyBlock() {
  return ::cordl_internals::getStaticField<::UnityEngine::MaterialPropertyBlock*, "_materialPropertyBlock", ::GlobalNamespace::FlyingScoreEffect*>();
}
inline void GlobalNamespace::FlyingScoreEffect::setStaticF_kFaceColorId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "kFaceColorId", ::GlobalNamespace::FlyingScoreEffect*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::FlyingScoreEffect::getStaticF_kFaceColorId() {
  return ::cordl_internals::getStaticField<int32_t, "kFaceColorId", ::GlobalNamespace::FlyingScoreEffect*>();
}
inline void GlobalNamespace::FlyingScoreEffect::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingScoreEffect*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::FlyingScoreEffect::InitAndPresent(::GlobalNamespace::IReadonlyCutScoreBuffer* cutScoreBuffer, float_t duration, ::UnityEngine::Vector3 targetPos,
                                                               ::UnityEngine::Color color) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingScoreEffect*>(), { "InitAndPresent",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::GlobalNamespace::IReadonlyCutScoreBuffer*>(), ::i2c::type_of<float_t>(),
                                                                                                            ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cutScoreBuffer, duration, targetPos, color);
}
inline void GlobalNamespace::FlyingScoreEffect::ManualUpdate(float_t t) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FlyingScoreEffect*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline void GlobalNamespace::FlyingScoreEffect::HandleCutScoreBufferDidChange(::GlobalNamespace::CutScoreBuffer* cutScoreBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingScoreEffect*>(), { "HandleCutScoreBufferDidChange", {}, { ::i2c::type_of<::GlobalNamespace::CutScoreBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cutScoreBuffer);
}
inline void GlobalNamespace::FlyingScoreEffect::RefreshScore(int32_t score, int32_t maxPossibleCutScore) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingScoreEffect*>(), { "RefreshScore", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, score, maxPossibleCutScore);
}
inline void GlobalNamespace::FlyingScoreEffect::HandleCutScoreBufferDidFinish(::GlobalNamespace::CutScoreBuffer* cutScoreBuffer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingScoreEffect*>(), { "HandleCutScoreBufferDidFinish", {}, { ::i2c::type_of<::GlobalNamespace::CutScoreBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cutScoreBuffer);
}
inline void GlobalNamespace::FlyingScoreEffect::UnregisterCallbacksIfNeeded() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingScoreEffect*>(), { "UnregisterCallbacksIfNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FlyingScoreEffect::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FlyingScoreEffect*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FlyingScoreEffect* GlobalNamespace::FlyingScoreEffect::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FlyingScoreEffect*>());
}
/// @brief Convert operator to "::GlobalNamespace::ICutScoreBufferDidChangeReceiver"
constexpr GlobalNamespace::FlyingScoreEffect::operator ::GlobalNamespace::ICutScoreBufferDidChangeReceiver*() noexcept {
  return static_cast<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICutScoreBufferDidChangeReceiver"
constexpr ::GlobalNamespace::ICutScoreBufferDidChangeReceiver* GlobalNamespace::FlyingScoreEffect::i___GlobalNamespace__ICutScoreBufferDidChangeReceiver() noexcept {
  return static_cast<::GlobalNamespace::ICutScoreBufferDidChangeReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ICutScoreBufferDidFinishReceiver"
constexpr GlobalNamespace::FlyingScoreEffect::operator ::GlobalNamespace::ICutScoreBufferDidFinishReceiver*() noexcept {
  return static_cast<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ICutScoreBufferDidFinishReceiver"
constexpr ::GlobalNamespace::ICutScoreBufferDidFinishReceiver* GlobalNamespace::FlyingScoreEffect::i___GlobalNamespace__ICutScoreBufferDidFinishReceiver() noexcept {
  return static_cast<::GlobalNamespace::ICutScoreBufferDidFinishReceiver*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FlyingScoreEffect::FlyingScoreEffect() {}
