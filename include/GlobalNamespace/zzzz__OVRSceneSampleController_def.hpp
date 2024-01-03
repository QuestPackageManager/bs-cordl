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
class OVRPlayerController;
}
namespace UnityEngine {
class Texture;
}
namespace GlobalNamespace {
class OVRCameraRig;
}
namespace GlobalNamespace {
class OVRGridCube;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10058))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8163))
// CS Name: ::OVRSceneSampleController*
class CORDL_TYPE OVRSceneSampleController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field quitKey, offset 0x18, size 0x4
  __declspec(property(get = __get_quitKey, put = __set_quitKey))::UnityEngine::KeyCode quitKey;

  /// @brief Field fadeInTexture, offset 0x20, size 0x8
  __declspec(property(get = __get_fadeInTexture, put = __set_fadeInTexture))::UnityEngine::Texture* fadeInTexture;

  /// @brief Field speedRotationIncrement, offset 0x28, size 0x4
  __declspec(property(get = __get_speedRotationIncrement, put = __set_speedRotationIncrement)) float_t speedRotationIncrement;

  /// @brief Field playerController, offset 0x30, size 0x8
  __declspec(property(get = __get_playerController, put = __set_playerController))::GlobalNamespace::OVRPlayerController* playerController;

  /// @brief Field cameraController, offset 0x38, size 0x8
  __declspec(property(get = __get_cameraController, put = __set_cameraController))::GlobalNamespace::OVRCameraRig* cameraController;

  /// @brief Field layerName, offset 0x40, size 0x8
  __declspec(property(get = __get_layerName, put = __set_layerName))::StringW layerName;

  /// @brief Field visionMode, offset 0x48, size 0x1
  __declspec(property(get = __get_visionMode, put = __set_visionMode)) bool visionMode;

  /// @brief Field gridCube, offset 0x50, size 0x8
  __declspec(property(get = __get_gridCube, put = __set_gridCube))::GlobalNamespace::OVRGridCube* gridCube;

  constexpr ::UnityEngine::KeyCode& __get_quitKey();

  constexpr ::UnityEngine::KeyCode const& __get_quitKey() const;

  constexpr void __set_quitKey(::UnityEngine::KeyCode value);

  constexpr ::UnityEngine::Texture*& __get_fadeInTexture();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Texture*> const& __get_fadeInTexture() const;

  constexpr void __set_fadeInTexture(::UnityEngine::Texture* value);

  constexpr float_t& __get_speedRotationIncrement();

  constexpr float_t const& __get_speedRotationIncrement() const;

  constexpr void __set_speedRotationIncrement(float_t value);

  constexpr ::GlobalNamespace::OVRPlayerController*& __get_playerController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRPlayerController*> const& __get_playerController() const;

  constexpr void __set_playerController(::GlobalNamespace::OVRPlayerController* value);

  constexpr ::GlobalNamespace::OVRCameraRig*& __get_cameraController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRCameraRig*> const& __get_cameraController() const;

  constexpr void __set_cameraController(::GlobalNamespace::OVRCameraRig* value);

  constexpr ::StringW& __get_layerName();

  constexpr ::StringW const& __get_layerName() const;

  constexpr void __set_layerName(::StringW value);

  constexpr bool& __get_visionMode();

  constexpr bool const& __get_visionMode() const;

  constexpr void __set_visionMode(bool value);

  constexpr ::GlobalNamespace::OVRGridCube*& __get_gridCube();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRGridCube*> const& __get_gridCube() const;

  constexpr void __set_gridCube(::GlobalNamespace::OVRGridCube* value);

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
  ::UnityEngine::Texture* ___fadeInTexture;

  /// @brief Field speedRotationIncrement, offset: 0x28, size: 0x4, def value: None
  float_t ___speedRotationIncrement;

  /// @brief Field playerController, offset: 0x30, size: 0x8, def value: None
  ::GlobalNamespace::OVRPlayerController* ___playerController;

  /// @brief Field cameraController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::OVRCameraRig* ___cameraController;

  /// @brief Field layerName, offset: 0x40, size: 0x8, def value: None
  ::StringW ___layerName;

  /// @brief Field visionMode, offset: 0x48, size: 0x1, def value: None
  bool ___visionMode;

  /// @brief Field gridCube, offset: 0x50, size: 0x8, def value: None
  ::GlobalNamespace::OVRGridCube* ___gridCube;

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
