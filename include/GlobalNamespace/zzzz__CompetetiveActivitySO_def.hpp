#pragma once
// IWYU pragma private; include "GlobalNamespace/CompetetiveActivitySO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PS5ActivityDataSO_def.hpp"
CORDL_MODULE_EXPORT(CompetetiveActivitySO)
// Forward declare root types
namespace GlobalNamespace {
class CompetetiveActivitySO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CompetetiveActivitySO);
// Dependencies PS5ActivityDataSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: CompetetiveActivitySO
class CORDL_TYPE CompetetiveActivitySO : public ::GlobalNamespace::PS5ActivityDataSO {
public:
  // Declarations
  static inline ::GlobalNamespace::CompetetiveActivitySO* New_ctor();

  /// @brief Method .ctor, addr 0x26eb8a0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CompetetiveActivitySO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CompetetiveActivitySO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CompetetiveActivitySO(CompetetiveActivitySO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CompetetiveActivitySO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CompetetiveActivitySO(CompetetiveActivitySO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13163 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CompetetiveActivitySO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CompetetiveActivitySO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CompetetiveActivitySO*, "", "CompetetiveActivitySO");
