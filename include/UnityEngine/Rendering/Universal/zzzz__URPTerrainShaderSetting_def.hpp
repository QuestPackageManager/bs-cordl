#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/URPTerrainShaderSetting.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(URPTerrainShaderSetting)
namespace UnityEngine::Rendering::Universal {
struct URPTerrainShaderSetting_Version;
}
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct URPTerrainShaderSetting_Version;
}
namespace UnityEngine::Rendering::Universal {
class URPTerrainShaderSetting;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::URPTerrainShaderSetting_Version);
MARK_REF_T(::UnityEngine::Rendering::Universal::URPTerrainShaderSetting*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::URPTerrainShaderSetting_Version, "UnityEngine.Rendering.Universal", "URPTerrainShaderSetting/Version");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::URPTerrainShaderSetting*, "UnityEngine.Rendering.Universal", "URPTerrainShaderSetting");
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.URPTerrainShaderSetting/Version
struct CORDL_TYPE URPTerrainShaderSetting_Version {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __URPTerrainShaderSetting_Version_Unwrapped
  enum struct __URPTerrainShaderSetting_Version_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __URPTerrainShaderSetting_Version_Unwrapped() const noexcept {
    return static_cast<__URPTerrainShaderSetting_Version_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr URPTerrainShaderSetting_Version();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr URPTerrainShaderSetting_Version(int32_t value__) noexcept;

  /// @brief Field Initial value: I32(0)
  static ::UnityEngine::Rendering::Universal::URPTerrainShaderSetting_Version const Initial;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13195 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::URPTerrainShaderSetting_Version, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::URPTerrainShaderSetting_Version) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// [SupportedOnRenderPipeline(typeof(UnityEngine.Rendering.Universal.UniversalRenderPipelineAsset))]
// [CategoryInfo(Name = "Terrain Shader Inclusion Settings", Order = 50)]
// [ElementInfo(Order = 10)]
// Dependencies System.Object, UnityEngine.Rendering.Universal.URPTerrainShaderSetting::Version
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.URPTerrainShaderSetting
class CORDL_TYPE URPTerrainShaderSetting : public ::System::Object {
public:
  // Declarations
  using Version = ::UnityEngine::Rendering::Universal::URPTerrainShaderSetting_Version;

  __declspec(property(get = get_includeTerrainShaders, put = set_includeTerrainShaders)) bool includeTerrainShaders;

  /// @brief Field m_IncludeTerrainShaders, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IncludeTerrainShaders, put = __cordl_internal_set_m_IncludeTerrainShaders)) bool m_IncludeTerrainShaders;

  /// @brief Field m_Version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) ::UnityEngine::Rendering::Universal::URPTerrainShaderSetting_Version m_Version;

  __declspec(property(get = get_version)) int32_t version;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  static inline ::UnityEngine::Rendering::Universal::URPTerrainShaderSetting* New_ctor();

  constexpr bool const& __cordl_internal_get_m_IncludeTerrainShaders() const;

  constexpr bool& __cordl_internal_get_m_IncludeTerrainShaders();

  constexpr ::UnityEngine::Rendering::Universal::URPTerrainShaderSetting_Version const& __cordl_internal_get_m_Version() const;

  constexpr ::UnityEngine::Rendering::Universal::URPTerrainShaderSetting_Version& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_IncludeTerrainShaders(bool value);

  constexpr void __cordl_internal_set_m_Version(::UnityEngine::Rendering::Universal::URPTerrainShaderSetting_Version value);

  /// @brief Method .ctor, addr 0x6cf157c, size 0xc, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_includeTerrainShaders, addr 0x6cf1504, size 0x8, virtual false, abstract: false, final false
  inline bool get_includeTerrainShaders();

  /// @brief Method get_version, addr 0x6cf14fc, size 0x8, virtual true, abstract: false, final true
  inline int32_t get_version();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Method set_includeTerrainShaders, addr 0x6cf150c, size 0x70, virtual false, abstract: false, final false
  inline void set_includeTerrainShaders(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr URPTerrainShaderSetting();

public:
  // Ctor Parameters [CppParam { name: "", ty: "URPTerrainShaderSetting", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  URPTerrainShaderSetting(URPTerrainShaderSetting&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "URPTerrainShaderSetting", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  URPTerrainShaderSetting(URPTerrainShaderSetting const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13196 };

  /// [SerializeField]
  /// [HideInInspector]
  /// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::URPTerrainShaderSetting_Version ___m_Version;

  /// [SerializeField]
  /// [Tooltip("Include terrain shaders in build even if not referenced.")]
  /// @brief Field m_IncludeTerrainShaders, offset: 0x14, size: 0x1, def value: None
  bool ___m_IncludeTerrainShaders;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::URPTerrainShaderSetting, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::URPTerrainShaderSetting, ___m_IncludeTerrainShaders) == 0x14, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::URPTerrainShaderSetting) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
