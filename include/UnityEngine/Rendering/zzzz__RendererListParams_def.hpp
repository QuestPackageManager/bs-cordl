#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RendererListParams.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__CullingResults_def.hpp"
#include "UnityEngine/Rendering/zzzz__DrawingSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__FilteringSettings_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderStateBlock_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderTagId_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RendererListParams)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering {
struct CullingResults;
}
namespace UnityEngine::Rendering {
struct DrawingSettings;
}
namespace UnityEngine::Rendering {
struct FilteringSettings;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct RendererListParams;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RendererListParams);
// Dependencies System.Nullable`1<T>, Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.CullingResults, UnityEngine.Rendering.DrawingSettings, UnityEngine.Rendering.FilteringSettings,
// UnityEngine.Rendering.RenderStateBlock, UnityEngine.Rendering.ShaderTagId
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.RendererListParams
struct CORDL_TYPE RendererListParams {
public:
  // Declarations
  /// @brief Field Invalid, offset 0xffffffff, size 0x130
  __declspec(property(get = getStaticF_Invalid, put = setStaticF_Invalid)) ::UnityEngine::Rendering::RendererListParams Invalid;

  __declspec(property(get = get_numStateBlocks)) int32_t numStateBlocks;

  __declspec(property(get = get_stateBlocksPtr)) ::System::IntPtr stateBlocksPtr;

  __declspec(property(get = get_tagsValuePtr)) ::System::IntPtr tagsValuePtr;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::RendererListParams>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::RendererListParams>*();

  /// @brief Method Equals, addr 0x695a28c, size 0x100, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6959fe8, size 0x298, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::RendererListParams other);

  /// @brief Method GetHashCode, addr 0x695a38c, size 0x10c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method Validate, addr 0x6959c08, size 0x3e0, virtual false, abstract: false, final false
  inline void Validate();

  /// @brief Method .ctor, addr 0x6959a04, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::CullingResults cullingResults, ::UnityEngine::Rendering::DrawingSettings drawSettings, ::UnityEngine::Rendering::FilteringSettings filteringSettings);

  static inline ::UnityEngine::Rendering::RendererListParams getStaticF_Invalid();

  /// @brief Method get_numStateBlocks, addr 0x6959aa8, size 0x68, virtual false, abstract: false, final false
  inline int32_t get_numStateBlocks();

  /// @brief Method get_stateBlocksPtr, addr 0x6959b10, size 0x7c, virtual false, abstract: false, final false
  inline ::System::IntPtr get_stateBlocksPtr();

  /// @brief Method get_tagsValuePtr, addr 0x6959b8c, size 0x7c, virtual false, abstract: false, final false
  inline ::System::IntPtr get_tagsValuePtr();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::RendererListParams>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::RendererListParams>* i___System__IEquatable_1___UnityEngine__Rendering__RendererListParams_();

  static inline void setStaticF_Invalid(::UnityEngine::Rendering::RendererListParams value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RendererListParams();

  // Ctor Parameters [CppParam { name: "cullingResults", ty: "::UnityEngine::Rendering::CullingResults", modifiers: "", def_value: None }, CppParam { name: "drawSettings", ty:
  // "::UnityEngine::Rendering::DrawingSettings", modifiers: "", def_value: None }, CppParam { name: "filteringSettings", ty: "::UnityEngine::Rendering::FilteringSettings", modifiers: "", def_value:
  // None }, CppParam { name: "tagName", ty: "::UnityEngine::Rendering::ShaderTagId", modifiers: "", def_value: None }, CppParam { name: "isPassTagName", ty: "bool", modifiers: "", def_value: None },
  // CppParam { name: "tagValues", ty: "::System::Nullable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ShaderTagId>>", modifiers: "", def_value: None }, CppParam { name:
  // "stateBlocks", ty: "::System::Nullable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::RenderStateBlock>>", modifiers: "", def_value: None }]
  constexpr RendererListParams(::UnityEngine::Rendering::CullingResults cullingResults, ::UnityEngine::Rendering::DrawingSettings drawSettings,
                               ::UnityEngine::Rendering::FilteringSettings filteringSettings, ::UnityEngine::Rendering::ShaderTagId tagName, bool isPassTagName,
                               ::System::Nullable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ShaderTagId>> tagValues,
                               ::System::Nullable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::RenderStateBlock>> stateBlocks) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10805 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x130 };

  /// @brief Field cullingResults, offset: 0x0, size: 0x10, def value: None
  ::UnityEngine::Rendering::CullingResults cullingResults;

  /// @brief Field drawSettings, offset: 0x10, size: 0xc4, def value: None
  ::UnityEngine::Rendering::DrawingSettings drawSettings;

  /// @brief Field filteringSettings, offset: 0xd4, size: 0x20, def value: None
  ::UnityEngine::Rendering::FilteringSettings filteringSettings;

  /// @brief Field tagName, offset: 0xf4, size: 0x4, def value: None
  ::UnityEngine::Rendering::ShaderTagId tagName;

  /// @brief Field isPassTagName, offset: 0xf8, size: 0x1, def value: None
  bool isPassTagName;

  /// @brief Field tagValues, offset: 0x100, size: 0x18, def value: None
  ::System::Nullable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ShaderTagId>> tagValues;

  /// @brief Field stateBlocks, offset: 0x118, size: 0x18, def value: None
  ::System::Nullable_1<::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::RenderStateBlock>> stateBlocks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RendererListParams, cullingResults) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RendererListParams, drawSettings) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RendererListParams, filteringSettings) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RendererListParams, tagName) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RendererListParams, isPassTagName) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RendererListParams, tagValues) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RendererListParams, stateBlocks) == 0x118, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RendererListParams, 0x130>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RendererListParams, "UnityEngine.Rendering", "RendererListParams");
