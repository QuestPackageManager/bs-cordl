#pragma once
// IWYU pragma private; include "GlobalNamespace/BlueNoiseDithering.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BlueNoiseDithering_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BlueNoiseDithering.SetBlueNoiseShaderParams
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlueNoiseDithering::*)(int32_t, int32_t)>(
    &::GlobalNamespace::BlueNoiseDithering::SetBlueNoiseShaderParams)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x39737d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDithering*>::get(), "SetBlueNoiseShaderParams", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlueNoiseDithering._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlueNoiseDithering::*)()>(&::GlobalNamespace::BlueNoiseDithering::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39738bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDithering*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Texture2D>& GlobalNamespace::BlueNoiseDithering::__cordl_internal_get__noiseTexture() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noiseTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& GlobalNamespace::BlueNoiseDithering::__cordl_internal_get__noiseTexture() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noiseTexture;
}
constexpr void GlobalNamespace::BlueNoiseDithering::__cordl_internal_set__noiseTexture(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____noiseTexture)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BlueNoiseDithering::setStaticF__noiseParamsID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_noiseParamsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDithering*>::get>(std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BlueNoiseDithering::getStaticF__noiseParamsID() {
  return ::cordl_internals::getStaticField<int32_t, "_noiseParamsID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDithering*>::get>();
}
inline void GlobalNamespace::BlueNoiseDithering::setStaticF__globalNoiseTextureID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_globalNoiseTextureID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDithering*>::get>(
      std::forward<int32_t>(value));
}
inline int32_t GlobalNamespace::BlueNoiseDithering::getStaticF__globalNoiseTextureID() {
  return ::cordl_internals::getStaticField<int32_t, "_globalNoiseTextureID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDithering*>::get>();
}
inline void GlobalNamespace::BlueNoiseDithering::SetBlueNoiseShaderParams(int32_t cameraPixelWidth, int32_t cameraPixelHeight) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDithering*>::get(), "SetBlueNoiseShaderParams", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraPixelWidth, cameraPixelHeight);
}
inline ::GlobalNamespace::BlueNoiseDithering* GlobalNamespace::BlueNoiseDithering::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BlueNoiseDithering*>());
}
inline void GlobalNamespace::BlueNoiseDithering::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDithering*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BlueNoiseDithering::BlueNoiseDithering() {}
