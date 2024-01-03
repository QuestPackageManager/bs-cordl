#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ILobbyPlayerData)
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
// Forward declare root types
namespace GlobalNamespace {
class ILobbyPlayerData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ILobbyPlayerData);
// Type: ::ILobbyPlayerData
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4491))
// CS Name: ::ILobbyPlayerData*
class CORDL_TYPE ILobbyPlayerData {
public:
  // Declarations
  __declspec(property(get = get_isPartyOwner, put = set_isPartyOwner)) bool isPartyOwner;

  __declspec(property(get = get_isActive, put = set_isActive)) bool isActive;

  __declspec(property(get = get_isReady, put = set_isReady)) bool isReady;

  __declspec(property(get = get_isInLobby, put = set_isInLobby)) bool isInLobby;

  /// @brief Convert operator to "::GlobalNamespace::ILevelGameplaySetupData"
  constexpr operator ::GlobalNamespace::ILevelGameplaySetupData*() noexcept;

  /// @brief Convert to "::GlobalNamespace::ILevelGameplaySetupData"
  constexpr ::GlobalNamespace::ILevelGameplaySetupData* i___GlobalNamespace__ILevelGameplaySetupData() noexcept;

  /// @brief Method get_isPartyOwner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isPartyOwner();

  /// @brief Method set_isPartyOwner, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_isPartyOwner(bool value);

  /// @brief Method get_isActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isActive();

  /// @brief Method set_isActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_isActive(bool value);

  /// @brief Method get_isReady, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isReady();

  /// @brief Method set_isReady, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_isReady(bool value);

  /// @brief Method get_isInLobby, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isInLobby();

  /// @brief Method set_isInLobby, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_isInLobby(bool value);

  // Ctor Parameters [CppParam { name: "", ty: "ILobbyPlayerData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ILobbyPlayerData(ILobbyPlayerData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ILobbyPlayerData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ILobbyPlayerData(ILobbyPlayerData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ILobbyPlayerData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ILobbyPlayerData*, "", "ILobbyPlayerData");
