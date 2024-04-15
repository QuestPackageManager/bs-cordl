#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CommandGenerator)
namespace Unity::Collections {
template <typename T> struct NativeSlice_1;
}
namespace UnityEngine::UIElements::UIR::Implementation {
struct __UIRStylePainter__ClosingInfo;
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
struct TextureId;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct __VisualElement__RenderTargetMode;
}
namespace UnityEngine {
struct Color32;
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
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR::Implementation {
class CommandGenerator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::UIR::Implementation::CommandGenerator);
// Type: UnityEngine.UIElements.UIR.Implementation::CommandGenerator
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UIElements::UIR::Implementation {
// Is value type: false
// CS Name: ::UnityEngine.UIElements.UIR.Implementation::CommandGenerator*
class CORDL_TYPE CommandGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field k_ComputeTransformMatrixMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_ComputeTransformMatrixMarker, put = setStaticF_k_ComputeTransformMatrixMarker))::Unity::Profiling::ProfilerMarker k_ComputeTransformMatrixMarker;

  /// @brief Field k_ConvertEntriesToCommandsMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_ConvertEntriesToCommandsMarker, put = setStaticF_k_ConvertEntriesToCommandsMarker))::Unity::Profiling::ProfilerMarker k_ConvertEntriesToCommandsMarker;

  /// @brief Field k_NudgeVerticesMarker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_k_NudgeVerticesMarker, put = setStaticF_k_NudgeVerticesMarker))::Unity::Profiling::ProfilerMarker k_NudgeVerticesMarker;

  /// @brief Field s_blitMaterial_GammaToLinear, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_blitMaterial_GammaToLinear, put = setStaticF_s_blitMaterial_GammaToLinear))::UnityW<::UnityEngine::Material> s_blitMaterial_GammaToLinear;

  /// @brief Field s_blitMaterial_LinearToGamma, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_blitMaterial_LinearToGamma, put = setStaticF_s_blitMaterial_LinearToGamma))::UnityW<::UnityEngine::Material> s_blitMaterial_LinearToGamma;

  /// @brief Field s_blitMaterial_NoChange, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_blitMaterial_NoChange, put = setStaticF_s_blitMaterial_NoChange))::UnityW<::UnityEngine::Material> s_blitMaterial_NoChange;

  /// @brief Field s_blitShader, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_blitShader, put = setStaticF_s_blitShader))::UnityW<::UnityEngine::Shader> s_blitShader;

  /// @brief Method ClosePaintElement, addr 0x3332918, size 0x190, virtual false, abstract: false, final false
  static inline void ClosePaintElement(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo closingInfo,
                                       ::UnityEngine::UIElements::UIR::RenderChain* renderChain, ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method ComputeTransformMatrix, addr 0x332fc00, size 0x12c, virtual false, abstract: false, final false
  static inline void ComputeTransformMatrix(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VisualElement* ancestor, ByRef<::UnityEngine::Matrix4x4> result);

  /// @brief Method CopyTransformVertsPos, addr 0x3331b04, size 0x248, virtual false, abstract: false, final false
  static inline void CopyTransformVertsPos(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> source, ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> target,
                                           ::UnityEngine::Matrix4x4 mat, ::UnityEngine::Color32 xformClipPages, ::UnityEngine::Color32 ids, ::UnityEngine::Color32 addFlags,
                                           ::UnityEngine::Color32 opacityPage, ::UnityEngine::Color32 textCoreSettingsPage, bool isText, float_t textureId);

  /// @brief Method CopyTransformVertsPosAndVec, addr 0x3331894, size 0x270, virtual false, abstract: false, final false
  static inline void CopyTransformVertsPosAndVec(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> source,
                                                 ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> target, ::UnityEngine::Matrix4x4 mat, ::UnityEngine::Color32 xformClipPages,
                                                 ::UnityEngine::Color32 ids, ::UnityEngine::Color32 addFlags, ::UnityEngine::Color32 opacityPage, ::UnityEngine::Color32 textCoreSettingsPage,
                                                 bool isText, float_t textureId);

  /// @brief Method CopyTriangleIndices, addr 0x3331d4c, size 0xcc, virtual false, abstract: false, final false
  static inline void CopyTriangleIndices(::Unity::Collections::NativeSlice_1<uint16_t> source, ::Unity::Collections::NativeSlice_1<uint16_t> target, int32_t indexOffset);

  /// @brief Method CopyTriangleIndicesFlipWindingOrder, addr 0x3331e18, size 0x1a4, virtual false, abstract: false, final false
  static inline void CopyTriangleIndicesFlipWindingOrder(::Unity::Collections::NativeSlice_1<uint16_t> source, ::Unity::Collections::NativeSlice_1<uint16_t> target, int32_t indexOffset);

  /// @brief Method CreateBlitShader, addr 0x3332710, size 0x208, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> CreateBlitShader(float_t colorConversion);

  /// @brief Method DoNudgeVertices, addr 0x3332d60, size 0x2e0, virtual false, abstract: false, final false
  static inline void DoNudgeVertices(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::UIRenderDevice* device, ::UnityEngine::UIElements::UIR::MeshHandle* mesh,
                                     ByRef<::UnityEngine::Matrix4x4> nudgeTransform);

  /// @brief Method FindClosingCommandInsertionPoint, addr 0x3332134, size 0x16c, virtual false, abstract: false, final false
  static inline void FindClosingCommandInsertionPoint(::UnityEngine::UIElements::VisualElement* ve, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> prev,
                                                      ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> next);

  /// @brief Method FindCommandInsertionPoint, addr 0x33316d4, size 0x1c0, virtual false, abstract: false, final false
  static inline void FindCommandInsertionPoint(::UnityEngine::UIElements::VisualElement* ve, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> prev,
                                               ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> next);

  /// @brief Method GetBlitMaterial, addr 0x3332388, size 0x2a0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Material> GetBlitMaterial(::UnityEngine::UIElements::__VisualElement__RenderTargetMode mode);

  /// @brief Method GetVerticesTransformInfo, addr 0x332fa74, size 0x18c, virtual false, abstract: false, final false
  static inline void GetVerticesTransformInfo(::UnityEngine::UIElements::VisualElement* ve, ByRef<::UnityEngine::Matrix4x4> transform);

  /// @brief Method InjectClosingCommandInBetween, addr 0x33322a0, size 0xe8, virtual false, abstract: false, final false
  static inline void InjectClosingCommandInBetween(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::UIR::RenderChainCommand* cmd,
                                                   ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> prev, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> next);

  /// @brief Method InjectClosingMeshDrawCommand, addr 0x3332628, size 0xe8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::UIR::RenderChainCommand* InjectClosingMeshDrawCommand(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve,
                                                                                                 ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> cmdPrev,
                                                                                                 ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> cmdNext,
                                                                                                 ::UnityEngine::UIElements::UIR::MeshHandle* mesh, int32_t indexCount, int32_t indexOffset,
                                                                                                 ::UnityEngine::Material* material, ::UnityEngine::UIElements::TextureId texture,
                                                                                                 ::UnityEngine::Texture* font, int32_t stencilRef);

  /// @brief Method InjectCommandInBetween, addr 0x333209c, size 0x98, virtual false, abstract: false, final false
  static inline void InjectCommandInBetween(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::UIR::RenderChainCommand* cmd,
                                            ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> prev, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> next);

  /// @brief Method InjectMeshDrawCommand, addr 0x3331fbc, size 0xe0, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::UIR::RenderChainCommand*
  InjectMeshDrawCommand(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve, ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> cmdPrev,
                        ByRef<::UnityEngine::UIElements::UIR::RenderChainCommand*> cmdNext, ::UnityEngine::UIElements::UIR::MeshHandle* mesh, int32_t indexCount, int32_t indexOffset,
                        ::UnityEngine::Material* material, ::UnityEngine::UIElements::TextureId texture, ::UnityEngine::Texture* font, int32_t stencilRef);

  /// @brief Method IsParentOrAncestorOf, addr 0x332fd2c, size 0x7c, virtual false, abstract: false, final false
  static inline bool IsParentOrAncestorOf(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::VisualElement* child);

  /// @brief Method NudgeVerticesToNewSpace, addr 0x3332aa8, size 0x2b8, virtual false, abstract: false, final false
  static inline bool NudgeVerticesToNewSpace(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::UIElements::UIR::UIRenderDevice* device);

  /// @brief Method PaintElement, addr 0x332fda8, size 0x14f8, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::UIR::Implementation::__UIRStylePainter__ClosingInfo
  PaintElement(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve, ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  /// @brief Method ResetCommands, addr 0x33312a0, size 0x338, virtual false, abstract: false, final false
  static inline void ResetCommands(::UnityEngine::UIElements::UIR::RenderChain* renderChain, ::UnityEngine::UIElements::VisualElement* ve);

  /// @brief Method UpdateOrAllocate, addr 0x33315d8, size 0xfc, virtual false, abstract: false, final false
  static inline void UpdateOrAllocate(ByRef<::UnityEngine::UIElements::UIR::MeshHandle*> data, int32_t vertexCount, int32_t indexCount, ::UnityEngine::UIElements::UIR::UIRenderDevice* device,
                                      ByRef<::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex>> verts, ByRef<::Unity::Collections::NativeSlice_1<uint16_t>> indices,
                                      ByRef<uint16_t> indexOffset, ByRef<::UnityEngine::UIElements::UIR::ChainBuilderStats> stats);

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ComputeTransformMatrixMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_ConvertEntriesToCommandsMarker();

  static inline ::Unity::Profiling::ProfilerMarker getStaticF_k_NudgeVerticesMarker();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_blitMaterial_GammaToLinear();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_blitMaterial_LinearToGamma();

  static inline ::UnityW<::UnityEngine::Material> getStaticF_s_blitMaterial_NoChange();

  static inline ::UnityW<::UnityEngine::Shader> getStaticF_s_blitShader();

  static inline void setStaticF_k_ComputeTransformMatrixMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_ConvertEntriesToCommandsMarker(::Unity::Profiling::ProfilerMarker value);

  static inline void setStaticF_k_NudgeVerticesMarker(::Unity::Profiling::ProfilerMarker value);

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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::Implementation::CommandGenerator, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR::Implementation
NEED_NO_BOX(::UnityEngine::UIElements::UIR::Implementation::CommandGenerator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Implementation::CommandGenerator*, "UnityEngine.UIElements.UIR.Implementation", "CommandGenerator");
