#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OccluderContext.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderDepthPyramidConstants_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderDerivedData_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderMipBounds_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OccluderContext)
namespace System {
class IDisposable;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering {
class ComputeCommandBuffer;
}
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace UnityEngine::Rendering {
class OccluderContext_ShaderIDs;
}
namespace UnityEngine::Rendering {
struct OccluderDepthPyramidConstants;
}
namespace UnityEngine::Rendering {
struct OccluderHandles;
}
namespace UnityEngine::Rendering {
struct OccluderParameters;
}
namespace UnityEngine::Rendering {
struct OccluderSubviewUpdate;
}
namespace UnityEngine::Rendering {
struct OcclusionCullingDebugOutput;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class OccluderContext_ShaderIDs;
}
namespace UnityEngine::Rendering {
struct OccluderContext;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::OccluderContext_ShaderIDs);
MARK_VAL_T(::UnityEngine::Rendering::OccluderContext);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.OccluderContext/ShaderIDs
class CORDL_TYPE OccluderContext_ShaderIDs : public ::System::Object {
public:
  // Declarations
  /// @brief Field OccluderDepthPyramidConstants, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_OccluderDepthPyramidConstants, put = setStaticF_OccluderDepthPyramidConstants)) int32_t OccluderDepthPyramidConstants;

  /// @brief Field _DstDepth, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__DstDepth, put = setStaticF__DstDepth)) int32_t _DstDepth;

  /// @brief Field _SrcDepth, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SrcDepth, put = setStaticF__SrcDepth)) int32_t _SrcDepth;

  static inline int32_t getStaticF_OccluderDepthPyramidConstants();

  static inline int32_t getStaticF__DstDepth();

  static inline int32_t getStaticF__SrcDepth();

  static inline void setStaticF_OccluderDepthPyramidConstants(int32_t value);

  static inline void setStaticF__DstDepth(int32_t value);

  static inline void setStaticF__SrcDepth(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OccluderContext_ShaderIDs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OccluderContext_ShaderIDs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OccluderContext_ShaderIDs(OccluderContext_ShaderIDs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OccluderContext_ShaderIDs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OccluderContext_ShaderIDs(OccluderContext_ShaderIDs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17696 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OccluderContext_ShaderIDs, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.OccluderDepthPyramidConstants, UnityEngine.Rendering.OccluderDerivedData, UnityEngine.Rendering.OccluderMipBounds,
// UnityEngine.Vector2Int
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OccluderContext
struct CORDL_TYPE OccluderContext {
public:
  // Declarations
  using ShaderIDs = ::UnityEngine::Rendering::OccluderContext_ShaderIDs;

  __declspec(property(get = get_depthBufferSizeInOccluderPixels)) ::UnityEngine::Vector2 depthBufferSizeInOccluderPixels;

  __declspec(property(get = get_subviewCount)) int32_t subviewCount;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method AllocateTexturesIfNecessary, addr 0x661009c, size 0x250, virtual false, abstract: false, final false
  inline void AllocateTexturesIfNecessary(bool debugOverlayEnabled);

  /// @brief Method CreateFarDepthPyramid, addr 0x6610718, size 0x4f8, virtual false, abstract: false, final false
  inline void CreateFarDepthPyramid(::UnityEngine::Rendering::ComputeCommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::OccluderParameters> occluderParams,
                                    ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate> occluderSubviewUpdates,
                                    ::ByRef<::UnityEngine::Rendering::OccluderHandles> occluderHandles, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> silhouettePlanes,
                                    ::UnityEngine::ComputeShader* occluderDepthPyramidCS, int32_t occluderDepthDownscaleKernel);

  /// @brief Method Dispose, addr 0x660fda8, size 0x128, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetDebugOutput, addr 0x6610dc4, size 0xf4, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::OcclusionCullingDebugOutput GetDebugOutput();

  /// @brief Method Import, addr 0x6610c10, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::OccluderHandles Import(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Method IsSubviewValid, addr 0x660fd6c, size 0x24, virtual false, abstract: false, final false
  inline bool IsSubviewValid(int32_t subviewIndex);

  /// @brief Method PrepareOccluders, addr 0x6610cb8, size 0x10c, virtual false, abstract: false, final false
  inline void PrepareOccluders(::ByRef<::UnityEngine::Rendering::OccluderParameters> occluderParams);

  /// @brief Method SetKeyword, addr 0x66102ec, size 0x2c, virtual false, abstract: false, final false
  static inline void SetKeyword(::UnityEngine::Rendering::ComputeCommandBuffer* cmd, ::UnityEngine::ComputeShader* cs, ::ByRef<::UnityEngine::Rendering::LocalKeyword> keyword, bool value);

  /// @brief Method SetupFarDepthPyramidConstants, addr 0x6610318, size 0x400, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::OccluderDepthPyramidConstants SetupFarDepthPyramidConstants(::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate> occluderSubviewUpdates,
                                                                                               ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> silhouettePlanes);

  /// @brief Method UpdateMipBounds, addr 0x660fed0, size 0x1cc, virtual false, abstract: false, final false
  inline void UpdateMipBounds();

  /// @brief Method get_depthBufferSizeInOccluderPixels, addr 0x660fd90, size 0x18, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2 get_depthBufferSizeInOccluderPixels();

  /// @brief Method get_subviewCount, addr 0x660fd64, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_subviewCount();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr OccluderContext();

  // Ctor Parameters [CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "depthBufferSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None
  // }, CppParam { name: "subviewData", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OccluderDerivedData>", modifiers: "", def_value: None }, CppParam { name: "subviewValidMask",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "occluderMipBounds", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OccluderMipBounds>", modifiers: "",
  // def_value: None }, CppParam { name: "occluderMipLayoutSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "occluderDepthPyramidSize", ty:
  // "::UnityEngine::Vector2Int", modifiers: "", def_value: None }, CppParam { name: "occluderDepthPyramid", ty: "::UnityEngine::Rendering::RTHandle*", modifiers: "", def_value: None }, CppParam {
  // name: "occlusionDebugOverlaySize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "occlusionDebugOverlay", ty: "::UnityEngine::GraphicsBuffer*", modifiers: "", def_value: None
  // }, CppParam { name: "debugNeedsClear", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "constantBuffer", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None },
  // CppParam { name: "constantBufferData", ty: "::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OccluderDepthPyramidConstants>", modifiers: "", def_value: None }]
  constexpr OccluderContext(int32_t version, ::UnityEngine::Vector2Int depthBufferSize, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OccluderDerivedData> subviewData,
                            int32_t subviewValidMask, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OccluderMipBounds> occluderMipBounds,
                            ::UnityEngine::Vector2Int occluderMipLayoutSize, ::UnityEngine::Vector2Int occluderDepthPyramidSize, ::UnityEngine::Rendering::RTHandle* occluderDepthPyramid,
                            int32_t occlusionDebugOverlaySize, ::UnityEngine::GraphicsBuffer* occlusionDebugOverlay, bool debugNeedsClear, ::UnityEngine::ComputeBuffer* constantBuffer,
                            ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OccluderDepthPyramidConstants> constantBufferData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17697 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  /// @brief Field k_FirstDepthMipIndex offset 0xffffffff size 0x4
  static constexpr int32_t k_FirstDepthMipIndex{ static_cast<int32_t>(0x3) };

  /// @brief Field k_MaxOccluderMips offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxOccluderMips{ static_cast<int32_t>(0x8) };

  /// @brief Field k_MaxSilhouettePlanes offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxSilhouettePlanes{ static_cast<int32_t>(0x6) };

  /// @brief Field k_MaxSubviewsPerView offset 0xffffffff size 0x4
  static constexpr int32_t k_MaxSubviewsPerView{ static_cast<int32_t>(0x6) };

  /// @brief Field version, offset: 0x0, size: 0x4, def value: None
  int32_t version;

  /// @brief Field depthBufferSize, offset: 0x4, size: 0x8, def value: None
  ::UnityEngine::Vector2Int depthBufferSize;

  /// @brief Field subviewData, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OccluderDerivedData> subviewData;

  /// @brief Field subviewValidMask, offset: 0x20, size: 0x4, def value: None
  int32_t subviewValidMask;

  /// @brief Field occluderMipBounds, offset: 0x28, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OccluderMipBounds> occluderMipBounds;

  /// @brief Field occluderMipLayoutSize, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Vector2Int occluderMipLayoutSize;

  /// @brief Field occluderDepthPyramidSize, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Vector2Int occluderDepthPyramidSize;

  /// @brief Field occluderDepthPyramid, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* occluderDepthPyramid;

  /// @brief Field occlusionDebugOverlaySize, offset: 0x50, size: 0x4, def value: None
  int32_t occlusionDebugOverlaySize;

  /// @brief Field occlusionDebugOverlay, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* occlusionDebugOverlay;

  /// @brief Field debugNeedsClear, offset: 0x60, size: 0x1, def value: None
  bool debugNeedsClear;

  /// @brief Field constantBuffer, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* constantBuffer;

  /// @brief Field constantBufferData, offset: 0x70, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OccluderDepthPyramidConstants> constantBufferData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OccluderContext, version) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderContext, depthBufferSize) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderContext, subviewData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderContext, subviewValidMask) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderContext, occluderMipBounds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderContext, occluderMipLayoutSize) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderContext, occluderDepthPyramidSize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderContext, occluderDepthPyramid) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderContext, occlusionDebugOverlaySize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderContext, occlusionDebugOverlay) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderContext, debugNeedsClear) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderContext, constantBuffer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OccluderContext, constantBufferData) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OccluderContext, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::OccluderContext_ShaderIDs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OccluderContext_ShaderIDs*, "UnityEngine.Rendering", "OccluderContext/ShaderIDs");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OccluderContext, "UnityEngine.Rendering", "OccluderContext");
