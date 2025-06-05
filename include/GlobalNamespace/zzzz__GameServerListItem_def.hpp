#pragma once
// IWYU pragma private; include "GlobalNamespace/GameServerListItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GameServerListItem)
// Forward declare root types
namespace GlobalNamespace {
class GameServerListItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServerListItem);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameServerListItem
class CORDL_TYPE GameServerListItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field capacity, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_capacity, put = __cordl_internal_set_capacity)) int32_t capacity;

  /// @brief Field occupied, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_occupied, put = __cordl_internal_set_occupied)) int32_t occupied;

  /// @brief Field password, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_password, put = __cordl_internal_set_password)) bool password;

  /// @brief Field serverName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_serverName, put = __cordl_internal_set_serverName)) ::StringW serverName;

  static inline ::GlobalNamespace::GameServerListItem* New_ctor(::StringW serverName, int32_t capacity, int32_t occupied, bool password);

  constexpr int32_t const& __cordl_internal_get_capacity() const;

  constexpr int32_t& __cordl_internal_get_capacity();

  constexpr int32_t const& __cordl_internal_get_occupied() const;

  constexpr int32_t& __cordl_internal_get_occupied();

  constexpr bool const& __cordl_internal_get_password() const;

  constexpr bool& __cordl_internal_get_password();

  constexpr ::StringW const& __cordl_internal_get_serverName() const;

  constexpr ::StringW& __cordl_internal_get_serverName();

  constexpr void __cordl_internal_set_capacity(int32_t value);

  constexpr void __cordl_internal_set_occupied(int32_t value);

  constexpr void __cordl_internal_set_password(bool value);

  constexpr void __cordl_internal_set_serverName(::StringW value);

  /// @brief Method .ctor, addr 0x26dc52c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::StringW serverName, int32_t capacity, int32_t occupied, bool password);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameServerListItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameServerListItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameServerListItem(GameServerListItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameServerListItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameServerListItem(GameServerListItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13091 };

  /// @brief Field serverName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___serverName;

  /// @brief Field capacity, offset: 0x18, size: 0x4, def value: None
  int32_t ___capacity;

  /// @brief Field occupied, offset: 0x1c, size: 0x4, def value: None
  int32_t ___occupied;

  /// @brief Field password, offset: 0x20, size: 0x1, def value: None
  bool ___password;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameServerListItem, ___serverName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerListItem, ___capacity) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerListItem, ___occupied) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServerListItem, ___password) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServerListItem, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServerListItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServerListItem*, "", "GameServerListItem");
