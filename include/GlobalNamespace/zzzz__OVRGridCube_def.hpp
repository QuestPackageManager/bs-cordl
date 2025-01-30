#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGridCube.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGridCube)
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRGridCube;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRGridCube);
// Dependencies UnityEngine.KeyCode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRGridCube
class CORDL_TYPE OVRGridCube : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field CameraController, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_CameraController, put = __cordl_internal_set_CameraController)) ::UnityW<::GlobalNamespace::OVRCameraRig> CameraController;

  /// @brief Field CubeGrid, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_CubeGrid, put = __cordl_internal_set_CubeGrid)) ::UnityW<::UnityEngine::GameObject> CubeGrid;

  /// @brief Field CubeGridOn, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_CubeGridOn, put = __cordl_internal_set_CubeGridOn)) bool CubeGridOn;

  /// @brief Field CubeSwitchColor, offset 0x32, size 0x1
  __declspec(property(get = __cordl_internal_get_CubeSwitchColor, put = __cordl_internal_set_CubeSwitchColor)) bool CubeSwitchColor;

  /// @brief Field CubeSwitchColorOld, offset 0x31, size 0x1
  __declspec(property(get = __cordl_internal_get_CubeSwitchColorOld, put = __cordl_internal_set_CubeSwitchColorOld)) bool CubeSwitchColorOld;

  /// @brief Field GridKey, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_GridKey, put = __cordl_internal_set_GridKey)) ::UnityEngine::KeyCode GridKey;

  /// @brief Field cubeScale, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_cubeScale, put = __cordl_internal_set_cubeScale)) float_t cubeScale;

  /// @brief Field gridScale, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_gridScale, put = __cordl_internal_set_gridScale)) float_t gridScale;

  /// @brief Field gridSizeX, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_gridSizeX, put = __cordl_internal_set_gridSizeX)) int32_t gridSizeX;

  /// @brief Field gridSizeY, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_gridSizeY, put = __cordl_internal_set_gridSizeY)) int32_t gridSizeY;

  /// @brief Field gridSizeZ, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_gridSizeZ, put = __cordl_internal_set_gridSizeZ)) int32_t gridSizeZ;

  /// @brief Method CreateCubeGrid, addr 0x4036b5c, size 0x3b8, virtual false, abstract: false, final false
  inline void CreateCubeGrid();

  /// @brief Method CubeGridSwitchColor, addr 0x4036f14, size 0x17c, virtual false, abstract: false, final false
  inline void CubeGridSwitchColor(bool CubeSwitchColor);

  static inline ::GlobalNamespace::OVRGridCube* New_ctor();

  /// @brief Method SetOVRCameraController, addr 0x4036b50, size 0xc, virtual false, abstract: false, final false
  inline void SetOVRCameraController(::ByRef<::GlobalNamespace::OVRCameraRig*> cameraController);

  /// @brief Method Update, addr 0x403692c, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateCubeGrid, addr 0x4036930, size 0x220, virtual false, abstract: false, final false
  inline void UpdateCubeGrid();

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get_CameraController() const;

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get_CameraController();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_CubeGrid() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_CubeGrid();

  constexpr bool const& __cordl_internal_get_CubeGridOn() const;

  constexpr bool& __cordl_internal_get_CubeGridOn();

  constexpr bool const& __cordl_internal_get_CubeSwitchColor() const;

  constexpr bool& __cordl_internal_get_CubeSwitchColor();

  constexpr bool const& __cordl_internal_get_CubeSwitchColorOld() const;

  constexpr bool& __cordl_internal_get_CubeSwitchColorOld();

  constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_GridKey() const;

  constexpr ::UnityEngine::KeyCode& __cordl_internal_get_GridKey();

  constexpr float_t const& __cordl_internal_get_cubeScale() const;

  constexpr float_t& __cordl_internal_get_cubeScale();

  constexpr float_t const& __cordl_internal_get_gridScale() const;

  constexpr float_t& __cordl_internal_get_gridScale();

  constexpr int32_t const& __cordl_internal_get_gridSizeX() const;

  constexpr int32_t& __cordl_internal_get_gridSizeX();

  constexpr int32_t const& __cordl_internal_get_gridSizeY() const;

  constexpr int32_t& __cordl_internal_get_gridSizeY();

  constexpr int32_t const& __cordl_internal_get_gridSizeZ() const;

  constexpr int32_t& __cordl_internal_get_gridSizeZ();

  constexpr void __cordl_internal_set_CameraController(::UnityW<::GlobalNamespace::OVRCameraRig> value);

  constexpr void __cordl_internal_set_CubeGrid(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_CubeGridOn(bool value);

  constexpr void __cordl_internal_set_CubeSwitchColor(bool value);

  constexpr void __cordl_internal_set_CubeSwitchColorOld(bool value);

  constexpr void __cordl_internal_set_GridKey(::UnityEngine::KeyCode value);

  constexpr void __cordl_internal_set_cubeScale(float_t value);

  constexpr void __cordl_internal_set_gridScale(float_t value);

  constexpr void __cordl_internal_set_gridSizeX(int32_t value);

  constexpr void __cordl_internal_set_gridSizeY(int32_t value);

  constexpr void __cordl_internal_set_gridSizeZ(int32_t value);

  /// @brief Method .ctor, addr 0x4037090, size 0x30, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGridCube();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRGridCube", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRGridCube(OVRGridCube&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRGridCube", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRGridCube(OVRGridCube const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8426 };

  /// @brief Field GridKey, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::KeyCode ___GridKey;

  /// @brief Field CubeGrid, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___CubeGrid;

  /// @brief Field CubeGridOn, offset: 0x30, size: 0x1, def value: None
  bool ___CubeGridOn;

  /// @brief Field CubeSwitchColorOld, offset: 0x31, size: 0x1, def value: None
  bool ___CubeSwitchColorOld;

  /// @brief Field CubeSwitchColor, offset: 0x32, size: 0x1, def value: None
  bool ___CubeSwitchColor;

  /// @brief Field gridSizeX, offset: 0x34, size: 0x4, def value: None
  int32_t ___gridSizeX;

  /// @brief Field gridSizeY, offset: 0x38, size: 0x4, def value: None
  int32_t ___gridSizeY;

  /// @brief Field gridSizeZ, offset: 0x3c, size: 0x4, def value: None
  int32_t ___gridSizeZ;

  /// @brief Field gridScale, offset: 0x40, size: 0x4, def value: None
  float_t ___gridScale;

  /// @brief Field cubeScale, offset: 0x44, size: 0x4, def value: None
  float_t ___cubeScale;

  /// @brief Field CameraController, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCameraRig> ___CameraController;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRGridCube, ___GridKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGridCube, ___CubeGrid) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGridCube, ___CubeGridOn) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGridCube, ___CubeSwitchColorOld) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGridCube, ___CubeSwitchColor) == 0x32, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGridCube, ___gridSizeX) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGridCube, ___gridSizeY) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGridCube, ___gridSizeZ) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGridCube, ___gridScale) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGridCube, ___cubeScale) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRGridCube, ___CameraController) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGridCube, 0x50>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRGridCube);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGridCube*, "", "OVRGridCube");
