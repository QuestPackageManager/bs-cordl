#pragma once
// IWYU pragma private; include "GlobalNamespace/GameplayTypeExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GameplayTypeExtensions)
namespace GlobalNamespace {
struct GameplayType;
}
// Forward declare root types
namespace GlobalNamespace {
class GameplayTypeExtensions;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameplayTypeExtensions*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameplayTypeExtensions*, "", "GameplayTypeExtensions");
// [Extension]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameplayTypeExtensions
class CORDL_TYPE GameplayTypeExtensions : public ::System::Object {
public:
  // Declarations
  /// [Extension]
  /// @brief Method CompoundIdPartName, addr 0x39d9c74, size 0x44, virtual false, abstract: false, final false
  static inline ::StringW CompoundIdPartName(::GlobalNamespace::GameplayType gameplayType);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayTypeExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameplayTypeExtensions", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayTypeExtensions(GameplayTypeExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayTypeExtensions", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayTypeExtensions(GameplayTypeExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14456 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::GameplayTypeExtensions) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
