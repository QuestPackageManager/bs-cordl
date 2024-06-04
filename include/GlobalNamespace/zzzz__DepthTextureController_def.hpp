#pragma once
// IWYU pragma private; include "GlobalNamespace/DepthTextureController.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(DepthTextureController)
namespace BeatSaber::GameSettings {
class GraphicSettingsHandler;
}
namespace BeatSaber::PerformancePresets {
class PerformancePreset;
}
namespace GlobalNamespace {
class GameplayCoreSceneSetupData;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace GlobalNamespace {
class DepthTextureController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DepthTextureController);
// Type: ::DepthTextureController
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DepthTextureController*
class CORDL_TYPE DepthTextureController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _cachedPreset, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__cachedPreset, put = __cordl_internal_set__cachedPreset))::BeatSaber::PerformancePresets::PerformancePreset* _cachedPreset;

  /// @brief Field _camera, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__camera, put = __cordl_internal_set__camera))::UnityW<::UnityEngine::Camera> _camera;

  /// @brief Field _handler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__handler, put = __cordl_internal_set__handler))::BeatSaber::GameSettings::GraphicSettingsHandler* _handler;

  /// @brief Field _sceneSetupData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sceneSetupData, put = __cordl_internal_set__sceneSetupData))::GlobalNamespace::GameplayCoreSceneSetupData* _sceneSetupData;

  static inline ::GlobalNamespace::DepthTextureController* New_ctor();

  /// @brief Method OnPreRender, addr 0x26af7d8, size 0x70, virtual false, abstract: false, final false
  inline void OnPreRender();

  /// @brief Method SetShaderKeyword, addr 0x26af848, size 0x14, virtual false, abstract: false, final false
  inline void SetShaderKeyword(::StringW keyword, bool value);

  /// @brief Method Start, addr 0x26af6dc, size 0xfc, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::BeatSaber::PerformancePresets::PerformancePreset*& __cordl_internal_get__cachedPreset();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::PerformancePresets::PerformancePreset*> const& __cordl_internal_get__cachedPreset() const;

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__camera();

  constexpr ::BeatSaber::GameSettings::GraphicSettingsHandler*& __cordl_internal_get__handler();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::GraphicSettingsHandler*> const& __cordl_internal_get__handler() const;

  constexpr ::GlobalNamespace::GameplayCoreSceneSetupData*& __cordl_internal_get__sceneSetupData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayCoreSceneSetupData*> const& __cordl_internal_get__sceneSetupData() const;

  constexpr void __cordl_internal_set__cachedPreset(::BeatSaber::PerformancePresets::PerformancePreset* value);

  constexpr void __cordl_internal_set__camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set__handler(::BeatSaber::GameSettings::GraphicSettingsHandler* value);

  constexpr void __cordl_internal_set__sceneSetupData(::GlobalNamespace::GameplayCoreSceneSetupData* value);

  /// @brief Method .ctor, addr 0x26af85c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DepthTextureController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DepthTextureController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DepthTextureController(DepthTextureController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DepthTextureController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DepthTextureController(DepthTextureController const&) = delete;

  /// @brief Field _handler, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::GameSettings::GraphicSettingsHandler* ____handler;

  /// @brief Field _sceneSetupData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::GameplayCoreSceneSetupData* ____sceneSetupData;

  /// @brief Field _camera, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ____camera;

  /// @brief Field _cachedPreset, offset: 0x30, size: 0x8, def value: None
  ::BeatSaber::PerformancePresets::PerformancePreset* ____cachedPreset;

  /// @brief Field kDepthTextureEnabledKeyword offset 0xffffffff size 0x8
  static constexpr ::ConstString kDepthTextureEnabledKeyword{ u"DEPTH_TEXTURE_ENABLED" };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DepthTextureController, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DepthTextureController, ____handler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DepthTextureController, ____sceneSetupData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DepthTextureController, ____camera) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DepthTextureController, ____cachedPreset) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DepthTextureController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DepthTextureController*, "", "DepthTextureController");
