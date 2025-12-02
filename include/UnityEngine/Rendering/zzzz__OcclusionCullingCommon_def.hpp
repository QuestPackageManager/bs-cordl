#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OcclusionCullingCommon.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeParallelHashMap_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BufferHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderHandles_def.hpp"
#include "UnityEngine/Rendering/zzzz__OccluderParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingCommonShaderVariables_def.hpp"
#include "UnityEngine/Rendering/zzzz__OcclusionCullingDebugShaderVariables_def.hpp"
#include "UnityEngine/Rendering/zzzz__SilhouettePlaneCache_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OcclusionCullingCommon)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
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
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class ComputeGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RasterGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering {
class ComputeCommandBuffer;
}
namespace UnityEngine::Rendering {
class DebugDisplayGPUResidentDrawer;
}
namespace UnityEngine::Rendering {
class DebugRendererBatcherStats;
}
namespace UnityEngine::Rendering {
class GPUResidentDrawerResources;
}
namespace UnityEngine::Rendering {
struct InstanceOcclusionTestSubviewSettings;
}
namespace UnityEngine::Rendering {
struct OccluderContext;
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
struct OcclusionCullingCommon_DebugOccluderViewData;
}
namespace UnityEngine::Rendering {
struct OcclusionCullingCommon_OccluderContextSlot;
}
namespace UnityEngine::Rendering {
class OcclusionCullingCommon_OccluderOverlayPassData;
}
namespace UnityEngine::Rendering {
class OcclusionCullingCommon_OcclusionTestOverlayPassData;
}
namespace UnityEngine::Rendering {
class OcclusionCullingCommon_OcclusionTestOverlaySetupPassData;
}
namespace UnityEngine::Rendering {
class OcclusionCullingCommon_ShaderIDs;
}
namespace UnityEngine::Rendering {
class OcclusionCullingCommon_UpdateOccludersPassData;
}
namespace UnityEngine::Rendering {
class OcclusionCullingCommon___c;
}
namespace UnityEngine::Rendering {
struct OcclusionCullingDebugOutput;
}
namespace UnityEngine::Rendering {
struct OcclusionCullingSettings;
}
namespace UnityEngine::Rendering {
struct OcclusionTestComputeShader;
}
namespace UnityEngine::Rendering {
class ProfilingSampler;
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
class Material;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class OcclusionCullingCommon;
}
namespace UnityEngine::Rendering {
class OcclusionCullingCommon_OccluderOverlayPassData;
}
namespace UnityEngine::Rendering {
class OcclusionCullingCommon_OcclusionTestOverlayPassData;
}
namespace UnityEngine::Rendering {
class OcclusionCullingCommon_OcclusionTestOverlaySetupPassData;
}
namespace UnityEngine::Rendering {
class OcclusionCullingCommon_ShaderIDs;
}
namespace UnityEngine::Rendering {
class OcclusionCullingCommon_UpdateOccludersPassData;
}
namespace UnityEngine::Rendering {
class OcclusionCullingCommon___c;
}
namespace UnityEngine::Rendering {
struct OcclusionCullingCommon_DebugOccluderViewData;
}
namespace UnityEngine::Rendering {
struct OcclusionCullingCommon_OccluderContextSlot;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::OcclusionCullingCommon);
MARK_REF_PTR_T(::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::OcclusionCullingCommon_ShaderIDs);
MARK_REF_PTR_T(::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::OcclusionCullingCommon___c);
MARK_VAL_T(::UnityEngine::Rendering::OcclusionCullingCommon_DebugOccluderViewData);
MARK_VAL_T(::UnityEngine::Rendering::OcclusionCullingCommon_OccluderContextSlot);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OcclusionCullingCommon/OccluderContextSlot
struct CORDL_TYPE OcclusionCullingCommon_OccluderContextSlot {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcclusionCullingCommon_OccluderContextSlot();

  // Ctor Parameters [CppParam { name: "valid", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "lastUsedFrameIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "viewInstanceID", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OcclusionCullingCommon_OccluderContextSlot(bool valid, int32_t lastUsedFrameIndex, int32_t viewInstanceID) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17728 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field valid, offset: 0x0, size: 0x1, def value: None
  bool valid;

  /// @brief Field lastUsedFrameIndex, offset: 0x4, size: 0x4, def value: None
  int32_t lastUsedFrameIndex;

  /// @brief Field viewInstanceID, offset: 0x8, size: 0x4, def value: None
  int32_t viewInstanceID;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon_OccluderContextSlot, valid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon_OccluderContextSlot, lastUsedFrameIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon_OccluderContextSlot, viewInstanceID) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OcclusionCullingCommon_OccluderContextSlot, 0xc>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.OcclusionCullingCommon/ShaderIDs
class CORDL_TYPE OcclusionCullingCommon_ShaderIDs : public ::System::Object {
public:
  // Declarations
  /// @brief Field OcclusionCullingCommonShaderVariables, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_OcclusionCullingCommonShaderVariables, put = setStaticF_OcclusionCullingCommonShaderVariables)) int32_t OcclusionCullingCommonShaderVariables;

  /// @brief Field OcclusionCullingDebugShaderVariables, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_OcclusionCullingDebugShaderVariables, put = setStaticF_OcclusionCullingDebugShaderVariables)) int32_t OcclusionCullingDebugShaderVariables;

  /// @brief Field _OccluderDepthPyramid, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__OccluderDepthPyramid, put = setStaticF__OccluderDepthPyramid)) int32_t _OccluderDepthPyramid;

  /// @brief Field _OcclusionDebugOverlay, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__OcclusionDebugOverlay, put = setStaticF__OcclusionDebugOverlay)) int32_t _OcclusionDebugOverlay;

  static inline int32_t getStaticF_OcclusionCullingCommonShaderVariables();

  static inline int32_t getStaticF_OcclusionCullingDebugShaderVariables();

  static inline int32_t getStaticF__OccluderDepthPyramid();

  static inline int32_t getStaticF__OcclusionDebugOverlay();

  static inline void setStaticF_OcclusionCullingCommonShaderVariables(int32_t value);

  static inline void setStaticF_OcclusionCullingDebugShaderVariables(int32_t value);

  static inline void setStaticF__OccluderDepthPyramid(int32_t value);

  static inline void setStaticF__OcclusionDebugOverlay(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcclusionCullingCommon_ShaderIDs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OcclusionCullingCommon_ShaderIDs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcclusionCullingCommon_ShaderIDs(OcclusionCullingCommon_ShaderIDs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcclusionCullingCommon_ShaderIDs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcclusionCullingCommon_ShaderIDs(OcclusionCullingCommon_ShaderIDs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17729 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OcclusionCullingCommon_ShaderIDs, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.OcclusionCullingDebugShaderVariables
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.OcclusionCullingCommon/OcclusionTestOverlaySetupPassData
class CORDL_TYPE OcclusionCullingCommon_OcclusionTestOverlaySetupPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field cb, offset 0x10, size 0xa0
  __declspec(property(get = __cordl_internal_get_cb, put = __cordl_internal_set_cb)) ::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables cb;

  static inline ::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables const& __cordl_internal_get_cb() const;

  constexpr ::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables& __cordl_internal_get_cb();

  constexpr void __cordl_internal_set_cb(::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables value);

  /// @brief Method .ctor, addr 0x6617918, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcclusionCullingCommon_OcclusionTestOverlaySetupPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OcclusionCullingCommon_OcclusionTestOverlaySetupPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcclusionCullingCommon_OcclusionTestOverlaySetupPassData(OcclusionCullingCommon_OcclusionTestOverlaySetupPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcclusionCullingCommon_OcclusionTestOverlaySetupPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcclusionCullingCommon_OcclusionTestOverlaySetupPassData(OcclusionCullingCommon_OcclusionTestOverlaySetupPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17730 };

  /// @brief Field cb, offset: 0x10, size: 0xa0, def value: None
  ::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables ___cb;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData, ___cb) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData, 0xb0>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.BufferHandle
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.OcclusionCullingCommon/OcclusionTestOverlayPassData
class CORDL_TYPE OcclusionCullingCommon_OcclusionTestOverlayPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field debugPyramid, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_debugPyramid, put = __cordl_internal_set_debugPyramid)) ::UnityEngine::Rendering::RenderGraphModule::BufferHandle debugPyramid;

  static inline ::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle const& __cordl_internal_get_debugPyramid() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::BufferHandle& __cordl_internal_get_debugPyramid();

  constexpr void __cordl_internal_set_debugPyramid(::UnityEngine::Rendering::RenderGraphModule::BufferHandle value);

  /// @brief Method .ctor, addr 0x661791c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcclusionCullingCommon_OcclusionTestOverlayPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OcclusionCullingCommon_OcclusionTestOverlayPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcclusionCullingCommon_OcclusionTestOverlayPassData(OcclusionCullingCommon_OcclusionTestOverlayPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcclusionCullingCommon_OcclusionTestOverlayPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcclusionCullingCommon_OcclusionTestOverlayPassData(OcclusionCullingCommon_OcclusionTestOverlayPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17731 };

  /// @brief Field debugPyramid, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::BufferHandle ___debugPyramid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData, ___debugPyramid) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Rect
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.OcclusionCullingCommon/DebugOccluderViewData
struct CORDL_TYPE OcclusionCullingCommon_DebugOccluderViewData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcclusionCullingCommon_DebugOccluderViewData();

  // Ctor Parameters [CppParam { name: "passIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "viewport", ty: "::UnityEngine::Rect", modifiers: "", def_value: None }, CppParam
  // { name: "valid", ty: "bool", modifiers: "", def_value: None }]
  constexpr OcclusionCullingCommon_DebugOccluderViewData(int32_t passIndex, ::UnityEngine::Rect viewport, bool valid) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17732 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field passIndex, offset: 0x0, size: 0x4, def value: None
  int32_t passIndex;

  /// @brief Field viewport, offset: 0x4, size: 0x10, def value: None
  ::UnityEngine::Rect viewport;

  /// @brief Field valid, offset: 0x14, size: 0x1, def value: None
  bool valid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon_DebugOccluderViewData, passIndex) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon_DebugOccluderViewData, viewport) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon_DebugOccluderViewData, valid) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OcclusionCullingCommon_DebugOccluderViewData, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rect, UnityEngine.Vector2
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.OcclusionCullingCommon/OccluderOverlayPassData
class CORDL_TYPE OcclusionCullingCommon_OccluderOverlayPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field debugMaterial, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_debugMaterial, put = __cordl_internal_set_debugMaterial)) ::UnityW<::UnityEngine::Material> debugMaterial;

  /// @brief Field occluderTexture, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_occluderTexture, put = __cordl_internal_set_occluderTexture)) ::UnityEngine::Rendering::RTHandle* occluderTexture;

  /// @brief Field passIndex, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_passIndex, put = __cordl_internal_set_passIndex)) int32_t passIndex;

  /// @brief Field validRange, offset 0x34, size 0x8
  __declspec(property(get = __cordl_internal_get_validRange, put = __cordl_internal_set_validRange)) ::UnityEngine::Vector2 validRange;

  /// @brief Field viewport, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_viewport, put = __cordl_internal_set_viewport)) ::UnityEngine::Rect viewport;

  static inline ::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData* New_ctor();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_debugMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_debugMaterial();

  constexpr ::UnityEngine::Rendering::RTHandle* const& __cordl_internal_get_occluderTexture() const;

  constexpr ::UnityEngine::Rendering::RTHandle*& __cordl_internal_get_occluderTexture();

  constexpr int32_t const& __cordl_internal_get_passIndex() const;

  constexpr int32_t& __cordl_internal_get_passIndex();

  constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_validRange() const;

  constexpr ::UnityEngine::Vector2& __cordl_internal_get_validRange();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_viewport() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_viewport();

  constexpr void __cordl_internal_set_debugMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_occluderTexture(::UnityEngine::Rendering::RTHandle* value);

  constexpr void __cordl_internal_set_passIndex(int32_t value);

  constexpr void __cordl_internal_set_validRange(::UnityEngine::Vector2 value);

  constexpr void __cordl_internal_set_viewport(::UnityEngine::Rect value);

  /// @brief Method .ctor, addr 0x6617920, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcclusionCullingCommon_OccluderOverlayPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OcclusionCullingCommon_OccluderOverlayPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcclusionCullingCommon_OccluderOverlayPassData(OcclusionCullingCommon_OccluderOverlayPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcclusionCullingCommon_OccluderOverlayPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcclusionCullingCommon_OccluderOverlayPassData(OcclusionCullingCommon_OccluderOverlayPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17733 };

  /// @brief Field debugMaterial, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___debugMaterial;

  /// @brief Field occluderTexture, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::RTHandle* ___occluderTexture;

  /// @brief Field viewport, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rect ___viewport;

  /// @brief Field passIndex, offset: 0x30, size: 0x4, def value: None
  int32_t ___passIndex;

  /// @brief Field validRange, offset: 0x34, size: 0x8, def value: None
  ::UnityEngine::Vector2 ___validRange;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData, ___debugMaterial) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData, ___occluderTexture) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData, ___viewport) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData, ___passIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData, ___validRange) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.OccluderHandles, UnityEngine.Rendering.OccluderParameters
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.OcclusionCullingCommon/UpdateOccludersPassData
class CORDL_TYPE OcclusionCullingCommon_UpdateOccludersPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field occluderHandles, offset 0x40, size 0x1c
  __declspec(property(get = __cordl_internal_get_occluderHandles, put = __cordl_internal_set_occluderHandles)) ::UnityEngine::Rendering::OccluderHandles occluderHandles;

  /// @brief Field occluderParams, offset 0x10, size 0x24
  __declspec(property(get = __cordl_internal_get_occluderParams, put = __cordl_internal_set_occluderParams)) ::UnityEngine::Rendering::OccluderParameters occluderParams;

  /// @brief Field occluderSubviewUpdates, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_occluderSubviewUpdates,
                      put = __cordl_internal_set_occluderSubviewUpdates)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::OccluderSubviewUpdate>* occluderSubviewUpdates;

  static inline ::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData* New_ctor();

  constexpr ::UnityEngine::Rendering::OccluderHandles const& __cordl_internal_get_occluderHandles() const;

  constexpr ::UnityEngine::Rendering::OccluderHandles& __cordl_internal_get_occluderHandles();

  constexpr ::UnityEngine::Rendering::OccluderParameters const& __cordl_internal_get_occluderParams() const;

  constexpr ::UnityEngine::Rendering::OccluderParameters& __cordl_internal_get_occluderParams();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::OccluderSubviewUpdate>* const& __cordl_internal_get_occluderSubviewUpdates() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::OccluderSubviewUpdate>*& __cordl_internal_get_occluderSubviewUpdates();

  constexpr void __cordl_internal_set_occluderHandles(::UnityEngine::Rendering::OccluderHandles value);

  constexpr void __cordl_internal_set_occluderParams(::UnityEngine::Rendering::OccluderParameters value);

  constexpr void __cordl_internal_set_occluderSubviewUpdates(::System::Collections::Generic::List_1<::UnityEngine::Rendering::OccluderSubviewUpdate>* value);

  /// @brief Method .ctor, addr 0x6617924, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcclusionCullingCommon_UpdateOccludersPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OcclusionCullingCommon_UpdateOccludersPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcclusionCullingCommon_UpdateOccludersPassData(OcclusionCullingCommon_UpdateOccludersPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcclusionCullingCommon_UpdateOccludersPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcclusionCullingCommon_UpdateOccludersPassData(OcclusionCullingCommon_UpdateOccludersPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17734 };

  /// @brief Field occluderParams, offset: 0x10, size: 0x24, def value: None
  ::UnityEngine::Rendering::OccluderParameters ___occluderParams;

  /// @brief Field occluderSubviewUpdates, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::OccluderSubviewUpdate>* ___occluderSubviewUpdates;

  /// @brief Field occluderHandles, offset: 0x40, size: 0x1c, def value: None
  ::UnityEngine::Rendering::OccluderHandles ___occluderHandles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData, ___occluderParams) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData, ___occluderSubviewUpdates) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData, ___occluderHandles) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData, 0x60>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.OcclusionCullingCommon/<>c
class CORDL_TYPE OcclusionCullingCommon___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::OcclusionCullingCommon___c* __9;

  /// @brief Field <>9__29_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__29_0,
                      put = setStaticF___9__29_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* __9__29_0;

  /// @brief Field <>9__32_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__32_0,
                      put = setStaticF___9__32_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* __9__32_0;

  /// @brief Field <>9__37_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__37_0,
                      put = setStaticF___9__37_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData*,
                                                                                                                 ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* __9__37_0;

  static inline ::UnityEngine::Rendering::OcclusionCullingCommon___c* New_ctor();

  /// @brief Method <RenderDebugOccluderOverlay>b__32_0, addr 0x6617abc, size 0x1a0, virtual false, abstract: false, final false
  inline void _RenderDebugOccluderOverlay_b__32_0(::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData* data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext ctx);

  /// @brief Method <RenderDebugOcclusionTestOverlay>b__29_0, addr 0x6617980, size 0x13c, virtual false, abstract: false, final false
  inline void _RenderDebugOcclusionTestOverlay_b__29_0(::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData* data,
                                                       ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext* ctx);

  /// @brief Method <UpdateInstanceOccluders>b__37_0, addr 0x6617c5c, size 0x2cc, virtual false, abstract: false, final false
  inline void _UpdateInstanceOccluders_b__37_0(::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData* data,
                                               ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext* context);

  /// @brief Method .ctor, addr 0x661797c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::OcclusionCullingCommon___c* getStaticF___9();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*
  getStaticF___9__29_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*
  getStaticF___9__32_0();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>*
  getStaticF___9__37_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::OcclusionCullingCommon___c* value);

  static inline void setStaticF___9__29_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* value);

  static inline void setStaticF___9__32_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* value);

  static inline void setStaticF___9__37_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData*,
                                                                                                        ::UnityEngine::Rendering::RenderGraphModule::ComputeGraphContext*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcclusionCullingCommon___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OcclusionCullingCommon___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcclusionCullingCommon___c(OcclusionCullingCommon___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcclusionCullingCommon___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcclusionCullingCommon___c(OcclusionCullingCommon___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17735 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OcclusionCullingCommon___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>, Unity.Collections.NativeList`1<T>, Unity.Collections.NativeParallelHashMap`2<TKey, TValue>,
// UnityEngine.Rendering.OcclusionCullingCommon::OccluderContextSlot, UnityEngine.Rendering.OcclusionCullingCommonShaderVariables, UnityEngine.Rendering.OcclusionCullingDebugShaderVariables,
// UnityEngine.Rendering.SilhouettePlaneCache
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.OcclusionCullingCommon
class CORDL_TYPE OcclusionCullingCommon : public ::System::Object {
public:
  // Declarations
  using DebugOccluderViewData = ::UnityEngine::Rendering::OcclusionCullingCommon_DebugOccluderViewData;

  using OccluderContextSlot = ::UnityEngine::Rendering::OcclusionCullingCommon_OccluderContextSlot;

  using OccluderOverlayPassData = ::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData;

  using OcclusionTestOverlayPassData = ::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData;

  using OcclusionTestOverlaySetupPassData = ::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData;

  using ShaderIDs = ::UnityEngine::Rendering::OcclusionCullingCommon_ShaderIDs;

  using UpdateOccludersPassData = ::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData;

  using __c = ::UnityEngine::Rendering::OcclusionCullingCommon___c;

  /// @brief Field m_ClearOcclusionDebugKernel, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ClearOcclusionDebugKernel, put = __cordl_internal_set_m_ClearOcclusionDebugKernel)) int32_t m_ClearOcclusionDebugKernel;

  /// @brief Field m_CommonConstantBuffer, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CommonConstantBuffer, put = __cordl_internal_set_m_CommonConstantBuffer)) ::UnityEngine::ComputeBuffer* m_CommonConstantBuffer;

  /// @brief Field m_CommonShaderVariables, offset 0x90, size 0x10
  __declspec(property(get = __cordl_internal_get_m_CommonShaderVariables,
                      put = __cordl_internal_set_m_CommonShaderVariables)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables>
      m_CommonShaderVariables;

  /// @brief Field m_DebugConstantBuffer, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugConstantBuffer, put = __cordl_internal_set_m_DebugConstantBuffer)) ::UnityEngine::ComputeBuffer* m_DebugConstantBuffer;

  /// @brief Field m_DebugOcclusionTestMaterial, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugOcclusionTestMaterial, put = __cordl_internal_set_m_DebugOcclusionTestMaterial)) ::UnityW<::UnityEngine::Material> m_DebugOcclusionTestMaterial;

  /// @brief Field m_DebugShaderVariables, offset 0xa8, size 0x10
  __declspec(property(get = __cordl_internal_get_m_DebugShaderVariables,
                      put = __cordl_internal_set_m_DebugShaderVariables)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables>
      m_DebugShaderVariables;

  /// @brief Field m_FrameIndex, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_FrameIndex, put = __cordl_internal_set_m_FrameIndex)) int32_t m_FrameIndex;

  /// @brief Field m_FreeOccluderContexts, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_FreeOccluderContexts, put = __cordl_internal_set_m_FreeOccluderContexts)) ::Unity::Collections::NativeList_1<int32_t> m_FreeOccluderContexts;

  /// @brief Field m_OccluderContextData, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OccluderContextData,
                      put = __cordl_internal_set_m_OccluderContextData)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::OccluderContext>* m_OccluderContextData;

  /// @brief Field m_OccluderContextSlots, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OccluderContextSlots,
                      put = __cordl_internal_set_m_OccluderContextSlots)) ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::OcclusionCullingCommon_OccluderContextSlot>
      m_OccluderContextSlots;

  /// @brief Field m_OccluderDebugViewMaterial, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OccluderDebugViewMaterial, put = __cordl_internal_set_m_OccluderDebugViewMaterial)) ::UnityW<::UnityEngine::Material> m_OccluderDebugViewMaterial;

  /// @brief Field m_OccluderDepthDownscaleKernel, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_OccluderDepthDownscaleKernel, put = __cordl_internal_set_m_OccluderDepthDownscaleKernel)) int32_t m_OccluderDepthDownscaleKernel;

  /// @brief Field m_OccluderDepthPyramidCS, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OccluderDepthPyramidCS, put = __cordl_internal_set_m_OccluderDepthPyramidCS)) ::UnityW<::UnityEngine::ComputeShader> m_OccluderDepthPyramidCS;

  /// @brief Field m_OcclusionDebugCS, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OcclusionDebugCS, put = __cordl_internal_set_m_OcclusionDebugCS)) ::UnityW<::UnityEngine::ComputeShader> m_OcclusionDebugCS;

  /// @brief Field m_ProfilingSamplerOccluderOverlay, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSamplerOccluderOverlay,
                      put = __cordl_internal_set_m_ProfilingSamplerOccluderOverlay)) ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerOccluderOverlay;

  /// @brief Field m_ProfilingSamplerOcclusionTestOverlay, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSamplerOcclusionTestOverlay,
                      put = __cordl_internal_set_m_ProfilingSamplerOcclusionTestOverlay)) ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerOcclusionTestOverlay;

  /// @brief Field m_ProfilingSamplerUpdateOccluders, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProfilingSamplerUpdateOccluders,
                      put = __cordl_internal_set_m_ProfilingSamplerUpdateOccluders)) ::UnityEngine::Rendering::ProfilingSampler* m_ProfilingSamplerUpdateOccluders;

  /// @brief Field m_SilhouettePlaneCache, offset 0x40, size 0x28
  __declspec(property(get = __cordl_internal_get_m_SilhouettePlaneCache, put = __cordl_internal_set_m_SilhouettePlaneCache)) ::UnityEngine::Rendering::SilhouettePlaneCache m_SilhouettePlaneCache;

  /// @brief Field m_ViewIDToIndexMap, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ViewIDToIndexMap, put = __cordl_internal_set_m_ViewIDToIndexMap)) ::Unity::Collections::NativeParallelHashMap_2<int32_t, int32_t> m_ViewIDToIndexMap;

  /// @brief Field s_MaxContextGCFrame, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_MaxContextGCFrame, put = setStaticF_s_MaxContextGCFrame)) int32_t s_MaxContextGCFrame;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method CreateFarDepthPyramid, addr 0x66162dc, size 0x224, virtual false, abstract: false, final false
  inline void CreateFarDepthPyramid(::UnityEngine::Rendering::ComputeCommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::OccluderParameters> occluderParams,
                                    ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate> occluderSubviewUpdates,
                                    ::ByRef<::UnityEngine::Rendering::OccluderHandles> occluderHandles);

  /// @brief Method DeleteContext, addr 0x6616130, size 0x1ac, virtual false, abstract: false, final false
  inline void DeleteContext(int32_t viewInstanceID);

  /// @brief Method DispatchDebugClear, addr 0x661481c, size 0x2ec, virtual false, abstract: false, final false
  inline void DispatchDebugClear(::UnityEngine::Rendering::ComputeCommandBuffer* cmd, int32_t viewInstanceID);

  /// @brief Method Dispose, addr 0x6617428, size 0x27c, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method GetOccluderContext, addr 0x6617084, size 0x128, virtual false, abstract: false, final false
  inline bool GetOccluderContext(int32_t viewInstanceID, ::ByRef<::UnityEngine::Rendering::OccluderContext> occluderContext);

  /// @brief Method GetOcclusionTestDebugOutput, addr 0x6615508, size 0x174, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::OcclusionCullingDebugOutput GetOcclusionTestDebugOutput(int32_t viewInstanceID);

  /// @brief Method HasOccluderContext, addr 0x6617028, size 0x5c, virtual false, abstract: false, final false
  inline bool HasOccluderContext(int32_t viewInstanceID);

  /// @brief Method Init, addr 0x6613f68, size 0x3b0, virtual false, abstract: false, final false
  inline void Init(::UnityEngine::Rendering::GPUResidentDrawerResources* resources);

  /// @brief Method NewContext, addr 0x6615e40, size 0x2f0, virtual false, abstract: false, final false
  inline int32_t NewContext(int32_t viewInstanceID);

  static inline ::UnityEngine::Rendering::OcclusionCullingCommon* New_ctor();

  /// @brief Method PrepareCulling, addr 0x6614328, size 0x1cc, virtual false, abstract: false, final false
  inline void PrepareCulling(::UnityEngine::Rendering::ComputeCommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::OccluderContext> occluderCtx,
                             ::ByRef<::UnityEngine::Rendering::OcclusionCullingSettings> settings, ::ByRef<::UnityEngine::Rendering::InstanceOcclusionTestSubviewSettings> subviewSettings,
                             ::ByRef<::UnityEngine::Rendering::OcclusionTestComputeShader> shader, bool useOcclusionDebug);

  /// @brief Method PrepareOccluders, addr 0x6615bf0, size 0x250, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::OccluderHandles PrepareOccluders(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph,
                                                                    ::ByRef<::UnityEngine::Rendering::OccluderParameters> occluderParams);

  /// @brief Method RenderDebugOccluderOverlay, addr 0x661567c, size 0x574, virtual false, abstract: false, final false
  inline void RenderDebugOccluderOverlay(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* debugSettings,
                                         ::UnityEngine::Vector2 screenPos, float_t maxHeight, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorBuffer);

  /// @brief Method RenderDebugOcclusionTestOverlay, addr 0x6614c88, size 0x880, virtual false, abstract: false, final false
  inline void RenderDebugOcclusionTestOverlay(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::DebugDisplayGPUResidentDrawer* debugSettings,
                                              int32_t viewInstanceID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorBuffer);

  /// @brief Method SetDebugPyramid, addr 0x6614ba4, size 0xe4, virtual false, abstract: false, final false
  static inline void SetDebugPyramid(::UnityEngine::Rendering::ComputeCommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::OcclusionTestComputeShader> shader, int32_t kernel,
                                     ::ByRef<::UnityEngine::Rendering::OccluderHandles> occluderHandles);

  /// @brief Method SetDepthPyramid, addr 0x6614b08, size 0x9c, virtual false, abstract: false, final false
  static inline void SetDepthPyramid(::UnityEngine::Rendering::ComputeCommandBuffer* cmd, ::ByRef<::UnityEngine::Rendering::OcclusionTestComputeShader> shader, int32_t kernel,
                                     ::ByRef<::UnityEngine::Rendering::OccluderHandles> occluderHandles);

  /// @brief Method UpdateFrame, addr 0x66171ac, size 0x27c, virtual false, abstract: false, final false
  inline void UpdateFrame();

  /// @brief Method UpdateInstanceOccluders, addr 0x6616500, size 0x79c, virtual false, abstract: false, final false
  inline bool UpdateInstanceOccluders(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::ByRef<::UnityEngine::Rendering::OccluderParameters> occluderParams,
                                      ::System::ReadOnlySpan_1<::UnityEngine::Rendering::OccluderSubviewUpdate> occluderSubviewUpdates);

  /// @brief Method UpdateOccluderStats, addr 0x6616ca8, size 0x380, virtual false, abstract: false, final false
  inline void UpdateOccluderStats(::UnityEngine::Rendering::DebugRendererBatcherStats* debugStats);

  /// @brief Method UpdateSilhouettePlanes, addr 0x6616c9c, size 0xc, virtual false, abstract: false, final false
  inline void UpdateSilhouettePlanes(int32_t viewInstanceID, ::Unity::Collections::NativeArray_1<::UnityEngine::Plane> planes);

  /// @brief Method UseOcclusionDebug, addr 0x6614318, size 0x10, virtual false, abstract: false, final false
  static inline bool UseOcclusionDebug(::ByRef<::UnityEngine::Rendering::OccluderContext> occluderCtx);

  /// @brief Method <RenderDebugOcclusionTestOverlay>b__29_1, addr 0x66176f8, size 0x114, virtual false, abstract: false, final false
  inline void _RenderDebugOcclusionTestOverlay_b__29_1(::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData* data,
                                                       ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext ctx);

  constexpr int32_t const& __cordl_internal_get_m_ClearOcclusionDebugKernel() const;

  constexpr int32_t& __cordl_internal_get_m_ClearOcclusionDebugKernel();

  constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_CommonConstantBuffer() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_CommonConstantBuffer();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables> const& __cordl_internal_get_m_CommonShaderVariables() const;

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables>& __cordl_internal_get_m_CommonShaderVariables();

  constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_DebugConstantBuffer() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_DebugConstantBuffer();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_DebugOcclusionTestMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_DebugOcclusionTestMaterial();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables> const& __cordl_internal_get_m_DebugShaderVariables() const;

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables>& __cordl_internal_get_m_DebugShaderVariables();

  constexpr int32_t const& __cordl_internal_get_m_FrameIndex() const;

  constexpr int32_t& __cordl_internal_get_m_FrameIndex();

  constexpr ::Unity::Collections::NativeList_1<int32_t> const& __cordl_internal_get_m_FreeOccluderContexts() const;

  constexpr ::Unity::Collections::NativeList_1<int32_t>& __cordl_internal_get_m_FreeOccluderContexts();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::OccluderContext>* const& __cordl_internal_get_m_OccluderContextData() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::OccluderContext>*& __cordl_internal_get_m_OccluderContextData();

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::OcclusionCullingCommon_OccluderContextSlot> const& __cordl_internal_get_m_OccluderContextSlots() const;

  constexpr ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::OcclusionCullingCommon_OccluderContextSlot>& __cordl_internal_get_m_OccluderContextSlots();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_OccluderDebugViewMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_OccluderDebugViewMaterial();

  constexpr int32_t const& __cordl_internal_get_m_OccluderDepthDownscaleKernel() const;

  constexpr int32_t& __cordl_internal_get_m_OccluderDepthDownscaleKernel();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_OccluderDepthPyramidCS() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_OccluderDepthPyramidCS();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_OcclusionDebugCS() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_OcclusionDebugCS();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_ProfilingSamplerOccluderOverlay() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSamplerOccluderOverlay();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_ProfilingSamplerOcclusionTestOverlay() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSamplerOcclusionTestOverlay();

  constexpr ::UnityEngine::Rendering::ProfilingSampler* const& __cordl_internal_get_m_ProfilingSamplerUpdateOccluders() const;

  constexpr ::UnityEngine::Rendering::ProfilingSampler*& __cordl_internal_get_m_ProfilingSamplerUpdateOccluders();

  constexpr ::UnityEngine::Rendering::SilhouettePlaneCache const& __cordl_internal_get_m_SilhouettePlaneCache() const;

  constexpr ::UnityEngine::Rendering::SilhouettePlaneCache& __cordl_internal_get_m_SilhouettePlaneCache();

  constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t, int32_t> const& __cordl_internal_get_m_ViewIDToIndexMap() const;

  constexpr ::Unity::Collections::NativeParallelHashMap_2<int32_t, int32_t>& __cordl_internal_get_m_ViewIDToIndexMap();

  constexpr void __cordl_internal_set_m_ClearOcclusionDebugKernel(int32_t value);

  constexpr void __cordl_internal_set_m_CommonConstantBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_CommonShaderVariables(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables> value);

  constexpr void __cordl_internal_set_m_DebugConstantBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_DebugOcclusionTestMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_DebugShaderVariables(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables> value);

  constexpr void __cordl_internal_set_m_FrameIndex(int32_t value);

  constexpr void __cordl_internal_set_m_FreeOccluderContexts(::Unity::Collections::NativeList_1<int32_t> value);

  constexpr void __cordl_internal_set_m_OccluderContextData(::System::Collections::Generic::List_1<::UnityEngine::Rendering::OccluderContext>* value);

  constexpr void __cordl_internal_set_m_OccluderContextSlots(::Unity::Collections::NativeList_1<::UnityEngine::Rendering::OcclusionCullingCommon_OccluderContextSlot> value);

  constexpr void __cordl_internal_set_m_OccluderDebugViewMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_OccluderDepthDownscaleKernel(int32_t value);

  constexpr void __cordl_internal_set_m_OccluderDepthPyramidCS(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_OcclusionDebugCS(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_ProfilingSamplerOccluderOverlay(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_ProfilingSamplerOcclusionTestOverlay(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_ProfilingSamplerUpdateOccluders(::UnityEngine::Rendering::ProfilingSampler* value);

  constexpr void __cordl_internal_set_m_SilhouettePlaneCache(::UnityEngine::Rendering::SilhouettePlaneCache value);

  constexpr void __cordl_internal_set_m_ViewIDToIndexMap(::Unity::Collections::NativeParallelHashMap_2<int32_t, int32_t> value);

  /// @brief Method .ctor, addr 0x66176a4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_s_MaxContextGCFrame();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_s_MaxContextGCFrame(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OcclusionCullingCommon();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OcclusionCullingCommon", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OcclusionCullingCommon(OcclusionCullingCommon&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OcclusionCullingCommon", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OcclusionCullingCommon(OcclusionCullingCommon const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17736 };

  /// @brief Field m_DebugOcclusionTestMaterial, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_DebugOcclusionTestMaterial;

  /// @brief Field m_OccluderDebugViewMaterial, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_OccluderDebugViewMaterial;

  /// @brief Field m_OcclusionDebugCS, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_OcclusionDebugCS;

  /// @brief Field m_ClearOcclusionDebugKernel, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_ClearOcclusionDebugKernel;

  /// @brief Field m_OccluderDepthPyramidCS, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_OccluderDepthPyramidCS;

  /// @brief Field m_OccluderDepthDownscaleKernel, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_OccluderDepthDownscaleKernel;

  /// @brief Field m_FrameIndex, offset: 0x3c, size: 0x4, def value: None
  int32_t ___m_FrameIndex;

  /// @brief Field m_SilhouettePlaneCache, offset: 0x40, size: 0x28, def value: None
  ::UnityEngine::Rendering::SilhouettePlaneCache ___m_SilhouettePlaneCache;

  /// @brief Field m_ViewIDToIndexMap, offset: 0x68, size: 0x10, def value: None
  ::Unity::Collections::NativeParallelHashMap_2<int32_t, int32_t> ___m_ViewIDToIndexMap;

  /// @brief Field m_OccluderContextData, offset: 0x78, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::OccluderContext>* ___m_OccluderContextData;

  /// @brief Field m_OccluderContextSlots, offset: 0x80, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<::UnityEngine::Rendering::OcclusionCullingCommon_OccluderContextSlot> ___m_OccluderContextSlots;

  /// @brief Field m_FreeOccluderContexts, offset: 0x88, size: 0x8, def value: None
  ::Unity::Collections::NativeList_1<int32_t> ___m_FreeOccluderContexts;

  /// @brief Field m_CommonShaderVariables, offset: 0x90, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OcclusionCullingCommonShaderVariables> ___m_CommonShaderVariables;

  /// @brief Field m_CommonConstantBuffer, offset: 0xa0, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_CommonConstantBuffer;

  /// @brief Field m_DebugShaderVariables, offset: 0xa8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::OcclusionCullingDebugShaderVariables> ___m_DebugShaderVariables;

  /// @brief Field m_DebugConstantBuffer, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_DebugConstantBuffer;

  /// @brief Field m_ProfilingSamplerUpdateOccluders, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSamplerUpdateOccluders;

  /// @brief Field m_ProfilingSamplerOcclusionTestOverlay, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSamplerOcclusionTestOverlay;

  /// @brief Field m_ProfilingSamplerOccluderOverlay, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProfilingSampler* ___m_ProfilingSamplerOccluderOverlay;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon, ___m_DebugOcclusionTestMaterial) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon, ___m_OccluderDebugViewMaterial) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon, ___m_OcclusionDebugCS) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon, ___m_ClearOcclusionDebugKernel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon, ___m_OccluderDepthPyramidCS) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon, ___m_OccluderDepthDownscaleKernel) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon, ___m_FrameIndex) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon, ___m_SilhouettePlaneCache) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon, ___m_ViewIDToIndexMap) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon, ___m_OccluderContextData) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon, ___m_OccluderContextSlots) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon, ___m_FreeOccluderContexts) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon, ___m_CommonShaderVariables) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon, ___m_CommonConstantBuffer) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon, ___m_DebugShaderVariables) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon, ___m_DebugConstantBuffer) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon, ___m_ProfilingSamplerUpdateOccluders) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon, ___m_ProfilingSamplerOcclusionTestOverlay) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::OcclusionCullingCommon, ___m_ProfilingSamplerOccluderOverlay) == 0xd0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OcclusionCullingCommon, 0xd8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::OcclusionCullingCommon);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OcclusionCullingCommon*, "UnityEngine.Rendering", "OcclusionCullingCommon");
NEED_NO_BOX(::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OcclusionCullingCommon_OccluderOverlayPassData*, "UnityEngine.Rendering", "OcclusionCullingCommon/OccluderOverlayPassData");
NEED_NO_BOX(::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlayPassData*, "UnityEngine.Rendering", "OcclusionCullingCommon/OcclusionTestOverlayPassData");
NEED_NO_BOX(::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OcclusionCullingCommon_OcclusionTestOverlaySetupPassData*, "UnityEngine.Rendering", "OcclusionCullingCommon/OcclusionTestOverlaySetupPassData");
NEED_NO_BOX(::UnityEngine::Rendering::OcclusionCullingCommon_ShaderIDs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OcclusionCullingCommon_ShaderIDs*, "UnityEngine.Rendering", "OcclusionCullingCommon/ShaderIDs");
NEED_NO_BOX(::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OcclusionCullingCommon_UpdateOccludersPassData*, "UnityEngine.Rendering", "OcclusionCullingCommon/UpdateOccludersPassData");
NEED_NO_BOX(::UnityEngine::Rendering::OcclusionCullingCommon___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OcclusionCullingCommon___c*, "UnityEngine.Rendering", "OcclusionCullingCommon/<>c");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OcclusionCullingCommon_DebugOccluderViewData, "UnityEngine.Rendering", "OcclusionCullingCommon/DebugOccluderViewData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OcclusionCullingCommon_OccluderContextSlot, "UnityEngine.Rendering", "OcclusionCullingCommon/OccluderContextSlot");
