#pragma once
// IWYU pragma private; include "GlobalNamespace/PlaymodeOptionsExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PlaymodeOptionsExtensions)
namespace GlobalNamespace {
struct PlaymodeOptions;
}
// Forward declare root types
namespace GlobalNamespace {
class PlaymodeOptionsExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlaymodeOptionsExtensions);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlaymodeOptionsExtensions
class CORDL_TYPE PlaymodeOptionsExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsRecorderActive, addr 0x360fa80, size 0x10, virtual false, abstract: false, final false
  static inline bool IsRecorderActive(::GlobalNamespace::PlaymodeOptions playmodeOptions);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PlaymodeOptionsExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PlaymodeOptionsExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PlaymodeOptionsExtensions(PlaymodeOptionsExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PlaymodeOptionsExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PlaymodeOptionsExtensions(PlaymodeOptionsExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14837 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlaymodeOptionsExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlaymodeOptionsExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlaymodeOptionsExtensions*, "", "PlaymodeOptionsExtensions");
