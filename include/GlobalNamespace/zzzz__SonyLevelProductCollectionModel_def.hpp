#pragma once
// IWYU pragma private; include "GlobalNamespace/SonyLevelProductCollectionModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ILevelPackProductData_1_def.hpp"
#include "GlobalNamespace/zzzz__ILevelProductData_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SonyLevelProductCollectionModel)
namespace GlobalNamespace {
class SonyLevelProductCollectionModel_AdditionalPackProductData;
}
namespace GlobalNamespace {
class SonyLevelProductCollectionModel_AdditionalProductData;
}
namespace GlobalNamespace {
class SonyLevelProductCollectionModel_LevelPackProductData;
}
namespace GlobalNamespace {
class SonyLevelProductCollectionModel_LevelPackRedirectionData;
}
namespace GlobalNamespace {
class SonyLevelProductCollectionModel_LevelProductData;
}
namespace GlobalNamespace {
class SonyLevelProductCollectionModel_ProductData;
}
namespace GlobalNamespace {
class SonyLevelProductPackSO;
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
// Forward declare root types
namespace GlobalNamespace {
class SonyLevelProductCollectionModel;
}
namespace GlobalNamespace {
class SonyLevelProductCollectionModel_AdditionalPackProductData;
}
namespace GlobalNamespace {
class SonyLevelProductCollectionModel_AdditionalProductData;
}
namespace GlobalNamespace {
class SonyLevelProductCollectionModel_LevelPackProductData;
}
namespace GlobalNamespace {
class SonyLevelProductCollectionModel_LevelPackRedirectionData;
}
namespace GlobalNamespace {
class SonyLevelProductCollectionModel_LevelProductData;
}
namespace GlobalNamespace {
class SonyLevelProductCollectionModel_ProductData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyLevelProductCollectionModel);
MARK_REF_PTR_T(::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalPackProductData);
MARK_REF_PTR_T(::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalProductData);
MARK_REF_PTR_T(::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData);
MARK_REF_PTR_T(::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData);
MARK_REF_PTR_T(::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData);
MARK_REF_PTR_T(::GlobalNamespace::SonyLevelProductCollectionModel_ProductData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyLevelProductCollectionModel/ProductData
class CORDL_TYPE SonyLevelProductCollectionModel_ProductData : public ::System::Object {
public:
  // Declarations
  /// @brief Field entitlementLabel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_entitlementLabel, put = __cordl_internal_set_entitlementLabel)) ::StringW entitlementLabel;

  /// @brief Field productLabel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_productLabel, put = __cordl_internal_set_productLabel)) ::StringW productLabel;

  /// @brief Field sieaAcCode, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_sieaAcCode, put = __cordl_internal_set_sieaAcCode)) ::StringW sieaAcCode;

  /// @brief Field sieeDcCode, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_sieeDcCode, put = __cordl_internal_set_sieeDcCode)) ::StringW sieeDcCode;

  static inline ::GlobalNamespace::SonyLevelProductCollectionModel_ProductData* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_entitlementLabel() const;

  constexpr ::StringW& __cordl_internal_get_entitlementLabel();

  constexpr ::StringW const& __cordl_internal_get_productLabel() const;

  constexpr ::StringW& __cordl_internal_get_productLabel();

  constexpr ::StringW const& __cordl_internal_get_sieaAcCode() const;

  constexpr ::StringW& __cordl_internal_get_sieaAcCode();

  constexpr ::StringW const& __cordl_internal_get_sieeDcCode() const;

  constexpr ::StringW& __cordl_internal_get_sieeDcCode();

  constexpr void __cordl_internal_set_entitlementLabel(::StringW value);

  constexpr void __cordl_internal_set_productLabel(::StringW value);

  constexpr void __cordl_internal_set_sieaAcCode(::StringW value);

  constexpr void __cordl_internal_set_sieeDcCode(::StringW value);

  /// @brief Method .ctor, addr 0x26ecfa8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyLevelProductCollectionModel_ProductData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductCollectionModel_ProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyLevelProductCollectionModel_ProductData(SonyLevelProductCollectionModel_ProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductCollectionModel_ProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyLevelProductCollectionModel_ProductData(SonyLevelProductCollectionModel_ProductData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13187 };

  /// @brief Field entitlementLabel, offset: 0x10, size: 0x8, def value: None
  ::StringW ___entitlementLabel;

  /// @brief Field productLabel, offset: 0x18, size: 0x8, def value: None
  ::StringW ___productLabel;

  /// @brief Field sieeDcCode, offset: 0x20, size: 0x8, def value: None
  ::StringW ___sieeDcCode;

  /// @brief Field sieaAcCode, offset: 0x28, size: 0x8, def value: None
  ::StringW ___sieaAcCode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel_ProductData, ___entitlementLabel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel_ProductData, ___productLabel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel_ProductData, ___sieeDcCode) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel_ProductData, ___sieaAcCode) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLevelProductCollectionModel_ProductData, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyLevelProductCollectionModel/AdditionalProductData
class CORDL_TYPE SonyLevelProductCollectionModel_AdditionalProductData : public ::System::Object {
public:
  // Declarations
  /// @brief Field checkAdditionalProductData, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_checkAdditionalProductData, put = __cordl_internal_set_checkAdditionalProductData)) bool checkAdditionalProductData;

  /// @brief Field noEnvironmentKeywordsProductData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_noEnvironmentKeywordsProductData,
                      put = __cordl_internal_set_noEnvironmentKeywordsProductData)) ::GlobalNamespace::SonyLevelProductCollectionModel_ProductData* noEnvironmentKeywordsProductData;

  static inline ::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalProductData* New_ctor();

  constexpr bool const& __cordl_internal_get_checkAdditionalProductData() const;

  constexpr bool& __cordl_internal_get_checkAdditionalProductData();

  constexpr ::GlobalNamespace::SonyLevelProductCollectionModel_ProductData* const& __cordl_internal_get_noEnvironmentKeywordsProductData() const;

  constexpr ::GlobalNamespace::SonyLevelProductCollectionModel_ProductData*& __cordl_internal_get_noEnvironmentKeywordsProductData();

  constexpr void __cordl_internal_set_checkAdditionalProductData(bool value);

  constexpr void __cordl_internal_set_noEnvironmentKeywordsProductData(::GlobalNamespace::SonyLevelProductCollectionModel_ProductData* value);

  /// @brief Method .ctor, addr 0x26ecfb0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyLevelProductCollectionModel_AdditionalProductData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductCollectionModel_AdditionalProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyLevelProductCollectionModel_AdditionalProductData(SonyLevelProductCollectionModel_AdditionalProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductCollectionModel_AdditionalProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyLevelProductCollectionModel_AdditionalProductData(SonyLevelProductCollectionModel_AdditionalProductData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13188 };

  /// @brief Field checkAdditionalProductData, offset: 0x10, size: 0x1, def value: None
  bool ___checkAdditionalProductData;

  /// @brief Field noEnvironmentKeywordsProductData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SonyLevelProductCollectionModel_ProductData* ___noEnvironmentKeywordsProductData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalProductData, ___checkAdditionalProductData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalProductData, ___noEnvironmentKeywordsProductData) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalProductData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ILevelProductData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyLevelProductCollectionModel/LevelProductData
class CORDL_TYPE SonyLevelProductCollectionModel_LevelProductData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _additionalProductData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalProductData,
                      put = __cordl_internal_set__additionalProductData)) ::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalProductData* _additionalProductData;

  /// @brief Field _entitlementLabel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__entitlementLabel, put = __cordl_internal_set__entitlementLabel)) ::StringW _entitlementLabel;

  /// @brief Field _levelId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelId, put = __cordl_internal_set__levelId)) ::StringW _levelId;

  /// @brief Field _productLabel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__productLabel, put = __cordl_internal_set__productLabel)) ::StringW _productLabel;

  /// @brief Field _sieaAcCode, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__sieaAcCode, put = __cordl_internal_set__sieaAcCode)) ::StringW _sieaAcCode;

  /// @brief Field _sieeDcCode, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__sieeDcCode, put = __cordl_internal_set__sieeDcCode)) ::StringW _sieeDcCode;

  __declspec(property(get = get_additionalProductData)) ::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalProductData* additionalProductData;

  __declspec(property(get = get_entitlementLabel)) ::StringW entitlementLabel;

  __declspec(property(get = get_levelId)) ::StringW levelId;

  __declspec(property(get = get_productLabel)) ::StringW productLabel;

  __declspec(property(get = get_sieaAcCode)) ::StringW sieaAcCode;

  __declspec(property(get = get_sieeDcCode)) ::StringW sieeDcCode;

  /// @brief Convert operator to "::GlobalNamespace::ILevelProductData"
  constexpr operator ::GlobalNamespace::ILevelProductData*() noexcept;

  static inline ::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData* New_ctor(::StringW entitlementLabel, ::StringW productLabel, ::StringW levelId, ::StringW sieeDcCode,
                                                                                              ::StringW sieaAcCode);

  constexpr ::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalProductData* const& __cordl_internal_get__additionalProductData() const;

  constexpr ::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalProductData*& __cordl_internal_get__additionalProductData();

  constexpr ::StringW const& __cordl_internal_get__entitlementLabel() const;

  constexpr ::StringW& __cordl_internal_get__entitlementLabel();

  constexpr ::StringW const& __cordl_internal_get__levelId() const;

  constexpr ::StringW& __cordl_internal_get__levelId();

  constexpr ::StringW const& __cordl_internal_get__productLabel() const;

  constexpr ::StringW& __cordl_internal_get__productLabel();

  constexpr ::StringW const& __cordl_internal_get__sieaAcCode() const;

  constexpr ::StringW& __cordl_internal_get__sieaAcCode();

  constexpr ::StringW const& __cordl_internal_get__sieeDcCode() const;

  constexpr ::StringW& __cordl_internal_get__sieeDcCode();

  constexpr void __cordl_internal_set__additionalProductData(::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalProductData* value);

  constexpr void __cordl_internal_set__entitlementLabel(::StringW value);

  constexpr void __cordl_internal_set__levelId(::StringW value);

  constexpr void __cordl_internal_set__productLabel(::StringW value);

  constexpr void __cordl_internal_set__sieaAcCode(::StringW value);

  constexpr void __cordl_internal_set__sieeDcCode(::StringW value);

  /// @brief Method .ctor, addr 0x26ecfe8, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::StringW entitlementLabel, ::StringW productLabel, ::StringW levelId, ::StringW sieeDcCode, ::StringW sieaAcCode);

  /// @brief Method get_additionalProductData, addr 0x26ecfe0, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalProductData* get_additionalProductData();

  /// @brief Method get_entitlementLabel, addr 0x26ecfb8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_entitlementLabel();

  /// @brief Method get_levelId, addr 0x26ecfc8, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_levelId();

  /// @brief Method get_productLabel, addr 0x26ecfc0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_productLabel();

  /// @brief Method get_sieaAcCode, addr 0x26ecfd8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_sieaAcCode();

  /// @brief Method get_sieeDcCode, addr 0x26ecfd0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_sieeDcCode();

  /// @brief Convert to "::GlobalNamespace::ILevelProductData"
  constexpr ::GlobalNamespace::ILevelProductData* i___GlobalNamespace__ILevelProductData() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyLevelProductCollectionModel_LevelProductData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductCollectionModel_LevelProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyLevelProductCollectionModel_LevelProductData(SonyLevelProductCollectionModel_LevelProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductCollectionModel_LevelProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyLevelProductCollectionModel_LevelProductData(SonyLevelProductCollectionModel_LevelProductData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13189 };

  /// @brief Field _levelId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____levelId;

  /// @brief Field _entitlementLabel, offset: 0x18, size: 0x8, def value: None
  ::StringW ____entitlementLabel;

  /// @brief Field _productLabel, offset: 0x20, size: 0x8, def value: None
  ::StringW ____productLabel;

  /// @brief Field _sieeDcCode, offset: 0x28, size: 0x8, def value: None
  ::StringW ____sieeDcCode;

  /// @brief Field _sieaAcCode, offset: 0x30, size: 0x8, def value: None
  ::StringW ____sieaAcCode;

  /// @brief Field _additionalProductData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalProductData* ____additionalProductData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData, ____levelId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData, ____entitlementLabel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData, ____productLabel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData, ____sieeDcCode) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData, ____sieaAcCode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData, ____additionalProductData) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyLevelProductCollectionModel/AdditionalPackProductData
class CORDL_TYPE SonyLevelProductCollectionModel_AdditionalPackProductData : public ::System::Object {
public:
  // Declarations
  /// @brief Field checkAdditionalPackProductData, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_checkAdditionalPackProductData, put = __cordl_internal_set_checkAdditionalPackProductData)) bool checkAdditionalPackProductData;

  /// @brief Field noEnvironmentKeywordsProductLabel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_noEnvironmentKeywordsProductLabel, put = __cordl_internal_set_noEnvironmentKeywordsProductLabel)) ::StringW noEnvironmentKeywordsProductLabel;

  static inline ::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalPackProductData* New_ctor();

  constexpr bool const& __cordl_internal_get_checkAdditionalPackProductData() const;

  constexpr bool& __cordl_internal_get_checkAdditionalPackProductData();

  constexpr ::StringW const& __cordl_internal_get_noEnvironmentKeywordsProductLabel() const;

  constexpr ::StringW& __cordl_internal_get_noEnvironmentKeywordsProductLabel();

  constexpr void __cordl_internal_set_checkAdditionalPackProductData(bool value);

  constexpr void __cordl_internal_set_noEnvironmentKeywordsProductLabel(::StringW value);

  /// @brief Method .ctor, addr 0x26ed038, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyLevelProductCollectionModel_AdditionalPackProductData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductCollectionModel_AdditionalPackProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyLevelProductCollectionModel_AdditionalPackProductData(SonyLevelProductCollectionModel_AdditionalPackProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductCollectionModel_AdditionalPackProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyLevelProductCollectionModel_AdditionalPackProductData(SonyLevelProductCollectionModel_AdditionalPackProductData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13190 };

  /// @brief Field checkAdditionalPackProductData, offset: 0x10, size: 0x1, def value: None
  bool ___checkAdditionalPackProductData;

  /// @brief Field noEnvironmentKeywordsProductLabel, offset: 0x18, size: 0x8, def value: None
  ::StringW ___noEnvironmentKeywordsProductLabel;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalPackProductData, ___checkAdditionalPackProductData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalPackProductData, ___noEnvironmentKeywordsProductLabel) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalPackProductData, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ILevelPackProductData`1<TLevelProductData>, System.IComparable`1<T>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyLevelProductCollectionModel/LevelPackProductData
class CORDL_TYPE SonyLevelProductCollectionModel_LevelPackProductData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _additionalPackProductData, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalPackProductData,
                      put = __cordl_internal_set__additionalPackProductData)) ::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalPackProductData* _additionalPackProductData;

  /// @brief Field _levelProductsData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__levelProductsData,
                      put = __cordl_internal_set__levelProductsData)) ::ArrayW<::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*,
                                                                               ::Array<::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*>*>
      _levelProductsData;

  /// @brief Field _packId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__packId, put = __cordl_internal_set__packId)) ::StringW _packId;

  /// @brief Field _packIndex, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__packIndex, put = __cordl_internal_set__packIndex)) int32_t _packIndex;

  /// @brief Field _packLevelPriceDiscountMul, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__packLevelPriceDiscountMul, put = __cordl_internal_set__packLevelPriceDiscountMul)) float_t _packLevelPriceDiscountMul;

  /// @brief Field _productLabel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__productLabel, put = __cordl_internal_set__productLabel)) ::StringW _productLabel;

  __declspec(property(get = get_additionalPackProductData)) ::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalPackProductData* additionalPackProductData;

  __declspec(property(get = get_levelPackId)) ::StringW levelPackId;

  __declspec(property(get = get_levelProductsData)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*>* levelProductsData;

  __declspec(property(get = get_packIndex)) int32_t packIndex;

  __declspec(property(get = get_packLevelPriceDiscountMul)) float_t packLevelPriceDiscountMul;

  __declspec(property(get = get_productLabel)) ::StringW productLabel;

  /// @brief Convert operator to "::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*>"
  constexpr operator ::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*>*() noexcept;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData*>*() noexcept;

  /// @brief Method CompareTo, addr 0x26ed14c, size 0x20, virtual true, abstract: false, final true
  inline int32_t CompareTo(::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData* other);

  static inline ::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData*
  New_ctor(::StringW productLabel, ::StringW levelPackId, float_t packLevelPriceDiscountMul,
           ::ArrayW<::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*, ::Array<::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*>*> levelProductsData,
           int32_t packIndex);

  constexpr ::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalPackProductData* const& __cordl_internal_get__additionalPackProductData() const;

  constexpr ::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalPackProductData*& __cordl_internal_get__additionalPackProductData();

  constexpr ::ArrayW<::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*, ::Array<::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*>*> const&
  __cordl_internal_get__levelProductsData() const;

  constexpr ::ArrayW<::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*, ::Array<::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*>*>&
  __cordl_internal_get__levelProductsData();

  constexpr ::StringW const& __cordl_internal_get__packId() const;

  constexpr ::StringW& __cordl_internal_get__packId();

  constexpr int32_t const& __cordl_internal_get__packIndex() const;

  constexpr int32_t& __cordl_internal_get__packIndex();

  constexpr float_t const& __cordl_internal_get__packLevelPriceDiscountMul() const;

  constexpr float_t& __cordl_internal_get__packLevelPriceDiscountMul();

  constexpr ::StringW const& __cordl_internal_get__productLabel() const;

  constexpr ::StringW& __cordl_internal_get__productLabel();

  constexpr void __cordl_internal_set__additionalPackProductData(::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalPackProductData* value);

  constexpr void __cordl_internal_set__levelProductsData(
      ::ArrayW<::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*, ::Array<::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*>*> value);

  constexpr void __cordl_internal_set__packId(::StringW value);

  constexpr void __cordl_internal_set__packIndex(int32_t value);

  constexpr void __cordl_internal_set__packLevelPriceDiscountMul(float_t value);

  constexpr void __cordl_internal_set__productLabel(::StringW value);

  /// @brief Method .ctor, addr 0x26ed070, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor(::StringW productLabel, ::StringW levelPackId, float_t packLevelPriceDiscountMul,
                    ::ArrayW<::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*, ::Array<::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*>*> levelProductsData,
                    int32_t packIndex);

  /// @brief Method get_additionalPackProductData, addr 0x26ed068, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalPackProductData* get_additionalPackProductData();

  /// @brief Method get_levelPackId, addr 0x26ed048, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_levelPackId();

  /// @brief Method get_levelProductsData, addr 0x26ed060, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*>* get_levelProductsData();

  /// @brief Method get_packIndex, addr 0x26ed058, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_packIndex();

  /// @brief Method get_packLevelPriceDiscountMul, addr 0x26ed050, size 0x8, virtual false, abstract: false, final false
  inline float_t get_packLevelPriceDiscountMul();

  /// @brief Method get_productLabel, addr 0x26ed040, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_productLabel();

  /// @brief Convert to "::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*>"
  constexpr ::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*>*
  i___GlobalNamespace__ILevelPackProductData_1___GlobalNamespace__SonyLevelProductCollectionModel_LevelProductData__() noexcept;

  /// @brief Convert to "::System::IComparable_1<::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData*>"
  constexpr ::System::IComparable_1<::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData*>*
  i___System__IComparable_1___GlobalNamespace__SonyLevelProductCollectionModel_LevelPackProductData__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyLevelProductCollectionModel_LevelPackProductData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductCollectionModel_LevelPackProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyLevelProductCollectionModel_LevelPackProductData(SonyLevelProductCollectionModel_LevelPackProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductCollectionModel_LevelPackProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyLevelProductCollectionModel_LevelPackProductData(SonyLevelProductCollectionModel_LevelPackProductData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13191 };

  /// @brief Field _packId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____packId;

  /// @brief Field _productLabel, offset: 0x18, size: 0x8, def value: None
  ::StringW ____productLabel;

  /// @brief Field _packLevelPriceDiscountMul, offset: 0x20, size: 0x4, def value: None
  float_t ____packLevelPriceDiscountMul;

  /// @brief Field _levelProductsData, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*, ::Array<::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*>*> ____levelProductsData;

  /// @brief Field _packIndex, offset: 0x30, size: 0x4, def value: None
  int32_t ____packIndex;

  /// @brief Field _additionalPackProductData, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalPackProductData* ____additionalPackProductData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData, ____packId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData, ____productLabel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData, ____packLevelPriceDiscountMul) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData, ____levelProductsData) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData, ____packIndex) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData, ____additionalPackProductData) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyLevelProductCollectionModel/LevelPackRedirectionData
class CORDL_TYPE SonyLevelProductCollectionModel_LevelPackRedirectionData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _redirectedProductLabel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__redirectedProductLabel, put = __cordl_internal_set__redirectedProductLabel)) ::StringW _redirectedProductLabel;

  /// @brief Field _shouldOwnLevelPackId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__shouldOwnLevelPackId, put = __cordl_internal_set__shouldOwnLevelPackId)) ::StringW _shouldOwnLevelPackId;

  /// @brief Field _targetLevelPackId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__targetLevelPackId, put = __cordl_internal_set__targetLevelPackId)) ::StringW _targetLevelPackId;

  /// @brief Field _validUntilDate, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__validUntilDate, put = __cordl_internal_set__validUntilDate)) ::StringW _validUntilDate;

  __declspec(property(get = get_redirectedProductLabel)) ::StringW redirectedProductLabel;

  __declspec(property(get = get_shouldOwnLevelPackId)) ::StringW shouldOwnLevelPackId;

  __declspec(property(get = get_targetLevelPackId)) ::StringW targetLevelPackId;

  __declspec(property(get = get_validUntilDate)) ::StringW validUntilDate;

  static inline ::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData* New_ctor(::StringW targetLevelPackId, ::StringW shouldOwnLevelPackId, ::StringW redirectedProductLabel,
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

  /// @brief Method .ctor, addr 0x26ed18c, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::StringW targetLevelPackId, ::StringW shouldOwnLevelPackId, ::StringW redirectedProductLabel, ::StringW validUntilDate);

  /// @brief Method get_redirectedProductLabel, addr 0x26ed17c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_redirectedProductLabel();

  /// @brief Method get_shouldOwnLevelPackId, addr 0x26ed174, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_shouldOwnLevelPackId();

  /// @brief Method get_targetLevelPackId, addr 0x26ed16c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_targetLevelPackId();

  /// @brief Method get_validUntilDate, addr 0x26ed184, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_validUntilDate();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyLevelProductCollectionModel_LevelPackRedirectionData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductCollectionModel_LevelPackRedirectionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyLevelProductCollectionModel_LevelPackRedirectionData(SonyLevelProductCollectionModel_LevelPackRedirectionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductCollectionModel_LevelPackRedirectionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyLevelProductCollectionModel_LevelPackRedirectionData(SonyLevelProductCollectionModel_LevelPackRedirectionData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13192 };

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
static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData, ____targetLevelPackId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData, ____shouldOwnLevelPackId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData, ____redirectedProductLabel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData, ____validUntilDate) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyLevelProductCollectionModel
class CORDL_TYPE SonyLevelProductCollectionModel : public ::System::Object {
public:
  // Declarations
  using AdditionalPackProductData = ::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalPackProductData;

  using AdditionalProductData = ::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalProductData;

  using LevelPackProductData = ::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData;

  using LevelPackRedirectionData = ::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData;

  using LevelProductData = ::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData;

  using ProductData = ::GlobalNamespace::SonyLevelProductCollectionModel_ProductData;

  /// @brief Field _levelIdToProductData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelIdToProductData,
                      put = __cordl_internal_set__levelIdToProductData)) ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*>*
      _levelIdToProductData;

  /// @brief Field _levelPackIdToProductData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackIdToProductData, put = __cordl_internal_set__levelPackIdToProductData)) ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData*>* _levelPackIdToProductData;

  /// @brief Field _levelPackRedirectionData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackRedirectionData, put = __cordl_internal_set__levelPackRedirectionData)) ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData*>* _levelPackRedirectionData;

  /// @brief Method GetLevelPackProductData, addr 0x26eceb8, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData* GetLevelPackProductData(::StringW levelPackId);

  /// @brief Method GetLevelPackRedirectionData, addr 0x26ecf30, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData* GetLevelPackRedirectionData(::StringW levelPackId);

  /// @brief Method GetLevelProductData, addr 0x26ece40, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData* GetLevelProductData(::StringW levelId);

  static inline ::GlobalNamespace::SonyLevelProductCollectionModel*
  New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SonyLevelProductPackSO>>* sonyLevelProductPacksSOs);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*>* const& __cordl_internal_get__levelIdToProductData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*>*& __cordl_internal_get__levelIdToProductData();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData*>* const&
  __cordl_internal_get__levelPackIdToProductData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData*>*& __cordl_internal_get__levelPackIdToProductData();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData*>* const&
  __cordl_internal_get__levelPackRedirectionData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData*>*& __cordl_internal_get__levelPackRedirectionData();

  constexpr void __cordl_internal_set__levelIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*>* value);

  constexpr void
  __cordl_internal_set__levelPackIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData*>* value);

  constexpr void
  __cordl_internal_set__levelPackRedirectionData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData*>* value);

  /// @brief Method .ctor, addr 0x26ec480, size 0x9c0, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13193 };

  /// @brief Field _levelIdToProductData, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*>* ____levelIdToProductData;

  /// @brief Field _levelPackIdToProductData, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData*>* ____levelPackIdToProductData;

  /// @brief Field _levelPackRedirectionData, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData*>* ____levelPackRedirectionData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel, ____levelIdToProductData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel, ____levelPackIdToProductData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductCollectionModel, ____levelPackRedirectionData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLevelProductCollectionModel, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyLevelProductCollectionModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLevelProductCollectionModel*, "", "SonyLevelProductCollectionModel");
NEED_NO_BOX(::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalPackProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalPackProductData*, "", "SonyLevelProductCollectionModel/AdditionalPackProductData");
NEED_NO_BOX(::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLevelProductCollectionModel_AdditionalProductData*, "", "SonyLevelProductCollectionModel/AdditionalProductData");
NEED_NO_BOX(::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData*, "", "SonyLevelProductCollectionModel/LevelPackProductData");
NEED_NO_BOX(::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData*, "", "SonyLevelProductCollectionModel/LevelPackRedirectionData");
NEED_NO_BOX(::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLevelProductCollectionModel_LevelProductData*, "", "SonyLevelProductCollectionModel/LevelProductData");
NEED_NO_BOX(::GlobalNamespace::SonyLevelProductCollectionModel_ProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLevelProductCollectionModel_ProductData*, "", "SonyLevelProductCollectionModel/ProductData");
