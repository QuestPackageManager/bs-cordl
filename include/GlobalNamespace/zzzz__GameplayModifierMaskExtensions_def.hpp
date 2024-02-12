#pragma once
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
// Type: ::GameplayModifierMaskExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14871))
// CS Name: ::GameplayModifierMaskExtensions*
class CORDL_TYPE GameplayModifierMaskExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method Contains, addr 0x1337e70, size 0x10, virtual false, abstract: false, final false
  static inline bool Contains(::GlobalNamespace::GameplayModifierMask mask, ::GlobalNamespace::GameplayModifierMask other);

  /// @brief Method DifferenceFrom, addr 0x1337e80, size 0x10, virtual false, abstract: false, final false
  static inline int32_t DifferenceFrom(::GlobalNamespace::GameplayModifierMask mask, ::GlobalNamespace::GameplayModifierMask other);

  /// @brief Method ToHexString, addr 0x1337e90, size 0x5c, virtual false, abstract: false, final false
  static inline ::StringW ToHexString(::GlobalNamespace::GameplayModifierMask mask);

  /// @brief Method ToModifiers, addr 0x1337eec, size 0x148, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::GameplayModifiers* ToModifiers(::GlobalNamespace::GameplayModifierMask gameplayModifierMask);

  /// @brief Method ToMask, addr 0x1338128, size 0xb8, virtual false, abstract: false, final false
  static inline ::GlobalNamespace::GameplayModifierMask ToMask(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifierMaskExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameplayModifierMaskExtensions(GameplayModifierMaskExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameplayModifierMaskExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameplayModifierMaskExtensions(GameplayModifierMaskExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameplayModifierMaskExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameplayModifierMaskExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameplayModifierMaskExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameplayModifierMaskExtensions*, "", "GameplayModifierMaskExtensions");
