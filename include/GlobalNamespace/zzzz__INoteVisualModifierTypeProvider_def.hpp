#pragma once
// IWYU pragma private; include "GlobalNamespace/INoteVisualModifierTypeProvider.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(INoteVisualModifierTypeProvider)
namespace GlobalNamespace {
struct NoteVisualModifierType;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteVisualModifierTypeProvider;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::INoteVisualModifierTypeProvider);
// Type: ::INoteVisualModifierTypeProvider
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::INoteVisualModifierTypeProvider*
class CORDL_TYPE INoteVisualModifierTypeProvider {
public:
  // Declarations
  __declspec(property(get = get_noteVisualModifierType)) ::GlobalNamespace::NoteVisualModifierType noteVisualModifierType;

  /// @brief Method get_noteVisualModifierType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::NoteVisualModifierType get_noteVisualModifierType();

  // Ctor Parameters [CppParam { name: "", ty: "INoteVisualModifierTypeProvider", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  INoteVisualModifierTypeProvider(INoteVisualModifierTypeProvider&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "INoteVisualModifierTypeProvider", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  INoteVisualModifierTypeProvider(INoteVisualModifierTypeProvider const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4090 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::INoteVisualModifierTypeProvider);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::INoteVisualModifierTypeProvider*, "", "INoteVisualModifierTypeProvider");
