#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_VertexEntry.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_VertexEntry)
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_VertexEntry;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_VertexEntry);
// Type: HoudiniEngineUnity::HEU_VertexEntry
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: ::HoudiniEngineUnity::HEU_VertexEntry*
class CORDL_TYPE HEU_VertexEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field _meshKey, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__meshKey, put = __cordl_internal_set__meshKey)) int32_t _meshKey;

  /// @brief Field _normalIndex, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__normalIndex, put = __cordl_internal_set__normalIndex)) int32_t _normalIndex;

  /// @brief Field _vertexIndex, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__vertexIndex, put = __cordl_internal_set__vertexIndex)) int32_t _vertexIndex;

  static inline ::HoudiniEngineUnity::HEU_VertexEntry* New_ctor(int32_t meshKey, int32_t vertexIndex, int32_t normalIndex);

  constexpr int32_t const& __cordl_internal_get__meshKey() const;

  constexpr int32_t& __cordl_internal_get__meshKey();

  constexpr int32_t const& __cordl_internal_get__normalIndex() const;

  constexpr int32_t& __cordl_internal_get__normalIndex();

  constexpr int32_t const& __cordl_internal_get__vertexIndex() const;

  constexpr int32_t& __cordl_internal_get__vertexIndex();

  constexpr void __cordl_internal_set__meshKey(int32_t value);

  constexpr void __cordl_internal_set__normalIndex(int32_t value);

  constexpr void __cordl_internal_set__vertexIndex(int32_t value);

  /// @brief Method .ctor, addr 0x3a0e624, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(int32_t meshKey, int32_t vertexIndex, int32_t normalIndex);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_VertexEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_VertexEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_VertexEntry(HEU_VertexEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_VertexEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_VertexEntry(HEU_VertexEntry const&) = delete;

  /// @brief Field _meshKey, offset: 0x10, size: 0x4, def value: None
  int32_t ____meshKey;

  /// @brief Field _vertexIndex, offset: 0x14, size: 0x4, def value: None
  int32_t ____vertexIndex;

  /// @brief Field _normalIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ____normalIndex;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11780 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_VertexEntry, 0x20>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VertexEntry, ____meshKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VertexEntry, ____vertexIndex) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_VertexEntry, ____normalIndex) == 0x18, "Offset mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_VertexEntry);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_VertexEntry*, "HoudiniEngineUnity", "HEU_VertexEntry");
