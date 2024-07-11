#pragma once
// IWYU pragma private; include "GlobalNamespace/RenderingParamsSetupApplicator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RenderingParamsSetupApplicator)
namespace BeatSaber::GameSettings {
class GraphicSettingsHandler;
}
namespace BeatSaber::GameSettings {
class MainSettingsHandler;
}
namespace GlobalNamespace {
class IRenderingParamsApplicator;
}
namespace GlobalNamespace {
struct SceneType;
}
namespace GlobalNamespace {
class SettingsApplicatorSO;
}
// Forward declare root types
namespace GlobalNamespace {
class RenderingParamsSetupApplicator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RenderingParamsSetupApplicator);
// Type: ::RenderingParamsSetupApplicator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::RenderingParamsSetupApplicator*
class CORDL_TYPE RenderingParamsSetupApplicator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _graphicsSettingsHandler, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__graphicsSettingsHandler,
                      put = __cordl_internal_set__graphicsSettingsHandler))::BeatSaber::GameSettings::GraphicSettingsHandler* _graphicsSettingsHandler;

  /// @brief Field _mainSettingsHandler, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__mainSettingsHandler, put = __cordl_internal_set__mainSettingsHandler))::BeatSaber::GameSettings::MainSettingsHandler* _mainSettingsHandler;

  /// @brief Field _settingsApplicator, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsApplicator, put = __cordl_internal_set__settingsApplicator))::UnityW<::GlobalNamespace::SettingsApplicatorSO> _settingsApplicator;

  /// @brief Convert operator to "::GlobalNamespace::IRenderingParamsApplicator"
  constexpr operator ::GlobalNamespace::IRenderingParamsApplicator*() noexcept;

  /// @brief Method Apply, addr 0x26c5aa4, size 0x18, virtual true, abstract: false, final true
  inline void Apply(::GlobalNamespace::SceneType sceneType, ::StringW optionalEnvironmentSerializedName);

  /// @brief Method ApplyGraphicsSettings, addr 0x26c5abc, size 0xec, virtual false, abstract: false, final false
  inline void ApplyGraphicsSettings(::GlobalNamespace::SceneType sceneType, ::StringW optionalEnvironmentSerializedName);

  /// @brief Method ApplyMainSettings, addr 0x26c5ba8, size 0x64, virtual false, abstract: false, final false
  inline void ApplyMainSettings();

  static inline ::GlobalNamespace::RenderingParamsSetupApplicator* New_ctor();

  constexpr ::BeatSaber::GameSettings::GraphicSettingsHandler*& __cordl_internal_get__graphicsSettingsHandler();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::GraphicSettingsHandler*> const& __cordl_internal_get__graphicsSettingsHandler() const;

  constexpr ::BeatSaber::GameSettings::MainSettingsHandler*& __cordl_internal_get__mainSettingsHandler();

  constexpr ::cordl_internals::to_const_pointer<::BeatSaber::GameSettings::MainSettingsHandler*> const& __cordl_internal_get__mainSettingsHandler() const;

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& __cordl_internal_get__settingsApplicator() const;

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& __cordl_internal_get__settingsApplicator();

  constexpr void __cordl_internal_set__graphicsSettingsHandler(::BeatSaber::GameSettings::GraphicSettingsHandler* value);

  constexpr void __cordl_internal_set__mainSettingsHandler(::BeatSaber::GameSettings::MainSettingsHandler* value);

  constexpr void __cordl_internal_set__settingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value);

  /// @brief Method .ctor, addr 0x26c5d14, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IRenderingParamsApplicator"
  constexpr ::GlobalNamespace::IRenderingParamsApplicator* i___GlobalNamespace__IRenderingParamsApplicator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderingParamsSetupApplicator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderingParamsSetupApplicator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderingParamsSetupApplicator(RenderingParamsSetupApplicator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderingParamsSetupApplicator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderingParamsSetupApplicator(RenderingParamsSetupApplicator const&) = delete;

  /// @brief Field _mainSettingsHandler, offset: 0x10, size: 0x8, def value: None
  ::BeatSaber::GameSettings::MainSettingsHandler* ____mainSettingsHandler;

  /// @brief Field _graphicsSettingsHandler, offset: 0x18, size: 0x8, def value: None
  ::BeatSaber::GameSettings::GraphicSettingsHandler* ____graphicsSettingsHandler;

  /// @brief Field _settingsApplicator, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsApplicatorSO> ____settingsApplicator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RenderingParamsSetupApplicator, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderingParamsSetupApplicator, ____mainSettingsHandler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderingParamsSetupApplicator, ____graphicsSettingsHandler) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderingParamsSetupApplicator, ____settingsApplicator) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RenderingParamsSetupApplicator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RenderingParamsSetupApplicator*, "", "RenderingParamsSetupApplicator");
