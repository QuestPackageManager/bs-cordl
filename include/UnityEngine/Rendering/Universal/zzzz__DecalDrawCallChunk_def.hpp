#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalDrawCallChunk.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Mathematics/zzzz__float4x4_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalSubDrawCall_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DecalDrawCallChunk)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalDrawCallChunk;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalDrawCallChunk);
// Dependencies Unity.Collections.NativeArray`1<T>, Unity.Mathematics.float4x4, UnityEngine.Rendering.Universal.DecalChunk, UnityEngine.Rendering.Universal.DecalSubDrawCall
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalDrawCallChunk
class CORDL_TYPE DecalDrawCallChunk : public ::UnityEngine::Rendering::Universal::DecalChunk {
public:
  // Declarations
  /// @brief Field decalToWorlds, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get_decalToWorlds, put = __cordl_internal_set_decalToWorlds)) ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> decalToWorlds;

  /// @brief Field normalToDecals, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get_normalToDecals, put = __cordl_internal_set_normalToDecals)) ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> normalToDecals;

  /// @brief Field renderingLayerMasks, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get_renderingLayerMasks, put = __cordl_internal_set_renderingLayerMasks)) ::Unity::Collections::NativeArray_1<float_t> renderingLayerMasks;

  __declspec(property(get = get_subCallCount, put = set_subCallCount)) int32_t subCallCount;

  /// @brief Field subCallCounts, offset 0x68, size 0x10
  __declspec(property(get = __cordl_internal_get_subCallCounts, put = __cordl_internal_set_subCallCounts)) ::Unity::Collections::NativeArray_1<int32_t> subCallCounts;

  /// @brief Field subCalls, offset 0x58, size 0x10
  __declspec(property(get = __cordl_internal_get_subCalls, put = __cordl_internal_set_subCalls)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalSubDrawCall> subCalls;

  /// @brief Method Dispose, addr 0x66a1c40, size 0xd4, virtual true, abstract: false, final false
  inline void Dispose();

  static inline ::UnityEngine::Rendering::Universal::DecalDrawCallChunk* New_ctor();

  /// @brief Method RemoveAtSwapBack, addr 0x66a1a88, size 0xf4, virtual true, abstract: false, final false
  inline void RemoveAtSwapBack(int32_t entityIndex);

  /// @brief Method SetCapacity, addr 0x66a1b7c, size 0xc4, virtual true, abstract: false, final false
  inline void SetCapacity(int32_t newCapacity);

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> const& __cordl_internal_get_decalToWorlds() const;

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>& __cordl_internal_get_decalToWorlds();

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> const& __cordl_internal_get_normalToDecals() const;

  constexpr ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4>& __cordl_internal_get_normalToDecals();

  constexpr ::Unity::Collections::NativeArray_1<float_t> const& __cordl_internal_get_renderingLayerMasks() const;

  constexpr ::Unity::Collections::NativeArray_1<float_t>& __cordl_internal_get_renderingLayerMasks();

  constexpr ::Unity::Collections::NativeArray_1<int32_t> const& __cordl_internal_get_subCallCounts() const;

  constexpr ::Unity::Collections::NativeArray_1<int32_t>& __cordl_internal_get_subCallCounts();

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalSubDrawCall> const& __cordl_internal_get_subCalls() const;

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalSubDrawCall>& __cordl_internal_get_subCalls();

  constexpr void __cordl_internal_set_decalToWorlds(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> value);

  constexpr void __cordl_internal_set_normalToDecals(::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> value);

  constexpr void __cordl_internal_set_renderingLayerMasks(::Unity::Collections::NativeArray_1<float_t> value);

  constexpr void __cordl_internal_set_subCallCounts(::Unity::Collections::NativeArray_1<int32_t> value);

  constexpr void __cordl_internal_set_subCalls(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalSubDrawCall> value);

  /// @brief Method .ctor, addr 0x66a1d14, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_subCallCount, addr 0x66a1a7c, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_subCallCount();

  /// @brief Method set_subCallCount, addr 0x66a1a70, size 0xc, virtual false, abstract: false, final false
  inline void set_subCallCount(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalDrawCallChunk();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalDrawCallChunk", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalDrawCallChunk(DecalDrawCallChunk&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalDrawCallChunk", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalDrawCallChunk(DecalDrawCallChunk const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12664 };

  /// @brief Field decalToWorlds, offset: 0x28, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> ___decalToWorlds;

  /// @brief Field normalToDecals, offset: 0x38, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::Unity::Mathematics::float4x4> ___normalToDecals;

  /// @brief Field renderingLayerMasks, offset: 0x48, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<float_t> ___renderingLayerMasks;

  /// @brief Field subCalls, offset: 0x58, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalSubDrawCall> ___subCalls;

  /// @brief Field subCallCounts, offset: 0x68, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<int32_t> ___subCallCounts;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalDrawCallChunk, ___decalToWorlds) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalDrawCallChunk, ___normalToDecals) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalDrawCallChunk, ___renderingLayerMasks) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalDrawCallChunk, ___subCalls) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalDrawCallChunk, ___subCallCounts) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalDrawCallChunk, 0x78>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalDrawCallChunk);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalDrawCallChunk*, "UnityEngine.Rendering.Universal", "DecalDrawCallChunk");
