#pragma once
// IWYU pragma private; include "GlobalNamespace/RenderingParamsSetupApplicator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(RenderingParamsSetupApplicator)
namespace GlobalNamespace {
class IRenderingParamsApplicator;
}
namespace GlobalNamespace {
struct SceneType;
}
namespace GlobalNamespace {
class SettingsApplicatorSO;
}
namespace GlobalNamespace {
class SettingsManager;
}
// Forward declare root types
namespace GlobalNamespace {
class RenderingParamsSetupApplicator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RenderingParamsSetupApplicator);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: RenderingParamsSetupApplicator
class CORDL_TYPE RenderingParamsSetupApplicator : public ::System::Object {
public:
  // Declarations
  /// @brief Field _settingsApplicator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsApplicator, put = __cordl_internal_set__settingsApplicator)) ::UnityW<::GlobalNamespace::SettingsApplicatorSO> _settingsApplicator;

  /// @brief Field _settingsManager, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__settingsManager, put = __cordl_internal_set__settingsManager)) ::GlobalNamespace::SettingsManager* _settingsManager;

  /// @brief Convert operator to "::GlobalNamespace::IRenderingParamsApplicator"
  constexpr operator ::GlobalNamespace::IRenderingParamsApplicator*() noexcept;

  /// @brief Method Apply, addr 0x570fa18, size 0x18, virtual true, abstract: false, final true
  inline void Apply(::GlobalNamespace::SceneType sceneType, ::StringW optionalEnvironmentSerializedName);

  /// @brief Method ApplyGraphicsSettings, addr 0x570fa30, size 0x30, virtual false, abstract: false, final false
  inline void ApplyGraphicsSettings(::GlobalNamespace::SceneType sceneType, ::StringW optionalEnvironmentSerializedName);

  /// @brief Method ApplyMainSettings, addr 0x570fa60, size 0x24, virtual false, abstract: false, final false
  inline void ApplyMainSettings();

  static inline ::GlobalNamespace::RenderingParamsSetupApplicator* New_ctor();

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO> const& __cordl_internal_get__settingsApplicator() const;

  constexpr ::UnityW<::GlobalNamespace::SettingsApplicatorSO>& __cordl_internal_get__settingsApplicator();

  constexpr ::GlobalNamespace::SettingsManager* const& __cordl_internal_get__settingsManager() const;

  constexpr ::GlobalNamespace::SettingsManager*& __cordl_internal_get__settingsManager();

  constexpr void __cordl_internal_set__settingsApplicator(::UnityW<::GlobalNamespace::SettingsApplicatorSO> value);

  constexpr void __cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value);

  /// @brief Method .ctor, addr 0x570fb90, size 0x4, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6748 };

  /// @brief Field _settingsManager, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::SettingsManager* ____settingsManager;

  /// @brief Field _settingsApplicator, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::SettingsApplicatorSO> ____settingsApplicator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RenderingParamsSetupApplicator, ____settingsManager) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderingParamsSetupApplicator, ____settingsApplicator) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RenderingParamsSetupApplicator, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RenderingParamsSetupApplicator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RenderingParamsSetupApplicator*, "", "RenderingParamsSetupApplicator");
