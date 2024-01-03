#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BlueNoiseDitheringUpdater_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "GlobalNamespace/zzzz__BlueNoiseDithering_def.hpp"
#include "GlobalNamespace/zzzz__RandomValueToShader_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BlueNoiseDitheringUpdater.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlueNoiseDitheringUpdater::*)()>(&::GlobalNamespace::BlueNoiseDitheringUpdater::OnEnable)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x210aed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(), "OnEnable",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlueNoiseDitheringUpdater.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlueNoiseDitheringUpdater::*)()>(&::GlobalNamespace::BlueNoiseDitheringUpdater::OnDisable)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x210b03c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(),
                                                                               "OnDisable", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlueNoiseDitheringUpdater.HandleCameraPreRender
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlueNoiseDitheringUpdater::*)(::UnityEngine::Camera*)>(
    &::GlobalNamespace::BlueNoiseDitheringUpdater::HandleCameraPreRender)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x210b128;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(), "HandleCameraPreRender", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BlueNoiseDitheringUpdater._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BlueNoiseDitheringUpdater::*)()>(&::GlobalNamespace::BlueNoiseDitheringUpdater::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x210b214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BlueNoiseDithering*& GlobalNamespace::BlueNoiseDitheringUpdater::__get__blueNoiseDithering() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blueNoiseDithering;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BlueNoiseDithering*> const& GlobalNamespace::BlueNoiseDitheringUpdater::__get__blueNoiseDithering() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blueNoiseDithering;
}
constexpr void GlobalNamespace::BlueNoiseDitheringUpdater::__set__blueNoiseDithering(::GlobalNamespace::BlueNoiseDithering* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____blueNoiseDithering)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RandomValueToShader*& GlobalNamespace::BlueNoiseDitheringUpdater::__get__randomValueToShader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomValueToShader;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RandomValueToShader*> const& GlobalNamespace::BlueNoiseDitheringUpdater::__get__randomValueToShader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____randomValueToShader;
}
constexpr void GlobalNamespace::BlueNoiseDitheringUpdater::__set__randomValueToShader(::GlobalNamespace::RandomValueToShader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____randomValueToShader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::BlueNoiseDitheringUpdater::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(), "OnEnable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BlueNoiseDitheringUpdater::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(), "OnDisable",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BlueNoiseDitheringUpdater::HandleCameraPreRender(::UnityEngine::Camera* camera) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(), "HandleCameraPreRender",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, camera);
}
inline ::GlobalNamespace::BlueNoiseDitheringUpdater* GlobalNamespace::BlueNoiseDitheringUpdater::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::BlueNoiseDitheringUpdater*>());
}
inline void GlobalNamespace::BlueNoiseDitheringUpdater::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BlueNoiseDitheringUpdater*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BlueNoiseDitheringUpdater::BlueNoiseDitheringUpdater() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
