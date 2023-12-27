#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGridCube)
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRGridCube;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRGridCube);
// Type: ::OVRGridCube
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10058))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8112))
// CS Name: ::OVRGridCube*
class CORDL_TYPE OVRGridCube : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field GridKey, offset 0x18, size 0x4
  __declspec(property(get = __get_GridKey, put = __set_GridKey))::UnityEngine::KeyCode GridKey;

  /// @brief Field CubeGrid, offset 0x20, size 0x8
  __declspec(property(get = __get_CubeGrid, put = __set_CubeGrid))::UnityEngine::GameObject* CubeGrid;

  /// @brief Field CubeGridOn, offset 0x28, size 0x1
  __declspec(property(get = __get_CubeGridOn, put = __set_CubeGridOn)) bool CubeGridOn;

  /// @brief Field CubeSwitchColorOld, offset 0x29, size 0x1
  __declspec(property(get = __get_CubeSwitchColorOld, put = __set_CubeSwitchColorOld)) bool CubeSwitchColorOld;

  /// @brief Field CubeSwitchColor, offset 0x2a, size 0x1
  __declspec(property(get = __get_CubeSwitchColor, put = __set_CubeSwitchColor)) bool CubeSwitchColor;

  /// @brief Field gridSizeX, offset 0x2c, size 0x4
  __declspec(property(get = __get_gridSizeX, put = __set_gridSizeX)) int32_t gridSizeX;

  /// @brief Field gridSizeY, offset 0x30, size 0x4
  __declspec(property(get = __get_gridSizeY, put = __set_gridSizeY)) int32_t gridSizeY;

  /// @brief Field gridSizeZ, offset 0x34, size 0x4
  __declspec(property(get = __get_gridSizeZ, put = __set_gridSizeZ)) int32_t gridSizeZ;

  /// @brief Field gridScale, offset 0x38, size 0x4
  __declspec(property(get = __get_gridScale, put = __set_gridScale)) float_t gridScale;

  /// @brief Field cubeScale, offset 0x3c, size 0x4
  __declspec(property(get = __get_cubeScale, put = __set_cubeScale)) float_t cubeScale;

  /// @brief Field CameraController, offset 0x40, size 0x8
  __declspec(property(get = __get_CameraController, put = __set_CameraController))::GlobalNamespace::OVRCameraRig* CameraController;

  constexpr ::UnityEngine::KeyCode& __get_GridKey();

  constexpr ::UnityEngine::KeyCode const& __get_GridKey() const;

  constexpr void __set_GridKey(::UnityEngine::KeyCode value);

  constexpr ::UnityEngine::GameObject*& __get_CubeGrid();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_CubeGrid() const;

  constexpr void __set_CubeGrid(::UnityEngine::GameObject* value);

  constexpr bool& __get_CubeGridOn();

  constexpr bool const& __get_CubeGridOn() const;

  constexpr void __set_CubeGridOn(bool value);

  constexpr bool& __get_CubeSwitchColorOld();

  constexpr bool const& __get_CubeSwitchColorOld() const;

  constexpr void __set_CubeSwitchColorOld(bool value);

  constexpr bool& __get_CubeSwitchColor();

  constexpr bool const& __get_CubeSwitchColor() const;

  constexpr void __set_CubeSwitchColor(bool value);

  constexpr int32_t& __get_gridSizeX();

  constexpr int32_t const& __get_gridSizeX() const;

  constexpr void __set_gridSizeX(int32_t value);

  constexpr int32_t& __get_gridSizeY();

  constexpr int32_t const& __get_gridSizeY() const;

  constexpr void __set_gridSizeY(int32_t value);

  constexpr int32_t& __get_gridSizeZ();

  constexpr int32_t const& __get_gridSizeZ() const;

  constexpr void __set_gridSizeZ(int32_t value);

  constexpr float_t& __get_gridScale();

  constexpr float_t const& __get_gridScale() const;

  constexpr void __set_gridScale(float_t value);

  constexpr float_t& __get_cubeScale();

  constexpr float_t const& __get_cubeScale() const;

  constexpr void __set_cubeScale(float_t value);

  constexpr ::GlobalNamespace::OVRCameraRig*& __get_CameraController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRCameraRig*> const& __get_CameraController() const;

  constexpr void __set_CameraController(::GlobalNamespace::OVRCameraRig* value);

  /// @brief Method Update addr 0x27ae3c8 size 0x4 virtual false final false
  inline void Update();

  /// @brief Method SetOVRCameraController addr 0x27ae5e4 size 0xc virtual false final false
  inline void SetOVRCameraController(ByRef<::GlobalNamespace::OVRCameraRig*> cameraController);

  /// @brief Method UpdateCubeGrid addr 0x27ae3cc size 0x218 virtual false final false
  inline void UpdateCubeGrid();

  /// @brief Method CreateCubeGrid addr 0x27ae5f0 size 0x3a8 virtual false final false
  inline void CreateCubeGrid();

  /// @brief Method CubeGridSwitchColor addr 0x27ae998 size 0x188 virtual false final false
  inline void CubeGridSwitchColor(bool CubeSwitchColor);

  static inline ::GlobalNamespace::OVRGridCube* New_ctor();

  /// @brief Method .ctor addr 0x27aeb20 size 0x30 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRGridCube", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRGridCube(OVRGridCube&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRGridCube", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRGridCube(OVRGridCube const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGridCube();

public:
  /// @brief Field GridKey, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::KeyCode ___GridKey;

  /// @brief Field CubeGrid, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___CubeGrid;

  /// @brief Field CubeGridOn, offset: 0x28, size: 0x1, def value: None
  bool ___CubeGridOn;

  /// @brief Field CubeSwitchColorOld, offset: 0x29, size: 0x1, def value: None
  bool ___CubeSwitchColorOld;

  /// @brief Field CubeSwitchColor, offset: 0x2a, size: 0x1, def value: None
  bool ___CubeSwitchColor;

  /// @brief Field gridSizeX, offset: 0x2c, size: 0x4, def value: None
  int32_t ___gridSizeX;

  /// @brief Field gridSizeY, offset: 0x30, size: 0x4, def value: None
  int32_t ___gridSizeY;

  /// @brief Field gridSizeZ, offset: 0x34, size: 0x4, def value: None
  int32_t ___gridSizeZ;

  /// @brief Field gridScale, offset: 0x38, size: 0x4, def value: None
  float_t ___gridScale;

  /// @brief Field cubeScale, offset: 0x3c, size: 0x4, def value: None
  float_t ___cubeScale;

  /// @brief Field CameraController, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::OVRCameraRig* ___CameraController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGridCube, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRGridCube);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGridCube*, "", "OVRGridCube");
