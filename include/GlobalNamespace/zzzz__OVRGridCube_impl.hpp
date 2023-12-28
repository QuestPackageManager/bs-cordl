#pragma once
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__OVRGridCube_def.hpp"
#include "GlobalNamespace/zzzz__OVRCameraRig_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRGridCube.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGridCube::*)()>(&::GlobalNamespace::OVRGridCube::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x27ae3c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGridCube*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGridCube.SetOVRCameraController
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGridCube::*)(ByRef<::GlobalNamespace::OVRCameraRig*>)>(
    &::GlobalNamespace::OVRGridCube::SetOVRCameraController)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x27ae5e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGridCube*>::get(), "SetOVRCameraController", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::OVRCameraRig*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGridCube.UpdateCubeGrid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGridCube::*)()>(&::GlobalNamespace::OVRGridCube::UpdateCubeGrid)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x27ae3cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGridCube*>::get(), "UpdateCubeGrid",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGridCube.CreateCubeGrid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGridCube::*)()>(&::GlobalNamespace::OVRGridCube::CreateCubeGrid)> {
  constexpr static std::size_t size = 0x3a8;
  constexpr static std::size_t addrs = 0x27ae5f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGridCube*>::get(), "CreateCubeGrid",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGridCube.CubeGridSwitchColor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGridCube::*)(bool)>(&::GlobalNamespace::OVRGridCube::CubeGridSwitchColor)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x27ae998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGridCube*>::get(), "CubeGridSwitchColor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGridCube._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGridCube::*)()>(&::GlobalNamespace::OVRGridCube::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x27aeb20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGridCube*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::KeyCode& GlobalNamespace::OVRGridCube::__get_GridKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GridKey;
}
constexpr ::UnityEngine::KeyCode const& GlobalNamespace::OVRGridCube::__get_GridKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___GridKey;
}
constexpr void GlobalNamespace::OVRGridCube::__set_GridKey(::UnityEngine::KeyCode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___GridKey = value;
}
constexpr ::UnityEngine::GameObject*& GlobalNamespace::OVRGridCube::__get_CubeGrid() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CubeGrid;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& GlobalNamespace::OVRGridCube::__get_CubeGrid() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CubeGrid;
}
constexpr void GlobalNamespace::OVRGridCube::__set_CubeGrid(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CubeGrid)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRGridCube::__get_CubeGridOn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CubeGridOn;
}
constexpr bool const& GlobalNamespace::OVRGridCube::__get_CubeGridOn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CubeGridOn;
}
constexpr void GlobalNamespace::OVRGridCube::__set_CubeGridOn(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CubeGridOn = value;
}
constexpr bool& GlobalNamespace::OVRGridCube::__get_CubeSwitchColorOld() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CubeSwitchColorOld;
}
constexpr bool const& GlobalNamespace::OVRGridCube::__get_CubeSwitchColorOld() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CubeSwitchColorOld;
}
constexpr void GlobalNamespace::OVRGridCube::__set_CubeSwitchColorOld(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CubeSwitchColorOld = value;
}
constexpr bool& GlobalNamespace::OVRGridCube::__get_CubeSwitchColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CubeSwitchColor;
}
constexpr bool const& GlobalNamespace::OVRGridCube::__get_CubeSwitchColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CubeSwitchColor;
}
constexpr void GlobalNamespace::OVRGridCube::__set_CubeSwitchColor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___CubeSwitchColor = value;
}
constexpr int32_t& GlobalNamespace::OVRGridCube::__get_gridSizeX() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gridSizeX;
}
constexpr int32_t const& GlobalNamespace::OVRGridCube::__get_gridSizeX() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gridSizeX;
}
constexpr void GlobalNamespace::OVRGridCube::__set_gridSizeX(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gridSizeX = value;
}
constexpr int32_t& GlobalNamespace::OVRGridCube::__get_gridSizeY() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gridSizeY;
}
constexpr int32_t const& GlobalNamespace::OVRGridCube::__get_gridSizeY() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gridSizeY;
}
constexpr void GlobalNamespace::OVRGridCube::__set_gridSizeY(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gridSizeY = value;
}
constexpr int32_t& GlobalNamespace::OVRGridCube::__get_gridSizeZ() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gridSizeZ;
}
constexpr int32_t const& GlobalNamespace::OVRGridCube::__get_gridSizeZ() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gridSizeZ;
}
constexpr void GlobalNamespace::OVRGridCube::__set_gridSizeZ(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gridSizeZ = value;
}
constexpr float_t& GlobalNamespace::OVRGridCube::__get_gridScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gridScale;
}
constexpr float_t const& GlobalNamespace::OVRGridCube::__get_gridScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gridScale;
}
constexpr void GlobalNamespace::OVRGridCube::__set_gridScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gridScale = value;
}
constexpr float_t& GlobalNamespace::OVRGridCube::__get_cubeScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cubeScale;
}
constexpr float_t const& GlobalNamespace::OVRGridCube::__get_cubeScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cubeScale;
}
constexpr void GlobalNamespace::OVRGridCube::__set_cubeScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cubeScale = value;
}
constexpr ::GlobalNamespace::OVRCameraRig*& GlobalNamespace::OVRGridCube::__get_CameraController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CameraController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRCameraRig*> const& GlobalNamespace::OVRGridCube::__get_CameraController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___CameraController;
}
constexpr void GlobalNamespace::OVRGridCube::__set_CameraController(::GlobalNamespace::OVRCameraRig* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___CameraController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRGridCube::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGridCube*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRGridCube::SetOVRCameraController(ByRef<::GlobalNamespace::OVRCameraRig*> cameraController) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGridCube*>::get(), "SetOVRCameraController", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::GlobalNamespace::OVRCameraRig*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, cameraController);
}
inline void GlobalNamespace::OVRGridCube::UpdateCubeGrid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGridCube*>::get(), "UpdateCubeGrid",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRGridCube::CreateCubeGrid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGridCube*>::get(), "CreateCubeGrid",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRGridCube::CubeGridSwitchColor(bool CubeSwitchColor) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGridCube*>::get(), "CubeGridSwitchColor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, CubeSwitchColor);
}
inline ::GlobalNamespace::OVRGridCube* GlobalNamespace::OVRGridCube::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::OVRGridCube*>());
}
inline void GlobalNamespace::OVRGridCube::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGridCube*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGridCube::OVRGridCube() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
