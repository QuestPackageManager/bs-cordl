#pragma once
// IWYU pragma private; include "GlobalNamespace/GameServerPlayerTableItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(GameServerPlayerTableItem)
// Forward declare root types
namespace GlobalNamespace {
class GameServerPlayerTableItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServerPlayerTableItem);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameServerPlayerTableItem
class CORDL_TYPE GameServerPlayerTableItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field isReady, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_isReady, put = __cordl_internal_set_isReady)) bool isReady;

  /// @brief Field playerName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_playerName, put = __cordl_internal_set_playerName)) ::StringW playerName;

  /// @brief Field suggestedLevel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_suggestedLevel, put = __cordl_internal_set_suggestedLevel)) ::StringW suggestedLevel;

  /// @brief Field suggestedModifiers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_suggestedModifiers, put = __cordl_internal_set_suggestedModifiers)) ::StringW suggestedModifiers;

  static inline ::GlobalNamespace::GameServerPlayerTableItem* New_ctor(::StringW playerName, ::StringW suggestedLevel, ::StringW suggestedModifiers, bool isReady);

  constexpr bool const& __cordl_internal_get_isReady() const;

  constexpr bool& __cordl_internal_get_isReady();

  constexpr ::StringW const& __cordl_internal_get_playerName() const;

  constexpr ::StringW& __cordl_internal_get_playerName();

  constexpr ::StringW const& __cordl_internal_get_suggestedLevel() const;

  constexpr ::StringW& __cordl_internal_get_suggestedLevel();

  constexpr ::StringW const& __cordl_internal_get_suggestedModifiers() const;

  constexpr ::StringW& __cordl_internal_get_suggestedModifiers();

  constexpr void __cordl_internal_set_isReady(bool value);

  constexpr void __cordl_internal_set_playerName(::StringW value);

  constexpr void __cordl_internal_set_suggestedLevel(::StringW value);

  constexpr void __cordl_internal_set_suggestedModifiers(::StringW value);

  /// @brief Method .ctor, addr 0x26dc1bc, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::StringW playerName, ::StringW suggestedLevel, ::StringW suggestedModifiers, bool isReady);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameServerPlayerTableItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameServerPlayerTableItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameServerPlayerTableItem(GameServerPlayerTableItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameServerPlayerTableItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameServerPlayerTableItem(GameServerPlayerTableItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13092 };

  /// @brief Field playerName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___playerName;

  /// @brief Field suggestedLevel, offset: 0x18, size: 0x8, def value: None
  ::StringW ___suggestedLevel;

  /// @brief Field suggestedModifiers, offset: 0x20, size: 0x8, def value: None
  ::StringW ___suggestedModifiers;

  /// @brief Field isReady, offset: 0x28, size: 0x1, def value: None
  bool ___isReady;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableItem, ___playerName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableItem, ___suggestedLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableItem, ___suggestedModifiers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerPlayerTableItem, ___isReady) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServerPlayerTableItem, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServerPlayerTableItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerPlayerTableItem*, "", "GameServerPlayerTableItem");
