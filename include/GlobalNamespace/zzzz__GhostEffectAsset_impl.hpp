#pragma once
// IWYU pragma private; include "GlobalNamespace\GhostEffectAsset.hpp"
#include "GlobalNamespace/zzzz__GhostEffectBehaviour_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "UnityEngine/zzzz__ExposedReference_1_impl.hpp"
#include "GlobalNamespace/zzzz__GhostEffectAsset_def.hpp"
#include "GlobalNamespace/zzzz__GhostEffectBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__TimelineArrayReference_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GhostEffectAsset.get_clipCaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::ClipCaps (::GlobalNamespace::GhostEffectAsset::*)()>(&::GlobalNamespace::GhostEffectAsset::get_clipCaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59082ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GhostEffectAsset*>(), { "get_clipCaps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostEffectAsset.CreatePlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::GlobalNamespace::GhostEffectAsset::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::GlobalNamespace::GhostEffectAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x59082b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::GhostEffectAsset*>(), { ::i2c::class_of<::GlobalNamespace::GhostEffectAsset*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GhostEffectAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GhostEffectAsset::*)()>(&::GlobalNamespace::GhostEffectAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5908410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GhostEffectAsset*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::GhostEffectBehaviour_GhostEffectType& GlobalNamespace::GhostEffectAsset::__cordl_internal_get__ghostEffectType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ghostEffectType;
}
constexpr ::GlobalNamespace::GhostEffectBehaviour_GhostEffectType const& GlobalNamespace::GhostEffectAsset::__cordl_internal_get__ghostEffectType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ghostEffectType;
}
constexpr void GlobalNamespace::GhostEffectAsset::__cordl_internal_set__ghostEffectType(::GlobalNamespace::GhostEffectBehaviour_GhostEffectType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ghostEffectType = value;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::GlobalNamespace::TimelineArrayReference>>& GlobalNamespace::GhostEffectAsset::__cordl_internal_get_arrayReference() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayReference;
}
constexpr ::UnityEngine::ExposedReference_1<::UnityW<::GlobalNamespace::TimelineArrayReference>> const& GlobalNamespace::GhostEffectAsset::__cordl_internal_get_arrayReference() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___arrayReference;
}
constexpr void GlobalNamespace::GhostEffectAsset::__cordl_internal_set_arrayReference(::UnityEngine::ExposedReference_1<::UnityW<::GlobalNamespace::TimelineArrayReference>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___arrayReference = value;
}
constexpr ::GlobalNamespace::GhostEffectBehaviour*& GlobalNamespace::GhostEffectAsset::__cordl_internal_get__cordl_template() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_template;
}
constexpr ::GlobalNamespace::GhostEffectBehaviour* const& GlobalNamespace::GhostEffectAsset::__cordl_internal_get__cordl_template() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cordl_template;
}
constexpr void GlobalNamespace::GhostEffectAsset::__cordl_internal_set__cordl_template(::GlobalNamespace::GhostEffectBehaviour* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cordl_template = value;
}
inline ::UnityEngine::Timeline::ClipCaps GlobalNamespace::GhostEffectAsset::get_clipCaps() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GhostEffectAsset*>(), { "get_clipCaps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::ClipCaps>(this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable GlobalNamespace::GhostEffectAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::GhostEffectAsset*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, go);
}
inline void GlobalNamespace::GhostEffectAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::GhostEffectAsset*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GhostEffectAsset* GlobalNamespace::GhostEffectAsset::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GhostEffectAsset*>());
}
/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr GlobalNamespace::GhostEffectAsset::operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept {
  return static_cast<::UnityEngine::Timeline::ITimelineClipAsset*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr ::UnityEngine::Timeline::ITimelineClipAsset* GlobalNamespace::GhostEffectAsset::i___UnityEngine__Timeline__ITimelineClipAsset() noexcept {
  return static_cast<::UnityEngine::Timeline::ITimelineClipAsset*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GhostEffectAsset::GhostEffectAsset() {}
