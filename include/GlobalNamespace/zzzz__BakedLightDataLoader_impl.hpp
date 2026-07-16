#pragma once
// IWYU pragma private; include "GlobalNamespace/BakedLightDataLoader.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BakedLightDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__LightmapDataSO_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BakedLightDataLoader.get_lightmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::LightmapDataSO> (::GlobalNamespace::BakedLightDataLoader::*)()>(
    &::GlobalNamespace::BakedLightDataLoader::get_lightmapData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e0160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedLightDataLoader*>(), { "get_lightmapData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakedLightDataLoader.set_lightmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakedLightDataLoader::*)(::GlobalNamespace::LightmapDataSO*)>(
    &::GlobalNamespace::BakedLightDataLoader::set_lightmapData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e0168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedLightDataLoader*>(), { "set_lightmapData", {}, { ::i2c::type_of<::GlobalNamespace::LightmapDataSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakedLightDataLoader.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakedLightDataLoader::*)()>(&::GlobalNamespace::BakedLightDataLoader::Start)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x58e0170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedLightDataLoader*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakedLightDataLoader.SetTextureDataToShaders
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakedLightDataLoader::*)()>(&::GlobalNamespace::BakedLightDataLoader::SetTextureDataToShaders)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x58e0234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedLightDataLoader*>(), { "SetTextureDataToShaders", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakedLightDataLoader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BakedLightDataLoader::*)()>(&::GlobalNamespace::BakedLightDataLoader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58e0378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedLightDataLoader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::LightmapDataSO>& GlobalNamespace::BakedLightDataLoader::__cordl_internal_get__lightmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmapData;
}
constexpr ::UnityW<::GlobalNamespace::LightmapDataSO> const& GlobalNamespace::BakedLightDataLoader::__cordl_internal_get__lightmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmapData;
}
constexpr void GlobalNamespace::BakedLightDataLoader::__cordl_internal_set__lightmapData(::UnityW<::GlobalNamespace::LightmapDataSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightmapData = value;
}
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::BakedLightDataLoader::__cordl_internal_get__blackTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blackTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::BakedLightDataLoader::__cordl_internal_get__blackTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blackTexture;
}
constexpr void GlobalNamespace::BakedLightDataLoader::__cordl_internal_set__blackTexture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____blackTexture = value;
}
inline void GlobalNamespace::BakedLightDataLoader::setStaticF__lightMap1PropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_lightMap1PropertyId", ::GlobalNamespace::BakedLightDataLoader*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakedLightDataLoader::getStaticF__lightMap1PropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_lightMap1PropertyId", ::GlobalNamespace::BakedLightDataLoader*>();
}
inline void GlobalNamespace::BakedLightDataLoader::setStaticF__lightMap2PropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_lightMap2PropertyId", ::GlobalNamespace::BakedLightDataLoader*>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakedLightDataLoader::getStaticF__lightMap2PropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_lightMap2PropertyId", ::GlobalNamespace::BakedLightDataLoader*>();
}
inline ::UnityW<::GlobalNamespace::LightmapDataSO> GlobalNamespace::BakedLightDataLoader::get_lightmapData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedLightDataLoader*>(), { "get_lightmapData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LightmapDataSO>>(this, ___internal_method);
}
inline void GlobalNamespace::BakedLightDataLoader::set_lightmapData(::GlobalNamespace::LightmapDataSO* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedLightDataLoader*>(), { "set_lightmapData", {}, { ::i2c::type_of<::GlobalNamespace::LightmapDataSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BakedLightDataLoader::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedLightDataLoader*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BakedLightDataLoader::SetTextureDataToShaders() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedLightDataLoader*>(), { "SetTextureDataToShaders", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BakedLightDataLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BakedLightDataLoader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BakedLightDataLoader* GlobalNamespace::BakedLightDataLoader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BakedLightDataLoader*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakedLightDataLoader::BakedLightDataLoader() {}
