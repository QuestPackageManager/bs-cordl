#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(OVRSceneSampleController)
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
class OVRGridCube;
}
namespace GlobalNamespace {
class OVRPlayerController;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRSceneSampleController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRSceneSampleController);
// Type: ::OVRSceneSampleController
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 88, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10058)), TypeDefinitionIndex(TypeDefinitionIndex(10225))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8163))
// CS Name: ::OVRSceneSampleController*
class CORDL_TYPE OVRSceneSampleController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field quitKey, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_quitKey, put = __cordl_internal_set_quitKey))::UnityEngine::KeyCode quitKey;

  /// @brief Field fadeInTexture, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_fadeInTexture, put = __cordl_internal_set_fadeInTexture))::UnityW<::UnityEngine::Texture> fadeInTexture;

  /// @brief Field speedRotationIncrement, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_speedRotationIncrement, put = __cordl_internal_set_speedRotationIncrement)) float_t speedRotationIncrement;

  /// @brief Field playerController, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_playerController, put = __cordl_internal_set_playerController))::UnityW<::GlobalNamespace::OVRPlayerController> playerController;

  /// @brief Field cameraController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraController, put = __cordl_internal_set_cameraController))::UnityW<::GlobalNamespace::OVRCameraRig> cameraController;

  /// @brief Field layerName, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_layerName, put = __cordl_internal_set_layerName))::StringW layerName;

  /// @brief Field visionMode, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_visionMode, put = __cordl_internal_set_visionMode)) bool visionMode;

  /// @brief Field gridCube, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_gridCube, put = __cordl_internal_set_gridCube))::UnityW<::GlobalNamespace::OVRGridCube> gridCube;

  constexpr ::UnityEngine::KeyCode& __cordl_internal_get_quitKey();

  constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_quitKey() const;

  constexpr void __cordl_internal_set_quitKey(::UnityEngine::KeyCode value);

  constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_fadeInTexture();

  constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_fadeInTexture() const;

  constexpr void __cordl_internal_set_fadeInTexture(::UnityW<::UnityEngine::Texture> value);

  constexpr float_t& __cordl_internal_get_speedRotationIncrement();

  constexpr float_t const& __cordl_internal_get_speedRotationIncrement() const;

  constexpr void __cordl_internal_set_speedRotationIncrement(float_t value);

  constexpr ::UnityW<::GlobalNamespace::OVRPlayerController>& __cordl_internal_get_playerController();

  constexpr ::UnityW<::GlobalNamespace::OVRPlayerController> const& __cordl_internal_get_playerController() const;

  constexpr void __cordl_internal_set_playerController(::UnityW<::GlobalNamespace::OVRPlayerController> value);

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get_cameraController();

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get_cameraController() const;

  constexpr void __cordl_internal_set_cameraController(::UnityW<::GlobalNamespace::OVRCameraRig> value);

  constexpr ::StringW& __cordl_internal_get_layerName();

  constexpr ::StringW const& __cordl_internal_get_layerName() const;

  constexpr void __cordl_internal_set_layerName(::StringW value);

  constexpr bool& __cordl_internal_get_visionMode();

  constexpr bool const& __cordl_internal_get_visionMode() const;

  constexpr void __cordl_internal_set_visionMode(bool value);

  constexpr ::UnityW<::GlobalNamespace::OVRGridCube>& __cordl_internal_get_gridCube();

  constexpr ::UnityW<::GlobalNamespace::OVRGridCube> const& __cordl_internal_get_gridCube() const;

  constexpr void __cordl_internal_set_gridCube(::UnityW<::GlobalNamespace::OVRGridCube> value);

  /// @brief Method Awake, addr 0x27bb7dc, size 0x194, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method Start, addr 0x27bb970, size 0xcc, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x27bba3c, size 0xd4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateVisionMode, addr 0x27bbbc0, size 0xbc, virtual false, abstract: false, final false
  inline void UpdateVisionMode();

  /// @brief Method UpdateSpeedAndRotationScaleMultiplier, addr 0x27bbc7c, size 0xc4, virtual false, abstract: false, final false
  inline void UpdateSpeedAndRotationScaleMultiplier();

  /// @brief Method UpdateRecenterPose, addr 0x27bbb10, size 0xb0, virtual false, abstract: false, final false
  inline void UpdateRecenterPose();

  static inline ::GlobalNamespace::OVRSceneSampleController* New_ctor();

  /// @brief Method .ctor, addr 0x27bbd40, size 0x106c, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneSampleController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneSampleController(OVRSceneSampleController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneSampleController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneSampleController(OVRSceneSampleController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneSampleController();

public:
  /// @brief Field quitKey, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::KeyCode ___quitKey;

  /// @brief Field fadeInTexture, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> ___fadeInTexture;

  /// @brief Field speedRotationIncrement, offset: 0x28, size: 0x4, def value: None
  float_t ___speedRotationIncrement;

  /// @brief Field playerController, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRPlayerController> ___playerController;

  /// @brief Field cameraController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCameraRig> ___cameraController;

  /// @brief Field layerName, offset: 0x40, size: 0x8, def value: None
  ::StringW ___layerName;

  /// @brief Field visionMode, offset: 0x48, size: 0x1, def value: None
  bool ___visionMode;

  /// @brief Field gridCube, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRGridCube> ___gridCube;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneSampleController, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneSampleController, ___quitKey) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneSampleController, ___fadeInTexture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneSampleController, ___speedRotationIncrement) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneSampleController, ___playerController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneSampleController, ___cameraController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneSampleController, ___layerName) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneSampleController, ___visionMode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneSampleController, ___gridCube) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSceneSampleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneSampleController*, "", "OVRSceneSampleController");
