#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BakedLightDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__LightmapDataSO_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BakedLightDataLoader.get_lightmapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::LightmapDataSO* (::GlobalNamespace::BakedLightDataLoader::*)()>(
    &::GlobalNamespace::BakedLightDataLoader::get_lightmapData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f570c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightDataLoader*>::get(),
                                                                               "get_lightmapData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakedLightDataLoader.set_lightmapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BakedLightDataLoader::*)(::GlobalNamespace::LightmapDataSO*)>(
    &::GlobalNamespace::BakedLightDataLoader::set_lightmapData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f5714;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightDataLoader*>::get(), "set_lightmapData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightmapDataSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakedLightDataLoader.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BakedLightDataLoader::*)()>(&::GlobalNamespace::BakedLightDataLoader::Start)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x22f571c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightDataLoader*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakedLightDataLoader.SetTextureDataToShaders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BakedLightDataLoader::*)()>(
    &::GlobalNamespace::BakedLightDataLoader::SetTextureDataToShaders)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x22f57d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightDataLoader*>::get(),
                                                                               "SetTextureDataToShaders", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BakedLightDataLoader._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BakedLightDataLoader::*)()>(&::GlobalNamespace::BakedLightDataLoader::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22f5910;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightDataLoader*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LightmapDataSO*& GlobalNamespace::BakedLightDataLoader::__get__lightmapData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmapData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::LightmapDataSO*> const& GlobalNamespace::BakedLightDataLoader::__get__lightmapData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightmapData;
}
constexpr void GlobalNamespace::BakedLightDataLoader::__set__lightmapData(::GlobalNamespace::LightmapDataSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____lightmapData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Texture2D*& GlobalNamespace::BakedLightDataLoader::__get__blackTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blackTexture;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture2D*> const& GlobalNamespace::BakedLightDataLoader::__get__blackTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blackTexture;
}
constexpr void GlobalNamespace::BakedLightDataLoader::__set__blackTexture(::UnityEngine::Texture2D* value) {
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
inline ::GlobalNamespace::LightmapDataSO* GlobalNamespace::BakedLightDataLoader::get_lightmapData() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightDataLoader*>::get(),
                                                                             "get_lightmapData", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightmapDataSO*, false>(this, ___internal_method);
}
inline void GlobalNamespace::BakedLightDataLoader::set_lightmapData(::GlobalNamespace::LightmapDataSO* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightDataLoader*>::get(), "set_lightmapData", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LightmapDataSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::BakedLightDataLoader::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightDataLoader*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BakedLightDataLoader::SetTextureDataToShaders() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightDataLoader*>::get(),
                                                                             "SetTextureDataToShaders", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BakedLightDataLoader* GlobalNamespace::BakedLightDataLoader::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BakedLightDataLoader*>());
}
inline void GlobalNamespace::BakedLightDataLoader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BakedLightDataLoader*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BakedLightDataLoader::BakedLightDataLoader() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
