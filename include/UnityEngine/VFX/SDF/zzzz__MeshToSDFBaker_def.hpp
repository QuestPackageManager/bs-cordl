#pragma once
// IWYU pragma private; include "UnityEngine\VFX\SDF\MeshToSDFBaker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MeshToSDFBaker)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::VFX::SDF {
class MeshToSDFBaker_Kernels;
}
namespace UnityEngine::VFX::SDF {
class MeshToSDFBaker_ShaderProperties;
}
namespace UnityEngine::VFX {
class VFXRuntimeResources;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct RenderTextureDescriptor;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector2Int;
}
namespace UnityEngine {
struct Vector3Int;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::VFX::SDF {
class MeshToSDFBaker;
}
namespace UnityEngine::VFX::SDF {
class MeshToSDFBaker_Kernels;
}
namespace UnityEngine::VFX::SDF {
class MeshToSDFBaker_ShaderProperties;
}
// Write type traits
MARK_REF_T(::UnityEngine::VFX::SDF::MeshToSDFBaker*);
MARK_REF_T(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels*);
MARK_REF_T(::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::SDF::MeshToSDFBaker*, "UnityEngine.VFX.SDF", "MeshToSDFBaker");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels*, "UnityEngine.VFX.SDF", "MeshToSDFBaker/Kernels");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties*, "UnityEngine.VFX.SDF", "MeshToSDFBaker/ShaderProperties");
// Dependencies System.Object
namespace UnityEngine::VFX::SDF {
// Is value type: false
// CS Name: UnityEngine.VFX.SDF.MeshToSDFBaker/ShaderProperties
class CORDL_TYPE MeshToSDFBaker_ShaderProperties : public ::System::Object {
public:
  // Declarations
  /// @brief Field aabbBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_aabbBuffer, put = setStaticF_aabbBuffer)) int32_t aabbBuffer;

  /// @brief Field accumCounter, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_accumCounter, put = setStaticF_accumCounter)) int32_t accumCounter;

  /// @brief Field auxBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_auxBuffer, put = setStaticF_auxBuffer)) int32_t auxBuffer;

  /// @brief Field coordFlipBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_coordFlipBuffer, put = setStaticF_coordFlipBuffer)) int32_t coordFlipBuffer;

  /// @brief Field counter, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_counter, put = setStaticF_counter)) int32_t counter;

  /// @brief Field currentAxis, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_currentAxis, put = setStaticF_currentAxis)) int32_t currentAxis;

  /// @brief Field dest, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_dest, put = setStaticF_dest)) int32_t dest;

  /// @brief Field dimX, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_dimX, put = setStaticF_dimX)) int32_t dimX;

  /// @brief Field dimY, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_dimY, put = setStaticF_dimY)) int32_t dimY;

  /// @brief Field dimZ, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_dimZ, put = setStaticF_dimZ)) int32_t dimZ;

  /// @brief Field dispatchWidth, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_dispatchWidth, put = setStaticF_dispatchWidth)) int32_t dispatchWidth;

  /// @brief Field distanceTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_distanceTexture, put = setStaticF_distanceTexture)) int32_t distanceTexture;

  /// @brief Field exclusive, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_exclusive, put = setStaticF_exclusive)) int32_t exclusive;

  /// @brief Field indexStride, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_indexStride, put = setStaticF_indexStride)) int32_t indexStride;

  /// @brief Field indicesBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_indicesBuffer, put = setStaticF_indicesBuffer)) int32_t indicesBuffer;

  /// @brief Field inputBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_inputBuffer, put = setStaticF_inputBuffer)) int32_t inputBuffer;

  /// @brief Field inputCounter, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_inputCounter, put = setStaticF_inputCounter)) int32_t inputCounter;

  /// @brief Field maxBoundsExtended, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_maxBoundsExtended, put = setStaticF_maxBoundsExtended)) int32_t maxBoundsExtended;

  /// @brief Field maxExtent, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_maxExtent, put = setStaticF_maxExtent)) int32_t maxExtent;

  /// @brief Field minBoundsExtended, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_minBoundsExtended, put = setStaticF_minBoundsExtended)) int32_t minBoundsExtended;

  /// @brief Field nTriangles, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_nTriangles, put = setStaticF_nTriangles)) int32_t nTriangles;

  /// @brief Field needNormalize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_needNormalize, put = setStaticF_needNormalize)) int32_t needNormalize;

  /// @brief Field normalizeFactor, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_normalizeFactor, put = setStaticF_normalizeFactor)) int32_t normalizeFactor;

  /// @brief Field numElem, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_numElem, put = setStaticF_numElem)) int32_t numElem;

  /// @brief Field numNeighbours, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_numNeighbours, put = setStaticF_numNeighbours)) int32_t numNeighbours;

  /// @brief Field offset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_offset, put = setStaticF_offset)) int32_t offset;

  /// @brief Field offsetRayMap, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_offsetRayMap, put = setStaticF_offsetRayMap)) int32_t offsetRayMap;

  /// @brief Field passId, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_passId, put = setStaticF_passId)) int32_t passId;

  /// @brief Field rayMap, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_rayMap, put = setStaticF_rayMap)) int32_t rayMap;

  /// @brief Field rayMapTmp, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_rayMapTmp, put = setStaticF_rayMapTmp)) int32_t rayMapTmp;

  /// @brief Field resultBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_resultBuffer, put = setStaticF_resultBuffer)) int32_t resultBuffer;

  /// @brief Field rw_rayMapTmp, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_rw_rayMapTmp, put = setStaticF_rw_rayMapTmp)) int32_t rw_rayMapTmp;

  /// @brief Field rw_trianglesUV, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_rw_trianglesUV, put = setStaticF_rw_trianglesUV)) int32_t rw_trianglesUV;

  /// @brief Field sdfOffset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_sdfOffset, put = setStaticF_sdfOffset)) int32_t sdfOffset;

  /// @brief Field signMap, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_signMap, put = setStaticF_signMap)) int32_t signMap;

  /// @brief Field signMapTmp, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_signMapTmp, put = setStaticF_signMapTmp)) int32_t signMapTmp;

  /// @brief Field size, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_size, put = setStaticF_size)) int32_t size;

  /// @brief Field src, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_src, put = setStaticF_src)) int32_t src;

  /// @brief Field threshold, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_threshold, put = setStaticF_threshold)) int32_t threshold;

  /// @brief Field triangleIDs, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_triangleIDs, put = setStaticF_triangleIDs)) int32_t triangleIDs;

  /// @brief Field trianglesUV, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_trianglesUV, put = setStaticF_trianglesUV)) int32_t trianglesUV;

  /// @brief Field upperBoundCount, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_upperBoundCount, put = setStaticF_upperBoundCount)) int32_t upperBoundCount;

  /// @brief Field vertexPositionOffset, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_vertexPositionOffset, put = setStaticF_vertexPositionOffset)) int32_t vertexPositionOffset;

  /// @brief Field vertexStride, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_vertexStride, put = setStaticF_vertexStride)) int32_t vertexStride;

  /// @brief Field verticesBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_verticesBuffer, put = setStaticF_verticesBuffer)) int32_t verticesBuffer;

  /// @brief Field verticesOutBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_verticesOutBuffer, put = setStaticF_verticesOutBuffer)) int32_t verticesOutBuffer;

  /// @brief Field voxelsBuffer, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_voxelsBuffer, put = setStaticF_voxelsBuffer)) int32_t voxelsBuffer;

  /// @brief Field voxelsTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_voxelsTexture, put = setStaticF_voxelsTexture)) int32_t voxelsTexture;

  /// @brief Field voxelsTmpTexture, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_voxelsTmpTexture, put = setStaticF_voxelsTmpTexture)) int32_t voxelsTmpTexture;

  /// @brief Field worldToClip, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_worldToClip, put = setStaticF_worldToClip)) int32_t worldToClip;

  static inline int32_t getStaticF_aabbBuffer();

  static inline int32_t getStaticF_accumCounter();

  static inline int32_t getStaticF_auxBuffer();

  static inline int32_t getStaticF_coordFlipBuffer();

  static inline int32_t getStaticF_counter();

  static inline int32_t getStaticF_currentAxis();

  static inline int32_t getStaticF_dest();

  static inline int32_t getStaticF_dimX();

  static inline int32_t getStaticF_dimY();

  static inline int32_t getStaticF_dimZ();

  static inline int32_t getStaticF_dispatchWidth();

  static inline int32_t getStaticF_distanceTexture();

  static inline int32_t getStaticF_exclusive();

  static inline int32_t getStaticF_indexStride();

  static inline int32_t getStaticF_indicesBuffer();

  static inline int32_t getStaticF_inputBuffer();

  static inline int32_t getStaticF_inputCounter();

  static inline int32_t getStaticF_maxBoundsExtended();

  static inline int32_t getStaticF_maxExtent();

  static inline int32_t getStaticF_minBoundsExtended();

  static inline int32_t getStaticF_nTriangles();

  static inline int32_t getStaticF_needNormalize();

  static inline int32_t getStaticF_normalizeFactor();

  static inline int32_t getStaticF_numElem();

  static inline int32_t getStaticF_numNeighbours();

  static inline int32_t getStaticF_offset();

  static inline int32_t getStaticF_offsetRayMap();

  static inline int32_t getStaticF_passId();

  static inline int32_t getStaticF_rayMap();

  static inline int32_t getStaticF_rayMapTmp();

  static inline int32_t getStaticF_resultBuffer();

  static inline int32_t getStaticF_rw_rayMapTmp();

  static inline int32_t getStaticF_rw_trianglesUV();

  static inline int32_t getStaticF_sdfOffset();

  static inline int32_t getStaticF_signMap();

  static inline int32_t getStaticF_signMapTmp();

  static inline int32_t getStaticF_size();

  static inline int32_t getStaticF_src();

  static inline int32_t getStaticF_threshold();

  static inline int32_t getStaticF_triangleIDs();

  static inline int32_t getStaticF_trianglesUV();

  static inline int32_t getStaticF_upperBoundCount();

  static inline int32_t getStaticF_vertexPositionOffset();

  static inline int32_t getStaticF_vertexStride();

  static inline int32_t getStaticF_verticesBuffer();

  static inline int32_t getStaticF_verticesOutBuffer();

  static inline int32_t getStaticF_voxelsBuffer();

  static inline int32_t getStaticF_voxelsTexture();

  static inline int32_t getStaticF_voxelsTmpTexture();

  static inline int32_t getStaticF_worldToClip();

  static inline void setStaticF_aabbBuffer(int32_t value);

  static inline void setStaticF_accumCounter(int32_t value);

  static inline void setStaticF_auxBuffer(int32_t value);

  static inline void setStaticF_coordFlipBuffer(int32_t value);

  static inline void setStaticF_counter(int32_t value);

  static inline void setStaticF_currentAxis(int32_t value);

  static inline void setStaticF_dest(int32_t value);

  static inline void setStaticF_dimX(int32_t value);

  static inline void setStaticF_dimY(int32_t value);

  static inline void setStaticF_dimZ(int32_t value);

  static inline void setStaticF_dispatchWidth(int32_t value);

  static inline void setStaticF_distanceTexture(int32_t value);

  static inline void setStaticF_exclusive(int32_t value);

  static inline void setStaticF_indexStride(int32_t value);

  static inline void setStaticF_indicesBuffer(int32_t value);

  static inline void setStaticF_inputBuffer(int32_t value);

  static inline void setStaticF_inputCounter(int32_t value);

  static inline void setStaticF_maxBoundsExtended(int32_t value);

  static inline void setStaticF_maxExtent(int32_t value);

  static inline void setStaticF_minBoundsExtended(int32_t value);

  static inline void setStaticF_nTriangles(int32_t value);

  static inline void setStaticF_needNormalize(int32_t value);

  static inline void setStaticF_normalizeFactor(int32_t value);

  static inline void setStaticF_numElem(int32_t value);

  static inline void setStaticF_numNeighbours(int32_t value);

  static inline void setStaticF_offset(int32_t value);

  static inline void setStaticF_offsetRayMap(int32_t value);

  static inline void setStaticF_passId(int32_t value);

  static inline void setStaticF_rayMap(int32_t value);

  static inline void setStaticF_rayMapTmp(int32_t value);

  static inline void setStaticF_resultBuffer(int32_t value);

  static inline void setStaticF_rw_rayMapTmp(int32_t value);

  static inline void setStaticF_rw_trianglesUV(int32_t value);

  static inline void setStaticF_sdfOffset(int32_t value);

  static inline void setStaticF_signMap(int32_t value);

  static inline void setStaticF_signMapTmp(int32_t value);

  static inline void setStaticF_size(int32_t value);

  static inline void setStaticF_src(int32_t value);

  static inline void setStaticF_threshold(int32_t value);

  static inline void setStaticF_triangleIDs(int32_t value);

  static inline void setStaticF_trianglesUV(int32_t value);

  static inline void setStaticF_upperBoundCount(int32_t value);

  static inline void setStaticF_vertexPositionOffset(int32_t value);

  static inline void setStaticF_vertexStride(int32_t value);

  static inline void setStaticF_verticesBuffer(int32_t value);

  static inline void setStaticF_verticesOutBuffer(int32_t value);

  static inline void setStaticF_voxelsBuffer(int32_t value);

  static inline void setStaticF_voxelsTexture(int32_t value);

  static inline void setStaticF_voxelsTmpTexture(int32_t value);

  static inline void setStaticF_worldToClip(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshToSDFBaker_ShaderProperties();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshToSDFBaker_ShaderProperties", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshToSDFBaker_ShaderProperties(MeshToSDFBaker_ShaderProperties&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshToSDFBaker_ShaderProperties", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshToSDFBaker_ShaderProperties(MeshToSDFBaker_ShaderProperties const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19972 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties) == 0x10, "Size mismatch!");

} // namespace UnityEngine::VFX::SDF
// Dependencies System.Object
namespace UnityEngine::VFX::SDF {
// Is value type: false
// CS Name: UnityEngine.VFX.SDF.MeshToSDFBaker/Kernels
class CORDL_TYPE MeshToSDFBaker_Kernels : public ::System::Object {
public:
  // Declarations
  /// @brief Field blockSums, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_blockSums, put = __cordl_internal_set_blockSums)) int32_t blockSums;

  /// @brief Field chooseDirectionTriangleOnly, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_chooseDirectionTriangleOnly, put = __cordl_internal_set_chooseDirectionTriangleOnly)) int32_t chooseDirectionTriangleOnly;

  /// @brief Field clearTexturesAndBuffers, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_clearTexturesAndBuffers, put = __cordl_internal_set_clearTexturesAndBuffers)) int32_t clearTexturesAndBuffers;

  /// @brief Field conservativeRasterization, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_conservativeRasterization, put = __cordl_internal_set_conservativeRasterization)) int32_t conservativeRasterization;

  /// @brief Field copyBuffers, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_copyBuffers, put = __cordl_internal_set_copyBuffers)) int32_t copyBuffers;

  /// @brief Field copyTextures, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_copyTextures, put = __cordl_internal_set_copyTextures)) int32_t copyTextures;

  /// @brief Field copyToBuffer, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_copyToBuffer, put = __cordl_internal_set_copyToBuffer)) int32_t copyToBuffer;

  /// @brief Field distanceTransform, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_distanceTransform, put = __cordl_internal_set_distanceTransform)) int32_t distanceTransform;

  /// @brief Field finalSum, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_finalSum, put = __cordl_internal_set_finalSum)) int32_t finalSum;

  /// @brief Field generateRayMapLocal, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_generateRayMapLocal, put = __cordl_internal_set_generateRayMapLocal)) int32_t generateRayMapLocal;

  /// @brief Field generateTrianglesUV, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_generateTrianglesUV, put = __cordl_internal_set_generateTrianglesUV)) int32_t generateTrianglesUV;

  /// @brief Field inBucketSum, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_inBucketSum, put = __cordl_internal_set_inBucketSum)) int32_t inBucketSum;

  /// @brief Field jfa, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_jfa, put = __cordl_internal_set_jfa)) int32_t jfa;

  /// @brief Field rayMapScanX, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_rayMapScanX, put = __cordl_internal_set_rayMapScanX)) int32_t rayMapScanX;

  /// @brief Field rayMapScanY, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_rayMapScanY, put = __cordl_internal_set_rayMapScanY)) int32_t rayMapScanY;

  /// @brief Field rayMapScanZ, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_rayMapScanZ, put = __cordl_internal_set_rayMapScanZ)) int32_t rayMapScanZ;

  /// @brief Field signPass6Rays, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_signPass6Rays, put = __cordl_internal_set_signPass6Rays)) int32_t signPass6Rays;

  /// @brief Field signPassNeighbors, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_signPassNeighbors, put = __cordl_internal_set_signPassNeighbors)) int32_t signPassNeighbors;

  /// @brief Field surfaceClosing, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_surfaceClosing, put = __cordl_internal_set_surfaceClosing)) int32_t surfaceClosing;

  /// @brief Field toBlockSumBuffer, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_toBlockSumBuffer, put = __cordl_internal_set_toBlockSumBuffer)) int32_t toBlockSumBuffer;

  /// @brief Field toTextureNormalized, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_toTextureNormalized, put = __cordl_internal_set_toTextureNormalized)) int32_t toTextureNormalized;

  static inline ::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels* New_ctor(::UnityEngine::ComputeShader* computeShader);

  constexpr int32_t const& __cordl_internal_get_blockSums() const;

  constexpr int32_t& __cordl_internal_get_blockSums();

  constexpr int32_t const& __cordl_internal_get_chooseDirectionTriangleOnly() const;

  constexpr int32_t& __cordl_internal_get_chooseDirectionTriangleOnly();

  constexpr int32_t const& __cordl_internal_get_clearTexturesAndBuffers() const;

  constexpr int32_t& __cordl_internal_get_clearTexturesAndBuffers();

  constexpr int32_t const& __cordl_internal_get_conservativeRasterization() const;

  constexpr int32_t& __cordl_internal_get_conservativeRasterization();

  constexpr int32_t const& __cordl_internal_get_copyBuffers() const;

  constexpr int32_t& __cordl_internal_get_copyBuffers();

  constexpr int32_t const& __cordl_internal_get_copyTextures() const;

  constexpr int32_t& __cordl_internal_get_copyTextures();

  constexpr int32_t const& __cordl_internal_get_copyToBuffer() const;

  constexpr int32_t& __cordl_internal_get_copyToBuffer();

  constexpr int32_t const& __cordl_internal_get_distanceTransform() const;

  constexpr int32_t& __cordl_internal_get_distanceTransform();

  constexpr int32_t const& __cordl_internal_get_finalSum() const;

  constexpr int32_t& __cordl_internal_get_finalSum();

  constexpr int32_t const& __cordl_internal_get_generateRayMapLocal() const;

  constexpr int32_t& __cordl_internal_get_generateRayMapLocal();

  constexpr int32_t const& __cordl_internal_get_generateTrianglesUV() const;

  constexpr int32_t& __cordl_internal_get_generateTrianglesUV();

  constexpr int32_t const& __cordl_internal_get_inBucketSum() const;

  constexpr int32_t& __cordl_internal_get_inBucketSum();

  constexpr int32_t const& __cordl_internal_get_jfa() const;

  constexpr int32_t& __cordl_internal_get_jfa();

  constexpr int32_t const& __cordl_internal_get_rayMapScanX() const;

  constexpr int32_t& __cordl_internal_get_rayMapScanX();

  constexpr int32_t const& __cordl_internal_get_rayMapScanY() const;

  constexpr int32_t& __cordl_internal_get_rayMapScanY();

  constexpr int32_t const& __cordl_internal_get_rayMapScanZ() const;

  constexpr int32_t& __cordl_internal_get_rayMapScanZ();

  constexpr int32_t const& __cordl_internal_get_signPass6Rays() const;

  constexpr int32_t& __cordl_internal_get_signPass6Rays();

  constexpr int32_t const& __cordl_internal_get_signPassNeighbors() const;

  constexpr int32_t& __cordl_internal_get_signPassNeighbors();

  constexpr int32_t const& __cordl_internal_get_surfaceClosing() const;

  constexpr int32_t& __cordl_internal_get_surfaceClosing();

  constexpr int32_t const& __cordl_internal_get_toBlockSumBuffer() const;

  constexpr int32_t& __cordl_internal_get_toBlockSumBuffer();

  constexpr int32_t const& __cordl_internal_get_toTextureNormalized() const;

  constexpr int32_t& __cordl_internal_get_toTextureNormalized();

  constexpr void __cordl_internal_set_blockSums(int32_t value);

  constexpr void __cordl_internal_set_chooseDirectionTriangleOnly(int32_t value);

  constexpr void __cordl_internal_set_clearTexturesAndBuffers(int32_t value);

  constexpr void __cordl_internal_set_conservativeRasterization(int32_t value);

  constexpr void __cordl_internal_set_copyBuffers(int32_t value);

  constexpr void __cordl_internal_set_copyTextures(int32_t value);

  constexpr void __cordl_internal_set_copyToBuffer(int32_t value);

  constexpr void __cordl_internal_set_distanceTransform(int32_t value);

  constexpr void __cordl_internal_set_finalSum(int32_t value);

  constexpr void __cordl_internal_set_generateRayMapLocal(int32_t value);

  constexpr void __cordl_internal_set_generateTrianglesUV(int32_t value);

  constexpr void __cordl_internal_set_inBucketSum(int32_t value);

  constexpr void __cordl_internal_set_jfa(int32_t value);

  constexpr void __cordl_internal_set_rayMapScanX(int32_t value);

  constexpr void __cordl_internal_set_rayMapScanY(int32_t value);

  constexpr void __cordl_internal_set_rayMapScanZ(int32_t value);

  constexpr void __cordl_internal_set_signPass6Rays(int32_t value);

  constexpr void __cordl_internal_set_signPassNeighbors(int32_t value);

  constexpr void __cordl_internal_set_surfaceClosing(int32_t value);

  constexpr void __cordl_internal_set_toBlockSumBuffer(int32_t value);

  constexpr void __cordl_internal_set_toTextureNormalized(int32_t value);

  /// @brief Method .ctor, addr 0x69da240, size 0x3f4, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ComputeShader* computeShader);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshToSDFBaker_Kernels();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshToSDFBaker_Kernels", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshToSDFBaker_Kernels(MeshToSDFBaker_Kernels&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshToSDFBaker_Kernels", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshToSDFBaker_Kernels(MeshToSDFBaker_Kernels const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19973 };

  /// @brief Field inBucketSum, offset: 0x10, size: 0x4, def value: None
  int32_t ___inBucketSum;

  /// @brief Field blockSums, offset: 0x14, size: 0x4, def value: None
  int32_t ___blockSums;

  /// @brief Field finalSum, offset: 0x18, size: 0x4, def value: None
  int32_t ___finalSum;

  /// @brief Field toTextureNormalized, offset: 0x1c, size: 0x4, def value: None
  int32_t ___toTextureNormalized;

  /// @brief Field copyTextures, offset: 0x20, size: 0x4, def value: None
  int32_t ___copyTextures;

  /// @brief Field jfa, offset: 0x24, size: 0x4, def value: None
  int32_t ___jfa;

  /// @brief Field distanceTransform, offset: 0x28, size: 0x4, def value: None
  int32_t ___distanceTransform;

  /// @brief Field copyBuffers, offset: 0x2c, size: 0x4, def value: None
  int32_t ___copyBuffers;

  /// @brief Field generateRayMapLocal, offset: 0x30, size: 0x4, def value: None
  int32_t ___generateRayMapLocal;

  /// @brief Field rayMapScanX, offset: 0x34, size: 0x4, def value: None
  int32_t ___rayMapScanX;

  /// @brief Field rayMapScanY, offset: 0x38, size: 0x4, def value: None
  int32_t ___rayMapScanY;

  /// @brief Field rayMapScanZ, offset: 0x3c, size: 0x4, def value: None
  int32_t ___rayMapScanZ;

  /// @brief Field signPass6Rays, offset: 0x40, size: 0x4, def value: None
  int32_t ___signPass6Rays;

  /// @brief Field signPassNeighbors, offset: 0x44, size: 0x4, def value: None
  int32_t ___signPassNeighbors;

  /// @brief Field toBlockSumBuffer, offset: 0x48, size: 0x4, def value: None
  int32_t ___toBlockSumBuffer;

  /// @brief Field clearTexturesAndBuffers, offset: 0x4c, size: 0x4, def value: None
  int32_t ___clearTexturesAndBuffers;

  /// @brief Field copyToBuffer, offset: 0x50, size: 0x4, def value: None
  int32_t ___copyToBuffer;

  /// @brief Field generateTrianglesUV, offset: 0x54, size: 0x4, def value: None
  int32_t ___generateTrianglesUV;

  /// @brief Field conservativeRasterization, offset: 0x58, size: 0x4, def value: None
  int32_t ___conservativeRasterization;

  /// @brief Field chooseDirectionTriangleOnly, offset: 0x5c, size: 0x4, def value: None
  int32_t ___chooseDirectionTriangleOnly;

  /// @brief Field surfaceClosing, offset: 0x60, size: 0x4, def value: None
  int32_t ___surfaceClosing;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels, ___inBucketSum) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels, ___blockSums) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels, ___finalSum) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels, ___toTextureNormalized) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels, ___copyTextures) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels, ___jfa) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels, ___distanceTransform) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels, ___copyBuffers) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels, ___generateRayMapLocal) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels, ___rayMapScanX) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels, ___rayMapScanY) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels, ___rayMapScanZ) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels, ___signPass6Rays) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels, ___signPassNeighbors) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels, ___toBlockSumBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels, ___clearTexturesAndBuffers) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels, ___copyToBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels, ___generateTrianglesUV) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels, ___conservativeRasterization) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels, ___chooseDirectionTriangleOnly) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels, ___surfaceClosing) == 0x60, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels) == 0x68, "Size mismatch!");

} // namespace UnityEngine::VFX::SDF
// Dependencies System.Object, UnityEngine.Material, UnityEngine.Matrix4x4, UnityEngine.RenderTexture, UnityEngine.Vector3
namespace UnityEngine::VFX::SDF {
// Is value type: false
// CS Name: UnityEngine.VFX.SDF.MeshToSDFBaker
class CORDL_TYPE MeshToSDFBaker : public ::System::Object {
public:
  // Declarations
  using Kernels = ::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels;

  using ShaderProperties = ::UnityEngine::VFX::SDF::MeshToSDFBaker_ShaderProperties;

  __declspec(property(get = get_SdfTexture)) ::UnityW<::UnityEngine::RenderTexture> SdfTexture;

  /// @brief Field kMaxAbsoluteGridSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kMaxAbsoluteGridSize, put = setStaticF_kMaxAbsoluteGridSize)) uint32_t kMaxAbsoluteGridSize;

  /// @brief Field kMaxRecommandedGridSize, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kMaxRecommandedGridSize, put = setStaticF_kMaxRecommandedGridSize)) uint32_t kMaxRecommandedGridSize;

  /// @brief Field kNbActualRT, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_kNbActualRT, put = setStaticF_kNbActualRT)) int32_t kNbActualRT;

  /// @brief Field m_AabbBuffer, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AabbBuffer, put = __cordl_internal_set_m_AabbBuffer)) ::UnityEngine::GraphicsBuffer* m_AabbBuffer;

  /// @brief Field m_AccumCounterBuffer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AccumCounterBuffer, put = __cordl_internal_set_m_AccumCounterBuffer)) ::UnityEngine::GraphicsBuffer* m_AccumCounterBuffer;

  /// @brief Field m_AccumSumBlocks, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AccumSumBlocks, put = __cordl_internal_set_m_AccumSumBlocks)) ::UnityEngine::GraphicsBuffer* m_AccumSumBlocks;

  /// @brief Field m_Center, offset 0x124, size 0xc
  __declspec(property(get = __cordl_internal_get_m_Center, put = __cordl_internal_set_m_Center)) ::UnityEngine::Vector3 m_Center;

  /// @brief Field m_Cmd, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Cmd, put = __cordl_internal_set_m_Cmd)) ::UnityEngine::Rendering::CommandBuffer* m_Cmd;

  /// @brief Field m_CoordFlipBuffer, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CoordFlipBuffer, put = __cordl_internal_set_m_CoordFlipBuffer)) ::UnityEngine::GraphicsBuffer* m_CoordFlipBuffer;

  /// @brief Field m_CounterBuffer, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CounterBuffer, put = __cordl_internal_set_m_CounterBuffer)) ::UnityEngine::GraphicsBuffer* m_CounterBuffer;

  /// @brief Field m_Dimensions, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Dimensions, put = __cordl_internal_set_m_Dimensions)) ::ArrayW<int32_t> m_Dimensions;

  /// @brief Field m_DistanceTexture, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DistanceTexture, put = __cordl_internal_set_m_DistanceTexture)) ::UnityW<::UnityEngine::RenderTexture> m_DistanceTexture;

  /// @brief Field m_InOutThreshold, offset 0xa4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_InOutThreshold, put = __cordl_internal_set_m_InOutThreshold)) float_t m_InOutThreshold;

  /// @brief Field m_InSumBlocksBuffer, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_InSumBlocksBuffer, put = __cordl_internal_set_m_InSumBlocksBuffer)) ::UnityEngine::GraphicsBuffer* m_InSumBlocksBuffer;

  /// @brief Field m_IndicesBuffer, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IndicesBuffer, put = __cordl_internal_set_m_IndicesBuffer)) ::UnityEngine::GraphicsBuffer* m_IndicesBuffer;

  /// @brief Field m_IsDisposed, offset 0x139, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsDisposed, put = __cordl_internal_set_m_IsDisposed)) bool m_IsDisposed;

  /// @brief Field m_Kernels, offset 0xd0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Kernels, put = __cordl_internal_set_m_Kernels)) ::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels* m_Kernels;

  /// @brief Field m_Material, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Material, put = __cordl_internal_set_m_Material)) ::ArrayW<::UnityW<::UnityEngine::Material>> m_Material;

  /// @brief Field m_MaxBoundsExtended, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MaxBoundsExtended, put = __cordl_internal_set_m_MaxBoundsExtended)) ::ArrayW<float_t> m_MaxBoundsExtended;

  /// @brief Field m_MaxExtent, offset 0x10c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_MaxExtent, put = __cordl_internal_set_m_MaxExtent)) float_t m_MaxExtent;

  /// @brief Field m_Mesh, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Mesh, put = __cordl_internal_set_m_Mesh)) ::UnityW<::UnityEngine::Mesh> m_Mesh;

  /// @brief Field m_MinBoundsExtended, offset 0x150, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MinBoundsExtended, put = __cordl_internal_set_m_MinBoundsExtended)) ::ArrayW<float_t> m_MinBoundsExtended;

  /// @brief Field m_OffsetRayMap, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_m_OffsetRayMap, put = __cordl_internal_set_m_OffsetRayMap)) ::ArrayW<int32_t> m_OffsetRayMap;

  /// @brief Field m_OwnsCommandBuffer, offset 0x138, size 0x1
  __declspec(property(get = __cordl_internal_get_m_OwnsCommandBuffer, put = __cordl_internal_set_m_OwnsCommandBuffer)) bool m_OwnsCommandBuffer;

  /// @brief Field m_ProjMat, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ProjMat, put = __cordl_internal_set_m_ProjMat)) ::ArrayW<::UnityEngine::Matrix4x4> m_ProjMat;

  /// @brief Field m_RayMapUseCounter, offset 0x160, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RayMapUseCounter, put = __cordl_internal_set_m_RayMapUseCounter)) int32_t m_RayMapUseCounter;

  /// @brief Field m_RayMaps, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RayMaps, put = __cordl_internal_set_m_RayMaps)) ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> m_RayMaps;

  /// @brief Field m_RenderTextureViews, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RenderTextureViews, put = __cordl_internal_set_m_RenderTextureViews)) ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> m_RenderTextureViews;

  /// @brief Field m_RuntimeResources, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_m_RuntimeResources, put = __cordl_internal_set_m_RuntimeResources)) ::UnityW<::UnityEngine::VFX::VFXRuntimeResources> m_RuntimeResources;

  /// @brief Field m_SdfOffset, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SdfOffset, put = __cordl_internal_set_m_SdfOffset)) float_t m_SdfOffset;

  /// @brief Field m_SignMaps, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SignMaps, put = __cordl_internal_set_m_SignMaps)) ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> m_SignMaps;

  /// @brief Field m_SignPassesCount, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_m_SignPassesCount, put = __cordl_internal_set_m_SignPassesCount)) int32_t m_SignPassesCount;

  /// @brief Field m_SizeBox, offset 0x118, size 0xc
  __declspec(property(get = __cordl_internal_get_m_SizeBox, put = __cordl_internal_set_m_SizeBox)) ::UnityEngine::Vector3 m_SizeBox;

  /// @brief Field m_SumBlocksAdditional, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SumBlocksAdditional, put = __cordl_internal_set_m_SumBlocksAdditional)) ::UnityEngine::GraphicsBuffer* m_SumBlocksAdditional;

  /// @brief Field m_SumBlocksBuffer, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_SumBlocksBuffer, put = __cordl_internal_set_m_SumBlocksBuffer)) ::UnityEngine::GraphicsBuffer* m_SumBlocksBuffer;

  /// @brief Field m_ThreadGroupSize, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_ThreadGroupSize, put = __cordl_internal_set_m_ThreadGroupSize)) int32_t m_ThreadGroupSize;

  /// @brief Field m_TmpBuffer, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TmpBuffer, put = __cordl_internal_set_m_TmpBuffer)) ::UnityEngine::GraphicsBuffer* m_TmpBuffer;

  /// @brief Field m_TrianglesInVoxels, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TrianglesInVoxels, put = __cordl_internal_set_m_TrianglesInVoxels)) ::UnityEngine::GraphicsBuffer* m_TrianglesInVoxels;

  /// @brief Field m_TrianglesUV, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TrianglesUV, put = __cordl_internal_set_m_TrianglesUV)) ::UnityEngine::GraphicsBuffer* m_TrianglesUV;

  /// @brief Field m_VertexBufferOffset, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_m_VertexBufferOffset, put = __cordl_internal_set_m_VertexBufferOffset)) int32_t m_VertexBufferOffset;

  /// @brief Field m_VerticesBuffer, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VerticesBuffer, put = __cordl_internal_set_m_VerticesBuffer)) ::UnityEngine::GraphicsBuffer* m_VerticesBuffer;

  /// @brief Field m_VerticesOutBuffer, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VerticesOutBuffer, put = __cordl_internal_set_m_VerticesOutBuffer)) ::UnityEngine::GraphicsBuffer* m_VerticesOutBuffer;

  /// @brief Field m_ViewMat, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ViewMat, put = __cordl_internal_set_m_ViewMat)) ::ArrayW<::UnityEngine::Matrix4x4> m_ViewMat;

  /// @brief Field m_WorldToClip, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_WorldToClip, put = __cordl_internal_set_m_WorldToClip)) ::ArrayW<::UnityEngine::Matrix4x4> m_WorldToClip;

  /// @brief Field m_bufferVoxel, offset 0xf8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_bufferVoxel, put = __cordl_internal_set_m_bufferVoxel)) ::UnityEngine::GraphicsBuffer* m_bufferVoxel;

  /// @brief Field m_computeShader, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_m_computeShader, put = __cordl_internal_set_m_computeShader)) ::UnityW<::UnityEngine::ComputeShader> m_computeShader;

  /// @brief Field m_maxResolution, offset 0x108, size 0x4
  __declspec(property(get = __cordl_internal_get_m_maxResolution, put = __cordl_internal_set_m_maxResolution)) int32_t m_maxResolution;

  /// @brief Field m_nStepsJFA, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_m_nStepsJFA, put = __cordl_internal_set_m_nStepsJFA)) int32_t m_nStepsJFA;

  /// @brief Field m_textureVoxel, offset 0xe0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_textureVoxel, put = __cordl_internal_set_m_textureVoxel)) ::UnityW<::UnityEngine::RenderTexture> m_textureVoxel;

  /// @brief Field m_textureVoxelBis, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_textureVoxelBis, put = __cordl_internal_set_m_textureVoxelBis)) ::UnityW<::UnityEngine::RenderTexture> m_textureVoxelBis;

  /// @brief Field nTriangles, offset 0x114, size 0x4
  __declspec(property(get = __cordl_internal_get_nTriangles, put = __cordl_internal_set_nTriangles)) int32_t nTriangles;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method BakeSDF, addr 0x69dd928, size 0x2bc, virtual false, abstract: false, final false
  inline void BakeSDF();

  /// @brief Method BuildGeometry, addr 0x69de3f0, size 0x6f8, virtual false, abstract: false, final false
  inline void BuildGeometry();

  /// @brief Method ClearRenderTexturesAndBuffers, addr 0x69ddd68, size 0x60c, virtual false, abstract: false, final false
  inline void ClearRenderTexturesAndBuffers();

  /// @brief Method ComputeOrthographicWorldToClip, addr 0x69da9dc, size 0x1dc, virtual false, abstract: false, final false
  inline ::UnityEngine::Matrix4x4 ComputeOrthographicWorldToClip(::UnityEngine::Vector3 pos, ::UnityEngine::Quaternion rot, float_t width, float_t height, float_t near, float_t far,
                                                                 ::by_ref<::UnityEngine::Matrix4x4> proj, ::by_ref<::UnityEngine::Matrix4x4> view);

  /// @brief Method CreateGraphicsBufferIfNeeded, addr 0x69d9f08, size 0xcc, virtual false, abstract: false, final false
  inline void CreateGraphicsBufferIfNeeded(::by_ref<::UnityEngine::GraphicsBuffer*> gb, int32_t length, int32_t stride);

  /// @brief Method CreateRenderTextureIfNeeded, addr 0x69d9d8c, size 0x17c, virtual false, abstract: false, final false
  inline void CreateRenderTextureIfNeeded(::by_ref<::UnityEngine::RenderTexture*> rt, ::UnityEngine::RenderTextureDescriptor rtDesc);

  /// @brief Method Dispose, addr 0x69dfbc8, size 0x70, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method Finalize, addr 0x69d9868, size 0xb4, virtual true, abstract: false, final false
  inline void Finalize();

  /// @brief Method FirstDraw, addr 0x69deae8, size 0x504, virtual false, abstract: false, final false
  inline void FirstDraw();

  /// @brief Method GenerateRayMap, addr 0x69dc528, size 0xb84, virtual false, abstract: false, final false
  inline void GenerateRayMap();

  /// @brief Method GetActualBoxSize, addr 0x69d8f30, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 GetActualBoxSize();

  /// @brief Method GetGridSize, addr 0x69d8ef0, size 0x40, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3Int GetGridSize();

  /// @brief Method GetRayMapBis, addr 0x69dd0e8, size 0x40, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> GetRayMapBis(int32_t step);

  /// @brief Method GetRayMapPrincipal, addr 0x69dd0ac, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> GetRayMapPrincipal(int32_t step);

  /// @brief Method GetSignMapBis, addr 0x69dd128, size 0x40, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> GetSignMapBis(int32_t step);

  /// @brief Method GetSignMapPrincipal, addr 0x69db7e0, size 0x3c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> GetSignMapPrincipal(int32_t step);

  /// @brief Method GetTextureVoxelBis, addr 0x69db834, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> GetTextureVoxelBis(int32_t step);

  /// @brief Method GetTextureVoxelPrincipal, addr 0x69db81c, size 0x18, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> GetTextureVoxelPrincipal(int32_t step);

  /// @brief Method GetThreadGroupsCount, addr 0x69dabcc, size 0x80, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector2Int GetThreadGroupsCount(int32_t nbThreads, int32_t threadCountPerGroup);

  /// @brief Method GetTotalVoxelCount, addr 0x69d8694, size 0x44, virtual false, abstract: false, final false
  inline int32_t GetTotalVoxelCount();

  /// @brief Method Init, addr 0x69d925c, size 0x50c, virtual false, abstract: false, final false
  inline void Init();

  /// @brief Method InitCommandBuffer, addr 0x69d85e8, size 0xac, virtual false, abstract: false, final false
  inline void InitCommandBuffer();

  /// @brief Method InitGeometryBuffers, addr 0x69de374, size 0x7c, virtual false, abstract: false, final false
  inline void InitGeometryBuffers(int32_t upperBoundCount);

  /// @brief Method InitMeshBuffers, addr 0x69ddbe4, size 0x184, virtual false, abstract: false, final false
  inline void InitMeshBuffers();

  /// @brief Method InitMeshFromList, addr 0x69d82c4, size 0x324, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Mesh> InitMeshFromList(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                                                               ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* transforms);

  /// @brief Method InitPrefixSumBuffers, addr 0x69d9fd4, size 0x26c, virtual false, abstract: false, final false
  inline void InitPrefixSumBuffers();

  /// @brief Method InitSizeBox, addr 0x69d86d8, size 0x818, virtual false, abstract: false, final false
  inline void InitSizeBox();

  /// @brief Method InitTextures, addr 0x69d9a34, size 0x358, virtual false, abstract: false, final false
  inline void InitTextures();

  /// @brief Method JFA, addr 0x69db84c, size 0xcdc, virtual false, abstract: false, final false
  inline void JFA();

  /// @brief Method LoadRuntimeResources, addr 0x69d90a4, size 0x134, virtual false, abstract: false, final false
  inline void LoadRuntimeResources();

  static inline ::UnityEngine::VFX::SDF::MeshToSDFBaker* New_ctor(::UnityEngine::Vector3 sizeBox, ::UnityEngine::Vector3 center, int32_t maxRes, ::UnityEngine::Mesh* mesh, int32_t signPassesCount,
                                                                  float_t threshold, float_t sdfOffset, ::UnityEngine::Rendering::CommandBuffer* cmd);

  static inline ::UnityEngine::VFX::SDF::MeshToSDFBaker* New_ctor(::UnityEngine::Vector3 sizeBox, ::UnityEngine::Vector3 center, int32_t maxRes,
                                                                  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                                                                  ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* transforms, int32_t signPassesCount, float_t threshold,
                                                                  float_t sdfOffset, ::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method PerformDistanceTransformWinding, addr 0x69df338, size 0x4b4, virtual false, abstract: false, final false
  inline void PerformDistanceTransformWinding();

  /// @brief Method PrefixSumCount, addr 0x69dac4c, size 0x920, virtual false, abstract: false, final false
  inline void PrefixSumCount();

  /// @brief Method Reinit, addr 0x69d991c, size 0x20, virtual false, abstract: false, final false
  inline void Reinit(::UnityEngine::Vector3 sizeBox, ::UnityEngine::Vector3 center, int32_t maxRes, ::UnityEngine::Mesh* mesh, int32_t signPassesCount, float_t threshold, float_t sdfOffset);

  /// @brief Method Reinit, addr 0x69d993c, size 0xf8, virtual false, abstract: false, final false
  inline void Reinit(::UnityEngine::Vector3 sizeBox, ::UnityEngine::Vector3 center, int32_t maxRes, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                     ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* transforms, int32_t signPassesCount, float_t threshold, float_t sdfOffset);

  /// @brief Method ReleaseBuffersAndTextures, addr 0x69df7ec, size 0x2b0, virtual false, abstract: false, final false
  inline void ReleaseBuffersAndTextures();

  /// @brief Method ReleaseGraphicsBuffer, addr 0x69dfba8, size 0x20, virtual false, abstract: false, final false
  inline void ReleaseGraphicsBuffer(::by_ref<::UnityEngine::GraphicsBuffer*> gb);

  /// @brief Method ReleaseRenderTexture, addr 0x69dfa9c, size 0x10c, virtual false, abstract: false, final false
  inline void ReleaseRenderTexture(::by_ref<::UnityEngine::RenderTexture*> rt);

  /// @brief Method SecondDraw, addr 0x69defec, size 0x34c, virtual false, abstract: false, final false
  inline void SecondDraw();

  /// @brief Method SetParameters, addr 0x69d91d8, size 0x84, virtual false, abstract: false, final false
  inline void SetParameters(::UnityEngine::Vector3 sizeBox, ::UnityEngine::Vector3 center, int32_t maxRes, int32_t signPassesCount, float_t threshold, float_t sdfOffset);

  /// @brief Method SignPass, addr 0x69dd168, size 0x7c0, virtual false, abstract: false, final false
  inline void SignPass();

  /// @brief Method SurfaceClosing, addr 0x69db56c, size 0x274, virtual false, abstract: false, final false
  inline void SurfaceClosing();

  /// @brief Method UpdateCameras, addr 0x69da634, size 0x3a8, virtual false, abstract: false, final false
  inline void UpdateCameras();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_AabbBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_AabbBuffer();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_AccumCounterBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_AccumCounterBuffer();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_AccumSumBlocks() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_AccumSumBlocks();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_Center() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_Center();

  constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get_m_Cmd() const;

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_m_Cmd();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_CoordFlipBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_CoordFlipBuffer();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_CounterBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_CounterBuffer();

  constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_Dimensions() const;

  constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_Dimensions();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_m_DistanceTexture() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_m_DistanceTexture();

  constexpr float_t const& __cordl_internal_get_m_InOutThreshold() const;

  constexpr float_t& __cordl_internal_get_m_InOutThreshold();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_InSumBlocksBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_InSumBlocksBuffer();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_IndicesBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_IndicesBuffer();

  constexpr bool const& __cordl_internal_get_m_IsDisposed() const;

  constexpr bool& __cordl_internal_get_m_IsDisposed();

  constexpr ::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels* const& __cordl_internal_get_m_Kernels() const;

  constexpr ::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels*& __cordl_internal_get_m_Kernels();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>> const& __cordl_internal_get_m_Material() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Material>>& __cordl_internal_get_m_Material();

  constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_MaxBoundsExtended() const;

  constexpr ::ArrayW<float_t>& __cordl_internal_get_m_MaxBoundsExtended();

  constexpr float_t const& __cordl_internal_get_m_MaxExtent() const;

  constexpr float_t& __cordl_internal_get_m_MaxExtent();

  constexpr ::UnityW<::UnityEngine::Mesh> const& __cordl_internal_get_m_Mesh() const;

  constexpr ::UnityW<::UnityEngine::Mesh>& __cordl_internal_get_m_Mesh();

  constexpr ::ArrayW<float_t> const& __cordl_internal_get_m_MinBoundsExtended() const;

  constexpr ::ArrayW<float_t>& __cordl_internal_get_m_MinBoundsExtended();

  constexpr ::ArrayW<int32_t> const& __cordl_internal_get_m_OffsetRayMap() const;

  constexpr ::ArrayW<int32_t>& __cordl_internal_get_m_OffsetRayMap();

  constexpr bool const& __cordl_internal_get_m_OwnsCommandBuffer() const;

  constexpr bool& __cordl_internal_get_m_OwnsCommandBuffer();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& __cordl_internal_get_m_ProjMat() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4>& __cordl_internal_get_m_ProjMat();

  constexpr int32_t const& __cordl_internal_get_m_RayMapUseCounter() const;

  constexpr int32_t& __cordl_internal_get_m_RayMapUseCounter();

  constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> const& __cordl_internal_get_m_RayMaps() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>& __cordl_internal_get_m_RayMaps();

  constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> const& __cordl_internal_get_m_RenderTextureViews() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>& __cordl_internal_get_m_RenderTextureViews();

  constexpr ::UnityW<::UnityEngine::VFX::VFXRuntimeResources> const& __cordl_internal_get_m_RuntimeResources() const;

  constexpr ::UnityW<::UnityEngine::VFX::VFXRuntimeResources>& __cordl_internal_get_m_RuntimeResources();

  constexpr float_t const& __cordl_internal_get_m_SdfOffset() const;

  constexpr float_t& __cordl_internal_get_m_SdfOffset();

  constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> const& __cordl_internal_get_m_SignMaps() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>& __cordl_internal_get_m_SignMaps();

  constexpr int32_t const& __cordl_internal_get_m_SignPassesCount() const;

  constexpr int32_t& __cordl_internal_get_m_SignPassesCount();

  constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_SizeBox() const;

  constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_SizeBox();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_SumBlocksAdditional() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_SumBlocksAdditional();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_SumBlocksBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_SumBlocksBuffer();

  constexpr int32_t const& __cordl_internal_get_m_ThreadGroupSize() const;

  constexpr int32_t& __cordl_internal_get_m_ThreadGroupSize();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_TmpBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_TmpBuffer();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_TrianglesInVoxels() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_TrianglesInVoxels();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_TrianglesUV() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_TrianglesUV();

  constexpr int32_t const& __cordl_internal_get_m_VertexBufferOffset() const;

  constexpr int32_t& __cordl_internal_get_m_VertexBufferOffset();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_VerticesBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_VerticesBuffer();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_VerticesOutBuffer() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_VerticesOutBuffer();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& __cordl_internal_get_m_ViewMat() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4>& __cordl_internal_get_m_ViewMat();

  constexpr ::ArrayW<::UnityEngine::Matrix4x4> const& __cordl_internal_get_m_WorldToClip() const;

  constexpr ::ArrayW<::UnityEngine::Matrix4x4>& __cordl_internal_get_m_WorldToClip();

  constexpr ::UnityEngine::GraphicsBuffer* const& __cordl_internal_get_m_bufferVoxel() const;

  constexpr ::UnityEngine::GraphicsBuffer*& __cordl_internal_get_m_bufferVoxel();

  constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get_m_computeShader() const;

  constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get_m_computeShader();

  constexpr int32_t const& __cordl_internal_get_m_maxResolution() const;

  constexpr int32_t& __cordl_internal_get_m_maxResolution();

  constexpr int32_t const& __cordl_internal_get_m_nStepsJFA() const;

  constexpr int32_t& __cordl_internal_get_m_nStepsJFA();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_m_textureVoxel() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_m_textureVoxel();

  constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_m_textureVoxelBis() const;

  constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_m_textureVoxelBis();

  constexpr int32_t const& __cordl_internal_get_nTriangles() const;

  constexpr int32_t& __cordl_internal_get_nTriangles();

  constexpr void __cordl_internal_set_m_AabbBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_AccumCounterBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_AccumSumBlocks(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_Center(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_Cmd(::UnityEngine::Rendering::CommandBuffer* value);

  constexpr void __cordl_internal_set_m_CoordFlipBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_CounterBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_Dimensions(::ArrayW<int32_t> value);

  constexpr void __cordl_internal_set_m_DistanceTexture(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set_m_InOutThreshold(float_t value);

  constexpr void __cordl_internal_set_m_InSumBlocksBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_IndicesBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_IsDisposed(bool value);

  constexpr void __cordl_internal_set_m_Kernels(::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels* value);

  constexpr void __cordl_internal_set_m_Material(::ArrayW<::UnityW<::UnityEngine::Material>> value);

  constexpr void __cordl_internal_set_m_MaxBoundsExtended(::ArrayW<float_t> value);

  constexpr void __cordl_internal_set_m_MaxExtent(float_t value);

  constexpr void __cordl_internal_set_m_Mesh(::UnityW<::UnityEngine::Mesh> value);

  constexpr void __cordl_internal_set_m_MinBoundsExtended(::ArrayW<float_t> value);

  constexpr void __cordl_internal_set_m_OffsetRayMap(::ArrayW<int32_t> value);

  constexpr void __cordl_internal_set_m_OwnsCommandBuffer(bool value);

  constexpr void __cordl_internal_set_m_ProjMat(::ArrayW<::UnityEngine::Matrix4x4> value);

  constexpr void __cordl_internal_set_m_RayMapUseCounter(int32_t value);

  constexpr void __cordl_internal_set_m_RayMaps(::ArrayW<::UnityW<::UnityEngine::RenderTexture>> value);

  constexpr void __cordl_internal_set_m_RenderTextureViews(::ArrayW<::UnityW<::UnityEngine::RenderTexture>> value);

  constexpr void __cordl_internal_set_m_RuntimeResources(::UnityW<::UnityEngine::VFX::VFXRuntimeResources> value);

  constexpr void __cordl_internal_set_m_SdfOffset(float_t value);

  constexpr void __cordl_internal_set_m_SignMaps(::ArrayW<::UnityW<::UnityEngine::RenderTexture>> value);

  constexpr void __cordl_internal_set_m_SignPassesCount(int32_t value);

  constexpr void __cordl_internal_set_m_SizeBox(::UnityEngine::Vector3 value);

  constexpr void __cordl_internal_set_m_SumBlocksAdditional(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_SumBlocksBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_ThreadGroupSize(int32_t value);

  constexpr void __cordl_internal_set_m_TmpBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_TrianglesInVoxels(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_TrianglesUV(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_VertexBufferOffset(int32_t value);

  constexpr void __cordl_internal_set_m_VerticesBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_VerticesOutBuffer(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_ViewMat(::ArrayW<::UnityEngine::Matrix4x4> value);

  constexpr void __cordl_internal_set_m_WorldToClip(::ArrayW<::UnityEngine::Matrix4x4> value);

  constexpr void __cordl_internal_set_m_bufferVoxel(::UnityEngine::GraphicsBuffer* value);

  constexpr void __cordl_internal_set_m_computeShader(::UnityW<::UnityEngine::ComputeShader> value);

  constexpr void __cordl_internal_set_m_maxResolution(int32_t value);

  constexpr void __cordl_internal_set_m_nStepsJFA(int32_t value);

  constexpr void __cordl_internal_set_m_textureVoxel(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set_m_textureVoxelBis(::UnityW<::UnityEngine::RenderTexture> value);

  constexpr void __cordl_internal_set_nTriangles(int32_t value);

  /// @brief Method .ctor, addr 0x69d8f40, size 0x164, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 sizeBox, ::UnityEngine::Vector3 center, int32_t maxRes, ::UnityEngine::Mesh* mesh, int32_t signPassesCount, float_t threshold, float_t sdfOffset,
                    ::UnityEngine::Rendering::CommandBuffer* cmd);

  /// @brief Method .ctor, addr 0x69d9768, size 0x100, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::Vector3 sizeBox, ::UnityEngine::Vector3 center, int32_t maxRes, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Mesh>>* meshes,
                    ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>* transforms, int32_t signPassesCount, float_t threshold, float_t sdfOffset,
                    ::UnityEngine::Rendering::CommandBuffer* cmd);

  static inline uint32_t getStaticF_kMaxAbsoluteGridSize();

  static inline uint32_t getStaticF_kMaxRecommandedGridSize();

  static inline int32_t getStaticF_kNbActualRT();

  /// @brief Method get_SdfTexture, addr 0x69d82bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::RenderTexture> get_SdfTexture();

  /// @brief Method iDivUp, addr 0x69dabb8, size 0x14, virtual false, abstract: false, final false
  inline int32_t iDivUp(int32_t a, int32_t b);

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  static inline void setStaticF_kMaxAbsoluteGridSize(uint32_t value);

  static inline void setStaticF_kMaxRecommandedGridSize(uint32_t value);

  static inline void setStaticF_kNbActualRT(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MeshToSDFBaker();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MeshToSDFBaker", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MeshToSDFBaker(MeshToSDFBaker&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MeshToSDFBaker", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MeshToSDFBaker(MeshToSDFBaker const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19974 };

  /// @brief Field m_RayMaps, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> ___m_RayMaps;

  /// @brief Field m_SignMaps, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> ___m_SignMaps;

  /// @brief Field m_RenderTextureViews, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> ___m_RenderTextureViews;

  /// @brief Field m_CounterBuffer, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_CounterBuffer;

  /// @brief Field m_AccumCounterBuffer, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_AccumCounterBuffer;

  /// @brief Field m_TrianglesInVoxels, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_TrianglesInVoxels;

  /// @brief Field m_TrianglesUV, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_TrianglesUV;

  /// @brief Field m_TmpBuffer, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_TmpBuffer;

  /// @brief Field m_AccumSumBlocks, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_AccumSumBlocks;

  /// @brief Field m_SumBlocksBuffer, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_SumBlocksBuffer;

  /// @brief Field m_InSumBlocksBuffer, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_InSumBlocksBuffer;

  /// @brief Field m_SumBlocksAdditional, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_SumBlocksAdditional;

  /// @brief Field m_IndicesBuffer, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_IndicesBuffer;

  /// @brief Field m_VerticesBuffer, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_VerticesBuffer;

  /// @brief Field m_VerticesOutBuffer, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_VerticesOutBuffer;

  /// @brief Field m_CoordFlipBuffer, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_CoordFlipBuffer;

  /// @brief Field m_AabbBuffer, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_AabbBuffer;

  /// @brief Field m_VertexBufferOffset, offset: 0x98, size: 0x4, def value: None
  int32_t ___m_VertexBufferOffset;

  /// @brief Field m_ThreadGroupSize, offset: 0x9c, size: 0x4, def value: None
  int32_t ___m_ThreadGroupSize;

  /// @brief Field m_SignPassesCount, offset: 0xa0, size: 0x4, def value: None
  int32_t ___m_SignPassesCount;

  /// @brief Field m_InOutThreshold, offset: 0xa4, size: 0x4, def value: None
  float_t ___m_InOutThreshold;

  /// @brief Field m_Material, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Material>> ___m_Material;

  /// @brief Field m_WorldToClip, offset: 0xb0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4> ___m_WorldToClip;

  /// @brief Field m_ProjMat, offset: 0xb8, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4> ___m_ProjMat;

  /// @brief Field m_ViewMat, offset: 0xc0, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::Matrix4x4> ___m_ViewMat;

  /// @brief Field m_nStepsJFA, offset: 0xc8, size: 0x4, def value: None
  int32_t ___m_nStepsJFA;

  /// @brief Field m_Kernels, offset: 0xd0, size: 0x8, def value: None
  ::UnityEngine::VFX::SDF::MeshToSDFBaker_Kernels* ___m_Kernels;

  /// @brief Field m_Mesh, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Mesh> ___m_Mesh;

  /// @brief Field m_textureVoxel, offset: 0xe0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ___m_textureVoxel;

  /// @brief Field m_textureVoxelBis, offset: 0xe8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ___m_textureVoxelBis;

  /// @brief Field m_DistanceTexture, offset: 0xf0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::RenderTexture> ___m_DistanceTexture;

  /// @brief Field m_bufferVoxel, offset: 0xf8, size: 0x8, def value: None
  ::UnityEngine::GraphicsBuffer* ___m_bufferVoxel;

  /// @brief Field m_computeShader, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::ComputeShader> ___m_computeShader;

  /// @brief Field m_maxResolution, offset: 0x108, size: 0x4, def value: None
  int32_t ___m_maxResolution;

  /// @brief Field m_MaxExtent, offset: 0x10c, size: 0x4, def value: None
  float_t ___m_MaxExtent;

  /// @brief Field m_SdfOffset, offset: 0x110, size: 0x4, def value: None
  float_t ___m_SdfOffset;

  /// @brief Field nTriangles, offset: 0x114, size: 0x4, def value: None
  int32_t ___nTriangles;

  /// @brief Field m_SizeBox, offset: 0x118, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_SizeBox;

  /// @brief Field m_Center, offset: 0x124, size: 0xc, def value: None
  ::UnityEngine::Vector3 ___m_Center;

  /// @brief Field m_Cmd, offset: 0x130, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ___m_Cmd;

  /// @brief Field m_OwnsCommandBuffer, offset: 0x138, size: 0x1, def value: None
  bool ___m_OwnsCommandBuffer;

  /// @brief Field m_IsDisposed, offset: 0x139, size: 0x1, def value: None
  bool ___m_IsDisposed;

  /// @brief Field m_Dimensions, offset: 0x140, size: 0x8, def value: None
  ::ArrayW<int32_t> ___m_Dimensions;

  /// @brief Field m_OffsetRayMap, offset: 0x148, size: 0x8, def value: None
  ::ArrayW<int32_t> ___m_OffsetRayMap;

  /// @brief Field m_MinBoundsExtended, offset: 0x150, size: 0x8, def value: None
  ::ArrayW<float_t> ___m_MinBoundsExtended;

  /// @brief Field m_MaxBoundsExtended, offset: 0x158, size: 0x8, def value: None
  ::ArrayW<float_t> ___m_MaxBoundsExtended;

  /// @brief Field m_RayMapUseCounter, offset: 0x160, size: 0x4, def value: None
  int32_t ___m_RayMapUseCounter;

  /// @brief Field m_RuntimeResources, offset: 0x168, size: 0x8, def value: None
  ::UnityW<::UnityEngine::VFX::VFXRuntimeResources> ___m_RuntimeResources;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_RayMaps) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_SignMaps) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_RenderTextureViews) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_CounterBuffer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_AccumCounterBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_TrianglesInVoxels) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_TrianglesUV) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_TmpBuffer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_AccumSumBlocks) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_SumBlocksBuffer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_InSumBlocksBuffer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_SumBlocksAdditional) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_IndicesBuffer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_VerticesBuffer) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_VerticesOutBuffer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_CoordFlipBuffer) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_AabbBuffer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_VertexBufferOffset) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_ThreadGroupSize) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_SignPassesCount) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_InOutThreshold) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_Material) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_WorldToClip) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_ProjMat) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_ViewMat) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_nStepsJFA) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_Kernels) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_Mesh) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_textureVoxel) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_textureVoxelBis) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_DistanceTexture) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_bufferVoxel) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_computeShader) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_maxResolution) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_MaxExtent) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_SdfOffset) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___nTriangles) == 0x114, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_SizeBox) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_Center) == 0x124, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_Cmd) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_OwnsCommandBuffer) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_IsDisposed) == 0x139, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_Dimensions) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_OffsetRayMap) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_MinBoundsExtended) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_MaxBoundsExtended) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_RayMapUseCounter) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::SDF::MeshToSDFBaker, ___m_RuntimeResources) == 0x168, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::SDF::MeshToSDFBaker) == 0x170, "Size mismatch!");

} // namespace UnityEngine::VFX::SDF
