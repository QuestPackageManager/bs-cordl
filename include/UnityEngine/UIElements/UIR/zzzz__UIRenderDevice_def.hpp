#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/UIRenderDevice.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__State_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UIRenderDevice)
namespace System::Collections::Generic {
template <typename T> class LinkedList_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Exception;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class IDisposable;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace UnityEngine::UIElements::UIR {
struct Alloc;
}
namespace UnityEngine::UIElements::UIR {
class CommandList;
}
namespace UnityEngine::UIElements::UIR {
struct DrawBufferRange;
}
namespace UnityEngine::UIElements::UIR {
class DrawParams;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class LinkedPool_1;
}
namespace UnityEngine::UIElements::UIR {
class MeshHandle;
}
namespace UnityEngine::UIElements::UIR {
class Page;
}
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
namespace UnityEngine::UIElements::UIR {
class TextureSlotManager;
}
namespace UnityEngine::UIElements::UIR {
struct UIRenderDevice_AllocToFree;
}
namespace UnityEngine::UIElements::UIR {
struct UIRenderDevice_AllocToUpdate;
}
namespace UnityEngine::UIElements::UIR {
struct UIRenderDevice_DeviceToFree;
}
namespace UnityEngine::UIElements::UIR {
struct UIRenderDevice_DrawStatistics;
}
namespace UnityEngine::UIElements::UIR {
struct UIRenderDevice_EvaluationState;
}
namespace UnityEngine::UIElements::UIR {
class UIRenderDevice___c;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class Utility_GPUBuffer_1;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class UIRenderDevice;
}
namespace UnityEngine::UIElements::UIR {
class UIRenderDevice___c;
}
namespace UnityEngine::UIElements::UIR {
struct UIRenderDevice_AllocToFree;
}
namespace UnityEngine::UIElements::UIR {
struct UIRenderDevice_AllocToUpdate;
}
namespace UnityEngine::UIElements::UIR {
struct UIRenderDevice_DeviceToFree;
}
namespace UnityEngine::UIElements::UIR {
struct UIRenderDevice_DrawStatistics;
}
namespace UnityEngine::UIElements::UIR {
struct UIRenderDevice_EvaluationState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::UIRenderDevice);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::UIRenderDevice___c);
MARK_VAL_T(::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToFree);
MARK_VAL_T(::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToUpdate);
MARK_VAL_T(::UnityEngine::UIElements::UIR::UIRenderDevice_DeviceToFree);
MARK_VAL_T(::UnityEngine::UIElements::UIR::UIRenderDevice_DrawStatistics);
MARK_VAL_T(::UnityEngine::UIElements::UIR::UIRenderDevice_EvaluationState);
// Dependencies UnityEngine.UIElements.UIR.Alloc
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.UIRenderDevice/AllocToUpdate
struct CORDL_TYPE UIRenderDevice_AllocToUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIRenderDevice_AllocToUpdate();

  // Ctor Parameters [CppParam { name: "id", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "allocTime", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "meshHandle", ty: "::UnityEngine::UIElements::UIR::MeshHandle*", modifiers: "", def_value: None }, CppParam { name: "permAllocVerts", ty: "::UnityEngine::UIElements::UIR::Alloc", modifiers: "",
  // def_value: None }, CppParam { name: "permAllocIndices", ty: "::UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: None }, CppParam { name: "permPage", ty:
  // "::UnityEngine::UIElements::UIR::Page*", modifiers: "", def_value: None }, CppParam { name: "copyBackIndices", ty: "bool", modifiers: "", def_value: None }]
  constexpr UIRenderDevice_AllocToUpdate(uint32_t id, uint32_t allocTime, ::UnityEngine::UIElements::UIR::MeshHandle* meshHandle, ::UnityEngine::UIElements::UIR::Alloc permAllocVerts,
                                         ::UnityEngine::UIElements::UIR::Alloc permAllocIndices, ::UnityEngine::UIElements::UIR::Page* permPage, bool copyBackIndices) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5368 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  /// @brief Field id, offset: 0x0, size: 0x4, def value: None
  uint32_t id;

  /// @brief Field allocTime, offset: 0x4, size: 0x4, def value: None
  uint32_t allocTime;

  /// @brief Field meshHandle, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::MeshHandle* meshHandle;

  /// @brief Field permAllocVerts, offset: 0x10, size: 0x18, def value: None
  ::UnityEngine::UIElements::UIR::Alloc permAllocVerts;

  /// @brief Field permAllocIndices, offset: 0x28, size: 0x18, def value: None
  ::UnityEngine::UIElements::UIR::Alloc permAllocIndices;

  /// @brief Field permPage, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::Page* permPage;

  /// @brief Field copyBackIndices, offset: 0x48, size: 0x1, def value: None
  bool copyBackIndices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToUpdate, id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToUpdate, allocTime) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToUpdate, meshHandle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToUpdate, permAllocVerts) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToUpdate, permAllocIndices) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToUpdate, permPage) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToUpdate, copyBackIndices) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToUpdate, 0x50>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies UnityEngine.UIElements.UIR.Alloc
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.UIRenderDevice/AllocToFree
struct CORDL_TYPE UIRenderDevice_AllocToFree {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIRenderDevice_AllocToFree();

  // Ctor Parameters [CppParam { name: "alloc", ty: "::UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: None }, CppParam { name: "page", ty: "::UnityEngine::UIElements::UIR::Page*",
  // modifiers: "", def_value: None }, CppParam { name: "vertices", ty: "bool", modifiers: "", def_value: None }]
  constexpr UIRenderDevice_AllocToFree(::UnityEngine::UIElements::UIR::Alloc alloc, ::UnityEngine::UIElements::UIR::Page* page, bool vertices) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5369 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field alloc, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::UIElements::UIR::Alloc alloc;

  /// @brief Field page, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::Page* page;

  /// @brief Field vertices, offset: 0x20, size: 0x1, def value: None
  bool vertices;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToFree, alloc) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToFree, page) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToFree, vertices) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToFree, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.UIRenderDevice/DeviceToFree
struct CORDL_TYPE UIRenderDevice_DeviceToFree {
public:
  // Declarations
  /// @brief Method Dispose, addr 0x6ac6d40, size 0x180, virtual false, abstract: false, final false
  inline void Dispose();

  // Ctor Parameters []
  // @brief default ctor
  constexpr UIRenderDevice_DeviceToFree();

  // Ctor Parameters [CppParam { name: "handle", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "page", ty: "::UnityEngine::UIElements::UIR::Page*", modifiers: "", def_value: None
  // }, CppParam { name: "commandLists", ty:
  // "::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*,::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>*>",
  // modifiers: "", def_value: None }]
  constexpr UIRenderDevice_DeviceToFree(
      uint32_t handle, ::UnityEngine::UIElements::UIR::Page* page,
      ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*, ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>*>
          commandLists) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5370 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field handle, offset: 0x0, size: 0x4, def value: None
  uint32_t handle;

  /// @brief Field page, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::Page* page;

  /// @brief Field commandLists, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*, ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>*>
      commandLists;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_DeviceToFree, handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_DeviceToFree, page) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_DeviceToFree, commandLists) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::UIRenderDevice_DeviceToFree, 0x18>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies UnityEngine.UIElements.UIR.State
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.UIRenderDevice/EvaluationState
struct CORDL_TYPE UIRenderDevice_EvaluationState {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIRenderDevice_EvaluationState();

  // Ctor Parameters [CppParam { name: "activeCommandList", ty: "::UnityEngine::UIElements::UIR::CommandList*", modifiers: "", def_value: None }, CppParam { name: "constantProps", ty:
  // "::UnityEngine::MaterialPropertyBlock*", modifiers: "", def_value: None }, CppParam { name: "batchProps", ty: "::UnityEngine::MaterialPropertyBlock*", modifiers: "", def_value: None }, CppParam {
  // name: "defaultMat", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "curState", ty: "::UnityEngine::UIElements::UIR::State", modifiers: "", def_value:
  // None }, CppParam { name: "curPage", ty: "::UnityEngine::UIElements::UIR::Page*", modifiers: "", def_value: None }, CppParam { name: "mustApplyMaterial", ty: "bool", modifiers: "", def_value: None
  // }, CppParam { name: "mustApplyBatchProps", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "mustApplyStencil", ty: "bool", modifiers: "", def_value: None }]
  constexpr UIRenderDevice_EvaluationState(::UnityEngine::UIElements::UIR::CommandList* activeCommandList, ::UnityEngine::MaterialPropertyBlock* constantProps,
                                           ::UnityEngine::MaterialPropertyBlock* batchProps, ::UnityW<::UnityEngine::Material> defaultMat, ::UnityEngine::UIElements::UIR::State curState,
                                           ::UnityEngine::UIElements::UIR::Page* curPage, bool mustApplyMaterial, bool mustApplyBatchProps, bool mustApplyStencil) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5371 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field activeCommandList, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::CommandList* activeCommandList;

  /// @brief Field constantProps, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* constantProps;

  /// @brief Field batchProps, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* batchProps;

  /// @brief Field defaultMat, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> defaultMat;

  /// @brief Field curState, offset: 0x20, size: 0x18, def value: None
  ::UnityEngine::UIElements::UIR::State curState;

  /// @brief Field curPage, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::Page* curPage;

  /// @brief Field mustApplyMaterial, offset: 0x40, size: 0x1, def value: None
  bool mustApplyMaterial;

  /// @brief Field mustApplyBatchProps, offset: 0x41, size: 0x1, def value: None
  bool mustApplyBatchProps;

  /// @brief Field mustApplyStencil, offset: 0x42, size: 0x1, def value: None
  bool mustApplyStencil;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_EvaluationState, activeCommandList) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_EvaluationState, constantProps) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_EvaluationState, batchProps) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_EvaluationState, defaultMat) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_EvaluationState, curState) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_EvaluationState, curPage) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_EvaluationState, mustApplyMaterial) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_EvaluationState, mustApplyBatchProps) == 0x41, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_EvaluationState, mustApplyStencil) == 0x42, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::UIRenderDevice_EvaluationState, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.UIRenderDevice/DrawStatistics
struct CORDL_TYPE UIRenderDevice_DrawStatistics {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIRenderDevice_DrawStatistics();

  // Ctor Parameters [CppParam { name: "currentFrameIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalIndices", ty: "uint32_t", modifiers: "", def_value: None }, CppParam
  // { name: "commandCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "skippedCommandCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "drawCommandCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "disableCommandCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "materialSetCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "drawRangeCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "drawRangeCallCount",
  // ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "immediateDraws", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "stencilRefChanges", ty: "uint32_t",
  // modifiers: "", def_value: None }]
  constexpr UIRenderDevice_DrawStatistics(int32_t currentFrameIndex, uint32_t totalIndices, uint32_t commandCount, uint32_t skippedCommandCount, uint32_t drawCommandCount,
                                          uint32_t disableCommandCount, uint32_t materialSetCount, uint32_t drawRangeCount, uint32_t drawRangeCallCount, uint32_t immediateDraws,
                                          uint32_t stencilRefChanges) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5372 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2c };

  /// @brief Field currentFrameIndex, offset: 0x0, size: 0x4, def value: None
  int32_t currentFrameIndex;

  /// @brief Field totalIndices, offset: 0x4, size: 0x4, def value: None
  uint32_t totalIndices;

  /// @brief Field commandCount, offset: 0x8, size: 0x4, def value: None
  uint32_t commandCount;

  /// @brief Field skippedCommandCount, offset: 0xc, size: 0x4, def value: None
  uint32_t skippedCommandCount;

  /// @brief Field drawCommandCount, offset: 0x10, size: 0x4, def value: None
  uint32_t drawCommandCount;

  /// @brief Field disableCommandCount, offset: 0x14, size: 0x4, def value: None
  uint32_t disableCommandCount;

  /// @brief Field materialSetCount, offset: 0x18, size: 0x4, def value: None
  uint32_t materialSetCount;

  /// @brief Field drawRangeCount, offset: 0x1c, size: 0x4, def value: None
  uint32_t drawRangeCount;

  /// @brief Field drawRangeCallCount, offset: 0x20, size: 0x4, def value: None
  uint32_t drawRangeCallCount;

  /// @brief Field immediateDraws, offset: 0x24, size: 0x4, def value: None
  uint32_t immediateDraws;

  /// @brief Field stencilRefChanges, offset: 0x28, size: 0x4, def value: None
  uint32_t stencilRefChanges;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_DrawStatistics, currentFrameIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_DrawStatistics, totalIndices) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_DrawStatistics, commandCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_DrawStatistics, skippedCommandCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_DrawStatistics, drawCommandCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_DrawStatistics, disableCommandCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_DrawStatistics, materialSetCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_DrawStatistics, drawRangeCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_DrawStatistics, drawRangeCallCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_DrawStatistics, immediateDraws) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice_DrawStatistics, stencilRefChanges) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::UIRenderDevice_DrawStatistics, 0x2c>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.UIRenderDevice/<>c
class CORDL_TYPE UIRenderDevice___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::UIR::UIRenderDevice___c* __9;

  /// @brief Field <>9__58_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__58_0, put = setStaticF___9__58_0)) ::System::Func_1<::UnityEngine::UIElements::UIR::MeshHandle*>* __9__58_0;

  /// @brief Field <>9__58_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__58_1, put = setStaticF___9__58_1)) ::System::Action_1<::UnityEngine::UIElements::UIR::MeshHandle*>* __9__58_1;

  static inline ::UnityEngine::UIElements::UIR::UIRenderDevice___c* New_ctor();

  /// @brief Method <.ctor>b__58_0, addr 0x6ac6f88, size 0x78, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::MeshHandle* __ctor_b__58_0();

  /// @brief Method <.ctor>b__58_1, addr 0x6ac7000, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__58_1(::UnityEngine::UIElements::UIR::MeshHandle* mh);

  /// @brief Method .ctor, addr 0x6ac6f84, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UIR::UIRenderDevice___c* getStaticF___9();

  static inline ::System::Func_1<::UnityEngine::UIElements::UIR::MeshHandle*>* getStaticF___9__58_0();

  static inline ::System::Action_1<::UnityEngine::UIElements::UIR::MeshHandle*>* getStaticF___9__58_1();

  static inline void setStaticF___9(::UnityEngine::UIElements::UIR::UIRenderDevice___c* value);

  static inline void setStaticF___9__58_0(::System::Func_1<::UnityEngine::UIElements::UIR::MeshHandle*>* value);

  static inline void setStaticF___9__58_1(::System::Action_1<::UnityEngine::UIElements::UIR::MeshHandle*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIRenderDevice___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIRenderDevice___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIRenderDevice___c(UIRenderDevice___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIRenderDevice___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIRenderDevice___c(UIRenderDevice___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5373 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::UIRenderDevice___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies System.IntPtr, System.Object, Unity.Profiling.ProfilerMarker, UnityEngine.UIElements.UIR.UIRenderDevice::DrawStatistics
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.UIRenderDevice
class CORDL_TYPE UIRenderDevice : public ::System::Object {
public:
  // Declarations
  using AllocToFree = ::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToFree;

  using AllocToUpdate = ::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToUpdate;

  using DeviceToFree = ::UnityEngine::UIElements::UIR::UIRenderDevice_DeviceToFree;

  using DrawStatistics = ::UnityEngine::UIElements::UIR::UIRenderDevice_DrawStatistics;

  using EvaluationState = ::UnityEngine::UIElements::UIR::UIRenderDevice_EvaluationState;

  using __c = ::UnityEngine::UIElements::UIR::UIRenderDevice___c;

  /// @brief Field <breakBatches>k__BackingField, offset 0xc0, size 0x1
  __declspec(property(get = __cordl_internal_get__breakBatches_k__BackingField, put = __cordl_internal_set__breakBatches_k__BackingField)) bool _breakBatches_k__BackingField;

  /// @brief Field <disposed>k__BackingField, offset 0xc8, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  /// @brief Field <drawsInCameras>k__BackingField, offset 0xc2, size 0x1
  __declspec(property(get = __cordl_internal_get__drawsInCameras_k__BackingField, put = __cordl_internal_set__drawsInCameras_k__BackingField)) bool _drawsInCameras_k__BackingField;

  /// @brief Field <isFlat>k__BackingField, offset 0xc1, size 0x1
  __declspec(property(get = __cordl_internal_get__isFlat_k__BackingField, put = __cordl_internal_set__isFlat_k__BackingField)) bool _isFlat_k__BackingField;

  __declspec(property(get = get_breakBatches, put = set_breakBatches)) bool breakBatches;

  __declspec(property(get = get_commandLists)) ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*,
                                                        ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>*>
      commandLists;

  /// @brief Field currentFrameCommandListCount, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get_currentFrameCommandListCount, put = __cordl_internal_set_currentFrameCommandListCount)) int32_t currentFrameCommandListCount;

  __declspec(property(get = get_currentFrameCommandLists)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>* currentFrameCommandLists;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  __declspec(property(get = get_drawsInCameras, put = set_drawsInCameras)) bool drawsInCameras;

  __declspec(property(get = get_frameIndex)) uint32_t frameIndex;

  __declspec(property(get = get_fullyCreated)) bool fullyCreated;

  __declspec(property(get = get_isFlat, put = set_isFlat)) bool isFlat;

  /// @brief Field m_ActiveDeviceCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_m_ActiveDeviceCount, put = setStaticF_m_ActiveDeviceCount)) int32_t m_ActiveDeviceCount;

  /// @brief Field m_BatchProps, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BatchProps, put = __cordl_internal_set_m_BatchProps)) ::UnityEngine::MaterialPropertyBlock* m_BatchProps;

  /// @brief Field m_CommandLists, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CommandLists,
                      put = __cordl_internal_set_m_CommandLists)) ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*,
                                                                           ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>*>
      m_CommandLists;

  /// @brief Field m_ConstantProps, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ConstantProps, put = __cordl_internal_set_m_ConstantProps)) ::UnityEngine::MaterialPropertyBlock* m_ConstantProps;

  /// @brief Field m_DefaultStencilState, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultStencilState, put = __cordl_internal_set_m_DefaultStencilState)) ::System::IntPtr m_DefaultStencilState;

  /// @brief Field m_DeferredFrees, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DeferredFrees, put = __cordl_internal_set_m_DeferredFrees)) ::System::Collections::Generic::List_1<
      ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToFree>*>* m_DeferredFrees;

  /// @brief Field m_DeviceFreeQueue, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_DeviceFreeQueue,
                      put = setStaticF_m_DeviceFreeQueue)) ::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::UIRenderDevice_DeviceToFree>* m_DeviceFreeQueue;

  /// @brief Field m_DrawParams, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawParams, put = __cordl_internal_set_m_DrawParams)) ::UnityEngine::UIElements::UIR::DrawParams* m_DrawParams;

  /// @brief Field m_DrawStats, offset 0x78, size 0x2c
  __declspec(property(get = __cordl_internal_get_m_DrawStats, put = __cordl_internal_set_m_DrawStats)) ::UnityEngine::UIElements::UIR::UIRenderDevice_DrawStatistics m_DrawStats;

  /// @brief Field m_Fences, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Fences, put = __cordl_internal_set_m_Fences)) ::ArrayW<uint32_t, ::Array<uint32_t>*> m_Fences;

  /// @brief Field m_FirstPage, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FirstPage, put = __cordl_internal_set_m_FirstPage)) ::UnityEngine::UIElements::UIR::Page* m_FirstPage;

  /// @brief Field m_FrameIndex, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FrameIndex, put = __cordl_internal_set_m_FrameIndex)) uint32_t m_FrameIndex;

  /// @brief Field m_IndexToVertexCountRatio, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_IndexToVertexCountRatio, put = __cordl_internal_set_m_IndexToVertexCountRatio)) float_t m_IndexToVertexCountRatio;

  /// @brief Field m_LargeMeshVertexCount, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LargeMeshVertexCount, put = __cordl_internal_set_m_LargeMeshVertexCount)) uint32_t m_LargeMeshVertexCount;

  /// @brief Field m_MeshHandles, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MeshHandles,
                      put = __cordl_internal_set_m_MeshHandles)) ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::MeshHandle*>* m_MeshHandles;

  /// @brief Field m_MockDevice, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MockDevice, put = __cordl_internal_set_m_MockDevice)) bool m_MockDevice;

  /// @brief Field m_NextPageVertexCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NextPageVertexCount, put = __cordl_internal_set_m_NextPageVertexCount)) uint32_t m_NextPageVertexCount;

  /// @brief Field m_NextUpdateID, offset 0x74, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NextUpdateID, put = __cordl_internal_set_m_NextUpdateID)) uint32_t m_NextUpdateID;

  /// @brief Field m_SubscribedToNotifications, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_m_SubscribedToNotifications, put = setStaticF_m_SubscribedToNotifications)) bool m_SubscribedToNotifications;

  /// @brief Field m_SynchronousFree, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF_m_SynchronousFree, put = setStaticF_m_SynchronousFree)) bool m_SynchronousFree;

  /// @brief Field m_TextureSlotManager, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextureSlotManager, put = __cordl_internal_set_m_TextureSlotManager)) ::UnityEngine::UIElements::UIR::TextureSlotManager* m_TextureSlotManager;

  /// @brief Field m_Updates, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_Updates,
      put = __cordl_internal_set_m_Updates)) ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToUpdate>*>* m_Updates;

  /// @brief Field m_VertexDecl, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VertexDecl, put = __cordl_internal_set_m_VertexDecl)) ::System::IntPtr m_VertexDecl;

  /// @brief Field s_GradientSettingsTexID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_GradientSettingsTexID, put = setStaticF_s_GradientSettingsTexID)) int32_t s_GradientSettingsTexID;

  /// @brief Field s_MarkerAdvanceFrame, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MarkerAdvanceFrame, put = setStaticF_s_MarkerAdvanceFrame)) ::Unity::Profiling::ProfilerMarker s_MarkerAdvanceFrame;

  /// @brief Field s_MarkerAllocate, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MarkerAllocate, put = setStaticF_s_MarkerAllocate)) ::Unity::Profiling::ProfilerMarker s_MarkerAllocate;

  /// @brief Field s_MarkerBeforeDraw, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MarkerBeforeDraw, put = setStaticF_s_MarkerBeforeDraw)) ::Unity::Profiling::ProfilerMarker s_MarkerBeforeDraw;

  /// @brief Field s_MarkerFence, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MarkerFence, put = setStaticF_s_MarkerFence)) ::Unity::Profiling::ProfilerMarker s_MarkerFence;

  /// @brief Field s_MarkerFree, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MarkerFree, put = setStaticF_s_MarkerFree)) ::Unity::Profiling::ProfilerMarker s_MarkerFree;

  /// @brief Field s_ShaderInfoTexID, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_ShaderInfoTexID, put = setStaticF_s_ShaderInfoTexID)) int32_t s_ShaderInfoTexID;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method ActiveUpdatesForMeshHandle, addr 0x6ac46cc, size 0x88, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToUpdate>* ActiveUpdatesForMeshHandle(::UnityEngine::UIElements::UIR::MeshHandle* mesh);

  /// @brief Method AdvanceFrame, addr 0x6ac4900, size 0x8e0, virtual false, abstract: false, final false
  inline void AdvanceFrame();

  /// @brief Method Allocate, addr 0x6ac3624, size 0xcc, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::MeshHandle* Allocate(uint32_t vertexCount, uint32_t indexCount, ::ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> vertexData,
                                                              ::ByRef<::Unity::Collections::NativeSlice_1<uint16_t>> indexData, ::ByRef<uint16_t> indexOffset);

  /// @brief Method Allocate, addr 0x6ac36f0, size 0x660, virtual false, abstract: false, final false
  inline void Allocate(::UnityEngine::UIElements::UIR::MeshHandle* meshHandle, uint32_t vertexCount, uint32_t indexCount,
                       ::ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> vertexData, ::ByRef<::Unity::Collections::NativeSlice_1<uint16_t>> indexData, bool shortLived);

  /// @brief Method ApplyBatchState, addr 0x6ac5390, size 0x1cc, virtual false, abstract: false, final false
  inline void ApplyBatchState(::ByRef<::UnityEngine::UIElements::UIR::UIRenderDevice_EvaluationState> st);

  /// @brief Method ApplyDrawCommandState, addr 0x6ac51e0, size 0x1b0, virtual false, abstract: false, final false
  inline void ApplyDrawCommandState(::UnityEngine::UIElements::UIR::RenderChainCommand* cmd, int32_t textureSlot, ::UnityEngine::Material* newMat, bool newMatDiffers,
                                    ::ByRef<::UnityEngine::UIElements::UIR::UIRenderDevice_EvaluationState> st);

  /// @brief Method CompleteCreation, addr 0x6ac2eb0, size 0x260, virtual false, abstract: false, final false
  inline void CompleteCreation();

  /// @brief Method Dispose, addr 0x6ac3130, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x6ac31a0, size 0x184, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DrawRanges, addr 0x6ac65cc, size 0x1e0, virtual false, abstract: false, final false
  inline void DrawRanges(::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<uint16_t>* ib, ::UnityEngine::UIElements::UIR::Utility_GPUBuffer_1<::UnityEngine::UIElements::Vertex>* vb,
                         ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange> ranges, ::UnityEngine::UIElements::UIR::CommandList* commandList);

  /// @brief Method EvaluateChain, addr 0x6ac555c, size 0xd44, virtual false, abstract: false, final false
  inline void EvaluateChain(::UnityEngine::UIElements::UIR::RenderChainCommand* head, ::UnityEngine::Material* initialMat, ::UnityEngine::Material* defaultMat,
                            ::UnityEngine::Texture* gradientSettings, ::UnityEngine::Texture* shaderInfo, float_t pixelsPerPoint, ::ByRef<::System::Exception*> immediateException);

  /// @brief Method FlushAllPendingDeviceDisposes, addr 0x6ac6a30, size 0x98, virtual false, abstract: false, final false
  static inline void FlushAllPendingDeviceDisposes();

  /// @brief Method Free, addr 0x6abad9c, size 0x6f8, virtual false, abstract: false, final false
  inline void Free(::UnityEngine::UIElements::UIR::MeshHandle* mesh);

  /// @brief Method GatherDrawStatistics, addr 0x6ac6ac8, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::UIRenderDevice_DrawStatistics GatherDrawStatistics();

  /// @brief Method InitVertexDeclaration, addr 0x6ac2d50, size 0x160, virtual false, abstract: false, final false
  inline void InitVertexDeclaration();

  /// @brief Method KickRanges, addr 0x6ac62a0, size 0x240, virtual false, abstract: false, final false
  inline void KickRanges(::UnityEngine::UIElements::UIR::DrawBufferRange* ranges, ::ByRef<int32_t> rangesReady, ::ByRef<int32_t> rangesStart, int32_t rangesCount,
                         ::UnityEngine::UIElements::UIR::Page* curPage, ::UnityEngine::UIElements::UIR::CommandList* commandList);

  static inline ::UnityEngine::UIElements::UIR::UIRenderDevice* New_ctor(uint32_t initialVertexCapacity, uint32_t initialIndexCapacity);

  static inline ::UnityEngine::UIElements::UIR::UIRenderDevice* New_ctor(uint32_t initialVertexCapacity, uint32_t initialIndexCapacity, bool mockDevice);

  /// @brief Method OnEngineUpdateGlobal, addr 0x6ac6ae0, size 0x50, virtual false, abstract: false, final false
  static inline void OnEngineUpdateGlobal();

  /// @brief Method OnFlushPendingResources, addr 0x6ac6b30, size 0x210, virtual false, abstract: false, final false
  static inline void OnFlushPendingResources();

  /// @brief Method OnFrameRenderingBegin, addr 0x6ac4850, size 0xb0, virtual false, abstract: false, final false
  inline void OnFrameRenderingBegin();

  /// @brief Method PrepareForGfxDeviceRecreate, addr 0x6ac6968, size 0x64, virtual false, abstract: false, final false
  static inline void PrepareForGfxDeviceRecreate();

  /// @brief Method ProcessDeviceFreeQueue, addr 0x6ac3324, size 0x300, virtual false, abstract: false, final false
  static inline void ProcessDeviceFreeQueue();

  /// @brief Method PruneUnusedPages, addr 0x6ac6870, size 0xf8, virtual false, abstract: false, final false
  inline void PruneUnusedPages();

  /// @brief Method PtrToSlice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::NativeSlice_1<T> PtrToSlice(void* p, int32_t count);

  /// @brief Method TryAllocFromPage, addr 0x6ac4754, size 0xfc, virtual false, abstract: false, final false
  inline bool TryAllocFromPage(::UnityEngine::UIElements::UIR::Page* page, uint32_t vertexCount, uint32_t indexCount, ::ByRef<::UnityEngine::UIElements::UIR::Alloc> va,
                               ::ByRef<::UnityEngine::UIElements::UIR::Alloc> ia, bool shortLived);

  /// @brief Method Update, addr 0x6ac440c, size 0x1b8, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::UIElements::UIR::MeshHandle* mesh, uint32_t vertexCount, uint32_t indexCount,
                     ::ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> vertexData, ::ByRef<::Unity::Collections::NativeSlice_1<uint16_t>> indexData,
                     ::ByRef<uint16_t> indexOffset);

  /// @brief Method Update, addr 0x6abc4ec, size 0x21c, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::UIElements::UIR::MeshHandle* mesh, uint32_t vertexCount, ::ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> vertexData);

  /// @brief Method UpdateAfterGPUUsedData, addr 0x6ac3d50, size 0x6bc, virtual false, abstract: false, final false
  inline void UpdateAfterGPUUsedData(::UnityEngine::UIElements::UIR::MeshHandle* mesh, uint32_t vertexCount, uint32_t indexCount,
                                     ::ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> vertexData, ::ByRef<::Unity::Collections::NativeSlice_1<uint16_t>> indexData,
                                     ::ByRef<uint16_t> indexOffset, ::ByRef<::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToUpdate> allocToUpdate, bool copyBackIndices);

  /// @brief Method UpdateCopyBackIndices, addr 0x6ac45c4, size 0x108, virtual false, abstract: false, final false
  inline void UpdateCopyBackIndices(::UnityEngine::UIElements::UIR::MeshHandle* mesh, bool copyBackIndices);

  /// @brief Method UpdateFenceValue, addr 0x6ac64e0, size 0xec, virtual false, abstract: false, final false
  inline void UpdateFenceValue();

  /// @brief Method WaitOnCpuFence, addr 0x6ac67ac, size 0xc4, virtual false, abstract: false, final false
  inline void WaitOnCpuFence(uint32_t fence);

  /// @brief Method WrapUpGfxDeviceRecreate, addr 0x6ac69cc, size 0x64, virtual false, abstract: false, final false
  static inline void WrapUpGfxDeviceRecreate();

  constexpr bool const& __cordl_internal_get__breakBatches_k__BackingField() const;

  constexpr bool& __cordl_internal_get__breakBatches_k__BackingField();

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr bool const& __cordl_internal_get__drawsInCameras_k__BackingField() const;

  constexpr bool& __cordl_internal_get__drawsInCameras_k__BackingField();

  constexpr bool const& __cordl_internal_get__isFlat_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isFlat_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_currentFrameCommandListCount() const;

  constexpr int32_t& __cordl_internal_get_currentFrameCommandListCount();

  constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_m_BatchProps() const;

  constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_m_BatchProps();

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>*> const&
  __cordl_internal_get_m_CommandLists() const;

  constexpr ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*,
                     ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>*>&
  __cordl_internal_get_m_CommandLists();

  constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_m_ConstantProps() const;

  constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_m_ConstantProps();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_DefaultStencilState() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_DefaultStencilState();

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToFree>*>* const&
  __cordl_internal_get_m_DeferredFrees() const;

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToFree>*>*& __cordl_internal_get_m_DeferredFrees();

  constexpr ::UnityEngine::UIElements::UIR::DrawParams* const& __cordl_internal_get_m_DrawParams() const;

  constexpr ::UnityEngine::UIElements::UIR::DrawParams*& __cordl_internal_get_m_DrawParams();

  constexpr ::UnityEngine::UIElements::UIR::UIRenderDevice_DrawStatistics const& __cordl_internal_get_m_DrawStats() const;

  constexpr ::UnityEngine::UIElements::UIR::UIRenderDevice_DrawStatistics& __cordl_internal_get_m_DrawStats();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_m_Fences() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_m_Fences();

  constexpr ::UnityEngine::UIElements::UIR::Page* const& __cordl_internal_get_m_FirstPage() const;

  constexpr ::UnityEngine::UIElements::UIR::Page*& __cordl_internal_get_m_FirstPage();

  constexpr uint32_t const& __cordl_internal_get_m_FrameIndex() const;

  constexpr uint32_t& __cordl_internal_get_m_FrameIndex();

  constexpr float_t const& __cordl_internal_get_m_IndexToVertexCountRatio() const;

  constexpr float_t& __cordl_internal_get_m_IndexToVertexCountRatio();

  constexpr uint32_t const& __cordl_internal_get_m_LargeMeshVertexCount() const;

  constexpr uint32_t& __cordl_internal_get_m_LargeMeshVertexCount();

  constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::MeshHandle*>* const& __cordl_internal_get_m_MeshHandles() const;

  constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::MeshHandle*>*& __cordl_internal_get_m_MeshHandles();

  constexpr bool const& __cordl_internal_get_m_MockDevice() const;

  constexpr bool& __cordl_internal_get_m_MockDevice();

  constexpr uint32_t const& __cordl_internal_get_m_NextPageVertexCount() const;

  constexpr uint32_t& __cordl_internal_get_m_NextPageVertexCount();

  constexpr uint32_t const& __cordl_internal_get_m_NextUpdateID() const;

  constexpr uint32_t& __cordl_internal_get_m_NextUpdateID();

  constexpr ::UnityEngine::UIElements::UIR::TextureSlotManager* const& __cordl_internal_get_m_TextureSlotManager() const;

  constexpr ::UnityEngine::UIElements::UIR::TextureSlotManager*& __cordl_internal_get_m_TextureSlotManager();

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToUpdate>*>* const&
  __cordl_internal_get_m_Updates() const;

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToUpdate>*>*& __cordl_internal_get_m_Updates();

  constexpr ::System::IntPtr const& __cordl_internal_get_m_VertexDecl() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_VertexDecl();

  constexpr void __cordl_internal_set__breakBatches_k__BackingField(bool value);

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set__drawsInCameras_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isFlat_k__BackingField(bool value);

  constexpr void __cordl_internal_set_currentFrameCommandListCount(int32_t value);

  constexpr void __cordl_internal_set_m_BatchProps(::UnityEngine::MaterialPropertyBlock* value);

  constexpr void __cordl_internal_set_m_CommandLists(
      ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*, ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>*>
          value);

  constexpr void __cordl_internal_set_m_ConstantProps(::UnityEngine::MaterialPropertyBlock* value);

  constexpr void __cordl_internal_set_m_DefaultStencilState(::System::IntPtr value);

  constexpr void
  __cordl_internal_set_m_DeferredFrees(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToFree>*>* value);

  constexpr void __cordl_internal_set_m_DrawParams(::UnityEngine::UIElements::UIR::DrawParams* value);

  constexpr void __cordl_internal_set_m_DrawStats(::UnityEngine::UIElements::UIR::UIRenderDevice_DrawStatistics value);

  constexpr void __cordl_internal_set_m_Fences(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_m_FirstPage(::UnityEngine::UIElements::UIR::Page* value);

  constexpr void __cordl_internal_set_m_FrameIndex(uint32_t value);

  constexpr void __cordl_internal_set_m_IndexToVertexCountRatio(float_t value);

  constexpr void __cordl_internal_set_m_LargeMeshVertexCount(uint32_t value);

  constexpr void __cordl_internal_set_m_MeshHandles(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::MeshHandle*>* value);

  constexpr void __cordl_internal_set_m_MockDevice(bool value);

  constexpr void __cordl_internal_set_m_NextPageVertexCount(uint32_t value);

  constexpr void __cordl_internal_set_m_NextUpdateID(uint32_t value);

  constexpr void __cordl_internal_set_m_TextureSlotManager(::UnityEngine::UIElements::UIR::TextureSlotManager* value);

  constexpr void __cordl_internal_set_m_Updates(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToUpdate>*>* value);

  constexpr void __cordl_internal_set_m_VertexDecl(::System::IntPtr value);

  /// @brief Method .ctor, addr 0x6ac2764, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint32_t initialVertexCapacity, uint32_t initialIndexCapacity);

  /// @brief Method .ctor, addr 0x6ac276c, size 0x5e4, virtual false, abstract: false, final false
  inline void _ctor(uint32_t initialVertexCapacity, uint32_t initialIndexCapacity, bool mockDevice);

  static inline int32_t getStaticF_m_ActiveDeviceCount();

  static inline ::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::UIRenderDevice_DeviceToFree>* getStaticF_m_DeviceFreeQueue();

  static inline bool getStaticF_m_SubscribedToNotifications();

  static inline bool getStaticF_m_SynchronousFree();

  static inline int32_t getStaticF_s_GradientSettingsTexID();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerAdvanceFrame();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerAllocate();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerBeforeDraw();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerFence();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerFree();

  static inline int32_t getStaticF_s_ShaderInfoTexID();

  /// @brief Method get_breakBatches, addr 0x6ac23f4, size 0x8, virtual false, abstract: false, final false
  inline bool get_breakBatches();

  /// @brief Method get_commandLists, addr 0x6ac242c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*,
                  ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>*>
  get_commandLists();

  /// @brief Method get_currentFrameCommandLists, addr 0x6ac2434, size 0x40, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>* get_currentFrameCommandLists();

  /// @brief Method get_disposed, addr 0x6ac3120, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Method get_drawsInCameras, addr 0x6ac2414, size 0x8, virtual false, abstract: false, final false
  inline bool get_drawsInCameras();

  /// @brief Method get_frameIndex, addr 0x6ac2424, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_frameIndex();

  /// @brief Method get_fullyCreated, addr 0x6ac3110, size 0x10, virtual false, abstract: false, final false
  inline bool get_fullyCreated();

  /// @brief Method get_isFlat, addr 0x6ac2404, size 0x8, virtual false, abstract: false, final false
  inline bool get_isFlat();

  /// @brief Method get_maxVerticesPerPage, addr 0x6abd6b0, size 0x8, virtual false, abstract: false, final false
  static inline uint32_t get_maxVerticesPerPage();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_m_ActiveDeviceCount(int32_t value);

  static inline void setStaticF_m_DeviceFreeQueue(::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::UIRenderDevice_DeviceToFree>* value);

  static inline void setStaticF_m_SubscribedToNotifications(bool value);

  static inline void setStaticF_m_SynchronousFree(bool value);

  static inline void setStaticF_s_GradientSettingsTexID(int32_t value);

  static inline void setStaticF_s_MarkerAdvanceFrame(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_MarkerAllocate(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_MarkerBeforeDraw(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_MarkerFence(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_MarkerFree(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_ShaderInfoTexID(int32_t value);

  /// @brief Method set_breakBatches, addr 0x6ac23fc, size 0x8, virtual false, abstract: false, final false
  inline void set_breakBatches(bool value);

  /// @brief Method set_disposed, addr 0x6ac3128, size 0x8, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

  /// @brief Method set_drawsInCameras, addr 0x6ac241c, size 0x8, virtual false, abstract: false, final false
  inline void set_drawsInCameras(bool value);

  /// @brief Method set_isFlat, addr 0x6ac240c, size 0x8, virtual false, abstract: false, final false
  inline void set_isFlat(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UIRenderDevice();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UIRenderDevice", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UIRenderDevice(UIRenderDevice&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UIRenderDevice", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UIRenderDevice(UIRenderDevice const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5374 };

  /// @brief Field m_MockDevice, offset: 0x10, size: 0x1, def value: None
  bool ___m_MockDevice;

  /// @brief Field m_DefaultStencilState, offset: 0x18, size: 0x8, def value: None
  ::System::IntPtr ___m_DefaultStencilState;

  /// @brief Field m_VertexDecl, offset: 0x20, size: 0x8, def value: None
  ::System::IntPtr ___m_VertexDecl;

  /// @brief Field m_FirstPage, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::Page* ___m_FirstPage;

  /// @brief Field m_NextPageVertexCount, offset: 0x30, size: 0x4, def value: None
  uint32_t ___m_NextPageVertexCount;

  /// @brief Field m_LargeMeshVertexCount, offset: 0x34, size: 0x4, def value: None
  uint32_t ___m_LargeMeshVertexCount;

  /// @brief Field m_IndexToVertexCountRatio, offset: 0x38, size: 0x4, def value: None
  float_t ___m_IndexToVertexCountRatio;

  /// @brief Field m_DeferredFrees, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToFree>*>* ___m_DeferredFrees;

  /// @brief Field m_Updates, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToUpdate>*>* ___m_Updates;

  /// @brief Field m_CommandLists, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*, ::Array<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::CommandList*>*>*>
      ___m_CommandLists;

  /// @brief Field m_Fences, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___m_Fences;

  /// @brief Field m_ConstantProps, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ___m_ConstantProps;

  /// @brief Field m_BatchProps, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ___m_BatchProps;

  /// @brief Field m_FrameIndex, offset: 0x70, size: 0x4, def value: None
  uint32_t ___m_FrameIndex;

  /// @brief Field m_NextUpdateID, offset: 0x74, size: 0x4, def value: None
  uint32_t ___m_NextUpdateID;

  /// @brief Field m_DrawStats, offset: 0x78, size: 0x2c, def value: None
  ::UnityEngine::UIElements::UIR::UIRenderDevice_DrawStatistics ___m_DrawStats;

  /// @brief Field m_MeshHandles, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::MeshHandle*>* ___m_MeshHandles;

  /// @brief Field m_DrawParams, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::DrawParams* ___m_DrawParams;

  /// @brief Field m_TextureSlotManager, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::TextureSlotManager* ___m_TextureSlotManager;

  /// @brief Field <breakBatches>k__BackingField, offset: 0xc0, size: 0x1, def value: None
  bool ____breakBatches_k__BackingField;

  /// @brief Field <isFlat>k__BackingField, offset: 0xc1, size: 0x1, def value: None
  bool ____isFlat_k__BackingField;

  /// @brief Field <drawsInCameras>k__BackingField, offset: 0xc2, size: 0x1, def value: None
  bool ____drawsInCameras_k__BackingField;

  /// @brief Field currentFrameCommandListCount, offset: 0xc4, size: 0x4, def value: None
  int32_t ___currentFrameCommandListCount;

  /// @brief Field <disposed>k__BackingField, offset: 0xc8, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_MockDevice) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_DefaultStencilState) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_VertexDecl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_FirstPage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_NextPageVertexCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_LargeMeshVertexCount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_IndexToVertexCountRatio) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_DeferredFrees) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_Updates) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_CommandLists) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_Fences) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_ConstantProps) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_BatchProps) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_FrameIndex) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_NextUpdateID) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_DrawStats) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_MeshHandles) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_DrawParams) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_TextureSlotManager) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ____breakBatches_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ____isFlat_k__BackingField) == 0xc1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ____drawsInCameras_k__BackingField) == 0xc2, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___currentFrameCommandListCount) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ____disposed_k__BackingField) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::UIRenderDevice, 0xd0>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::UIRenderDevice);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::UIRenderDevice*, "UnityEngine.UIElements.UIR", "UIRenderDevice");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::UIRenderDevice___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::UIRenderDevice___c*, "UnityEngine.UIElements.UIR", "UIRenderDevice/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToFree, "UnityEngine.UIElements.UIR", "UIRenderDevice/AllocToFree");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::UIRenderDevice_AllocToUpdate, "UnityEngine.UIElements.UIR", "UIRenderDevice/AllocToUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::UIRenderDevice_DeviceToFree, "UnityEngine.UIElements.UIR", "UIRenderDevice/DeviceToFree");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::UIRenderDevice_DrawStatistics, "UnityEngine.UIElements.UIR", "UIRenderDevice/DrawStatistics");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::UIRenderDevice_EvaluationState, "UnityEngine.UIElements.UIR", "UIRenderDevice/EvaluationState");
