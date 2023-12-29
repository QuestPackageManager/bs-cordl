#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IMockPlayerScoreCalculator)
namespace GlobalNamespace {
class MockNoteData;
}
// Forward declare root types
namespace GlobalNamespace {
class IMockPlayerScoreCalculator;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IMockPlayerScoreCalculator);
// Type: ::IMockPlayerScoreCalculator
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15492))
// CS Name: ::IMockPlayerScoreCalculator*
class CORDL_TYPE IMockPlayerScoreCalculator {
public:
  // Declarations
  /// @brief Method GetScoreForNote addr 0x0 size 0xffffffffffffffff virtual true final false
  inline int32_t GetScoreForNote(::GlobalNamespace::MockNoteData* noteData);

  // Ctor Parameters [CppParam { name: "", ty: "IMockPlayerScoreCalculator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMockPlayerScoreCalculator(IMockPlayerScoreCalculator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMockPlayerScoreCalculator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMockPlayerScoreCalculator(IMockPlayerScoreCalculator const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IMockPlayerScoreCalculator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMockPlayerScoreCalculator*, "", "IMockPlayerScoreCalculator");
