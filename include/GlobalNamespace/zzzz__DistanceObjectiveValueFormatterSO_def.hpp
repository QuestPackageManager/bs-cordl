#pragma once
// IWYU pragma private; include "GlobalNamespace/DistanceObjectiveValueFormatterSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ObjectiveValueFormatterSO_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DistanceObjectiveValueFormatterSO)
// Forward declare root types
namespace GlobalNamespace {
class DistanceObjectiveValueFormatterSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DistanceObjectiveValueFormatterSO);
// Dependencies ObjectiveValueFormatterSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: DistanceObjectiveValueFormatterSO
class CORDL_TYPE DistanceObjectiveValueFormatterSO : public ::GlobalNamespace::ObjectiveValueFormatterSO {
public:
  // Declarations
  /// @brief Method FormatValue, addr 0x26d668c, size 0x80, virtual true, abstract: false, final false
  inline ::StringW FormatValue(int32_t value);

  static inline ::GlobalNamespace::DistanceObjectiveValueFormatterSO* New_ctor();

  /// @brief Method .ctor, addr 0x26d670c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DistanceObjectiveValueFormatterSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DistanceObjectiveValueFormatterSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DistanceObjectiveValueFormatterSO(DistanceObjectiveValueFormatterSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DistanceObjectiveValueFormatterSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DistanceObjectiveValueFormatterSO(DistanceObjectiveValueFormatterSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13042 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DistanceObjectiveValueFormatterSO, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DistanceObjectiveValueFormatterSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DistanceObjectiveValueFormatterSO*, "", "DistanceObjectiveValueFormatterSO");
