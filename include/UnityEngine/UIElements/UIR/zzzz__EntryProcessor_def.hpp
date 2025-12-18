#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/EntryProcessor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__BMPAlloc_def.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__VertexFlags_def.hpp"
#include "UnityEngine/UIElements/zzzz__Vertex_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EntryProcessor)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Stack_1;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace UnityEngine::UIElements::UIR {
struct ChainBuilderStats;
}
namespace UnityEngine::UIElements::UIR {
struct EntryPreProcessor_AllocSize;
}
namespace UnityEngine::UIElements::UIR {
class EntryPreProcessor;
}
namespace UnityEngine::UIElements::UIR {
struct EntryProcessor_MaskMesh;
}
namespace UnityEngine::UIElements::UIR {
class Entry;
}
namespace UnityEngine::UIElements::UIR {
class MeshHandle;
}
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
namespace UnityEngine::UIElements::UIR {
class RenderChain;
}
namespace UnityEngine::UIElements::UIR {
class UIRenderDevice;
}
namespace UnityEngine::UIElements {
struct TextureId;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine::UIElements {
struct VisualElement_RenderTargetMode;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class EntryProcessor;
}
namespace UnityEngine::UIElements::UIR {
struct EntryProcessor_MaskMesh;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::EntryProcessor);
MARK_VAL_T(::UnityEngine::UIElements::UIR::EntryProcessor_MaskMesh);
// Dependencies Unity.Collections.NativeSlice`1<T>, UnityEngine.UIElements.Vertex
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.EntryProcessor/MaskMesh
struct CORDL_TYPE EntryProcessor_MaskMesh {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr EntryProcessor_MaskMesh();

  // Ctor Parameters [CppParam { name: "vertices", ty: "::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>", modifiers: "", def_value: None }, CppParam { name: "indices", ty:
  // "::Unity::Collections::NativeSlice_1<uint16_t>", modifiers: "", def_value: None }, CppParam { name: "indexOffset", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EntryProcessor_MaskMesh(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices, ::Unity::Collections::NativeSlice_1<uint16_t> indices,
                                    int32_t indexOffset) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5291 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field vertices, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> vertices;

  /// @brief Field indices, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<uint16_t> indices;

  /// @brief Field indexOffset, offset: 0x20, size: 0x4, def value: None
  int32_t indexOffset;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor_MaskMesh, vertices) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor_MaskMesh, indices) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor_MaskMesh, indexOffset) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::EntryProcessor_MaskMesh, 0x28>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
// Dependencies System.Object, Unity.Collections.NativeSlice`1<T>, UnityEngine.Color32, UnityEngine.Matrix4x4, UnityEngine.Rect, UnityEngine.UIElements.UIR.BMPAlloc,
// UnityEngine.UIElements.UIR.VertexFlags, UnityEngine.UIElements.Vertex
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.EntryProcessor
class CORDL_TYPE EntryProcessor : public ::System::Object {
public:
  // Declarations
  using MaskMesh = ::UnityEngine::UIElements::UIR::EntryProcessor_MaskMesh;

  /// @brief Field <firstHeadCommand>k__BackingField, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get__firstHeadCommand_k__BackingField,
                      put = __cordl_internal_set__firstHeadCommand_k__BackingField)) ::UnityEngine::UIElements::UIR::RenderChainCommand* _firstHeadCommand_k__BackingField;

  /// @brief Field <firstTailCommand>k__BackingField, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get__firstTailCommand_k__BackingField,
                      put = __cordl_internal_set__firstTailCommand_k__BackingField)) ::UnityEngine::UIElements::UIR::RenderChainCommand* _firstTailCommand_k__BackingField;

  /// @brief Field <lastHeadCommand>k__BackingField, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get__lastHeadCommand_k__BackingField,
                      put = __cordl_internal_set__lastHeadCommand_k__BackingField)) ::UnityEngine::UIElements::UIR::RenderChainCommand* _lastHeadCommand_k__BackingField;

  /// @brief Field <lastTailCommand>k__BackingField, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get__lastTailCommand_k__BackingField,
                      put = __cordl_internal_set__lastTailCommand_k__BackingField)) ::UnityEngine::UIElements::UIR::RenderChainCommand* _lastTailCommand_k__BackingField;

  __declspec(property(get = get_firstHeadCommand, put = set_firstHeadCommand)) ::UnityEngine::UIElements::UIR::RenderChainCommand* firstHeadCommand;

  __declspec(property(get = get_firstTailCommand, put = set_firstTailCommand)) ::UnityEngine::UIElements::UIR::RenderChainCommand* firstTailCommand;

  __declspec(property(get = get_lastHeadCommand, put = set_lastHeadCommand)) ::UnityEngine::UIElements::UIR::RenderChainCommand* lastHeadCommand;

  __declspec(property(get = get_lastTailCommand, put = set_lastTailCommand)) ::UnityEngine::UIElements::UIR::RenderChainCommand* lastTailCommand;

  /// @brief Field m_AllocIndex, offset 0xe8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AllocIndex, put = __cordl_internal_set_m_AllocIndex)) int32_t m_AllocIndex;

  /// @brief Field m_AllocVertexCount, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AllocVertexCount, put = __cordl_internal_set_m_AllocVertexCount)) int32_t m_AllocVertexCount;

  /// @brief Field m_AtlasRect, offset 0xfc, size 0x10
  __declspec(property(get = __cordl_internal_get_m_AtlasRect, put = __cordl_internal_set_m_AtlasRect)) ::UnityEngine::Rect m_AtlasRect;

  /// @brief Field m_ClipRectId, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ClipRectId, put = __cordl_internal_set_m_ClipRectId)) ::UnityEngine::UIElements::UIR::BMPAlloc m_ClipRectId;

  /// @brief Field m_ClipRectIdPopped, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ClipRectIdPopped, put = __cordl_internal_set_m_ClipRectIdPopped)) ::UnityEngine::UIElements::UIR::BMPAlloc m_ClipRectIdPopped;

  /// @brief Field m_ClipRectIdPushed, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ClipRectIdPushed, put = __cordl_internal_set_m_ClipRectIdPushed)) ::UnityEngine::UIElements::UIR::BMPAlloc m_ClipRectIdPushed;

  /// @brief Field m_CurrentElement, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentElement, put = __cordl_internal_set_m_CurrentElement)) ::UnityEngine::UIElements::VisualElement* m_CurrentElement;

  /// @brief Field m_FirstCommand, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FirstCommand, put = __cordl_internal_set_m_FirstCommand)) ::UnityEngine::UIElements::UIR::RenderChainCommand* m_FirstCommand;

  /// @brief Field m_GradientSettingIndexOffset, offset 0x10c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_GradientSettingIndexOffset, put = __cordl_internal_set_m_GradientSettingIndexOffset)) int32_t m_GradientSettingIndexOffset;

  /// @brief Field m_IndexOffset, offset 0xe0, size 0x2
  __declspec(property(get = __cordl_internal_get_m_IndexOffset, put = __cordl_internal_set_m_IndexOffset)) uint16_t m_IndexOffset;

  /// @brief Field m_Indices, offset 0xd0, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Indices, put = __cordl_internal_set_m_Indices)) ::Unity::Collections::NativeSlice_1<uint16_t> m_Indices;

  /// @brief Field m_IndicesFilled, offset 0xf0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_IndicesFilled, put = __cordl_internal_set_m_IndicesFilled)) int32_t m_IndicesFilled;

  /// @brief Field m_IsDrawingMask, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsDrawingMask, put = __cordl_internal_set_m_IsDrawingMask)) bool m_IsDrawingMask;

  /// @brief Field m_IsTail, offset 0x110, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsTail, put = __cordl_internal_set_m_IsTail)) bool m_IsTail;

  /// @brief Field m_LastCommand, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LastCommand, put = __cordl_internal_set_m_LastCommand)) ::UnityEngine::UIElements::UIR::RenderChainCommand* m_LastCommand;

  /// @brief Field m_MaskDepth, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaskDepth, put = __cordl_internal_set_m_MaskDepth)) int32_t m_MaskDepth;

  /// @brief Field m_MaskDepthPopped, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaskDepthPopped, put = __cordl_internal_set_m_MaskDepthPopped)) int32_t m_MaskDepthPopped;

  /// @brief Field m_MaskDepthPushed, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaskDepthPushed, put = __cordl_internal_set_m_MaskDepthPushed)) int32_t m_MaskDepthPushed;

  /// @brief Field m_MaskMeshes, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaskMeshes,
                      put = __cordl_internal_set_m_MaskMeshes)) ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::EntryProcessor_MaskMesh>* m_MaskMeshes;

  /// @brief Field m_Mesh, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Mesh, put = __cordl_internal_set_m_Mesh)) ::UnityEngine::UIElements::UIR::MeshHandle* m_Mesh;

  /// @brief Field m_OpacityData, offset 0xb0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_OpacityData, put = __cordl_internal_set_m_OpacityData)) ::UnityEngine::Color32 m_OpacityData;

  /// @brief Field m_PreProcessor, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PreProcessor, put = __cordl_internal_set_m_PreProcessor)) ::UnityEngine::UIElements::UIR::EntryPreProcessor* m_PreProcessor;

  /// @brief Field m_RemapUVs, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RemapUVs, put = __cordl_internal_set_m_RemapUVs)) bool m_RemapUVs;

  /// @brief Field m_RenderChain, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderChain, put = __cordl_internal_set_m_RenderChain)) ::UnityEngine::UIElements::UIR::RenderChain* m_RenderChain;

  /// @brief Field m_RenderType, offset 0xf4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RenderType, put = __cordl_internal_set_m_RenderType)) ::UnityEngine::UIElements::UIR::VertexFlags m_RenderType;

  /// @brief Field m_StencilRef, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StencilRef, put = __cordl_internal_set_m_StencilRef)) int32_t m_StencilRef;

  /// @brief Field m_StencilRefPopped, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StencilRefPopped, put = __cordl_internal_set_m_StencilRefPopped)) int32_t m_StencilRefPopped;

  /// @brief Field m_StencilRefPushed, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_StencilRefPushed, put = __cordl_internal_set_m_StencilRefPushed)) int32_t m_StencilRefPushed;

  /// @brief Field m_TextCoreSettingsPage, offset 0xb4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TextCoreSettingsPage, put = __cordl_internal_set_m_TextCoreSettingsPage)) ::UnityEngine::Color32 m_TextCoreSettingsPage;

  /// @brief Field m_Transform, offset 0x6c, size 0x40
  __declspec(property(get = __cordl_internal_get_m_Transform, put = __cordl_internal_set_m_Transform)) ::UnityEngine::Matrix4x4 m_Transform;

  /// @brief Field m_TransformData, offset 0xac, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TransformData, put = __cordl_internal_set_m_TransformData)) ::UnityEngine::Color32 m_TransformData;

  /// @brief Field m_VertexDataComputed, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_m_VertexDataComputed, put = __cordl_internal_set_m_VertexDataComputed)) bool m_VertexDataComputed;

  /// @brief Field m_Verts, offset 0xc0, size 0x10
  __declspec(property(get = __cordl_internal_get_m_Verts, put = __cordl_internal_set_m_Verts)) ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> m_Verts;

  /// @brief Field m_VertsFilled, offset 0xec, size 0x4
  __declspec(property(get = __cordl_internal_get_m_VertsFilled, put = __cordl_internal_set_m_VertsFilled)) int32_t m_VertsFilled;

  /// @brief Field s_blitMaterial_GammaToLinear, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_blitMaterial_GammaToLinear, put = setStaticF_s_blitMaterial_GammaToLinear)) ::UnityW<::UnityEngine::Material> s_blitMaterial_GammaToLinear;

  /// @brief Field s_blitMaterial_LinearToGamma, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_blitMaterial_LinearToGamma, put = setStaticF_s_blitMaterial_LinearToGamma)) ::UnityW<::UnityEngine::Material> s_blitMaterial_LinearToGamma;

  /// @brief Field s_blitMaterial_NoChange, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_blitMaterial_NoChange, put = setStaticF_s_blitMaterial_NoChange)) ::UnityW<::UnityEngine::Material> s_blitMaterial_NoChange;

  /// @brief Field s_blitShader, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_blitShader, put = setStaticF_s_blitShader)) ::UnityW<::UnityEngine::Shader> s_blitShader;

  /// @brief Method AppendCommand, addr 0x6b10224, size 0x40, virtual false, abstract: false, final false
  inline void AppendCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* next);

  /// @brief Method ClearReferences, addr 0x6b0e81c, size 0x38, virtual false, abstract: false, final false
  inline void ClearReferences();

  /// @brief Method CreateBlitShader, addr 0x6b10354, size 0x1fc, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> CreateBlitShader(float_t colorConversion);

  /// @brief Method CreateMeshDrawCommand, addr 0x6b10144, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderChainCommand* CreateMeshDrawCommand(::UnityEngine::UIElements::UIR::MeshHandle* mesh, int32_t indexCount, int32_t indexOffset,
                                                                                   ::UnityEngine::Material* material, ::UnityEngine::UIElements::TextureId texture);

  /// @brief Method DrawReverseMask, addr 0x6b0faa4, size 0x2ac, virtual false, abstract: false, final false
  inline void DrawReverseMask();

  /// @brief Method GetBlitMaterial, addr 0x6b0fd50, size 0x244, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetBlitMaterial(::UnityEngine::UIElements::VisualElement_RenderTargetMode mode);

  /// @brief Method Init, addr 0x6b0e5cc, size 0x250, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::UIR::Entry* root, ::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve);

  static inline ::UnityEngine::UIElements::UIR::EntryProcessor* New_ctor();

  /// @brief Method ProcessFirstAlloc, addr 0x6b0e8b4, size 0x130, virtual false, abstract: false, final false
  inline void ProcessFirstAlloc(::System::Collections::Generic::List_1<::UnityEngine::UIElements::UIR::EntryPreProcessor_AllocSize>* allocList,
                                ::ByRef<::UnityEngine::UIElements::UIR::MeshHandle*> mesh);

  /// @brief Method ProcessHead, addr 0x6b0e854, size 0x60, virtual false, abstract: false, final false
  inline void ProcessHead();

  /// @brief Method ProcessMeshEntry, addr 0x6b0f494, size 0x610, virtual false, abstract: false, final false
  inline void ProcessMeshEntry(::UnityEngine::UIElements::UIR::Entry* entry, ::UnityEngine::UIElements::TextureId textureId);

  /// @brief Method ProcessNextAlloc, addr 0x6b0ff94, size 0x14c, virtual false, abstract: false, final false
  inline void ProcessNextAlloc();

  /// @brief Method ProcessRange, addr 0x6b0e9e4, size 0x994, virtual false, abstract: false, final false
  inline void ProcessRange(int32_t first, int32_t last);

  /// @brief Method ProcessTail, addr 0x6b0f378, size 0x11c, virtual false, abstract: false, final false
  inline void ProcessTail();

  /// @brief Method UpdateOrAllocate, addr 0x6b10264, size 0xf0, virtual false, abstract: false, final false
  static inline void UpdateOrAllocate(::ByRef<::UnityEngine::UIElements::UIR::MeshHandle*> data, int32_t vertexCount, int32_t indexCount, ::UnityEngine::UIElements::UIR::UIRenderDevice* device,
                                      ::ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> verts, ::ByRef<::Unity::Collections::NativeSlice_1<uint16_t>> indices,
                                      ::ByRef<uint16_t> indexOffset, ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& __cordl_internal_get__firstHeadCommand_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& __cordl_internal_get__firstHeadCommand_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& __cordl_internal_get__firstTailCommand_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& __cordl_internal_get__firstTailCommand_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& __cordl_internal_get__lastHeadCommand_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& __cordl_internal_get__lastHeadCommand_k__BackingField();

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& __cordl_internal_get__lastTailCommand_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& __cordl_internal_get__lastTailCommand_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_m_AllocIndex() const;

  constexpr int32_t& __cordl_internal_get_m_AllocIndex();

  constexpr int32_t const& __cordl_internal_get_m_AllocVertexCount() const;

  constexpr int32_t& __cordl_internal_get_m_AllocVertexCount();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_AtlasRect() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_AtlasRect();

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __cordl_internal_get_m_ClipRectId() const;

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __cordl_internal_get_m_ClipRectId();

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __cordl_internal_get_m_ClipRectIdPopped() const;

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __cordl_internal_get_m_ClipRectIdPopped();

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc const& __cordl_internal_get_m_ClipRectIdPushed() const;

  constexpr ::UnityEngine::UIElements::UIR::BMPAlloc& __cordl_internal_get_m_ClipRectIdPushed();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_CurrentElement() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_CurrentElement();

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& __cordl_internal_get_m_FirstCommand() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& __cordl_internal_get_m_FirstCommand();

  constexpr int32_t const& __cordl_internal_get_m_GradientSettingIndexOffset() const;

  constexpr int32_t& __cordl_internal_get_m_GradientSettingIndexOffset();

  constexpr uint16_t const& __cordl_internal_get_m_IndexOffset() const;

  constexpr uint16_t& __cordl_internal_get_m_IndexOffset();

  constexpr ::Unity::Collections::NativeSlice_1<uint16_t> const& __cordl_internal_get_m_Indices() const;

  constexpr ::Unity::Collections::NativeSlice_1<uint16_t>& __cordl_internal_get_m_Indices();

  constexpr int32_t const& __cordl_internal_get_m_IndicesFilled() const;

  constexpr int32_t& __cordl_internal_get_m_IndicesFilled();

  constexpr bool const& __cordl_internal_get_m_IsDrawingMask() const;

  constexpr bool& __cordl_internal_get_m_IsDrawingMask();

  constexpr bool const& __cordl_internal_get_m_IsTail() const;

  constexpr bool& __cordl_internal_get_m_IsTail();

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand* const& __cordl_internal_get_m_LastCommand() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderChainCommand*& __cordl_internal_get_m_LastCommand();

  constexpr int32_t const& __cordl_internal_get_m_MaskDepth() const;

  constexpr int32_t& __cordl_internal_get_m_MaskDepth();

  constexpr int32_t const& __cordl_internal_get_m_MaskDepthPopped() const;

  constexpr int32_t& __cordl_internal_get_m_MaskDepthPopped();

  constexpr int32_t const& __cordl_internal_get_m_MaskDepthPushed() const;

  constexpr int32_t& __cordl_internal_get_m_MaskDepthPushed();

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::EntryProcessor_MaskMesh>* const& __cordl_internal_get_m_MaskMeshes() const;

  constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::EntryProcessor_MaskMesh>*& __cordl_internal_get_m_MaskMeshes();

  constexpr ::UnityEngine::UIElements::UIR::MeshHandle* const& __cordl_internal_get_m_Mesh() const;

  constexpr ::UnityEngine::UIElements::UIR::MeshHandle*& __cordl_internal_get_m_Mesh();

  constexpr ::UnityEngine::Color32 const& __cordl_internal_get_m_OpacityData() const;

  constexpr ::UnityEngine::Color32& __cordl_internal_get_m_OpacityData();

  constexpr ::UnityEngine::UIElements::UIR::EntryPreProcessor* const& __cordl_internal_get_m_PreProcessor() const;

  constexpr ::UnityEngine::UIElements::UIR::EntryPreProcessor*& __cordl_internal_get_m_PreProcessor();

  constexpr bool const& __cordl_internal_get_m_RemapUVs() const;

  constexpr bool& __cordl_internal_get_m_RemapUVs();

  constexpr ::UnityEngine::UIElements::UIR::RenderChain* const& __cordl_internal_get_m_RenderChain() const;

  constexpr ::UnityEngine::UIElements::UIR::RenderChain*& __cordl_internal_get_m_RenderChain();

  constexpr ::UnityEngine::UIElements::UIR::VertexFlags const& __cordl_internal_get_m_RenderType() const;

  constexpr ::UnityEngine::UIElements::UIR::VertexFlags& __cordl_internal_get_m_RenderType();

  constexpr int32_t const& __cordl_internal_get_m_StencilRef() const;

  constexpr int32_t& __cordl_internal_get_m_StencilRef();

  constexpr int32_t const& __cordl_internal_get_m_StencilRefPopped() const;

  constexpr int32_t& __cordl_internal_get_m_StencilRefPopped();

  constexpr int32_t const& __cordl_internal_get_m_StencilRefPushed() const;

  constexpr int32_t& __cordl_internal_get_m_StencilRefPushed();

  constexpr ::UnityEngine::Color32 const& __cordl_internal_get_m_TextCoreSettingsPage() const;

  constexpr ::UnityEngine::Color32& __cordl_internal_get_m_TextCoreSettingsPage();

  constexpr ::UnityEngine::Matrix4x4 const& __cordl_internal_get_m_Transform() const;

  constexpr ::UnityEngine::Matrix4x4& __cordl_internal_get_m_Transform();

  constexpr ::UnityEngine::Color32 const& __cordl_internal_get_m_TransformData() const;

  constexpr ::UnityEngine::Color32& __cordl_internal_get_m_TransformData();

  constexpr bool const& __cordl_internal_get_m_VertexDataComputed() const;

  constexpr bool& __cordl_internal_get_m_VertexDataComputed();

  constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> const& __cordl_internal_get_m_Verts() const;

  constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>& __cordl_internal_get_m_Verts();

  constexpr int32_t const& __cordl_internal_get_m_VertsFilled() const;

  constexpr int32_t& __cordl_internal_get_m_VertsFilled();

  constexpr void __cordl_internal_set__firstHeadCommand_k__BackingField(::UnityEngine::UIElements::UIR::RenderChainCommand* value);

  constexpr void __cordl_internal_set__firstTailCommand_k__BackingField(::UnityEngine::UIElements::UIR::RenderChainCommand* value);

  constexpr void __cordl_internal_set__lastHeadCommand_k__BackingField(::UnityEngine::UIElements::UIR::RenderChainCommand* value);

  constexpr void __cordl_internal_set__lastTailCommand_k__BackingField(::UnityEngine::UIElements::UIR::RenderChainCommand* value);

  constexpr void __cordl_internal_set_m_AllocIndex(int32_t value);

  constexpr void __cordl_internal_set_m_AllocVertexCount(int32_t value);

  constexpr void __cordl_internal_set_m_AtlasRect(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_ClipRectId(::UnityEngine::UIElements::UIR::BMPAlloc value);

  constexpr void __cordl_internal_set_m_ClipRectIdPopped(::UnityEngine::UIElements::UIR::BMPAlloc value);

  constexpr void __cordl_internal_set_m_ClipRectIdPushed(::UnityEngine::UIElements::UIR::BMPAlloc value);

  constexpr void __cordl_internal_set_m_CurrentElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_FirstCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value);

  constexpr void __cordl_internal_set_m_GradientSettingIndexOffset(int32_t value);

  constexpr void __cordl_internal_set_m_IndexOffset(uint16_t value);

  constexpr void __cordl_internal_set_m_Indices(::Unity::Collections::NativeSlice_1<uint16_t> value);

  constexpr void __cordl_internal_set_m_IndicesFilled(int32_t value);

  constexpr void __cordl_internal_set_m_IsDrawingMask(bool value);

  constexpr void __cordl_internal_set_m_IsTail(bool value);

  constexpr void __cordl_internal_set_m_LastCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value);

  constexpr void __cordl_internal_set_m_MaskDepth(int32_t value);

  constexpr void __cordl_internal_set_m_MaskDepthPopped(int32_t value);

  constexpr void __cordl_internal_set_m_MaskDepthPushed(int32_t value);

  constexpr void __cordl_internal_set_m_MaskMeshes(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::EntryProcessor_MaskMesh>* value);

  constexpr void __cordl_internal_set_m_Mesh(::UnityEngine::UIElements::UIR::MeshHandle* value);

  constexpr void __cordl_internal_set_m_OpacityData(::UnityEngine::Color32 value);

  constexpr void __cordl_internal_set_m_PreProcessor(::UnityEngine::UIElements::UIR::EntryPreProcessor* value);

  constexpr void __cordl_internal_set_m_RemapUVs(bool value);

  constexpr void __cordl_internal_set_m_RenderChain(::UnityEngine::UIElements::UIR::RenderChain* value);

  constexpr void __cordl_internal_set_m_RenderType(::UnityEngine::UIElements::UIR::VertexFlags value);

  constexpr void __cordl_internal_set_m_StencilRef(int32_t value);

  constexpr void __cordl_internal_set_m_StencilRefPopped(int32_t value);

  constexpr void __cordl_internal_set_m_StencilRefPushed(int32_t value);

  constexpr void __cordl_internal_set_m_TextCoreSettingsPage(::UnityEngine::Color32 value);

  constexpr void __cordl_internal_set_m_Transform(::UnityEngine::Matrix4x4 value);

  constexpr void __cordl_internal_set_m_TransformData(::UnityEngine::Color32 value);

  constexpr void __cordl_internal_set_m_VertexDataComputed(bool value);

  constexpr void __cordl_internal_set_m_Verts(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> value);

  constexpr void __cordl_internal_set_m_VertsFilled(int32_t value);

  /// @brief Method .ctor, addr 0x6b10550, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_blitMaterial_GammaToLinear();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_blitMaterial_LinearToGamma();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_blitMaterial_NoChange();

  static inline ::UnityW<::UnityEngine::Shader> getStaticF_s_blitShader();

  /// @brief Method get_firstHeadCommand, addr 0x6b0e58c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderChainCommand* get_firstHeadCommand();

  /// @brief Method get_firstTailCommand, addr 0x6b0e5ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderChainCommand* get_firstTailCommand();

  /// @brief Method get_lastHeadCommand, addr 0x6b0e59c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderChainCommand* get_lastHeadCommand();

  /// @brief Method get_lastTailCommand, addr 0x6b0e5bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::UIR::RenderChainCommand* get_lastTailCommand();

  static inline void setStaticF_s_blitMaterial_GammaToLinear(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_blitMaterial_LinearToGamma(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_blitMaterial_NoChange(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_blitShader(::UnityW<::UnityEngine::Shader> value);

  /// @brief Method set_firstHeadCommand, addr 0x6b0e594, size 0x8, virtual false, abstract: false, final false
  inline void set_firstHeadCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value);

  /// @brief Method set_firstTailCommand, addr 0x6b0e5b4, size 0x8, virtual false, abstract: false, final false
  inline void set_firstTailCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value);

  /// @brief Method set_lastHeadCommand, addr 0x6b0e5a4, size 0x8, virtual false, abstract: false, final false
  inline void set_lastHeadCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value);

  /// @brief Method set_lastTailCommand, addr 0x6b0e5c4, size 0x8, virtual false, abstract: false, final false
  inline void set_lastTailCommand(::UnityEngine::UIElements::UIR::RenderChainCommand* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EntryProcessor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EntryProcessor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EntryProcessor(EntryProcessor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EntryProcessor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EntryProcessor(EntryProcessor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5292 };

  /// @brief Field m_PreProcessor, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::EntryPreProcessor* ___m_PreProcessor;

  /// @brief Field m_RenderChain, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChain* ___m_RenderChain;

  /// @brief Field m_CurrentElement, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_CurrentElement;

  /// @brief Field m_MaskDepth, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_MaskDepth;

  /// @brief Field m_MaskDepthPopped, offset: 0x2c, size: 0x4, def value: None
  int32_t ___m_MaskDepthPopped;

  /// @brief Field m_MaskDepthPushed, offset: 0x30, size: 0x4, def value: None
  int32_t ___m_MaskDepthPushed;

  /// @brief Field m_StencilRef, offset: 0x34, size: 0x4, def value: None
  int32_t ___m_StencilRef;

  /// @brief Field m_StencilRefPopped, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_StencilRefPopped;

  /// @brief Field m_StencilRefPushed, offset: 0x3c, size: 0x4, def value: None
  int32_t ___m_StencilRefPushed;

  /// @brief Field m_ClipRectId, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc ___m_ClipRectId;

  /// @brief Field m_ClipRectIdPopped, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc ___m_ClipRectIdPopped;

  /// @brief Field m_ClipRectIdPushed, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::BMPAlloc ___m_ClipRectIdPushed;

  /// @brief Field m_IsDrawingMask, offset: 0x58, size: 0x1, def value: None
  bool ___m_IsDrawingMask;

  /// @brief Field m_MaskMeshes, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::UIR::EntryProcessor_MaskMesh>* ___m_MaskMeshes;

  /// @brief Field m_VertexDataComputed, offset: 0x68, size: 0x1, def value: None
  bool ___m_VertexDataComputed;

  /// @brief Field m_Transform, offset: 0x6c, size: 0x40, def value: None
  ::UnityEngine::Matrix4x4 ___m_Transform;

  /// @brief Field m_TransformData, offset: 0xac, size: 0x4, def value: None
  ::UnityEngine::Color32 ___m_TransformData;

  /// @brief Field m_OpacityData, offset: 0xb0, size: 0x4, def value: None
  ::UnityEngine::Color32 ___m_OpacityData;

  /// @brief Field m_TextCoreSettingsPage, offset: 0xb4, size: 0x4, def value: None
  ::UnityEngine::Color32 ___m_TextCoreSettingsPage;

  /// @brief Field m_Mesh, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::MeshHandle* ___m_Mesh;

  /// @brief Field m_Verts, offset: 0xc0, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> ___m_Verts;

  /// @brief Field m_Indices, offset: 0xd0, size: 0x10, def value: None
  ::Unity::Collections::NativeSlice_1<uint16_t> ___m_Indices;

  /// @brief Field m_IndexOffset, offset: 0xe0, size: 0x2, def value: None
  uint16_t ___m_IndexOffset;

  /// @brief Field m_AllocVertexCount, offset: 0xe4, size: 0x4, def value: None
  int32_t ___m_AllocVertexCount;

  /// @brief Field m_AllocIndex, offset: 0xe8, size: 0x4, def value: None
  int32_t ___m_AllocIndex;

  /// @brief Field m_VertsFilled, offset: 0xec, size: 0x4, def value: None
  int32_t ___m_VertsFilled;

  /// @brief Field m_IndicesFilled, offset: 0xf0, size: 0x4, def value: None
  int32_t ___m_IndicesFilled;

  /// @brief Field m_RenderType, offset: 0xf4, size: 0x4, def value: None
  ::UnityEngine::UIElements::UIR::VertexFlags ___m_RenderType;

  /// @brief Field m_RemapUVs, offset: 0xf8, size: 0x1, def value: None
  bool ___m_RemapUVs;

  /// @brief Field m_AtlasRect, offset: 0xfc, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_AtlasRect;

  /// @brief Field m_GradientSettingIndexOffset, offset: 0x10c, size: 0x4, def value: None
  int32_t ___m_GradientSettingIndexOffset;

  /// @brief Field m_IsTail, offset: 0x110, size: 0x1, def value: None
  bool ___m_IsTail;

  /// @brief Field m_FirstCommand, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* ___m_FirstCommand;

  /// @brief Field m_LastCommand, offset: 0x120, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* ___m_LastCommand;

  /// @brief Field <firstHeadCommand>k__BackingField, offset: 0x128, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* ____firstHeadCommand_k__BackingField;

  /// @brief Field <lastHeadCommand>k__BackingField, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* ____lastHeadCommand_k__BackingField;

  /// @brief Field <firstTailCommand>k__BackingField, offset: 0x138, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* ____firstTailCommand_k__BackingField;

  /// @brief Field <lastTailCommand>k__BackingField, offset: 0x140, size: 0x8, def value: None
  ::UnityEngine::UIElements::UIR::RenderChainCommand* ____lastTailCommand_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_PreProcessor) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_RenderChain) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_CurrentElement) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_MaskDepth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_MaskDepthPopped) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_MaskDepthPushed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_StencilRef) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_StencilRefPopped) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_StencilRefPushed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_ClipRectId) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_ClipRectIdPopped) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_ClipRectIdPushed) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_IsDrawingMask) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_MaskMeshes) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_VertexDataComputed) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_Transform) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_TransformData) == 0xac, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_OpacityData) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_TextCoreSettingsPage) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_Mesh) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_Verts) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_Indices) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_IndexOffset) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_AllocVertexCount) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_AllocIndex) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_VertsFilled) == 0xec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_IndicesFilled) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_RenderType) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_RemapUVs) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_AtlasRect) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_GradientSettingIndexOffset) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_IsTail) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_FirstCommand) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ___m_LastCommand) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ____firstHeadCommand_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ____lastHeadCommand_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ____firstTailCommand_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::UIR::EntryProcessor, ____lastTailCommand_k__BackingField) == 0x140, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::EntryProcessor, 0x148>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
NEED_NO_BOX(::UnityEngine::UIElements::UIR::EntryProcessor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::EntryProcessor*, "UnityEngine.UIElements.UIR", "EntryProcessor");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::EntryProcessor_MaskMesh, "UnityEngine.UIElements.UIR", "EntryProcessor/MaskMesh");
