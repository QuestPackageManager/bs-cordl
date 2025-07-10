#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/Implementation/CommandGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CommandGenerator)
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace UnityEngine::UIElements::UIR::Implementation {
struct UIRStylePainter_ClosingInfo;
}
namespace UnityEngine::UIElements::UIR {
struct ChainBuilderStats;
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
class MeshGenerationContext;
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
struct Matrix4x4;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR::Implementation {
class CommandGenerator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::Implementation::CommandGenerator);
// Dependencies System.Object, Unity.Profiling.ProfilerMarker
namespace UnityEngine::UIElements::UIR::Implementation {
// Is value type: false
// CS Name: UnityEngine.UIElements.UIR.Implementation.CommandGenerator
class CORDL_TYPE CommandGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_ComputeTransformMatrixMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ComputeTransformMatrixMarker, put = setStaticF_k_ComputeTransformMatrixMarker)) ::Unity::Profiling::ProfilerMarker k_ComputeTransformMatrixMarker;

  /// @brief Field k_ConvertEntriesToCommandsMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_ConvertEntriesToCommandsMarker, put = setStaticF_k_ConvertEntriesToCommandsMarker)) ::Unity::Profiling::ProfilerMarker k_ConvertEntriesToCommandsMarker;

  /// @brief Field k_GenerateClosingCommandsMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_GenerateClosingCommandsMarker, put = setStaticF_k_GenerateClosingCommandsMarker)) ::Unity::Profiling::ProfilerMarker k_GenerateClosingCommandsMarker;

  /// @brief Field k_GenerateEntries, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_GenerateEntries, put = setStaticF_k_GenerateEntries)) ::Unity::Profiling::ProfilerMarker k_GenerateEntries;

  /// @brief Field k_NudgeVerticesMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_NudgeVerticesMarker, put = setStaticF_k_NudgeVerticesMarker)) ::Unity::Profiling::ProfilerMarker k_NudgeVerticesMarker;

  /// @brief Field k_UpdateOpacityIdMarker, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_UpdateOpacityIdMarker, put = setStaticF_k_UpdateOpacityIdMarker)) ::Unity::Profiling::ProfilerMarker k_UpdateOpacityIdMarker;

  /// @brief Field s_blitMaterial_GammaToLinear, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_blitMaterial_GammaToLinear, put = setStaticF_s_blitMaterial_GammaToLinear)) ::UnityW<::UnityEngine::Material> s_blitMaterial_GammaToLinear;

  /// @brief Field s_blitMaterial_LinearToGamma, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_blitMaterial_LinearToGamma, put = setStaticF_s_blitMaterial_LinearToGamma)) ::UnityW<::UnityEngine::Material> s_blitMaterial_LinearToGamma;

  /// @brief Field s_blitMaterial_NoChange, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_blitMaterial_NoChange, put = setStaticF_s_blitMaterial_NoChange)) ::UnityW<::UnityEngine::Material> s_blitMaterial_NoChange;

  /// @brief Field s_blitShader, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_blitShader, put = setStaticF_s_blitShader)) ::UnityW<::UnityEngine::Shader> s_blitShader;

  /// @brief Method ClosePaintElement, addr 0x49bec3c, size 0x23c, virtual false, abstract: false, final false
  static inline void ClosePaintElement(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter_ClosingInfo closingInfo,
                                       ::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method ComputeTransformMatrix, addr 0x49bc6d8, size 0x124, virtual false, abstract: false, final false
  static inline void ComputeTransformMatrix(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VisualElement* ancestor, ::ByRef<::UnityEngine::Matrix4x4> result);

  /// @brief Method CreateBlitShader, addr 0x49bea1c, size 0x220, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> CreateBlitShader(float_t colorConversion);

  /// @brief Method DoUpdateOpacityId, addr 0x49bef28, size 0x114, virtual false, abstract: false, final false
  static inline void DoUpdateOpacityId(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::UIR::MeshHandle* mesh);

  /// @brief Method FindClosingCommandInsertionPoint, addr 0x49be438, size 0x164, virtual false, abstract: false, final false
  static inline void FindClosingCommandInsertionPoint(::UnityEngine::UIElements::VisualElement* ve, ::ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> prev,
                                                      ::ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> next);

  /// @brief Method FindCommandInsertionPoint, addr 0x49be118, size 0x1b0, virtual false, abstract: false, final false
  static inline void FindCommandInsertionPoint(::UnityEngine::UIElements::VisualElement* ve, ::ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> prev,
                                               ::ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> next);

  /// @brief Method GetBlitMaterial, addr 0x49be684, size 0x2b8, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetBlitMaterial(::UnityEngine::UIElements::VisualElement_RenderTargetMode mode);

  /// @brief Method GetVerticesTransformInfo, addr 0x49bc560, size 0x178, virtual false, abstract: false, final false
  static inline void GetVerticesTransformInfo(::UnityEngine::UIElements::VisualElement* ve, ::ByRef<::UnityEngine::Matrix4x4> transform);

  /// @brief Method InjectClosingCommandInBetween, addr 0x49be59c, size 0xe8, virtual false, abstract: false, final false
  static inline void InjectClosingCommandInBetween(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::UIR::RenderChainCommand* cmd,
                                                   ::ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> prev, ::ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> next);

  /// @brief Method InjectClosingMeshDrawCommand, addr 0x49be93c, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::UIR::RenderChainCommand* InjectClosingMeshDrawCommand(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve,
                                                                                                 ::ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> cmdPrev,
                                                                                                 ::ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> cmdNext,
                                                                                                 ::UnityEngine::UIElements::UIR::MeshHandle* mesh, int32_t indexCount, int32_t indexOffset,
                                                                                                 ::UnityEngine::Material* material, ::UnityEngine::UIElements::TextureId texture, int32_t stencilRef);

  /// @brief Method InjectCommandInBetween, addr 0x49be3a0, size 0x98, virtual false, abstract: false, final false
  static inline void InjectCommandInBetween(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::UIR::RenderChainCommand* cmd,
                                            ::ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> prev, ::ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> next);

  /// @brief Method InjectMeshDrawCommand, addr 0x49be2c8, size 0xd8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::UIR::RenderChainCommand* InjectMeshDrawCommand(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve,
                                                                                          ::ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> cmdPrev,
                                                                                          ::ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> cmdNext,
                                                                                          ::UnityEngine::UIElements::UIR::MeshHandle* mesh, int32_t indexCount, int32_t indexOffset,
                                                                                          ::UnityEngine::Material* material, ::UnityEngine::UIElements::TextureId texture, int32_t stencilRef);

  /// @brief Method InvokeGenerateVisualContent, addr 0x49bdf44, size 0xec, virtual false, abstract: false, final false
  static inline void InvokeGenerateVisualContent(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::MeshGenerationContext* ctx);

  /// @brief Method IsParentOrAncestorOf, addr 0x49bc7fc, size 0x8c, virtual false, abstract: false, final false
  static inline bool IsParentOrAncestorOf(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method NudgeVerticesToNewSpace, addr 0x49bf03c, size 0x384, virtual false, abstract: false, final false
  static inline bool NudgeVerticesToNewSpace(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::RenderChain* renderChain,
                                             ::UnityEngine::UIElements::UIR::UIRenderDevice* device);

  /// @brief Method PaintElement, addr 0x49bc888, size 0x142c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::UIR::Implementation::UIRStylePainter_ClosingInfo
  PaintElement(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve, ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method PrepareNudgeVertices, addr 0x49bf3c0, size 0x10c, virtual false, abstract: false, final false
  static inline void PrepareNudgeVertices(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::UIRenderDevice* device, ::UnityEngine::UIElements::UIR::MeshHandle* mesh,
                                          ::ByRef<::System::IntPtr> src, ::ByRef<::System::IntPtr> dst, ::ByRef<int32_t> count);

  /// @brief Method ResetCommands, addr 0x49bdcb4, size 0x290, virtual false, abstract: false, final false
  static inline void ResetCommands(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UpdateOpacityId, addr 0x49bee78, size 0xb0, virtual false, abstract: false, final false
  static inline void UpdateOpacityId(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::RenderChain* renderChain);

  /// @brief Method UpdateOrAllocate, addr 0x49be030, size 0xe8, virtual false, abstract: false, final false
  static inline void UpdateOrAllocate(::ByRef<::UnityEngine::UIElements::UIR::MeshHandle*> data, int32_t vertexCount, int32_t indexCount, ::UnityEngine::UIElements::UIR::UIRenderDevice* device,
                                      ::ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> verts, ::ByRef<::Unity::Collections::NativeSlice_1<uint16_t>> indices,
                                      ::ByRef<uint16_t> indexOffset, ::ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ComputeTransformMatrixMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ConvertEntriesToCommandsMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_GenerateClosingCommandsMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_GenerateEntries();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_NudgeVerticesMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_UpdateOpacityIdMarker();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_blitMaterial_GammaToLinear();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_blitMaterial_LinearToGamma();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_blitMaterial_NoChange();

  static inline ::UnityW<::UnityEngine::Shader> getStaticF_s_blitShader();

  static inline void setStaticF_k_ComputeTransformMatrixMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_ConvertEntriesToCommandsMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_GenerateClosingCommandsMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_GenerateEntries(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_NudgeVerticesMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_UpdateOpacityIdMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_s_blitMaterial_GammaToLinear(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_blitMaterial_LinearToGamma(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_blitMaterial_NoChange(::UnityW<::UnityEngine::Material> value);

  static inline void setStaticF_s_blitShader(::UnityW<::UnityEngine::Shader> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandGenerator(CommandGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandGenerator(CommandGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6436 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR::Implementation
NEED_NO_BOX(::UnityEngine::UIElements::UIR::Implementation::CommandGenerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*, "UnityEngine.UIElements.UIR.Implementation", "CommandGenerator");
