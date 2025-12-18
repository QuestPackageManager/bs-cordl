#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphGlobalSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphGlobalSettings)
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
struct RenderGraphGlobalSettings_Version;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct RenderGraphGlobalSettings_Version;
}
namespace UnityEngine::Rendering {
class RenderGraphGlobalSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphGlobalSettings_Version);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphGlobalSettings);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphGlobalSettings/Version
struct CORDL_TYPE RenderGraphGlobalSettings_Version {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderGraphGlobalSettings_Version_Unwrapped
  enum struct __RenderGraphGlobalSettings_Version_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
    __E_Count = static_cast<int32_t>(0x1),
    __E_Last = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderGraphGlobalSettings_Version_Unwrapped() const noexcept {
    return static_cast<__RenderGraphGlobalSettings_Version_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphGlobalSettings_Version();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderGraphGlobalSettings_Version(int32_t value__) noexcept;

  /// @brief Field Count value: I32(1)
  static ::UnityEngine::Rendering::RenderGraphGlobalSettings_Version const Count;

  /// @brief Field Initial value: I32(0)
  static ::UnityEngine::Rendering::RenderGraphGlobalSettings_Version const Initial;

  /// @brief Field Last value: I32(0)
  static ::UnityEngine::Rendering::RenderGraphGlobalSettings_Version const Last;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12158 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphGlobalSettings_Version, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphGlobalSettings_Version, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphGlobalSettings::Version
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphGlobalSettings
class CORDL_TYPE RenderGraphGlobalSettings : public ::System::Object {
public:
  // Declarations
  using Version = ::UnityEngine::Rendering::RenderGraphGlobalSettings_Version;

  __declspec(property(get = UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)) bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_isAvailableInPlayerBuild;

  __declspec(property(get = UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version)) int32_t UnityEngine_Rendering_IRenderPipelineGraphicsSettings_version;

  __declspec(property(get = get_enableCompilationCaching, put = set_enableCompilationCaching)) bool enableCompilationCaching;

  __declspec(property(get = get_enableValidityChecks, put = set_enableValidityChecks)) bool enableValidityChecks;

  /// @brief Field m_EnableCompilationCaching, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableCompilationCaching, put = __cordl_internal_set_m_EnableCompilationCaching)) bool m_EnableCompilationCaching;

  /// @brief Field m_EnableValidityChecks, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableValidityChecks, put = __cordl_internal_set_m_EnableValidityChecks)) bool m_EnableValidityChecks;

  /// @brief Field m_version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_version, put = __cordl_internal_set_m_version)) ::UnityEngine::Rendering::RenderGraphGlobalSettings_Version m_version;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  static inline ::UnityEngine::Rendering::RenderGraphGlobalSettings* New_ctor();

  /// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild, addr 0x65ebc2c, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild();

  /// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version, addr 0x65ebc34, size 0x8, virtual true, abstract: false, final true
  inline int32_t UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version();

  constexpr bool const& __cordl_internal_get_m_EnableCompilationCaching() const;

  constexpr bool& __cordl_internal_get_m_EnableCompilationCaching();

  constexpr bool const& __cordl_internal_get_m_EnableValidityChecks() const;

  constexpr bool& __cordl_internal_get_m_EnableValidityChecks();

  constexpr ::UnityEngine::Rendering::RenderGraphGlobalSettings_Version const& __cordl_internal_get_m_version() const;

  constexpr ::UnityEngine::Rendering::RenderGraphGlobalSettings_Version& __cordl_internal_get_m_version();

  constexpr void __cordl_internal_set_m_EnableCompilationCaching(bool value);

  constexpr void __cordl_internal_set_m_EnableValidityChecks(bool value);

  constexpr void __cordl_internal_set_m_version(::UnityEngine::Rendering::RenderGraphGlobalSettings_Version value);

  /// @brief Method .ctor, addr 0x65ebd2c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_enableCompilationCaching, addr 0x65ebc3c, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableCompilationCaching();

  /// @brief Method get_enableValidityChecks, addr 0x65ebcb4, size 0x8, virtual false, abstract: false, final false
  inline bool get_enableValidityChecks();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Method set_enableCompilationCaching, addr 0x65ebc44, size 0x70, virtual false, abstract: false, final false
  inline void set_enableCompilationCaching(bool value);

  /// @brief Method set_enableValidityChecks, addr 0x65ebcbc, size 0x70, virtual false, abstract: false, final false
  inline void set_enableValidityChecks(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphGlobalSettings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphGlobalSettings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphGlobalSettings(RenderGraphGlobalSettings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphGlobalSettings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphGlobalSettings(RenderGraphGlobalSettings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12159 };

  /// @brief Field m_version, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphGlobalSettings_Version ___m_version;

  /// @brief Field m_EnableCompilationCaching, offset: 0x14, size: 0x1, def value: None
  bool ___m_EnableCompilationCaching;

  /// @brief Field m_EnableValidityChecks, offset: 0x15, size: 0x1, def value: None
  bool ___m_EnableValidityChecks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphGlobalSettings, ___m_version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphGlobalSettings, ___m_EnableCompilationCaching) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphGlobalSettings, ___m_EnableValidityChecks) == 0x15, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphGlobalSettings, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphGlobalSettings_Version, "UnityEngine.Rendering", "RenderGraphGlobalSettings/Version");
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphGlobalSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphGlobalSettings*, "UnityEngine.Rendering", "RenderGraphGlobalSettings");
