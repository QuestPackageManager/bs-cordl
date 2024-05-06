#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BakedLightDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__LightmapDataSO_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BakedLightDataLoader.get_lightmapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::LightmapDataSO> (::GlobalNamespace::BakedLightDataLoader::*)()>(
    &::GlobalNamespace::BakedLightDataLoader::get_lightmapData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267e828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightDataLoader*>::get(),
                                                                               "get_lightmapData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakedLightDataLoader.set_lightmapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BakedLightDataLoader::*)(::GlobalNamespace::LightmapDataSO*)>(
    &::GlobalNamespace::BakedLightDataLoader::set_lightmapData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267e830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightDataLoader*>::get(), "set_lightmapData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightmapDataSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakedLightDataLoader.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BakedLightDataLoader::*)()>(&::GlobalNamespace::BakedLightDataLoader::Start)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x267e838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightDataLoader*>::get(), "Start",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakedLightDataLoader.SetTextureDataToShaders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BakedLightDataLoader::*)()>(
    &::GlobalNamespace::BakedLightDataLoader::SetTextureDataToShaders)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x267e8f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightDataLoader*>::get(),
                                                                               "SetTextureDataToShaders", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakedLightDataLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BakedLightDataLoader::*)()>(&::GlobalNamespace::BakedLightDataLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x267ea2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightDataLoader*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightmapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____blackTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BakedLightDataLoader::setStaticF__lightMap1PropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_lightMap1PropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightDataLoader*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakedLightDataLoader::getStaticF__lightMap1PropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_lightMap1PropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightDataLoader*>::get>();
}
inline void GlobalNamespace::BakedLightDataLoader::setStaticF__lightMap2PropertyId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_lightMap2PropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightDataLoader*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BakedLightDataLoader::getStaticF__lightMap2PropertyId() {
  return ::cordl_internals::getStaticField<int32_t, "_lightMap2PropertyId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightDataLoader*>::get>();
}
inline ::UnityW<::GlobalNamespace::LightmapDataSO> GlobalNamespace::BakedLightDataLoader::get_lightmapData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightDataLoader*>::get(),
                                                                             "get_lightmapData", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::LightmapDataSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::BakedLightDataLoader::set_lightmapData(::GlobalNamespace::LightmapDataSO* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightDataLoader*>::get(), "set_lightmapData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightmapDataSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::BakedLightDataLoader::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightDataLoader*>::get(), "Start",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BakedLightDataLoader::SetTextureDataToShaders() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightDataLoader*>::get(),
                                                                             "SetTextureDataToShaders", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BakedLightDataLoader* GlobalNamespace::BakedLightDataLoader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BakedLightDataLoader*>());
}
inline void GlobalNamespace::BakedLightDataLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightDataLoader*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakedLightDataLoader::BakedLightDataLoader() {}
