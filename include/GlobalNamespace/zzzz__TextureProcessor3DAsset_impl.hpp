#pragma once
// IWYU pragma private; include "GlobalNamespace\TextureProcessor3DAsset.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_impl.hpp"
#include "GlobalNamespace/zzzz__TextureProcessor3DAsset_def.hpp"
#include "GlobalNamespace/zzzz__TextureProcessor3DBehaviour_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/Timeline/zzzz__ClipCaps_def.hpp"
#include "UnityEngine/Timeline/zzzz__ITimelineClipAsset_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3DAsset.get_clipCaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Timeline::ClipCaps (::GlobalNamespace::TextureProcessor3DAsset::*)()>(
    &::GlobalNamespace::TextureProcessor3DAsset::get_clipCaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5908dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3DAsset*>(), { "get_clipCaps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3DAsset.CreatePlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (::GlobalNamespace::TextureProcessor3DAsset::*)(
    ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*)>(&::GlobalNamespace::TextureProcessor3DAsset::CreatePlayable)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5908e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3DAsset*>(), { ::i2c::class_of<::GlobalNamespace::TextureProcessor3DAsset*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextureProcessor3DAsset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TextureProcessor3DAsset::*)()>(&::GlobalNamespace::TextureProcessor3DAsset::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5908eb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3DAsset*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::TextureProcessor3DBehaviour*& GlobalNamespace::TextureProcessor3DAsset::__cordl_internal_get__template() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____template;
}
constexpr ::GlobalNamespace::TextureProcessor3DBehaviour* const& GlobalNamespace::TextureProcessor3DAsset::__cordl_internal_get__template() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____template;
}
constexpr void GlobalNamespace::TextureProcessor3DAsset::__cordl_internal_set__template(::GlobalNamespace::TextureProcessor3DBehaviour* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____template = value;
}
inline ::UnityEngine::Timeline::ClipCaps GlobalNamespace::TextureProcessor3DAsset::get_clipCaps() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3DAsset*>(), { "get_clipCaps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Timeline::ClipCaps>(this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable GlobalNamespace::TextureProcessor3DAsset::CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* gameObject) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::TextureProcessor3DAsset*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(this, ___internal_method, graph, gameObject);
}
inline void GlobalNamespace::TextureProcessor3DAsset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::TextureProcessor3DAsset*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TextureProcessor3DAsset* GlobalNamespace::TextureProcessor3DAsset::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TextureProcessor3DAsset*>());
}
/// @brief Convert operator to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr GlobalNamespace::TextureProcessor3DAsset::operator ::UnityEngine::Timeline::ITimelineClipAsset*() noexcept {
  return static_cast<::UnityEngine::Timeline::ITimelineClipAsset*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Timeline::ITimelineClipAsset"
constexpr ::UnityEngine::Timeline::ITimelineClipAsset* GlobalNamespace::TextureProcessor3DAsset::i___UnityEngine__Timeline__ITimelineClipAsset() noexcept {
  return static_cast<::UnityEngine::Timeline::ITimelineClipAsset*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextureProcessor3DAsset::TextureProcessor3DAsset() {}
