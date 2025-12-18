#pragma once
// IWYU pragma private; include "GlobalNamespace/DlcPromoPanelDataSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DlcPromoPanelDataSO)
namespace GlobalNamespace {
struct DlcPromoPanelDataSO_DlcPromoPanelType;
}
namespace GlobalNamespace {
class PromoBannerInfoSO;
}
// Forward declare root types
namespace GlobalNamespace {
struct DlcPromoPanelDataSO_DlcPromoPanelType;
}
namespace GlobalNamespace {
class DlcPromoPanelDataSO;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType);
MARK_REF_PTR_T(::GlobalNamespace::DlcPromoPanelDataSO);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: DlcPromoPanelDataSO/DlcPromoPanelType
struct CORDL_TYPE DlcPromoPanelDataSO_DlcPromoPanelType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DlcPromoPanelDataSO_DlcPromoPanelType_Unwrapped
  enum struct __DlcPromoPanelDataSO_DlcPromoPanelType_Unwrapped : int32_t {
    __E_Pack = static_cast<int32_t>(0x0),
    __E_Store = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DlcPromoPanelDataSO_DlcPromoPanelType_Unwrapped() const noexcept {
    return static_cast<__DlcPromoPanelDataSO_DlcPromoPanelType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DlcPromoPanelDataSO_DlcPromoPanelType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DlcPromoPanelDataSO_DlcPromoPanelType(int32_t value__) noexcept;

  /// @brief Field Pack value: I32(0)
  static ::GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType const Pack;

  /// @brief Field Store value: I32(1)
  static ::GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType const Store;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15166 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies DlcPromoPanelDataSO::DlcPromoPanelType, UnityEngine.ScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: DlcPromoPanelDataSO
class CORDL_TYPE DlcPromoPanelDataSO : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  using DlcPromoPanelType = ::GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType;

  /// @brief Field _customDlcPromoBanner, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__customDlcPromoBanner, put = __cordl_internal_set__customDlcPromoBanner)) ::UnityW<::GlobalNamespace::PromoBannerInfoSO> _customDlcPromoBanner;

  /// @brief Field _cutOffTest, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__cutOffTest, put = __cordl_internal_set__cutOffTest)) int32_t _cutOffTest;

  /// @brief Field _defaultPromoInfoId, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__defaultPromoInfoId, put = __cordl_internal_set__defaultPromoInfoId)) ::StringW _defaultPromoInfoId;

  /// @brief Field _dlcPromoPanelType, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__dlcPromoPanelType, put = __cordl_internal_set__dlcPromoPanelType)) ::GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType _dlcPromoPanelType;

  /// @brief Field _minNumberOfNotOwnedPacks, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get__minNumberOfNotOwnedPacks, put = __cordl_internal_set__minNumberOfNotOwnedPacks)) int32_t _minNumberOfNotOwnedPacks;

  /// @brief Field _priority, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__priority, put = __cordl_internal_set__priority)) int32_t _priority;

  /// @brief Field _target, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__target, put = __cordl_internal_set__target)) ::StringW _target;

  __declspec(property(get = get_customDlcPromoBanner)) ::UnityW<::GlobalNamespace::PromoBannerInfoSO> customDlcPromoBanner;

  __declspec(property(get = get_cutOffTest)) int32_t cutOffTest;

  __declspec(property(get = get_dlcPromoPanelType)) ::GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType dlcPromoPanelType;

  __declspec(property(get = get_minNumberOfNotOwnedPacks)) int32_t minNumberOfNotOwnedPacks;

  __declspec(property(get = get_priority)) int32_t priority;

  __declspec(property(get = get_promoId)) ::StringW promoId;

  __declspec(property(get = get_target)) ::StringW target;

  static inline ::GlobalNamespace::DlcPromoPanelDataSO* New_ctor();

  /// @brief Method SetMusicPackPromo, addr 0x3651028, size 0x10, virtual false, abstract: false, final false
  inline void SetMusicPackPromo(::StringW packOrLevelId, int32_t priority, int32_t cutOffTest);

  constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO> const& __cordl_internal_get__customDlcPromoBanner() const;

  constexpr ::UnityW<::GlobalNamespace::PromoBannerInfoSO>& __cordl_internal_get__customDlcPromoBanner();

  constexpr int32_t const& __cordl_internal_get__cutOffTest() const;

  constexpr int32_t& __cordl_internal_get__cutOffTest();

  constexpr ::StringW const& __cordl_internal_get__defaultPromoInfoId() const;

  constexpr ::StringW& __cordl_internal_get__defaultPromoInfoId();

  constexpr ::GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType const& __cordl_internal_get__dlcPromoPanelType() const;

  constexpr ::GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType& __cordl_internal_get__dlcPromoPanelType();

  constexpr int32_t const& __cordl_internal_get__minNumberOfNotOwnedPacks() const;

  constexpr int32_t& __cordl_internal_get__minNumberOfNotOwnedPacks();

  constexpr int32_t const& __cordl_internal_get__priority() const;

  constexpr int32_t& __cordl_internal_get__priority();

  constexpr ::StringW const& __cordl_internal_get__target() const;

  constexpr ::StringW& __cordl_internal_get__target();

  constexpr void __cordl_internal_set__customDlcPromoBanner(::UnityW<::GlobalNamespace::PromoBannerInfoSO> value);

  constexpr void __cordl_internal_set__cutOffTest(int32_t value);

  constexpr void __cordl_internal_set__defaultPromoInfoId(::StringW value);

  constexpr void __cordl_internal_set__dlcPromoPanelType(::GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType value);

  constexpr void __cordl_internal_set__minNumberOfNotOwnedPacks(int32_t value);

  constexpr void __cordl_internal_set__priority(int32_t value);

  constexpr void __cordl_internal_set__target(::StringW value);

  /// @brief Method .ctor, addr 0x3651038, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_customDlcPromoBanner, addr 0x3651008, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::PromoBannerInfoSO> get_customDlcPromoBanner();

  /// @brief Method get_cutOffTest, addr 0x3650ff0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_cutOffTest();

  /// @brief Method get_dlcPromoPanelType, addr 0x3651000, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType get_dlcPromoPanelType();

  /// @brief Method get_minNumberOfNotOwnedPacks, addr 0x3650ff8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_minNumberOfNotOwnedPacks();

  /// @brief Method get_priority, addr 0x3651020, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_priority();

  /// @brief Method get_promoId, addr 0x3651010, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_promoId();

  /// @brief Method get_target, addr 0x3651018, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_target();

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15167 };

  /// @brief Field _cutOffTest, offset: 0x18, size: 0x4, def value: None
  int32_t ____cutOffTest;

  /// @brief Field _minNumberOfNotOwnedPacks, offset: 0x1c, size: 0x4, def value: None
  int32_t ____minNumberOfNotOwnedPacks;

  /// @brief Field _defaultPromoInfoId, offset: 0x20, size: 0x8, def value: None
  ::StringW ____defaultPromoInfoId;

  /// @brief Field _target, offset: 0x28, size: 0x8, def value: None
  ::StringW ____target;

  /// @brief Field _priority, offset: 0x30, size: 0x4, def value: None
  int32_t ____priority;

  /// @brief Field _dlcPromoPanelType, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType ____dlcPromoPanelType;

  /// @brief Field _customDlcPromoBanner, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::PromoBannerInfoSO> ____customDlcPromoBanner;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::DlcPromoPanelDataSO, ____cutOffTest) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelDataSO, ____minNumberOfNotOwnedPacks) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelDataSO, ____defaultPromoInfoId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelDataSO, ____target) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelDataSO, ____priority) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelDataSO, ____dlcPromoPanelType) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DlcPromoPanelDataSO, ____customDlcPromoBanner) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DlcPromoPanelDataSO, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelDataSO_DlcPromoPanelType, "", "DlcPromoPanelDataSO/DlcPromoPanelType");
NEED_NO_BOX(::GlobalNamespace::DlcPromoPanelDataSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DlcPromoPanelDataSO*, "", "DlcPromoPanelDataSO");
