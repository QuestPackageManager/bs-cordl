#pragma once
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
// Type: ::LobbyPlayerData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4498))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4504))
// CS Name: ::LobbyPlayerData*
class CORDL_TYPE LobbyPlayerData : public ::GlobalNamespace::LevelGameplaySetupData {
public:
  // Declarations
  /// @brief Field <isPartyOwner>k__BackingField, offset 0x20, size 0x1
  __declspec(property(get = __get__isPartyOwner_k__BackingField, put = __set__isPartyOwner_k__BackingField)) bool _isPartyOwner_k__BackingField;

  /// @brief Field <isActive>k__BackingField, offset 0x21, size 0x1
  __declspec(property(get = __get__isActive_k__BackingField, put = __set__isActive_k__BackingField)) bool _isActive_k__BackingField;

  /// @brief Field <isReady>k__BackingField, offset 0x22, size 0x1
  __declspec(property(get = __get__isReady_k__BackingField, put = __set__isReady_k__BackingField)) bool _isReady_k__BackingField;

  /// @brief Field <isInLobby>k__BackingField, offset 0x23, size 0x1
  __declspec(property(get = __get__isInLobby_k__BackingField, put = __set__isInLobby_k__BackingField)) bool _isInLobby_k__BackingField;

  __declspec(property(get = get_isPartyOwner, put = set_isPartyOwner)) bool isPartyOwner;

  __declspec(property(get = get_isActive, put = set_isActive)) bool isActive;

  __declspec(property(get = get_isReady, put = set_isReady)) bool isReady;

  __declspec(property(get = get_isInLobby, put = set_isInLobby)) bool isInLobby;

  /// @brief Convert operator to "::GlobalNamespace::ILobbyPlayerData"
  constexpr operator ::GlobalNamespace::ILobbyPlayerData*() noexcept;

  /// @brief Convert to "::GlobalNamespace::ILobbyPlayerData"
  constexpr ::GlobalNamespace::ILobbyPlayerData* i___GlobalNamespace__ILobbyPlayerData() noexcept;

  /// @brief Convert operator to "::GlobalNamespace::ILevelGameplaySetupData"
  constexpr operator ::GlobalNamespace::ILevelGameplaySetupData*() noexcept;

  /// @brief Convert to "::GlobalNamespace::ILevelGameplaySetupData"
  constexpr ::GlobalNamespace::ILevelGameplaySetupData* i___GlobalNamespace__ILevelGameplaySetupData() noexcept;

  constexpr bool& __get__isPartyOwner_k__BackingField();

  constexpr bool const& __get__isPartyOwner_k__BackingField() const;

  constexpr void __set__isPartyOwner_k__BackingField(bool value);

  constexpr bool& __get__isActive_k__BackingField();

  constexpr bool const& __get__isActive_k__BackingField() const;

  constexpr void __set__isActive_k__BackingField(bool value);

  constexpr bool& __get__isReady_k__BackingField();

  constexpr bool const& __get__isReady_k__BackingField() const;

  constexpr void __set__isReady_k__BackingField(bool value);

  constexpr bool& __get__isInLobby_k__BackingField();

  constexpr bool const& __get__isInLobby_k__BackingField() const;

  constexpr void __set__isInLobby_k__BackingField(bool value);

  /// @brief Method get_isPartyOwner, addr 0x235b85c, size 0x8, virtual true, abstract: false, final true
  inline bool get_isPartyOwner();

  /// @brief Method set_isPartyOwner, addr 0x235b864, size 0xc, virtual true, abstract: false, final true
  inline void set_isPartyOwner(bool value);

  /// @brief Method get_isActive, addr 0x235b870, size 0x8, virtual true, abstract: false, final true
  inline bool get_isActive();

  /// @brief Method set_isActive, addr 0x235b878, size 0xc, virtual true, abstract: false, final true
  inline void set_isActive(bool value);

  /// @brief Method get_isReady, addr 0x235b884, size 0x8, virtual true, abstract: false, final true
  inline bool get_isReady();

  /// @brief Method set_isReady, addr 0x235b88c, size 0xc, virtual true, abstract: false, final true
  inline void set_isReady(bool value);

  /// @brief Method get_isInLobby, addr 0x235b898, size 0x8, virtual true, abstract: false, final true
  inline bool get_isInLobby();

  /// @brief Method set_isInLobby, addr 0x235b8a0, size 0xc, virtual true, abstract: false, final true
  inline void set_isInLobby(bool value);

  static inline ::GlobalNamespace::LobbyPlayerData* New_ctor();

  /// @brief Method .ctor, addr 0x235b8ac, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LobbyPlayerData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LobbyPlayerData(LobbyPlayerData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LobbyPlayerData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LobbyPlayerData(LobbyPlayerData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LobbyPlayerData();

public:
  /// @brief Field <isPartyOwner>k__BackingField, offset: 0x20, size: 0x1, def value: None
  bool ____isPartyOwner_k__BackingField;

  /// @brief Field <isActive>k__BackingField, offset: 0x21, size: 0x1, def value: None
  bool ____isActive_k__BackingField;

  /// @brief Field <isReady>k__BackingField, offset: 0x22, size: 0x1, def value: None
  bool ____isReady_k__BackingField;

  /// @brief Field <isInLobby>k__BackingField, offset: 0x23, size: 0x1, def value: None
  bool ____isInLobby_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LobbyPlayerData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayerData, ____isPartyOwner_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayerData, ____isActive_k__BackingField) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayerData, ____isReady_k__BackingField) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LobbyPlayerData, ____isInLobby_k__BackingField) == 0x23, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LobbyPlayerData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LobbyPlayerData*, "", "LobbyPlayerData");
