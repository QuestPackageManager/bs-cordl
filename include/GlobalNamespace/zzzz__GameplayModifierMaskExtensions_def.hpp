#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayModifierMaskExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameplayModifierMaskExtensions)
namespace GlobalNamespace {
struct GameplayModifierMask;
}
namespace GlobalNamespace {
class GameplayModifiers;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayModifierMaskExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameplayModifierMaskExtensions);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayModifierMaskExtensions
class CORDL_TYPE GameplayModifierMaskExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Contains, addr 0x2720264, size 0x10, virtual false, abstract: false, final false
  static inline bool Contains(::GlobalNamespace::GameplayModifierMask mask, ::GlobalNamespace::GameplayModifierMask other);

  /// @brief Method DifferenceFrom, addr 0x2720274, size 0x10, virtual false, abstract: false, final false
  static inline int32_t DifferenceFrom(::GlobalNamespace::GameplayModifierMask mask, ::GlobalNamespace::GameplayModifierMask other);

  /// @brief Method ToGameplayModifierMask, addr 0x2720514, size 0xb8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::GameplayModifierMask ToGameplayModifierMask(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method ToHexString, addr 0x2720284, size 0x60, virtual false, abstract: false, final false
  static inline ::StringW ToHexString(::GlobalNamespace::GameplayModifierMask mask);

  /// @brief Method ToMask, addr 0x2720510, size 0x4, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::GameplayModifierMask ToMask(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method ToModifiers, addr 0x27202e4, size 0x138, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::GameplayModifiers* ToModifiers(::GlobalNamespace::GameplayModifierMask gameplayModifierMask);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifierMaskExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifierMaskExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayModifierMaskExtensions(GameplayModifierMaskExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifierMaskExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayModifierMaskExtensions(GameplayModifierMaskExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16983 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifierMaskExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayModifierMaskExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifierMaskExtensions*, "", "GameplayModifierMaskExtensions");
