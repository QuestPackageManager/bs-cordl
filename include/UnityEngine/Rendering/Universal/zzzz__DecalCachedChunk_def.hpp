#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalCachedChunk.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float2_def.hpp"
#include "Unity/Mathematics/zzzz__float3_def.hpp"
#include "Unity/Mathematics/zzzz__float4_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "Unity/Mathematics/zzzz__quaternion_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalScaleMode_def.hpp"
#include "UnityEngine/zzzz__BoundingSphere_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DecalCachedChunk)
namespace UnityEngine {
struct BoundingSphere;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalCachedChunk;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalCachedChunk);
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float2, Unity.Mathematics.float3, Unity.Mathematics.float4, Unity.Mathematics.float4x4, Unity.Mathematics.quaternion,
// UnityEngine.BoundingSphere, UnityEngine.Rendering.Universal.DecalChunk, UnityEngine.Rendering.Universal.DecalScaleMode
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalCachedChunk
class CORDL_TYPE DecalCachedChunk : public ::UnityEngine::Rendering::Universal::DecalChunk {
public:
  // Declarations
  /// @brief Field angleFades, offset 0x88, size 0x10
  __declspec(property(get = __cordl_internal_get_angleFades, put = __cordl_internal_set_angleFades)) ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> angleFades;

  /// @brief Field boundingSphereArray, offset 0x148, size 0x8
  __declspec(property(get = __cordl_internal_get_boundingSphereArray, put = __cordl_internal_set_boundingSphereArray)) ::ArrayW<::UnityEngine::BoundingSphere, ::Array<::UnityEngine::BoundingSphere>*>
      boundingSphereArray;

  /// @brief Field boundingSpheres, offset 0xd8, size 0x10
  __declspec(property(get = __cordl_internal_get_boundingSpheres, put = __cordl_internal_set_boundingSpheres)) ::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere> boundingSpheres;

  /// @brief Field decalToWorlds, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get_decalToWorlds, put = __cordl_internal_set_decalToWorlds)) ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> decalToWorlds;

  /// @brief Field dirty, offset 0x138, size 0x10
  __declspec(property(get = __cordl_internal_get_dirty, put = __cordl_internal_set_dirty)) ::Unity::Collections::NativeArray_1<bool> dirty;

  /// @brief Field drawDistances, offset 0x78, size 0x10
  __declspec(property(get = __cordl_internal_get_drawDistances, put = __cordl_internal_set_drawDistances)) ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> drawDistances;

  /// @brief Field drawOrder, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_drawOrder, put = __cordl_internal_set_drawOrder)) int32_t drawOrder;

  /// @brief Field fadeFactors, offset 0xc8, size 0x10
  __declspec(property(get = __cordl_internal_get_fadeFactors, put = __cordl_internal_set_fadeFactors)) ::Unity::Collections::NativeArray_1<float_t> fadeFactors;

  /// @brief Field isCreated, offset 0x44, size 0x1
  __declspec(property(get = __cordl_internal_get_isCreated, put = __cordl_internal_set_isCreated)) bool isCreated;

  /// @brief Field layerMasks, offset 0xa8, size 0x10
  __declspec(property(get = __cordl_internal_get_layerMasks, put = __cordl_internal_set_layerMasks)) ::Unity::Collections::NativeArray_1<int32_t> layerMasks;

  /// @brief Field normalToWorlds, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get_normalToWorlds, put = __cordl_internal_set_normalToWorlds)) ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> normalToWorlds;

  /// @brief Field passIndexDBuffer, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_passIndexDBuffer, put = __cordl_internal_set_passIndexDBuffer)) int32_t passIndexDBuffer;

  /// @brief Field passIndexEmissive, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_passIndexEmissive, put = __cordl_internal_set_passIndexEmissive)) int32_t passIndexEmissive;

  /// @brief Field passIndexGBuffer, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_passIndexGBuffer, put = __cordl_internal_set_passIndexGBuffer)) int32_t passIndexGBuffer;

  /// @brief Field passIndexScreenSpace, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_passIndexScreenSpace, put = __cordl_internal_set_passIndexScreenSpace)) int32_t passIndexScreenSpace;

  /// @brief Field positions, offset 0x108, size 0x10
  __declspec(property(get = __cordl_internal_get_positions, put = __cordl_internal_set_positions)) ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> positions;

  /// @brief Field propertyBlock, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_propertyBlock, put = __cordl_internal_set_propertyBlock)) ::UnityEngine::MaterialPropertyBlock* propertyBlock;

  /// @brief Field renderingLayerMasks, offset 0xf8, size 0x10
  __declspec(property(get = __cordl_internal_get_renderingLayerMasks, put = __cordl_internal_set_renderingLayerMasks)) ::Unity::Collections::NativeArray_1<uint32_t> renderingLayerMasks;

  /// @brief Field rotation, offset 0x118, size 0x10
  __declspec(property(get = __cordl_internal_get_rotation, put = __cordl_internal_set_rotation)) ::Unity::Collections::NativeArray_1<::Unity::Mathematics::quaternion> rotation;

  /// @brief Field scaleModes, offset 0xe8, size 0x10
  __declspec(property(get = __cordl_internal_get_scaleModes, put = __cordl_internal_set_scaleModes)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalScaleMode>
      scaleModes;

  /// @brief Field scales, offset 0x128, size 0x10
  __declspec(property(get = __cordl_internal_get_scales, put = __cordl_internal_set_scales)) ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> scales;

  /// @brief Field sceneLayerMasks, offset 0xb8, size 0x10
  __declspec(property(get = __cordl_internal_get_sceneLayerMasks, put = __cordl_internal_set_sceneLayerMasks)) ::Unity::Collections::NativeArray_1<uint64_t> sceneLayerMasks;

  /// @brief Field sizeOffsets, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get_sizeOffsets, put = __cordl_internal_set_sizeOffsets)) ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> sizeOffsets;

  /// @brief Field uvScaleBias, offset 0x98, size 0x10
  __declspec(property(get = __cordl_internal_get_uvScaleBias, put = __cordl_internal_set_uvScaleBias)) ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4> uvScaleBias;

  /// @brief Method Dispose, addr 0x66a6cf0, size 0x218, virtual true, abstract: false, final false
  inline void Dispose();

  static inline ::UnityEngine::Rendering::Universal::DecalCachedChunk* New_ctor();

  /// @brief Method RemoveAtSwapBack, addr 0x66a6770, size 0x2fc, virtual true, abstract: false, final false
  inline void RemoveAtSwapBack(int32_t entityIndex);

  /// @brief Method SetCapacity, addr 0x66a6a6c, size 0x284, virtual true, abstract: false, final false
  inline void SetCapacity(int32_t newCapacity);

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> const& __cordl_internal_get_angleFades() const;

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>& __cordl_internal_get_angleFades();

  constexpr ::ArrayW<::UnityEngine::BoundingSphere, ::Array<::UnityEngine::BoundingSphere>*> const& __cordl_internal_get_boundingSphereArray() const;

  constexpr ::ArrayW<::UnityEngine::BoundingSphere, ::Array<::UnityEngine::BoundingSphere>*>& __cordl_internal_get_boundingSphereArray();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere> const& __cordl_internal_get_boundingSpheres() const;

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere>& __cordl_internal_get_boundingSpheres();

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> const& __cordl_internal_get_decalToWorlds() const;

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>& __cordl_internal_get_decalToWorlds();

  constexpr ::Unity::Collections::NativeArray_1<bool> const& __cordl_internal_get_dirty() const;

  constexpr ::Unity::Collections::NativeArray_1<bool>& __cordl_internal_get_dirty();

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> const& __cordl_internal_get_drawDistances() const;

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2>& __cordl_internal_get_drawDistances();

  constexpr int32_t const& __cordl_internal_get_drawOrder() const;

  constexpr int32_t& __cordl_internal_get_drawOrder();

  constexpr ::Unity::Collections::NativeArray_1<float_t> const& __cordl_internal_get_fadeFactors() const;

  constexpr ::Unity::Collections::NativeArray_1<float_t>& __cordl_internal_get_fadeFactors();

  constexpr bool const& __cordl_internal_get_isCreated() const;

  constexpr bool& __cordl_internal_get_isCreated();

  constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_layerMasks() const;

  constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_layerMasks();

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> const& __cordl_internal_get_normalToWorlds() const;

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>& __cordl_internal_get_normalToWorlds();

  constexpr int32_t const& __cordl_internal_get_passIndexDBuffer() const;

  constexpr int32_t& __cordl_internal_get_passIndexDBuffer();

  constexpr int32_t const& __cordl_internal_get_passIndexEmissive() const;

  constexpr int32_t& __cordl_internal_get_passIndexEmissive();

  constexpr int32_t const& __cordl_internal_get_passIndexGBuffer() const;

  constexpr int32_t& __cordl_internal_get_passIndexGBuffer();

  constexpr int32_t const& __cordl_internal_get_passIndexScreenSpace() const;

  constexpr int32_t& __cordl_internal_get_passIndexScreenSpace();

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> const& __cordl_internal_get_positions() const;

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>& __cordl_internal_get_positions();

  constexpr ::UnityEngine::MaterialPropertyBlock* const& __cordl_internal_get_propertyBlock() const;

  constexpr ::UnityEngine::MaterialPropertyBlock*& __cordl_internal_get_propertyBlock();

  constexpr ::Unity::Collections::NativeArray_1<uint32_t> const& __cordl_internal_get_renderingLayerMasks() const;

  constexpr ::Unity::Collections::NativeArray_1<uint32_t>& __cordl_internal_get_renderingLayerMasks();

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::quaternion> const& __cordl_internal_get_rotation() const;

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::quaternion>& __cordl_internal_get_rotation();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalScaleMode> const& __cordl_internal_get_scaleModes() const;

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalScaleMode>& __cordl_internal_get_scaleModes();

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> const& __cordl_internal_get_scales() const;

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3>& __cordl_internal_get_scales();

  constexpr ::Unity::Collections::NativeArray_1<uint64_t> const& __cordl_internal_get_sceneLayerMasks() const;

  constexpr ::Unity::Collections::NativeArray_1<uint64_t>& __cordl_internal_get_sceneLayerMasks();

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> const& __cordl_internal_get_sizeOffsets() const;

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>& __cordl_internal_get_sizeOffsets();

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4> const& __cordl_internal_get_uvScaleBias() const;

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4>& __cordl_internal_get_uvScaleBias();

  constexpr void __cordl_internal_set_angleFades(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> value);

  constexpr void __cordl_internal_set_boundingSphereArray(::ArrayW<::UnityEngine::BoundingSphere, ::Array<::UnityEngine::BoundingSphere>*> value);

  constexpr void __cordl_internal_set_boundingSpheres(::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere> value);

  constexpr void __cordl_internal_set_decalToWorlds(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> value);

  constexpr void __cordl_internal_set_dirty(::Unity::Collections::NativeArray_1<bool> value);

  constexpr void __cordl_internal_set_drawDistances(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> value);

  constexpr void __cordl_internal_set_drawOrder(int32_t value);

  constexpr void __cordl_internal_set_fadeFactors(::Unity::Collections::NativeArray_1<float_t> value);

  constexpr void __cordl_internal_set_isCreated(bool value);

  constexpr void __cordl_internal_set_layerMasks(::Unity::Collections::NativeArray_1<int32_t> value);

  constexpr void __cordl_internal_set_normalToWorlds(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> value);

  constexpr void __cordl_internal_set_passIndexDBuffer(int32_t value);

  constexpr void __cordl_internal_set_passIndexEmissive(int32_t value);

  constexpr void __cordl_internal_set_passIndexGBuffer(int32_t value);

  constexpr void __cordl_internal_set_passIndexScreenSpace(int32_t value);

  constexpr void __cordl_internal_set_positions(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> value);

  constexpr void __cordl_internal_set_propertyBlock(::UnityEngine::MaterialPropertyBlock* value);

  constexpr void __cordl_internal_set_renderingLayerMasks(::Unity::Collections::NativeArray_1<uint32_t> value);

  constexpr void __cordl_internal_set_rotation(::Unity::Collections::NativeArray_1<::Unity::Mathematics::quaternion> value);

  constexpr void __cordl_internal_set_scaleModes(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalScaleMode> value);

  constexpr void __cordl_internal_set_scales(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> value);

  constexpr void __cordl_internal_set_sceneLayerMasks(::Unity::Collections::NativeArray_1<uint64_t> value);

  constexpr void __cordl_internal_set_sizeOffsets(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> value);

  constexpr void __cordl_internal_set_uvScaleBias(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4> value);

  /// @brief Method .ctor, addr 0x66a4e80, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalCachedChunk();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalCachedChunk", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalCachedChunk(DecalCachedChunk&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalCachedChunk", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalCachedChunk(DecalCachedChunk const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12676 };

  /// @brief Field propertyBlock, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::MaterialPropertyBlock* ___propertyBlock;

  /// @brief Field passIndexDBuffer, offset: 0x30, size: 0x4, def value: None
  int32_t ___passIndexDBuffer;

  /// @brief Field passIndexEmissive, offset: 0x34, size: 0x4, def value: None
  int32_t ___passIndexEmissive;

  /// @brief Field passIndexScreenSpace, offset: 0x38, size: 0x4, def value: None
  int32_t ___passIndexScreenSpace;

  /// @brief Field passIndexGBuffer, offset: 0x3c, size: 0x4, def value: None
  int32_t ___passIndexGBuffer;

  /// @brief Field drawOrder, offset: 0x40, size: 0x4, def value: None
  int32_t ___drawOrder;

  /// @brief Field isCreated, offset: 0x44, size: 0x1, def value: None
  bool ___isCreated;

  /// @brief Field decalToWorlds, offset: 0x48, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> ___decalToWorlds;

  /// @brief Field normalToWorlds, offset: 0x58, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> ___normalToWorlds;

  /// @brief Field sizeOffsets, offset: 0x68, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> ___sizeOffsets;

  /// @brief Field drawDistances, offset: 0x78, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> ___drawDistances;

  /// @brief Field angleFades, offset: 0x88, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float2> ___angleFades;

  /// @brief Field uvScaleBias, offset: 0x98, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4> ___uvScaleBias;

  /// @brief Field layerMasks, offset: 0xa8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> ___layerMasks;

  /// @brief Field sceneLayerMasks, offset: 0xb8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint64_t> ___sceneLayerMasks;

  /// @brief Field fadeFactors, offset: 0xc8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> ___fadeFactors;

  /// @brief Field boundingSpheres, offset: 0xd8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::BoundingSphere> ___boundingSpheres;

  /// @brief Field scaleModes, offset: 0xe8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalScaleMode> ___scaleModes;

  /// @brief Field renderingLayerMasks, offset: 0xf8, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<uint32_t> ___renderingLayerMasks;

  /// @brief Field positions, offset: 0x108, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> ___positions;

  /// @brief Field rotation, offset: 0x118, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::quaternion> ___rotation;

  /// @brief Field scales, offset: 0x128, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float3> ___scales;

  /// @brief Field dirty, offset: 0x138, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<bool> ___dirty;

  /// @brief Field boundingSphereArray, offset: 0x148, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::BoundingSphere, ::Array<::UnityEngine::BoundingSphere>*> ___boundingSphereArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCachedChunk, ___propertyBlock) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCachedChunk, ___passIndexDBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCachedChunk, ___passIndexEmissive) == 0x34, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCachedChunk, ___passIndexScreenSpace) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCachedChunk, ___passIndexGBuffer) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCachedChunk, ___drawOrder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCachedChunk, ___isCreated) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCachedChunk, ___decalToWorlds) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCachedChunk, ___normalToWorlds) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCachedChunk, ___sizeOffsets) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCachedChunk, ___drawDistances) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCachedChunk, ___angleFades) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCachedChunk, ___uvScaleBias) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCachedChunk, ___layerMasks) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCachedChunk, ___sceneLayerMasks) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCachedChunk, ___fadeFactors) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCachedChunk, ___boundingSpheres) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCachedChunk, ___scaleModes) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCachedChunk, ___renderingLayerMasks) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCachedChunk, ___positions) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCachedChunk, ___rotation) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCachedChunk, ___scales) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCachedChunk, ___dirty) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalCachedChunk, ___boundingSphereArray) == 0x148, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalCachedChunk, 0x150>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalCachedChunk);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalCachedChunk*, "UnityEngine.Rendering.Universal", "DecalCachedChunk");
