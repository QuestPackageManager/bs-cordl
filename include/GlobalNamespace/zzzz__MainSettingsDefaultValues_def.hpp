#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MainSettingsDefaultValues)
namespace GlobalNamespace {
class MainSettingsModelSO;
}
// Forward declare root types
namespace GlobalNamespace {
class MainSettingsDefaultValues;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MainSettingsDefaultValues);
// Type: ::MainSettingsDefaultValues
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4454))
// CS Name: ::MainSettingsDefaultValues*
class CORDL_TYPE MainSettingsDefaultValues : public ::System::Object {
public:
  // Declarations
  /// @brief Field kDefaultMirrorGraphicsSettings, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_kDefaultMirrorGraphicsSettings, put = setStaticF_kDefaultMirrorGraphicsSettings)) int32_t kDefaultMirrorGraphicsSettings;

  static inline void setStaticF_kDefaultMirrorGraphicsSettings(int32_t value);

  static inline int32_t getStaticF_kDefaultMirrorGraphicsSettings();

  /// @brief Method SetFixedDefaultValues addr 0x22023d8 size 0x154 virtual false final false
  static inline void SetFixedDefaultValues(::GlobalNamespace::MainSettingsModelSO* mainSettingsModel);

  static inline ::GlobalNamespace::MainSettingsDefaultValues* New_ctor();

  /// @brief Method .ctor addr 0x220252c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MainSettingsDefaultValues", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MainSettingsDefaultValues(MainSettingsDefaultValues&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MainSettingsDefaultValues", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MainSettingsDefaultValues(MainSettingsDefaultValues const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MainSettingsDefaultValues();

public:
  /// @brief Field kDefaultRoomCenterX offset 0xffffffff size 0x4
  static constexpr float_t kDefaultRoomCenterX{ 0.0 };

  /// @brief Field kDefaultRoomCenterY offset 0xffffffff size 0x4
  static constexpr float_t kDefaultRoomCenterY{ 0.0 };

  /// @brief Field kDefaultRoomCenterZ offset 0xffffffff size 0x4
  static constexpr float_t kDefaultRoomCenterZ{ 0.0 };

  /// @brief Field kDefaultControllerPositionX offset 0xffffffff size 0x4
  static constexpr float_t kDefaultControllerPositionX{ 0.0 };

  /// @brief Field kDefaultControllerPositionY offset 0xffffffff size 0x4
  static constexpr float_t kDefaultControllerPositionY{ 0.0 };

  /// @brief Field kDefaultControllerPositionZ offset 0xffffffff size 0x4
  static constexpr float_t kDefaultControllerPositionZ{ 0.0 };

  /// @brief Field kDefaultControllerRotationX offset 0xffffffff size 0x4
  static constexpr float_t kDefaultControllerRotationX{ 0.0 };

  /// @brief Field kDefaultControllerRotationY offset 0xffffffff size 0x4
  static constexpr float_t kDefaultControllerRotationY{ 0.0 };

  /// @brief Field kDefaultControllerRotationZ offset 0xffffffff size 0x4
  static constexpr float_t kDefaultControllerRotationZ{ 0.0 };

  /// @brief Field kDefaultWindowResolutionWidth offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultWindowResolutionWidth{ static_cast<int32_t>(0x780) };

  /// @brief Field kDefaultWindowResolutionHeight offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultWindowResolutionHeight{ static_cast<int32_t>(0x438) };

  /// @brief Field kDefaultMainEffectGraphicsSettings offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultMainEffectGraphicsSettings{ static_cast<int32_t>(0x0) };

  /// @brief Field kDefaultBloomGraphicsSettings offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultBloomGraphicsSettings{ static_cast<int32_t>(0x0) };

  /// @brief Field kDefaultSmokeGraphicsSettings offset 0xffffffff size 0x1
  static constexpr bool kDefaultSmokeGraphicsSettings{ false };

  /// @brief Field kDefaultAntiAliasingLevel offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultAntiAliasingLevel{ static_cast<int32_t>(0x4) };

  /// @brief Field kDefaultVrResolutionScale offset 0xffffffff size 0x4
  static constexpr float_t kDefaultVrResolutionScale{ 1.0 };

  /// @brief Field kDefaultMenuVRResolutionScaleMultiplier offset 0xffffffff size 0x4
  static constexpr float_t kDefaultMenuVRResolutionScaleMultiplier{ 1.2 };

  /// @brief Field kDefaultUseFixedFoveatedRenderingDuringGameplay offset 0xffffffff size 0x1
  static constexpr bool kDefaultUseFixedFoveatedRenderingDuringGameplay{ true };

  /// @brief Field kDefaultBurnMarkTrailsEnabled offset 0xffffffff size 0x1
  static constexpr bool kDefaultBurnMarkTrailsEnabled{ false };

  /// @brief Field kDefaultScreenDisplacementEffectsEnabled offset 0xffffffff size 0x1
  static constexpr bool kDefaultScreenDisplacementEffectsEnabled{ false };

  /// @brief Field kDefaultAudioLatency offset 0xffffffff size 0x4
  static constexpr float_t kDefaultAudioLatency{ 0.09 };

  /// @brief Field kMaxShockwaveParticles offset 0xffffffff size 0x4
  static constexpr int32_t kMaxShockwaveParticles{ static_cast<int32_t>(0x0) };

  /// @brief Field kMaxNumberOfCutSoundEffects offset 0xffffffff size 0x4
  static constexpr int32_t kMaxNumberOfCutSoundEffects{ static_cast<int32_t>(0x10) };

  /// @brief Field kCreateScreenshotDuringTheGame offset 0xffffffff size 0x1
  static constexpr bool kCreateScreenshotDuringTheGame{ false };

  /// @brief Field kSystemLanguageSerializedName offset 0xffffffff size 0x8
  static constexpr ::ConstString kSystemLanguageSerializedName{ u"SystemLanguage" };

  /// @brief Field kDefaultPauseButtonPressDurationLevel offset 0xffffffff size 0x4
  static constexpr int32_t kDefaultPauseButtonPressDurationLevel{ static_cast<int32_t>(0x0) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MainSettingsDefaultValues, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MainSettingsDefaultValues);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MainSettingsDefaultValues*, "", "MainSettingsDefaultValues");
