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
// Type: ::ScoreObjectiveValueFormatterSO
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ScoreObjectiveValueFormatterSO*
class CORDL_TYPE ScoreObjectiveValueFormatterSO : public ::GlobalNamespace::ObjectiveValueFormatterSO {
public:
  // Declarations
  /// @brief Method FormatValue, addr 0x14d08bc, size 0x58, virtual true, abstract: false, final false
  inline ::StringW FormatValue(int32_t value);

  static inline ::GlobalNamespace::ScoreObjectiveValueFormatterSO* New_ctor();

  /// @brief Method .ctor, addr 0x14d0914, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ScoreObjectiveValueFormatterSO, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ScoreObjectiveValueFormatterSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ScoreObjectiveValueFormatterSO*, "", "ScoreObjectiveValueFormatterSO");
