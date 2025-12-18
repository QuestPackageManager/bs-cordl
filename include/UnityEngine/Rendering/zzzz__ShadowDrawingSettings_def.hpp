#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ShadowDrawingSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__BatchCullingProjectionType_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowSplitData_def.hpp"
#include "UnityEngine/zzzz__ShadowObjectsFilter_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ShadowDrawingSettings)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct ShadowDrawingSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::ShadowDrawingSettings);
// Dependencies UnityEngine.Rendering.BatchCullingProjectionType, UnityEngine.Rendering.CullingResults, UnityEngine.Rendering.ShadowSplitData, UnityEngine.ShadowObjectsFilter
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ShadowDrawingSettings
struct CORDL_TYPE ShadowDrawingSettings {
public:
  // Declarations
  __declspec(property(put = set_useRenderingLayerMaskTest)) bool useRenderingLayerMaskTest;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ShadowDrawingSettings>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::ShadowDrawingSettings>*();

  /// @brief Method Equals, addr 0x695d2b8, size 0xbc, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x695cfd0, size 0x170, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::ShadowDrawingSettings other);

  /// @brief Method GetHashCode, addr 0x695d374, size 0xc0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x695ce54, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::CullingResults cullingResults, int32_t lightIndex);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::ShadowDrawingSettings>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::ShadowDrawingSettings>* i___System__IEquatable_1___UnityEngine__Rendering__ShadowDrawingSettings_();

  /// @brief Method set_useRenderingLayerMaskTest, addr 0x695ce48, size 0xc, virtual false, abstract: false, final false
  inline void set_useRenderingLayerMaskTest(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr ShadowDrawingSettings();

  // Ctor Parameters [CppParam { name: "m_CullingResults", ty: "::UnityEngine::Rendering::CullingResults", modifiers: "", def_value: None }, CppParam { name: "m_LightIndex", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "m_SplitIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_UseRenderingLayerMaskTest", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "m_BatchLayerMask", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_SplitData", ty: "::UnityEngine::Rendering::ShadowSplitData", modifiers: "",
  // def_value: None }, CppParam { name: "m_ObjectsFilter", ty: "::UnityEngine::ShadowObjectsFilter", modifiers: "", def_value: None }, CppParam { name: "m_ProjectionType", ty:
  // "::UnityEngine::Rendering::BatchCullingProjectionType", modifiers: "", def_value: None }]
  constexpr ShadowDrawingSettings(::UnityEngine::Rendering::CullingResults m_CullingResults, int32_t m_LightIndex, int32_t m_SplitIndex, int32_t m_UseRenderingLayerMaskTest, uint32_t m_BatchLayerMask,
                                  ::UnityEngine::Rendering::ShadowSplitData m_SplitData, ::UnityEngine::ShadowObjectsFilter m_ObjectsFilter,
                                  ::UnityEngine::Rendering::BatchCullingProjectionType m_ProjectionType) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10809 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x128 };

  /// @brief Field m_CullingResults, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Rendering::CullingResults m_CullingResults;

  /// @brief Field m_LightIndex, offset: 0x10, size: 0x4, def value: None
  int32_t m_LightIndex;

  /// @brief Field m_SplitIndex, offset: 0x14, size: 0x4, def value: None
  int32_t m_SplitIndex;

  /// @brief Field m_UseRenderingLayerMaskTest, offset: 0x18, size: 0x4, def value: None
  int32_t m_UseRenderingLayerMaskTest;

  /// @brief Field m_BatchLayerMask, offset: 0x1c, size: 0x4, def value: None
  uint32_t m_BatchLayerMask;

  /// @brief Field m_SplitData, offset: 0x20, size: 0xfc, def value: None
  ::UnityEngine::Rendering::ShadowSplitData m_SplitData;

  /// @brief Field m_ObjectsFilter, offset: 0x11c, size: 0x4, def value: None
  ::UnityEngine::ShadowObjectsFilter m_ObjectsFilter;

  /// @brief Field m_ProjectionType, offset: 0x120, size: 0x4, def value: None
  ::UnityEngine::Rendering::BatchCullingProjectionType m_ProjectionType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ShadowDrawingSettings, m_CullingResults) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShadowDrawingSettings, m_LightIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShadowDrawingSettings, m_SplitIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShadowDrawingSettings, m_UseRenderingLayerMaskTest) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShadowDrawingSettings, m_BatchLayerMask) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShadowDrawingSettings, m_SplitData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShadowDrawingSettings, m_ObjectsFilter) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ShadowDrawingSettings, m_ProjectionType) == 0x120, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ShadowDrawingSettings, 0x128>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ShadowDrawingSettings, "UnityEngine.Rendering", "ShadowDrawingSettings");
