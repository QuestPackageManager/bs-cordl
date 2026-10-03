#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderingDebuggerRuntimeResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderingDebuggerRuntimeResources)
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class IRenderPipelineResources;
}
namespace UnityEngine::Rendering {
struct RenderingDebuggerRuntimeResources_Version;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct RenderingDebuggerRuntimeResources_Version;
}
namespace UnityEngine::Rendering {
class RenderingDebuggerRuntimeResources;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderingDebuggerRuntimeResources_Version);
MARK_REF_T(::UnityEngine::Rendering::RenderingDebuggerRuntimeResources*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderingDebuggerRuntimeResources_Version, "UnityEngine.Rendering", "RenderingDebuggerRuntimeResources/Version");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderingDebuggerRuntimeResources*, "UnityEngine.Rendering", "RenderingDebuggerRuntimeResources");
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderingDebuggerRuntimeResources/Version
struct CORDL_TYPE RenderingDebuggerRuntimeResources_Version {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderingDebuggerRuntimeResources_Version_Unwrapped
  enum struct __RenderingDebuggerRuntimeResources_Version_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
    __E_Count = static_cast<int32_t>(0x1),
    __E_Last = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderingDebuggerRuntimeResources_Version_Unwrapped() const noexcept {
    return static_cast<__RenderingDebuggerRuntimeResources_Version_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderingDebuggerRuntimeResources_Version();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr RenderingDebuggerRuntimeResources_Version(int32_t value__) noexcept;

  /// @brief Field Count value: I32(1)
  static ::UnityEngine::Rendering::RenderingDebuggerRuntimeResources_Version const Count;

  /// @brief Field Initial value: I32(0)
  static ::UnityEngine::Rendering::RenderingDebuggerRuntimeResources_Version const Initial;

  /// @brief Field Last value: I32(0)
  static ::UnityEngine::Rendering::RenderingDebuggerRuntimeResources_Version const Last;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9087 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderingDebuggerRuntimeResources_Version, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderingDebuggerRuntimeResources_Version) == 0x4, "Size mismatch!");

} // namespace UnityEngine::Rendering
// [HideInInspector]
// [SupportedOnRenderPipeline(new[] {  })]
// [CategoryInfo(Name = "R : Rendering Debugger Resources", Order = 100)]
// [ElementInfo(Order = 0)]
// Dependencies System.Object, UnityEngine.Rendering.RenderingDebuggerRuntimeResources::Version
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderingDebuggerRuntimeResources
class CORDL_TYPE RenderingDebuggerRuntimeResources : public ::System::Object {
public:
  // Declarations
  using Version = ::UnityEngine::Rendering::RenderingDebuggerRuntimeResources_Version;

  __declspec(property(get = UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version)) int32_t UnityEngine_Rendering_IRenderPipelineGraphicsSettings_version;

  /// @brief Field m_version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_version, put = __cordl_internal_set_m_version)) ::UnityEngine::Rendering::RenderingDebuggerRuntimeResources_Version m_version;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept;

  static inline ::UnityEngine::Rendering::RenderingDebuggerRuntimeResources* New_ctor();

  /// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version, addr 0x6bc291c, size 0x8, virtual true, abstract: false, final true
  inline int32_t UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version();

  constexpr ::UnityEngine::Rendering::RenderingDebuggerRuntimeResources_Version const& __cordl_internal_get_m_version() const;

  constexpr ::UnityEngine::Rendering::RenderingDebuggerRuntimeResources_Version& __cordl_internal_get_m_version();

  constexpr void __cordl_internal_set_m_version(::UnityEngine::Rendering::RenderingDebuggerRuntimeResources_Version value);

  /// @brief Method .ctor, addr 0x6bc2924, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr ::UnityEngine::Rendering::IRenderPipelineResources* i___UnityEngine__Rendering__IRenderPipelineResources() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderingDebuggerRuntimeResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderingDebuggerRuntimeResources", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderingDebuggerRuntimeResources(RenderingDebuggerRuntimeResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderingDebuggerRuntimeResources", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderingDebuggerRuntimeResources(RenderingDebuggerRuntimeResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9088 };

  /// [SerializeField]
  /// [HideInInspector]
  /// @brief Field m_version, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderingDebuggerRuntimeResources_Version ___m_version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderingDebuggerRuntimeResources, ___m_version) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderingDebuggerRuntimeResources) == 0x18, "Size mismatch!");

} // namespace UnityEngine::Rendering
