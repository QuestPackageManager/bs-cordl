#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusGameDlcProductSO.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GameDlcProductSO_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(OculusGameDlcProductSO)
// Forward declare root types
namespace GlobalNamespace {
class OculusGameDlcProductSO;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OculusGameDlcProductSO*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OculusGameDlcProductSO*, "", "OculusGameDlcProductSO");
// Dependencies GameDlcProductSO
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusGameDlcProductSO
class CORDL_TYPE OculusGameDlcProductSO : public ::GlobalNamespace::GameDlcProductSO {
public:
  // Declarations
  /// @brief Field _sku, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sku, put = __cordl_internal_set__sku)) ::StringW _sku;

  __declspec(property(get = get_sku)) ::StringW sku;

  static inline ::GlobalNamespace::OculusGameDlcProductSO* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__sku() const;

  constexpr ::StringW& __cordl_internal_get__sku();

  constexpr void __cordl_internal_set__sku(::StringW value);

  /// @brief Method .ctor, addr 0x39f5fa0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_sku, addr 0x39f5f98, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_sku();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusGameDlcProductSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusGameDlcProductSO", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusGameDlcProductSO(OculusGameDlcProductSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusGameDlcProductSO", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusGameDlcProductSO(OculusGameDlcProductSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14609 };

  /// [SerializeField]
  /// @brief Field _sku, offset: 0x20, size: 0x8, def value: None
  ::StringW ____sku;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusGameDlcProductSO, ____sku) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OculusGameDlcProductSO) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
