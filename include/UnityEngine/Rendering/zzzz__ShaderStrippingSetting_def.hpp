#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShaderStrippingSetting.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderVariantLogLevel_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderStrippingSetting)
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
struct ShaderStrippingSetting_Version;
}
namespace UnityEngine::Rendering {
struct ShaderVariantLogLevel;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShaderStrippingSetting_Version;
}
namespace UnityEngine::Rendering {
class ShaderStrippingSetting;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShaderStrippingSetting_Version);
MARK_REF_PTR_T(::UnityEngine::Rendering::ShaderStrippingSetting);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ShaderStrippingSetting/Version
struct CORDL_TYPE ShaderStrippingSetting_Version {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ShaderStrippingSetting_Version_Unwrapped
  enum struct __ShaderStrippingSetting_Version_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ShaderStrippingSetting_Version_Unwrapped() const noexcept {
    return static_cast<__ShaderStrippingSetting_Version_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderStrippingSetting_Version();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ShaderStrippingSetting_Version(int32_t value__) noexcept;

  /// @brief Field Initial value: I32(0)
  static ::UnityEngine::Rendering::ShaderStrippingSetting_Version const Initial;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12167 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ShaderStrippingSetting_Version, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShaderStrippingSetting_Version, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.ShaderStrippingSetting::Version, UnityEngine.Rendering.ShaderVariantLogLevel
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ShaderStrippingSetting
class CORDL_TYPE ShaderStrippingSetting : public ::System::Object {
public:
  // Declarations
  using Version = ::UnityEngine::Rendering::ShaderStrippingSetting_Version;

  __declspec(property(get = UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild)) bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_isAvailableInPlayerBuild;

  __declspec(property(get = get_exportShaderVariants, put = set_exportShaderVariants)) bool exportShaderVariants;

  /// @brief Field m_ExportShaderVariants, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ExportShaderVariants, put = __cordl_internal_set_m_ExportShaderVariants)) bool m_ExportShaderVariants;

  /// @brief Field m_ShaderVariantLogLevel, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ShaderVariantLogLevel, put = __cordl_internal_set_m_ShaderVariantLogLevel)) ::UnityEngine::Rendering::ShaderVariantLogLevel m_ShaderVariantLogLevel;

  /// @brief Field m_StripRuntimeDebugShaders, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_StripRuntimeDebugShaders, put = __cordl_internal_set_m_StripRuntimeDebugShaders)) bool m_StripRuntimeDebugShaders;

  /// @brief Field m_Version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) ::UnityEngine::Rendering::ShaderStrippingSetting_Version m_Version;

  __declspec(property(get = get_shaderVariantLogLevel, put = set_shaderVariantLogLevel)) ::UnityEngine::Rendering::ShaderVariantLogLevel shaderVariantLogLevel;

  __declspec(property(get = get_stripRuntimeDebugShaders, put = set_stripRuntimeDebugShaders)) bool stripRuntimeDebugShaders;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  static inline ::UnityEngine::Rendering::ShaderStrippingSetting* New_ctor();

  /// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_isAvailableInPlayerBuild, addr 0x65843c8, size 0x8, virtual true, abstract: false, final true
  inline bool UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_isAvailableInPlayerBuild();

  constexpr bool const& __cordl_internal_get_m_ExportShaderVariants() const;

  constexpr bool& __cordl_internal_get_m_ExportShaderVariants();

  constexpr ::UnityEngine::Rendering::ShaderVariantLogLevel const& __cordl_internal_get_m_ShaderVariantLogLevel() const;

  constexpr ::UnityEngine::Rendering::ShaderVariantLogLevel& __cordl_internal_get_m_ShaderVariantLogLevel();

  constexpr bool const& __cordl_internal_get_m_StripRuntimeDebugShaders() const;

  constexpr bool& __cordl_internal_get_m_StripRuntimeDebugShaders();

  constexpr ::UnityEngine::Rendering::ShaderStrippingSetting_Version const& __cordl_internal_get_m_Version() const;

  constexpr ::UnityEngine::Rendering::ShaderStrippingSetting_Version& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_ExportShaderVariants(bool value);

  constexpr void __cordl_internal_set_m_ShaderVariantLogLevel(::UnityEngine::Rendering::ShaderVariantLogLevel value);

  constexpr void __cordl_internal_set_m_StripRuntimeDebugShaders(bool value);

  constexpr void __cordl_internal_set_m_Version(::UnityEngine::Rendering::ShaderStrippingSetting_Version value);

  /// @brief Method .ctor, addr 0x6584538, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_exportShaderVariants, addr 0x65843d0, size 0x8, virtual false, abstract: false, final false
  inline bool get_exportShaderVariants();

  /// @brief Method get_shaderVariantLogLevel, addr 0x6584448, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ShaderVariantLogLevel get_shaderVariantLogLevel();

  /// @brief Method get_stripRuntimeDebugShaders, addr 0x65844c0, size 0x8, virtual false, abstract: false, final false
  inline bool get_stripRuntimeDebugShaders();

  /// @brief Method get_version, addr 0x65843c0, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_version();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Method set_exportShaderVariants, addr 0x65843d8, size 0x70, virtual false, abstract: false, final false
  inline void set_exportShaderVariants(bool value);

  /// @brief Method set_shaderVariantLogLevel, addr 0x6584450, size 0x70, virtual false, abstract: false, final false
  inline void set_shaderVariantLogLevel(::UnityEngine::Rendering::ShaderVariantLogLevel value);

  /// @brief Method set_stripRuntimeDebugShaders, addr 0x65844c8, size 0x70, virtual false, abstract: false, final false
  inline void set_stripRuntimeDebugShaders(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ShaderStrippingSetting();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ShaderStrippingSetting", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ShaderStrippingSetting(ShaderStrippingSetting&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ShaderStrippingSetting", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ShaderStrippingSetting(ShaderStrippingSetting const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12168 };

  /// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::ShaderStrippingSetting_Version ___m_Version;

  /// @brief Field m_ExportShaderVariants, offset: 0x14, size: 0x1, def value: None
  bool ___m_ExportShaderVariants;

  /// @brief Field m_ShaderVariantLogLevel, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::ShaderVariantLogLevel ___m_ShaderVariantLogLevel;

  /// @brief Field m_StripRuntimeDebugShaders, offset: 0x1c, size: 0x1, def value: None
  bool ___m_StripRuntimeDebugShaders;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ShaderStrippingSetting, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderStrippingSetting, ___m_ExportShaderVariants) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderStrippingSetting, ___m_ShaderVariantLogLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShaderStrippingSetting, ___m_StripRuntimeDebugShaders) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShaderStrippingSetting, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShaderStrippingSetting_Version, "UnityEngine.Rendering", "ShaderStrippingSetting/Version");
NEED_NO_BOX(::UnityEngine::Rendering::ShaderStrippingSetting);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShaderStrippingSetting*, "UnityEngine.Rendering", "ShaderStrippingSetting");
