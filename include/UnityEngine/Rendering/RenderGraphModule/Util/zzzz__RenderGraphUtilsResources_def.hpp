#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/Util/RenderGraphUtilsResources.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphUtilsResources)
namespace UnityEngine::Rendering::RenderGraphModule::Util {
struct RenderGraphUtilsResources_Version;
}
namespace UnityEngine::Rendering {
class IRenderPipelineGraphicsSettings;
}
namespace UnityEngine::Rendering {
class IRenderPipelineResources;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule::Util {
struct RenderGraphUtilsResources_Version;
}
namespace UnityEngine::Rendering::RenderGraphModule::Util {
class RenderGraphUtilsResources;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources_Version);
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources);
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule::Util {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtilsResources/Version
struct CORDL_TYPE RenderGraphUtilsResources_Version {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __RenderGraphUtilsResources_Version_Unwrapped
  enum struct __RenderGraphUtilsResources_Version_Unwrapped : int32_t {
    __E_Initial = static_cast<int32_t>(0x0),
    __E_Count = static_cast<int32_t>(0x1),
    __E_Latest = static_cast<int32_t>(0x0),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __RenderGraphUtilsResources_Version_Unwrapped() const noexcept {
    return static_cast<__RenderGraphUtilsResources_Version_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphUtilsResources_Version();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr RenderGraphUtilsResources_Version(int32_t value__) noexcept;

  /// @brief Field Count value: I32(1)
  static ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources_Version const Count;

  /// @brief Field Initial value: I32(0)
  static ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources_Version const Initial;

  /// @brief Field Latest value: I32(0)
  static ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources_Version const Latest;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12451 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources_Version, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources_Version, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::Util
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtilsResources::Version
namespace UnityEngine::Rendering::RenderGraphModule::Util {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtilsResources
class CORDL_TYPE RenderGraphUtilsResources : public ::System::Object {
public:
  // Declarations
  using Version = ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources_Version;

  __declspec(property(get = UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version)) int32_t UnityEngine_Rendering_IRenderPipelineGraphicsSettings_version;

  __declspec(property(get = get_coreCopyPS, put = set_coreCopyPS)) ::UnityW<::UnityEngine::Shader> coreCopyPS;

  /// @brief Field m_CoreCopyPS, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CoreCopyPS, put = __cordl_internal_set_m_CoreCopyPS)) ::UnityW<::UnityEngine::Shader> m_CoreCopyPS;

  /// @brief Field m_Version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources_Version m_Version;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr operator ::UnityEngine::Rendering::IRenderPipelineResources*() noexcept;

  static inline ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources* New_ctor();

  /// @brief Method UnityEngine.Rendering.IRenderPipelineGraphicsSettings.get_version, addr 0x6636ad4, size 0x8, virtual true, abstract: false, final true
  inline int32_t UnityEngine_Rendering_IRenderPipelineGraphicsSettings_get_version();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_CoreCopyPS() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_CoreCopyPS();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources_Version const& __cordl_internal_get_m_Version() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources_Version& __cordl_internal_get_m_Version();

  constexpr void __cordl_internal_set_m_CoreCopyPS(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_Version(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources_Version value);

  /// @brief Method .ctor, addr 0x6636b54, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_coreCopyPS, addr 0x6636adc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Shader> get_coreCopyPS();

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineGraphicsSettings"
  constexpr ::UnityEngine::Rendering::IRenderPipelineGraphicsSettings* i___UnityEngine__Rendering__IRenderPipelineGraphicsSettings() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IRenderPipelineResources"
  constexpr ::UnityEngine::Rendering::IRenderPipelineResources* i___UnityEngine__Rendering__IRenderPipelineResources() noexcept;

  /// @brief Method set_coreCopyPS, addr 0x6636ae4, size 0x70, virtual false, abstract: false, final false
  inline void set_coreCopyPS(::UnityEngine::Shader* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderGraphUtilsResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphUtilsResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderGraphUtilsResources(RenderGraphUtilsResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderGraphUtilsResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderGraphUtilsResources(RenderGraphUtilsResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12452 };

  /// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources_Version ___m_Version;

  /// @brief Field m_CoreCopyPS, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_CoreCopyPS;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources, ___m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources, ___m_CoreCopyPS) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::Util
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources_Version, "UnityEngine.Rendering.RenderGraphModule.Util", "RenderGraphUtilsResources/Version");
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::Util::RenderGraphUtilsResources*, "UnityEngine.Rendering.RenderGraphModule.Util", "RenderGraphUtilsResources");
