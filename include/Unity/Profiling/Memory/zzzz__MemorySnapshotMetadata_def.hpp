#pragma once
// IWYU pragma private; include "Unity/Profiling/Memory/MemorySnapshotMetadata.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemorySnapshotMetadata)
// Forward declare root types
namespace Unity::Profiling::Memory {
class MemorySnapshotMetadata;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Profiling::Memory::MemorySnapshotMetadata);
// Dependencies System.Object
namespace Unity::Profiling::Memory {
// Is value type: false
// CS Name: Unity.Profiling.Memory.MemorySnapshotMetadata
class CORDL_TYPE MemorySnapshotMetadata : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Data)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Data;

  __declspec(property(get = get_Description, put = set_Description)) ::StringW Description;

  /// @brief Field <Data>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__Data_k__BackingField, put = __cordl_internal_set__Data_k__BackingField)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _Data_k__BackingField;

  /// @brief Field <Description>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__Description_k__BackingField, put = __cordl_internal_set__Description_k__BackingField)) ::StringW _Description_k__BackingField;

  static inline ::Unity::Profiling::Memory::MemorySnapshotMetadata* New_ctor();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__Data_k__BackingField() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__Data_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__Description_k__BackingField() const;

  constexpr ::StringW& __cordl_internal_get__Description_k__BackingField();

  constexpr void __cordl_internal_set__Data_k__BackingField(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__Description_k__BackingField(::StringW value);

  /// @brief Method .ctor, addr 0x486161c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Data, addr 0x4861614, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Data();

  /// @brief Method get_Description, addr 0x4861604, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Description();

  /// @brief Method set_Description, addr 0x486160c, size 0x8, virtual false, abstract: false, final false
  inline void set_Description(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MemorySnapshotMetadata();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MemorySnapshotMetadata", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MemorySnapshotMetadata(MemorySnapshotMetadata&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MemorySnapshotMetadata", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MemorySnapshotMetadata(MemorySnapshotMetadata const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10579 };

  /// @brief Field <Description>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::StringW ____Description_k__BackingField;

  /// @brief Field <Data>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____Data_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Unity::Profiling::Memory::MemorySnapshotMetadata, ____Description_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Profiling::Memory::MemorySnapshotMetadata, ____Data_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Profiling::Memory::MemorySnapshotMetadata, 0x20>, "Size mismatch!");

} // namespace Unity::Profiling::Memory
NEED_NO_BOX(::Unity::Profiling::Memory::MemorySnapshotMetadata);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::Memory::MemorySnapshotMetadata*, "Unity.Profiling.Memory", "MemorySnapshotMetadata");
