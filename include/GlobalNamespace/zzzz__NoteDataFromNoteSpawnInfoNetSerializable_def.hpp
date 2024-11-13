#pragma once
// IWYU pragma private; include "GlobalNamespace/NoteDataFromNoteSpawnInfoNetSerializable.hpp"
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
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 94, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::NoteDataFromNoteSpawnInfoNetSerializable*
class CORDL_TYPE NoteDataFromNoteSpawnInfoNetSerializable : public ::GlobalNamespace::NoteData {
public:
  // Declarations
  static inline ::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable* New_ctor(::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfo);

  /// @brief Method .ctor, addr 0x3b520a0, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteDataFromNoteSpawnInfoNetSerializable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NoteDataFromNoteSpawnInfoNetSerializable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NoteDataFromNoteSpawnInfoNetSerializable(NoteDataFromNoteSpawnInfoNetSerializable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NoteDataFromNoteSpawnInfoNetSerializable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NoteDataFromNoteSpawnInfoNetSerializable(NoteDataFromNoteSpawnInfoNetSerializable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4485 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable, 0x60>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteDataFromNoteSpawnInfoNetSerializable*, "", "NoteDataFromNoteSpawnInfoNetSerializable");
