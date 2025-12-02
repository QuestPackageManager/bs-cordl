#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/FilteringSettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__RenderQueueRange_def.hpp"
#include "UnityEngine/Rendering/zzzz__SortingLayerRange_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FilteringSettings)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct RenderQueueRange;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct FilteringSettings;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::FilteringSettings);
// Dependencies UnityEngine.Rendering.RenderQueueRange, UnityEngine.Rendering.SortingLayerRange
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.FilteringSettings
struct CORDL_TYPE FilteringSettings {
public:
  // Declarations
  __declspec(property(put = set_batchLayerMask)) uint32_t batchLayerMask;

  __declspec(property(put = set_excludeMotionVectorObjects)) bool excludeMotionVectorObjects;

  __declspec(property(put = set_forceAllMotionVectorObjects)) bool forceAllMotionVectorObjects;

  __declspec(property(get = get_renderQueueRange)) ::UnityEngine::Rendering::RenderQueueRange renderQueueRange;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::FilteringSettings>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::FilteringSettings>*();

  /// @brief Method Equals, addr 0x68ed7e8, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x68ed6e8, size 0xd8, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::FilteringSettings other);

  /// @brief Method GetHashCode, addr 0x68ed874, size 0x98, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method .ctor, addr 0x68ed5c0, size 0xf0, virtual false, abstract: false, final false
  inline void _ctor(::System::Nullable_1<::UnityEngine::Rendering::RenderQueueRange> renderQueueRange, int32_t layerMask, uint32_t renderingLayerMask, int32_t excludeMotionVectorObjects);

  /// @brief Method get_renderQueueRange, addr 0x68ed6c0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderQueueRange get_renderQueueRange();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::FilteringSettings>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::FilteringSettings>* i___System__IEquatable_1___UnityEngine__Rendering__FilteringSettings_();

  /// @brief Method op_Equality, addr 0x68ed920, size 0x28, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Rendering::FilteringSettings left, ::UnityEngine::Rendering::FilteringSettings right);

  /// @brief Method set_batchLayerMask, addr 0x68ed6c8, size 0x8, virtual false, abstract: false, final false
  inline void set_batchLayerMask(uint32_t value);

  /// @brief Method set_excludeMotionVectorObjects, addr 0x68ed6d0, size 0xc, virtual false, abstract: false, final false
  inline void set_excludeMotionVectorObjects(bool value);

  /// @brief Method set_forceAllMotionVectorObjects, addr 0x68ed6dc, size 0xc, virtual false, abstract: false, final false
  inline void set_forceAllMotionVectorObjects(bool value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FilteringSettings();

  // Ctor Parameters [CppParam { name: "m_RenderQueueRange", ty: "::UnityEngine::Rendering::RenderQueueRange", modifiers: "", def_value: None }, CppParam { name: "m_LayerMask", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "m_RenderingLayerMask", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_BatchLayerMask", ty: "uint32_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_ExcludeMotionVectorObjects", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ForceAllMotionVectorObjects", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "m_SortingLayerRange", ty: "::UnityEngine::Rendering::SortingLayerRange", modifiers: "", def_value: None }]
  constexpr FilteringSettings(::UnityEngine::Rendering::RenderQueueRange m_RenderQueueRange, int32_t m_LayerMask, uint32_t m_RenderingLayerMask, uint32_t m_BatchLayerMask,
                              int32_t m_ExcludeMotionVectorObjects, int32_t m_ForceAllMotionVectorObjects, ::UnityEngine::Rendering::SortingLayerRange m_SortingLayerRange) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10781 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_RenderQueueRange, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::Rendering::RenderQueueRange m_RenderQueueRange;

  /// @brief Field m_LayerMask, offset: 0x8, size: 0x4, def value: None
  int32_t m_LayerMask;

  /// @brief Field m_RenderingLayerMask, offset: 0xc, size: 0x4, def value: None
  uint32_t m_RenderingLayerMask;

  /// @brief Field m_BatchLayerMask, offset: 0x10, size: 0x4, def value: None
  uint32_t m_BatchLayerMask;

  /// @brief Field m_ExcludeMotionVectorObjects, offset: 0x14, size: 0x4, def value: None
  int32_t m_ExcludeMotionVectorObjects;

  /// @brief Field m_ForceAllMotionVectorObjects, offset: 0x18, size: 0x4, def value: None
  int32_t m_ForceAllMotionVectorObjects;

  /// @brief Field m_SortingLayerRange, offset: 0x1c, size: 0x4, def value: None
  ::UnityEngine::Rendering::SortingLayerRange m_SortingLayerRange;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::FilteringSettings, m_RenderQueueRange) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FilteringSettings, m_LayerMask) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FilteringSettings, m_RenderingLayerMask) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FilteringSettings, m_BatchLayerMask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FilteringSettings, m_ExcludeMotionVectorObjects) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FilteringSettings, m_ForceAllMotionVectorObjects) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::FilteringSettings, m_SortingLayerRange) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::FilteringSettings, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::FilteringSettings, "UnityEngine.Rendering", "FilteringSettings");
