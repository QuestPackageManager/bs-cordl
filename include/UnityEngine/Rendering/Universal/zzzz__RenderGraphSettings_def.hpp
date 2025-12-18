#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/RenderGraphSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphSettings)
namespace UnityEngine::Rendering::Universal {
struct RenderGraphSettings_Version;
}
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct RenderGraphSettings_Version;
}
namespace UnityEngine::Rendering::Universal {
class RenderGraphSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::RenderGraphSettings_Version);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::RenderGraphSettings);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.RenderGraphSettings/Version
struct CORDL_TYPE RenderGraphSettings_Version {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderGraphSettings_Version_Unwrapped
  enum struct __RenderGraphSettings_Version_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderGraphSettings_Version_Unwrapped() const noexcept {
    return static_cast<__RenderGraphSettings_Version_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphSettings_Version();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderGraphSettings_Version(int32_t value__) noexcept;

  /// @brief Field Initial value: I32(0)
  static ::UnityEngine::Rendering::Universal::RenderGraphSettings_Version const Initial;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12922 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderGraphSettings_Version, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderGraphSettings_Version, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies System.Object, UnityEngine.Rendering.Universal.RenderGraphSettings::Version
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.RenderGraphSettings
class CORDL_TYPE RenderGraphSettings : public ::System::Object {
public:
  // Declarations
  using Version = ::UnityEngine::Rendering::Universal::RenderGraphSettings_Version;

  __declspec(property(get = UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)) bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_isAvailableInPlayerBuild;

  __declspec(property(get = get_enableRenderCompatibilityMode, put = set_enableRenderCompatibilityMode)) bool enableRenderCompatibilityMode;

  /// @brief Field m_EnableRenderCompatibilityMode, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableRenderCompatibilityMode, put = __cordl_internal_set_m_EnableRenderCompatibilityMode)) bool m_EnableRenderCompatibilityMode;

  /// @brief Field m_Version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) ::UnityEngine::Rendering::Universal::RenderGraphSettings_Version m_Version;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  static inline ::UnityEngine::Rendering::Universal::RenderGraphSettings* New_ctor();

  /// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild, addr 0x6701d74, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild();

  constexpr bool const& __cordl_internal_get_m_EnableRenderCompatibilityMode() const;

  constexpr bool& __cordl_internal_get_m_EnableRenderCompatibilityMode();

  constexpr ::UnityEngine::Rendering::Universal::RenderGraphSettings_Version const& __cordl_internal_get_m_Version() const;

  constexpr ::UnityEngine::Rendering::Universal::RenderGraphSettings_Version& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_EnableRenderCompatibilityMode(bool value);

  constexpr void __cordl_internal_set_m_Version(::UnityEngine::Rendering::Universal::RenderGraphSettings_Version value);

  /// @brief Method .ctor, addr 0x6701e9c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_enableRenderCompatibilityMode, addr 0x6701d7c, size 0xb0, virtual false, abstract: false, final false
  inline bool get_enableRenderCompatibilityMode();

  /// @brief Method get_version, addr 0x6701d6c, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_version();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Method set_enableRenderCompatibilityMode, addr 0x6701e2c, size 0x70, virtual false, abstract: false, final false
  inline void set_enableRenderCompatibilityMode(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphSettings(RenderGraphSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphSettings(RenderGraphSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12923 };

  /// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::RenderGraphSettings_Version ___m_Version;

  /// @brief Field m_EnableRenderCompatibilityMode, offset: 0x14, size: 0x1, def value: None
  bool ___m_EnableRenderCompatibilityMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderGraphSettings, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::RenderGraphSettings, ___m_EnableRenderCompatibilityMode) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::RenderGraphSettings, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderGraphSettings_Version, "UnityEngine.Rendering.Universal", "RenderGraphSettings/Version");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::RenderGraphSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::RenderGraphSettings*, "UnityEngine.Rendering.Universal", "RenderGraphSettings");
