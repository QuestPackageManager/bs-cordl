#pragma once
// IWYU pragma private; include "GlobalNamespace/GameDlcProductSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GameDlcProductSO)
// Forward declare root types
namespace GlobalNamespace {
class GameDlcProductSO;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameDlcProductSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameDlcProductSO*, "", "GameDlcProductSO");
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameDlcProductSO
class CORDL_TYPE GameDlcProductSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _gameDlcId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__gameDlcId, put = __cordl_internal_set__gameDlcId)) ::StringW _gameDlcId;

  __declspec(property(get = get_gameDlcId)) ::StringW gameDlcId;

  static inline ::GlobalNamespace::GameDlcProductSO* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__gameDlcId() const;

  constexpr ::StringW& __cordl_internal_get__gameDlcId();

  constexpr void __cordl_internal_set__gameDlcId(::StringW value);

  /// @brief Method .ctor, addr 0x39ef638, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_gameDlcId, addr 0x39ef630, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_gameDlcId();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameDlcProductSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameDlcProductSO", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameDlcProductSO(GameDlcProductSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameDlcProductSO", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameDlcProductSO(GameDlcProductSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14592 };

  /// [SerializeField]
  /// @brief Field _gameDlcId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____gameDlcId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameDlcProductSO, ____gameDlcId) == 0x18, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameDlcProductSO) == 0x20, "Size mismatch!");

} // namespace GlobalNamespace
