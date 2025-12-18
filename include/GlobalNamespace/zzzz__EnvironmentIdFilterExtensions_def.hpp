#pragma once
// IWYU pragma private; include "GlobalNamespace/EnvironmentIdFilterExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EnvironmentIdFilterExtensions)
namespace GlobalNamespace {
struct EnvironmentIdFilter;
}
// Forward declare root types
namespace GlobalNamespace {
class EnvironmentIdFilterExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EnvironmentIdFilterExtensions);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: EnvironmentIdFilterExtensions
class CORDL_TYPE EnvironmentIdFilterExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method ShouldExcludeMultiplayer, addr 0x36301f4, size 0x8, virtual false, abstract: false, final false
  static inline bool ShouldExcludeMultiplayer(::GlobalNamespace::EnvironmentIdFilter filter);

  /// @brief Method ShouldExcludeTutorial, addr 0x36301ec, size 0x8, virtual false, abstract: false, final false
  static inline bool ShouldExcludeTutorial(::GlobalNamespace::EnvironmentIdFilter filter);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EnvironmentIdFilterExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentIdFilterExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EnvironmentIdFilterExtensions(EnvironmentIdFilterExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EnvironmentIdFilterExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EnvironmentIdFilterExtensions(EnvironmentIdFilterExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14992 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EnvironmentIdFilterExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EnvironmentIdFilterExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EnvironmentIdFilterExtensions*, "", "EnvironmentIdFilterExtensions");
