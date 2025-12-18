#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ProbeReferenceVolume.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ReadCommandArray_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ReadCommand_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ReadHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickIndex_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeBrickPool_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeBlendingTextureMemoryBudget_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeSHBands_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProbeVolumeTextureMemoryBudget_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProbeReferenceVolume)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::Generic {
template <typename T> class Queue_1;
}
namespace System {
template <typename T> class Action_1;
}
namespace System {
class Action;
}
namespace System {
class AsyncCallback;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
class IAsyncResult;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
namespace Unity::IO::LowLevel::Unsafe {
struct FileHandle;
}
namespace Unity::IO::LowLevel::Unsafe {
struct ReadStatus;
}
namespace UnityEngine::Events {
template <typename T0> class UnityAction_1;
}
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct RenderGraphContext;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering {
struct CellData_ProbeReferenceVolume_PerScenarioData;
}
namespace UnityEngine::Rendering {
class CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate;
}
namespace UnityEngine::Rendering {
struct CellStreamingRequest_ProbeReferenceVolume_State;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class DebugOverlay;
}
namespace UnityEngine::Rendering {
class DebugUI_EnumField;
}
namespace UnityEngine::Rendering {
template <typename T> class DebugUI_Field_1;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
namespace UnityEngine::Rendering {
template <typename T> class DynamicArray_1_SortComparer;
}
namespace UnityEngine::Rendering {
template <typename T> class DynamicArray_1;
}
namespace UnityEngine::Rendering {
template <typename T> class ObjectPool_1;
}
namespace UnityEngine::Rendering {
class ProbeBrickBlendingPool;
}
namespace UnityEngine::Rendering {
struct ProbeBrickIndex_Brick;
}
namespace UnityEngine::Rendering {
class ProbeBrickIndex;
}
namespace UnityEngine::Rendering {
struct ProbeBrickPool_BrickChunkAlloc;
}
namespace UnityEngine::Rendering {
struct ProbeBrickPool_DataLocation;
}
namespace UnityEngine::Rendering {
class ProbeBrickPool;
}
namespace UnityEngine::Rendering {
class ProbeGlobalIndirection;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellBlendingInfo;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellData;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellDesc;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellIndexInfo;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellInstancedDebugProbes;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellPoolInfo;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellStreamingInfo;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellStreamingRequest;
}
namespace UnityEngine::Rendering {
struct ProbeReferenceVolume_CellStreamingScratchBufferLayout;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellStreamingScratchBuffer;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_Cell;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_DiskStreamingRequest;
}
namespace UnityEngine::Rendering {
struct ProbeReferenceVolume_ExtraDataActionInput;
}
namespace UnityEngine::Rendering {
struct ProbeReferenceVolume_IndirectionEntryInfo;
}
namespace UnityEngine::Rendering {
struct ProbeReferenceVolume_RefVolTransform;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_RenderFragmentationOverlayPassData;
}
namespace UnityEngine::Rendering {
struct ProbeReferenceVolume_RuntimeResources;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_ShaderIDs;
}
namespace UnityEngine::Rendering {
struct ProbeReferenceVolume_Volume;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume___c;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume___c__DisplayClass314_0;
}
namespace UnityEngine::Rendering {
class ProbeSamplingDebugData;
}
namespace UnityEngine::Rendering {
class ProbeVolumeBakingSet_PerScenarioDataInfo;
}
namespace UnityEngine::Rendering {
class ProbeVolumeBakingSet;
}
namespace UnityEngine::Rendering {
class ProbeVolumeDebug;
}
namespace UnityEngine::Rendering {
class ProbeVolumePerSceneData;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeSHBands;
}
namespace UnityEngine::Rendering {
class ProbeVolumeSceneData;
}
namespace UnityEngine::Rendering {
class ProbeVolumeScratchBufferPool;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeShadingParameters;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeSystemParameters;
}
namespace UnityEngine::Rendering {
struct ProbeVolumeTextureMemoryBudget;
}
namespace UnityEngine::Rendering {
class ProbeVolumesOptions;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class GUIContent;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Plane;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
struct CellStreamingRequest_ProbeReferenceVolume_State;
}
namespace UnityEngine::Rendering {
class CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_Cell;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellBlendingInfo;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellData;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellDesc;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellIndexInfo;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellInstancedDebugProbes;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellPoolInfo;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellStreamingInfo;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellStreamingRequest;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_CellStreamingScratchBuffer;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_DiskStreamingRequest;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_RenderFragmentationOverlayPassData;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume_ShaderIDs;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume___c;
}
namespace UnityEngine::Rendering {
class ProbeReferenceVolume___c__DisplayClass314_0;
}
namespace UnityEngine::Rendering {
struct CellData_ProbeReferenceVolume_PerScenarioData;
}
namespace UnityEngine::Rendering {
struct ProbeReferenceVolume_CellStreamingScratchBufferLayout;
}
namespace UnityEngine::Rendering {
struct ProbeReferenceVolume_ExtraDataActionInput;
}
namespace UnityEngine::Rendering {
struct ProbeReferenceVolume_IndirectionEntryInfo;
}
namespace UnityEngine::Rendering {
struct ProbeReferenceVolume_RefVolTransform;
}
namespace UnityEngine::Rendering {
struct ProbeReferenceVolume_RuntimeResources;
}
namespace UnityEngine::Rendering {
struct ProbeReferenceVolume_Volume;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State);
MARK_REF_PTR_T(::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate);
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeReferenceVolume);
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeReferenceVolume_Cell);
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo);
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeReferenceVolume_CellData);
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc);
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo);
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes);
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo);
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo);
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest);
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer);
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest);
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData);
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs);
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeReferenceVolume___c);
MARK_REF_PTR_T(::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0);
MARK_VAL_T(::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData);
MARK_VAL_T(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout);
MARK_VAL_T(::UnityEngine::Rendering::ProbeReferenceVolume_ExtraDataActionInput);
MARK_VAL_T(::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo);
MARK_VAL_T(::UnityEngine::Rendering::ProbeReferenceVolume_RefVolTransform);
MARK_VAL_T(::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources);
MARK_VAL_T(::UnityEngine::Rendering::ProbeReferenceVolume_Volume);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/ShaderIDs
class CORDL_TYPE ProbeReferenceVolume_ShaderIDs : public ::System::Object {
public:
  // Declarations
  /// @brief Field _APVProbeOcclusion, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__APVProbeOcclusion, put = setStaticF__APVProbeOcclusion)) int32_t _APVProbeOcclusion;

  /// @brief Field _APVResCellIndices, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__APVResCellIndices, put = setStaticF__APVResCellIndices)) int32_t _APVResCellIndices;

  /// @brief Field _APVResIndex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__APVResIndex, put = setStaticF__APVResIndex)) int32_t _APVResIndex;

  /// @brief Field _APVResL0_L1Rx, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__APVResL0_L1Rx, put = setStaticF__APVResL0_L1Rx)) int32_t _APVResL0_L1Rx;

  /// @brief Field _APVResL1B_L1Rz, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__APVResL1B_L1Rz, put = setStaticF__APVResL1B_L1Rz)) int32_t _APVResL1B_L1Rz;

  /// @brief Field _APVResL1G_L1Ry, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__APVResL1G_L1Ry, put = setStaticF__APVResL1G_L1Ry)) int32_t _APVResL1G_L1Ry;

  /// @brief Field _APVResL2_0, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__APVResL2_0, put = setStaticF__APVResL2_0)) int32_t _APVResL2_0;

  /// @brief Field _APVResL2_1, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__APVResL2_1, put = setStaticF__APVResL2_1)) int32_t _APVResL2_1;

  /// @brief Field _APVResL2_2, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__APVResL2_2, put = setStaticF__APVResL2_2)) int32_t _APVResL2_2;

  /// @brief Field _APVResL2_3, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__APVResL2_3, put = setStaticF__APVResL2_3)) int32_t _APVResL2_3;

  /// @brief Field _APVResValidity, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__APVResValidity, put = setStaticF__APVResValidity)) int32_t _APVResValidity;

  /// @brief Field _AntiLeakData, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__AntiLeakData, put = setStaticF__AntiLeakData)) int32_t _AntiLeakData;

  /// @brief Field _SkyOcclusionTexL0L1, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SkyOcclusionTexL0L1, put = setStaticF__SkyOcclusionTexL0L1)) int32_t _SkyOcclusionTexL0L1;

  /// @brief Field _SkyPrecomputedDirections, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SkyPrecomputedDirections, put = setStaticF__SkyPrecomputedDirections)) int32_t _SkyPrecomputedDirections;

  /// @brief Field _SkyShadingDirectionIndicesTex, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF__SkyShadingDirectionIndicesTex, put = setStaticF__SkyShadingDirectionIndicesTex)) int32_t _SkyShadingDirectionIndicesTex;

  static inline int32_t getStaticF__APVProbeOcclusion();

  static inline int32_t getStaticF__APVResCellIndices();

  static inline int32_t getStaticF__APVResIndex();

  static inline int32_t getStaticF__APVResL0_L1Rx();

  static inline int32_t getStaticF__APVResL1B_L1Rz();

  static inline int32_t getStaticF__APVResL1G_L1Ry();

  static inline int32_t getStaticF__APVResL2_0();

  static inline int32_t getStaticF__APVResL2_1();

  static inline int32_t getStaticF__APVResL2_2();

  static inline int32_t getStaticF__APVResL2_3();

  static inline int32_t getStaticF__APVResValidity();

  static inline int32_t getStaticF__AntiLeakData();

  static inline int32_t getStaticF__SkyOcclusionTexL0L1();

  static inline int32_t getStaticF__SkyPrecomputedDirections();

  static inline int32_t getStaticF__SkyShadingDirectionIndicesTex();

  static inline void setStaticF__APVProbeOcclusion(int32_t value);

  static inline void setStaticF__APVResCellIndices(int32_t value);

  static inline void setStaticF__APVResIndex(int32_t value);

  static inline void setStaticF__APVResL0_L1Rx(int32_t value);

  static inline void setStaticF__APVResL1B_L1Rz(int32_t value);

  static inline void setStaticF__APVResL1G_L1Ry(int32_t value);

  static inline void setStaticF__APVResL2_0(int32_t value);

  static inline void setStaticF__APVResL2_1(int32_t value);

  static inline void setStaticF__APVResL2_2(int32_t value);

  static inline void setStaticF__APVResL2_3(int32_t value);

  static inline void setStaticF__APVResValidity(int32_t value);

  static inline void setStaticF__AntiLeakData(int32_t value);

  static inline void setStaticF__SkyOcclusionTexL0L1(int32_t value);

  static inline void setStaticF__SkyPrecomputedDirections(int32_t value);

  static inline void setStaticF__SkyShadingDirectionIndicesTex(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeReferenceVolume_ShaderIDs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_ShaderIDs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeReferenceVolume_ShaderIDs(ProbeReferenceVolume_ShaderIDs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_ShaderIDs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeReferenceVolume_ShaderIDs(ProbeReferenceVolume_ShaderIDs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12063 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Vector3Int
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/IndirectionEntryInfo
struct CORDL_TYPE ProbeReferenceVolume_IndirectionEntryInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeReferenceVolume_IndirectionEntryInfo();

  // Ctor Parameters [CppParam { name: "positionInBricks", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None }, CppParam { name: "minSubdiv", ty: "int32_t", modifiers: "", def_value:
  // None }, CppParam { name: "minBrickPos", ty: "::UnityEngine::Vector3Int", modifiers: "", def_value: None }, CppParam { name: "maxBrickPosPlusOne", ty: "::UnityEngine::Vector3Int", modifiers: "",
  // def_value: None }, CppParam { name: "hasMinMax", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hasOnlyBiggerBricks", ty: "bool", modifiers: "", def_value: None }]
  constexpr ProbeReferenceVolume_IndirectionEntryInfo(::UnityEngine::Vector3Int positionInBricks, int32_t minSubdiv, ::UnityEngine::Vector3Int minBrickPos,
                                                      ::UnityEngine::Vector3Int maxBrickPosPlusOne, bool hasMinMax, bool hasOnlyBiggerBricks) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12064 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2c };

  /// @brief Field positionInBricks, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3Int positionInBricks;

  /// @brief Field minSubdiv, offset: 0xc, size: 0x4, def value: None
  int32_t minSubdiv;

  /// @brief Field minBrickPos, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3Int minBrickPos;

  /// @brief Field maxBrickPosPlusOne, offset: 0x1c, size: 0xc, def value: None
  ::UnityEngine::Vector3Int maxBrickPosPlusOne;

  /// @brief Field hasMinMax, offset: 0x28, size: 0x1, def value: None
  bool hasMinMax;

  /// @brief Field hasOnlyBiggerBricks, offset: 0x29, size: 0x1, def value: None
  bool hasOnlyBiggerBricks;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo, positionInBricks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo, minSubdiv) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo, minBrickPos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo, maxBrickPosPlusOne) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo, hasMinMax) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo, hasOnlyBiggerBricks) == 0x29, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo, 0x2c>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Vector3Int
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/CellDesc
class CORDL_TYPE ProbeReferenceVolume_CellDesc : public ::System::Object {
public:
  // Declarations
  /// @brief Field bricksCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_bricksCount, put = __cordl_internal_set_bricksCount)) int32_t bricksCount;

  /// @brief Field index, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  /// @brief Field indexChunkCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_indexChunkCount, put = __cordl_internal_set_indexChunkCount)) int32_t indexChunkCount;

  /// @brief Field indirectionEntryInfo, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_indirectionEntryInfo,
                      put = __cordl_internal_set_indirectionEntryInfo)) ::ArrayW<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo,
                                                                                 ::Array<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>*>
      indirectionEntryInfo;

  /// @brief Field minSubdiv, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_minSubdiv, put = __cordl_internal_set_minSubdiv)) int32_t minSubdiv;

  /// @brief Field position, offset 0x10, size 0xc
  __declspec(property(get = __cordl_internal_get_position, put = __cordl_internal_set_position)) ::UnityEngine::Vector3Int position;

  /// @brief Field probeCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_probeCount, put = __cordl_internal_set_probeCount)) int32_t probeCount;

  /// @brief Field shChunkCount, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_shChunkCount, put = __cordl_internal_set_shChunkCount)) int32_t shChunkCount;

  static inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc* New_ctor();

  /// @brief Method ToString, addr 0x65d7cbc, size 0xd4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr int32_t const& __cordl_internal_get_bricksCount() const;

  constexpr int32_t& __cordl_internal_get_bricksCount();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr int32_t const& __cordl_internal_get_indexChunkCount() const;

  constexpr int32_t& __cordl_internal_get_indexChunkCount();

  constexpr ::ArrayW<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo, ::Array<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>*> const&
  __cordl_internal_get_indirectionEntryInfo() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo, ::Array<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>*>&
  __cordl_internal_get_indirectionEntryInfo();

  constexpr int32_t const& __cordl_internal_get_minSubdiv() const;

  constexpr int32_t& __cordl_internal_get_minSubdiv();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_position() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_position();

  constexpr int32_t const& __cordl_internal_get_probeCount() const;

  constexpr int32_t& __cordl_internal_get_probeCount();

  constexpr int32_t const& __cordl_internal_get_shChunkCount() const;

  constexpr int32_t& __cordl_internal_get_shChunkCount();

  constexpr void __cordl_internal_set_bricksCount(int32_t value);

  constexpr void __cordl_internal_set_index(int32_t value);

  constexpr void __cordl_internal_set_indexChunkCount(int32_t value);

  constexpr void __cordl_internal_set_indirectionEntryInfo(
      ::ArrayW<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo, ::Array<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>*> value);

  constexpr void __cordl_internal_set_minSubdiv(int32_t value);

  constexpr void __cordl_internal_set_position(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_probeCount(int32_t value);

  constexpr void __cordl_internal_set_shChunkCount(int32_t value);

  /// @brief Method .ctor, addr 0x65d7d90, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeReferenceVolume_CellDesc();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_CellDesc", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeReferenceVolume_CellDesc(ProbeReferenceVolume_CellDesc&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_CellDesc", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeReferenceVolume_CellDesc(ProbeReferenceVolume_CellDesc const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12065 };

  /// @brief Field position, offset: 0x10, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___position;

  /// @brief Field index, offset: 0x1c, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field probeCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___probeCount;

  /// @brief Field minSubdiv, offset: 0x24, size: 0x4, def value: None
  int32_t ___minSubdiv;

  /// @brief Field indexChunkCount, offset: 0x28, size: 0x4, def value: None
  int32_t ___indexChunkCount;

  /// @brief Field shChunkCount, offset: 0x2c, size: 0x4, def value: None
  int32_t ___shChunkCount;

  /// @brief Field bricksCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___bricksCount;

  /// @brief Field indirectionEntryInfo, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo, ::Array<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>*> ___indirectionEntryInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc, ___position) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc, ___index) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc, ___probeCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc, ___minSubdiv) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc, ___indexChunkCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc, ___shChunkCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc, ___bricksCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc, ___indirectionEntryInfo) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc, 0x40>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies Unity.Collections.NativeArray`1<T>
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/CellData/PerScenarioData
struct CORDL_TYPE CellData_ProbeReferenceVolume_PerScenarioData {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr CellData_ProbeReferenceVolume_PerScenarioData();

  // Ctor Parameters [CppParam { name: "shL0L1RxData", ty: "::Unity::Collections::NativeArray_1<uint16_t>", modifiers: "", def_value: None }, CppParam { name: "shL1GL1RyData", ty:
  // "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "shL1BL1RzData", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value:
  // None }, CppParam { name: "shL2Data_0", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "shL2Data_1", ty:
  // "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "shL2Data_2", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None
  // }, CppParam { name: "shL2Data_3", ty: "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "probeOcclusion", ty:
  // "::Unity::Collections::NativeArray_1<uint8_t>", modifiers: "", def_value: None }]
  constexpr CellData_ProbeReferenceVolume_PerScenarioData(::Unity::Collections::NativeArray_1<uint16_t> shL0L1RxData, ::Unity::Collections::NativeArray_1<uint8_t> shL1GL1RyData,
                                                          ::Unity::Collections::NativeArray_1<uint8_t> shL1BL1RzData, ::Unity::Collections::NativeArray_1<uint8_t> shL2Data_0,
                                                          ::Unity::Collections::NativeArray_1<uint8_t> shL2Data_1, ::Unity::Collections::NativeArray_1<uint8_t> shL2Data_2,
                                                          ::Unity::Collections::NativeArray_1<uint8_t> shL2Data_3, ::Unity::Collections::NativeArray_1<uint8_t> probeOcclusion) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12066 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x80 };

  /// @brief Field shL0L1RxData, offset: 0x0, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint16_t> shL0L1RxData;

  /// @brief Field shL1GL1RyData, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> shL1GL1RyData;

  /// @brief Field shL1BL1RzData, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> shL1BL1RzData;

  /// @brief Field shL2Data_0, offset: 0x30, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> shL2Data_0;

  /// @brief Field shL2Data_1, offset: 0x40, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> shL2Data_1;

  /// @brief Field shL2Data_2, offset: 0x50, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> shL2Data_2;

  /// @brief Field shL2Data_3, offset: 0x60, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> shL2Data_3;

  /// @brief Field probeOcclusion, offset: 0x70, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> probeOcclusion;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData, shL0L1RxData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData, shL1GL1RyData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData, shL1BL1RzData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData, shL2Data_0) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData, shL2Data_1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData, shL2Data_2) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData, shL2Data_3) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData, probeOcclusion) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>, UnityEngine.Rendering.ProbeBrickIndex::Brick, UnityEngine.Vector3
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/CellData
class CORDL_TYPE ProbeReferenceVolume_CellData : public ::System::Object {
public:
  // Declarations
  using PerScenarioData = ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData;

  /// @brief Field <bricks>k__BackingField, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__bricks_k__BackingField,
                      put = __cordl_internal_set__bricks_k__BackingField)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>
      _bricks_k__BackingField;

  /// @brief Field <layer>k__BackingField, offset 0x98, size 0x10
  __declspec(property(get = __cordl_internal_get__layer_k__BackingField, put = __cordl_internal_set__layer_k__BackingField)) ::Unity::Collections::NativeArray_1<uint8_t> _layer_k__BackingField;

  /// @brief Field <offsetVectors>k__BackingField, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get__offsetVectors_k__BackingField, put = __cordl_internal_set__offsetVectors_k__BackingField)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>
      _offsetVectors_k__BackingField;

  /// @brief Field <probePositions>k__BackingField, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get__probePositions_k__BackingField,
                      put = __cordl_internal_set__probePositions_k__BackingField)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>
      _probePositions_k__BackingField;

  /// @brief Field <skyOcclusionDataL0L1>k__BackingField, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__skyOcclusionDataL0L1_k__BackingField, put = __cordl_internal_set__skyOcclusionDataL0L1_k__BackingField)) ::Unity::Collections::NativeArray_1<uint16_t>
      _skyOcclusionDataL0L1_k__BackingField;

  /// @brief Field <skyShadingDirectionIndices>k__BackingField, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__skyShadingDirectionIndices_k__BackingField,
                      put = __cordl_internal_set__skyShadingDirectionIndices_k__BackingField)) ::Unity::Collections::NativeArray_1<uint8_t>
      _skyShadingDirectionIndices_k__BackingField;

  /// @brief Field <touchupVolumeInteraction>k__BackingField, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get__touchupVolumeInteraction_k__BackingField,
                      put = __cordl_internal_set__touchupVolumeInteraction_k__BackingField)) ::Unity::Collections::NativeArray_1<float_t>
      _touchupVolumeInteraction_k__BackingField;

  /// @brief Field <validity>k__BackingField, offset 0x88, size 0x10
  __declspec(property(get = __cordl_internal_get__validity_k__BackingField, put = __cordl_internal_set__validity_k__BackingField)) ::Unity::Collections::NativeArray_1<float_t>
      _validity_k__BackingField;

  __declspec(property(get = get_bricks, put = set_bricks)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick> bricks;

  __declspec(property(get = get_layer, put = set_layer)) ::Unity::Collections::NativeArray_1<uint8_t> layer;

  __declspec(property(get = get_offsetVectors, put = set_offsetVectors)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> offsetVectors;

  __declspec(property(get = get_probePositions, put = set_probePositions)) ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> probePositions;

  /// @brief Field scenarios, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_scenarios,
                      put =
                          __cordl_internal_set_scenarios)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData>* scenarios;

  __declspec(property(get = get_skyOcclusionDataL0L1, put = set_skyOcclusionDataL0L1)) ::Unity::Collections::NativeArray_1<uint16_t> skyOcclusionDataL0L1;

  __declspec(property(get = get_skyShadingDirectionIndices, put = set_skyShadingDirectionIndices)) ::Unity::Collections::NativeArray_1<uint8_t> skyShadingDirectionIndices;

  __declspec(property(get = get_touchupVolumeInteraction, put = set_touchupVolumeInteraction)) ::Unity::Collections::NativeArray_1<float_t> touchupVolumeInteraction;

  __declspec(property(get = get_validity, put = set_validity)) ::Unity::Collections::NativeArray_1<float_t> validity;

  /// @brief Field validityNeighMaskData, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_validityNeighMaskData, put = __cordl_internal_set_validityNeighMaskData)) ::Unity::Collections::NativeArray_1<uint8_t> validityNeighMaskData;

  /// @brief Method Cleanup, addr 0x65d7f78, size 0x3d0, virtual false, abstract: false, final false
  inline void Cleanup(bool cleanScenarioList);

  /// @brief Method CleanupPerScenarioData, addr 0x65d7e34, size 0x144, virtual false, abstract: false, final false
  inline void CleanupPerScenarioData(::ByRef<::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData> data);

  static inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellData* New_ctor();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick> const& __cordl_internal_get__bricks_k__BackingField() const;

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick>& __cordl_internal_get__bricks_k__BackingField();

  constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get__layer_k__BackingField() const;

  constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get__layer_k__BackingField();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& __cordl_internal_get__offsetVectors_k__BackingField() const;

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& __cordl_internal_get__offsetVectors_k__BackingField();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> const& __cordl_internal_get__probePositions_k__BackingField() const;

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>& __cordl_internal_get__probePositions_k__BackingField();

  constexpr ::Unity::Collections::NativeArray_1<uint16_t> const& __cordl_internal_get__skyOcclusionDataL0L1_k__BackingField() const;

  constexpr ::Unity::Collections::NativeArray_1<uint16_t>& __cordl_internal_get__skyOcclusionDataL0L1_k__BackingField();

  constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get__skyShadingDirectionIndices_k__BackingField() const;

  constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get__skyShadingDirectionIndices_k__BackingField();

  constexpr ::Unity::Collections::NativeArray_1<float_t> const& __cordl_internal_get__touchupVolumeInteraction_k__BackingField() const;

  constexpr ::Unity::Collections::NativeArray_1<float_t>& __cordl_internal_get__touchupVolumeInteraction_k__BackingField();

  constexpr ::Unity::Collections::NativeArray_1<float_t> const& __cordl_internal_get__validity_k__BackingField() const;

  constexpr ::Unity::Collections::NativeArray_1<float_t>& __cordl_internal_get__validity_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData>* const& __cordl_internal_get_scenarios() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData>*& __cordl_internal_get_scenarios();

  constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get_validityNeighMaskData() const;

  constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get_validityNeighMaskData();

  constexpr void __cordl_internal_set__bricks_k__BackingField(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick> value);

  constexpr void __cordl_internal_set__layer_k__BackingField(::Unity::Collections::NativeArray_1<uint8_t> value);

  constexpr void __cordl_internal_set__offsetVectors_k__BackingField(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> value);

  constexpr void __cordl_internal_set__probePositions_k__BackingField(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> value);

  constexpr void __cordl_internal_set__skyOcclusionDataL0L1_k__BackingField(::Unity::Collections::NativeArray_1<uint16_t> value);

  constexpr void __cordl_internal_set__skyShadingDirectionIndices_k__BackingField(::Unity::Collections::NativeArray_1<uint8_t> value);

  constexpr void __cordl_internal_set__touchupVolumeInteraction_k__BackingField(::Unity::Collections::NativeArray_1<float_t> value);

  constexpr void __cordl_internal_set__validity_k__BackingField(::Unity::Collections::NativeArray_1<float_t> value);

  constexpr void __cordl_internal_set_scenarios(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData>* value);

  constexpr void __cordl_internal_set_validityNeighMaskData(::Unity::Collections::NativeArray_1<uint8_t> value);

  /// @brief Method .ctor, addr 0x65d8348, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_bricks, addr 0x65d7dbc, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick> get_bricks();

  /// @brief Method get_layer, addr 0x65d7e20, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint8_t> get_layer();

  /// @brief Method get_offsetVectors, addr 0x65d7df8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> get_offsetVectors();

  /// @brief Method get_probePositions, addr 0x65d7dd0, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> get_probePositions();

  /// @brief Method get_skyOcclusionDataL0L1, addr 0x65d7d94, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint16_t> get_skyOcclusionDataL0L1();

  /// @brief Method get_skyShadingDirectionIndices, addr 0x65d7da8, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<uint8_t> get_skyShadingDirectionIndices();

  /// @brief Method get_touchupVolumeInteraction, addr 0x65d7de4, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<float_t> get_touchupVolumeInteraction();

  /// @brief Method get_validity, addr 0x65d7e0c, size 0xc, virtual false, abstract: false, final false
  inline ::Unity::Collections::NativeArray_1<float_t> get_validity();

  /// @brief Method set_bricks, addr 0x65d7dc8, size 0x8, virtual false, abstract: false, final false
  inline void set_bricks(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick> value);

  /// @brief Method set_layer, addr 0x65d7e2c, size 0x8, virtual false, abstract: false, final false
  inline void set_layer(::Unity::Collections::NativeArray_1<uint8_t> value);

  /// @brief Method set_offsetVectors, addr 0x65d7e04, size 0x8, virtual false, abstract: false, final false
  inline void set_offsetVectors(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> value);

  /// @brief Method set_probePositions, addr 0x65d7ddc, size 0x8, virtual false, abstract: false, final false
  inline void set_probePositions(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> value);

  /// @brief Method set_skyOcclusionDataL0L1, addr 0x65d7da0, size 0x8, virtual false, abstract: false, final false
  inline void set_skyOcclusionDataL0L1(::Unity::Collections::NativeArray_1<uint16_t> value);

  /// @brief Method set_skyShadingDirectionIndices, addr 0x65d7db4, size 0x8, virtual false, abstract: false, final false
  inline void set_skyShadingDirectionIndices(::Unity::Collections::NativeArray_1<uint8_t> value);

  /// @brief Method set_touchupVolumeInteraction, addr 0x65d7df0, size 0x8, virtual false, abstract: false, final false
  inline void set_touchupVolumeInteraction(::Unity::Collections::NativeArray_1<float_t> value);

  /// @brief Method set_validity, addr 0x65d7e18, size 0x8, virtual false, abstract: false, final false
  inline void set_validity(::Unity::Collections::NativeArray_1<float_t> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeReferenceVolume_CellData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_CellData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeReferenceVolume_CellData(ProbeReferenceVolume_CellData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_CellData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeReferenceVolume_CellData(ProbeReferenceVolume_CellData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12067 };

  /// @brief Field validityNeighMaskData, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> ___validityNeighMaskData;

  /// @brief Field <skyOcclusionDataL0L1>k__BackingField, offset: 0x20, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint16_t> ____skyOcclusionDataL0L1_k__BackingField;

  /// @brief Field <skyShadingDirectionIndices>k__BackingField, offset: 0x30, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> ____skyShadingDirectionIndices_k__BackingField;

  /// @brief Field scenarios, offset: 0x40, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData>* ___scenarios;

  /// @brief Field <bricks>k__BackingField, offset: 0x48, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick> ____bricks_k__BackingField;

  /// @brief Field <probePositions>k__BackingField, offset: 0x58, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> ____probePositions_k__BackingField;

  /// @brief Field <touchupVolumeInteraction>k__BackingField, offset: 0x68, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> ____touchupVolumeInteraction_k__BackingField;

  /// @brief Field <offsetVectors>k__BackingField, offset: 0x78, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Vector3> ____offsetVectors_k__BackingField;

  /// @brief Field <validity>k__BackingField, offset: 0x88, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> ____validity_k__BackingField;

  /// @brief Field <layer>k__BackingField, offset: 0x98, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> ____layer_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellData, ___validityNeighMaskData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellData, ____skyOcclusionDataL0L1_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellData, ____skyShadingDirectionIndices_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellData, ___scenarios) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellData, ____bricks_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellData, ____probePositions_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellData, ____touchupVolumeInteraction_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellData, ____offsetVectors_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellData, ____validity_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellData, ____layer_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeReferenceVolume_CellData, 0xa8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/CellPoolInfo
class CORDL_TYPE ProbeReferenceVolume_CellPoolInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field chunkList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_chunkList,
                      put = __cordl_internal_set_chunkList)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* chunkList;

  /// @brief Field shChunkCount, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_shChunkCount, put = __cordl_internal_set_shChunkCount)) int32_t shChunkCount;

  /// @brief Method Clear, addr 0x65d83e0, size 0x58, virtual false, abstract: false, final false
  inline void Clear();

  static inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* const& __cordl_internal_get_chunkList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*& __cordl_internal_get_chunkList();

  constexpr int32_t const& __cordl_internal_get_shChunkCount() const;

  constexpr int32_t& __cordl_internal_get_shChunkCount();

  constexpr void __cordl_internal_set_chunkList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* value);

  constexpr void __cordl_internal_set_shChunkCount(int32_t value);

  /// @brief Method .ctor, addr 0x65d8438, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeReferenceVolume_CellPoolInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_CellPoolInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeReferenceVolume_CellPoolInfo(ProbeReferenceVolume_CellPoolInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_CellPoolInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeReferenceVolume_CellPoolInfo(ProbeReferenceVolume_CellPoolInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12068 };

  /// @brief Field chunkList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* ___chunkList;

  /// @brief Field shChunkCount, offset: 0x18, size: 0x4, def value: None
  int32_t ___shChunkCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo, ___chunkList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo, ___shChunkCount) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.ProbeBrickIndex::CellIndexUpdateInfo
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/CellIndexInfo
class CORDL_TYPE ProbeReferenceVolume_CellIndexInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field flatIndicesInGlobalIndirection, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_flatIndicesInGlobalIndirection, put = __cordl_internal_set_flatIndicesInGlobalIndirection)) ::ArrayW<int32_t, ::Array<int32_t>*>
      flatIndicesInGlobalIndirection;

  /// @brief Field indexChunkCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_indexChunkCount, put = __cordl_internal_set_indexChunkCount)) int32_t indexChunkCount;

  /// @brief Field indexUpdated, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_indexUpdated, put = __cordl_internal_set_indexUpdated)) bool indexUpdated;

  /// @brief Field indirectionEntryInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_indirectionEntryInfo,
                      put = __cordl_internal_set_indirectionEntryInfo)) ::ArrayW<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo,
                                                                                 ::Array<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>*>
      indirectionEntryInfo;

  /// @brief Field updateInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_updateInfo, put = __cordl_internal_set_updateInfo)) ::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo updateInfo;

  /// @brief Method Clear, addr 0x65d84ac, size 0x10, virtual false, abstract: false, final false
  inline void Clear();

  static inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo* New_ctor();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_flatIndicesInGlobalIndirection() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_flatIndicesInGlobalIndirection();

  constexpr int32_t const& __cordl_internal_get_indexChunkCount() const;

  constexpr int32_t& __cordl_internal_get_indexChunkCount();

  constexpr bool const& __cordl_internal_get_indexUpdated() const;

  constexpr bool& __cordl_internal_get_indexUpdated();

  constexpr ::ArrayW<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo, ::Array<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>*> const&
  __cordl_internal_get_indirectionEntryInfo() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo, ::Array<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>*>&
  __cordl_internal_get_indirectionEntryInfo();

  constexpr ::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo const& __cordl_internal_get_updateInfo() const;

  constexpr ::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo& __cordl_internal_get_updateInfo();

  constexpr void __cordl_internal_set_flatIndicesInGlobalIndirection(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_indexChunkCount(int32_t value);

  constexpr void __cordl_internal_set_indexUpdated(bool value);

  constexpr void __cordl_internal_set_indirectionEntryInfo(
      ::ArrayW<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo, ::Array<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>*> value);

  constexpr void __cordl_internal_set_updateInfo(::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo value);

  /// @brief Method .ctor, addr 0x65d84bc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeReferenceVolume_CellIndexInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_CellIndexInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeReferenceVolume_CellIndexInfo(ProbeReferenceVolume_CellIndexInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_CellIndexInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeReferenceVolume_CellIndexInfo(ProbeReferenceVolume_CellIndexInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12069 };

  /// @brief Field flatIndicesInGlobalIndirection, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___flatIndicesInGlobalIndirection;

  /// @brief Field updateInfo, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeBrickIndex_CellIndexUpdateInfo ___updateInfo;

  /// @brief Field indexUpdated, offset: 0x20, size: 0x1, def value: None
  bool ___indexUpdated;

  /// @brief Field indirectionEntryInfo, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo, ::Array<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo>*> ___indirectionEntryInfo;

  /// @brief Field indexChunkCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___indexChunkCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo, ___flatIndicesInGlobalIndirection) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo, ___updateInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo, ___indexUpdated) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo, ___indirectionEntryInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo, ___indexChunkCount) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/CellBlendingInfo
class CORDL_TYPE ProbeReferenceVolume_CellBlendingInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field blending, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_blending, put = __cordl_internal_set_blending)) bool blending;

  /// @brief Field blendingFactor, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_blendingFactor, put = __cordl_internal_set_blendingFactor)) float_t blendingFactor;

  /// @brief Field blendingScore, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_blendingScore, put = __cordl_internal_set_blendingScore)) float_t blendingScore;

  /// @brief Field chunkList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_chunkList,
                      put = __cordl_internal_set_chunkList)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* chunkList;

  /// @brief Method Clear, addr 0x65d8524, size 0x60, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ForceReupload, addr 0x65d84e4, size 0xc, virtual false, abstract: false, final false
  inline void ForceReupload();

  /// @brief Method IsUpToDate, addr 0x65d84cc, size 0x18, virtual false, abstract: false, final false
  inline bool IsUpToDate();

  /// @brief Method MarkUpToDate, addr 0x65d84c0, size 0xc, virtual false, abstract: false, final false
  inline void MarkUpToDate();

  static inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo* New_ctor();

  /// @brief Method Prioritize, addr 0x65d8504, size 0xc, virtual false, abstract: false, final false
  inline void Prioritize();

  /// @brief Method ShouldPrioritize, addr 0x65d8510, size 0x14, virtual false, abstract: false, final false
  inline bool ShouldPrioritize();

  /// @brief Method ShouldReupload, addr 0x65d84f0, size 0x14, virtual false, abstract: false, final false
  inline bool ShouldReupload();

  constexpr bool const& __cordl_internal_get_blending() const;

  constexpr bool& __cordl_internal_get_blending();

  constexpr float_t const& __cordl_internal_get_blendingFactor() const;

  constexpr float_t& __cordl_internal_get_blendingFactor();

  constexpr float_t const& __cordl_internal_get_blendingScore() const;

  constexpr float_t& __cordl_internal_get_blendingScore();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* const& __cordl_internal_get_chunkList() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*& __cordl_internal_get_chunkList();

  constexpr void __cordl_internal_set_blending(bool value);

  constexpr void __cordl_internal_set_blendingFactor(float_t value);

  constexpr void __cordl_internal_set_blendingScore(float_t value);

  constexpr void __cordl_internal_set_chunkList(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* value);

  /// @brief Method .ctor, addr 0x65d8584, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeReferenceVolume_CellBlendingInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_CellBlendingInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeReferenceVolume_CellBlendingInfo(ProbeReferenceVolume_CellBlendingInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_CellBlendingInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeReferenceVolume_CellBlendingInfo(ProbeReferenceVolume_CellBlendingInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12070 };

  /// @brief Field chunkList, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* ___chunkList;

  /// @brief Field blendingScore, offset: 0x18, size: 0x4, def value: None
  float_t ___blendingScore;

  /// @brief Field blendingFactor, offset: 0x1c, size: 0x4, def value: None
  float_t ___blendingFactor;

  /// @brief Field blending, offset: 0x20, size: 0x1, def value: None
  bool ___blending;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo, ___chunkList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo, ___blendingScore) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo, ___blendingFactor) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo, ___blending) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/CellStreamingInfo
class CORDL_TYPE ProbeReferenceVolume_CellStreamingInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field blendingRequest0, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_blendingRequest0, put = __cordl_internal_set_blendingRequest0)) ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* blendingRequest0;

  /// @brief Field blendingRequest1, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_blendingRequest1, put = __cordl_internal_set_blendingRequest1)) ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* blendingRequest1;

  /// @brief Field request, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_request, put = __cordl_internal_set_request)) ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* request;

  /// @brief Field streamingScore, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_streamingScore, put = __cordl_internal_set_streamingScore)) float_t streamingScore;

  /// @brief Method Clear, addr 0x65d8664, size 0x10, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method IsBlendingStreaming, addr 0x65d8628, size 0x3c, virtual false, abstract: false, final false
  inline bool IsBlendingStreaming();

  /// @brief Method IsStreaming, addr 0x65d85f8, size 0x20, virtual false, abstract: false, final false
  inline bool IsStreaming();

  static inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo* New_ctor();

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* const& __cordl_internal_get_blendingRequest0() const;

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*& __cordl_internal_get_blendingRequest0();

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* const& __cordl_internal_get_blendingRequest1() const;

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*& __cordl_internal_get_blendingRequest1();

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* const& __cordl_internal_get_request() const;

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*& __cordl_internal_get_request();

  constexpr float_t const& __cordl_internal_get_streamingScore() const;

  constexpr float_t& __cordl_internal_get_streamingScore();

  constexpr void __cordl_internal_set_blendingRequest0(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* value);

  constexpr void __cordl_internal_set_blendingRequest1(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* value);

  constexpr void __cordl_internal_set_request(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* value);

  constexpr void __cordl_internal_set_streamingScore(float_t value);

  /// @brief Method .ctor, addr 0x65d8674, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeReferenceVolume_CellStreamingInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_CellStreamingInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeReferenceVolume_CellStreamingInfo(ProbeReferenceVolume_CellStreamingInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_CellStreamingInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeReferenceVolume_CellStreamingInfo(ProbeReferenceVolume_CellStreamingInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12071 };

  /// @brief Field request, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* ___request;

  /// @brief Field blendingRequest0, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* ___blendingRequest0;

  /// @brief Field blendingRequest1, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* ___blendingRequest1;

  /// @brief Field streamingScore, offset: 0x28, size: 0x4, def value: None
  float_t ___streamingScore;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo, ___request) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo, ___blendingRequest0) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo, ___blendingRequest1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo, ___streamingScore) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo, 0x30>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.ProbeReferenceVolume::CellData::PerScenarioData
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/Cell
class CORDL_TYPE ProbeReferenceVolume_Cell : public ::System::Object {
public:
  // Declarations
  /// @brief Field blendingInfo, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_blendingInfo, put = __cordl_internal_set_blendingInfo)) ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo* blendingInfo;

  /// @brief Field data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::UnityEngine::Rendering::ProbeReferenceVolume_CellData* data;

  /// @brief Field debugProbes, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_debugProbes, put = __cordl_internal_set_debugProbes)) ::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes* debugProbes;

  /// @brief Field desc, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_desc, put = __cordl_internal_set_desc)) ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc* desc;

  /// @brief Field hasTwoScenarios, offset 0x148, size 0x1
  __declspec(property(get = __cordl_internal_get_hasTwoScenarios, put = __cordl_internal_set_hasTwoScenarios)) bool hasTwoScenarios;

  /// @brief Field indexInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_indexInfo, put = __cordl_internal_set_indexInfo)) ::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo* indexInfo;

  /// @brief Field loaded, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_loaded, put = __cordl_internal_set_loaded)) bool loaded;

  /// @brief Field poolInfo, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_poolInfo, put = __cordl_internal_set_poolInfo)) ::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo* poolInfo;

  /// @brief Field referenceCount, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_referenceCount, put = __cordl_internal_set_referenceCount)) int32_t referenceCount;

  /// @brief Field scenario0, offset 0x48, size 0x80
  __declspec(property(get = __cordl_internal_get_scenario0, put = __cordl_internal_set_scenario0)) ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData scenario0;

  /// @brief Field scenario1, offset 0xc8, size 0x80
  __declspec(property(get = __cordl_internal_get_scenario1, put = __cordl_internal_set_scenario1)) ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData scenario1;

  /// @brief Field streamingInfo, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_streamingInfo, put = __cordl_internal_set_streamingInfo)) ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo* streamingInfo;

  /// @brief Convert operator to "::System::IComparable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>"
  constexpr operator ::System::IComparable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*() noexcept;

  /// @brief Method Clear, addr 0x65d8784, size 0x70, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method CompareTo, addr 0x65d8678, size 0x4c, virtual true, abstract: false, final true
  inline int32_t CompareTo(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* other);

  static inline ::UnityEngine::Rendering::ProbeReferenceVolume_Cell* New_ctor();

  /// @brief Method UpdateCellScenarioData, addr 0x65d86c4, size 0xc0, virtual false, abstract: false, final false
  inline bool UpdateCellScenarioData(::StringW scenario0, ::StringW scenario1);

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo* const& __cordl_internal_get_blendingInfo() const;

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*& __cordl_internal_get_blendingInfo();

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellData* const& __cordl_internal_get_data() const;

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellData*& __cordl_internal_get_data();

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes* const& __cordl_internal_get_debugProbes() const;

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes*& __cordl_internal_get_debugProbes();

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc* const& __cordl_internal_get_desc() const;

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*& __cordl_internal_get_desc();

  constexpr bool const& __cordl_internal_get_hasTwoScenarios() const;

  constexpr bool& __cordl_internal_get_hasTwoScenarios();

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo* const& __cordl_internal_get_indexInfo() const;

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*& __cordl_internal_get_indexInfo();

  constexpr bool const& __cordl_internal_get_loaded() const;

  constexpr bool& __cordl_internal_get_loaded();

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo* const& __cordl_internal_get_poolInfo() const;

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo*& __cordl_internal_get_poolInfo();

  constexpr int32_t const& __cordl_internal_get_referenceCount() const;

  constexpr int32_t& __cordl_internal_get_referenceCount();

  constexpr ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData const& __cordl_internal_get_scenario0() const;

  constexpr ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData& __cordl_internal_get_scenario0();

  constexpr ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData const& __cordl_internal_get_scenario1() const;

  constexpr ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData& __cordl_internal_get_scenario1();

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo* const& __cordl_internal_get_streamingInfo() const;

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo*& __cordl_internal_get_streamingInfo();

  constexpr void __cordl_internal_set_blendingInfo(::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo* value);

  constexpr void __cordl_internal_set_data(::UnityEngine::Rendering::ProbeReferenceVolume_CellData* value);

  constexpr void __cordl_internal_set_debugProbes(::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes* value);

  constexpr void __cordl_internal_set_desc(::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc* value);

  constexpr void __cordl_internal_set_hasTwoScenarios(bool value);

  constexpr void __cordl_internal_set_indexInfo(::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo* value);

  constexpr void __cordl_internal_set_loaded(bool value);

  constexpr void __cordl_internal_set_poolInfo(::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo* value);

  constexpr void __cordl_internal_set_referenceCount(int32_t value);

  constexpr void __cordl_internal_set_scenario0(::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData value);

  constexpr void __cordl_internal_set_scenario1(::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData value);

  constexpr void __cordl_internal_set_streamingInfo(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo* value);

  /// @brief Method .ctor, addr 0x65d87f4, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IComparable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>"
  constexpr ::System::IComparable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* i___System__IComparable_1___UnityEngine__Rendering__ProbeReferenceVolume_Cell__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeReferenceVolume_Cell();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_Cell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeReferenceVolume_Cell(ProbeReferenceVolume_Cell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_Cell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeReferenceVolume_Cell(ProbeReferenceVolume_Cell const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12072 };

  /// @brief Field desc, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc* ___desc;

  /// @brief Field data, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeReferenceVolume_CellData* ___data;

  /// @brief Field poolInfo, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo* ___poolInfo;

  /// @brief Field indexInfo, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo* ___indexInfo;

  /// @brief Field blendingInfo, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo* ___blendingInfo;

  /// @brief Field streamingInfo, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo* ___streamingInfo;

  /// @brief Field referenceCount, offset: 0x40, size: 0x4, def value: None
  int32_t ___referenceCount;

  /// @brief Field loaded, offset: 0x44, size: 0x1, def value: None
  bool ___loaded;

  /// @brief Field scenario0, offset: 0x48, size: 0x80, def value: None
  ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData ___scenario0;

  /// @brief Field scenario1, offset: 0xc8, size: 0x80, def value: None
  ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData ___scenario1;

  /// @brief Field hasTwoScenarios, offset: 0x148, size: 0x1, def value: None
  bool ___hasTwoScenarios;

  /// @brief Field debugProbes, offset: 0x150, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes* ___debugProbes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_Cell, ___desc) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_Cell, ___data) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_Cell, ___poolInfo) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_Cell, ___indexInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_Cell, ___blendingInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_Cell, ___streamingInfo) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_Cell, ___referenceCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_Cell, ___loaded) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_Cell, ___scenario0) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_Cell, ___scenario1) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_Cell, ___hasTwoScenarios) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_Cell, ___debugProbes) == 0x150, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeReferenceVolume_Cell, 0x158>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Vector3
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/Volume
struct CORDL_TYPE ProbeReferenceVolume_Volume {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>*();

  /// @brief Method CalculateAABB, addr 0x65d8a78, size 0x10c, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds CalculateAABB();

  /// @brief Method CalculateCenterAndSize, addr 0x65d8b84, size 0x1c4, virtual false, abstract: false, final false
  inline void CalculateCenterAndSize(::ByRef<::UnityEngine::Vector3> center, ::ByRef<::UnityEngine::Vector3> size);

  /// @brief Method Equals, addr 0x65d8ff8, size 0xf4, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::ProbeReferenceVolume_Volume other);

  /// @brief Method ToString, addr 0x65d8de0, size 0x218, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Transform, addr 0x65d8d48, size 0x98, virtual false, abstract: false, final false
  inline void Transform(::UnityEngine::Matrix4x4 trs);

  /// @brief Method .ctor, addr 0x65d8a18, size 0x60, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Bounds bounds);

  /// @brief Method .ctor, addr 0x65d8984, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Rendering::ProbeReferenceVolume_Volume copy);

  /// @brief Method .ctor, addr 0x65d8944, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 corner, ::UnityEngine::Vector3 X, ::UnityEngine::Vector3 Y, ::UnityEngine::Vector3 Z, float_t maxSubdivision, float_t minSubdivision);

  /// @brief Method .ctor, addr 0x65d88c4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Matrix4x4 trs, float_t maxSubdivision, float_t minSubdivision);

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::ProbeReferenceVolume_Volume>* i___System__IEquatable_1___UnityEngine__Rendering__ProbeReferenceVolume_Volume_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeReferenceVolume_Volume();

  // Ctor Parameters [CppParam { name: "corner", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "X", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None },
  // CppParam { name: "Y", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "Z", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name:
  // "maxSubdivisionMultiplier", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "minSubdivisionMultiplier", ty: "float_t", modifiers: "", def_value: None }]
  constexpr ProbeReferenceVolume_Volume(::UnityEngine::Vector3 corner, ::UnityEngine::Vector3 X, ::UnityEngine::Vector3 Y, ::UnityEngine::Vector3 Z, float_t maxSubdivisionMultiplier,
                                        float_t minSubdivisionMultiplier) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12073 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field corner, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 corner;

  /// @brief Field X, offset: 0xc, size: 0xc, def value: None
  ::UnityEngine::Vector3 X;

  /// @brief Field Y, offset: 0x18, size: 0xc, def value: None
  ::UnityEngine::Vector3 Y;

  /// @brief Field Z, offset: 0x24, size: 0xc, def value: None
  ::UnityEngine::Vector3 Z;

  /// @brief Field maxSubdivisionMultiplier, offset: 0x30, size: 0x4, def value: None
  float_t maxSubdivisionMultiplier;

  /// @brief Field minSubdivisionMultiplier, offset: 0x34, size: 0x4, def value: None
  float_t minSubdivisionMultiplier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_Volume, corner) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_Volume, X) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_Volume, Y) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_Volume, Z) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_Volume, maxSubdivisionMultiplier) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_Volume, minSubdivisionMultiplier) == 0x34, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeReferenceVolume_Volume, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies UnityEngine.Quaternion, UnityEngine.Vector3
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/RefVolTransform
struct CORDL_TYPE ProbeReferenceVolume_RefVolTransform {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeReferenceVolume_RefVolTransform();

  // Ctor Parameters [CppParam { name: "posWS", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None }, CppParam { name: "rot", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: None
  // }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }]
  constexpr ProbeReferenceVolume_RefVolTransform(::UnityEngine::Vector3 posWS, ::UnityEngine::Quaternion rot, float_t scale) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12074 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field posWS, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Vector3 posWS;

  /// @brief Field rot, offset: 0xc, size: 0x10, def value: None
  ::UnityEngine::Quaternion rot;

  /// @brief Field scale, offset: 0x1c, size: 0x4, def value: None
  float_t scale;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_RefVolTransform, posWS) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_RefVolTransform, rot) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_RefVolTransform, scale) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeReferenceVolume_RefVolTransform, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/RuntimeResources
struct CORDL_TYPE ProbeReferenceVolume_RuntimeResources {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeReferenceVolume_RuntimeResources();

  // Ctor Parameters [CppParam { name: "index", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None }, CppParam { name: "cellIndices", ty: "::UnityEngine::ComputeBuffer*", modifiers:
  // "", def_value: None }, CppParam { name: "L0_L1rx", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None }, CppParam { name: "L1_G_ry", ty:
  // "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None }, CppParam { name: "L1_B_rz", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None }, CppParam {
  // name: "L2_0", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None }, CppParam { name: "L2_1", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None
  // }, CppParam { name: "L2_2", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None }, CppParam { name: "L2_3", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "",
  // def_value: None }, CppParam { name: "ProbeOcclusion", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None }, CppParam { name: "Validity", ty:
  // "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None }, CppParam { name: "SkyOcclusionL0L1", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None },
  // CppParam { name: "SkyShadingDirectionIndices", ty: "::UnityW<::UnityEngine::RenderTexture>", modifiers: "", def_value: None }, CppParam { name: "SkyPrecomputedDirections", ty:
  // "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None }, CppParam { name: "QualityLeakReductionData", ty: "::UnityEngine::ComputeBuffer*", modifiers: "", def_value: None }]
  constexpr ProbeReferenceVolume_RuntimeResources(::UnityEngine::ComputeBuffer* index, ::UnityEngine::ComputeBuffer* cellIndices, ::UnityW<::UnityEngine::RenderTexture> L0_L1rx,
                                                  ::UnityW<::UnityEngine::RenderTexture> L1_G_ry, ::UnityW<::UnityEngine::RenderTexture> L1_B_rz, ::UnityW<::UnityEngine::RenderTexture> L2_0,
                                                  ::UnityW<::UnityEngine::RenderTexture> L2_1, ::UnityW<::UnityEngine::RenderTexture> L2_2, ::UnityW<::UnityEngine::RenderTexture> L2_3,
                                                  ::UnityW<::UnityEngine::RenderTexture> ProbeOcclusion, ::UnityW<::UnityEngine::RenderTexture> Validity,
                                                  ::UnityW<::UnityEngine::RenderTexture> SkyOcclusionL0L1, ::UnityW<::UnityEngine::RenderTexture> SkyShadingDirectionIndices,
                                                  ::UnityEngine::ComputeBuffer* SkyPrecomputedDirections, ::UnityEngine::ComputeBuffer* QualityLeakReductionData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12075 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  /// @brief Field index, offset: 0x0, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* index;

  /// @brief Field cellIndices, offset: 0x8, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* cellIndices;

  /// @brief Field L0_L1rx, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> L0_L1rx;

  /// @brief Field L1_G_ry, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> L1_G_ry;

  /// @brief Field L1_B_rz, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> L1_B_rz;

  /// @brief Field L2_0, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> L2_0;

  /// @brief Field L2_1, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> L2_1;

  /// @brief Field L2_2, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> L2_2;

  /// @brief Field L2_3, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> L2_3;

  /// @brief Field ProbeOcclusion, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ProbeOcclusion;

  /// @brief Field Validity, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> Validity;

  /// @brief Field SkyOcclusionL0L1, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> SkyOcclusionL0L1;

  /// @brief Field SkyShadingDirectionIndices, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> SkyShadingDirectionIndices;

  /// @brief Field SkyPrecomputedDirections, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* SkyPrecomputedDirections;

  /// @brief Field QualityLeakReductionData, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* QualityLeakReductionData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources, index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources, cellIndices) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources, L0_L1rx) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources, L1_G_ry) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources, L1_B_rz) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources, L2_0) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources, L2_1) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources, L2_2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources, L2_3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources, ProbeOcclusion) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources, Validity) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources, SkyOcclusionL0L1) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources, SkyShadingDirectionIndices) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources, SkyPrecomputedDirections) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources, QualityLeakReductionData) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources, 0x78>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/ExtraDataActionInput
#pragma pack(push, 0)
struct CORDL_TYPE ProbeReferenceVolume_ExtraDataActionInput {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeReferenceVolume_ExtraDataActionInput();

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12076 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Size padding 0x1 - 0x0 = 0x1, packed as 0x1
  uint8_t _cordl_size_padding[0x1];

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
#pragma pack(pop)
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeReferenceVolume_ExtraDataActionInput, 0x1>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/CellInstancedDebugProbes
class CORDL_TYPE ProbeReferenceVolume_CellInstancedDebugProbes : public ::System::Object {
public:
  // Declarations
  /// @brief Field offsetBuffers, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_offsetBuffers,
                      put = __cordl_internal_set_offsetBuffers)) ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>* offsetBuffers;

  /// @brief Field probeBuffers, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_probeBuffers,
                      put = __cordl_internal_set_probeBuffers)) ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>* probeBuffers;

  /// @brief Field props, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_props, put = __cordl_internal_set_props)) ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* props;

  static inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes* New_ctor();

  constexpr ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>* const& __cordl_internal_get_offsetBuffers() const;

  constexpr ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>*& __cordl_internal_get_offsetBuffers();

  constexpr ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>* const& __cordl_internal_get_probeBuffers() const;

  constexpr ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>*& __cordl_internal_get_probeBuffers();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* const& __cordl_internal_get_props() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>*& __cordl_internal_get_props();

  constexpr void __cordl_internal_set_offsetBuffers(::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>* value);

  constexpr void __cordl_internal_set_probeBuffers(::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>* value);

  constexpr void __cordl_internal_set_props(::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* value);

  /// @brief Method .ctor, addr 0x65d90ec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeReferenceVolume_CellInstancedDebugProbes();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_CellInstancedDebugProbes", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeReferenceVolume_CellInstancedDebugProbes(ProbeReferenceVolume_CellInstancedDebugProbes&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_CellInstancedDebugProbes", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeReferenceVolume_CellInstancedDebugProbes(ProbeReferenceVolume_CellInstancedDebugProbes const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12077 };

  /// @brief Field probeBuffers, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>* ___probeBuffers;

  /// @brief Field offsetBuffers, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::ArrayW<::UnityEngine::Matrix4x4, ::Array<::UnityEngine::Matrix4x4>*>>* ___offsetBuffers;

  /// @brief Field props, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::MaterialPropertyBlock*>* ___props;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes, ___probeBuffers) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes, ___offsetBuffers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes, ___props) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes, 0x28>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.RenderGraphModule.TextureHandle
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/RenderFragmentationOverlayPassData
class CORDL_TYPE ProbeReferenceVolume_RenderFragmentationOverlayPassData : public ::System::Object {
public:
  // Declarations
  /// @brief Field chunkCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_chunkCount, put = __cordl_internal_set_chunkCount)) int32_t chunkCount;

  /// @brief Field colorBuffer, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_colorBuffer, put = __cordl_internal_set_colorBuffer)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorBuffer;

  /// @brief Field debugFragmentationData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_debugFragmentationData, put = __cordl_internal_set_debugFragmentationData)) ::UnityEngine::ComputeBuffer* debugFragmentationData;

  /// @brief Field debugFragmentationMaterial, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_debugFragmentationMaterial, put = __cordl_internal_set_debugFragmentationMaterial)) ::UnityW<::UnityEngine::Material> debugFragmentationMaterial;

  /// @brief Field debugOverlay, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_debugOverlay, put = __cordl_internal_set_debugOverlay)) ::UnityEngine::Rendering::DebugOverlay* debugOverlay;

  /// @brief Field depthBuffer, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get_depthBuffer, put = __cordl_internal_set_depthBuffer)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthBuffer;

  static inline ::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData* New_ctor();

  constexpr int32_t const& __cordl_internal_get_chunkCount() const;

  constexpr int32_t& __cordl_internal_get_chunkCount();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_colorBuffer() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_colorBuffer();

  constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_debugFragmentationData() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_debugFragmentationData();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_debugFragmentationMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_debugFragmentationMaterial();

  constexpr ::UnityEngine::Rendering::DebugOverlay* const& __cordl_internal_get_debugOverlay() const;

  constexpr ::UnityEngine::Rendering::DebugOverlay*& __cordl_internal_get_debugOverlay();

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& __cordl_internal_get_depthBuffer() const;

  constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& __cordl_internal_get_depthBuffer();

  constexpr void __cordl_internal_set_chunkCount(int32_t value);

  constexpr void __cordl_internal_set_colorBuffer(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  constexpr void __cordl_internal_set_debugFragmentationData(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_debugFragmentationMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_debugOverlay(::UnityEngine::Rendering::DebugOverlay* value);

  constexpr void __cordl_internal_set_depthBuffer(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  /// @brief Method .ctor, addr 0x65d90f0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeReferenceVolume_RenderFragmentationOverlayPassData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_RenderFragmentationOverlayPassData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeReferenceVolume_RenderFragmentationOverlayPassData(ProbeReferenceVolume_RenderFragmentationOverlayPassData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_RenderFragmentationOverlayPassData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeReferenceVolume_RenderFragmentationOverlayPassData(ProbeReferenceVolume_RenderFragmentationOverlayPassData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12078 };

  /// @brief Field debugFragmentationMaterial, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___debugFragmentationMaterial;

  /// @brief Field debugOverlay, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugOverlay* ___debugOverlay;

  /// @brief Field chunkCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___chunkCount;

  /// @brief Field debugFragmentationData, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___debugFragmentationData;

  /// @brief Field colorBuffer, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___colorBuffer;

  /// @brief Field depthBuffer, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::TextureHandle ___depthBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData, ___debugFragmentationMaterial) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData, ___debugOverlay) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData, ___chunkCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData, ___debugFragmentationData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData, ___colorBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData, ___depthBuffer) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>, Unity.IO.LowLevel.Unsafe.ReadCommand, Unity.IO.LowLevel.Unsafe.ReadCommandArray, Unity.IO.LowLevel.Unsafe.ReadHandle
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/DiskStreamingRequest
class CORDL_TYPE ProbeReferenceVolume_DiskStreamingRequest : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_BytesWritten, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BytesWritten, put = __cordl_internal_set_m_BytesWritten)) int32_t m_BytesWritten;

  /// @brief Field m_ReadCommandArray, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ReadCommandArray, put = __cordl_internal_set_m_ReadCommandArray)) ::Unity::IO::LowLevel::Unsafe::ReadCommandArray m_ReadCommandArray;

  /// @brief Field m_ReadCommandBuffer, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ReadCommandBuffer, put = __cordl_internal_set_m_ReadCommandBuffer)) ::Unity::Collections::NativeArray_1<::Unity::IO::LowLevel::Unsafe::ReadCommand>
      m_ReadCommandBuffer;

  /// @brief Field m_ReadHandle, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ReadHandle, put = __cordl_internal_set_m_ReadHandle)) ::Unity::IO::LowLevel::Unsafe::ReadHandle m_ReadHandle;

  /// @brief Method AddReadCommand, addr 0x65d9170, size 0x3c, virtual false, abstract: false, final false
  inline void AddReadCommand(int32_t offset, int32_t size, uint8_t* dest);

  /// @brief Method Cancel, addr 0x65d9290, size 0x30, virtual false, abstract: false, final false
  inline void Cancel();

  /// @brief Method Clear, addr 0x65d9218, size 0x78, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Dispose, addr 0x65d9324, size 0x4c, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method GetStatus, addr 0x65d9370, size 0x34, virtual false, abstract: false, final false
  inline ::Unity::IO::LowLevel::Unsafe::ReadStatus GetStatus();

  static inline ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* New_ctor(int32_t maxRequestCount);

  /// @brief Method RunCommands, addr 0x65d91ac, size 0x6c, virtual false, abstract: false, final false
  inline int32_t RunCommands(::Unity::IO::LowLevel::Unsafe::FileHandle file);

  /// @brief Method Wait, addr 0x65d92c0, size 0x64, virtual false, abstract: false, final false
  inline void Wait();

  constexpr int32_t const& __cordl_internal_get_m_BytesWritten() const;

  constexpr int32_t& __cordl_internal_get_m_BytesWritten();

  constexpr ::Unity::IO::LowLevel::Unsafe::ReadCommandArray const& __cordl_internal_get_m_ReadCommandArray() const;

  constexpr ::Unity::IO::LowLevel::Unsafe::ReadCommandArray& __cordl_internal_get_m_ReadCommandArray();

  constexpr ::Unity::Collections::NativeArray_1<::Unity::IO::LowLevel::Unsafe::ReadCommand> const& __cordl_internal_get_m_ReadCommandBuffer() const;

  constexpr ::Unity::Collections::NativeArray_1<::Unity::IO::LowLevel::Unsafe::ReadCommand>& __cordl_internal_get_m_ReadCommandBuffer();

  constexpr ::Unity::IO::LowLevel::Unsafe::ReadHandle const& __cordl_internal_get_m_ReadHandle() const;

  constexpr ::Unity::IO::LowLevel::Unsafe::ReadHandle& __cordl_internal_get_m_ReadHandle();

  constexpr void __cordl_internal_set_m_BytesWritten(int32_t value);

  constexpr void __cordl_internal_set_m_ReadCommandArray(::Unity::IO::LowLevel::Unsafe::ReadCommandArray value);

  constexpr void __cordl_internal_set_m_ReadCommandBuffer(::Unity::Collections::NativeArray_1<::Unity::IO::LowLevel::Unsafe::ReadCommand> value);

  constexpr void __cordl_internal_set_m_ReadHandle(::Unity::IO::LowLevel::Unsafe::ReadHandle value);

  /// @brief Method .ctor, addr 0x65d90f4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(int32_t maxRequestCount);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeReferenceVolume_DiskStreamingRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_DiskStreamingRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeReferenceVolume_DiskStreamingRequest(ProbeReferenceVolume_DiskStreamingRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_DiskStreamingRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeReferenceVolume_DiskStreamingRequest(ProbeReferenceVolume_DiskStreamingRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12079 };

  /// @brief Field m_ReadHandle, offset: 0x10, size: 0x10, def value: None
  ::Unity::IO::LowLevel::Unsafe::ReadHandle ___m_ReadHandle;

  /// @brief Field m_ReadCommandArray, offset: 0x20, size: 0x10, def value: None
  ::Unity::IO::LowLevel::Unsafe::ReadCommandArray ___m_ReadCommandArray;

  /// @brief Field m_ReadCommandBuffer, offset: 0x30, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::IO::LowLevel::Unsafe::ReadCommand> ___m_ReadCommandBuffer;

  /// @brief Field m_BytesWritten, offset: 0x40, size: 0x4, def value: None
  int32_t ___m_BytesWritten;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest, ___m_ReadHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest, ___m_ReadCommandArray) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest, ___m_ReadCommandBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest, ___m_BytesWritten) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest, 0x48>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/CellStreamingScratchBufferLayout
struct CORDL_TYPE ProbeReferenceVolume_CellStreamingScratchBufferLayout {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeReferenceVolume_CellStreamingScratchBufferLayout();

  // Ctor Parameters [CppParam { name: "_SharedDestChunksOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_L0L1rxOffset", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "_L1GryOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_L1BrzOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_ValidityOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_ProbeOcclusionOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_SkyOcclusionOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_SkyShadingDirectionOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_L2_0Offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_L2_1Offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_L2_2Offset", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "_L2_3Offset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_L0Size", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "_L0ProbeSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_L1Size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_L1ProbeSize", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "_ValiditySize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_ValidityProbeSize", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "_ProbeOcclusionSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_ProbeOcclusionProbeSize", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "_SkyOcclusionSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_SkyOcclusionProbeSize", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "_SkyShadingDirectionSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_SkyShadingDirectionProbeSize", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "_L2Size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_L2ProbeSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "_ProbeCountInChunkLine", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_ProbeCountInChunkSlice", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ProbeReferenceVolume_CellStreamingScratchBufferLayout(int32_t _SharedDestChunksOffset, int32_t _L0L1rxOffset, int32_t _L1GryOffset, int32_t _L1BrzOffset, int32_t _ValidityOffset,
                                                                  int32_t _ProbeOcclusionOffset, int32_t _SkyOcclusionOffset, int32_t _SkyShadingDirectionOffset, int32_t _L2_0Offset,
                                                                  int32_t _L2_1Offset, int32_t _L2_2Offset, int32_t _L2_3Offset, int32_t _L0Size, int32_t _L0ProbeSize, int32_t _L1Size,
                                                                  int32_t _L1ProbeSize, int32_t _ValiditySize, int32_t _ValidityProbeSize, int32_t _ProbeOcclusionSize,
                                                                  int32_t _ProbeOcclusionProbeSize, int32_t _SkyOcclusionSize, int32_t _SkyOcclusionProbeSize, int32_t _SkyShadingDirectionSize,
                                                                  int32_t _SkyShadingDirectionProbeSize, int32_t _L2Size, int32_t _L2ProbeSize, int32_t _ProbeCountInChunkLine,
                                                                  int32_t _ProbeCountInChunkSlice) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12080 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  /// @brief Field _SharedDestChunksOffset, offset: 0x0, size: 0x4, def value: None
  int32_t _SharedDestChunksOffset;

  /// @brief Field _L0L1rxOffset, offset: 0x4, size: 0x4, def value: None
  int32_t _L0L1rxOffset;

  /// @brief Field _L1GryOffset, offset: 0x8, size: 0x4, def value: None
  int32_t _L1GryOffset;

  /// @brief Field _L1BrzOffset, offset: 0xc, size: 0x4, def value: None
  int32_t _L1BrzOffset;

  /// @brief Field _ValidityOffset, offset: 0x10, size: 0x4, def value: None
  int32_t _ValidityOffset;

  /// @brief Field _ProbeOcclusionOffset, offset: 0x14, size: 0x4, def value: None
  int32_t _ProbeOcclusionOffset;

  /// @brief Field _SkyOcclusionOffset, offset: 0x18, size: 0x4, def value: None
  int32_t _SkyOcclusionOffset;

  /// @brief Field _SkyShadingDirectionOffset, offset: 0x1c, size: 0x4, def value: None
  int32_t _SkyShadingDirectionOffset;

  /// @brief Field _L2_0Offset, offset: 0x20, size: 0x4, def value: None
  int32_t _L2_0Offset;

  /// @brief Field _L2_1Offset, offset: 0x24, size: 0x4, def value: None
  int32_t _L2_1Offset;

  /// @brief Field _L2_2Offset, offset: 0x28, size: 0x4, def value: None
  int32_t _L2_2Offset;

  /// @brief Field _L2_3Offset, offset: 0x2c, size: 0x4, def value: None
  int32_t _L2_3Offset;

  /// @brief Field _L0Size, offset: 0x30, size: 0x4, def value: None
  int32_t _L0Size;

  /// @brief Field _L0ProbeSize, offset: 0x34, size: 0x4, def value: None
  int32_t _L0ProbeSize;

  /// @brief Field _L1Size, offset: 0x38, size: 0x4, def value: None
  int32_t _L1Size;

  /// @brief Field _L1ProbeSize, offset: 0x3c, size: 0x4, def value: None
  int32_t _L1ProbeSize;

  /// @brief Field _ValiditySize, offset: 0x40, size: 0x4, def value: None
  int32_t _ValiditySize;

  /// @brief Field _ValidityProbeSize, offset: 0x44, size: 0x4, def value: None
  int32_t _ValidityProbeSize;

  /// @brief Field _ProbeOcclusionSize, offset: 0x48, size: 0x4, def value: None
  int32_t _ProbeOcclusionSize;

  /// @brief Field _ProbeOcclusionProbeSize, offset: 0x4c, size: 0x4, def value: None
  int32_t _ProbeOcclusionProbeSize;

  /// @brief Field _SkyOcclusionSize, offset: 0x50, size: 0x4, def value: None
  int32_t _SkyOcclusionSize;

  /// @brief Field _SkyOcclusionProbeSize, offset: 0x54, size: 0x4, def value: None
  int32_t _SkyOcclusionProbeSize;

  /// @brief Field _SkyShadingDirectionSize, offset: 0x58, size: 0x4, def value: None
  int32_t _SkyShadingDirectionSize;

  /// @brief Field _SkyShadingDirectionProbeSize, offset: 0x5c, size: 0x4, def value: None
  int32_t _SkyShadingDirectionProbeSize;

  /// @brief Field _L2Size, offset: 0x60, size: 0x4, def value: None
  int32_t _L2Size;

  /// @brief Field _L2ProbeSize, offset: 0x64, size: 0x4, def value: None
  int32_t _L2ProbeSize;

  /// @brief Field _ProbeCountInChunkLine, offset: 0x68, size: 0x4, def value: None
  int32_t _ProbeCountInChunkLine;

  /// @brief Field _ProbeCountInChunkSlice, offset: 0x6c, size: 0x4, def value: None
  int32_t _ProbeCountInChunkSlice;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _SharedDestChunksOffset) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L0L1rxOffset) == 0x4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L1GryOffset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L1BrzOffset) == 0xc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _ValidityOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _ProbeOcclusionOffset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _SkyOcclusionOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _SkyShadingDirectionOffset) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L2_0Offset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L2_1Offset) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L2_2Offset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L2_3Offset) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L0Size) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L0ProbeSize) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L1Size) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L1ProbeSize) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _ValiditySize) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _ValidityProbeSize) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _ProbeOcclusionSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _ProbeOcclusionProbeSize) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _SkyOcclusionSize) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _SkyOcclusionProbeSize) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _SkyShadingDirectionSize) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _SkyShadingDirectionProbeSize) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L2Size) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _L2ProbeSize) == 0x64, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _ProbeCountInChunkLine) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, _ProbeCountInChunkSlice) == 0x6c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, 0x70>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, Unity.Collections.NativeArray`1<T>
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/CellStreamingScratchBuffer
class CORDL_TYPE ProbeReferenceVolume_CellStreamingScratchBuffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field <chunkCount>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__chunkCount_k__BackingField, put = __cordl_internal_set__chunkCount_k__BackingField)) int32_t _chunkCount_k__BackingField;

  /// @brief Field <chunkSize>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__chunkSize_k__BackingField, put = __cordl_internal_set__chunkSize_k__BackingField)) int32_t _chunkSize_k__BackingField;

  __declspec(property(get = get_buffer)) ::UnityEngine::GraphicsBuffer* buffer;

  __declspec(property(get = get_chunkCount)) int32_t chunkCount;

  __declspec(property(get = get_chunkSize)) int32_t chunkSize;

  /// @brief Field m_CurrentBuffer, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentBuffer, put = __cordl_internal_set_m_CurrentBuffer)) int32_t m_CurrentBuffer;

  /// @brief Field m_GraphicsBuffers, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GraphicsBuffers, put = __cordl_internal_set_m_GraphicsBuffers)) ::ArrayW<::UnityEngine::GraphicsBuffer*, ::Array<::UnityEngine::GraphicsBuffer*>*>
      m_GraphicsBuffers;

  /// @brief Field stagingBuffer, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get_stagingBuffer, put = __cordl_internal_set_stagingBuffer)) ::Unity::Collections::NativeArray_1<uint8_t> stagingBuffer;

  /// @brief Method Dispose, addr 0x65d9510, size 0x94, virtual false, abstract: false, final false
  inline void Dispose();

  static inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* New_ctor(int32_t chunkCount, int32_t chunkSize, bool allocateGraphicsBuffers);

  /// @brief Method Swap, addr 0x65d94f4, size 0x1c, virtual false, abstract: false, final false
  inline void Swap();

  constexpr int32_t const& __cordl_internal_get__chunkCount_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__chunkCount_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__chunkSize_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__chunkSize_k__BackingField();

  constexpr int32_t const& __cordl_internal_get_m_CurrentBuffer() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentBuffer();

  constexpr ::ArrayW<::UnityEngine::GraphicsBuffer*, ::Array<::UnityEngine::GraphicsBuffer*>*> const& __cordl_internal_get_m_GraphicsBuffers() const;

  constexpr ::ArrayW<::UnityEngine::GraphicsBuffer*, ::Array<::UnityEngine::GraphicsBuffer*>*>& __cordl_internal_get_m_GraphicsBuffers();

  constexpr ::Unity::Collections::NativeArray_1<uint8_t> const& __cordl_internal_get_stagingBuffer() const;

  constexpr ::Unity::Collections::NativeArray_1<uint8_t>& __cordl_internal_get_stagingBuffer();

  constexpr void __cordl_internal_set__chunkCount_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__chunkSize_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set_m_CurrentBuffer(int32_t value);

  constexpr void __cordl_internal_set_m_GraphicsBuffers(::ArrayW<::UnityEngine::GraphicsBuffer*, ::Array<::UnityEngine::GraphicsBuffer*>*> value);

  constexpr void __cordl_internal_set_stagingBuffer(::Unity::Collections::NativeArray_1<uint8_t> value);

  /// @brief Method .ctor, addr 0x65d93a4, size 0x150, virtual false, abstract: false, final false
  inline void _ctor(int32_t chunkCount, int32_t chunkSize, bool allocateGraphicsBuffers);

  /// @brief Method get_buffer, addr 0x65d4e88, size 0x34, virtual false, abstract: false, final false
  inline ::UnityEngine::GraphicsBuffer* get_buffer();

  /// @brief Method get_chunkCount, addr 0x65d95a4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_chunkCount();

  /// @brief Method get_chunkSize, addr 0x65d95ac, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_chunkSize();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeReferenceVolume_CellStreamingScratchBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_CellStreamingScratchBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeReferenceVolume_CellStreamingScratchBuffer(ProbeReferenceVolume_CellStreamingScratchBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_CellStreamingScratchBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeReferenceVolume_CellStreamingScratchBuffer(ProbeReferenceVolume_CellStreamingScratchBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12081 };

  /// @brief Field stagingBuffer, offset: 0x10, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint8_t> ___stagingBuffer;

  /// @brief Field <chunkCount>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____chunkCount_k__BackingField;

  /// @brief Field <chunkSize>k__BackingField, offset: 0x24, size: 0x4, def value: None
  int32_t ____chunkSize_k__BackingField;

  /// @brief Field m_CurrentBuffer, offset: 0x28, size: 0x4, def value: None
  int32_t ___m_CurrentBuffer;

  /// @brief Field m_GraphicsBuffers, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::GraphicsBuffer*, ::Array<::UnityEngine::GraphicsBuffer*>*> ___m_GraphicsBuffers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer, ___stagingBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer, ____chunkCount_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer, ____chunkSize_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer, ___m_CurrentBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer, ___m_GraphicsBuffers) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer, 0x38>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/CellStreamingRequest/State
struct CORDL_TYPE CellStreamingRequest_ProbeReferenceVolume_State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __CellStreamingRequest_ProbeReferenceVolume_State_Unwrapped
  enum struct __CellStreamingRequest_ProbeReferenceVolume_State_Unwrapped : int32_t {
    __E_Pending = static_cast<int32_t>(0x0),
    __E_Active = static_cast<int32_t>(0x1),
    __E_Canceled = static_cast<int32_t>(0x2),
    __E_Invalid = static_cast<int32_t>(0x3),
    __E_Complete = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __CellStreamingRequest_ProbeReferenceVolume_State_Unwrapped() const noexcept {
    return static_cast<__CellStreamingRequest_ProbeReferenceVolume_State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr CellStreamingRequest_ProbeReferenceVolume_State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CellStreamingRequest_ProbeReferenceVolume_State(int32_t value__) noexcept;

  /// @brief Field Active value: I32(1)
  static ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State const Active;

  /// @brief Field Canceled value: I32(2)
  static ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State const Canceled;

  /// @brief Field Complete value: I32(4)
  static ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State const Complete;

  /// @brief Field Invalid value: I32(3)
  static ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State const Invalid;

  /// @brief Field Pending value: I32(0)
  static ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State const Pending;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12082 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/CellStreamingRequest/OnStreamingCompleteDelegate
class CORDL_TYPE CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x65d9bdc, size 0x28, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* request, ::UnityEngine::Rendering::CommandBuffer* cmd,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x65d9c04, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x65d9bc8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* request, ::UnityEngine::Rendering::CommandBuffer* cmd);

  static inline ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x65d9a80, size 0x148, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate(CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate(CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12083 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Rendering.ProbeReferenceVolume::CellStreamingRequest::State, UnityEngine.Rendering.ProbeReferenceVolume::CellStreamingScratchBufferLayout
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/CellStreamingRequest
class CORDL_TYPE ProbeReferenceVolume_CellStreamingRequest : public ::System::Object {
public:
  // Declarations
  using OnStreamingCompleteDelegate = ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate;

  using State = ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State;

  /// @brief Field <cell>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__cell_k__BackingField, put = __cordl_internal_set__cell_k__BackingField)) ::UnityEngine::Rendering::ProbeReferenceVolume_Cell* _cell_k__BackingField;

  /// @brief Field <poolIndex>k__BackingField, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get__poolIndex_k__BackingField, put = __cordl_internal_set__poolIndex_k__BackingField)) int32_t _poolIndex_k__BackingField;

  /// @brief Field <scenarioData>k__BackingField, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__scenarioData_k__BackingField,
                      put = __cordl_internal_set__scenarioData_k__BackingField)) ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo* _scenarioData_k__BackingField;

  /// @brief Field <scratchBufferLayout>k__BackingField, offset 0x28, size 0x70
  __declspec(property(
      get = __cordl_internal_get__scratchBufferLayout_k__BackingField,
      put = __cordl_internal_set__scratchBufferLayout_k__BackingField)) ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout _scratchBufferLayout_k__BackingField;

  /// @brief Field <scratchBuffer>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__scratchBuffer_k__BackingField,
                      put = __cordl_internal_set__scratchBuffer_k__BackingField)) ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* _scratchBuffer_k__BackingField;

  /// @brief Field <state>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__state_k__BackingField,
                      put = __cordl_internal_set__state_k__BackingField)) ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State _state_k__BackingField;

  /// @brief Field <streamSharedData>k__BackingField, offset 0xa4, size 0x1
  __declspec(property(get = __cordl_internal_get__streamSharedData_k__BackingField, put = __cordl_internal_set__streamSharedData_k__BackingField)) bool _streamSharedData_k__BackingField;

  /// @brief Field brickStreamingRequest, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_brickStreamingRequest,
                      put = __cordl_internal_set_brickStreamingRequest)) ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* brickStreamingRequest;

  /// @brief Field bytesWritten, offset 0xe0, size 0x4
  __declspec(property(get = __cordl_internal_get_bytesWritten, put = __cordl_internal_set_bytesWritten)) int32_t bytesWritten;

  __declspec(property(get = get_cell, put = set_cell)) ::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell;

  /// @brief Field cellDataStreamingRequest, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_cellDataStreamingRequest,
                      put = __cordl_internal_set_cellDataStreamingRequest)) ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* cellDataStreamingRequest;

  /// @brief Field cellOptionalDataStreamingRequest, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_cellOptionalDataStreamingRequest,
                      put = __cordl_internal_set_cellOptionalDataStreamingRequest)) ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* cellOptionalDataStreamingRequest;

  /// @brief Field cellProbeOcclusionDataStreamingRequest, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_cellProbeOcclusionDataStreamingRequest,
                      put = __cordl_internal_set_cellProbeOcclusionDataStreamingRequest)) ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* cellProbeOcclusionDataStreamingRequest;

  /// @brief Field cellSharedDataStreamingRequest, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_cellSharedDataStreamingRequest,
                      put = __cordl_internal_set_cellSharedDataStreamingRequest)) ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* cellSharedDataStreamingRequest;

  /// @brief Field onStreamingComplete, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_onStreamingComplete,
                      put = __cordl_internal_set_onStreamingComplete)) ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate* onStreamingComplete;

  __declspec(property(get = get_poolIndex, put = set_poolIndex)) int32_t poolIndex;

  __declspec(property(get = get_scenarioData, put = set_scenarioData)) ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo* scenarioData;

  __declspec(property(get = get_scratchBuffer, put = set_scratchBuffer)) ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* scratchBuffer;

  __declspec(property(get = get_scratchBufferLayout, put = set_scratchBufferLayout)) ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout scratchBufferLayout;

  __declspec(property(get = get_state, put = set_state)) ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State state;

  __declspec(property(get = get_streamSharedData, put = set_streamSharedData)) bool streamSharedData;

  /// @brief Field supportStreamingRequest, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_supportStreamingRequest,
                      put = __cordl_internal_set_supportStreamingRequest)) ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* supportStreamingRequest;

  /// @brief Method Cancel, addr 0x65d9630, size 0x108, virtual false, abstract: false, final false
  inline void Cancel();

  /// @brief Method Clear, addr 0x65d98e4, size 0x8, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Dispose, addr 0x65d9954, size 0x58, virtual false, abstract: false, final false
  inline void Dispose();

  /// @brief Method IsStreaming, addr 0x65d8618, size 0x10, virtual false, abstract: false, final false
  inline bool IsStreaming();

  static inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* New_ctor();

  /// @brief Method Reset, addr 0x65d98ec, size 0x68, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method UpdateRequestState, addr 0x65d97a4, size 0x74, virtual false, abstract: false, final false
  inline bool UpdateRequestState(::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* request, ::ByRef<bool> isComplete);

  /// @brief Method UpdateState, addr 0x65d9818, size 0xcc, virtual false, abstract: false, final false
  inline void UpdateState();

  /// @brief Method WaitAll, addr 0x65d9738, size 0x6c, virtual false, abstract: false, final false
  inline void WaitAll();

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_Cell* const& __cordl_internal_get__cell_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*& __cordl_internal_get__cell_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__poolIndex_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__poolIndex_k__BackingField();

  constexpr ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo* const& __cordl_internal_get__scenarioData_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo*& __cordl_internal_get__scenarioData_k__BackingField();

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout const& __cordl_internal_get__scratchBufferLayout_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout& __cordl_internal_get__scratchBufferLayout_k__BackingField();

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* const& __cordl_internal_get__scratchBuffer_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*& __cordl_internal_get__scratchBuffer_k__BackingField();

  constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State const& __cordl_internal_get__state_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State& __cordl_internal_get__state_k__BackingField();

  constexpr bool const& __cordl_internal_get__streamSharedData_k__BackingField() const;

  constexpr bool& __cordl_internal_get__streamSharedData_k__BackingField();

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* const& __cordl_internal_get_brickStreamingRequest() const;

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*& __cordl_internal_get_brickStreamingRequest();

  constexpr int32_t const& __cordl_internal_get_bytesWritten() const;

  constexpr int32_t& __cordl_internal_get_bytesWritten();

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* const& __cordl_internal_get_cellDataStreamingRequest() const;

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*& __cordl_internal_get_cellDataStreamingRequest();

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* const& __cordl_internal_get_cellOptionalDataStreamingRequest() const;

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*& __cordl_internal_get_cellOptionalDataStreamingRequest();

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* const& __cordl_internal_get_cellProbeOcclusionDataStreamingRequest() const;

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*& __cordl_internal_get_cellProbeOcclusionDataStreamingRequest();

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* const& __cordl_internal_get_cellSharedDataStreamingRequest() const;

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*& __cordl_internal_get_cellSharedDataStreamingRequest();

  constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate* const& __cordl_internal_get_onStreamingComplete() const;

  constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*& __cordl_internal_get_onStreamingComplete();

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* const& __cordl_internal_get_supportStreamingRequest() const;

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*& __cordl_internal_get_supportStreamingRequest();

  constexpr void __cordl_internal_set__cell_k__BackingField(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* value);

  constexpr void __cordl_internal_set__poolIndex_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__scenarioData_k__BackingField(::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo* value);

  constexpr void __cordl_internal_set__scratchBufferLayout_k__BackingField(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout value);

  constexpr void __cordl_internal_set__scratchBuffer_k__BackingField(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* value);

  constexpr void __cordl_internal_set__state_k__BackingField(::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State value);

  constexpr void __cordl_internal_set__streamSharedData_k__BackingField(bool value);

  constexpr void __cordl_internal_set_brickStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* value);

  constexpr void __cordl_internal_set_bytesWritten(int32_t value);

  constexpr void __cordl_internal_set_cellDataStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* value);

  constexpr void __cordl_internal_set_cellOptionalDataStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* value);

  constexpr void __cordl_internal_set_cellProbeOcclusionDataStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* value);

  constexpr void __cordl_internal_set_cellSharedDataStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* value);

  constexpr void __cordl_internal_set_onStreamingComplete(::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate* value);

  constexpr void __cordl_internal_set_supportStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* value);

  /// @brief Method .ctor, addr 0x65d99ac, size 0xd4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cell, addr 0x65d95b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProbeReferenceVolume_Cell* get_cell();

  /// @brief Method get_poolIndex, addr 0x65d9610, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_poolIndex();

  /// @brief Method get_scenarioData, addr 0x65d9600, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo* get_scenarioData();

  /// @brief Method get_scratchBuffer, addr 0x65d95d4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* get_scratchBuffer();

  /// @brief Method get_scratchBufferLayout, addr 0x65d95e4, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout get_scratchBufferLayout();

  /// @brief Method get_state, addr 0x65d95c4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State get_state();

  /// @brief Method get_streamSharedData, addr 0x65d9620, size 0x8, virtual false, abstract: false, final false
  inline bool get_streamSharedData();

  /// @brief Method set_cell, addr 0x65d95bc, size 0x8, virtual false, abstract: false, final false
  inline void set_cell(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* value);

  /// @brief Method set_poolIndex, addr 0x65d9618, size 0x8, virtual false, abstract: false, final false
  inline void set_poolIndex(int32_t value);

  /// @brief Method set_scenarioData, addr 0x65d9608, size 0x8, virtual false, abstract: false, final false
  inline void set_scenarioData(::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo* value);

  /// @brief Method set_scratchBuffer, addr 0x65d95dc, size 0x8, virtual false, abstract: false, final false
  inline void set_scratchBuffer(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* value);

  /// @brief Method set_scratchBufferLayout, addr 0x65d95f4, size 0xc, virtual false, abstract: false, final false
  inline void set_scratchBufferLayout(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout value);

  /// @brief Method set_state, addr 0x65d95cc, size 0x8, virtual false, abstract: false, final false
  inline void set_state(::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State value);

  /// @brief Method set_streamSharedData, addr 0x65d9628, size 0x8, virtual false, abstract: false, final false
  inline void set_streamSharedData(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeReferenceVolume_CellStreamingRequest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_CellStreamingRequest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeReferenceVolume_CellStreamingRequest(ProbeReferenceVolume_CellStreamingRequest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume_CellStreamingRequest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeReferenceVolume_CellStreamingRequest(ProbeReferenceVolume_CellStreamingRequest const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12084 };

  /// @brief Field <cell>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeReferenceVolume_Cell* ____cell_k__BackingField;

  /// @brief Field <state>k__BackingField, offset: 0x18, size: 0x4, def value: None
  ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State ____state_k__BackingField;

  /// @brief Field <scratchBuffer>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* ____scratchBuffer_k__BackingField;

  /// @brief Field <scratchBufferLayout>k__BackingField, offset: 0x28, size: 0x70, def value: None
  ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout ____scratchBufferLayout_k__BackingField;

  /// @brief Field <scenarioData>k__BackingField, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeVolumeBakingSet_PerScenarioDataInfo* ____scenarioData_k__BackingField;

  /// @brief Field <poolIndex>k__BackingField, offset: 0xa0, size: 0x4, def value: None
  int32_t ____poolIndex_k__BackingField;

  /// @brief Field <streamSharedData>k__BackingField, offset: 0xa4, size: 0x1, def value: None
  bool ____streamSharedData_k__BackingField;

  /// @brief Field onStreamingComplete, offset: 0xa8, size: 0x8, def value: None
  ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate* ___onStreamingComplete;

  /// @brief Field cellDataStreamingRequest, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* ___cellDataStreamingRequest;

  /// @brief Field cellOptionalDataStreamingRequest, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* ___cellOptionalDataStreamingRequest;

  /// @brief Field cellSharedDataStreamingRequest, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* ___cellSharedDataStreamingRequest;

  /// @brief Field cellProbeOcclusionDataStreamingRequest, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* ___cellProbeOcclusionDataStreamingRequest;

  /// @brief Field brickStreamingRequest, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* ___brickStreamingRequest;

  /// @brief Field supportStreamingRequest, offset: 0xd8, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest* ___supportStreamingRequest;

  /// @brief Field bytesWritten, offset: 0xe0, size: 0x4, def value: None
  int32_t ___bytesWritten;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest, ____cell_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest, ____state_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest, ____scratchBuffer_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest, ____scratchBufferLayout_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest, ____scenarioData_k__BackingField) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest, ____poolIndex_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest, ____streamSharedData_k__BackingField) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest, ___onStreamingComplete) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest, ___cellDataStreamingRequest) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest, ___cellOptionalDataStreamingRequest) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest, ___cellSharedDataStreamingRequest) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest, ___cellProbeOcclusionDataStreamingRequest) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest, ___brickStreamingRequest) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest, ___supportStreamingRequest) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest, ___bytesWritten) == 0xe0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest, 0xe8>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/<>c
class CORDL_TYPE ProbeReferenceVolume___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::ProbeReferenceVolume___c* __9;

  /// @brief Field <>9__148_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__148_0, put = setStaticF___9__148_0)) ::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* __9__148_0;

  /// @brief Field <>9__148_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__148_1, put = setStaticF___9__148_1)) ::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* __9__148_1;

  /// @brief Field <>9__219_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_1, put = setStaticF___9__219_1)) ::System::Func_1<bool>* __9__219_1;

  /// @brief Field <>9__219_18, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_18, put = setStaticF___9__219_18)) ::System::Func_1<float_t>* __9__219_18;

  /// @brief Field <>9__219_19, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_19, put = setStaticF___9__219_19)) ::System::Func_1<float_t>* __9__219_19;

  /// @brief Field <>9__219_25, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_25, put = setStaticF___9__219_25)) ::System::Func_1<int32_t>* __9__219_25;

  /// @brief Field <>9__219_29, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_29, put = setStaticF___9__219_29)) ::System::Func_1<int32_t>* __9__219_29;

  /// @brief Field <>9__219_36, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_36, put = setStaticF___9__219_36)) ::System::Func_1<float_t>* __9__219_36;

  /// @brief Field <>9__219_37, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_37, put = setStaticF___9__219_37)) ::System::Func_1<float_t>* __9__219_37;

  /// @brief Field <>9__219_45, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_45, put = setStaticF___9__219_45)) ::System::Func_1<float_t>* __9__219_45;

  /// @brief Field <>9__219_46, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_46, put = setStaticF___9__219_46)) ::System::Func_1<float_t>* __9__219_46;

  /// @brief Field <>9__219_50, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_50, put = setStaticF___9__219_50)) ::System::Func_1<float_t>* __9__219_50;

  /// @brief Field <>9__219_60, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_60, put = setStaticF___9__219_60)) ::System::Func_1<bool>* __9__219_60;

  /// @brief Field <>9__219_61, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_61, put = setStaticF___9__219_61)) ::System::Action_1<bool>* __9__219_61;

  /// @brief Field <>9__219_62, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_62, put = setStaticF___9__219_62)) ::System::Func_1<bool>* __9__219_62;

  /// @brief Field <>9__219_63, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_63, put = setStaticF___9__219_63)) ::System::Func_1<int32_t>* __9__219_63;

  /// @brief Field <>9__219_64, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_64, put = setStaticF___9__219_64)) ::System::Action_1<int32_t>* __9__219_64;

  /// @brief Field <>9__219_65, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_65, put = setStaticF___9__219_65)) ::System::Func_1<int32_t>* __9__219_65;

  /// @brief Field <>9__219_66, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_66, put = setStaticF___9__219_66)) ::System::Func_1<int32_t>* __9__219_66;

  /// @brief Field <>9__219_70, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_70, put = setStaticF___9__219_70)) ::System::Func_1<::System::Object*>* __9__219_70;

  /// @brief Field <>9__219_76, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_76, put = setStaticF___9__219_76)) ::System::Func_1<int32_t>* __9__219_76;

  /// @brief Field <>9__219_77, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_77, put = setStaticF___9__219_77)) ::System::Action_1<int32_t>* __9__219_77;

  /// @brief Field <>9__219_78, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_78, put = setStaticF___9__219_78)) ::System::Func_1<int32_t>* __9__219_78;

  /// @brief Field <>9__219_79, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_79, put = setStaticF___9__219_79)) ::System::Func_1<float_t>* __9__219_79;

  /// @brief Field <>9__219_8, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_8, put = setStaticF___9__219_8)) ::System::Func_1<float_t>* __9__219_8;

  /// @brief Field <>9__219_80, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_80, put = setStaticF___9__219_80)) ::System::Action_1<float_t>* __9__219_80;

  /// @brief Field <>9__219_81, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_81, put = setStaticF___9__219_81)) ::System::Func_1<float_t>* __9__219_81;

  /// @brief Field <>9__219_82, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_82, put = setStaticF___9__219_82)) ::System::Func_1<float_t>* __9__219_82;

  /// @brief Field <>9__219_87, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_87, put = setStaticF___9__219_87)) ::System::Func_1<float_t>* __9__219_87;

  /// @brief Field <>9__219_88, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_88, put = setStaticF___9__219_88)) ::System::Action_1<float_t>* __9__219_88;

  /// @brief Field <>9__219_89, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_89, put = setStaticF___9__219_89)) ::System::Func_1<float_t>* __9__219_89;

  /// @brief Field <>9__219_90, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__219_90, put = setStaticF___9__219_90)) ::System::Func_1<float_t>* __9__219_90;

  /// @brief Field <>9__222_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__222_0,
                      put = setStaticF___9__222_0)) ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*,
                                                                                                                  ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>* __9__222_0;

  /// @brief Field <>9__283_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__283_0, put = setStaticF___9__283_0)) ::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* __9__283_0;

  static inline ::UnityEngine::Rendering::ProbeReferenceVolume___c* New_ctor();

  /// @brief Method <CleanupStreaming>b__283_0, addr 0x65da6cc, size 0x18, virtual false, abstract: false, final false
  inline void _CleanupStreaming_b__283_0(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* val);

  /// @brief Method <RegisterDebug>b__219_1, addr 0x65d9c94, size 0x8, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__219_1();

  /// @brief Method <RegisterDebug>b__219_18, addr 0x65d9ca4, size 0xc, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__219_18();

  /// @brief Method <RegisterDebug>b__219_19, addr 0x65d9cb0, size 0x8, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__219_19();

  /// @brief Method <RegisterDebug>b__219_25, addr 0x65d9cb8, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RegisterDebug_b__219_25();

  /// @brief Method <RegisterDebug>b__219_29, addr 0x65d9cc0, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RegisterDebug_b__219_29();

  /// @brief Method <RegisterDebug>b__219_36, addr 0x65d9cc8, size 0xc, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__219_36();

  /// @brief Method <RegisterDebug>b__219_37, addr 0x65d9cd4, size 0x8, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__219_37();

  /// @brief Method <RegisterDebug>b__219_45, addr 0x65d9cdc, size 0xc, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__219_45();

  /// @brief Method <RegisterDebug>b__219_46, addr 0x65d9ce8, size 0xc, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__219_46();

  /// @brief Method <RegisterDebug>b__219_50, addr 0x65d9cf4, size 0x8, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__219_50();

  /// @brief Method <RegisterDebug>b__219_60, addr 0x65d9cfc, size 0xa0, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__219_60();

  /// @brief Method <RegisterDebug>b__219_61, addr 0x65d9d9c, size 0xb0, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_61(bool value);

  /// @brief Method <RegisterDebug>b__219_62, addr 0x65d9e4c, size 0xa0, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__219_62();

  /// @brief Method <RegisterDebug>b__219_63, addr 0x65d9eec, size 0xa0, virtual false, abstract: false, final false
  inline int32_t _RegisterDebug_b__219_63();

  /// @brief Method <RegisterDebug>b__219_64, addr 0x65d9f8c, size 0xc0, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_64(int32_t value);

  /// @brief Method <RegisterDebug>b__219_65, addr 0x65da04c, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RegisterDebug_b__219_65();

  /// @brief Method <RegisterDebug>b__219_66, addr 0x65da054, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RegisterDebug_b__219_66();

  /// @brief Method <RegisterDebug>b__219_70, addr 0x65da05c, size 0xd4, virtual false, abstract: false, final false
  inline ::System::Object* _RegisterDebug_b__219_70();

  /// @brief Method <RegisterDebug>b__219_76, addr 0x65da130, size 0xa0, virtual false, abstract: false, final false
  inline int32_t _RegisterDebug_b__219_76();

  /// @brief Method <RegisterDebug>b__219_77, addr 0x65da1d0, size 0xb4, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_77(int32_t value);

  /// @brief Method <RegisterDebug>b__219_78, addr 0x65da284, size 0x8, virtual false, abstract: false, final false
  inline int32_t _RegisterDebug_b__219_78();

  /// @brief Method <RegisterDebug>b__219_79, addr 0x65da28c, size 0xa0, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__219_79();

  /// @brief Method <RegisterDebug>b__219_8, addr 0x65d9c9c, size 0x8, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__219_8();

  /// @brief Method <RegisterDebug>b__219_80, addr 0x65da32c, size 0xc4, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_80(float_t value);

  /// @brief Method <RegisterDebug>b__219_81, addr 0x65da3f0, size 0x8, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__219_81();

  /// @brief Method <RegisterDebug>b__219_82, addr 0x65da3f8, size 0x8, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__219_82();

  /// @brief Method <RegisterDebug>b__219_87, addr 0x65da400, size 0xa0, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__219_87();

  /// @brief Method <RegisterDebug>b__219_88, addr 0x65da4a0, size 0xb0, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_88(float_t value);

  /// @brief Method <RegisterDebug>b__219_89, addr 0x65da550, size 0x8, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__219_89();

  /// @brief Method <RegisterDebug>b__219_90, addr 0x65da558, size 0x8, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__219_90();

  /// @brief Method <RenderFragmentationOverlay>b__222_0, addr 0x65da560, size 0x16c, virtual false, abstract: false, final false
  inline void _RenderFragmentationOverlay_b__222_0(::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData* data,
                                                   ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext ctx);

  /// @brief Method <.ctor>b__148_0, addr 0x65d9c68, size 0x14, virtual false, abstract: false, final false
  inline void __ctor_b__148_0(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* x);

  /// @brief Method <.ctor>b__148_1, addr 0x65d9c7c, size 0x18, virtual false, abstract: false, final false
  inline void __ctor_b__148_1(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* val);

  /// @brief Method .ctor, addr 0x65d9c64, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::ProbeReferenceVolume___c* getStaticF___9();

  static inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* getStaticF___9__148_0();

  static inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* getStaticF___9__148_1();

  static inline ::System::Func_1<bool>* getStaticF___9__219_1();

  static inline ::System::Func_1<float_t>* getStaticF___9__219_18();

  static inline ::System::Func_1<float_t>* getStaticF___9__219_19();

  static inline ::System::Func_1<int32_t>* getStaticF___9__219_25();

  static inline ::System::Func_1<int32_t>* getStaticF___9__219_29();

  static inline ::System::Func_1<float_t>* getStaticF___9__219_36();

  static inline ::System::Func_1<float_t>* getStaticF___9__219_37();

  static inline ::System::Func_1<float_t>* getStaticF___9__219_45();

  static inline ::System::Func_1<float_t>* getStaticF___9__219_46();

  static inline ::System::Func_1<float_t>* getStaticF___9__219_50();

  static inline ::System::Func_1<bool>* getStaticF___9__219_60();

  static inline ::System::Action_1<bool>* getStaticF___9__219_61();

  static inline ::System::Func_1<bool>* getStaticF___9__219_62();

  static inline ::System::Func_1<int32_t>* getStaticF___9__219_63();

  static inline ::System::Action_1<int32_t>* getStaticF___9__219_64();

  static inline ::System::Func_1<int32_t>* getStaticF___9__219_65();

  static inline ::System::Func_1<int32_t>* getStaticF___9__219_66();

  static inline ::System::Func_1<::System::Object*>* getStaticF___9__219_70();

  static inline ::System::Func_1<int32_t>* getStaticF___9__219_76();

  static inline ::System::Action_1<int32_t>* getStaticF___9__219_77();

  static inline ::System::Func_1<int32_t>* getStaticF___9__219_78();

  static inline ::System::Func_1<float_t>* getStaticF___9__219_79();

  static inline ::System::Func_1<float_t>* getStaticF___9__219_8();

  static inline ::System::Action_1<float_t>* getStaticF___9__219_80();

  static inline ::System::Func_1<float_t>* getStaticF___9__219_81();

  static inline ::System::Func_1<float_t>* getStaticF___9__219_82();

  static inline ::System::Func_1<float_t>* getStaticF___9__219_87();

  static inline ::System::Action_1<float_t>* getStaticF___9__219_88();

  static inline ::System::Func_1<float_t>* getStaticF___9__219_89();

  static inline ::System::Func_1<float_t>* getStaticF___9__219_90();

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*,
                                                                              ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>*
  getStaticF___9__222_0();

  static inline ::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* getStaticF___9__283_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::ProbeReferenceVolume___c* value);

  static inline void setStaticF___9__148_0(::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value);

  static inline void setStaticF___9__148_1(::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* value);

  static inline void setStaticF___9__219_1(::System::Func_1<bool>* value);

  static inline void setStaticF___9__219_18(::System::Func_1<float_t>* value);

  static inline void setStaticF___9__219_19(::System::Func_1<float_t>* value);

  static inline void setStaticF___9__219_25(::System::Func_1<int32_t>* value);

  static inline void setStaticF___9__219_29(::System::Func_1<int32_t>* value);

  static inline void setStaticF___9__219_36(::System::Func_1<float_t>* value);

  static inline void setStaticF___9__219_37(::System::Func_1<float_t>* value);

  static inline void setStaticF___9__219_45(::System::Func_1<float_t>* value);

  static inline void setStaticF___9__219_46(::System::Func_1<float_t>* value);

  static inline void setStaticF___9__219_50(::System::Func_1<float_t>* value);

  static inline void setStaticF___9__219_60(::System::Func_1<bool>* value);

  static inline void setStaticF___9__219_61(::System::Action_1<bool>* value);

  static inline void setStaticF___9__219_62(::System::Func_1<bool>* value);

  static inline void setStaticF___9__219_63(::System::Func_1<int32_t>* value);

  static inline void setStaticF___9__219_64(::System::Action_1<int32_t>* value);

  static inline void setStaticF___9__219_65(::System::Func_1<int32_t>* value);

  static inline void setStaticF___9__219_66(::System::Func_1<int32_t>* value);

  static inline void setStaticF___9__219_70(::System::Func_1<::System::Object*>* value);

  static inline void setStaticF___9__219_76(::System::Func_1<int32_t>* value);

  static inline void setStaticF___9__219_77(::System::Action_1<int32_t>* value);

  static inline void setStaticF___9__219_78(::System::Func_1<int32_t>* value);

  static inline void setStaticF___9__219_79(::System::Func_1<float_t>* value);

  static inline void setStaticF___9__219_8(::System::Func_1<float_t>* value);

  static inline void setStaticF___9__219_80(::System::Action_1<float_t>* value);

  static inline void setStaticF___9__219_81(::System::Func_1<float_t>* value);

  static inline void setStaticF___9__219_82(::System::Func_1<float_t>* value);

  static inline void setStaticF___9__219_87(::System::Func_1<float_t>* value);

  static inline void setStaticF___9__219_88(::System::Action_1<float_t>* value);

  static inline void setStaticF___9__219_89(::System::Func_1<float_t>* value);

  static inline void setStaticF___9__219_90(::System::Func_1<float_t>* value);

  static inline void setStaticF___9__222_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*,
                                                                                                         ::UnityEngine::Rendering::RenderGraphModule::RenderGraphContext>* value);

  static inline void setStaticF___9__283_0(::UnityEngine::Events::UnityAction_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeReferenceVolume___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeReferenceVolume___c(ProbeReferenceVolume___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeReferenceVolume___c(ProbeReferenceVolume___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12085 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeReferenceVolume___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume/<>c__DisplayClass314_0
class CORDL_TYPE ProbeReferenceVolume___c__DisplayClass314_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field cell, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cell, put = __cordl_internal_set_cell)) ::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell;

  static inline ::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0* New_ctor();

  /// @brief Method <HasActiveStreamingRequest>b__0, addr 0x65da6e8, size 0x20, virtual false, abstract: false, final false
  inline bool _HasActiveStreamingRequest_b__0(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* x);

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_Cell* const& __cordl_internal_get_cell() const;

  constexpr ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*& __cordl_internal_get_cell();

  constexpr void __cordl_internal_set_cell(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* value);

  /// @brief Method .ctor, addr 0x65da6e4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeReferenceVolume___c__DisplayClass314_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume___c__DisplayClass314_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeReferenceVolume___c__DisplayClass314_0(ProbeReferenceVolume___c__DisplayClass314_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume___c__DisplayClass314_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeReferenceVolume___c__DisplayClass314_0(ProbeReferenceVolume___c__DisplayClass314_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12086 };

  /// @brief Field cell, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeReferenceVolume_Cell* ___cell;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0, ___cell) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0, 0x18>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object, UnityEngine.Bounds, UnityEngine.Rendering.ProbeBrickPool::DataLocation, UnityEngine.Rendering.ProbeVolumeBlendingTextureMemoryBudget,
// UnityEngine.Rendering.ProbeVolumeSHBands, UnityEngine.Rendering.ProbeVolumeTextureMemoryBudget, UnityEngine.Vector3, UnityEngine.Vector3Int
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ProbeReferenceVolume
class CORDL_TYPE ProbeReferenceVolume : public ::System::Object {
public:
  // Declarations
  using Cell = ::UnityEngine::Rendering::ProbeReferenceVolume_Cell;

  using CellBlendingInfo = ::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo;

  using CellData = ::UnityEngine::Rendering::ProbeReferenceVolume_CellData;

  using CellDesc = ::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc;

  using CellIndexInfo = ::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo;

  using CellInstancedDebugProbes = ::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes;

  using CellPoolInfo = ::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo;

  using CellStreamingInfo = ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo;

  using CellStreamingRequest = ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest;

  using CellStreamingScratchBuffer = ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer;

  using CellStreamingScratchBufferLayout = ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout;

  using DiskStreamingRequest = ::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest;

  using ExtraDataActionInput = ::UnityEngine::Rendering::ProbeReferenceVolume_ExtraDataActionInput;

  using IndirectionEntryInfo = ::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo;

  using RefVolTransform = ::UnityEngine::Rendering::ProbeReferenceVolume_RefVolTransform;

  using RenderFragmentationOverlayPassData = ::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData;

  using RuntimeResources = ::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources;

  using ShaderIDs = ::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs;

  using Volume = ::UnityEngine::Rendering::ProbeReferenceVolume_Volume;

  using __c = ::UnityEngine::Rendering::ProbeReferenceVolume___c;

  using __c__DisplayClass314_0 = ::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0;

  /// @brief Field _instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__instance, put = setStaticF__instance)) ::UnityEngine::Rendering::ProbeReferenceVolume* _instance;

  /// @brief Field <perSceneDataList>k__BackingField, offset 0x170, size 0x8
  __declspec(property(get = __cordl_internal_get__perSceneDataList_k__BackingField,
                      put = __cordl_internal_set__perSceneDataList_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>*
      _perSceneDataList_k__BackingField;

  /// @brief Field <probeVolumeDebug>k__BackingField, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get__probeVolumeDebug_k__BackingField,
                      put = __cordl_internal_set__probeVolumeDebug_k__BackingField)) ::UnityEngine::Rendering::ProbeVolumeDebug* _probeVolumeDebug_k__BackingField;

  /// @brief Field <subdivisionDebugColors>k__BackingField, offset 0x180, size 0x8
  __declspec(property(get = __cordl_internal_get__subdivisionDebugColors_k__BackingField,
                      put = __cordl_internal_set__subdivisionDebugColors_k__BackingField)) ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>
      _subdivisionDebugColors_k__BackingField;

  /// @brief Field cells, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_cells,
                      put = __cordl_internal_set_cells)) ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* cells;

  /// @brief Field checksDuringBakeAction, offset 0x128, size 0x8
  __declspec(property(get = __cordl_internal_get_checksDuringBakeAction, put = __cordl_internal_set_checksDuringBakeAction)) ::System::Action* checksDuringBakeAction;

  /// @brief Field clearAssetsOnVolumeClear, offset 0x168, size 0x1
  __declspec(property(get = __cordl_internal_get_clearAssetsOnVolumeClear, put = __cordl_internal_set_clearAssetsOnVolumeClear)) bool clearAssetsOnVolumeClear;

  __declspec(property(get = get_currentBakingSet)) ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> currentBakingSet;

  __declspec(property(get = get_debugMesh)) ::UnityW<::UnityEngine::Mesh> debugMesh;

  /// @brief Field defaultLightingScenario, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_defaultLightingScenario, put = setStaticF_defaultLightingScenario)) ::StringW defaultLightingScenario;

  __declspec(property(get = get_diskStreamingEnabled)) bool diskStreamingEnabled;

  __declspec(property(get = get_enabledBySRP)) bool enabledBySRP;

  __declspec(property(get = get_globalBounds, put = set_globalBounds)) ::UnityEngine::Bounds globalBounds;

  __declspec(property(get = get_gpuStreamingEnabled)) bool gpuStreamingEnabled;

  __declspec(property(get = get_hasUnloadedCells)) bool hasUnloadedCells;

  __declspec(property(get = get_indexFragmentationRate)) float_t indexFragmentationRate;

  __declspec(property(get = get_isInitialized)) bool isInitialized;

  /// @brief Field k_DebugPanelName, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_k_DebugPanelName, put = setStaticF_k_DebugPanelName)) ::StringW k_DebugPanelName;

  __declspec(property(get = get_lightingScenario, put = set_lightingScenario)) ::StringW lightingScenario;

  __declspec(property(get = get_loadMaxCellsPerFrame, put = set_loadMaxCellsPerFrame)) bool loadMaxCellsPerFrame;

  /// @brief Field m_ActiveScenes, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ActiveScenes, put = __cordl_internal_set_m_ActiveScenes)) ::System::Collections::Generic::List_1<::StringW>* m_ActiveScenes;

  /// @brief Field m_ActiveStreamingRequests, offset 0x2c0, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ActiveStreamingRequests,
      put = __cordl_internal_set_m_ActiveStreamingRequests)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* m_ActiveStreamingRequests;

  /// @brief Field m_BestToBeLoadedCells, offset 0x238, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BestToBeLoadedCells,
                      put = __cordl_internal_set_m_BestToBeLoadedCells)) ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* m_BestToBeLoadedCells;

  /// @brief Field m_BlendingMemoryBudget, offset 0x160, size 0x4
  __declspec(property(get = __cordl_internal_get_m_BlendingMemoryBudget,
                      put = __cordl_internal_set_m_BlendingMemoryBudget)) ::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget m_BlendingMemoryBudget;

  /// @brief Field m_BlendingPool, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BlendingPool, put = __cordl_internal_set_m_BlendingPool)) ::UnityEngine::Rendering::ProbeBrickBlendingPool* m_BlendingPool;

  /// @brief Field m_CBShaderID, offset 0x158, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CBShaderID, put = __cordl_internal_set_m_CBShaderID)) int32_t m_CBShaderID;

  /// @brief Field m_CellIndices, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CellIndices, put = __cordl_internal_set_m_CellIndices)) ::UnityEngine::Rendering::ProbeGlobalIndirection* m_CellIndices;

  /// @brief Field m_CellPool, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CellPool,
                      put = __cordl_internal_set_m_CellPool)) ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* m_CellPool;

  /// @brief Field m_CurrGlobalBounds, offset 0x68, size 0x18
  __declspec(property(get = __cordl_internal_get_m_CurrGlobalBounds, put = __cordl_internal_set_m_CurrGlobalBounds)) ::UnityEngine::Bounds m_CurrGlobalBounds;

  /// @brief Field m_CurrentBakingSet, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CurrentBakingSet, put = __cordl_internal_set_m_CurrentBakingSet)) ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> m_CurrentBakingSet;

  /// @brief Field m_DebugActiveScenario, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugActiveScenario, put = __cordl_internal_set_m_DebugActiveScenario)) ::StringW m_DebugActiveScenario;

  /// @brief Field m_DebugActiveSceneGUID, offset 0x1f0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugActiveSceneGUID, put = __cordl_internal_set_m_DebugActiveSceneGUID)) ::StringW m_DebugActiveSceneGUID;

  /// @brief Field m_DebugFragmentationMaterial, offset 0x1d0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugFragmentationMaterial, put = __cordl_internal_set_m_DebugFragmentationMaterial)) ::UnityW<::UnityEngine::Material> m_DebugFragmentationMaterial;

  /// @brief Field m_DebugFrustumPlanes, offset 0x1d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugFrustumPlanes, put = __cordl_internal_set_m_DebugFrustumPlanes)) ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>
      m_DebugFrustumPlanes;

  /// @brief Field m_DebugItems, offset 0x190, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugItems,
                      put = __cordl_internal_set_m_DebugItems)) ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*, ::Array<::UnityEngine::Rendering::DebugUI_Widget*>*>
      m_DebugItems;

  /// @brief Field m_DebugMaterial, offset 0x198, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugMaterial, put = __cordl_internal_set_m_DebugMaterial)) ::UnityW<::UnityEngine::Material> m_DebugMaterial;

  /// @brief Field m_DebugMesh, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugMesh, put = __cordl_internal_set_m_DebugMesh)) ::UnityW<::UnityEngine::Mesh> m_DebugMesh;

  /// @brief Field m_DebugOffsetMaterial, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugOffsetMaterial, put = __cordl_internal_set_m_DebugOffsetMaterial)) ::UnityW<::UnityEngine::Material> m_DebugOffsetMaterial;

  /// @brief Field m_DebugOffsetMesh, offset 0x1c0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugOffsetMesh, put = __cordl_internal_set_m_DebugOffsetMesh)) ::UnityW<::UnityEngine::Mesh> m_DebugOffsetMesh;

  /// @brief Field m_DebugProbeSamplingMesh, offset 0x1a0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugProbeSamplingMesh, put = __cordl_internal_set_m_DebugProbeSamplingMesh)) ::UnityW<::UnityEngine::Mesh> m_DebugProbeSamplingMesh;

  /// @brief Field m_DebugScenarioField, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugScenarioField, put = __cordl_internal_set_m_DebugScenarioField)) ::UnityEngine::Rendering::DebugUI_EnumField* m_DebugScenarioField;

  /// @brief Field m_DebugScenarioNames, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugScenarioNames, put = __cordl_internal_set_m_DebugScenarioNames)) ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*>
      m_DebugScenarioNames;

  /// @brief Field m_DebugScenarioValues, offset 0x1e8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DebugScenarioValues, put = __cordl_internal_set_m_DebugScenarioValues)) ::ArrayW<int32_t, ::Array<int32_t>*> m_DebugScenarioValues;

  /// @brief Field m_DefragCellIndices, offset 0x298, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefragCellIndices, put = __cordl_internal_set_m_DefragCellIndices)) ::UnityEngine::Rendering::ProbeGlobalIndirection* m_DefragCellIndices;

  /// @brief Field m_DefragIndex, offset 0x290, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DefragIndex, put = __cordl_internal_set_m_DefragIndex)) ::UnityEngine::Rendering::ProbeBrickIndex* m_DefragIndex;

  /// @brief Field m_DiskStreamingUseCompute, offset 0x2d0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_DiskStreamingUseCompute, put = __cordl_internal_set_m_DiskStreamingUseCompute)) bool m_DiskStreamingUseCompute;

  /// @brief Field m_DisplayNumbersTexture, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DisplayNumbersTexture, put = __cordl_internal_set_m_DisplayNumbersTexture)) ::UnityW<::UnityEngine::Texture> m_DisplayNumbersTexture;

  /// @brief Field m_EmptyIndexBuffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_EmptyIndexBuffer, put = __cordl_internal_set_m_EmptyIndexBuffer)) ::UnityEngine::ComputeBuffer* m_EmptyIndexBuffer;

  /// @brief Field m_EnabledBySRP, offset 0x152, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnabledBySRP, put = __cordl_internal_set_m_EnabledBySRP)) bool m_EnabledBySRP;

  /// @brief Field m_ForceNoDiskStreaming, offset 0x1b, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ForceNoDiskStreaming, put = __cordl_internal_set_m_ForceNoDiskStreaming)) bool m_ForceNoDiskStreaming;

  /// @brief Field m_FrozenCameraDirection, offset 0x27c, size 0xc
  __declspec(property(get = __cordl_internal_get_m_FrozenCameraDirection, put = __cordl_internal_set_m_FrozenCameraDirection)) ::UnityEngine::Vector3 m_FrozenCameraDirection;

  /// @brief Field m_FrozenCameraPosition, offset 0x270, size 0xc
  __declspec(property(get = __cordl_internal_get_m_FrozenCameraPosition, put = __cordl_internal_set_m_FrozenCameraPosition)) ::UnityEngine::Vector3 m_FrozenCameraPosition;

  /// @brief Field m_HasChangedIndex, offset 0x155, size 0x1
  __declspec(property(get = __cordl_internal_get_m_HasChangedIndex, put = __cordl_internal_set_m_HasChangedIndex)) bool m_HasChangedIndex;

  /// @brief Field m_Index, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Index, put = __cordl_internal_set_m_Index)) ::UnityEngine::Rendering::ProbeBrickIndex* m_Index;

  /// @brief Field m_IndexDefragCells, offset 0x2a0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IndexDefragCells,
                      put = __cordl_internal_set_m_IndexDefragCells)) ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* m_IndexDefragCells;

  /// @brief Field m_IndexDefragmentationInProgress, offset 0x288, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IndexDefragmentationInProgress, put = __cordl_internal_set_m_IndexDefragmentationInProgress)) bool m_IndexDefragmentationInProgress;

  /// @brief Field m_IsInitialized, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsInitialized, put = __cordl_internal_set_m_IsInitialized)) bool m_IsInitialized;

  /// @brief Field m_LoadMaxCellsPerFrame, offset 0x211, size 0x1
  __declspec(property(get = __cordl_internal_get_m_LoadMaxCellsPerFrame, put = __cordl_internal_set_m_LoadMaxCellsPerFrame)) bool m_LoadMaxCellsPerFrame;

  /// @brief Field m_LoadedBlendingCells, offset 0x250, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LoadedBlendingCells,
                      put = __cordl_internal_set_m_LoadedBlendingCells)) ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* m_LoadedBlendingCells;

  /// @brief Field m_LoadedCells, offset 0x220, size 0x8
  __declspec(property(get = __cordl_internal_get_m_LoadedCells,
                      put = __cordl_internal_set_m_LoadedCells)) ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* m_LoadedCells;

  /// @brief Field m_MaxSubdivVisualizedIsMaxAvailable, offset 0x210, size 0x1
  __declspec(property(get = __cordl_internal_get_m_MaxSubdivVisualizedIsMaxAvailable, put = __cordl_internal_set_m_MaxSubdivVisualizedIsMaxAvailable)) bool m_MaxSubdivVisualizedIsMaxAvailable;

  /// @brief Field m_MaxSubdivision, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxSubdivision, put = __cordl_internal_set_m_MaxSubdivision)) int32_t m_MaxSubdivision;

  /// @brief Field m_MemoryBudget, offset 0x15c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MemoryBudget, put = __cordl_internal_set_m_MemoryBudget)) ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget m_MemoryBudget;

  /// @brief Field m_MinBrickSize, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MinBrickSize, put = __cordl_internal_set_m_MinBrickSize)) float_t m_MinBrickSize;

  /// @brief Field m_NeedLoadAsset, offset 0x150, size 0x1
  __declspec(property(get = __cordl_internal_get_m_NeedLoadAsset, put = __cordl_internal_set_m_NeedLoadAsset)) bool m_NeedLoadAsset;

  /// @brief Field m_NeedsIndexRebuild, offset 0x154, size 0x1
  __declspec(property(get = __cordl_internal_get_m_NeedsIndexRebuild, put = __cordl_internal_set_m_NeedsIndexRebuild)) bool m_NeedsIndexRebuild;

  /// @brief Field m_NumberOfCellsBlendedPerFrame, offset 0x218, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NumberOfCellsBlendedPerFrame, put = __cordl_internal_set_m_NumberOfCellsBlendedPerFrame)) int32_t m_NumberOfCellsBlendedPerFrame;

  /// @brief Field m_NumberOfCellsLoadedPerFrame, offset 0x214, size 0x4
  __declspec(property(get = __cordl_internal_get_m_NumberOfCellsLoadedPerFrame, put = __cordl_internal_set_m_NumberOfCellsLoadedPerFrame)) int32_t m_NumberOfCellsLoadedPerFrame;

  /// @brief Field m_OnBlendingStreamingComplete, offset 0x2e8, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_OnBlendingStreamingComplete,
      put = __cordl_internal_set_m_OnBlendingStreamingComplete)) ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate* m_OnBlendingStreamingComplete;

  /// @brief Field m_OnStreamingComplete, offset 0x2e0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OnStreamingComplete,
                      put = __cordl_internal_set_m_OnStreamingComplete)) ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate* m_OnStreamingComplete;

  /// @brief Field m_PendingScenesToBeLoaded, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PendingScenesToBeLoaded, put = __cordl_internal_set_m_PendingScenesToBeLoaded)) ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::System::ValueTuple_2<::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet>, ::System::Collections::Generic::List_1<int32_t>*>>* m_PendingScenesToBeLoaded;

  /// @brief Field m_PendingScenesToBeUnloaded, offset 0x138, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_PendingScenesToBeUnloaded,
      put = __cordl_internal_set_m_PendingScenesToBeUnloaded)) ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* m_PendingScenesToBeUnloaded;

  /// @brief Field m_Pool, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Pool, put = __cordl_internal_set_m_Pool)) ::UnityEngine::Rendering::ProbeBrickPool* m_Pool;

  /// @brief Field m_PositionOffsets, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PositionOffsets, put = __cordl_internal_set_m_PositionOffsets)) ::ArrayW<float_t, ::Array<float_t>*> m_PositionOffsets;

  /// @brief Field m_ProbeOffset, offset 0x28, size 0xc
  __declspec(property(get = __cordl_internal_get_m_ProbeOffset, put = __cordl_internal_set_m_ProbeOffset)) ::UnityEngine::Vector3 m_ProbeOffset;

  /// @brief Field m_ProbeReferenceVolumeInit, offset 0x151, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ProbeReferenceVolumeInit, put = __cordl_internal_set_m_ProbeReferenceVolumeInit)) bool m_ProbeReferenceVolumeInit;

  /// @brief Field m_ProbeSamplingDebugMaterial, offset 0x1a8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProbeSamplingDebugMaterial, put = __cordl_internal_set_m_ProbeSamplingDebugMaterial)) ::UnityW<::UnityEngine::Material> m_ProbeSamplingDebugMaterial;

  /// @brief Field m_ProbeSamplingDebugMaterial02, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProbeSamplingDebugMaterial02, put = __cordl_internal_set_m_ProbeSamplingDebugMaterial02)) ::UnityW<::UnityEngine::Material>
      m_ProbeSamplingDebugMaterial02;

  /// @brief Field m_SHBands, offset 0x164, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SHBands, put = __cordl_internal_set_m_SHBands)) ::UnityEngine::Rendering::ProbeVolumeSHBands m_SHBands;

  /// @brief Field m_ScratchBufferPool, offset 0x2d8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ScratchBufferPool, put = __cordl_internal_set_m_ScratchBufferPool)) ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool* m_ScratchBufferPool;

  /// @brief Field m_StreamingQueue, offset 0x2b8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_StreamingQueue,
                      put = __cordl_internal_set_m_StreamingQueue)) ::System::Collections::Generic::Queue_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* m_StreamingQueue;

  /// @brief Field m_StreamingRequestsPool, offset 0x2c8, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_StreamingRequestsPool,
      put = __cordl_internal_set_m_StreamingRequestsPool)) ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* m_StreamingRequestsPool;

  /// @brief Field m_SupportDiskStreaming, offset 0x1c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportDiskStreaming, put = __cordl_internal_set_m_SupportDiskStreaming)) bool m_SupportDiskStreaming;

  /// @brief Field m_SupportGPUStreaming, offset 0x1d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportGPUStreaming, put = __cordl_internal_set_m_SupportGPUStreaming)) bool m_SupportGPUStreaming;

  /// @brief Field m_SupportScenarioBlending, offset 0x1a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportScenarioBlending, put = __cordl_internal_set_m_SupportScenarioBlending)) bool m_SupportScenarioBlending;

  /// @brief Field m_SupportScenarios, offset 0x19, size 0x1
  __declspec(property(get = __cordl_internal_get_m_SupportScenarios, put = __cordl_internal_set_m_SupportScenarios)) bool m_SupportScenarios;

  /// @brief Field m_TempBlendingCellToLoadList, offset 0x260, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_TempBlendingCellToLoadList,
      put = __cordl_internal_set_m_TempBlendingCellToLoadList)) ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* m_TempBlendingCellToLoadList;

  /// @brief Field m_TempBlendingCellToUnloadList, offset 0x268, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_TempBlendingCellToUnloadList,
      put = __cordl_internal_set_m_TempBlendingCellToUnloadList)) ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* m_TempBlendingCellToUnloadList;

  /// @brief Field m_TempCellToLoadList, offset 0x240, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TempCellToLoadList,
                      put = __cordl_internal_set_m_TempCellToLoadList)) ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* m_TempCellToLoadList;

  /// @brief Field m_TempCellToUnloadList, offset 0x248, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TempCellToUnloadList,
                      put = __cordl_internal_set_m_TempCellToUnloadList)) ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* m_TempCellToUnloadList;

  /// @brief Field m_TempIndexDefragCells, offset 0x2a8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TempIndexDefragCells,
                      put = __cordl_internal_set_m_TempIndexDefragCells)) ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* m_TempIndexDefragCells;

  /// @brief Field m_TemporaryDataLocation, offset 0x90, size 0x68
  __declspec(property(get = __cordl_internal_get_m_TemporaryDataLocation,
                      put = __cordl_internal_set_m_TemporaryDataLocation)) ::UnityEngine::Rendering::ProbeBrickPool_DataLocation m_TemporaryDataLocation;

  /// @brief Field m_TemporaryDataLocationMemCost, offset 0xf8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TemporaryDataLocationMemCost, put = __cordl_internal_set_m_TemporaryDataLocationMemCost)) int32_t m_TemporaryDataLocationMemCost;

  /// @brief Field m_TmpSrcChunks, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TmpSrcChunks,
                      put = __cordl_internal_set_m_TmpSrcChunks)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* m_TmpSrcChunks;

  /// @brief Field m_ToBeLoadedBlendingCells, offset 0x258, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ToBeLoadedBlendingCells,
                      put = __cordl_internal_set_m_ToBeLoadedBlendingCells)) ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* m_ToBeLoadedBlendingCells;

  /// @brief Field m_ToBeLoadedCells, offset 0x228, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ToBeLoadedCells,
                      put = __cordl_internal_set_m_ToBeLoadedCells)) ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* m_ToBeLoadedCells;

  /// @brief Field m_TurnoverRate, offset 0x21c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_TurnoverRate, put = __cordl_internal_set_m_TurnoverRate)) float_t m_TurnoverRate;

  /// @brief Field m_UseStreamingAssets, offset 0x1e, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseStreamingAssets, put = __cordl_internal_set_m_UseStreamingAssets)) bool m_UseStreamingAssets;

  /// @brief Field m_VertexSampling, offset 0x153, size 0x1
  __declspec(property(get = __cordl_internal_get_m_VertexSampling, put = __cordl_internal_set_m_VertexSampling)) bool m_VertexSampling;

  /// @brief Field m_WorseLoadedCells, offset 0x230, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WorseLoadedCells,
                      put = __cordl_internal_set_m_WorseLoadedCells)) ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* m_WorseLoadedCells;

  /// @brief Field maxLoadedCellPos, offset 0x114, size 0xc
  __declspec(property(get = __cordl_internal_get_maxLoadedCellPos, put = __cordl_internal_set_maxLoadedCellPos)) ::UnityEngine::Vector3Int maxLoadedCellPos;

  /// @brief Field maxStreamingScore, offset 0x2b4, size 0x4
  __declspec(property(get = __cordl_internal_get_maxStreamingScore, put = __cordl_internal_set_maxStreamingScore)) float_t maxStreamingScore;

  __declspec(property(get = get_memoryBudget)) ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget memoryBudget;

  /// @brief Field minLoadedCellPos, offset 0x108, size 0xc
  __declspec(property(get = __cordl_internal_get_minLoadedCellPos, put = __cordl_internal_set_minLoadedCellPos)) ::UnityEngine::Vector3Int minLoadedCellPos;

  /// @brief Field minStreamingScore, offset 0x2b0, size 0x4
  __declspec(property(get = __cordl_internal_get_minStreamingScore, put = __cordl_internal_set_minStreamingScore)) float_t minStreamingScore;

  __declspec(property(get = get_numberOfCellsBlendedPerFrame, put = set_numberOfCellsBlendedPerFrame)) int32_t numberOfCellsBlendedPerFrame;

  __declspec(property(get = get_numberOfCellsLoadedPerFrame)) int32_t numberOfCellsLoadedPerFrame;

  __declspec(property(get = get_otherScenario)) ::StringW otherScenario;

  __declspec(property(get = get_perSceneDataList, put = set_perSceneDataList)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>* perSceneDataList;

  __declspec(property(get = get_probeOcclusion)) bool probeOcclusion;

  /// @brief Field probeSamplingDebugData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_probeSamplingDebugData, put = setStaticF_probeSamplingDebugData)) ::UnityEngine::Rendering::ProbeSamplingDebugData* probeSamplingDebugData;

  __declspec(property(get = get_probeVolumeDebug)) ::UnityEngine::Rendering::ProbeVolumeDebug* probeVolumeDebug;

  /// @brief Field realtimeSubdivisionInfo, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get_realtimeSubdivisionInfo, put = __cordl_internal_set_realtimeSubdivisionInfo)) ::System::Collections::Generic::Dictionary_2<
      ::UnityEngine::Bounds, ::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_Brick, ::Array<::UnityEngine::Rendering::ProbeBrickIndex_Brick>*>>* realtimeSubdivisionInfo;

  /// @brief Field retrieveExtraDataAction, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_retrieveExtraDataAction,
                      put = __cordl_internal_set_retrieveExtraDataAction)) ::System::Action_1<::UnityEngine::Rendering::ProbeReferenceVolume_ExtraDataActionInput>* retrieveExtraDataAction;

  /// @brief Field s_BlendingComparer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_BlendingComparer,
                      put = setStaticF_s_BlendingComparer)) ::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* s_BlendingComparer;

  /// @brief Field s_BoundsArray, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_BoundsArray, put = setStaticF_s_BoundsArray)) ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> s_BoundsArray;

  /// @brief Field s_DefragComparer, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefragComparer,
                      put = setStaticF_s_DefragComparer)) ::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* s_DefragComparer;

  __declspec(property(get = get_scenarioBlendingFactor, put = set_scenarioBlendingFactor)) float_t scenarioBlendingFactor;

  /// @brief Field sceneData, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_sceneData, put = __cordl_internal_set_sceneData)) ::UnityEngine::Rendering::ProbeVolumeSceneData* sceneData;

  __declspec(property(get = get_shBands)) ::UnityEngine::Rendering::ProbeVolumeSHBands shBands;

  __declspec(property(get = get_skyOcclusion)) bool skyOcclusion;

  __declspec(property(get = get_skyOcclusionShadingDirection)) bool skyOcclusionShadingDirection;

  __declspec(property(get = get_subdivisionDebugColors)) ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> subdivisionDebugColors;

  __declspec(property(get = get_supportLightingScenarios)) bool supportLightingScenarios;

  __declspec(property(get = get_supportScenarioBlending)) bool supportScenarioBlending;

  __declspec(property(get = get_turnoverRate, put = set_turnoverRate)) float_t turnoverRate;

  __declspec(property(get = get_useRenderingLayers)) bool useRenderingLayers;

  __declspec(property(get = get_vertexSampling)) bool vertexSampling;

  /// @brief Method AddBlendingBricks, addr 0x65c74f0, size 0x56c, virtual false, abstract: false, final false
  inline bool AddBlendingBricks(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell);

  /// @brief Method AddBricks, addr 0x65c0c80, size 0x28c, virtual false, abstract: false, final false
  inline bool AddBricks(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell);

  /// @brief Method AddCell, addr 0x65bffc0, size 0x204, virtual false, abstract: false, final false
  inline void AddCell(int32_t cellIndex);

  /// @brief Method AddPendingSceneLoading, addr 0x65c13ac, size 0x438, virtual false, abstract: false, final false
  inline void AddPendingSceneLoading(::StringW sceneGUID, ::UnityEngine::Rendering::ProbeVolumeBakingSet* bakingSet);

  /// @brief Method AddPendingSceneRemoval, addr 0x65c17e4, size 0x178, virtual false, abstract: false, final false
  inline void AddPendingSceneRemoval(::StringW sceneGUID);

  /// @brief Method AllocateScratchBufferPoolIfNeeded, addr 0x65cf24c, size 0x100, virtual false, abstract: false, final false
  inline void AllocateScratchBufferPoolIfNeeded();

  /// @brief Method BindAPVRuntimeResources, addr 0x65bc2ac, size 0xc3c, virtual false, abstract: false, final false
  inline void BindAPVRuntimeResources(::UnityEngine::Rendering::CommandBuffer* cmdBuffer, bool isProbeVolumeEnabled);

  /// @brief Method BlendLightingScenario, addr 0x65bdb90, size 0xb0, virtual false, abstract: false, final false
  inline void BlendLightingScenario(::StringW otherScenario, float_t blendingFactor);

  /// @brief Method BlendingComparer, addr 0x65ce3e4, size 0x50, virtual false, abstract: false, final false
  static inline int32_t BlendingComparer(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* a, ::UnityEngine::Rendering::ProbeReferenceVolume_Cell* b);

  /// @brief Method BrickSize, addr 0x65c651c, size 0x98, virtual false, abstract: false, final false
  inline float_t BrickSize(int32_t subdivisionLevel);

  /// @brief Method CancelBlendingStreamingRequest, addr 0x65bfd9c, size 0x4c, virtual false, abstract: false, final false
  inline void CancelBlendingStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell);

  /// @brief Method CancelStreamingRequest, addr 0x65bfba4, size 0x74, virtual false, abstract: false, final false
  inline void CancelStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell);

  /// @brief Method CellSize, addr 0x65c0b84, size 0x30, virtual false, abstract: false, final false
  static inline int32_t CellSize(int32_t subdivisionLevel);

  /// @brief Method Cleanup, addr 0x65bf318, size 0x118, virtual false, abstract: false, final false
  inline void Cleanup();

  /// @brief Method CleanupDebug, addr 0x65bf434, size 0x10c, virtual false, abstract: false, final false
  inline void CleanupDebug();

  /// @brief Method CleanupLoadedData, addr 0x65bf430, size 0x4, virtual false, abstract: false, final false
  inline void CleanupLoadedData();

  /// @brief Method CleanupStreaming, addr 0x65bf540, size 0x230, virtual false, abstract: false, final false
  inline void CleanupStreaming();

  /// @brief Method Clear, addr 0x65c66b4, size 0x138, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ClearDebugData, addr 0x65bfd48, size 0x54, virtual false, abstract: false, final false
  inline void ClearDebugData();

  /// @brief Method ComputeBestToBeLoadedCells, addr 0x65cbd78, size 0x36c, virtual false, abstract: false, final false
  inline void ComputeBestToBeLoadedCells(::UnityEngine::Vector3 cameraPosition, ::UnityEngine::Vector3 cameraDirection);

  /// @brief Method ComputeBlendingScore, addr 0x65cc48c, size 0xf0, virtual false, abstract: false, final false
  inline void ComputeBlendingScore(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* cells, float_t worstScore);

  /// @brief Method ComputeCellGlobalInfo, addr 0x65c11d0, size 0x1dc, virtual false, abstract: false, final false
  inline void ComputeCellGlobalInfo();

  /// @brief Method ComputeCellStreamingScore, addr 0x65cba44, size 0x218, virtual false, abstract: false, final false
  static inline void ComputeCellStreamingScore(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell, ::UnityEngine::Vector3 cameraPosition, ::UnityEngine::Vector3 cameraDirection);

  /// @brief Method ComputeEntryMinMax, addr 0x65c081c, size 0x350, virtual false, abstract: false, final false
  inline void ComputeEntryMinMax(::ByRef<::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo> entryInfo,
                                 ::System::ReadOnlySpan_1<::UnityEngine::Rendering::ProbeBrickIndex_Brick> bricks);

  /// @brief Method ComputeMinMaxStreamingScore, addr 0x65cc7d4, size 0x164, virtual false, abstract: false, final false
  inline void ComputeMinMaxStreamingScore();

  /// @brief Method ComputeStreamingScore, addr 0x65cbc5c, size 0x11c, virtual false, abstract: false, final false
  inline void ComputeStreamingScore(::UnityEngine::Vector3 cameraPosition, ::UnityEngine::Vector3 cameraDirection,
                                    ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* cells);

  /// @brief Method ComputeStreamingScoreAndWorseLoadedCells, addr 0x65cc0e4, size 0x3a8, virtual false, abstract: false, final false
  inline void ComputeStreamingScoreAndWorseLoadedCells(::UnityEngine::Vector3 cameraPosition, ::UnityEngine::Vector3 cameraDirection);

  /// @brief Method CreateInstancedProbes, addr 0x65ca5bc, size 0xde8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes* CreateInstancedProbes(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell);

  /// @brief Method DataHasBeenLoaded, addr 0x65bd290, size 0x58, virtual false, abstract: false, final false
  inline bool DataHasBeenLoaded();

  /// @brief Method DebugCellIndexChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void DebugCellIndexChanged(::UnityEngine::Rendering::DebugUI_Field_1<T>* field, T value);

  /// @brief Method DefragComparer, addr 0x65ce434, size 0x98, virtual false, abstract: false, final false
  static inline int32_t DefragComparer(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* a, ::UnityEngine::Rendering::ProbeReferenceVolume_Cell* b);

  /// @brief Method DeinitProbeReferenceVolume, addr 0x65bf100, size 0x210, virtual false, abstract: false, final false
  inline void DeinitProbeReferenceVolume();

  /// @brief Method DrawProbeDebug, addr 0x65c83e8, size 0x118c, virtual false, abstract: false, final false
  inline void DrawProbeDebug(::UnityEngine::Camera* camera, ::UnityEngine::Texture* exposureTexture);

  /// @brief Method EnableMaxCellStreaming, addr 0x65cb4d4, size 0x8, virtual false, abstract: false, final false
  inline void EnableMaxCellStreaming(bool value);

  /// @brief Method FindWorstBlendingCellToBeLoaded, addr 0x65ce2e4, size 0x100, virtual false, abstract: false, final false
  inline int32_t FindWorstBlendingCellToBeLoaded();

  /// @brief Method ForceNoDiskStreaming, addr 0x65bf310, size 0x8, virtual false, abstract: false, final false
  inline void ForceNoDiskStreaming(bool state);

  /// @brief Method ForceSHBand, addr 0x65befdc, size 0x124, virtual false, abstract: false, final false
  inline void ForceSHBand(::UnityEngine::Rendering::ProbeVolumeSHBands shBands);

  /// @brief Method GetCellBounds, addr 0x65ca128, size 0x158, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds GetCellBounds(::UnityEngine::Vector3 cellPosition);

  /// @brief Method GetDistanceBetweenProbes, addr 0x65c6660, size 0x18, virtual false, abstract: false, final false
  inline float_t GetDistanceBetweenProbes(int32_t subdivisionLevel);

  /// @brief Method GetEntrySize, addr 0x65c669c, size 0x18, virtual false, abstract: false, final false
  inline float_t GetEntrySize();

  /// @brief Method GetEntrySubdivLevel, addr 0x65c0b6c, size 0x18, virtual false, abstract: false, final false
  inline int32_t GetEntrySubdivLevel();

  /// @brief Method GetGlobalIndirectionEntryMaxSubdiv, addr 0x65c6694, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetGlobalIndirectionEntryMaxSubdiv();

  /// @brief Method GetMaxSubdivision, addr 0x65c65d4, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetMaxSubdivision();

  /// @brief Method GetMaxSubdivision, addr 0x65c65dc, size 0x84, virtual false, abstract: false, final false
  inline int32_t GetMaxSubdivision(float_t multiplier);

  /// @brief Method GetNumberOfBricksAtSubdiv, addr 0x65c0bb4, size 0xcc, virtual false, abstract: false, final false
  static inline int32_t GetNumberOfBricksAtSubdiv(::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo entryInfo);

  /// @brief Method GetProbeSamplingDebugResources, addr 0x65c95e4, size 0x130, virtual false, abstract: false, final false
  inline bool GetProbeSamplingDebugResources(::UnityEngine::Camera* camera, ::ByRef<::UnityEngine::GraphicsBuffer*> resultBuffer, ::ByRef<::UnityEngine::Vector2> coords);

  /// @brief Method GetRuntimeResources, addr 0x65bcee8, size 0x148, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources GetRuntimeResources();

  /// @brief Method GetSceneGUID, addr 0x65bdb34, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW GetSceneGUID(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method GetSourceLocations, addr 0x65c67ec, size 0x190, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* GetSourceLocations(int32_t count, int32_t chunkSize,
                                                                                                                              ::UnityEngine::Rendering::ProbeBrickPool_DataLocation dataLoc);

  /// @brief Method GetVideoMemoryCost, addr 0x65bf770, size 0x7c, virtual false, abstract: false, final false
  inline int32_t GetVideoMemoryCost();

  /// @brief Method HasActiveStreamingRequest, addr 0x65cb3cc, size 0x104, virtual false, abstract: false, final false
  inline bool HasActiveStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell);

  /// @brief Method InitProbeReferenceVolume, addr 0x65be344, size 0x4f8, virtual false, abstract: false, final false
  inline void InitProbeReferenceVolume();

  /// @brief Method InitStreaming, addr 0x65bef18, size 0xb4, virtual false, abstract: false, final false
  inline void InitStreaming();

  /// @brief Method Initialize, addr 0x65bea54, size 0x4a0, virtual false, abstract: false, final false
  inline void Initialize(::ByRef<::UnityEngine::Rendering::ProbeVolumeSystemParameters> parameters);

  /// @brief Method InitializeDebug, addr 0x65beef4, size 0x24, virtual false, abstract: false, final false
  inline void InitializeDebug();

  /// @brief Method InitializeGlobalIndirection, addr 0x65c1b00, size 0x248, virtual false, abstract: false, final false
  inline void InitializeGlobalIndirection();

  /// @brief Method IsProbeSamplingDebugEnabled, addr 0x65c9574, size 0x70, virtual false, abstract: false, final false
  inline bool IsProbeSamplingDebugEnabled();

  /// @brief Method LoadAllCells, addr 0x65c1078, size 0x158, virtual false, abstract: false, final false
  inline void LoadAllCells();

  /// @brief Method LoadCell, addr 0x65c01c4, size 0x598, virtual false, abstract: false, final false
  inline bool LoadCell(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell, bool ignoreErrorLog);

  /// @brief Method LoadCells, addr 0x65c1e10, size 0xd0, virtual false, abstract: false, final false
  inline bool LoadCells(::System::Collections::Generic::List_1<int32_t>* cellIndices);

  /// @brief Method LogStreaming, addr 0x65cf34c, size 0x5c, virtual false, abstract: false, final false
  inline void LogStreaming(::StringW log);

  /// @brief Method MaxBrickSize, addr 0x65c65bc, size 0xc, virtual false, abstract: false, final false
  inline float_t MaxBrickSize();

  /// @brief Method MinBrickSize, addr 0x65c65b4, size 0x8, virtual false, abstract: false, final false
  inline float_t MinBrickSize();

  /// @brief Method MinDistanceBetweenProbes, addr 0x65c6678, size 0x1c, virtual false, abstract: false, final false
  inline float_t MinDistanceBetweenProbes();

  static inline ::UnityEngine::Rendering::ProbeReferenceVolume* New_ctor();

  /// @brief Method OnBlendingStreamingComplete, addr 0x65ce548, size 0xe8, virtual false, abstract: false, final false
  inline void OnBlendingStreamingComplete(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* request, ::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method OnClearLightingdata, addr 0x65cb4d0, size 0x4, virtual false, abstract: false, final false
  inline void OnClearLightingdata();

  /// @brief Method OnStreamingComplete, addr 0x65ce4cc, size 0x7c, virtual false, abstract: false, final false
  inline void OnStreamingComplete(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* request, ::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method PerformPendingDeletion, addr 0x65c2300, size 0x158, virtual false, abstract: false, final false
  inline void PerformPendingDeletion();

  /// @brief Method PerformPendingIndexChangeAndInit, addr 0x65c1acc, size 0x34, virtual false, abstract: false, final false
  inline void PerformPendingIndexChangeAndInit();

  /// @brief Method PerformPendingLoading, addr 0x65c1ee0, size 0x420, virtual false, abstract: false, final false
  inline void PerformPendingLoading();

  /// @brief Method PerformPendingOperations, addr 0x65be910, size 0x20, virtual false, abstract: false, final false
  inline void PerformPendingOperations();

  /// @brief Method ProbeOffset, addr 0x65c65c8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 ProbeOffset();

  /// @brief Method ProcessDiskStreamingRequest, addr 0x65ce630, size 0xc1c, virtual false, abstract: false, final false
  inline bool ProcessDiskStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest* request);

  /// @brief Method ProcessNewRequests, addr 0x65cb5b0, size 0xf0, virtual false, abstract: false, final false
  inline void ProcessNewRequests();

  /// @brief Method PushDiskStreamingRequest, addr 0x65c7a5c, size 0x15c, virtual false, abstract: false, final false
  inline void PushDiskStreamingRequest(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell, ::StringW scenario, int32_t poolIndex,
                                       ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate* onStreamingComplete);

  /// @brief Method RegisterBakingSet, addr 0x65be878, size 0x98, virtual false, abstract: false, final false
  inline void RegisterBakingSet(::UnityEngine::Rendering::ProbeVolumePerSceneData* data);

  /// @brief Method RegisterDebug, addr 0x65c25a0, size 0x3724, virtual false, abstract: false, final false
  inline void RegisterDebug();

  /// @brief Method RegisterPerSceneData, addr 0x65bdc58, size 0x100, virtual false, abstract: false, final false
  inline void RegisterPerSceneData(::UnityEngine::Rendering::ProbeVolumePerSceneData* data);

  /// @brief Method ReleaseBricks, addr 0x65bfc18, size 0x130, virtual false, abstract: false, final false
  inline void ReleaseBricks(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell);

  /// @brief Method ReleasePoolChunks, addr 0x65c0f0c, size 0x74, virtual false, abstract: false, final false
  inline void ReleasePoolChunks(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* chunkList);

  /// @brief Method RemoveCell, addr 0x65bf7ec, size 0x164, virtual false, abstract: false, final false
  inline void RemoveCell(int32_t cellIndex);

  /// @brief Method RemovePendingScene, addr 0x65c195c, size 0x170, virtual false, abstract: false, final false
  inline void RemovePendingScene(::StringW sceneGUID, ::System::Collections::Generic::List_1<int32_t>* cellList);

  /// @brief Method RenderDebug, addr 0x65c82c4, size 0xc, virtual false, abstract: false, final false
  inline void RenderDebug(::UnityEngine::Camera* camera, ::UnityEngine::Texture* exposureTexture);

  /// @brief Method RenderDebug, addr 0x65c82d0, size 0x118, virtual false, abstract: false, final false
  inline void RenderDebug(::UnityEngine::Camera* camera, ::UnityEngine::Rendering::ProbeVolumesOptions* options, ::UnityEngine::Texture* exposureTexture);

  /// @brief Method RenderFragmentationOverlay, addr 0x65c9cc8, size 0x2b0, virtual false, abstract: false, final false
  inline void RenderFragmentationOverlay(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle colorBuffer,
                                         ::UnityEngine::Rendering::RenderGraphModule::TextureHandle depthBuffer, ::UnityEngine::Rendering::DebugOverlay* debugOverlay);

  /// @brief Method ReservePoolChunks, addr 0x65c075c, size 0xc0, virtual false, abstract: false, final false
  inline bool ReservePoolChunks(int32_t brickCount, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* chunkList, bool ignoreErrorLog);

  /// @brief Method ResetDebugViewToMaxSubdiv, addr 0x65cb3a4, size 0x28, virtual false, abstract: false, final false
  inline void ResetDebugViewToMaxSubdiv();

  /// @brief Method ScenarioBlendingChanged, addr 0x65cb980, size 0xc4, virtual false, abstract: false, final false
  inline void ScenarioBlendingChanged(bool scenarioChanged);

  /// @brief Method SetActiveBakingSet, addr 0x65bdfa0, size 0x1f8, virtual false, abstract: false, final false
  inline void SetActiveBakingSet(::UnityEngine::Rendering::ProbeVolumeBakingSet* bakingSet);

  /// @brief Method SetActiveScenario, addr 0x65bd8f4, size 0xa4, virtual false, abstract: false, final false
  inline void SetActiveScenario(::StringW scenario, bool verbose);

  /// @brief Method SetActiveScene, addr 0x65bdd58, size 0xa4, virtual false, abstract: false, final false
  inline void SetActiveScene(::UnityEngine::SceneManagement::Scene scene);

  /// @brief Method SetBakingSetAsCurrent, addr 0x65be240, size 0x104, virtual false, abstract: false, final false
  inline void SetBakingSetAsCurrent(::UnityEngine::Rendering::ProbeVolumeBakingSet* bakingSet);

  /// @brief Method SetEnableStateFromSRP, addr 0x65befcc, size 0x8, virtual false, abstract: false, final false
  inline void SetEnableStateFromSRP(bool srpEnablesPV);

  /// @brief Method SetMaxSubdivision, addr 0x65c1d48, size 0xc8, virtual false, abstract: false, final false
  inline void SetMaxSubdivision(int32_t maxSubdivision);

  /// @brief Method SetNumberOfCellsLoadedPerFrame, addr 0x65cb4dc, size 0x1c, virtual false, abstract: false, final false
  inline void SetNumberOfCellsLoadedPerFrame(int32_t numberOfCells);

  /// @brief Method SetSubdivisionDimensions, addr 0x65be83c, size 0x3c, virtual false, abstract: false, final false
  inline void SetSubdivisionDimensions(float_t minBrickSize, int32_t maxSubdiv, ::UnityEngine::Vector3 offset);

  /// @brief Method SetVertexSamplingEnabled, addr 0x65befd4, size 0x8, virtual false, abstract: false, final false
  inline void SetVertexSamplingEnabled(bool value);

  /// @brief Method ShouldCullCell, addr 0x65ca2bc, size 0x300, virtual false, abstract: false, final false
  inline bool ShouldCullCell(::UnityEngine::Vector3 cellPosition, ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> adjustmentVolumeBounds, int32_t adjustmentVolumeCount);

  /// @brief Method ShouldCullCell, addr 0x65c9f78, size 0x1b0, virtual false, abstract: false, final false
  inline bool ShouldCullCell(::UnityEngine::Vector3 cellPosition, ::UnityEngine::Transform* cameraTransform, ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> frustumPlanes);

  /// @brief Method StartIndexDefragmentation, addr 0x65c0f80, size 0xf8, virtual false, abstract: false, final false
  inline void StartIndexDefragmentation();

  /// @brief Method TryCreateDebugRenderData, addr 0x65c9714, size 0x5b4, virtual false, abstract: false, final false
  inline bool TryCreateDebugRenderData();

  /// @brief Method TryGetPerSceneData, addr 0x65bddfc, size 0x1a4, virtual false, abstract: false, final false
  inline bool TryGetPerSceneData(::StringW sceneGUID, ::ByRef<::UnityEngine::Rendering::ProbeVolumePerSceneData*> perSceneData);

  /// @brief Method TryLoadBlendingCell, addr 0x65cc714, size 0xc0, virtual false, abstract: false, final false
  inline bool TryLoadBlendingCell(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell,
                                  ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* loadedCells);

  /// @brief Method TryLoadCell, addr 0x65cc57c, size 0x114, virtual false, abstract: false, final false
  inline bool TryLoadCell(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell, ::ByRef<int32_t> shBudget, ::ByRef<int32_t> indexBudget,
                          ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* loadedCells);

  /// @brief Method UnloadAllBlendingCells, addr 0x65bfed4, size 0xec, virtual false, abstract: false, final false
  inline void UnloadAllBlendingCells();

  /// @brief Method UnloadAllCells, addr 0x65bfde8, size 0xec, virtual false, abstract: false, final false
  inline void UnloadAllCells();

  /// @brief Method UnloadBakingSet, addr 0x65be198, size 0xa8, virtual false, abstract: false, final false
  inline void UnloadBakingSet();

  /// @brief Method UnloadBlendingCell, addr 0x65bfabc, size 0xe8, virtual false, abstract: false, final false
  inline void UnloadBlendingCell(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell);

  /// @brief Method UnloadBlendingCell, addr 0x65cc690, size 0x84, virtual false, abstract: false, final false
  inline void UnloadBlendingCell(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell,
                                 ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* unloadedCells);

  /// @brief Method UnloadCell, addr 0x65bf950, size 0x16c, virtual false, abstract: false, final false
  inline void UnloadCell(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell);

  /// @brief Method UnregisterDebug, addr 0x65c2458, size 0x148, virtual false, abstract: false, final false
  inline void UnregisterDebug(bool destroyPanel);

  /// @brief Method UnregisterPerSceneData, addr 0x65be930, size 0xa0, virtual false, abstract: false, final false
  inline void UnregisterPerSceneData(::UnityEngine::Rendering::ProbeVolumePerSceneData* data);

  /// @brief Method UpdateActiveRequests, addr 0x65cb6a0, size 0x2e0, virtual false, abstract: false, final false
  inline void UpdateActiveRequests(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method UpdateBlendingCellStreaming, addr 0x65cdc38, size 0x6ac, virtual false, abstract: false, final false
  inline void UpdateBlendingCellStreaming(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method UpdateCellIndex, addr 0x65c7bb8, size 0xe4, virtual false, abstract: false, final false
  inline void UpdateCellIndex(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell);

  /// @brief Method UpdateCellStreaming, addr 0x65cc938, size 0x8, virtual false, abstract: false, final false
  inline void UpdateCellStreaming(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera);

  /// @brief Method UpdateCellStreaming, addr 0x65cc940, size 0xb64, virtual false, abstract: false, final false
  inline void UpdateCellStreaming(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Camera* camera, ::UnityEngine::Rendering::ProbeVolumesOptions* options);

  /// @brief Method UpdateConstantBuffer, addr 0x65bd3f8, size 0x2ec, virtual false, abstract: false, final false
  inline void UpdateConstantBuffer(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ProbeVolumeShadingParameters parameters);

  /// @brief Method UpdateDataLocationTexture, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void UpdateDataLocationTexture(::UnityEngine::Texture* output, ::Unity::Collections::NativeArray_1<T> input);

  /// @brief Method UpdateDebugFromSelection, addr 0x65ca280, size 0x3c, virtual false, abstract: false, final false
  static inline void UpdateDebugFromSelection(::ByRef<::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*>> _AdjustmentVolumeBounds, ::ByRef<int32_t> _AdjustmentVolumeCount);

  /// @brief Method UpdateDiskStreaming, addr 0x65cd884, size 0x3b4, virtual false, abstract: false, final false
  inline void UpdateDiskStreaming(::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method UpdateIndexDefragmentation, addr 0x65cd4a4, size 0x3e0, virtual false, abstract: false, final false
  inline void UpdateIndexDefragmentation();

  /// @brief Method UpdatePool, addr 0x65c6b28, size 0x528, virtual false, abstract: false, final false
  inline void UpdatePool(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* chunkList,
                         ::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData data, ::Unity::Collections::NativeArray_1<uint8_t> validityNeighMaskData,
                         ::Unity::Collections::NativeArray_1<uint16_t> skyOcclusionL0L1Data, ::Unity::Collections::NativeArray_1<uint8_t> skyShadingDirectionIndices, int32_t chunkIndex,
                         int32_t poolIndex);

  /// @brief Method UpdatePool, addr 0x65c7050, size 0x1d8, virtual false, abstract: false, final false
  inline void UpdatePool(::UnityEngine::Rendering::CommandBuffer* cmd, ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* chunkList,
                         ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* dataBuffer, ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout layout,
                         int32_t poolIndex);

  /// @brief Method UpdatePoolAndIndex, addr 0x65c7c9c, size 0x4a0, virtual false, abstract: false, final false
  inline void UpdatePoolAndIndex(::UnityEngine::Rendering::ProbeReferenceVolume_Cell* cell, ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer* dataBuffer,
                                 ::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout layout, int32_t poolIndex, ::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method UpdateShaderVariablesProbeVolumes, addr 0x65bd030, size 0x260, virtual false, abstract: false, final false
  inline bool UpdateShaderVariablesProbeVolumes(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ProbeVolumesOptions* probeVolumeOptions, int32_t taaFrameIndex,
                                                bool supportRenderingLayers);

  /// @brief Method UpdateSharedData, addr 0x65c7228, size 0x2c8, virtual false, abstract: false, final false
  inline void UpdateSharedData(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* chunkList,
                               ::Unity::Collections::NativeArray_1<uint8_t> validityNeighMaskData, ::Unity::Collections::NativeArray_1<uint16_t> skyOcclusionData,
                               ::Unity::Collections::NativeArray_1<uint8_t> skyShadingDirectionIndices, int32_t chunkIndex);

  /// @brief Method UpdateValidityTextureWithoutMask, addr 0x65c697c, size 0x1ac, virtual false, abstract: false, final false
  inline void UpdateValidityTextureWithoutMask(::UnityEngine::Texture* output, ::Unity::Collections::NativeArray_1<uint8_t> input);

  /// @brief Method <RegisterDebug>b__219_10, addr 0x65cf5fc, size 0x1c, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_10(bool value);

  /// @brief Method <RegisterDebug>b__219_11, addr 0x65cf618, size 0x20, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__219_11();

  /// @brief Method <RegisterDebug>b__219_12, addr 0x65cf638, size 0x18, virtual false, abstract: false, final false
  inline int32_t _RegisterDebug_b__219_12();

  /// @brief Method <RegisterDebug>b__219_13, addr 0x65cf650, size 0x18, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_13(int32_t value);

  /// @brief Method <RegisterDebug>b__219_14, addr 0x65cf668, size 0x18, virtual false, abstract: false, final false
  inline int32_t _RegisterDebug_b__219_14();

  /// @brief Method <RegisterDebug>b__219_15, addr 0x65cf680, size 0x18, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_15(int32_t value);

  /// @brief Method <RegisterDebug>b__219_16, addr 0x65cf698, size 0x18, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__219_16();

  /// @brief Method <RegisterDebug>b__219_17, addr 0x65cf6b0, size 0x18, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_17(float_t value);

  /// @brief Method <RegisterDebug>b__219_2, addr 0x65cf54c, size 0x18, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__219_2();

  /// @brief Method <RegisterDebug>b__219_20, addr 0x65cf6c8, size 0x18, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__219_20();

  /// @brief Method <RegisterDebug>b__219_21, addr 0x65cf6e0, size 0x18, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_21(float_t value);

  /// @brief Method <RegisterDebug>b__219_22, addr 0x65cf6f8, size 0x30, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__219_22();

  /// @brief Method <RegisterDebug>b__219_23, addr 0x65cf728, size 0x18, virtual false, abstract: false, final false
  inline int32_t _RegisterDebug_b__219_23();

  /// @brief Method <RegisterDebug>b__219_24, addr 0x65cf740, size 0x2c, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_24(int32_t v);

  /// @brief Method <RegisterDebug>b__219_26, addr 0x65cf76c, size 0x10, virtual false, abstract: false, final false
  inline int32_t _RegisterDebug_b__219_26();

  /// @brief Method <RegisterDebug>b__219_27, addr 0x65cf77c, size 0x18, virtual false, abstract: false, final false
  inline int32_t _RegisterDebug_b__219_27();

  /// @brief Method <RegisterDebug>b__219_28, addr 0x65cf794, size 0x1c, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_28(int32_t v);

  /// @brief Method <RegisterDebug>b__219_3, addr 0x65cf564, size 0x1c, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_3(bool value);

  /// @brief Method <RegisterDebug>b__219_30, addr 0x65cf7b0, size 0x10, virtual false, abstract: false, final false
  inline int32_t _RegisterDebug_b__219_30();

  /// @brief Method <RegisterDebug>b__219_31, addr 0x65cf7c0, size 0x18, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__219_31();

  /// @brief Method <RegisterDebug>b__219_32, addr 0x65cf7d8, size 0x90, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_32(bool value);

  /// @brief Method <RegisterDebug>b__219_33, addr 0x65cf868, size 0x20, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__219_33();

  /// @brief Method <RegisterDebug>b__219_34, addr 0x65cf888, size 0x18, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__219_34();

  /// @brief Method <RegisterDebug>b__219_35, addr 0x65cf8a0, size 0x18, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_35(float_t value);

  /// @brief Method <RegisterDebug>b__219_38, addr 0x65cf8b8, size 0x18, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__219_38();

  /// @brief Method <RegisterDebug>b__219_39, addr 0x65cf8d0, size 0x1c, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_39(bool value);

  /// @brief Method <RegisterDebug>b__219_4, addr 0x65cf580, size 0x18, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__219_4();

  /// @brief Method <RegisterDebug>b__219_40, addr 0x65cf8ec, size 0x18, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__219_40();

  /// @brief Method <RegisterDebug>b__219_41, addr 0x65cf904, size 0x114, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_41(bool value);

  /// @brief Method <RegisterDebug>b__219_42, addr 0x65cfa18, size 0x20, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__219_42();

  /// @brief Method <RegisterDebug>b__219_43, addr 0x65cfa38, size 0x18, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__219_43();

  /// @brief Method <RegisterDebug>b__219_44, addr 0x65cfa50, size 0x18, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_44(float_t value);

  /// @brief Method <RegisterDebug>b__219_47, addr 0x65cfa68, size 0x20, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__219_47();

  /// @brief Method <RegisterDebug>b__219_48, addr 0x65cfa88, size 0x18, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__219_48();

  /// @brief Method <RegisterDebug>b__219_49, addr 0x65cfaa0, size 0x18, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_49(float_t value);

  /// @brief Method <RegisterDebug>b__219_5, addr 0x65cf598, size 0x1c, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_5(bool value);

  /// @brief Method <RegisterDebug>b__219_51, addr 0x65cfab8, size 0x18, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__219_51();

  /// @brief Method <RegisterDebug>b__219_52, addr 0x65cfad0, size 0x1c, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_52(bool value);

  /// @brief Method <RegisterDebug>b__219_53, addr 0x65cfaec, size 0x18, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__219_53();

  /// @brief Method <RegisterDebug>b__219_54, addr 0x65cfb04, size 0x1c, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_54(bool value);

  /// @brief Method <RegisterDebug>b__219_55, addr 0x65cfb20, size 0x30, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__219_55();

  /// @brief Method <RegisterDebug>b__219_56, addr 0x65cfb50, size 0x18, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__219_56();

  /// @brief Method <RegisterDebug>b__219_57, addr 0x65cfb68, size 0x1c, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_57(bool value);

  /// @brief Method <RegisterDebug>b__219_58, addr 0x65cfb84, size 0x18, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__219_58();

  /// @brief Method <RegisterDebug>b__219_59, addr 0x65cfb9c, size 0x1c, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_59(bool value);

  /// @brief Method <RegisterDebug>b__219_6, addr 0x65cf5b4, size 0x18, virtual false, abstract: false, final false
  inline float_t _RegisterDebug_b__219_6();

  /// @brief Method <RegisterDebug>b__219_67, addr 0x65cfbb8, size 0x18, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__219_67();

  /// @brief Method <RegisterDebug>b__219_68, addr 0x65cfbd0, size 0x1c, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_68(bool value);

  /// @brief Method <RegisterDebug>b__219_69, addr 0x65cfbec, size 0x20, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__219_69();

  /// @brief Method <RegisterDebug>b__219_7, addr 0x65cf5cc, size 0x18, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_7(float_t value);

  /// @brief Method <RegisterDebug>b__219_71, addr 0x65cfc0c, size 0x18, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__219_71();

  /// @brief Method <RegisterDebug>b__219_72, addr 0x65cfc24, size 0x1c, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_72(bool value);

  /// @brief Method <RegisterDebug>b__219_73, addr 0x65cfc40, size 0x18, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__219_73();

  /// @brief Method <RegisterDebug>b__219_74, addr 0x65cfc58, size 0x1c, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_74(bool value);

  /// @brief Method <RegisterDebug>b__219_83, addr 0x65d03c0, size 0x178, virtual false, abstract: false, final false
  inline int32_t _RegisterDebug_b__219_83();

  /// @brief Method <RegisterDebug>b__219_84, addr 0x65d0538, size 0x74, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_84(int32_t value);

  /// @brief Method <RegisterDebug>b__219_85, addr 0x65d05ac, size 0x18, virtual false, abstract: false, final false
  inline int32_t _RegisterDebug_b__219_85();

  /// @brief Method <RegisterDebug>b__219_86, addr 0x65d05c4, size 0x18, virtual false, abstract: false, final false
  inline void _RegisterDebug_b__219_86(int32_t value);

  /// @brief Method <RegisterDebug>b__219_9, addr 0x65cf5e4, size 0x18, virtual false, abstract: false, final false
  inline bool _RegisterDebug_b__219_9();

  /// @brief Method <RegisterDebug>g__RefreshDebug|219_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void _RegisterDebug_g__RefreshDebug_219_0(::UnityEngine::Rendering::DebugUI_Field_1<T>* field, T value);

  /// @brief Method <RegisterDebug>g__RefreshScenarioNames|219_75, addr 0x65cfc74, size 0x74c, virtual false, abstract: false, final false
  inline void _RegisterDebug_g__RefreshScenarioNames_219_75(::StringW guid);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>* const& __cordl_internal_get__perSceneDataList_k__BackingField() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>*& __cordl_internal_get__perSceneDataList_k__BackingField();

  constexpr ::UnityEngine::Rendering::ProbeVolumeDebug* const& __cordl_internal_get__probeVolumeDebug_k__BackingField() const;

  constexpr ::UnityEngine::Rendering::ProbeVolumeDebug*& __cordl_internal_get__probeVolumeDebug_k__BackingField();

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> const& __cordl_internal_get__subdivisionDebugColors_k__BackingField() const;

  constexpr ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*>& __cordl_internal_get__subdivisionDebugColors_k__BackingField();

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const& __cordl_internal_get_cells() const;

  constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& __cordl_internal_get_cells();

  constexpr ::System::Action* const& __cordl_internal_get_checksDuringBakeAction() const;

  constexpr ::System::Action*& __cordl_internal_get_checksDuringBakeAction();

  constexpr bool const& __cordl_internal_get_clearAssetsOnVolumeClear() const;

  constexpr bool& __cordl_internal_get_clearAssetsOnVolumeClear();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_m_ActiveScenes() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_ActiveScenes();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* const& __cordl_internal_get_m_ActiveStreamingRequests() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>*& __cordl_internal_get_m_ActiveStreamingRequests();

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const& __cordl_internal_get_m_BestToBeLoadedCells() const;

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& __cordl_internal_get_m_BestToBeLoadedCells();

  constexpr ::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget const& __cordl_internal_get_m_BlendingMemoryBudget() const;

  constexpr ::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget& __cordl_internal_get_m_BlendingMemoryBudget();

  constexpr ::UnityEngine::Rendering::ProbeBrickBlendingPool* const& __cordl_internal_get_m_BlendingPool() const;

  constexpr ::UnityEngine::Rendering::ProbeBrickBlendingPool*& __cordl_internal_get_m_BlendingPool();

  constexpr int32_t const& __cordl_internal_get_m_CBShaderID() const;

  constexpr int32_t& __cordl_internal_get_m_CBShaderID();

  constexpr ::UnityEngine::Rendering::ProbeGlobalIndirection* const& __cordl_internal_get_m_CellIndices() const;

  constexpr ::UnityEngine::Rendering::ProbeGlobalIndirection*& __cordl_internal_get_m_CellIndices();

  constexpr ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const& __cordl_internal_get_m_CellPool() const;

  constexpr ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& __cordl_internal_get_m_CellPool();

  constexpr ::UnityEngine::Bounds const& __cordl_internal_get_m_CurrGlobalBounds() const;

  constexpr ::UnityEngine::Bounds& __cordl_internal_get_m_CurrGlobalBounds();

  constexpr ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> const& __cordl_internal_get_m_CurrentBakingSet() const;

  constexpr ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet>& __cordl_internal_get_m_CurrentBakingSet();

  constexpr ::StringW const& __cordl_internal_get_m_DebugActiveScenario() const;

  constexpr ::StringW& __cordl_internal_get_m_DebugActiveScenario();

  constexpr ::StringW const& __cordl_internal_get_m_DebugActiveSceneGUID() const;

  constexpr ::StringW& __cordl_internal_get_m_DebugActiveSceneGUID();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_DebugFragmentationMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_DebugFragmentationMaterial();

  constexpr ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> const& __cordl_internal_get_m_DebugFrustumPlanes() const;

  constexpr ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*>& __cordl_internal_get_m_DebugFrustumPlanes();

  constexpr ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*, ::Array<::UnityEngine::Rendering::DebugUI_Widget*>*> const& __cordl_internal_get_m_DebugItems() const;

  constexpr ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*, ::Array<::UnityEngine::Rendering::DebugUI_Widget*>*>& __cordl_internal_get_m_DebugItems();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_DebugMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_DebugMaterial();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_DebugMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_DebugMesh();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_DebugOffsetMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_DebugOffsetMaterial();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_DebugOffsetMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_DebugOffsetMesh();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_DebugProbeSamplingMesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_DebugProbeSamplingMesh();

  constexpr ::UnityEngine::Rendering::DebugUI_EnumField* const& __cordl_internal_get_m_DebugScenarioField() const;

  constexpr ::UnityEngine::Rendering::DebugUI_EnumField*& __cordl_internal_get_m_DebugScenarioField();

  constexpr ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> const& __cordl_internal_get_m_DebugScenarioNames() const;

  constexpr ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*>& __cordl_internal_get_m_DebugScenarioNames();

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*> const& __cordl_internal_get_m_DebugScenarioValues() const;

  constexpr ::ArrayW<int32_t, ::Array<int32_t>*>& __cordl_internal_get_m_DebugScenarioValues();

  constexpr ::UnityEngine::Rendering::ProbeGlobalIndirection* const& __cordl_internal_get_m_DefragCellIndices() const;

  constexpr ::UnityEngine::Rendering::ProbeGlobalIndirection*& __cordl_internal_get_m_DefragCellIndices();

  constexpr ::UnityEngine::Rendering::ProbeBrickIndex* const& __cordl_internal_get_m_DefragIndex() const;

  constexpr ::UnityEngine::Rendering::ProbeBrickIndex*& __cordl_internal_get_m_DefragIndex();

  constexpr bool const& __cordl_internal_get_m_DiskStreamingUseCompute() const;

  constexpr bool& __cordl_internal_get_m_DiskStreamingUseCompute();

  constexpr ::UnityW<::UnityEngine::Texture> const& __cordl_internal_get_m_DisplayNumbersTexture() const;

  constexpr ::UnityW<::UnityEngine::Texture>& __cordl_internal_get_m_DisplayNumbersTexture();

  constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_EmptyIndexBuffer() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_EmptyIndexBuffer();

  constexpr bool const& __cordl_internal_get_m_EnabledBySRP() const;

  constexpr bool& __cordl_internal_get_m_EnabledBySRP();

  constexpr bool const& __cordl_internal_get_m_ForceNoDiskStreaming() const;

  constexpr bool& __cordl_internal_get_m_ForceNoDiskStreaming();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_FrozenCameraDirection() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_FrozenCameraDirection();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_FrozenCameraPosition() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_FrozenCameraPosition();

  constexpr bool const& __cordl_internal_get_m_HasChangedIndex() const;

  constexpr bool& __cordl_internal_get_m_HasChangedIndex();

  constexpr ::UnityEngine::Rendering::ProbeBrickIndex* const& __cordl_internal_get_m_Index() const;

  constexpr ::UnityEngine::Rendering::ProbeBrickIndex*& __cordl_internal_get_m_Index();

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const& __cordl_internal_get_m_IndexDefragCells() const;

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& __cordl_internal_get_m_IndexDefragCells();

  constexpr bool const& __cordl_internal_get_m_IndexDefragmentationInProgress() const;

  constexpr bool& __cordl_internal_get_m_IndexDefragmentationInProgress();

  constexpr bool const& __cordl_internal_get_m_IsInitialized() const;

  constexpr bool& __cordl_internal_get_m_IsInitialized();

  constexpr bool const& __cordl_internal_get_m_LoadMaxCellsPerFrame() const;

  constexpr bool& __cordl_internal_get_m_LoadMaxCellsPerFrame();

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const& __cordl_internal_get_m_LoadedBlendingCells() const;

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& __cordl_internal_get_m_LoadedBlendingCells();

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const& __cordl_internal_get_m_LoadedCells() const;

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& __cordl_internal_get_m_LoadedCells();

  constexpr bool const& __cordl_internal_get_m_MaxSubdivVisualizedIsMaxAvailable() const;

  constexpr bool& __cordl_internal_get_m_MaxSubdivVisualizedIsMaxAvailable();

  constexpr int32_t const& __cordl_internal_get_m_MaxSubdivision() const;

  constexpr int32_t& __cordl_internal_get_m_MaxSubdivision();

  constexpr ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget const& __cordl_internal_get_m_MemoryBudget() const;

  constexpr ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget& __cordl_internal_get_m_MemoryBudget();

  constexpr float_t const& __cordl_internal_get_m_MinBrickSize() const;

  constexpr float_t& __cordl_internal_get_m_MinBrickSize();

  constexpr bool const& __cordl_internal_get_m_NeedLoadAsset() const;

  constexpr bool& __cordl_internal_get_m_NeedLoadAsset();

  constexpr bool const& __cordl_internal_get_m_NeedsIndexRebuild() const;

  constexpr bool& __cordl_internal_get_m_NeedsIndexRebuild();

  constexpr int32_t const& __cordl_internal_get_m_NumberOfCellsBlendedPerFrame() const;

  constexpr int32_t& __cordl_internal_get_m_NumberOfCellsBlendedPerFrame();

  constexpr int32_t const& __cordl_internal_get_m_NumberOfCellsLoadedPerFrame() const;

  constexpr int32_t& __cordl_internal_get_m_NumberOfCellsLoadedPerFrame();

  constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate* const& __cordl_internal_get_m_OnBlendingStreamingComplete() const;

  constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*& __cordl_internal_get_m_OnBlendingStreamingComplete();

  constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate* const& __cordl_internal_get_m_OnStreamingComplete() const;

  constexpr ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*& __cordl_internal_get_m_OnStreamingComplete();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW,
                                                         ::System::ValueTuple_2<::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet>, ::System::Collections::Generic::List_1<int32_t>*>>* const&
  __cordl_internal_get_m_PendingScenesToBeLoaded() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW,
                                                         ::System::ValueTuple_2<::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet>, ::System::Collections::Generic::List_1<int32_t>*>>*&
  __cordl_internal_get_m_PendingScenesToBeLoaded();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* const& __cordl_internal_get_m_PendingScenesToBeUnloaded() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>*& __cordl_internal_get_m_PendingScenesToBeUnloaded();

  constexpr ::UnityEngine::Rendering::ProbeBrickPool* const& __cordl_internal_get_m_Pool() const;

  constexpr ::UnityEngine::Rendering::ProbeBrickPool*& __cordl_internal_get_m_Pool();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_m_PositionOffsets() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_m_PositionOffsets();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_ProbeOffset() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_ProbeOffset();

  constexpr bool const& __cordl_internal_get_m_ProbeReferenceVolumeInit() const;

  constexpr bool& __cordl_internal_get_m_ProbeReferenceVolumeInit();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_ProbeSamplingDebugMaterial() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_ProbeSamplingDebugMaterial();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_m_ProbeSamplingDebugMaterial02() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_m_ProbeSamplingDebugMaterial02();

  constexpr ::UnityEngine::Rendering::ProbeVolumeSHBands const& __cordl_internal_get_m_SHBands() const;

  constexpr ::UnityEngine::Rendering::ProbeVolumeSHBands& __cordl_internal_get_m_SHBands();

  constexpr ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool* const& __cordl_internal_get_m_ScratchBufferPool() const;

  constexpr ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool*& __cordl_internal_get_m_ScratchBufferPool();

  constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* const& __cordl_internal_get_m_StreamingQueue() const;

  constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>*& __cordl_internal_get_m_StreamingQueue();

  constexpr ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* const& __cordl_internal_get_m_StreamingRequestsPool() const;

  constexpr ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>*& __cordl_internal_get_m_StreamingRequestsPool();

  constexpr bool const& __cordl_internal_get_m_SupportDiskStreaming() const;

  constexpr bool& __cordl_internal_get_m_SupportDiskStreaming();

  constexpr bool const& __cordl_internal_get_m_SupportGPUStreaming() const;

  constexpr bool& __cordl_internal_get_m_SupportGPUStreaming();

  constexpr bool const& __cordl_internal_get_m_SupportScenarioBlending() const;

  constexpr bool& __cordl_internal_get_m_SupportScenarioBlending();

  constexpr bool const& __cordl_internal_get_m_SupportScenarios() const;

  constexpr bool& __cordl_internal_get_m_SupportScenarios();

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const& __cordl_internal_get_m_TempBlendingCellToLoadList() const;

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& __cordl_internal_get_m_TempBlendingCellToLoadList();

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const& __cordl_internal_get_m_TempBlendingCellToUnloadList() const;

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& __cordl_internal_get_m_TempBlendingCellToUnloadList();

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const& __cordl_internal_get_m_TempCellToLoadList() const;

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& __cordl_internal_get_m_TempCellToLoadList();

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const& __cordl_internal_get_m_TempCellToUnloadList() const;

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& __cordl_internal_get_m_TempCellToUnloadList();

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const& __cordl_internal_get_m_TempIndexDefragCells() const;

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& __cordl_internal_get_m_TempIndexDefragCells();

  constexpr ::UnityEngine::Rendering::ProbeBrickPool_DataLocation const& __cordl_internal_get_m_TemporaryDataLocation() const;

  constexpr ::UnityEngine::Rendering::ProbeBrickPool_DataLocation& __cordl_internal_get_m_TemporaryDataLocation();

  constexpr int32_t const& __cordl_internal_get_m_TemporaryDataLocationMemCost() const;

  constexpr int32_t& __cordl_internal_get_m_TemporaryDataLocationMemCost();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* const& __cordl_internal_get_m_TmpSrcChunks() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>*& __cordl_internal_get_m_TmpSrcChunks();

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const& __cordl_internal_get_m_ToBeLoadedBlendingCells() const;

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& __cordl_internal_get_m_ToBeLoadedBlendingCells();

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const& __cordl_internal_get_m_ToBeLoadedCells() const;

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& __cordl_internal_get_m_ToBeLoadedCells();

  constexpr float_t const& __cordl_internal_get_m_TurnoverRate() const;

  constexpr float_t& __cordl_internal_get_m_TurnoverRate();

  constexpr bool const& __cordl_internal_get_m_UseStreamingAssets() const;

  constexpr bool& __cordl_internal_get_m_UseStreamingAssets();

  constexpr bool const& __cordl_internal_get_m_VertexSampling() const;

  constexpr bool& __cordl_internal_get_m_VertexSampling();

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* const& __cordl_internal_get_m_WorseLoadedCells() const;

  constexpr ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>*& __cordl_internal_get_m_WorseLoadedCells();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_maxLoadedCellPos() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_maxLoadedCellPos();

  constexpr float_t const& __cordl_internal_get_maxStreamingScore() const;

  constexpr float_t& __cordl_internal_get_maxStreamingScore();

  constexpr ::UnityEngine::Vector3Int const& __cordl_internal_get_minLoadedCellPos() const;

  constexpr ::UnityEngine::Vector3Int& __cordl_internal_get_minLoadedCellPos();

  constexpr float_t const& __cordl_internal_get_minStreamingScore() const;

  constexpr float_t& __cordl_internal_get_minStreamingScore();

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Bounds,
                                                         ::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_Brick, ::Array<::UnityEngine::Rendering::ProbeBrickIndex_Brick>*>>* const&
  __cordl_internal_get_realtimeSubdivisionInfo() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Bounds, ::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_Brick, ::Array<::UnityEngine::Rendering::ProbeBrickIndex_Brick>*>>*&
  __cordl_internal_get_realtimeSubdivisionInfo();

  constexpr ::System::Action_1<::UnityEngine::Rendering::ProbeReferenceVolume_ExtraDataActionInput>* const& __cordl_internal_get_retrieveExtraDataAction() const;

  constexpr ::System::Action_1<::UnityEngine::Rendering::ProbeReferenceVolume_ExtraDataActionInput>*& __cordl_internal_get_retrieveExtraDataAction();

  constexpr ::UnityEngine::Rendering::ProbeVolumeSceneData* const& __cordl_internal_get_sceneData() const;

  constexpr ::UnityEngine::Rendering::ProbeVolumeSceneData*& __cordl_internal_get_sceneData();

  constexpr void __cordl_internal_set__perSceneDataList_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>* value);

  constexpr void __cordl_internal_set__probeVolumeDebug_k__BackingField(::UnityEngine::Rendering::ProbeVolumeDebug* value);

  constexpr void __cordl_internal_set__subdivisionDebugColors_k__BackingField(::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> value);

  constexpr void __cordl_internal_set_cells(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value);

  constexpr void __cordl_internal_set_checksDuringBakeAction(::System::Action* value);

  constexpr void __cordl_internal_set_clearAssetsOnVolumeClear(bool value);

  constexpr void __cordl_internal_set_m_ActiveScenes(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_m_ActiveStreamingRequests(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* value);

  constexpr void __cordl_internal_set_m_BestToBeLoadedCells(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value);

  constexpr void __cordl_internal_set_m_BlendingMemoryBudget(::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget value);

  constexpr void __cordl_internal_set_m_BlendingPool(::UnityEngine::Rendering::ProbeBrickBlendingPool* value);

  constexpr void __cordl_internal_set_m_CBShaderID(int32_t value);

  constexpr void __cordl_internal_set_m_CellIndices(::UnityEngine::Rendering::ProbeGlobalIndirection* value);

  constexpr void __cordl_internal_set_m_CellPool(::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value);

  constexpr void __cordl_internal_set_m_CurrGlobalBounds(::UnityEngine::Bounds value);

  constexpr void __cordl_internal_set_m_CurrentBakingSet(::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> value);

  constexpr void __cordl_internal_set_m_DebugActiveScenario(::StringW value);

  constexpr void __cordl_internal_set_m_DebugActiveSceneGUID(::StringW value);

  constexpr void __cordl_internal_set_m_DebugFragmentationMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_DebugFrustumPlanes(::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> value);

  constexpr void __cordl_internal_set_m_DebugItems(::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*, ::Array<::UnityEngine::Rendering::DebugUI_Widget*>*> value);

  constexpr void __cordl_internal_set_m_DebugMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_DebugMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_DebugOffsetMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_DebugOffsetMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_DebugProbeSamplingMesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_DebugScenarioField(::UnityEngine::Rendering::DebugUI_EnumField* value);

  constexpr void __cordl_internal_set_m_DebugScenarioNames(::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> value);

  constexpr void __cordl_internal_set_m_DebugScenarioValues(::ArrayW<int32_t, ::Array<int32_t>*> value);

  constexpr void __cordl_internal_set_m_DefragCellIndices(::UnityEngine::Rendering::ProbeGlobalIndirection* value);

  constexpr void __cordl_internal_set_m_DefragIndex(::UnityEngine::Rendering::ProbeBrickIndex* value);

  constexpr void __cordl_internal_set_m_DiskStreamingUseCompute(bool value);

  constexpr void __cordl_internal_set_m_DisplayNumbersTexture(::UnityW<::UnityEngine::Texture> value);

  constexpr void __cordl_internal_set_m_EmptyIndexBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_EnabledBySRP(bool value);

  constexpr void __cordl_internal_set_m_ForceNoDiskStreaming(bool value);

  constexpr void __cordl_internal_set_m_FrozenCameraDirection(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_FrozenCameraPosition(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_HasChangedIndex(bool value);

  constexpr void __cordl_internal_set_m_Index(::UnityEngine::Rendering::ProbeBrickIndex* value);

  constexpr void __cordl_internal_set_m_IndexDefragCells(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value);

  constexpr void __cordl_internal_set_m_IndexDefragmentationInProgress(bool value);

  constexpr void __cordl_internal_set_m_IsInitialized(bool value);

  constexpr void __cordl_internal_set_m_LoadMaxCellsPerFrame(bool value);

  constexpr void __cordl_internal_set_m_LoadedBlendingCells(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value);

  constexpr void __cordl_internal_set_m_LoadedCells(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value);

  constexpr void __cordl_internal_set_m_MaxSubdivVisualizedIsMaxAvailable(bool value);

  constexpr void __cordl_internal_set_m_MaxSubdivision(int32_t value);

  constexpr void __cordl_internal_set_m_MemoryBudget(::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget value);

  constexpr void __cordl_internal_set_m_MinBrickSize(float_t value);

  constexpr void __cordl_internal_set_m_NeedLoadAsset(bool value);

  constexpr void __cordl_internal_set_m_NeedsIndexRebuild(bool value);

  constexpr void __cordl_internal_set_m_NumberOfCellsBlendedPerFrame(int32_t value);

  constexpr void __cordl_internal_set_m_NumberOfCellsLoadedPerFrame(int32_t value);

  constexpr void __cordl_internal_set_m_OnBlendingStreamingComplete(::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate* value);

  constexpr void __cordl_internal_set_m_OnStreamingComplete(::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate* value);

  constexpr void __cordl_internal_set_m_PendingScenesToBeLoaded(
      ::System::Collections::Generic::Dictionary_2<::StringW, ::System::ValueTuple_2<::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet>, ::System::Collections::Generic::List_1<int32_t>*>>*
          value);

  constexpr void __cordl_internal_set_m_PendingScenesToBeUnloaded(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* value);

  constexpr void __cordl_internal_set_m_Pool(::UnityEngine::Rendering::ProbeBrickPool* value);

  constexpr void __cordl_internal_set_m_PositionOffsets(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_m_ProbeOffset(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_ProbeReferenceVolumeInit(bool value);

  constexpr void __cordl_internal_set_m_ProbeSamplingDebugMaterial(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_ProbeSamplingDebugMaterial02(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_m_SHBands(::UnityEngine::Rendering::ProbeVolumeSHBands value);

  constexpr void __cordl_internal_set_m_ScratchBufferPool(::UnityEngine::Rendering::ProbeVolumeScratchBufferPool* value);

  constexpr void __cordl_internal_set_m_StreamingQueue(::System::Collections::Generic::Queue_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* value);

  constexpr void __cordl_internal_set_m_StreamingRequestsPool(::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* value);

  constexpr void __cordl_internal_set_m_SupportDiskStreaming(bool value);

  constexpr void __cordl_internal_set_m_SupportGPUStreaming(bool value);

  constexpr void __cordl_internal_set_m_SupportScenarioBlending(bool value);

  constexpr void __cordl_internal_set_m_SupportScenarios(bool value);

  constexpr void __cordl_internal_set_m_TempBlendingCellToLoadList(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value);

  constexpr void __cordl_internal_set_m_TempBlendingCellToUnloadList(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value);

  constexpr void __cordl_internal_set_m_TempCellToLoadList(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value);

  constexpr void __cordl_internal_set_m_TempCellToUnloadList(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value);

  constexpr void __cordl_internal_set_m_TempIndexDefragCells(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value);

  constexpr void __cordl_internal_set_m_TemporaryDataLocation(::UnityEngine::Rendering::ProbeBrickPool_DataLocation value);

  constexpr void __cordl_internal_set_m_TemporaryDataLocationMemCost(int32_t value);

  constexpr void __cordl_internal_set_m_TmpSrcChunks(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* value);

  constexpr void __cordl_internal_set_m_ToBeLoadedBlendingCells(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value);

  constexpr void __cordl_internal_set_m_ToBeLoadedCells(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value);

  constexpr void __cordl_internal_set_m_TurnoverRate(float_t value);

  constexpr void __cordl_internal_set_m_UseStreamingAssets(bool value);

  constexpr void __cordl_internal_set_m_VertexSampling(bool value);

  constexpr void __cordl_internal_set_m_WorseLoadedCells(::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value);

  constexpr void __cordl_internal_set_maxLoadedCellPos(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_maxStreamingScore(float_t value);

  constexpr void __cordl_internal_set_minLoadedCellPos(::UnityEngine::Vector3Int value);

  constexpr void __cordl_internal_set_minStreamingScore(float_t value);

  constexpr void __cordl_internal_set_realtimeSubdivisionInfo(
      ::System::Collections::Generic::Dictionary_2<::UnityEngine::Bounds, ::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_Brick, ::Array<::UnityEngine::Rendering::ProbeBrickIndex_Brick>*>>* value);

  constexpr void __cordl_internal_set_retrieveExtraDataAction(::System::Action_1<::UnityEngine::Rendering::ProbeReferenceVolume_ExtraDataActionInput>* value);

  constexpr void __cordl_internal_set_sceneData(::UnityEngine::Rendering::ProbeVolumeSceneData* value);

  /// @brief Method .ctor, addr 0x65c5cc4, size 0x858, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::ProbeReferenceVolume* getStaticF__instance();

  static inline ::StringW getStaticF_defaultLightingScenario();

  static inline ::StringW getStaticF_k_DebugPanelName();

  static inline ::UnityEngine::Rendering::ProbeSamplingDebugData* getStaticF_probeSamplingDebugData();

  static inline ::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* getStaticF_s_BlendingComparer();

  static inline ::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> getStaticF_s_BoundsArray();

  static inline ::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* getStaticF_s_DefragComparer();

  /// @brief Method get_currentBakingSet, addr 0x65bd864, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> get_currentBakingSet();

  /// @brief Method get_debugMesh, addr 0x65c814c, size 0x178, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Mesh> get_debugMesh();

  /// @brief Method get_diskStreamingEnabled, addr 0x65bd794, size 0x20, virtual false, abstract: false, final false
  inline bool get_diskStreamingEnabled();

  /// @brief Method get_enabledBySRP, addr 0x65bd714, size 0x8, virtual false, abstract: false, final false
  inline bool get_enabledBySRP();

  /// @brief Method get_globalBounds, addr 0x65bd6e4, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::Bounds get_globalBounds();

  /// @brief Method get_gpuStreamingEnabled, addr 0x65bd78c, size 0x8, virtual false, abstract: false, final false
  inline bool get_gpuStreamingEnabled();

  /// @brief Method get_hasUnloadedCells, addr 0x65bd724, size 0x58, virtual false, abstract: false, final false
  inline bool get_hasUnloadedCells();

  /// @brief Method get_indexFragmentationRate, addr 0x65be9d0, size 0x28, virtual false, abstract: false, final false
  inline float_t get_indexFragmentationRate();

  /// @brief Method get_instance, addr 0x65be9f8, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::ProbeReferenceVolume* get_instance();

  /// @brief Method get_isInitialized, addr 0x65bd70c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isInitialized();

  /// @brief Method get_lightingScenario, addr 0x65bd86c, size 0x80, virtual false, abstract: false, final false
  inline ::StringW get_lightingScenario();

  /// @brief Method get_loadMaxCellsPerFrame, addr 0x65cb4f8, size 0x8, virtual false, abstract: false, final false
  inline bool get_loadMaxCellsPerFrame();

  /// @brief Method get_memoryBudget, addr 0x65bdc40, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget get_memoryBudget();

  /// @brief Method get_numberOfCellsBlendedPerFrame, addr 0x65cb570, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_numberOfCellsBlendedPerFrame();

  /// @brief Method get_numberOfCellsLoadedPerFrame, addr 0x65cb508, size 0x68, virtual false, abstract: false, final false
  inline int32_t get_numberOfCellsLoadedPerFrame();

  /// @brief Method get_otherScenario, addr 0x65bd998, size 0x80, virtual false, abstract: false, final false
  inline ::StringW get_otherScenario();

  /// @brief Method get_perSceneDataList, addr 0x65bdc48, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>* get_perSceneDataList();

  /// @brief Method get_probeOcclusion, addr 0x65bd7b4, size 0x88, virtual false, abstract: false, final false
  inline bool get_probeOcclusion();

  /// @brief Method get_probeVolumeDebug, addr 0x65c813c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProbeVolumeDebug* get_probeVolumeDebug();

  /// @brief Method get_scenarioBlendingFactor, addr 0x65bda18, size 0x7c, virtual false, abstract: false, final false
  inline float_t get_scenarioBlendingFactor();

  /// @brief Method get_shBands, addr 0x65bd85c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ProbeVolumeSHBands get_shBands();

  /// @brief Method get_skyOcclusion, addr 0x65bd2e8, size 0x88, virtual false, abstract: false, final false
  inline bool get_skyOcclusion();

  /// @brief Method get_skyOcclusionShadingDirection, addr 0x65bd370, size 0x88, virtual false, abstract: false, final false
  inline bool get_skyOcclusionShadingDirection();

  /// @brief Method get_subdivisionDebugColors, addr 0x65c8144, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> get_subdivisionDebugColors();

  /// @brief Method get_supportLightingScenarios, addr 0x65bd77c, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportLightingScenarios();

  /// @brief Method get_supportScenarioBlending, addr 0x65bd784, size 0x8, virtual false, abstract: false, final false
  inline bool get_supportScenarioBlending();

  /// @brief Method get_turnoverRate, addr 0x65cb588, size 0x8, virtual false, abstract: false, final false
  inline float_t get_turnoverRate();

  /// @brief Method get_useRenderingLayers, addr 0x65bd83c, size 0x20, virtual false, abstract: false, final false
  inline bool get_useRenderingLayers();

  /// @brief Method get_vertexSampling, addr 0x65bd71c, size 0x8, virtual false, abstract: false, final false
  inline bool get_vertexSampling();

  static inline void setStaticF__instance(::UnityEngine::Rendering::ProbeReferenceVolume* value);

  static inline void setStaticF_defaultLightingScenario(::StringW value);

  static inline void setStaticF_k_DebugPanelName(::StringW value);

  static inline void setStaticF_probeSamplingDebugData(::UnityEngine::Rendering::ProbeSamplingDebugData* value);

  static inline void setStaticF_s_BlendingComparer(::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value);

  static inline void setStaticF_s_BoundsArray(::ArrayW<::UnityEngine::Vector4, ::Array<::UnityEngine::Vector4>*> value);

  static inline void setStaticF_s_DefragComparer(::UnityEngine::Rendering::DynamicArray_1_SortComparer<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* value);

  /// @brief Method set_globalBounds, addr 0x65bd6f8, size 0x14, virtual false, abstract: false, final false
  inline void set_globalBounds(::UnityEngine::Bounds value);

  /// @brief Method set_lightingScenario, addr 0x65bd8ec, size 0x8, virtual false, abstract: false, final false
  inline void set_lightingScenario(::StringW value);

  /// @brief Method set_loadMaxCellsPerFrame, addr 0x65cb500, size 0x8, virtual false, abstract: false, final false
  inline void set_loadMaxCellsPerFrame(bool value);

  /// @brief Method set_numberOfCellsBlendedPerFrame, addr 0x65cb578, size 0x10, virtual false, abstract: false, final false
  inline void set_numberOfCellsBlendedPerFrame(int32_t value);

  /// @brief Method set_perSceneDataList, addr 0x65bdc50, size 0x8, virtual false, abstract: false, final false
  inline void set_perSceneDataList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>* value);

  /// @brief Method set_scenarioBlendingFactor, addr 0x65bda94, size 0xa0, virtual false, abstract: false, final false
  inline void set_scenarioBlendingFactor(float_t value);

  /// @brief Method set_turnoverRate, addr 0x65cb590, size 0x20, virtual false, abstract: false, final false
  inline void set_turnoverRate(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProbeReferenceVolume();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProbeReferenceVolume(ProbeReferenceVolume&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProbeReferenceVolume", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProbeReferenceVolume(ProbeReferenceVolume const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12087 };

  /// @brief Field kIndexFragmentationThreshold offset 0xffffffff size 0x4
  static constexpr float_t kIndexFragmentationThreshold{ static_cast<float_t>(0.2f) };

  /// @brief Field kMaxCellLoadedPerFrame offset 0xffffffff size 0x4
  static constexpr int32_t kMaxCellLoadedPerFrame{ static_cast<int32_t>(0xa) };

  /// @brief Field kProbesPerBatch offset 0xffffffff size 0x4
  static constexpr int32_t kProbesPerBatch{ static_cast<int32_t>(0x1ff) };

  /// @brief Field m_EmptyIndexBuffer, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_EmptyIndexBuffer;

  /// @brief Field m_IsInitialized, offset: 0x18, size: 0x1, def value: None
  bool ___m_IsInitialized;

  /// @brief Field m_SupportScenarios, offset: 0x19, size: 0x1, def value: None
  bool ___m_SupportScenarios;

  /// @brief Field m_SupportScenarioBlending, offset: 0x1a, size: 0x1, def value: None
  bool ___m_SupportScenarioBlending;

  /// @brief Field m_ForceNoDiskStreaming, offset: 0x1b, size: 0x1, def value: None
  bool ___m_ForceNoDiskStreaming;

  /// @brief Field m_SupportDiskStreaming, offset: 0x1c, size: 0x1, def value: None
  bool ___m_SupportDiskStreaming;

  /// @brief Field m_SupportGPUStreaming, offset: 0x1d, size: 0x1, def value: None
  bool ___m_SupportGPUStreaming;

  /// @brief Field m_UseStreamingAssets, offset: 0x1e, size: 0x1, def value: None
  bool ___m_UseStreamingAssets;

  /// @brief Field m_MinBrickSize, offset: 0x20, size: 0x4, def value: None
  float_t ___m_MinBrickSize;

  /// @brief Field m_MaxSubdivision, offset: 0x24, size: 0x4, def value: None
  int32_t ___m_MaxSubdivision;

  /// @brief Field m_ProbeOffset, offset: 0x28, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_ProbeOffset;

  /// @brief Field m_Pool, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeBrickPool* ___m_Pool;

  /// @brief Field m_Index, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeBrickIndex* ___m_Index;

  /// @brief Field m_CellIndices, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeGlobalIndirection* ___m_CellIndices;

  /// @brief Field m_BlendingPool, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeBrickBlendingPool* ___m_BlendingPool;

  /// @brief Field m_TmpSrcChunks, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeBrickPool_BrickChunkAlloc>* ___m_TmpSrcChunks;

  /// @brief Field m_PositionOffsets, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___m_PositionOffsets;

  /// @brief Field m_CurrGlobalBounds, offset: 0x68, size: 0x18, def value: None
  ::UnityEngine::Bounds ___m_CurrGlobalBounds;

  /// @brief Field cells, offset: 0x80, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* ___cells;

  /// @brief Field m_CellPool, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* ___m_CellPool;

  /// @brief Field m_TemporaryDataLocation, offset: 0x90, size: 0x68, def value: None
  ::UnityEngine::Rendering::ProbeBrickPool_DataLocation ___m_TemporaryDataLocation;

  /// @brief Field m_TemporaryDataLocationMemCost, offset: 0xf8, size: 0x4, def value: None
  int32_t ___m_TemporaryDataLocationMemCost;

  /// @brief Field sceneData, offset: 0x100, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeVolumeSceneData* ___sceneData;

  /// @brief Field minLoadedCellPos, offset: 0x108, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___minLoadedCellPos;

  /// @brief Field maxLoadedCellPos, offset: 0x114, size: 0xc, def value: None
  ::UnityEngine::Vector3Int ___maxLoadedCellPos;

  /// @brief Field retrieveExtraDataAction, offset: 0x120, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::Rendering::ProbeReferenceVolume_ExtraDataActionInput>* ___retrieveExtraDataAction;

  /// @brief Field checksDuringBakeAction, offset: 0x128, size: 0x8, def value: None
  ::System::Action* ___checksDuringBakeAction;

  /// @brief Field m_PendingScenesToBeLoaded, offset: 0x130, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::ValueTuple_2<::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet>, ::System::Collections::Generic::List_1<int32_t>*>>*
      ___m_PendingScenesToBeLoaded;

  /// @brief Field m_PendingScenesToBeUnloaded, offset: 0x138, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Collections::Generic::List_1<int32_t>*>* ___m_PendingScenesToBeUnloaded;

  /// @brief Field m_ActiveScenes, offset: 0x140, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___m_ActiveScenes;

  /// @brief Field m_CurrentBakingSet, offset: 0x148, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::ProbeVolumeBakingSet> ___m_CurrentBakingSet;

  /// @brief Field m_NeedLoadAsset, offset: 0x150, size: 0x1, def value: None
  bool ___m_NeedLoadAsset;

  /// @brief Field m_ProbeReferenceVolumeInit, offset: 0x151, size: 0x1, def value: None
  bool ___m_ProbeReferenceVolumeInit;

  /// @brief Field m_EnabledBySRP, offset: 0x152, size: 0x1, def value: None
  bool ___m_EnabledBySRP;

  /// @brief Field m_VertexSampling, offset: 0x153, size: 0x1, def value: None
  bool ___m_VertexSampling;

  /// @brief Field m_NeedsIndexRebuild, offset: 0x154, size: 0x1, def value: None
  bool ___m_NeedsIndexRebuild;

  /// @brief Field m_HasChangedIndex, offset: 0x155, size: 0x1, def value: None
  bool ___m_HasChangedIndex;

  /// @brief Field m_CBShaderID, offset: 0x158, size: 0x4, def value: None
  int32_t ___m_CBShaderID;

  /// @brief Field m_MemoryBudget, offset: 0x15c, size: 0x4, def value: None
  ::UnityEngine::Rendering::ProbeVolumeTextureMemoryBudget ___m_MemoryBudget;

  /// @brief Field m_BlendingMemoryBudget, offset: 0x160, size: 0x4, def value: None
  ::UnityEngine::Rendering::ProbeVolumeBlendingTextureMemoryBudget ___m_BlendingMemoryBudget;

  /// @brief Field m_SHBands, offset: 0x164, size: 0x4, def value: None
  ::UnityEngine::Rendering::ProbeVolumeSHBands ___m_SHBands;

  /// @brief Field clearAssetsOnVolumeClear, offset: 0x168, size: 0x1, def value: None
  bool ___clearAssetsOnVolumeClear;

  /// @brief Field <perSceneDataList>k__BackingField, offset: 0x170, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::ProbeVolumePerSceneData>>* ____perSceneDataList_k__BackingField;

  /// @brief Field <probeVolumeDebug>k__BackingField, offset: 0x178, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeVolumeDebug* ____probeVolumeDebug_k__BackingField;

  /// @brief Field <subdivisionDebugColors>k__BackingField, offset: 0x180, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Color, ::Array<::UnityEngine::Color>*> ____subdivisionDebugColors_k__BackingField;

  /// @brief Field m_DebugMesh, offset: 0x188, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_DebugMesh;

  /// @brief Field m_DebugItems, offset: 0x190, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Rendering::DebugUI_Widget*, ::Array<::UnityEngine::Rendering::DebugUI_Widget*>*> ___m_DebugItems;

  /// @brief Field m_DebugMaterial, offset: 0x198, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_DebugMaterial;

  /// @brief Field m_DebugProbeSamplingMesh, offset: 0x1a0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_DebugProbeSamplingMesh;

  /// @brief Field m_ProbeSamplingDebugMaterial, offset: 0x1a8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_ProbeSamplingDebugMaterial;

  /// @brief Field m_ProbeSamplingDebugMaterial02, offset: 0x1b0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_ProbeSamplingDebugMaterial02;

  /// @brief Field m_DisplayNumbersTexture, offset: 0x1b8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Texture> ___m_DisplayNumbersTexture;

  /// @brief Field m_DebugOffsetMesh, offset: 0x1c0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_DebugOffsetMesh;

  /// @brief Field m_DebugOffsetMaterial, offset: 0x1c8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_DebugOffsetMaterial;

  /// @brief Field m_DebugFragmentationMaterial, offset: 0x1d0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___m_DebugFragmentationMaterial;

  /// @brief Field m_DebugFrustumPlanes, offset: 0x1d8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Plane, ::Array<::UnityEngine::Plane>*> ___m_DebugFrustumPlanes;

  /// @brief Field m_DebugScenarioNames, offset: 0x1e0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::GUIContent*, ::Array<::UnityEngine::GUIContent*>*> ___m_DebugScenarioNames;

  /// @brief Field m_DebugScenarioValues, offset: 0x1e8, size: 0x8, def value: None
  ::ArrayW<int32_t, ::Array<int32_t>*> ___m_DebugScenarioValues;

  /// @brief Field m_DebugActiveSceneGUID, offset: 0x1f0, size: 0x8, def value: None
  ::StringW ___m_DebugActiveSceneGUID;

  /// @brief Field m_DebugActiveScenario, offset: 0x1f8, size: 0x8, def value: None
  ::StringW ___m_DebugActiveScenario;

  /// @brief Field m_DebugScenarioField, offset: 0x200, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugUI_EnumField* ___m_DebugScenarioField;

  /// @brief Field realtimeSubdivisionInfo, offset: 0x208, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::UnityEngine::Bounds, ::ArrayW<::UnityEngine::Rendering::ProbeBrickIndex_Brick, ::Array<::UnityEngine::Rendering::ProbeBrickIndex_Brick>*>>*
      ___realtimeSubdivisionInfo;

  /// @brief Field m_MaxSubdivVisualizedIsMaxAvailable, offset: 0x210, size: 0x1, def value: None
  bool ___m_MaxSubdivVisualizedIsMaxAvailable;

  /// @brief Field m_LoadMaxCellsPerFrame, offset: 0x211, size: 0x1, def value: None
  bool ___m_LoadMaxCellsPerFrame;

  /// @brief Field m_NumberOfCellsLoadedPerFrame, offset: 0x214, size: 0x4, def value: None
  int32_t ___m_NumberOfCellsLoadedPerFrame;

  /// @brief Field m_NumberOfCellsBlendedPerFrame, offset: 0x218, size: 0x4, def value: None
  int32_t ___m_NumberOfCellsBlendedPerFrame;

  /// @brief Field m_TurnoverRate, offset: 0x21c, size: 0x4, def value: None
  float_t ___m_TurnoverRate;

  /// @brief Field m_LoadedCells, offset: 0x220, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* ___m_LoadedCells;

  /// @brief Field m_ToBeLoadedCells, offset: 0x228, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* ___m_ToBeLoadedCells;

  /// @brief Field m_WorseLoadedCells, offset: 0x230, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* ___m_WorseLoadedCells;

  /// @brief Field m_BestToBeLoadedCells, offset: 0x238, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* ___m_BestToBeLoadedCells;

  /// @brief Field m_TempCellToLoadList, offset: 0x240, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* ___m_TempCellToLoadList;

  /// @brief Field m_TempCellToUnloadList, offset: 0x248, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* ___m_TempCellToUnloadList;

  /// @brief Field m_LoadedBlendingCells, offset: 0x250, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* ___m_LoadedBlendingCells;

  /// @brief Field m_ToBeLoadedBlendingCells, offset: 0x258, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* ___m_ToBeLoadedBlendingCells;

  /// @brief Field m_TempBlendingCellToLoadList, offset: 0x260, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* ___m_TempBlendingCellToLoadList;

  /// @brief Field m_TempBlendingCellToUnloadList, offset: 0x268, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* ___m_TempBlendingCellToUnloadList;

  /// @brief Field m_FrozenCameraPosition, offset: 0x270, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_FrozenCameraPosition;

  /// @brief Field m_FrozenCameraDirection, offset: 0x27c, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_FrozenCameraDirection;

  /// @brief Field m_IndexDefragmentationInProgress, offset: 0x288, size: 0x1, def value: None
  bool ___m_IndexDefragmentationInProgress;

  /// @brief Field m_DefragIndex, offset: 0x290, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeBrickIndex* ___m_DefragIndex;

  /// @brief Field m_DefragCellIndices, offset: 0x298, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeGlobalIndirection* ___m_DefragCellIndices;

  /// @brief Field m_IndexDefragCells, offset: 0x2a0, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* ___m_IndexDefragCells;

  /// @brief Field m_TempIndexDefragCells, offset: 0x2a8, size: 0x8, def value: None
  ::UnityEngine::Rendering::DynamicArray_1<::UnityEngine::Rendering::ProbeReferenceVolume_Cell*>* ___m_TempIndexDefragCells;

  /// @brief Field minStreamingScore, offset: 0x2b0, size: 0x4, def value: None
  float_t ___minStreamingScore;

  /// @brief Field maxStreamingScore, offset: 0x2b4, size: 0x4, def value: None
  float_t ___maxStreamingScore;

  /// @brief Field m_StreamingQueue, offset: 0x2b8, size: 0x8, def value: None
  ::System::Collections::Generic::Queue_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* ___m_StreamingQueue;

  /// @brief Field m_ActiveStreamingRequests, offset: 0x2c0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* ___m_ActiveStreamingRequests;

  /// @brief Field m_StreamingRequestsPool, offset: 0x2c8, size: 0x8, def value: None
  ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*>* ___m_StreamingRequestsPool;

  /// @brief Field m_DiskStreamingUseCompute, offset: 0x2d0, size: 0x1, def value: None
  bool ___m_DiskStreamingUseCompute;

  /// @brief Field m_ScratchBufferPool, offset: 0x2d8, size: 0x8, def value: None
  ::UnityEngine::Rendering::ProbeVolumeScratchBufferPool* ___m_ScratchBufferPool;

  /// @brief Field m_OnStreamingComplete, offset: 0x2e0, size: 0x8, def value: None
  ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate* ___m_OnStreamingComplete;

  /// @brief Field m_OnBlendingStreamingComplete, offset: 0x2e8, size: 0x8, def value: None
  ::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate* ___m_OnBlendingStreamingComplete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_EmptyIndexBuffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_IsInitialized) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_SupportScenarios) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_SupportScenarioBlending) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_ForceNoDiskStreaming) == 0x1b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_SupportDiskStreaming) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_SupportGPUStreaming) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_UseStreamingAssets) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_MinBrickSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_MaxSubdivision) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_ProbeOffset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_Pool) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_Index) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_CellIndices) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_BlendingPool) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_TmpSrcChunks) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_PositionOffsets) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_CurrGlobalBounds) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___cells) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_CellPool) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_TemporaryDataLocation) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_TemporaryDataLocationMemCost) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___sceneData) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___minLoadedCellPos) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___maxLoadedCellPos) == 0x114, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___retrieveExtraDataAction) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___checksDuringBakeAction) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_PendingScenesToBeLoaded) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_PendingScenesToBeUnloaded) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_ActiveScenes) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_CurrentBakingSet) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_NeedLoadAsset) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_ProbeReferenceVolumeInit) == 0x151, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_EnabledBySRP) == 0x152, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_VertexSampling) == 0x153, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_NeedsIndexRebuild) == 0x154, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_HasChangedIndex) == 0x155, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_CBShaderID) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_MemoryBudget) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_BlendingMemoryBudget) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_SHBands) == 0x164, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___clearAssetsOnVolumeClear) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ____perSceneDataList_k__BackingField) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ____probeVolumeDebug_k__BackingField) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ____subdivisionDebugColors_k__BackingField) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_DebugMesh) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_DebugItems) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_DebugMaterial) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_DebugProbeSamplingMesh) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_ProbeSamplingDebugMaterial) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_ProbeSamplingDebugMaterial02) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_DisplayNumbersTexture) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_DebugOffsetMesh) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_DebugOffsetMaterial) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_DebugFragmentationMaterial) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_DebugFrustumPlanes) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_DebugScenarioNames) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_DebugScenarioValues) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_DebugActiveSceneGUID) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_DebugActiveScenario) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_DebugScenarioField) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___realtimeSubdivisionInfo) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_MaxSubdivVisualizedIsMaxAvailable) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_LoadMaxCellsPerFrame) == 0x211, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_NumberOfCellsLoadedPerFrame) == 0x214, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_NumberOfCellsBlendedPerFrame) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_TurnoverRate) == 0x21c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_LoadedCells) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_ToBeLoadedCells) == 0x228, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_WorseLoadedCells) == 0x230, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_BestToBeLoadedCells) == 0x238, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_TempCellToLoadList) == 0x240, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_TempCellToUnloadList) == 0x248, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_LoadedBlendingCells) == 0x250, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_ToBeLoadedBlendingCells) == 0x258, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_TempBlendingCellToLoadList) == 0x260, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_TempBlendingCellToUnloadList) == 0x268, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_FrozenCameraPosition) == 0x270, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_FrozenCameraDirection) == 0x27c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_IndexDefragmentationInProgress) == 0x288, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_DefragIndex) == 0x290, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_DefragCellIndices) == 0x298, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_IndexDefragCells) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_TempIndexDefragCells) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___minStreamingScore) == 0x2b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___maxStreamingScore) == 0x2b4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_StreamingQueue) == 0x2b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_ActiveStreamingRequests) == 0x2c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_StreamingRequestsPool) == 0x2c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_DiskStreamingUseCompute) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_ScratchBufferPool) == 0x2d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_OnStreamingComplete) == 0x2e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::ProbeReferenceVolume, ___m_OnBlendingStreamingComplete) == 0x2e8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ProbeReferenceVolume, 0x2f0>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_State, "UnityEngine.Rendering", "ProbeReferenceVolume/CellStreamingRequest/State");
NEED_NO_BOX(::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CellStreamingRequest_ProbeReferenceVolume_OnStreamingCompleteDelegate*, "UnityEngine.Rendering",
                       "ProbeReferenceVolume/CellStreamingRequest/OnStreamingCompleteDelegate");
NEED_NO_BOX(::UnityEngine::Rendering::ProbeReferenceVolume);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeReferenceVolume*, "UnityEngine.Rendering", "ProbeReferenceVolume");
NEED_NO_BOX(::UnityEngine::Rendering::ProbeReferenceVolume_Cell);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeReferenceVolume_Cell*, "UnityEngine.Rendering", "ProbeReferenceVolume/Cell");
NEED_NO_BOX(::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeReferenceVolume_CellBlendingInfo*, "UnityEngine.Rendering", "ProbeReferenceVolume/CellBlendingInfo");
NEED_NO_BOX(::UnityEngine::Rendering::ProbeReferenceVolume_CellData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeReferenceVolume_CellData*, "UnityEngine.Rendering", "ProbeReferenceVolume/CellData");
NEED_NO_BOX(::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeReferenceVolume_CellDesc*, "UnityEngine.Rendering", "ProbeReferenceVolume/CellDesc");
NEED_NO_BOX(::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeReferenceVolume_CellIndexInfo*, "UnityEngine.Rendering", "ProbeReferenceVolume/CellIndexInfo");
NEED_NO_BOX(::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeReferenceVolume_CellInstancedDebugProbes*, "UnityEngine.Rendering", "ProbeReferenceVolume/CellInstancedDebugProbes");
NEED_NO_BOX(::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeReferenceVolume_CellPoolInfo*, "UnityEngine.Rendering", "ProbeReferenceVolume/CellPoolInfo");
NEED_NO_BOX(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingInfo*, "UnityEngine.Rendering", "ProbeReferenceVolume/CellStreamingInfo");
NEED_NO_BOX(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingRequest*, "UnityEngine.Rendering", "ProbeReferenceVolume/CellStreamingRequest");
NEED_NO_BOX(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBuffer*, "UnityEngine.Rendering", "ProbeReferenceVolume/CellStreamingScratchBuffer");
NEED_NO_BOX(::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeReferenceVolume_DiskStreamingRequest*, "UnityEngine.Rendering", "ProbeReferenceVolume/DiskStreamingRequest");
NEED_NO_BOX(::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeReferenceVolume_RenderFragmentationOverlayPassData*, "UnityEngine.Rendering", "ProbeReferenceVolume/RenderFragmentationOverlayPassData");
NEED_NO_BOX(::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeReferenceVolume_ShaderIDs*, "UnityEngine.Rendering", "ProbeReferenceVolume/ShaderIDs");
NEED_NO_BOX(::UnityEngine::Rendering::ProbeReferenceVolume___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeReferenceVolume___c*, "UnityEngine.Rendering", "ProbeReferenceVolume/<>c");
NEED_NO_BOX(::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeReferenceVolume___c__DisplayClass314_0*, "UnityEngine.Rendering", "ProbeReferenceVolume/<>c__DisplayClass314_0");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CellData_ProbeReferenceVolume_PerScenarioData, "UnityEngine.Rendering", "ProbeReferenceVolume/CellData/PerScenarioData");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeReferenceVolume_CellStreamingScratchBufferLayout, "UnityEngine.Rendering", "ProbeReferenceVolume/CellStreamingScratchBufferLayout");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeReferenceVolume_ExtraDataActionInput, "UnityEngine.Rendering", "ProbeReferenceVolume/ExtraDataActionInput");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeReferenceVolume_IndirectionEntryInfo, "UnityEngine.Rendering", "ProbeReferenceVolume/IndirectionEntryInfo");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeReferenceVolume_RefVolTransform, "UnityEngine.Rendering", "ProbeReferenceVolume/RefVolTransform");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeReferenceVolume_RuntimeResources, "UnityEngine.Rendering", "ProbeReferenceVolume/RuntimeResources");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ProbeReferenceVolume_Volume, "UnityEngine.Rendering", "ProbeReferenceVolume/Volume");
