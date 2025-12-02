#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/DecalEntityChunk.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/Jobs/zzzz__TransformAccessArray_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalChunk_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DecalEntity_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DecalEntityChunk)
namespace UnityEngine::Rendering::Universal {
class DecalProjector;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class DecalEntityChunk;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::DecalEntityChunk);
// Dependencies Unity.Collections.NativeArray`1<T>, UnityEngine.Jobs.TransformAccessArray, UnityEngine.Rendering.Universal.DecalChunk, UnityEngine.Rendering.Universal.DecalEntity
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.DecalEntityChunk
class CORDL_TYPE DecalEntityChunk : public ::UnityEngine::Rendering::Universal::DecalChunk {
public:
  // Declarations
  /// @brief Field decalEntities, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get_decalEntities, put = __cordl_internal_set_decalEntities)) ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalEntity>
      decalEntities;

  /// @brief Field decalProjectors, offset 0x40, size 0x8
  __declspec(property(
      get = __cordl_internal_get_decalProjectors,
      put = __cordl_internal_set_decalProjectors)) ::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::DecalProjector>, ::Array<::UnityW<::UnityEngine::Rendering::Universal::DecalProjector>>*>
      decalProjectors;

  /// @brief Field material, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_material, put = __cordl_internal_set_material)) ::UnityW<::UnityEngine::Material> material;

  /// @brief Field transformAccessArray, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_transformAccessArray, put = __cordl_internal_set_transformAccessArray)) ::UnityEngine::Jobs::TransformAccessArray transformAccessArray;

  /// @brief Method Dispose, addr 0x663c148, size 0x6c, virtual true, abstract: false, final false
  inline void Dispose();

  static inline ::UnityEngine::Rendering::Universal::DecalEntityChunk* New_ctor();

  /// @brief Method Push, addr 0x663bfd0, size 0x10, virtual true, abstract: false, final false
  inline void Push();

  /// @brief Method RemoveAtSwapBack, addr 0x663bfe0, size 0xcc, virtual true, abstract: false, final false
  inline void RemoveAtSwapBack(int32_t entityIndex);

  /// @brief Method SetCapacity, addr 0x663c0ac, size 0x9c, virtual true, abstract: false, final false
  inline void SetCapacity(int32_t newCapacity);

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalEntity> const& __cordl_internal_get_decalEntities() const;

  constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalEntity>& __cordl_internal_get_decalEntities();

  constexpr ::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::DecalProjector>, ::Array<::UnityW<::UnityEngine::Rendering::Universal::DecalProjector>>*> const&
  __cordl_internal_get_decalProjectors() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::DecalProjector>, ::Array<::UnityW<::UnityEngine::Rendering::Universal::DecalProjector>>*>& __cordl_internal_get_decalProjectors();

  constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_material() const;

  constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_material();

  constexpr ::UnityEngine::Jobs::TransformAccessArray const& __cordl_internal_get_transformAccessArray() const;

  constexpr ::UnityEngine::Jobs::TransformAccessArray& __cordl_internal_get_transformAccessArray();

  constexpr void __cordl_internal_set_decalEntities(::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalEntity> value);

  constexpr void
  __cordl_internal_set_decalProjectors(::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::DecalProjector>, ::Array<::UnityW<::UnityEngine::Rendering::Universal::DecalProjector>>*> value);

  constexpr void __cordl_internal_set_material(::UnityW<::UnityEngine::Material> value);

  constexpr void __cordl_internal_set_transformAccessArray(::UnityEngine::Jobs::TransformAccessArray value);

  /// @brief Method .ctor, addr 0x663c1b4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DecalEntityChunk();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DecalEntityChunk", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DecalEntityChunk(DecalEntityChunk&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DecalEntityChunk", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DecalEntityChunk(DecalEntityChunk const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12667 };

  /// @brief Field material, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Material> ___material;

  /// @brief Field decalEntities, offset: 0x30, size: 0x10, def value: None
  ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::Universal::DecalEntity> ___decalEntities;

  /// @brief Field decalProjectors, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::Rendering::Universal::DecalProjector>, ::Array<::UnityW<::UnityEngine::Rendering::Universal::DecalProjector>>*> ___decalProjectors;

  /// @brief Field transformAccessArray, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::Jobs::TransformAccessArray ___transformAccessArray;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityChunk, ___material) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityChunk, ___decalEntities) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityChunk, ___decalProjectors) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::DecalEntityChunk, ___transformAccessArray) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::DecalEntityChunk, 0x50>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::DecalEntityChunk);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::DecalEntityChunk*, "UnityEngine.Rendering.Universal", "DecalEntityChunk");
