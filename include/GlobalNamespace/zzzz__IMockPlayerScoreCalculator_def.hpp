#pragma once
// IWYU pragma private; include "GlobalNamespace/IMockPlayerScoreCalculator.hpp"
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
// Dependencies
namespace GlobalNamespace {
// Is value type: false
// CS Name: IMockPlayerScoreCalculator
class CORDL_TYPE IMockPlayerScoreCalculator {
public:
  // Declarations
  /// @brief Method GetScoreForNote, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetScoreForNote(::GlobalNamespace::MockNoteData* noteData);

  // Ctor Parameters [CppParam { name: "", ty: "IMockPlayerScoreCalculator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMockPlayerScoreCalculator(IMockPlayerScoreCalculator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18099 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IMockPlayerScoreCalculator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IMockPlayerScoreCalculator*, "", "IMockPlayerScoreCalculator");
