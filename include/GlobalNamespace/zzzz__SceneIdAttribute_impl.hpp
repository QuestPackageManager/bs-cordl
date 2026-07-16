#pragma once
// IWYU pragma private; include "GlobalNamespace/SceneIdAttribute.hpp"
#include "GlobalNamespace/zzzz__BeatmapSceneIdFilter_impl.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__SceneIdAttribute_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapSceneIdFilter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SceneIdAttribute.get_allowGameScenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SceneIdAttribute::*)()>(&::GlobalNamespace::SceneIdAttribute::get_allowGameScenes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x32ff268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneIdAttribute*>(), { "get_allowGameScenes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneIdAttribute.get_allowEnvironmentScenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SceneIdAttribute::*)()>(&::GlobalNamespace::SceneIdAttribute::get_allowEnvironmentScenes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x32ff274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneIdAttribute*>(), { "get_allowEnvironmentScenes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneIdAttribute.get_allowEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SceneIdAttribute::*)()>(&::GlobalNamespace::SceneIdAttribute::get_allowEmpty)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x32ff280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneIdAttribute*>(), { "get_allowEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneIdAttribute.get_allowAllScenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SceneIdAttribute::*)()>(&::GlobalNamespace::SceneIdAttribute::get_allowAllScenes)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32ff28c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneIdAttribute*>(), { "get_allowAllScenes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneIdAttribute.get_onlyAllowEnvironmentScenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SceneIdAttribute::*)()>(&::GlobalNamespace::SceneIdAttribute::get_onlyAllowEnvironmentScenes)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32ff2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneIdAttribute*>(), { "get_onlyAllowEnvironmentScenes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SceneIdAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SceneIdAttribute::*)(::GlobalNamespace::BeatmapSceneIdFilter)>(&::GlobalNamespace::SceneIdAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x32ff2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneIdAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapSceneIdFilter>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapSceneIdFilter& GlobalNamespace::SceneIdAttribute::__cordl_internal_get__filter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filter;
}
constexpr ::GlobalNamespace::BeatmapSceneIdFilter const& GlobalNamespace::SceneIdAttribute::__cordl_internal_get__filter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filter;
}
constexpr void GlobalNamespace::SceneIdAttribute::__cordl_internal_set__filter(::GlobalNamespace::BeatmapSceneIdFilter value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____filter = value;
}
inline bool GlobalNamespace::SceneIdAttribute::get_allowGameScenes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneIdAttribute*>(), { "get_allowGameScenes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SceneIdAttribute::get_allowEnvironmentScenes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneIdAttribute*>(), { "get_allowEnvironmentScenes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SceneIdAttribute::get_allowEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneIdAttribute*>(), { "get_allowEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SceneIdAttribute::get_allowAllScenes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneIdAttribute*>(), { "get_allowAllScenes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::SceneIdAttribute::get_onlyAllowEnvironmentScenes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneIdAttribute*>(), { "get_onlyAllowEnvironmentScenes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SceneIdAttribute::_ctor(::GlobalNamespace::BeatmapSceneIdFilter filter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SceneIdAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapSceneIdFilter>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filter);
}
inline ::GlobalNamespace::SceneIdAttribute* GlobalNamespace::SceneIdAttribute::New_ctor(::GlobalNamespace::BeatmapSceneIdFilter filter) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SceneIdAttribute*>(filter));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SceneIdAttribute::SceneIdAttribute() {}
