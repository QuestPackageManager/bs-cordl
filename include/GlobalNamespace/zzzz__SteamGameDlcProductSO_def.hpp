#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamGameDlcProductSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameDlcProductSO_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamGameDlcProductSO)
// Forward declare root types
namespace GlobalNamespace {
class SteamGameDlcProductSO;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SteamGameDlcProductSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SteamGameDlcProductSO*, "", "SteamGameDlcProductSO");
// Dependencies GameDlcProductSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: SteamGameDlcProductSO
class CORDL_TYPE SteamGameDlcProductSO : public ::GlobalNamespace::GameDlcProductSO {
public:
  // Declarations
  /// @brief Field _appId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__appId, put = __cordl_internal_set__appId)) uint32_t _appId;

  __declspec(property(get = get_appId)) uint32_t appId;

  static inline ::GlobalNamespace::SteamGameDlcProductSO* New_ctor();

  constexpr uint32_t const& __cordl_internal_get__appId() const;

  constexpr uint32_t& __cordl_internal_get__appId();

  constexpr void __cordl_internal_set__appId(uint32_t value);

  /// @brief Method .ctor, addr 0x39f730c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_appId, addr 0x39f7304, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_appId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamGameDlcProductSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SteamGameDlcProductSO", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SteamGameDlcProductSO(SteamGameDlcProductSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SteamGameDlcProductSO", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SteamGameDlcProductSO(SteamGameDlcProductSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14617 };

  /// [SerializeField]
  /// @brief Field _appId, offset: 0x20, size: 0x4, def value: None
  uint32_t ____appId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SteamGameDlcProductSO, ____appId) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SteamGameDlcProductSO) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
