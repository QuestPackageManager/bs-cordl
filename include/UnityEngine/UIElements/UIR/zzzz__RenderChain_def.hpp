#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/RenderChain.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__ChainBuilderStats_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__Transform3x4_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__UIRVEShaderInfoAllocator_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderChain)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
struct IntPtr;
}
namespace UnityEngine::UIElements::UIR::Implementation {
class UIRStylePainter;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class BasicNodePool_1;
}
namespace UnityEngine::UIElements::UIR {
class JobManager;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class LinkedPool_1;
}
namespace UnityEngine::UIElements::UIR {
class OpacityIdAccelerator;
}
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
namespace UnityEngine::UIElements::UIR {
struct RenderChain_DepthOrderedDirtyTracking;
}
namespace UnityEngine::UIElements::UIR {
struct RenderChain_RenderChainStaticIndexAllocator;
}
namespace UnityEngine::UIElements::UIR {
struct RenderChain_RenderNodeData;
}
namespace UnityEngine::UIElements::UIR {
class RenderChain___c;
}
namespace UnityEngine::UIElements::UIR {
struct RenderDataDirtyTypeClasses;
}
namespace UnityEngine::UIElements::UIR {
struct RenderDataDirtyTypes;
}
namespace UnityEngine::UIElements::UIR {
template <typename T> class TempAllocator_1;
}
namespace UnityEngine::UIElements::UIR {
struct TextureEntry;
}
namespace UnityEngine::UIElements::UIR {
class UIRenderDevice;
}
namespace UnityEngine::UIElements::UIR {
class VectorImageManager;
}
namespace UnityEngine::UIElements {
class AtlasBase;
}
namespace UnityEngine::UIElements {
class BaseRuntimePanel;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine::UIElements {
class TextureRegistry;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class RenderChain;
}
namespace UnityEngine::UIElements::UIR {
class RenderChain___c;
}
namespace UnityEngine::UIElements::UIR {
struct RenderChain_DepthOrderedDirtyTracking;
}
namespace UnityEngine::UIElements::UIR {
struct RenderChain_RenderChainStaticIndexAllocator;
}
namespace UnityEngine::UIElements::UIR {
struct RenderChain_RenderNodeData;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::RenderChain);
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::RenderChain___c);
MARK_VAL_T(::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking);
MARK_VAL_T(::UnityEngine::UIElements::UIR::RenderChain_RenderChainStaticIndexAllocator);
MARK_VAL_T(::UnityEngine::UIElements::UIR::RenderChain_RenderNodeData);
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.RenderChain/DepthOrderedDirtyTracking
struct CORDL_TYPE RenderChain_DepthOrderedDirtyTracking {
public:
  // Declarations
  /// @brief Method ClearDirty, addr 0x49b844c, size 0x198, virtual false, abstract: false, final false
  inline void ClearDirty(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtyTypesInverse);

  /// @brief Method EnsureFits, addr 0x49ba1b4, size 0x114, virtual false, abstract: false, final false
  inline void EnsureFits(int32_t maxDepth);

  /// @brief Method RegisterDirty, addr 0x49b9b64, size 0x1c4, virtual false, abstract: false, final false
  inline void RegisterDirty(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::RenderDataDirtyTypes dirtyTypes,
                            ::UnityEngine::UIElements::UIR::RenderDataDirtyTypeClasses dirtyTypeClass);

  /// @brief Method Reset, addr 0x49b7920, size 0x78, virtual false, abstract: false, final false
  inline void Reset();

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderChain_DepthOrderedDirtyTracking();

  // Ctor Parameters [CppParam { name: "heads", ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*", modifiers: "", def_value: None }, CppParam { name: "tails",
  // ty: "::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>*", modifiers: "", def_value: None }, CppParam { name: "minDepths", ty:
  // "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: None }, CppParam { name: "maxDepths", ty: "::ArrayW<int32_t,::Array<int32_t>*>", modifiers: "", def_value: None }, CppParam {
  // name: "dirtyID", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr RenderChain_DepthOrderedDirtyTracking(::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* heads,
                                                  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* tails, ::ArrayW<int32_t, ::Array<int32_t>*> minDepths,
                                                  ::ArrayW<int32_t, ::Array<int32_t>*> maxDepths, uint32_t dirtyID) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6380 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field heads, offset: 0x0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* heads;

  /// @brief Field tails, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::VisualElement*>* tails;

  /// @brief Field minDepths, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> minDepths;

  /// @brief Field maxDepths, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> maxDepths;

  /// @brief Field dirtyID, offset: 0x20, size: 0x4, def value: None
  uint32_t dirtyID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking, heads) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking, tails) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking, minDepths) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking, maxDepths) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking, dirtyID) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.RenderChain/RenderChainStaticIndexAllocator
#pragma pack(push, 0)
struct CORDL_TYPE RenderChain_RenderChainStaticIndexAllocator {
public:
  // Declarations
  /// @brief Field renderChains, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_renderChains, put = setStaticF_renderChains)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChain*>* renderChains;

  /// @brief Method AccessIndex, addr 0x49bb1cc, size 0x80, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::UIR::RenderChain* AccessIndex(int32_t index);

  /// @brief Method AllocateIndex, addr 0x49baffc, size 0x14c, virtual false, abstract: false, final false
  static inline int32_t AllocateIndex(::UnityEngine::UIElements::UIR::RenderChain* renderChain);

  /// @brief Method FreeIndex, addr 0x49bb148, size 0x84, virtual false, abstract: false, final false
  static inline void FreeIndex(int32_t index);

  static inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChain*>* getStaticF_renderChains();

  static inline void setStaticF_renderChains(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChain*>* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderChain_RenderChainStaticIndexAllocator();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6381 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::RenderChain_RenderChainStaticIndexAllocator, 0x1>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies Unity.Collections.NativeSlice`1<T>, UnityEngine.UIElements.UIR.Transform3x4, UnityEngine.Vector4
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.RenderChain/RenderNodeData
struct CORDL_TYPE RenderChain_RenderNodeData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderChain_RenderNodeData();

  // Ctor Parameters [CppParam { name: "standardMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "initialMaterial", ty:
  // "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None }, CppParam { name: "matPropBlock", ty: "::UnityEngine::MaterialPropertyBlock*", modifiers: "", def_value: None }, CppParam {
  // name: "firstCommand", ty: "::UnityEngine::UIElements::UIR::RenderChainCommand*", modifiers: "", def_value: None }, CppParam { name: "device", ty:
  // "::UnityEngine::UIElements::UIR::UIRenderDevice*", modifiers: "", def_value: None }, CppParam { name: "vectorAtlas", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None },
  // CppParam { name: "shaderInfoAtlas", ty: "::UnityW<::UnityEngine::Texture>", modifiers: "", def_value: None }, CppParam { name: "dpiScale", ty: "float_t", modifiers: "", def_value: None },
  // CppParam { name: "transformConstants", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4>", modifiers: "", def_value: None }, CppParam { name:
  // "clipRectConstants", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4>", modifiers: "", def_value: None }]
  constexpr RenderChain_RenderNodeData(::UnityW<::UnityEngine::Material> standardMaterial, ::UnityW<::UnityEngine::Material> initialMaterial, ::UnityEngine::MaterialPropertyBlock* matPropBlock,
                                       ::UnityEngine::UIElements::UIR::RenderChainCommand* firstCommand, ::UnityEngine::UIElements::UIR::UIRenderDevice* device,
                                       ::UnityW<::UnityEngine::Texture> vectorAtlas, ::UnityW<::UnityEngine::Texture> shaderInfoAtlas, float_t dpiScale,
                                       ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4> transformConstants,
                                       ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4> clipRectConstants) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6382 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x60 };

  /// @brief Field standardMaterial, offset: 0x0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> standardMaterial;

  /// @brief Field initialMaterial, offset: 0x8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> initialMaterial;

  /// @brief Field matPropBlock, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* matPropBlock;

  /// @brief Field firstCommand, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* firstCommand;

  /// @brief Field device, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::UIRenderDevice* device;

  /// @brief Field vectorAtlas, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> vectorAtlas;

  /// @brief Field shaderInfoAtlas, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> shaderInfoAtlas;

  /// @brief Field dpiScale, offset: 0x38, size: 0x4, def value: None
  float_t dpiScale;

  /// @brief Field transformConstants, offset: 0x40, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::UIR::Transform3x4> transformConstants;

  /// @brief Field clipRectConstants, offset: 0x50, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<::UnityEngine::Vector4> clipRectConstants;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_RenderNodeData, standardMaterial) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_RenderNodeData, initialMaterial) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_RenderNodeData, matPropBlock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_RenderNodeData, firstCommand) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_RenderNodeData, device) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_RenderNodeData, vectorAtlas) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_RenderNodeData, shaderInfoAtlas) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_RenderNodeData, dpiScale) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_RenderNodeData, transformConstants) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain_RenderNodeData, clipRectConstants) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::RenderChain_RenderNodeData, 0x60>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies System.Object
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.RenderChain/<>c
class CORDL_TYPE RenderChain___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::UIR::RenderChain___c* __9;

  /// @brief Field <>9__34_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__34_0, put = setStaticF___9__34_0)) ::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* __9__34_0;

  /// @brief Field <>9__34_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__34_1, put = setStaticF___9__34_1)) ::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* __9__34_1;

  static inline ::UnityEngine::UIElements::UIR::RenderChain___c* New_ctor();

  /// @brief Method <.ctor>b__34_0, addr 0x49bb340, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderChainCommand* __ctor_b__34_0();

  /// @brief Method <.ctor>b__34_1, addr 0x49bb3d8, size 0x4, virtual false, abstract: false, final false
  inline void __ctor_b__34_1(::UnityEngine::UIElements::UIR::RenderChainCommand* cmd);

  /// @brief Method .ctor, addr 0x49bb338, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::UIR::RenderChain___c* getStaticF___9();

  static inline ::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* getStaticF___9__34_0();

  static inline ::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* getStaticF___9__34_1();

  static inline void setStaticF___9(::UnityEngine::UIElements::UIR::RenderChain___c* value);

  static inline void setStaticF___9__34_0(::System::Func_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* value);

  static inline void setStaticF___9__34_1(::System::Action_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderChain___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderChain___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderChain___c(RenderChain___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderChain___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderChain___c(RenderChain___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6383 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::RenderChain___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies System.IDisposable, System.Object, Unity.Profiling.ProfilerMarker, UnityEngine.UIElements.UIR.ChainBuilderStats, UnityEngine.UIElements.UIR.RenderChain::DepthOrderedDirtyTracking,
// UnityEngine.UIElements.UIR.UIRVEShaderInfoAllocator
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.RenderChain
class CORDL_TYPE RenderChain : public ::System::Object {
public:
  // Declarations
  using DepthOrderedDirtyTracking = ::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking;

  using RenderChainStaticIndexAllocator = ::UnityEngine::UIElements::UIR::RenderChain_RenderChainStaticIndexAllocator;

  using RenderNodeData = ::UnityEngine::UIElements::UIR::RenderChain_RenderNodeData;

  using __c = ::UnityEngine::UIElements::UIR::RenderChain___c;

  /// @brief Field OnPreRender, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_OnPreRender, put = setStaticF_OnPreRender)) ::System::Action* OnPreRender;

  /// @brief Field <atlas>k__BackingField, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get__atlas_k__BackingField, put = __cordl_internal_set__atlas_k__BackingField)) ::UnityEngine::UIElements::AtlasBase* _atlas_k__BackingField;

  /// @brief Field <device>k__BackingField, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get__device_k__BackingField, put = __cordl_internal_set__device_k__BackingField)) ::UnityEngine::UIElements::UIR::UIRenderDevice* _device_k__BackingField;

  /// @brief Field <disposed>k__BackingField, offset 0x100, size 0x1
  __declspec(property(get = __cordl_internal_get__disposed_k__BackingField, put = __cordl_internal_set__disposed_k__BackingField)) bool _disposed_k__BackingField;

  /// @brief Field <drawInCameras>k__BackingField, offset 0x219, size 0x1
  __declspec(property(get = __cordl_internal_get__drawInCameras_k__BackingField, put = __cordl_internal_set__drawInCameras_k__BackingField)) bool _drawInCameras_k__BackingField;

  /// @brief Field <drawStats>k__BackingField, offset 0x218, size 0x1
  __declspec(property(get = __cordl_internal_get__drawStats_k__BackingField, put = __cordl_internal_set__drawStats_k__BackingField)) bool _drawStats_k__BackingField;

  /// @brief Field <indicesPool>k__BackingField, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__indicesPool_k__BackingField,
                      put = __cordl_internal_set__indicesPool_k__BackingField)) ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>* _indicesPool_k__BackingField;

  /// @brief Field <jobManager>k__BackingField, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__jobManager_k__BackingField,
                      put = __cordl_internal_set__jobManager_k__BackingField)) ::UnityEngine::UIElements::UIR::JobManager* _jobManager_k__BackingField;

  /// @brief Field <opacityIdAccelerator>k__BackingField, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get__opacityIdAccelerator_k__BackingField,
                      put = __cordl_internal_set__opacityIdAccelerator_k__BackingField)) ::UnityEngine::UIElements::UIR::OpacityIdAccelerator* _opacityIdAccelerator_k__BackingField;

  /// @brief Field <painter>k__BackingField, offset 0x210, size 0x8
  __declspec(property(get = __cordl_internal_get__painter_k__BackingField,
                      put = __cordl_internal_set__painter_k__BackingField)) ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter* _painter_k__BackingField;

  /// @brief Field <panel>k__BackingField, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get__panel_k__BackingField, put = __cordl_internal_set__panel_k__BackingField)) ::UnityEngine::UIElements::BaseVisualElementPanel* _panel_k__BackingField;

  /// @brief Field <vectorImageManager>k__BackingField, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get__vectorImageManager_k__BackingField,
                      put = __cordl_internal_set__vectorImageManager_k__BackingField)) ::UnityEngine::UIElements::UIR::VectorImageManager* _vectorImageManager_k__BackingField;

  /// @brief Field <vertsPool>k__BackingField, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__vertsPool_k__BackingField,
                      put = __cordl_internal_set__vertsPool_k__BackingField)) ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>* _vertsPool_k__BackingField;

  __declspec(property(get = get_atlas, put = set_atlas)) ::UnityEngine::UIElements::AtlasBase* atlas;

  __declspec(property(put = set_defaultShader)) ::UnityW<::UnityEngine::Shader> defaultShader;

  __declspec(property(put = set_defaultWorldSpaceShader)) ::UnityW<::UnityEngine::Shader> defaultWorldSpaceShader;

  __declspec(property(get = get_device, put = set_device)) ::UnityEngine::UIElements::UIR::UIRenderDevice* device;

  __declspec(property(get = get_disposed, put = set_disposed)) bool disposed;

  __declspec(property(get = get_drawInCameras, put = set_drawInCameras)) bool drawInCameras;

  __declspec(property(get = get_drawStats, put = set_drawStats)) bool drawStats;

  __declspec(property(get = get_indicesPool, put = set_indicesPool)) ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>* indicesPool;

  __declspec(property(get = get_jobManager, put = set_jobManager)) ::UnityEngine::UIElements::UIR::JobManager* jobManager;

  /// @brief Field m_ActiveRenderNodes, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ActiveRenderNodes, put = __cordl_internal_set_m_ActiveRenderNodes)) int32_t m_ActiveRenderNodes;

  /// @brief Field m_BlockDirtyRegistration, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get_m_BlockDirtyRegistration, put = __cordl_internal_set_m_BlockDirtyRegistration)) bool m_BlockDirtyRegistration;

  /// @brief Field m_CommandPool, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CommandPool,
                      put = __cordl_internal_set_m_CommandPool)) ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* m_CommandPool;

  /// @brief Field m_CustomMaterialCommands, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CustomMaterialCommands, put = __cordl_internal_set_m_CustomMaterialCommands)) int32_t m_CustomMaterialCommands;

  /// @brief Field m_DefaultMat, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultMat, put = __cordl_internal_set_m_DefaultMat)) ::UnityW<::UnityEngine::Material> m_DefaultMat;

  /// @brief Field m_DefaultShader, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultShader, put = __cordl_internal_set_m_DefaultShader)) ::UnityW<::UnityEngine::Shader> m_DefaultShader;

  /// @brief Field m_DefaultWorldSpaceMat, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultWorldSpaceMat, put = __cordl_internal_set_m_DefaultWorldSpaceMat)) ::UnityW<::UnityEngine::Material> m_DefaultWorldSpaceMat;

  /// @brief Field m_DefaultWorldSpaceShader, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefaultWorldSpaceShader, put = __cordl_internal_set_m_DefaultWorldSpaceShader)) ::UnityW<::UnityEngine::Shader> m_DefaultWorldSpaceShader;

  /// @brief Field m_DirtyTracker, offset 0x18, size 0x28
  __declspec(property(get = __cordl_internal_get_m_DirtyTracker, put = __cordl_internal_set_m_DirtyTracker)) ::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking m_DirtyTracker;

  /// @brief Field m_FirstCommand, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FirstCommand, put = __cordl_internal_set_m_FirstCommand)) ::UnityEngine::UIElements::UIR::RenderChainCommand* m_FirstCommand;

  /// @brief Field m_RenderNodesData, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderNodesData,
                      put = __cordl_internal_set_m_RenderNodesData)) ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChain_RenderNodeData>* m_RenderNodesData;

  /// @brief Field m_StaticIndex, offset 0x7c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StaticIndex, put = __cordl_internal_set_m_StaticIndex)) int32_t m_StaticIndex;

  /// @brief Field m_Stats, offset 0x88, size 0x60
  __declspec(property(get = __cordl_internal_get_m_Stats, put = __cordl_internal_set_m_Stats)) ::UnityEngine::UIElements::UIR::ChainBuilderStats m_Stats;

  /// @brief Field m_StatsElementsAdded, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StatsElementsAdded, put = __cordl_internal_set_m_StatsElementsAdded)) uint32_t m_StatsElementsAdded;

  /// @brief Field m_StatsElementsRemoved, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StatsElementsRemoved, put = __cordl_internal_set_m_StatsElementsRemoved)) uint32_t m_StatsElementsRemoved;

  /// @brief Field m_TexturePool, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TexturePool,
                      put = __cordl_internal_set_m_TexturePool)) ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::TextureEntry>* m_TexturePool;

  /// @brief Field m_TextureRegistry, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TextureRegistry, put = __cordl_internal_set_m_TextureRegistry)) ::UnityEngine::UIElements::TextureRegistry* m_TextureRegistry;

  __declspec(property(get = get_opacityIdAccelerator, put = set_opacityIdAccelerator)) ::UnityEngine::UIElements::UIR::OpacityIdAccelerator* opacityIdAccelerator;

  __declspec(property(get = get_painter, put = set_painter)) ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter* painter;

  __declspec(property(get = get_panel, put = set_panel)) ::UnityEngine::UIElements::BaseVisualElementPanel* panel;

  /// @brief Field s_MarkerClipProcessing, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MarkerClipProcessing, put = setStaticF_s_MarkerClipProcessing)) ::Unity::Profiling::ProfilerMarker s_MarkerClipProcessing;

  /// @brief Field s_MarkerColorsProcessing, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MarkerColorsProcessing, put = setStaticF_s_MarkerColorsProcessing)) ::Unity::Profiling::ProfilerMarker s_MarkerColorsProcessing;

  /// @brief Field s_MarkerOpacityProcessing, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MarkerOpacityProcessing, put = setStaticF_s_MarkerOpacityProcessing)) ::Unity::Profiling::ProfilerMarker s_MarkerOpacityProcessing;

  /// @brief Field s_MarkerProcess, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MarkerProcess, put = setStaticF_s_MarkerProcess)) ::Unity::Profiling::ProfilerMarker s_MarkerProcess;

  /// @brief Field s_MarkerTextRegen, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MarkerTextRegen, put = setStaticF_s_MarkerTextRegen)) ::Unity::Profiling::ProfilerMarker s_MarkerTextRegen;

  /// @brief Field s_MarkerTransformProcessing, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MarkerTransformProcessing, put = setStaticF_s_MarkerTransformProcessing)) ::Unity::Profiling::ProfilerMarker s_MarkerTransformProcessing;

  /// @brief Field s_MarkerVisualsProcessing, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_MarkerVisualsProcessing, put = setStaticF_s_MarkerVisualsProcessing)) ::Unity::Profiling::ProfilerMarker s_MarkerVisualsProcessing;

  /// @brief Field shaderInfoAllocator, offset 0x140, size 0xd0
  __declspec(property(get = __cordl_internal_get_shaderInfoAllocator, put = __cordl_internal_set_shaderInfoAllocator)) ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator shaderInfoAllocator;

  __declspec(property(get = get_vectorImageManager, put = set_vectorImageManager)) ::UnityEngine::UIElements::UIR::VectorImageManager* vectorImageManager;

  __declspec(property(get = get_vertsPool, put = set_vertsPool)) ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>* vertsPool;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method AccessRenderNodeData, addr 0x49ba548, size 0xd8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::UIR::RenderChain_RenderNodeData AccessRenderNodeData(::System::IntPtr obj);

  /// @brief Method AllocCommand, addr 0x49ba37c, size 0x68, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderChainCommand* AllocCommand();

  /// @brief Method AppendTexture, addr 0x49baf54, size 0xa8, virtual false, abstract: false, final false
  inline void AppendTexture(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::Texture* src, ::UnityEngine::UIElements::TextureId id, bool isAtlas);

  /// @brief Method ChildWillBeRemoved, addr 0x49ba2c8, size 0xb4, virtual false, abstract: false, final false
  inline void ChildWillBeRemoved(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method Constructor, addr 0x49b751c, size 0x404, virtual false, abstract: false, final false
  inline void Constructor(::UnityEngine::UIElements::BaseVisualElementPanel* panelObj, ::UnityEngine::UIElements::UIR::UIRenderDevice* deviceObj, ::UnityEngine::UIElements::AtlasBase* atlas,
                          ::UnityEngine::UIElements::UIR::VectorImageManager* vectorImageMan);

  /// @brief Method Destructor, addr 0x49b7998, size 0x28c, virtual false, abstract: false, final false
  inline void Destructor();

  /// @brief Method Dispose, addr 0x49b7d8c, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Dispose, addr 0x49b7dfc, size 0x2c, virtual false, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method DrawStats, addr 0x49b89f8, size 0xa84, virtual false, abstract: false, final false
  inline void DrawStats();

  /// @brief Method EnsureFitsDepth, addr 0x49ba1ac, size 0x8, virtual false, abstract: false, final false
  inline void EnsureFitsDepth(int32_t depth);

  /// @brief Method FreeCommand, addr 0x49ba3e4, size 0xb0, virtual false, abstract: false, final false
  inline void FreeCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* cmd);

  /// @brief Method GetFirstElementInPanel, addr 0x49b7c24, size 0x48, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::VisualElement* GetFirstElementInPanel(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method GetStandardMaterial, addr 0x49b890c, size 0xec, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetStandardMaterial();

  /// @brief Method GetStandardWorldSpaceMaterial, addr 0x49ba0c0, size 0xec, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Material> GetStandardWorldSpaceMaterial();

  static inline ::UnityEngine::UIElements::UIR::RenderChain* New_ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method OnRegisterIntermediateRendererMat, addr 0x49bab40, size 0x334, virtual false, abstract: false, final false
  static inline void OnRegisterIntermediateRendererMat(::UnityEngine::UIElements::BaseRuntimePanel* rtp, ::UnityEngine::UIElements::UIR::RenderChain* renderChain,
                                                       ::ByRef<::UnityEngine::UIElements::UIR::RenderChain_RenderNodeData> rnd, ::UnityEngine::Camera* camera, int32_t sameDistanceSortPriority);

  /// @brief Method OnRegisterIntermediateRenderers, addr 0x49ba6c8, size 0x478, virtual false, abstract: false, final false
  static inline void OnRegisterIntermediateRenderers(::UnityEngine::Camera* camera);

  /// @brief Method OnRenderCommandAdded, addr 0x49ba494, size 0x8c, virtual false, abstract: false, final false
  inline void OnRenderCommandAdded(::UnityEngine::UIElements::UIR::RenderChainCommand* command);

  /// @brief Method OnRenderCommandsRemoved, addr 0x49ba520, size 0x28, virtual false, abstract: false, final false
  inline void OnRenderCommandsRemoved(::UnityEngine::UIElements::UIR::RenderChainCommand* firstCommand, ::UnityEngine::UIElements::UIR::RenderChainCommand* lastCommand);

  /// @brief Method OnRenderNodeExecute, addr 0x49ba620, size 0xa8, virtual false, abstract: false, final false
  static inline void OnRenderNodeExecute(::System::IntPtr obj);

  /// @brief Method ProcessChanges, addr 0x49b7e28, size 0x624, virtual false, abstract: false, final false
  inline void ProcessChanges();

  /// @brief Method Render, addr 0x49b85e4, size 0x328, virtual false, abstract: false, final false
  inline void Render();

  /// @brief Method RepaintTexturedElements, addr 0x49bae74, size 0xe0, virtual false, abstract: false, final false
  inline void RepaintTexturedElements();

  /// @brief Method ResetTextures, addr 0x49b7c6c, size 0x10c, virtual false, abstract: false, final false
  inline void ResetTextures(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnChildAdded, addr 0x49b947c, size 0x1c4, virtual false, abstract: false, final false
  inline void UIEOnChildAdded(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnChildRemoving, addr 0x49b9994, size 0xfc, virtual false, abstract: false, final false
  inline void UIEOnChildRemoving(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnChildrenReordered, addr 0x49b97e4, size 0x1b0, virtual false, abstract: false, final false
  inline void UIEOnChildrenReordered(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnClippingChanged, addr 0x49b9640, size 0x8c, virtual false, abstract: false, final false
  inline void UIEOnClippingChanged(::UnityEngine::UIElements::VisualElement* ve, bool hierarchical);

  /// @brief Method UIEOnColorChanged, addr 0x49b9d28, size 0x80, virtual false, abstract: false, final false
  inline void UIEOnColorChanged(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnOpacityChanged, addr 0x49b96cc, size 0x8c, virtual false, abstract: false, final false
  inline void UIEOnOpacityChanged(::UnityEngine::UIElements::VisualElement* ve, bool hierarchical);

  /// @brief Method UIEOnOpacityIdChanged, addr 0x49b9e38, size 0x80, virtual false, abstract: false, final false
  inline void UIEOnOpacityIdChanged(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnRenderHintsChanged, addr 0x49b9a90, size 0xd4, virtual false, abstract: false, final false
  inline void UIEOnRenderHintsChanged(::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UIEOnTransformOrSizeChanged, addr 0x49b9da8, size 0x90, virtual false, abstract: false, final false
  inline void UIEOnTransformOrSizeChanged(::UnityEngine::UIElements::VisualElement* ve, bool transformChanged, bool clipRectSizeChanged);

  /// @brief Method UIEOnVisualsChanged, addr 0x49b9758, size 0x8c, virtual false, abstract: false, final false
  inline void UIEOnVisualsChanged(::UnityEngine::UIElements::VisualElement* ve, bool hierarchical);

  constexpr ::UnityEngine::UIElements::AtlasBase* const& __cordl_internal_get__atlas_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::AtlasBase*& __cordl_internal_get__atlas_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::UIRenderDevice* const& __cordl_internal_get__device_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::UIR::UIRenderDevice*& __cordl_internal_get__device_k__BackingField();

  constexpr bool const& __cordl_internal_get__disposed_k__BackingField() const;

  constexpr bool& __cordl_internal_get__disposed_k__BackingField();

  constexpr bool const& __cordl_internal_get__drawInCameras_k__BackingField() const;

  constexpr bool& __cordl_internal_get__drawInCameras_k__BackingField();

  constexpr bool const& __cordl_internal_get__drawStats_k__BackingField() const;

  constexpr bool& __cordl_internal_get__drawStats_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>* const& __cordl_internal_get__indicesPool_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>*& __cordl_internal_get__indicesPool_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::JobManager* const& __cordl_internal_get__jobManager_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::UIR::JobManager*& __cordl_internal_get__jobManager_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::OpacityIdAccelerator* const& __cordl_internal_get__opacityIdAccelerator_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::UIR::OpacityIdAccelerator*& __cordl_internal_get__opacityIdAccelerator_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter* const& __cordl_internal_get__painter_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter*& __cordl_internal_get__painter_k__BackingField();

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel* const& __cordl_internal_get__panel_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::BaseVisualElementPanel*& __cordl_internal_get__panel_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::VectorImageManager* const& __cordl_internal_get__vectorImageManager_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::UIR::VectorImageManager*& __cordl_internal_get__vectorImageManager_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>* const& __cordl_internal_get__vertsPool_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>*& __cordl_internal_get__vertsPool_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_m_ActiveRenderNodes() const;

  constexpr int32_t& __cordl_internal_get_m_ActiveRenderNodes();

  constexpr bool const& __cordl_internal_get_m_BlockDirtyRegistration() const;

  constexpr bool& __cordl_internal_get_m_BlockDirtyRegistration();

  constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* const& __cordl_internal_get_m_CommandPool() const;

  constexpr ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>*& __cordl_internal_get_m_CommandPool();

  constexpr int32_t const& __cordl_internal_get_m_CustomMaterialCommands() const;

  constexpr int32_t& __cordl_internal_get_m_CustomMaterialCommands();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_DefaultMat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_DefaultMat();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_DefaultShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_DefaultShader();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_DefaultWorldSpaceMat() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_DefaultWorldSpaceMat();

  constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get_m_DefaultWorldSpaceShader() const;

  constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get_m_DefaultWorldSpaceShader();

  constexpr ::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking const& __cordl_internal_get_m_DirtyTracker() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking& __cordl_internal_get_m_DirtyTracker();

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& __cordl_internal_get_m_FirstCommand() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& __cordl_internal_get_m_FirstCommand();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChain_RenderNodeData>* const& __cordl_internal_get_m_RenderNodesData() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChain_RenderNodeData>*& __cordl_internal_get_m_RenderNodesData();

  constexpr int32_t const& __cordl_internal_get_m_StaticIndex() const;

  constexpr int32_t& __cordl_internal_get_m_StaticIndex();

  constexpr ::UnityEngine::UIElements::UIR::ChainBuilderStats const& __cordl_internal_get_m_Stats() const;

  constexpr ::UnityEngine::UIElements::UIR::ChainBuilderStats& __cordl_internal_get_m_Stats();

  constexpr uint32_t const& __cordl_internal_get_m_StatsElementsAdded() const;

  constexpr uint32_t& __cordl_internal_get_m_StatsElementsAdded();

  constexpr uint32_t const& __cordl_internal_get_m_StatsElementsRemoved() const;

  constexpr uint32_t& __cordl_internal_get_m_StatsElementsRemoved();

  constexpr ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::TextureEntry>* const& __cordl_internal_get_m_TexturePool() const;

  constexpr ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::TextureEntry>*& __cordl_internal_get_m_TexturePool();

  constexpr ::UnityEngine::UIElements::TextureRegistry* const& __cordl_internal_get_m_TextureRegistry() const;

  constexpr ::UnityEngine::UIElements::TextureRegistry*& __cordl_internal_get_m_TextureRegistry();

  constexpr ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator const& __cordl_internal_get_shaderInfoAllocator() const;

  constexpr ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator& __cordl_internal_get_shaderInfoAllocator();

  constexpr void __cordl_internal_set__atlas_k__BackingField(::UnityEngine::UIElements::AtlasBase* value);

  constexpr void __cordl_internal_set__device_k__BackingField(::UnityEngine::UIElements::UIR::UIRenderDevice* value);

  constexpr void __cordl_internal_set__disposed_k__BackingField(bool value);

  constexpr void __cordl_internal_set__drawInCameras_k__BackingField(bool value);

  constexpr void __cordl_internal_set__drawStats_k__BackingField(bool value);

  constexpr void __cordl_internal_set__indicesPool_k__BackingField(::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>* value);

  constexpr void __cordl_internal_set__jobManager_k__BackingField(::UnityEngine::UIElements::UIR::JobManager* value);

  constexpr void __cordl_internal_set__opacityIdAccelerator_k__BackingField(::UnityEngine::UIElements::UIR::OpacityIdAccelerator* value);

  constexpr void __cordl_internal_set__painter_k__BackingField(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter* value);

  constexpr void __cordl_internal_set__panel_k__BackingField(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  constexpr void __cordl_internal_set__vectorImageManager_k__BackingField(::UnityEngine::UIElements::UIR::VectorImageManager* value);

  constexpr void __cordl_internal_set__vertsPool_k__BackingField(::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>* value);

  constexpr void __cordl_internal_set_m_ActiveRenderNodes(int32_t value);

  constexpr void __cordl_internal_set_m_BlockDirtyRegistration(bool value);

  constexpr void __cordl_internal_set_m_CommandPool(::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* value);

  constexpr void __cordl_internal_set_m_CustomMaterialCommands(int32_t value);

  constexpr void __cordl_internal_set_m_DefaultMat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_DefaultShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_DefaultWorldSpaceMat(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_DefaultWorldSpaceShader(::UnityW<::UnityEngine::Shader> value);

  constexpr void __cordl_internal_set_m_DirtyTracker(::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking value);

  constexpr void __cordl_internal_set_m_FirstCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value);

  constexpr void __cordl_internal_set_m_RenderNodesData(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChain_RenderNodeData>* value);

  constexpr void __cordl_internal_set_m_StaticIndex(int32_t value);

  constexpr void __cordl_internal_set_m_Stats(::UnityEngine::UIElements::UIR::ChainBuilderStats value);

  constexpr void __cordl_internal_set_m_StatsElementsAdded(uint32_t value);

  constexpr void __cordl_internal_set_m_StatsElementsRemoved(uint32_t value);

  constexpr void __cordl_internal_set_m_TexturePool(::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::TextureEntry>* value);

  constexpr void __cordl_internal_set_m_TextureRegistry(::UnityEngine::UIElements::TextureRegistry* value);

  constexpr void __cordl_internal_set_shaderInfoAllocator(::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator value);

  /// @brief Method .ctor, addr 0x49b71bc, size 0x360, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  static inline ::System::Action* getStaticF_OnPreRender();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerClipProcessing();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerColorsProcessing();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerOpacityProcessing();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerProcess();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerTextRegen();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerTransformProcessing();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_MarkerVisualsProcessing();

  /// @brief Method get_atlas, addr 0x49b9ed8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::AtlasBase* get_atlas();

  /// @brief Method get_device, addr 0x49b9ec8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::UIRenderDevice* get_device();

  /// @brief Method get_disposed, addr 0x49b7d78, size 0x8, virtual false, abstract: false, final false
  inline bool get_disposed();

  /// @brief Method get_drawInCameras, addr 0x49b9f4c, size 0x8, virtual false, abstract: false, final false
  inline bool get_drawInCameras();

  /// @brief Method get_drawStats, addr 0x49b9f38, size 0x8, virtual false, abstract: false, final false
  inline bool get_drawStats();

  /// @brief Method get_indicesPool, addr 0x49b9f08, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>* get_indicesPool();

  /// @brief Method get_jobManager, addr 0x49b9f18, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::JobManager* get_jobManager();

  /// @brief Method get_opacityIdAccelerator, addr 0x49b6f10, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::OpacityIdAccelerator* get_opacityIdAccelerator();

  /// @brief Method get_painter, addr 0x49b9f28, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter* get_painter();

  /// @brief Method get_panel, addr 0x49b9eb8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BaseVisualElementPanel* get_panel();

  /// @brief Method get_vectorImageManager, addr 0x49b9ee8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::VectorImageManager* get_vectorImageManager();

  /// @brief Method get_vertsPool, addr 0x49b9ef8, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>* get_vertsPool();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_OnPreRender(::System::Action* value);

  static inline void setStaticF_s_MarkerClipProcessing(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_MarkerColorsProcessing(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_MarkerOpacityProcessing(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_MarkerProcess(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_MarkerTextRegen(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_MarkerTransformProcessing(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_MarkerVisualsProcessing(::Unity::Profiling::ProfilerMarker value);

  /// @brief Method set_atlas, addr 0x49b9ee0, size 0x8, virtual false, abstract: false, final false
  inline void set_atlas(::UnityEngine::UIElements::AtlasBase* value);

  /// @brief Method set_defaultShader, addr 0x49b9f60, size 0xb0, virtual false, abstract: false, final false
  inline void set_defaultShader(::UnityEngine::Shader* value);

  /// @brief Method set_defaultWorldSpaceShader, addr 0x49ba010, size 0xb0, virtual false, abstract: false, final false
  inline void set_defaultWorldSpaceShader(::UnityEngine::Shader* value);

  /// @brief Method set_device, addr 0x49b9ed0, size 0x8, virtual false, abstract: false, final false
  inline void set_device(::UnityEngine::UIElements::UIR::UIRenderDevice* value);

  /// @brief Method set_disposed, addr 0x49b7d80, size 0xc, virtual false, abstract: false, final false
  inline void set_disposed(bool value);

  /// @brief Method set_drawInCameras, addr 0x49b9f54, size 0xc, virtual false, abstract: false, final false
  inline void set_drawInCameras(bool value);

  /// @brief Method set_drawStats, addr 0x49b9f40, size 0xc, virtual false, abstract: false, final false
  inline void set_drawStats(bool value);

  /// @brief Method set_indicesPool, addr 0x49b9f10, size 0x8, virtual false, abstract: false, final false
  inline void set_indicesPool(::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>* value);

  /// @brief Method set_jobManager, addr 0x49b9f20, size 0x8, virtual false, abstract: false, final false
  inline void set_jobManager(::UnityEngine::UIElements::UIR::JobManager* value);

  /// @brief Method set_opacityIdAccelerator, addr 0x49b6f18, size 0x8, virtual false, abstract: false, final false
  inline void set_opacityIdAccelerator(::UnityEngine::UIElements::UIR::OpacityIdAccelerator* value);

  /// @brief Method set_painter, addr 0x49b9f30, size 0x8, virtual false, abstract: false, final false
  inline void set_painter(::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter* value);

  /// @brief Method set_panel, addr 0x49b9ec0, size 0x8, virtual false, abstract: false, final false
  inline void set_panel(::UnityEngine::UIElements::BaseVisualElementPanel* value);

  /// @brief Method set_vectorImageManager, addr 0x49b9ef0, size 0x8, virtual false, abstract: false, final false
  inline void set_vectorImageManager(::UnityEngine::UIElements::UIR::VectorImageManager* value);

  /// @brief Method set_vertsPool, addr 0x49b9f00, size 0x8, virtual false, abstract: false, final false
  inline void set_vertsPool(::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderChain();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RenderChain", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RenderChain(RenderChain&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RenderChain", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RenderChain(RenderChain const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6384 };

  /// @brief Field m_FirstCommand, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* ___m_FirstCommand;

  /// @brief Field m_DirtyTracker, offset: 0x18, size: 0x28, def value: None
  ::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking ___m_DirtyTracker;

  /// @brief Field m_CommandPool, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::LinkedPool_1<::UnityEngine::UIElements::UIR::RenderChainCommand*>* ___m_CommandPool;

  /// @brief Field m_TexturePool, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BasicNodePool_1<::UnityEngine::UIElements::UIR::TextureEntry>* ___m_TexturePool;

  /// @brief Field m_RenderNodesData, offset: 0x50, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::RenderChain_RenderNodeData>* ___m_RenderNodesData;

  /// @brief Field m_DefaultShader, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_DefaultShader;

  /// @brief Field m_DefaultWorldSpaceShader, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Shader> ___m_DefaultWorldSpaceShader;

  /// @brief Field m_DefaultMat, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_DefaultMat;

  /// @brief Field m_DefaultWorldSpaceMat, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_DefaultWorldSpaceMat;

  /// @brief Field m_BlockDirtyRegistration, offset: 0x78, size: 0x1, def value: None
  bool ___m_BlockDirtyRegistration;

  /// @brief Field m_StaticIndex, offset: 0x7c, size: 0x4, def value: None
  int32_t ___m_StaticIndex;

  /// @brief Field m_ActiveRenderNodes, offset: 0x80, size: 0x4, def value: None
  int32_t ___m_ActiveRenderNodes;

  /// @brief Field m_CustomMaterialCommands, offset: 0x84, size: 0x4, def value: None
  int32_t ___m_CustomMaterialCommands;

  /// @brief Field m_Stats, offset: 0x88, size: 0x60, def value: None
  ::UnityEngine::UIElements::UIR::ChainBuilderStats ___m_Stats;

  /// @brief Field m_StatsElementsAdded, offset: 0xe8, size: 0x4, def value: None
  uint32_t ___m_StatsElementsAdded;

  /// @brief Field m_StatsElementsRemoved, offset: 0xec, size: 0x4, def value: None
  uint32_t ___m_StatsElementsRemoved;

  /// @brief Field m_TextureRegistry, offset: 0xf0, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextureRegistry* ___m_TextureRegistry;

  /// @brief Field <opacityIdAccelerator>k__BackingField, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::OpacityIdAccelerator* ____opacityIdAccelerator_k__BackingField;

  /// @brief Field <disposed>k__BackingField, offset: 0x100, size: 0x1, def value: None
  bool ____disposed_k__BackingField;

  /// @brief Field <panel>k__BackingField, offset: 0x108, size: 0x8, def value: None
  ::UnityEngine::UIElements::BaseVisualElementPanel* ____panel_k__BackingField;

  /// @brief Field <device>k__BackingField, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::UIRenderDevice* ____device_k__BackingField;

  /// @brief Field <atlas>k__BackingField, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::UIElements::AtlasBase* ____atlas_k__BackingField;

  /// @brief Field <vectorImageManager>k__BackingField, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::VectorImageManager* ____vectorImageManager_k__BackingField;

  /// @brief Field <vertsPool>k__BackingField, offset: 0x128, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::TempAllocator_1<::UnityEngine::UIElements::Vertex>* ____vertsPool_k__BackingField;

  /// @brief Field <indicesPool>k__BackingField, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::TempAllocator_1<uint16_t>* ____indicesPool_k__BackingField;

  /// @brief Field <jobManager>k__BackingField, offset: 0x138, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::JobManager* ____jobManager_k__BackingField;

  /// @brief Field shaderInfoAllocator, offset: 0x140, size: 0xd0, def value: None
  ::UnityEngine::UIElements::UIR::UIRVEShaderInfoAllocator ___shaderInfoAllocator;

  /// @brief Field <painter>k__BackingField, offset: 0x210, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter* ____painter_k__BackingField;

  /// @brief Field <drawStats>k__BackingField, offset: 0x218, size: 0x1, def value: None
  bool ____drawStats_k__BackingField;

  /// @brief Field <drawInCameras>k__BackingField, offset: 0x219, size: 0x1, def value: None
  bool ____drawInCameras_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_FirstCommand) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_DirtyTracker) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_CommandPool) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_TexturePool) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_RenderNodesData) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_DefaultShader) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_DefaultWorldSpaceShader) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_DefaultMat) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_DefaultWorldSpaceMat) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_BlockDirtyRegistration) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_StaticIndex) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_ActiveRenderNodes) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_CustomMaterialCommands) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_Stats) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_StatsElementsAdded) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_StatsElementsRemoved) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___m_TextureRegistry) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____opacityIdAccelerator_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____disposed_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____panel_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____device_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____atlas_k__BackingField) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____vectorImageManager_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____vertsPool_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____indicesPool_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____jobManager_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ___shaderInfoAllocator) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____painter_k__BackingField) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____drawStats_k__BackingField) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::RenderChain, ____drawInCameras_k__BackingField) == 0x219, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::RenderChain, 0x220>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::RenderChain);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderChain*, "UnityEngine.UIElements.UIR", "RenderChain");
NEED_NO_BOX(::UnityEngine::UIElements::UIR::RenderChain___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderChain___c*, "UnityEngine.UIElements.UIR", "RenderChain/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderChain_DepthOrderedDirtyTracking, "UnityEngine.UIElements.UIR", "RenderChain/DepthOrderedDirtyTracking");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderChain_RenderChainStaticIndexAllocator, "UnityEngine.UIElements.UIR", "RenderChain/RenderChainStaticIndexAllocator");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::RenderChain_RenderNodeData, "UnityEngine.UIElements.UIR", "RenderChain/RenderNodeData");
