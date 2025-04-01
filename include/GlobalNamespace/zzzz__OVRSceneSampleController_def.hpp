#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRSceneSampleController.hpp"
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
// Dependencies UnityEngine.KeyCode, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: OVRSceneSampleController
class CORDL_TYPE OVRSceneSampleController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field cameraController, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraController, put = __cordl_internal_set_cameraController)) ::UnityW<::GlobalNamespace::OVRCameraRig> cameraController;

  /// @brief Field fadeInTexture, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_fadeInTexture, put = __cordl_internal_set_fadeInTexture)) ::UnityW<::UnityEngine::Texture> fadeInTexture;

  /// @brief Field gridCube, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_gridCube, put = __cordl_internal_set_gridCube)) ::UnityW<::GlobalNamespace::OVRGridCube> gridCube;

  /// @brief Field layerName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_layerName, put = __cordl_internal_set_layerName)) ::StringW layerName;

  /// @brief Field playerController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_playerController, put = __cordl_internal_set_playerController)) ::UnityW<::GlobalNamespace::OVRPlayerController> playerController;

  /// @brief Field quitKey, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_quitKey, put = __cordl_internal_set_quitKey)) ::UnityEngine::KeyCode quitKey;

  /// @brief Field speedRotationIncrement, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_speedRotationIncrement, put = __cordl_internal_set_speedRotationIncrement)) float_t speedRotationIncrement;

  /// @brief Field visionMode, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_visionMode, put = __cordl_internal_set_visionMode)) bool visionMode;

  /// @brief Method Awake, addr 0x403d5e0, size 0x1b4, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::OVRSceneSampleController* New_ctor();

  /// @brief Method Start, addr 0x403d794, size 0xf0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x403d884, size 0xd4, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateRecenterPose, addr 0x403d958, size 0xb0, virtual false, abstract: false, final false
  inline void UpdateRecenterPose();

  /// @brief Method UpdateSpeedAndRotationScaleMultiplier, addr 0x403dac4, size 0xac, virtual false, abstract: false, final false
  inline void UpdateSpeedAndRotationScaleMultiplier();

  /// @brief Method UpdateVisionMode, addr 0x403da08, size 0xbc, virtual false, abstract: false, final false
  inline void UpdateVisionMode();

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig> const& __cordl_internal_get_cameraController() const;

  constexpr ::UnityW<::GlobalNamespace::OVRCameraRig>& __cordl_internal_get_cameraController();

  constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_fadeInTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_fadeInTexture();

  constexpr ::UnityW<::GlobalNamespace::OVRGridCube> const& __cordl_internal_get_gridCube() const;

  constexpr ::UnityW<::GlobalNamespace::OVRGridCube>& __cordl_internal_get_gridCube();

  constexpr ::StringW const& __cordl_internal_get_layerName() const;

  constexpr ::StringW& __cordl_internal_get_layerName();

  constexpr ::UnityW<::GlobalNamespace::OVRPlayerController> const& __cordl_internal_get_playerController() const;

  constexpr ::UnityW<::GlobalNamespace::OVRPlayerController>& __cordl_internal_get_playerController();

  constexpr ::UnityEngine::KeyCode const& __cordl_internal_get_quitKey() const;

  constexpr ::UnityEngine::KeyCode& __cordl_internal_get_quitKey();

  constexpr float_t const& __cordl_internal_get_speedRotationIncrement() const;

  constexpr float_t& __cordl_internal_get_speedRotationIncrement();

  constexpr bool const& __cordl_internal_get_visionMode() const;

  constexpr bool& __cordl_internal_get_visionMode();

  constexpr void __cordl_internal_set_cameraController(::UnityW<::GlobalNamespace::OVRCameraRig> value);

  constexpr void __cordl_internal_set_fadeInTexture(::UnityW<::UnityEngine::Texture> value);

  constexpr void __cordl_internal_set_gridCube(::UnityW<::GlobalNamespace::OVRGridCube> value);

  constexpr void __cordl_internal_set_layerName(::StringW value);

  constexpr void __cordl_internal_set_playerController(::UnityW<::GlobalNamespace::OVRPlayerController> value);

  constexpr void __cordl_internal_set_quitKey(::UnityEngine::KeyCode value);

  constexpr void __cordl_internal_set_speedRotationIncrement(float_t value);

  constexpr void __cordl_internal_set_visionMode(bool value);

  /// @brief Method .ctor, addr 0x403db70, size 0x1e4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRSceneSampleController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneSampleController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRSceneSampleController(OVRSceneSampleController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRSceneSampleController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRSceneSampleController(OVRSceneSampleController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8479 };

  /// @brief Field quitKey, offset: 0x20, size: 0x4, def value: None
  ::UnityEngine::KeyCode ___quitKey;

  /// @brief Field fadeInTexture, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> ___fadeInTexture;

  /// @brief Field speedRotationIncrement, offset: 0x30, size: 0x4, def value: None
  float_t ___speedRotationIncrement;

  /// @brief Field playerController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRPlayerController> ___playerController;

  /// @brief Field cameraController, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRCameraRig> ___cameraController;

  /// @brief Field layerName, offset: 0x48, size: 0x8, def value: None
  ::StringW ___layerName;

  /// @brief Field visionMode, offset: 0x50, size: 0x1, def value: None
  bool ___visionMode;

  /// @brief Field gridCube, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRGridCube> ___gridCube;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OVRSceneSampleController, ___quitKey) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneSampleController, ___fadeInTexture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneSampleController, ___speedRotationIncrement) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneSampleController, ___playerController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneSampleController, ___cameraController) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneSampleController, ___layerName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneSampleController, ___visionMode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRSceneSampleController, ___gridCube) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRSceneSampleController, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRSceneSampleController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRSceneSampleController*, "", "OVRSceneSampleController");
