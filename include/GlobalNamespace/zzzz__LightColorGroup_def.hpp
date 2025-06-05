#pragma once
// IWYU pragma private; include "GlobalNamespace/LightColorGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IEditTimeValidated_def.hpp"
#include "GlobalNamespace/zzzz__LightGroupSubsystem_def.hpp"
CORDL_MODULE_EXPORT(LightColorGroup)
// Forward declare root types
namespace GlobalNamespace {
class LightColorGroup;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LightColorGroup);
// Dependencies IEditTimeValidated, LightGroupSubsystem
namespace GlobalNamespace {
// Is value type: false
// CS Name: LightColorGroup
class CORDL_TYPE LightColorGroup : public ::GlobalNamespace::LightGroupSubsystem {
public:
  // Declarations
  /// @brief Convert operator to "::GlobalNamespace::IEditTimeValidated"
  constexpr operator ::GlobalNamespace::IEditTimeValidated*() noexcept;

  static inline ::GlobalNamespace::LightColorGroup* New_ctor();

  /// @brief Method .ctor, addr 0x3b90394, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::GlobalNamespace::IEditTimeValidated"
  constexpr ::GlobalNamespace::IEditTimeValidated* i___GlobalNamespace__IEditTimeValidated() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LightColorGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LightColorGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LightColorGroup(LightColorGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LightColorGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LightColorGroup(LightColorGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4288 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LightColorGroup, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LightColorGroup);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LightColorGroup*, "", "LightColorGroup");
