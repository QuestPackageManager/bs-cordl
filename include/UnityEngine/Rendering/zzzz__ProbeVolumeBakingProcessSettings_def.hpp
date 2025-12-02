#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeVolumeBakingProcessSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ProbeDilationSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__VirtualOffsetSettings_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeVolumeBakingProcessSettings)
namespace UnityEngine::Rendering {
struct ProbeDilationSettings;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeBakingProcessSettings_SettingsVersion;
}
namespace UnityEngine::Rendering {
struct VirtualOffsetSettings;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ProbeVolumeBakingProcessSettings_SettingsVersion;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeBakingProcessSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion);
MARK_VAL_T(::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeVolumeBakingProcessSettings/SettingsVersion
struct CORDL_TYPE ProbeVolumeBakingProcessSettings_SettingsVersion {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ProbeVolumeBakingProcessSettings_SettingsVersion_Unwrapped
  enum struct __ProbeVolumeBakingProcessSettings_SettingsVersion_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
    __E_ThreadedVirtualOffset = static_cast<int32_t>(0x1),
    __E_Max = static_cast<int32_t>(0x2),
    __E_Current = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProbeVolumeBakingProcessSettings_SettingsVersion_Unwrapped() const noexcept {
    return static_cast<__ProbeVolumeBakingProcessSettings_SettingsVersion_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeBakingProcessSettings_SettingsVersion();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ProbeVolumeBakingProcessSettings_SettingsVersion(int32_t value__) noexcept;

  /// @brief Field Current value: I32(1)
  static ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion const Current;

  /// @brief Field Initial value: I32(0)
  static ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion const Initial;

  /// @brief Field Max value: I32(2)
  static ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion const Max;

  /// @brief Field ThreadedVirtualOffset value: I32(1)
  static ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion const ThreadedVirtualOffset;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12101 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rendering.ProbeDilationSettings, UnityEngine.Rendering.ProbeVolumeBakingProcessSettings::SettingsVersion, UnityEngine.Rendering.VirtualOffsetSettings
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeVolumeBakingProcessSettings
struct CORDL_TYPE ProbeVolumeBakingProcessSettings {
public:
  // Declarations
  using SettingsVersion = ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion;

  /// @brief Method SetDefaults, addr 0x6573090, size 0x3c, virtual false, abstract: false, final false
  inline void SetDefaults();

  /// @brief Method Upgrade, addr 0x65730f8, size 0x30, virtual false, abstract: false, final false
  inline void Upgrade();

  /// @brief Method .ctor, addr 0x65730cc, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::ProbeDilationSettings dilationSettings, ::UnityEngine::Rendering::VirtualOffsetSettings virtualOffsetSettings);

  /// @brief Method get_Default, addr 0x6573048, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings get_Default();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeVolumeBakingProcessSettings();

  // Ctor Parameters [CppParam { name: "m_Version", ty: "::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion", modifiers: "", def_value: None }, CppParam { name:
  // "dilationSettings", ty: "::UnityEngine::Rendering::ProbeDilationSettings", modifiers: "", def_value: None }, CppParam { name: "virtualOffsetSettings", ty:
  // "::UnityEngine::Rendering::VirtualOffsetSettings", modifiers: "", def_value: None }]
  constexpr ProbeVolumeBakingProcessSettings(::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion m_Version, ::UnityEngine::Rendering::ProbeDilationSettings dilationSettings,
                                             ::UnityEngine::Rendering::VirtualOffsetSettings virtualOffsetSettings) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12102 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field m_Version, offset: 0x0, size: 0x4, def value: None
  ::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion m_Version;

  /// @brief Field dilationSettings, offset: 0x4, size: 0x14, def value: None
  ::UnityEngine::Rendering::ProbeDilationSettings dilationSettings;

  /// @brief Field virtualOffsetSettings, offset: 0x18, size: 0x18, def value: None
  ::UnityEngine::Rendering::VirtualOffsetSettings virtualOffsetSettings;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings, m_Version) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings, dilationSettings) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings, virtualOffsetSettings) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings_SettingsVersion, "UnityEngine.Rendering", "ProbeVolumeBakingProcessSettings/SettingsVersion");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeVolumeBakingProcessSettings, "UnityEngine.Rendering", "ProbeVolumeBakingProcessSettings");
