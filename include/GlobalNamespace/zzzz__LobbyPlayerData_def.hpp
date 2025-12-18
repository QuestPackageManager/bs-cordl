#pragma once
// IWYU pragma private; include "GlobalNamespace/LobbyPlayerData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LevelGameplaySetupData_def.hpp"
CORDL_MODULE_EXPORT(LobbyPlayerData)
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
namespace GlobalNamespace {
class ILobbyPlayerData;
}
// Forward declare root types
namespace GlobalNamespace {
class LobbyPlayerData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LobbyPlayerData);
// Dependencies LevelGameplaySetupData
namespace GlobalNamespace {
// Is value type: false
// CS Name: LobbyPlayerData
class CORDL_TYPE LobbyPlayerData : public ::GlobalNamespace::LevelGameplaySetupData {
public:
  // Declarations
  /// @brief Field <isActive>k__BackingField, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get__isActive_k__BackingField, put = __cordl_internal_set__isActive_k__BackingField)) bool _isActive_k__BackingField;

  /// @brief Field <isInLobby>k__BackingField, offset 0x3b, size 0x1
  __declspec(property(get = __cordl_internal_get__isInLobby_k__BackingField, put = __cordl_internal_set__isInLobby_k__BackingField)) bool _isInLobby_k__BackingField;

  /// @brief Field <isPartyOwner>k__BackingField, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get__isPartyOwner_k__BackingField, put = __cordl_internal_set__isPartyOwner_k__BackingField)) bool _isPartyOwner_k__BackingField;

  /// @brief Field <isReady>k__BackingField, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get__isReady_k__BackingField, put = __cordl_internal_set__isReady_k__BackingField)) bool _isReady_k__BackingField;

  __declspec(property(get = get_isActive, put = set_isActive)) bool isActive;

  __declspec(property(get = get_isInLobby, put = set_isInLobby)) bool isInLobby;

  __declspec(property(get = get_isPartyOwner, put = set_isPartyOwner)) bool isPartyOwner;

  __declspec(property(get = get_isReady, put = set_isReady)) bool isReady;

  /// @brief Convert operator to "::GlobalNamespace::ILevelGameplaySetupData"
  constexpr operator ::GlobalNamespace::ILevelGameplaySetupData*() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ILobbyPlayerData"
  constexpr operator ::GlobalNamespace::ILobbyPlayerData*() noexcept;

  static inline ::GlobalNamespace::LobbyPlayerData* New_ctor();

  constexpr bool const& __cordl_internal_get__isActive_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isActive_k__BackingField();

  constexpr bool const& __cordl_internal_get__isInLobby_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isInLobby_k__BackingField();

  constexpr bool const& __cordl_internal_get__isPartyOwner_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isPartyOwner_k__BackingField();

  constexpr bool const& __cordl_internal_get__isReady_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isReady_k__BackingField();

  constexpr void __cordl_internal_set__isActive_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isInLobby_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isPartyOwner_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isReady_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x3639db4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isActive, addr 0x3639d84, size 0x8, virtual true, abstract: false, final true
  inline bool get_isActive();

  /// @brief Method get_isInLobby, addr 0x3639da4, size 0x8, virtual true, abstract: false, final true
  inline bool get_isInLobby();

  /// @brief Method get_isPartyOwner, addr 0x3639d74, size 0x8, virtual true, abstract: false, final true
  inline bool get_isPartyOwner();

  /// @brief Method get_isReady, addr 0x3639d94, size 0x8, virtual true, abstract: false, final true
  inline bool get_isReady();

  /// @brief Convert to "::GlobalNamespace::ILevelGameplaySetupData"
  constexpr ::GlobalNamespace::ILevelGameplaySetupData* i___GlobalNamespace__ILevelGameplaySetupData() noexcept;

  /// @brief Convert to "::GlobalNamespace::ILobbyPlayerData"
  constexpr ::GlobalNamespace::ILobbyPlayerData* i___GlobalNamespace__ILobbyPlayerData() noexcept;

  /// @brief Method set_isActive, addr 0x3639d8c, size 0x8, virtual true, abstract: false, final true
  inline void set_isActive(bool value);

  /// @brief Method set_isInLobby, addr 0x3639dac, size 0x8, virtual true, abstract: false, final true
  inline void set_isInLobby(bool value);

  /// @brief Method set_isPartyOwner, addr 0x3639d7c, size 0x8, virtual true, abstract: false, final true
  inline void set_isPartyOwner(bool value);

  /// @brief Method set_isReady, addr 0x3639d9c, size 0x8, virtual true, abstract: false, final true
  inline void set_isReady(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LobbyPlayerData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LobbyPlayerData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LobbyPlayerData(LobbyPlayerData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LobbyPlayerData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LobbyPlayerData(LobbyPlayerData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15086 };

  /// @brief Field <isPartyOwner>k__BackingField, offset: 0x38, size: 0x1, def value: None
  bool ____isPartyOwner_k__BackingField;

  /// @brief Field <isActive>k__BackingField, offset: 0x39, size: 0x1, def value: None
  bool ____isActive_k__BackingField;

  /// @brief Field <isReady>k__BackingField, offset: 0x3a, size: 0x1, def value: None
  bool ____isReady_k__BackingField;

  /// @brief Field <isInLobby>k__BackingField, offset: 0x3b, size: 0x1, def value: None
  bool ____isInLobby_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LobbyPlayerData, ____isPartyOwner_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayerData, ____isActive_k__BackingField) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayerData, ____isReady_k__BackingField) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayerData, ____isInLobby_k__BackingField) == 0x3b, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LobbyPlayerData, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LobbyPlayerData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyPlayerData*, "", "LobbyPlayerData");
