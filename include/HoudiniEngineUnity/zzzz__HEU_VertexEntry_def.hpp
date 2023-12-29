#pragma once
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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9763))
// CS Name: ::HoudiniEngineUnity::HEU_VertexEntry*
class CORDL_TYPE HEU_VertexEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field _meshKey, offset 0x10, size 0x4
  __declspec(property(get = __get__meshKey, put = __set__meshKey)) int32_t _meshKey;

  /// @brief Field _vertexIndex, offset 0x14, size 0x4
  __declspec(property(get = __get__vertexIndex, put = __set__vertexIndex)) int32_t _vertexIndex;

  /// @brief Field _normalIndex, offset 0x18, size 0x4
  __declspec(property(get = __get__normalIndex, put = __set__normalIndex)) int32_t _normalIndex;

  constexpr int32_t& __get__meshKey();

  constexpr int32_t const& __get__meshKey() const;

  constexpr void __set__meshKey(int32_t value);

  constexpr int32_t& __get__vertexIndex();

  constexpr int32_t const& __get__vertexIndex() const;

  constexpr void __set__vertexIndex(int32_t value);

  constexpr int32_t& __get__normalIndex();

  constexpr int32_t const& __get__normalIndex() const;

  constexpr void __set__normalIndex(int32_t value);

  static inline ::HoudiniEngineUnity::HEU_VertexEntry* New_ctor(int32_t meshKey, int32_t vertexIndex, int32_t normalIndex);

  /// @brief Method .ctor addr 0x206b91c size 0x3c virtual false final false
  inline void _ctor(int32_t meshKey, int32_t vertexIndex, int32_t normalIndex);

  // Ctor Parameters [CppParam { name: "", ty: "HEU_VertexEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_VertexEntry(HEU_VertexEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_VertexEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_VertexEntry(HEU_VertexEntry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_VertexEntry();

public:
  /// @brief Field _meshKey, offset: 0x10, size: 0x4, def value: None
  int32_t ____meshKey;

  /// @brief Field _vertexIndex, offset: 0x14, size: 0x4, def value: None
  int32_t ____vertexIndex;

  /// @brief Field _normalIndex, offset: 0x18, size: 0x4, def value: None
  int32_t ____normalIndex;

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
