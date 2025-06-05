#pragma once
// IWYU pragma private; include "GlobalNamespace/ScoreObjectiveValueFormatterSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObjectiveValueFormatterSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScoreObjectiveValueFormatterSO)
// Forward declare root types
namespace GlobalNamespace {
class ScoreObjectiveValueFormatterSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ScoreObjectiveValueFormatterSO);
// Dependencies ObjectiveValueFormatterSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: ScoreObjectiveValueFormatterSO
class CORDL_TYPE ScoreObjectiveValueFormatterSO : public ::GlobalNamespace::ObjectiveValueFormatterSO {
public:
  // Declarations
  /// @brief Method FormatValue, addr 0x26d6f1c, size 0x58, virtual true, abstract: false, final false
  inline ::StringW FormatValue(int32_t value);

  static inline ::GlobalNamespace::ScoreObjectiveValueFormatterSO* New_ctor();

  /// @brief Method .ctor, addr 0x26d6f74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ScoreObjectiveValueFormatterSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ScoreObjectiveValueFormatterSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ScoreObjectiveValueFormatterSO(ScoreObjectiveValueFormatterSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ScoreObjectiveValueFormatterSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ScoreObjectiveValueFormatterSO(ScoreObjectiveValueFormatterSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13054 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoreObjectiveValueFormatterSO, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScoreObjectiveValueFormatterSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreObjectiveValueFormatterSO*, "", "ScoreObjectiveValueFormatterSO");
