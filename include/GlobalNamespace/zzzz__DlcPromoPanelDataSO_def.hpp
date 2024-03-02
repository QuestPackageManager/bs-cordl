#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DlcPromoPanelDataSO)
// Forward declare root types
namespace GlobalNamespace {
class DlcPromoPanelDataSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DlcPromoPanelDataSO);
// Type: ::DlcPromoPanelDataSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::DlcPromoPanelDataSO*
class CORDL_TYPE DlcPromoPanelDataSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field _cutOffTest, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__cutOffTest, put = __cordl_internal_set__cutOffTest)) int32_t _cutOffTest;

  /// @brief Field _defaultPromoInfoId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultPromoInfoId, put = __cordl_internal_set__defaultPromoInfoId))::StringW _defaultPromoInfoId;

  /// @brief Field _minNumberOfNotOwnedPacks, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__minNumberOfNotOwnedPacks, put = __cordl_internal_set__minNumberOfNotOwnedPacks)) int32_t _minNumberOfNotOwnedPacks;

  __declspec(property(get = get_cutOffTest)) int32_t cutOffTest;

  __declspec(property(get = get_defaultPromoInfoId, put = set_defaultPromoInfoId))::StringW defaultPromoInfoId;

  __declspec(property(get = get_minNumberOfNotOwnedPacks)) int32_t minNumberOfNotOwnedPacks;

  static inline ::GlobalNamespace::DlcPromoPanelDataSO* New_ctor();

  constexpr int32_t const& __cordl_internal_get__cutOffTest() const;

  constexpr int32_t& __cordl_internal_get__cutOffTest();

  constexpr ::StringW const& __cordl_internal_get__defaultPromoInfoId() const;

  constexpr ::StringW& __cordl_internal_get__defaultPromoInfoId();

  constexpr int32_t const& __cordl_internal_get__minNumberOfNotOwnedPacks() const;

  constexpr int32_t& __cordl_internal_get__minNumberOfNotOwnedPacks();

  constexpr void __cordl_internal_set__cutOffTest(int32_t value);

  constexpr void __cordl_internal_set__defaultPromoInfoId(::StringW value);

  constexpr void __cordl_internal_set__minNumberOfNotOwnedPacks(int32_t value);

  /// @brief Method .ctor, addr 0x12f71d4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_cutOffTest, addr 0x12f71b4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_cutOffTest();

  /// @brief Method get_defaultPromoInfoId, addr 0x12f71c4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_defaultPromoInfoId();

  /// @brief Method get_minNumberOfNotOwnedPacks, addr 0x12f71bc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_minNumberOfNotOwnedPacks();

  /// @brief Method set_defaultPromoInfoId, addr 0x12f71cc, size 0x8, virtual false, abstract: false, final false
  inline void set_defaultPromoInfoId(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DlcPromoPanelDataSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelDataSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DlcPromoPanelDataSO(DlcPromoPanelDataSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DlcPromoPanelDataSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DlcPromoPanelDataSO(DlcPromoPanelDataSO const&) = delete;

  /// @brief Field _cutOffTest, offset: 0x18, size: 0x4, def value: None
  int32_t ____cutOffTest;

  /// @brief Field _minNumberOfNotOwnedPacks, offset: 0x1c, size: 0x4, def value: None
  int32_t ____minNumberOfNotOwnedPacks;

  /// @brief Field _defaultPromoInfoId, offset: 0x20, size: 0x8, def value: None
  ::StringW ____defaultPromoInfoId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelDataSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelDataSO, ____cutOffTest) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelDataSO, ____minNumberOfNotOwnedPacks) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelDataSO, ____defaultPromoInfoId) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DlcPromoPanelDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelDataSO*, "", "DlcPromoPanelDataSO");
