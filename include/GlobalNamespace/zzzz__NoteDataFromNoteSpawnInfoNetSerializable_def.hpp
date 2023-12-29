#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
CORDL_MODULE_EXPORT(NoteDataFromNoteSpawnInfoNetSerializable)
namespace GlobalNamespace {
class NoteSpawnInfoNetSerializable;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteDataFromNoteSpawnInfoNetSerializable;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable);
// Type: ::NoteDataFromNoteSpawnInfoNetSerializable
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14972))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5244))
// CS Name: ::NoteDataFromNoteSpawnInfoNetSerializable*
class CORDL_TYPE NoteDataFromNoteSpawnInfoNetSerializable : public ::GlobalNamespace::NoteData {
public:
  // Declarations
  static inline ::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable* New_ctor(::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfo);

  /// @brief Method .ctor addr 0x20f2194 size 0x50 virtual false final false
  inline void _ctor(::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfo);

  // Ctor Parameters [CppParam { name: "", ty: "NoteDataFromNoteSpawnInfoNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteDataFromNoteSpawnInfoNetSerializable(NoteDataFromNoteSpawnInfoNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteDataFromNoteSpawnInfoNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteDataFromNoteSpawnInfoNetSerializable(NoteDataFromNoteSpawnInfoNetSerializable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteDataFromNoteSpawnInfoNetSerializable();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable, 0x58>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable*, "", "NoteDataFromNoteSpawnInfoNetSerializable");
