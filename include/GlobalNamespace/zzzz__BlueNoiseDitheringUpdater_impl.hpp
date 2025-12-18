#pragma once
// IWYU pragma private; include "GlobalNamespace/BlueNoiseDitheringUpdater.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BlueNoiseDitheringUpdater_def.hpp"
#include "GlobalNamespace/zzzz__BlueNoiseDithering_def.hpp"
#include "GlobalNamespace/zzzz__IRandom_def.hpp"
#include "GlobalNamespace/zzzz__RandomValueToShader_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BlueNoiseDitheringUpdater.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlueNoiseDitheringUpdater::*)(::GlobalNamespace::IRandom*)>(
    &::GlobalNamespace::BlueNoiseDitheringUpdater::Init)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56b4d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IRandom*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlueNoiseDitheringUpdater.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlueNoiseDitheringUpdater::*)()>(&::GlobalNamespace::BlueNoiseDitheringUpdater::OnEnable)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x56b4d98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlueNoiseDitheringUpdater.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlueNoiseDitheringUpdater::*)()>(&::GlobalNamespace::BlueNoiseDitheringUpdater::OnDisable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x56b4f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(),
                                                                               "OnDisable", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlueNoiseDitheringUpdater.HandleCameraPreRender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlueNoiseDitheringUpdater::*)(::UnityEngine::Camera*)>(
    &::GlobalNamespace::BlueNoiseDitheringUpdater::HandleCameraPreRender)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x56b4ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(), "HandleCameraPreRender", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlueNoiseDitheringUpdater._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlueNoiseDitheringUpdater::*)()>(&::GlobalNamespace::BlueNoiseDitheringUpdater::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56b5174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BlueNoiseDithering>& GlobalNamespace::BlueNoiseDitheringUpdater::__cordl_internal_get__blueNoiseDithering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blueNoiseDithering;
}
constexpr ::UnityW<::GlobalNamespace::BlueNoiseDithering> const& GlobalNamespace::BlueNoiseDitheringUpdater::__cordl_internal_get__blueNoiseDithering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blueNoiseDithering;
}
constexpr void GlobalNamespace::BlueNoiseDitheringUpdater::__cordl_internal_set__blueNoiseDithering(::UnityW<::GlobalNamespace::BlueNoiseDithering> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____blueNoiseDithering)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::GlobalNamespace::RandomValueToShader>& GlobalNamespace::BlueNoiseDitheringUpdater::__cordl_internal_get__randomValueToShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomValueToShader;
}
constexpr ::UnityW<::GlobalNamespace::RandomValueToShader> const& GlobalNamespace::BlueNoiseDitheringUpdater::__cordl_internal_get__randomValueToShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomValueToShader;
}
constexpr void GlobalNamespace::BlueNoiseDitheringUpdater::__cordl_internal_set__randomValueToShader(::UnityW<::GlobalNamespace::RandomValueToShader> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____randomValueToShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BlueNoiseDitheringUpdater::Init(::GlobalNamespace::IRandom* random) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IRandom*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, random);
}
inline void GlobalNamespace::BlueNoiseDitheringUpdater::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BlueNoiseDitheringUpdater::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BlueNoiseDitheringUpdater::HandleCameraPreRender(::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(), "HandleCameraPreRender", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera);
}
inline void GlobalNamespace::BlueNoiseDitheringUpdater::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BlueNoiseDitheringUpdater* GlobalNamespace::BlueNoiseDitheringUpdater::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BlueNoiseDitheringUpdater*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BlueNoiseDitheringUpdater::BlueNoiseDitheringUpdater() {}
