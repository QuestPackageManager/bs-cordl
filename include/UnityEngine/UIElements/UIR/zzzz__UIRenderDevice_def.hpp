#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/UIRenderDevice.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Alloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__State_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRenderDevice_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
struct State;
}
namespace UnityEngine::UIElements::UIR {
class TextureSlotManager;
}
namespace UnityEngine::UIElements::UIR {
struct Transform3x4;
}
namespace UnityEngine::UIElements::UIR {
struct __UIRenderDevice__AllocToFree;
}
namespace UnityEngine::UIElements::UIR {
struct __UIRenderDevice__AllocToUpdate;
}
namespace UnityEngine::UIElements::UIR {
struct __UIRenderDevice__DeviceToFree;
}
namespace UnityEngine::UIElements::UIR {
struct __UIRenderDevice__DrawStatistics;
}
namespace UnityEngine::UIElements::UIR {
struct __UIRenderDevice__EvaluationState;
}
namespace UnityEngine::UIElements::UIR {
class __UIRenderDevice____c;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class __Utility__GPUBuffer_1;
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
class Texture2D;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class UIRenderDevice;
}
namespace UnityEngine::UIElements::UIR {
class __UIRenderDevice____c;
}
namespace UnityEngine::UIElements::UIR {
struct __UIRenderDevice__AllocToFree;
}
namespace UnityEngine::UIElements::UIR {
struct __UIRenderDevice__AllocToUpdate;
}
namespace UnityEngine::UIElements::UIR {
struct __UIRenderDevice__DeviceToFree;
}
namespace UnityEngine::UIElements::UIR {
struct __UIRenderDevice__DrawStatistics;
}
namespace UnityEngine::UIElements::UIR {
struct __UIRenderDevice__EvaluationState;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::UIRenderDevice);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::__UIRenderDevice____c);
MARK_VAL_T(::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree);
MARK_VAL_T(::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate);
MARK_VAL_T(::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree);
MARK_VAL_T(::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics);
MARK_VAL_T(::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState);
// Type: ::AllocToUpdate
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 89, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: ::UIRenderDevice::AllocToUpdate
struct CORDL_TYPE __UIRenderDevice__AllocToUpdate {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UIRenderDevice__AllocToUpdate();

  // Ctor Parameters [CppParam { name: "id", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "allocTime", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "meshHandle", ty: "::UnityEngine::UIElements::UIR::MeshHandle*", modifiers: "", def_value: None }, CppParam { name: "permAllocVerts", ty: "::UnityEngine::UIElements::UIR::Alloc", modifiers: "",
  // def_value: None }, CppParam { name: "permAllocIndices", ty: "::UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: None }, CppParam { name: "permPage", ty:
  // "::UnityEngine::UIElements::UIR::Page*", modifiers: "", def_value: None }, CppParam { name: "copyBackIndices", ty: "bool", modifiers: "", def_value: None }]
  constexpr __UIRenderDevice__AllocToUpdate(uint32_t id, uint32_t allocTime, ::UnityEngine::UIElements::UIR::MeshHandle* meshHandle, ::UnityEngine::UIElements::UIR::Alloc permAllocVerts,
                                            ::UnityEngine::UIElements::UIR::Alloc permAllocIndices, ::UnityEngine::UIElements::UIR::Page* permPage, bool copyBackIndices) noexcept;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x50 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate, 0x50>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate, id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate, allocTime) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate, meshHandle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate, permAllocVerts) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate, permAllocIndices) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate, permPage) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate, copyBackIndices) == 0x48, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: ::AllocToFree
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 49, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: ::UIRenderDevice::AllocToFree
struct CORDL_TYPE __UIRenderDevice__AllocToFree {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UIRenderDevice__AllocToFree();

  // Ctor Parameters [CppParam { name: "alloc", ty: "::UnityEngine::UIElements::UIR::Alloc", modifiers: "", def_value: None }, CppParam { name: "page", ty: "::UnityEngine::UIElements::UIR::Page*",
  // modifiers: "", def_value: None }, CppParam { name: "vertices", ty: "bool", modifiers: "", def_value: None }]
  constexpr __UIRenderDevice__AllocToFree(::UnityEngine::UIElements::UIR::Alloc alloc, ::UnityEngine::UIElements::UIR::Page* page, bool vertices) noexcept;

  /// @brief Field alloc, offset: 0x0, size: 0x18, def value: None
  ::UnityEngine::UIElements::UIR::Alloc alloc;

  /// @brief Field page, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::Page* page;

  /// @brief Field vertices, offset: 0x20, size: 0x1, def value: None
  bool vertices;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree, 0x28>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree, alloc) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree, page) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree, vertices) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: ::DeviceToFree
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: ::UIRenderDevice::DeviceToFree
struct CORDL_TYPE __UIRenderDevice__DeviceToFree {
public:
  // Declarations
  /// @brief Method Dispose, addr 0x3524578, size 0x2c, virtual false, abstract: false, final false
  inline void Dispose();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __UIRenderDevice__DeviceToFree();

  // Ctor Parameters [CppParam { name: "handle", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "page", ty: "::UnityEngine::UIElements::UIR::Page*", modifiers: "", def_value: None
  // }]
  constexpr __UIRenderDevice__DeviceToFree(uint32_t handle, ::UnityEngine::UIElements::UIR::Page* page) noexcept;

  /// @brief Field handle, offset: 0x0, size: 0x4, def value: None
  uint32_t handle;

  /// @brief Field page, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::Page* page;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree, 0x10>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree, handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree, page) == 0x8, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: ::EvaluationState
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 76, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: ::UIRenderDevice::EvaluationState
struct CORDL_TYPE __UIRenderDevice__EvaluationState {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UIRenderDevice__EvaluationState();

  // Ctor Parameters [CppParam { name: "stateMatProps", ty: "::UnityEngine::MaterialPropertyBlock*", modifiers: "", def_value: None }, CppParam { name: "defaultMat", ty:
  // "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "curState", ty: "::UnityEngine::UIElements::UIR::State", modifiers: "", def_value: None }, CppParam { name:
  // "curPage", ty: "::UnityEngine::UIElements::UIR::Page*", modifiers: "", def_value: None }, CppParam { name: "mustApplyMaterial", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "mustApplyCommonBlock", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "mustApplyStateBlock", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "mustApplyStencil",
  // ty: "bool", modifiers: "", def_value: None }]
  constexpr __UIRenderDevice__EvaluationState(::UnityEngine::MaterialPropertyBlock* stateMatProps, ::UnityW<::UnityEngine::Material> defaultMat, ::UnityEngine::UIElements::UIR::State curState,
                                              ::UnityEngine::UIElements::UIR::Page* curPage, bool mustApplyMaterial, bool mustApplyCommonBlock, bool mustApplyStateBlock,
                                              bool mustApplyStencil) noexcept;

  /// @brief Field stateMatProps, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* stateMatProps;

  /// @brief Field defaultMat, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> defaultMat;

  /// @brief Field curState, offset: 0x10, size: 0x20, def value: None
  ::UnityEngine::UIElements::UIR::State curState;

  /// @brief Field curPage, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::Page* curPage;

  /// @brief Field mustApplyMaterial, offset: 0x38, size: 0x1, def value: None
  bool mustApplyMaterial;

  /// @brief Field mustApplyCommonBlock, offset: 0x39, size: 0x1, def value: None
  bool mustApplyCommonBlock;

  /// @brief Field mustApplyStateBlock, offset: 0x3a, size: 0x1, def value: None
  bool mustApplyStateBlock;

  /// @brief Field mustApplyStencil, offset: 0x3b, size: 0x1, def value: None
  bool mustApplyStencil;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState, 0x40>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState, stateMatProps) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState, defaultMat) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState, curState) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState, curPage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState, mustApplyMaterial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState, mustApplyCommonBlock) == 0x39, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState, mustApplyStateBlock) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState, mustApplyStencil) == 0x3b, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: ::DrawStatistics
// SizeInfo { instance_size: 36, native_size: 36, calculated_instance_size: 36, calculated_native_size: 52, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: ::UIRenderDevice::DrawStatistics
struct CORDL_TYPE __UIRenderDevice__DrawStatistics {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UIRenderDevice__DrawStatistics();

  // Ctor Parameters [CppParam { name: "currentFrameIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "totalIndices", ty: "uint32_t", modifiers: "", def_value: None }, CppParam
  // { name: "commandCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "drawCommandCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "materialSetCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "drawRangeCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "drawRangeCallCount",
  // ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "immediateDraws", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "stencilRefChanges", ty: "uint32_t",
  // modifiers: "", def_value: None }]
  constexpr __UIRenderDevice__DrawStatistics(int32_t currentFrameIndex, uint32_t totalIndices, uint32_t commandCount, uint32_t drawCommandCount, uint32_t materialSetCount, uint32_t drawRangeCount,
                                             uint32_t drawRangeCallCount, uint32_t immediateDraws, uint32_t stencilRefChanges) noexcept;

  /// @brief Field currentFrameIndex, offset: 0x0, size: 0x4, def value: None
  int32_t currentFrameIndex;

  /// @brief Field totalIndices, offset: 0x4, size: 0x4, def value: None
  uint32_t totalIndices;

  /// @brief Field commandCount, offset: 0x8, size: 0x4, def value: None
  uint32_t commandCount;

  /// @brief Field drawCommandCount, offset: 0xc, size: 0x4, def value: None
  uint32_t drawCommandCount;

  /// @brief Field materialSetCount, offset: 0x10, size: 0x4, def value: None
  uint32_t materialSetCount;

  /// @brief Field drawRangeCount, offset: 0x14, size: 0x4, def value: None
  uint32_t drawRangeCount;

  /// @brief Field drawRangeCallCount, offset: 0x18, size: 0x4, def value: None
  uint32_t drawRangeCallCount;

  /// @brief Field immediateDraws, offset: 0x1c, size: 0x4, def value: None
  uint32_t immediateDraws;

  /// @brief Field stencilRefChanges, offset: 0x20, size: 0x4, def value: None
  uint32_t stencilRefChanges;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics, 0x24>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics, currentFrameIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics, totalIndices) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics, commandCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics, drawCommandCount) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics, materialSetCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics, drawRangeCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics, drawRangeCallCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics, immediateDraws) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics, stencilRefChanges) == 0x20, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: ::UIRenderDevice::<>c*
class CORDL_TYPE __UIRenderDevice____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::UnityEngine::UIElements::UIR::__UIRenderDevice____c* __9;

  /// @brief Field <>9__53_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__53_0, put = setStaticF___9__53_0))::System::Func_1<::UnityEngine::UIElements::UIR::MeshHandle*>* __9__53_0;

  /// @brief Field <>9__53_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__53_1, put = setStaticF___9__53_1))::System::Action_1<::UnityEngine::UIElements::UIR::MeshHandle*>* __9__53_1;

  static inline ::UnityEngine::UIElements::UIR::__UIRenderDevice____c* New_ctor();

  /// @brief Method <.ctor>b__53_0, addr 0x3529d04, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::MeshHandle* __ctor_b__53_0();

  /// @brief Method <.ctor>b__53_1, addr 0x3529d5c, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__53_1(::UnityEngine::UIElements::UIR::MeshHandle* mh);

  /// @brief Method .ctor, addr 0x3529cfc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UIR::__UIRenderDevice____c* getStaticF___9();

  static inline ::System::Func_1<::UnityEngine::UIElements::UIR::MeshHandle*>* getStaticF___9__53_0();

  static inline ::System::Action_1<::UnityEngine::UIElements::UIR::MeshHandle*>* getStaticF___9__53_1();

  static inline void setStaticF___9(::UnityEngine::UIElements::UIR::__UIRenderDevice____c* value);

  static inline void setStaticF___9__53_0(::System::Func_1<::UnityEngine::UIElements::UIR::MeshHandle*>* value);

  static inline void setStaticF___9__53_1(::System::Action_1<::UnityEngine::UIElements::UIR::MeshHandle*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __UIRenderDevice____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__UIRenderDevice____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __UIRenderDevice____c(__UIRenderDevice____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__UIRenderDevice____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __UIRenderDevice____c(__UIRenderDevice____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::__UIRenderDevice____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Type: UnityEngine.UIElements.UIR::UIRenderDevice
// SizeInfo { instance_size: 176, native_size: -1, calculated_instance_size: 176, calculated_native_size: 174, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.UIR::UIRenderDevice*
class CORDL_TYPE UIRenderDevice : public ::System::Object {
public:
  // Declarations
  using AllocToFree = ::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree;

  using AllocToUpdate = ::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate;

  using DeviceToFree = ::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree;

  using DrawStatistics = ::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics;

  using EvaluationState = ::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState;

  using __c = ::UnityEngine::UIElements::UIR::__UIRenderDevice____c;

  /// @brief Field <breakBatches>k__BackingField, offset 0xac, size 0x1
  __declspec(property(get = __cordl_internal_get__breakBatches_k__BackingField, put = __cordl_internal_set__breakBatches_k__BackingField)) bool _breakBatches_k__BackingField;

  /// @brief Field <disposed>k__BackingField, offset 0xad, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  /// @brief Field <maxVerticesPerPage>k__BackingField, offset 0xa8, size 0x4
  __declspec(property(get = __cordl_internal_get__maxVerticesPerPage_k__BackingField, put = __cordl_internal_set__maxVerticesPerPage_k__BackingField)) uint32_t _maxVerticesPerPage_k__BackingField;

  __declspec(property(get = get_breakBatches, put = set_breakBatches)) bool breakBatches;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  __declspec(property(get = get_fullyCreated)) bool fullyCreated;

  /// @brief Field m_ActiveDeviceCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_m_ActiveDeviceCount, put = setStaticF_m_ActiveDeviceCount)) int32_t m_ActiveDeviceCount;

  /// @brief Field m_DefaultStencilState, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultStencilState, put = __cordl_internal_set_m_DefaultStencilState)) void* m_DefaultStencilState;

  /// @brief Field m_DeferredFrees, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DeferredFrees, put = __cordl_internal_set_m_DeferredFrees))::System::Collections::Generic::List_1<
      ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree>*>* m_DeferredFrees;

  /// @brief Field m_DeviceFreeQueue, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_m_DeviceFreeQueue,
                             put = setStaticF_m_DeviceFreeQueue))::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* m_DeviceFreeQueue;

  /// @brief Field m_DrawParams, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrawParams, put = __cordl_internal_set_m_DrawParams))::UnityEngine::UIElements::UIR::DrawParams* m_DrawParams;

  /// @brief Field m_DrawStats, offset 0x68, size 0x24
  __declspec(property(get = __cordl_internal_get_m_DrawStats, put = __cordl_internal_set_m_DrawStats))::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics m_DrawStats;

  /// @brief Field m_Fences, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Fences, put = __cordl_internal_set_m_Fences))::ArrayW<uint32_t, ::Array<uint32_t>*> m_Fences;

  /// @brief Field m_FirstPage, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FirstPage, put = __cordl_internal_set_m_FirstPage))::UnityEngine::UIElements::UIR::Page* m_FirstPage;

  /// @brief Field m_FrameIndex, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FrameIndex, put = __cordl_internal_set_m_FrameIndex)) uint32_t m_FrameIndex;

  /// @brief Field m_IndexToVertexCountRatio, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_IndexToVertexCountRatio, put = __cordl_internal_set_m_IndexToVertexCountRatio)) float_t m_IndexToVertexCountRatio;

  /// @brief Field m_LargeMeshVertexCount, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_LargeMeshVertexCount, put = __cordl_internal_set_m_LargeMeshVertexCount)) uint32_t m_LargeMeshVertexCount;

  /// @brief Field m_MeshHandles, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MeshHandles,
                      put = __cordl_internal_set_m_MeshHandles))::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::MeshHandle*>* m_MeshHandles;

  /// @brief Field m_MockDevice, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MockDevice, put = __cordl_internal_set_m_MockDevice)) bool m_MockDevice;

  /// @brief Field m_NextPageVertexCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NextPageVertexCount, put = __cordl_internal_set_m_NextPageVertexCount)) uint32_t m_NextPageVertexCount;

  /// @brief Field m_NextUpdateID, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NextUpdateID, put = __cordl_internal_set_m_NextUpdateID)) uint32_t m_NextUpdateID;

  /// @brief Field m_StandardMatProps, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StandardMatProps, put = __cordl_internal_set_m_StandardMatProps))::UnityEngine::MaterialPropertyBlock* m_StandardMatProps;

  /// @brief Field m_SubscribedToNotifications, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_m_SubscribedToNotifications, put = setStaticF_m_SubscribedToNotifications)) bool m_SubscribedToNotifications;

  /// @brief Field m_SynchronousFree, offset 0xffffffff, size 0x1
  static __declspec(property(get = getStaticF_m_SynchronousFree, put = setStaticF_m_SynchronousFree)) bool m_SynchronousFree;

  /// @brief Field m_TextureSlotManager, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextureSlotManager, put = __cordl_internal_set_m_TextureSlotManager))::UnityEngine::UIElements::UIR::TextureSlotManager* m_TextureSlotManager;

  /// @brief Field m_Updates, offset 0x48, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_Updates,
      put = __cordl_internal_set_m_Updates))::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate>*>* m_Updates;

  /// @brief Field m_VertexDecl, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VertexDecl, put = __cordl_internal_set_m_VertexDecl)) void* m_VertexDecl;

  __declspec(property(get = get_maxVerticesPerPage)) uint32_t maxVerticesPerPage;

  /// @brief Field s_ClipRectsPropID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ClipRectsPropID, put = setStaticF_s_ClipRectsPropID)) int32_t s_ClipRectsPropID;

  /// @brief Field s_ClipSpaceParamsID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ClipSpaceParamsID, put = setStaticF_s_ClipSpaceParamsID)) int32_t s_ClipSpaceParamsID;

  /// @brief Field s_DefaultShaderInfoTexARGB8, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultShaderInfoTexARGB8, put = setStaticF_s_DefaultShaderInfoTexARGB8))::UnityW<::UnityEngine::Texture2D> s_DefaultShaderInfoTexARGB8;

  /// @brief Field s_DefaultShaderInfoTexFloat, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_DefaultShaderInfoTexFloat, put = setStaticF_s_DefaultShaderInfoTexFloat))::UnityW<::UnityEngine::Texture2D> s_DefaultShaderInfoTexFloat;

  /// @brief Field s_FontTexPropID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_FontTexPropID, put = setStaticF_s_FontTexPropID)) int32_t s_FontTexPropID;

  /// @brief Field s_FontTexSDFScaleID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_FontTexSDFScaleID, put = setStaticF_s_FontTexSDFScaleID)) int32_t s_FontTexSDFScaleID;

  /// @brief Field s_GradientSettingsTexID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_GradientSettingsTexID, put = setStaticF_s_GradientSettingsTexID)) int32_t s_GradientSettingsTexID;

  /// @brief Field s_MarkerAdvanceFrame, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerAdvanceFrame, put = setStaticF_s_MarkerAdvanceFrame))::Unity::Profiling::ProfilerMarker s_MarkerAdvanceFrame;

  /// @brief Field s_MarkerAllocate, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerAllocate, put = setStaticF_s_MarkerAllocate))::Unity::Profiling::ProfilerMarker s_MarkerAllocate;

  /// @brief Field s_MarkerBeforeDraw, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerBeforeDraw, put = setStaticF_s_MarkerBeforeDraw))::Unity::Profiling::ProfilerMarker s_MarkerBeforeDraw;

  /// @brief Field s_MarkerFence, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerFence, put = setStaticF_s_MarkerFence))::Unity::Profiling::ProfilerMarker s_MarkerFence;

  /// @brief Field s_MarkerFree, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_MarkerFree, put = setStaticF_s_MarkerFree))::Unity::Profiling::ProfilerMarker s_MarkerFree;

  /// @brief Field s_ShaderInfoTexID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_ShaderInfoTexID, put = setStaticF_s_ShaderInfoTexID)) int32_t s_ShaderInfoTexID;

  /// @brief Field s_ShaderModelIs35, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_s_ShaderModelIs35, put = setStaticF_s_ShaderModelIs35))::System::Nullable_1<bool> s_ShaderModelIs35;

  /// @brief Field s_TransformsPropID, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_TransformsPropID, put = setStaticF_s_TransformsPropID)) int32_t s_TransformsPropID;

  /// @brief Field s_VertexTexturingIsAvailable, offset 0xffffffff, size 0x2
  static __declspec(property(get = getStaticF_s_VertexTexturingIsAvailable, put = setStaticF_s_VertexTexturingIsAvailable))::System::Nullable_1<bool> s_VertexTexturingIsAvailable;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AdvanceFrame, addr 0x3526898, size 0x9b4, virtual false, abstract: false, final false
  inline void AdvanceFrame();

  /// @brief Method Allocate, addr 0x3524940, size 0xc0, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::MeshHandle* Allocate(uint32_t vertexCount, uint32_t indexCount, ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> vertexData,
                                                              ByRef<::Unity::Collections::NativeSlice_1<uint16_t>> indexData, ByRef<uint16_t> indexOffset);

  /// @brief Method Allocate, addr 0x3524a00, size 0x634, virtual false, abstract: false, final false
  inline void Allocate(::UnityEngine::UIElements::UIR::MeshHandle* meshHandle, uint32_t vertexCount, uint32_t indexCount,
                       ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> vertexData, ByRef<::Unity::Collections::NativeSlice_1<uint16_t>> indexData, bool shortLived);

  /// @brief Method ApplyBatchState, addr 0x3527470, size 0x184, virtual false, abstract: false, final false
  inline void ApplyBatchState(ByRef<::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState> st, bool allowMaterialChange);

  /// @brief Method ApplyDrawCommandState, addr 0x352724c, size 0x224, virtual false, abstract: false, final false
  inline void ApplyDrawCommandState(::UnityEngine::UIElements::UIR::RenderChainCommand* cmd, int32_t textureSlot, ::UnityEngine::Material* newMat, bool newMatDiffers, bool newFontDiffers,
                                    ByRef<::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState> st);

  /// @brief Method CompleteCreation, addr 0x35241f8, size 0x1a4, virtual false, abstract: false, final false
  inline void CompleteCreation();

  /// @brief Method Dispose, addr 0x35243c0, size 0x6c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x352442c, size 0x14c, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DrawRanges, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename I, typename T>
  inline void DrawRanges(::UnityEngine::UIElements::UIR::__Utility__GPUBuffer_1<I>* ib, ::UnityEngine::UIElements::UIR::__Utility__GPUBuffer_1<T>* vb,
                         ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::DrawBufferRange> ranges);

  /// @brief Method EvaluateChain, addr 0x35275f4, size 0x1118, virtual false, abstract: false, final false
  inline void EvaluateChain(::UnityEngine::UIElements::UIR::RenderChainCommand* head, ::UnityEngine::Material* initialMat, ::UnityEngine::Material* defaultMat,
                            ::UnityEngine::Texture* gradientSettings, ::UnityEngine::Texture* shaderInfo, float_t pixelsPerPoint,
                            ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4> transforms, ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4> clipRects,
                            ::UnityEngine::MaterialPropertyBlock* stateMatProps, bool allowMaterialChange, ByRef<::System::Exception*> immediateException);

  /// @brief Method FlushAllPendingDeviceDisposes, addr 0x3529b60, size 0x78, virtual false, abstract: false, final false
  static inline void FlushAllPendingDeviceDisposes();

  /// @brief Method Free, addr 0x3525ee0, size 0x84c, virtual false, abstract: false, final false
  inline void Free(::UnityEngine::UIElements::UIR::MeshHandle* mesh);

  /// @brief Method GatherDrawStatistics, addr 0x3529bd8, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics GatherDrawStatistics();

  /// @brief Method GetClipSpaceParams, addr 0x352672c, size 0xc8, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetClipSpaceParams();

  /// @brief Method InitVertexDeclaration, addr 0x3523f90, size 0x268, virtual false, abstract: false, final false
  inline void InitVertexDeclaration();

  /// @brief Method KickRanges, addr 0x35288d8, size 0x248, virtual false, abstract: false, final false
  inline void KickRanges(::cordl_internals::Ptr<::UnityEngine::UIElements::UIR::DrawBufferRange> ranges, ByRef<int32_t> rangesReady, ByRef<int32_t> rangesStart, int32_t rangesCount,
                         ::UnityEngine::UIElements::UIR::Page* curPage);

  static inline ::UnityEngine::UIElements::UIR::UIRenderDevice* New_ctor(uint32_t initialVertexCapacity, uint32_t initialIndexCapacity);

  static inline ::UnityEngine::UIElements::UIR::UIRenderDevice* New_ctor(uint32_t initialVertexCapacity, uint32_t initialIndexCapacity, bool mockDevice);

  /// @brief Method OnEngineUpdateGlobal, addr 0x3529bf0, size 0x4c, virtual false, abstract: false, final false
  static inline void OnEngineUpdateGlobal();

  /// @brief Method OnFlushPendingResources, addr 0x3529c3c, size 0x5c, virtual false, abstract: false, final false
  static inline void OnFlushPendingResources();

  /// @brief Method OnFrameRenderingBegin, addr 0x35267f4, size 0xa4, virtual false, abstract: false, final false
  inline void OnFrameRenderingBegin();

  /// @brief Method PrepareForGfxDeviceRecreate, addr 0x3529978, size 0x188, virtual false, abstract: false, final false
  static inline void PrepareForGfxDeviceRecreate();

  /// @brief Method ProcessDeviceFreeQueue, addr 0x35245a4, size 0x39c, virtual false, abstract: false, final false
  static inline void ProcessDeviceFreeQueue();

  /// @brief Method PruneUnusedPages, addr 0x3529830, size 0xdc, virtual false, abstract: false, final false
  inline void PruneUnusedPages();

  /// @brief Method PtrToSlice, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::Unity::Collections::NativeSlice_1<T> PtrToSlice(::cordl_internals::Ptr<void> p, int32_t count);

  /// @brief Method TryAllocFromPage, addr 0x3525a88, size 0x104, virtual false, abstract: false, final false
  inline bool TryAllocFromPage(::UnityEngine::UIElements::UIR::Page* page, uint32_t vertexCount, uint32_t indexCount, ByRef<::UnityEngine::UIElements::UIR::Alloc> va,
                               ByRef<::UnityEngine::UIElements::UIR::Alloc> ia, bool shortLived);

  /// @brief Method Update, addr 0x3525900, size 0x188, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::UIElements::UIR::MeshHandle* mesh, uint32_t vertexCount, uint32_t indexCount,
                     ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> vertexData, ByRef<::Unity::Collections::NativeSlice_1<uint16_t>> indexData,
                     ByRef<uint16_t> indexOffset);

  /// @brief Method Update, addr 0x3525034, size 0x1c8, virtual false, abstract: false, final false
  inline void Update(::UnityEngine::UIElements::UIR::MeshHandle* mesh, uint32_t vertexCount, ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> vertexData);

  /// @brief Method UpdateAfterGPUUsedData, addr 0x35251fc, size 0x704, virtual false, abstract: false, final false
  inline void UpdateAfterGPUUsedData(::UnityEngine::UIElements::UIR::MeshHandle* mesh, uint32_t vertexCount, uint32_t indexCount,
                                     ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> vertexData, ByRef<::Unity::Collections::NativeSlice_1<uint16_t>> indexData,
                                     ByRef<uint16_t> indexOffset, ByRef<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate> allocToUpdate, bool copyBackIndices);

  /// @brief Method UpdateFenceValue, addr 0x35296dc, size 0xcc, virtual false, abstract: false, final false
  inline void UpdateFenceValue();

  /// @brief Method WaitOnCpuFence, addr 0x35297a8, size 0x88, virtual false, abstract: false, final false
  inline void WaitOnCpuFence(uint32_t fence);

  /// @brief Method WrapUpGfxDeviceRecreate, addr 0x3529b00, size 0x60, virtual false, abstract: false, final false
  static inline void WrapUpGfxDeviceRecreate();

  constexpr bool const& __cordl_internal_get__breakBatches_k__BackingField() const;

  constexpr bool& __cordl_internal_get__breakBatches_k__BackingField();

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr uint32_t const& __cordl_internal_get__maxVerticesPerPage_k__BackingField() const;

  constexpr uint32_t& __cordl_internal_get__maxVerticesPerPage_k__BackingField();

  constexpr void* const& __cordl_internal_get_m_DefaultStencilState() const;

  constexpr void*& __cordl_internal_get_m_DefaultStencilState();

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree>*>*& __cordl_internal_get_m_DeferredFrees();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree>*>*> const&
  __cordl_internal_get_m_DeferredFrees() const;

  constexpr ::UnityEngine::UIElements::UIR::DrawParams*& __cordl_internal_get_m_DrawParams();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::DrawParams*> const& __cordl_internal_get_m_DrawParams() const;

  constexpr ::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics const& __cordl_internal_get_m_DrawStats() const;

  constexpr ::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics& __cordl_internal_get_m_DrawStats();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_m_Fences() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_m_Fences();

  constexpr ::UnityEngine::UIElements::UIR::Page*& __cordl_internal_get_m_FirstPage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::Page*> const& __cordl_internal_get_m_FirstPage() const;

  constexpr uint32_t const& __cordl_internal_get_m_FrameIndex() const;

  constexpr uint32_t& __cordl_internal_get_m_FrameIndex();

  constexpr float_t const& __cordl_internal_get_m_IndexToVertexCountRatio() const;

  constexpr float_t& __cordl_internal_get_m_IndexToVertexCountRatio();

  constexpr uint32_t const& __cordl_internal_get_m_LargeMeshVertexCount() const;

  constexpr uint32_t& __cordl_internal_get_m_LargeMeshVertexCount();

  constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::MeshHandle*>*& __cordl_internal_get_m_MeshHandles();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::MeshHandle*>*> const& __cordl_internal_get_m_MeshHandles() const;

  constexpr bool const& __cordl_internal_get_m_MockDevice() const;

  constexpr bool& __cordl_internal_get_m_MockDevice();

  constexpr uint32_t const& __cordl_internal_get_m_NextPageVertexCount() const;

  constexpr uint32_t& __cordl_internal_get_m_NextPageVertexCount();

  constexpr uint32_t const& __cordl_internal_get_m_NextUpdateID() const;

  constexpr uint32_t& __cordl_internal_get_m_NextUpdateID();

  constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_m_StandardMatProps();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MaterialPropertyBlock*> const& __cordl_internal_get_m_StandardMatProps() const;

  constexpr ::UnityEngine::UIElements::UIR::TextureSlotManager*& __cordl_internal_get_m_TextureSlotManager();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::UIR::TextureSlotManager*> const& __cordl_internal_get_m_TextureSlotManager() const;

  constexpr ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate>*>*& __cordl_internal_get_m_Updates();

  constexpr ::cordl_internals::to_const_pointer<
      ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate>*>*> const&
  __cordl_internal_get_m_Updates() const;

  constexpr void* const& __cordl_internal_get_m_VertexDecl() const;

  constexpr void*& __cordl_internal_get_m_VertexDecl();

  constexpr void __cordl_internal_set__breakBatches_k__BackingField(bool value);

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set__maxVerticesPerPage_k__BackingField(uint32_t value);

  constexpr void __cordl_internal_set_m_DefaultStencilState(void* value);

  constexpr void
  __cordl_internal_set_m_DeferredFrees(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree>*>* value);

  constexpr void __cordl_internal_set_m_DrawParams(::UnityEngine::UIElements::UIR::DrawParams* value);

  constexpr void __cordl_internal_set_m_DrawStats(::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics value);

  constexpr void __cordl_internal_set_m_Fences(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_m_FirstPage(::UnityEngine::UIElements::UIR::Page* value);

  constexpr void __cordl_internal_set_m_FrameIndex(uint32_t value);

  constexpr void __cordl_internal_set_m_IndexToVertexCountRatio(float_t value);

  constexpr void __cordl_internal_set_m_LargeMeshVertexCount(uint32_t value);

  constexpr void __cordl_internal_set_m_MeshHandles(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::MeshHandle*>* value);

  constexpr void __cordl_internal_set_m_MockDevice(bool value);

  constexpr void __cordl_internal_set_m_NextPageVertexCount(uint32_t value);

  constexpr void __cordl_internal_set_m_NextUpdateID(uint32_t value);

  constexpr void __cordl_internal_set_m_StandardMatProps(::UnityEngine::MaterialPropertyBlock* value);

  constexpr void __cordl_internal_set_m_TextureSlotManager(::UnityEngine::UIElements::UIR::TextureSlotManager* value);

  constexpr void
  __cordl_internal_set_m_Updates(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate>*>* value);

  constexpr void __cordl_internal_set_m_VertexDecl(void* value);

  /// @brief Method .ctor, addr 0x3522e58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(uint32_t initialVertexCapacity, uint32_t initialIndexCapacity);

  /// @brief Method .ctor, addr 0x3522e60, size 0x5b0, virtual false, abstract: false, final false
  inline void _ctor(uint32_t initialVertexCapacity, uint32_t initialIndexCapacity, bool mockDevice);

  static inline int32_t getStaticF_m_ActiveDeviceCount();

  static inline ::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* getStaticF_m_DeviceFreeQueue();

  static inline bool getStaticF_m_SubscribedToNotifications();

  static inline bool getStaticF_m_SynchronousFree();

  static inline int32_t getStaticF_s_ClipRectsPropID();

  static inline int32_t getStaticF_s_ClipSpaceParamsID();

  static inline ::UnityW<::UnityEngine::Texture2D> getStaticF_s_DefaultShaderInfoTexARGB8();

  static inline ::UnityW<::UnityEngine::Texture2D> getStaticF_s_DefaultShaderInfoTexFloat();

  static inline int32_t getStaticF_s_FontTexPropID();

  static inline int32_t getStaticF_s_FontTexSDFScaleID();

  static inline int32_t getStaticF_s_GradientSettingsTexID();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerAdvanceFrame();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerAllocate();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerBeforeDraw();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerFence();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerFree();

  static inline int32_t getStaticF_s_ShaderInfoTexID();

  static inline ::System::Nullable_1<bool> getStaticF_s_ShaderModelIs35();

  static inline int32_t getStaticF_s_TransformsPropID();

  static inline ::System::Nullable_1<bool> getStaticF_s_VertexTexturingIsAvailable();

  /// @brief Method get_breakBatches, addr 0x3522a8c, size 0x8, virtual false, abstract: false, final false
  inline bool get_breakBatches();

  /// @brief Method get_defaultShaderInfoTexARGB8, addr 0x35238fc, size 0x2cc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> get_defaultShaderInfoTexARGB8();

  /// @brief Method get_defaultShaderInfoTexFloat, addr 0x3523568, size 0x394, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture2D> get_defaultShaderInfoTexFloat();

  /// @brief Method get_disposed, addr 0x35243ac, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Method get_fullyCreated, addr 0x352439c, size 0x10, virtual false, abstract: false, final false
  inline bool get_fullyCreated();

  /// @brief Method get_maxVerticesPerPage, addr 0x3522a84, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_maxVerticesPerPage();

  /// @brief Method get_shaderModelIs35, addr 0x3523dac, size 0x1e4, virtual false, abstract: false, final false
  static inline bool get_shaderModelIs35();

  /// @brief Method get_vertexTexturingIsAvailable, addr 0x3523bc8, size 0x1e4, virtual false, abstract: false, final false
  static inline bool get_vertexTexturingIsAvailable();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_m_ActiveDeviceCount(int32_t value);

  static inline void setStaticF_m_DeviceFreeQueue(::System::Collections::Generic::LinkedList_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree>* value);

  static inline void setStaticF_m_SubscribedToNotifications(bool value);

  static inline void setStaticF_m_SynchronousFree(bool value);

  static inline void setStaticF_s_ClipRectsPropID(int32_t value);

  static inline void setStaticF_s_ClipSpaceParamsID(int32_t value);

  static inline void setStaticF_s_DefaultShaderInfoTexARGB8(::UnityW<::UnityEngine::Texture2D> value);

  static inline void setStaticF_s_DefaultShaderInfoTexFloat(::UnityW<::UnityEngine::Texture2D> value);

  static inline void setStaticF_s_FontTexPropID(int32_t value);

  static inline void setStaticF_s_FontTexSDFScaleID(int32_t value);

  static inline void setStaticF_s_GradientSettingsTexID(int32_t value);

  static inline void setStaticF_s_MarkerAdvanceFrame(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_MarkerAllocate(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_MarkerBeforeDraw(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_MarkerFence(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_MarkerFree(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_ShaderInfoTexID(int32_t value);

  static inline void setStaticF_s_ShaderModelIs35(::System::Nullable_1<bool> value);

  static inline void setStaticF_s_TransformsPropID(int32_t value);

  static inline void setStaticF_s_VertexTexturingIsAvailable(::System::Nullable_1<bool> value);

  /// @brief Method set_breakBatches, addr 0x3522a94, size 0xc, virtual false, abstract: false, final false
  inline void set_breakBatches(bool value);

  /// @brief Method set_disposed, addr 0x35243b4, size 0xc, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

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

  /// @brief Field m_MockDevice, offset: 0x10, size: 0x1, def value: None
  bool ___m_MockDevice;

  /// @brief Field m_DefaultStencilState, offset: 0x18, size: 0x8, def value: None
  void* ___m_DefaultStencilState;

  /// @brief Field m_VertexDecl, offset: 0x20, size: 0x8, def value: None
  void* ___m_VertexDecl;

  /// @brief Field m_FirstPage, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::Page* ___m_FirstPage;

  /// @brief Field m_NextPageVertexCount, offset: 0x30, size: 0x4, def value: None
  uint32_t ___m_NextPageVertexCount;

  /// @brief Field m_LargeMeshVertexCount, offset: 0x34, size: 0x4, def value: None
  uint32_t ___m_LargeMeshVertexCount;

  /// @brief Field m_IndexToVertexCountRatio, offset: 0x38, size: 0x4, def value: None
  float_t ___m_IndexToVertexCountRatio;

  /// @brief Field m_DeferredFrees, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree>*>* ___m_DeferredFrees;

  /// @brief Field m_Updates, offset: 0x48, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate>*>* ___m_Updates;

  /// @brief Field m_Fences, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___m_Fences;

  /// @brief Field m_StandardMatProps, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ___m_StandardMatProps;

  /// @brief Field m_FrameIndex, offset: 0x60, size: 0x4, def value: None
  uint32_t ___m_FrameIndex;

  /// @brief Field m_NextUpdateID, offset: 0x64, size: 0x4, def value: None
  uint32_t ___m_NextUpdateID;

  /// @brief Field m_DrawStats, offset: 0x68, size: 0x24, def value: None
  ::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics ___m_DrawStats;

  /// @brief Field m_MeshHandles, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::MeshHandle*>* ___m_MeshHandles;

  /// @brief Field m_DrawParams, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::DrawParams* ___m_DrawParams;

  /// @brief Field m_TextureSlotManager, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::TextureSlotManager* ___m_TextureSlotManager;

  /// @brief Field <maxVerticesPerPage>k__BackingField, offset: 0xa8, size: 0x4, def value: None
  uint32_t ____maxVerticesPerPage_k__BackingField;

  /// @brief Field <breakBatches>k__BackingField, offset: 0xac, size: 0x1, def value: None
  bool ____breakBatches_k__BackingField;

  /// @brief Field <disposed>k__BackingField, offset: 0xad, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::UIRenderDevice, 0xb0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_MockDevice) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_DefaultStencilState) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_VertexDecl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_FirstPage) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_NextPageVertexCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_LargeMeshVertexCount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_IndexToVertexCountRatio) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_DeferredFrees) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_Updates) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_Fences) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_StandardMatProps) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_FrameIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_NextUpdateID) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_DrawStats) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_MeshHandles) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_DrawParams) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ___m_TextureSlotManager) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ____maxVerticesPerPage_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ____breakBatches_k__BackingField) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::UIRenderDevice, ____disposed_k__BackingField) == 0xad, "Offset mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::UIRenderDevice);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::UIRenderDevice*, "UnityEngine.UIElements.UIR", "UIRenderDevice");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::__UIRenderDevice____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__UIRenderDevice____c*, "UnityEngine.UIElements.UIR", "UIRenderDevice/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToFree, "UnityEngine.UIElements.UIR", "UIRenderDevice/AllocToFree");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__UIRenderDevice__AllocToUpdate, "UnityEngine.UIElements.UIR", "UIRenderDevice/AllocToUpdate");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__UIRenderDevice__DeviceToFree, "UnityEngine.UIElements.UIR", "UIRenderDevice/DeviceToFree");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__UIRenderDevice__DrawStatistics, "UnityEngine.UIElements.UIR", "UIRenderDevice/DrawStatistics");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::__UIRenderDevice__EvaluationState, "UnityEngine.UIElements.UIR", "UIRenderDevice/EvaluationState");
