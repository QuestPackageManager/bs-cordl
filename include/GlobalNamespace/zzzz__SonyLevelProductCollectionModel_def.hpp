#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SonyLevelProductCollectionModel)
namespace GlobalNamespace {
template <typename TLevelProductData> class ILevelPackProductData_1;
}
namespace GlobalNamespace {
class ILevelProductData;
}
namespace GlobalNamespace {
class SonyLevelProductPackSO;
}
namespace GlobalNamespace {
class __SonyLevelProductCollectionModel__LevelPackProductData;
}
namespace GlobalNamespace {
class __SonyLevelProductCollectionModel__LevelPackRedirectionData;
}
namespace GlobalNamespace {
class __SonyLevelProductCollectionModel__LevelProductData;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
template <typename T> class IComparable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyLevelProductCollectionModel;
}
namespace GlobalNamespace {
class __SonyLevelProductCollectionModel__LevelPackProductData;
}
namespace GlobalNamespace {
class __SonyLevelProductCollectionModel__LevelPackRedirectionData;
}
namespace GlobalNamespace {
class __SonyLevelProductCollectionModel__LevelProductData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyLevelProductCollectionModel);
MARK_REF_PTR_T(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData);
MARK_REF_PTR_T(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData);
MARK_REF_PTR_T(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData);
// Type: ::LevelProductData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SonyLevelProductCollectionModel::LevelProductData*
class CORDL_TYPE __SonyLevelProductCollectionModel__LevelProductData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _entitlementLabel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlementLabel, put = __cordl_internal_set__entitlementLabel))::StringW _entitlementLabel;

  /// @brief Field _levelId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelId, put = __cordl_internal_set__levelId))::StringW _levelId;

  /// @brief Field _productLabel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__productLabel, put = __cordl_internal_set__productLabel))::StringW _productLabel;

  __declspec(property(get = get_entitlementLabel))::StringW entitlementLabel;

  __declspec(property(get = get_levelId))::StringW levelId;

  __declspec(property(get = get_productLabel))::StringW productLabel;

  /// @brief Convert operator to "::GlobalNamespace::ILevelProductData"
  constexpr operator ::GlobalNamespace::ILevelProductData*() noexcept;

  static inline ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData* New_ctor(::StringW entitlementLabel, ::StringW productLabel, ::StringW levelId);

  constexpr ::StringW const& __cordl_internal_get__entitlementLabel() const;

  constexpr ::StringW& __cordl_internal_get__entitlementLabel();

  constexpr ::StringW const& __cordl_internal_get__levelId() const;

  constexpr ::StringW& __cordl_internal_get__levelId();

  constexpr ::StringW const& __cordl_internal_get__productLabel() const;

  constexpr ::StringW& __cordl_internal_get__productLabel();

  constexpr void __cordl_internal_set__entitlementLabel(::StringW value);

  constexpr void __cordl_internal_set__levelId(::StringW value);

  constexpr void __cordl_internal_set__productLabel(::StringW value);

  /// @brief Method .ctor, addr 0x1313924, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW entitlementLabel, ::StringW productLabel, ::StringW levelId);

  /// @brief Method get_entitlementLabel, addr 0x131390c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_entitlementLabel();

  /// @brief Method get_levelId, addr 0x131391c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_levelId();

  /// @brief Method get_productLabel, addr 0x1313914, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_productLabel();

  /// @brief Convert to "::GlobalNamespace::ILevelProductData"
  constexpr ::GlobalNamespace::ILevelProductData* i___GlobalNamespace__ILevelProductData() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyLevelProductCollectionModel__LevelProductData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelProductCollectionModel__LevelProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SonyLevelProductCollectionModel__LevelProductData(__SonyLevelProductCollectionModel__LevelProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelProductCollectionModel__LevelProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SonyLevelProductCollectionModel__LevelProductData(__SonyLevelProductCollectionModel__LevelProductData const&) = delete;

  /// @brief Field _levelId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____levelId;

  /// @brief Field _entitlementLabel, offset: 0x18, size: 0x8, def value: None
  ::StringW ____entitlementLabel;

  /// @brief Field _productLabel, offset: 0x20, size: 0x8, def value: None
  ::StringW ____productLabel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData, ____levelId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData, ____entitlementLabel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData, ____productLabel) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelPackProductData
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 52, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SonyLevelProductCollectionModel::LevelPackProductData*
class CORDL_TYPE __SonyLevelProductCollectionModel__LevelPackProductData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _levelProductsData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__levelProductsData,
                      put = __cordl_internal_set__levelProductsData))::ArrayW<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*,
                                                                              ::Array<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*> _levelProductsData;

  /// @brief Field _packId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__packId, put = __cordl_internal_set__packId))::StringW _packId;

  /// @brief Field _packIndex, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__packIndex, put = __cordl_internal_set__packIndex)) int32_t _packIndex;

  /// @brief Field _packLevelPriceDiscountMul, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__packLevelPriceDiscountMul, put = __cordl_internal_set__packLevelPriceDiscountMul)) float_t _packLevelPriceDiscountMul;

  /// @brief Field _productLabel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__productLabel, put = __cordl_internal_set__productLabel))::StringW _productLabel;

  __declspec(property(get = get_levelPackId))::StringW levelPackId;

  __declspec(property(get = get_levelProductsData))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>* levelProductsData;

  __declspec(property(get = get_packIndex)) int32_t packIndex;

  __declspec(property(get = get_packLevelPriceDiscountMul)) float_t packLevelPriceDiscountMul;

  __declspec(property(get = get_productLabel))::StringW productLabel;

  /// @brief Convert operator to "::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>"
  constexpr operator ::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*() noexcept;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>*() noexcept;

  /// @brief Method CompareTo, addr 0x1313a54, size 0x20, virtual true, abstract: false, final true
  inline int32_t CompareTo(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData* other);

  static inline ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*
  New_ctor(::StringW productLabel, ::StringW levelPackId, float_t packLevelPriceDiscountMul,
           ::ArrayW<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*> levelProductsData,
           int32_t packIndex);

  constexpr ::ArrayW<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*> const&
  __cordl_internal_get__levelProductsData() const;

  constexpr ::ArrayW<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*>&
  __cordl_internal_get__levelProductsData();

  constexpr ::StringW const& __cordl_internal_get__packId() const;

  constexpr ::StringW& __cordl_internal_get__packId();

  constexpr int32_t const& __cordl_internal_get__packIndex() const;

  constexpr int32_t& __cordl_internal_get__packIndex();

  constexpr float_t const& __cordl_internal_get__packLevelPriceDiscountMul() const;

  constexpr float_t& __cordl_internal_get__packLevelPriceDiscountMul();

  constexpr ::StringW const& __cordl_internal_get__productLabel() const;

  constexpr ::StringW& __cordl_internal_get__productLabel();

  constexpr void __cordl_internal_set__levelProductsData(
      ::ArrayW<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*> value);

  constexpr void __cordl_internal_set__packId(::StringW value);

  constexpr void __cordl_internal_set__packIndex(int32_t value);

  constexpr void __cordl_internal_set__packLevelPriceDiscountMul(float_t value);

  constexpr void __cordl_internal_set__productLabel(::StringW value);

  /// @brief Method .ctor, addr 0x1313988, size 0xcc, virtual false, abstract: false, final false
  inline void
  _ctor(::StringW productLabel, ::StringW levelPackId, float_t packLevelPriceDiscountMul,
        ::ArrayW<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*> levelProductsData,
        int32_t packIndex);

  /// @brief Method get_levelPackId, addr 0x1313968, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_levelPackId();

  /// @brief Method get_levelProductsData, addr 0x1313980, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>* get_levelProductsData();

  /// @brief Method get_packIndex, addr 0x1313978, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_packIndex();

  /// @brief Method get_packLevelPriceDiscountMul, addr 0x1313970, size 0x8, virtual false, abstract: false, final false
  inline float_t get_packLevelPriceDiscountMul();

  /// @brief Method get_productLabel, addr 0x1313960, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_productLabel();

  /// @brief Convert to "::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>"
  constexpr ::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*
  i___GlobalNamespace__ILevelPackProductData_1___GlobalNamespace____SonyLevelProductCollectionModel__LevelProductData__() noexcept;

  /// @brief Convert to "::System::IComparable_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>"
  constexpr ::System::IComparable_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>*
  i___System__IComparable_1___GlobalNamespace____SonyLevelProductCollectionModel__LevelPackProductData__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyLevelProductCollectionModel__LevelPackProductData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelProductCollectionModel__LevelPackProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SonyLevelProductCollectionModel__LevelPackProductData(__SonyLevelProductCollectionModel__LevelPackProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelProductCollectionModel__LevelPackProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SonyLevelProductCollectionModel__LevelPackProductData(__SonyLevelProductCollectionModel__LevelPackProductData const&) = delete;

  /// @brief Field _packId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____packId;

  /// @brief Field _productLabel, offset: 0x18, size: 0x8, def value: None
  ::StringW ____productLabel;

  /// @brief Field _packLevelPriceDiscountMul, offset: 0x20, size: 0x4, def value: None
  float_t ____packLevelPriceDiscountMul;

  /// @brief Field _levelProductsData, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*> ____levelProductsData;

  /// @brief Field _packIndex, offset: 0x30, size: 0x4, def value: None
  int32_t ____packIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData, 0x38>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData, ____packId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData, ____productLabel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData, ____packLevelPriceDiscountMul) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData, ____levelProductsData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData, ____packIndex) == 0x30, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelPackRedirectionData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SonyLevelProductCollectionModel::LevelPackRedirectionData*
class CORDL_TYPE __SonyLevelProductCollectionModel__LevelPackRedirectionData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _redirectedProductLabel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__redirectedProductLabel, put = __cordl_internal_set__redirectedProductLabel))::StringW _redirectedProductLabel;

  /// @brief Field _shouldOwnLevelPackId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__shouldOwnLevelPackId, put = __cordl_internal_set__shouldOwnLevelPackId))::StringW _shouldOwnLevelPackId;

  /// @brief Field _targetLevelPackId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__targetLevelPackId, put = __cordl_internal_set__targetLevelPackId))::StringW _targetLevelPackId;

  /// @brief Field _validUntilDate, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__validUntilDate, put = __cordl_internal_set__validUntilDate))::StringW _validUntilDate;

  __declspec(property(get = get_redirectedProductLabel))::StringW redirectedProductLabel;

  __declspec(property(get = get_shouldOwnLevelPackId))::StringW shouldOwnLevelPackId;

  __declspec(property(get = get_targetLevelPackId))::StringW targetLevelPackId;

  __declspec(property(get = get_validUntilDate))::StringW validUntilDate;

  static inline ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData* New_ctor(::StringW targetLevelPackId, ::StringW shouldOwnLevelPackId, ::StringW redirectedProductLabel,
                                                                                                         ::StringW validUntilDate);

  constexpr ::StringW const& __cordl_internal_get__redirectedProductLabel() const;

  constexpr ::StringW& __cordl_internal_get__redirectedProductLabel();

  constexpr ::StringW const& __cordl_internal_get__shouldOwnLevelPackId() const;

  constexpr ::StringW& __cordl_internal_get__shouldOwnLevelPackId();

  constexpr ::StringW const& __cordl_internal_get__targetLevelPackId() const;

  constexpr ::StringW& __cordl_internal_get__targetLevelPackId();

  constexpr ::StringW const& __cordl_internal_get__validUntilDate() const;

  constexpr ::StringW& __cordl_internal_get__validUntilDate();

  constexpr void __cordl_internal_set__redirectedProductLabel(::StringW value);

  constexpr void __cordl_internal_set__shouldOwnLevelPackId(::StringW value);

  constexpr void __cordl_internal_set__targetLevelPackId(::StringW value);

  constexpr void __cordl_internal_set__validUntilDate(::StringW value);

  /// @brief Method .ctor, addr 0x1313a94, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::StringW targetLevelPackId, ::StringW shouldOwnLevelPackId, ::StringW redirectedProductLabel, ::StringW validUntilDate);

  /// @brief Method get_redirectedProductLabel, addr 0x1313a84, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_redirectedProductLabel();

  /// @brief Method get_shouldOwnLevelPackId, addr 0x1313a7c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_shouldOwnLevelPackId();

  /// @brief Method get_targetLevelPackId, addr 0x1313a74, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_targetLevelPackId();

  /// @brief Method get_validUntilDate, addr 0x1313a8c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_validUntilDate();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyLevelProductCollectionModel__LevelPackRedirectionData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelProductCollectionModel__LevelPackRedirectionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SonyLevelProductCollectionModel__LevelPackRedirectionData(__SonyLevelProductCollectionModel__LevelPackRedirectionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelProductCollectionModel__LevelPackRedirectionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SonyLevelProductCollectionModel__LevelPackRedirectionData(__SonyLevelProductCollectionModel__LevelPackRedirectionData const&) = delete;

  /// @brief Field _targetLevelPackId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____targetLevelPackId;

  /// @brief Field _shouldOwnLevelPackId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____shouldOwnLevelPackId;

  /// @brief Field _redirectedProductLabel, offset: 0x20, size: 0x8, def value: None
  ::StringW ____redirectedProductLabel;

  /// @brief Field _validUntilDate, offset: 0x28, size: 0x8, def value: None
  ::StringW ____validUntilDate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData, ____targetLevelPackId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData, ____shouldOwnLevelPackId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData, ____redirectedProductLabel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData, ____validUntilDate) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SonyLevelProductCollectionModel
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SonyLevelProductCollectionModel*
class CORDL_TYPE SonyLevelProductCollectionModel : public ::System::Object {
public:
  // Declarations
  using LevelPackProductData = ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData;

  using LevelPackRedirectionData = ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData;

  using LevelProductData = ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData;

  /// @brief Field _levelIdToProductData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelIdToProductData, put = __cordl_internal_set__levelIdToProductData))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>* _levelIdToProductData;

  /// @brief Field _levelPackIdToProductData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackIdToProductData, put = __cordl_internal_set__levelPackIdToProductData))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>* _levelPackIdToProductData;

  /// @brief Field _levelPackRedirectionData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackRedirectionData, put = __cordl_internal_set__levelPackRedirectionData))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>* _levelPackRedirectionData;

  /// @brief Method GetLevelPackProductData, addr 0x131381c, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData* GetLevelPackProductData(::StringW levelPackId);

  /// @brief Method GetLevelPackRedirectionData, addr 0x1313894, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData* GetLevelPackRedirectionData(::StringW levelPackId);

  /// @brief Method GetLevelProductData, addr 0x13137a4, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData* GetLevelProductData(::StringW levelId);

  static inline ::GlobalNamespace::SonyLevelProductCollectionModel*
  New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SonyLevelProductPackSO>>* sonyLevelProductPacksSOs);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*& __cordl_internal_get__levelIdToProductData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>*> const&
  __cordl_internal_get__levelIdToProductData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>*& __cordl_internal_get__levelPackIdToProductData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>*> const&
  __cordl_internal_get__levelPackIdToProductData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>*& __cordl_internal_get__levelPackRedirectionData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>*> const&
  __cordl_internal_get__levelPackRedirectionData() const;

  constexpr void __cordl_internal_set__levelIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>* value);

  constexpr void
  __cordl_internal_set__levelPackIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>* value);

  constexpr void
  __cordl_internal_set__levelPackRedirectionData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>* value);

  /// @brief Method .ctor, addr 0x1312dd4, size 0x9d0, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SonyLevelProductPackSO>>* sonyLevelProductPacksSOs);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyLevelProductCollectionModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductCollectionModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyLevelProductCollectionModel(SonyLevelProductCollectionModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductCollectionModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyLevelProductCollectionModel(SonyLevelProductCollectionModel const&) = delete;

  /// @brief Field _levelIdToProductData, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*>* ____levelIdToProductData;

  /// @brief Field _levelPackIdToProductData, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*>* ____levelPackIdToProductData;

  /// @brief Field _levelPackRedirectionData, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>* ____levelPackRedirectionData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLevelProductCollectionModel, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel, ____levelIdToProductData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel, ____levelPackIdToProductData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel, ____levelPackRedirectionData) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyLevelProductCollectionModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLevelProductCollectionModel*, "", "SonyLevelProductCollectionModel");
NEED_NO_BOX(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*, "", "SonyLevelProductCollectionModel/LevelPackProductData");
NEED_NO_BOX(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*, "", "SonyLevelProductCollectionModel/LevelPackRedirectionData");
NEED_NO_BOX(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelProductData*, "", "SonyLevelProductCollectionModel/LevelProductData");
