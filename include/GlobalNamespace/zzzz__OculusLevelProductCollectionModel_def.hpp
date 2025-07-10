#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusLevelProductCollectionModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ILevelPackProductData_1_def.hpp"
#include "GlobalNamespace/zzzz__ILevelProductData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OculusLevelProductCollectionModel)
namespace GlobalNamespace {
struct BeatmapLevelDataVersion;
}
namespace GlobalNamespace {
class OculusLevelProductCollectionModel_AdditionalSkus;
}
namespace GlobalNamespace {
class OculusLevelProductCollectionModel_LevelPackProductData;
}
namespace GlobalNamespace {
class OculusLevelProductCollectionModel_LevelPackRedirectionData;
}
namespace GlobalNamespace {
class OculusLevelProductCollectionModel_LevelProductData;
}
namespace GlobalNamespace {
class OculusLevelProductPacksSO;
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
class OculusLevelProductCollectionModel;
}
namespace GlobalNamespace {
class OculusLevelProductCollectionModel_AdditionalSkus;
}
namespace GlobalNamespace {
class OculusLevelProductCollectionModel_LevelPackProductData;
}
namespace GlobalNamespace {
class OculusLevelProductCollectionModel_LevelPackRedirectionData;
}
namespace GlobalNamespace {
class OculusLevelProductCollectionModel_LevelProductData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusLevelProductCollectionModel);
MARK_REF_PTR_T(::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus);
MARK_REF_PTR_T(::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData);
MARK_REF_PTR_T(::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData);
MARK_REF_PTR_T(::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusLevelProductCollectionModel/AdditionalSkus
class CORDL_TYPE OculusLevelProductCollectionModel_AdditionalSkus : public ::System::Object {
public:
  // Declarations
  /// @brief Field checkAdditionalSkus, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_checkAdditionalSkus, put = __cordl_internal_set_checkAdditionalSkus)) bool checkAdditionalSkus;

  /// @brief Field noEnvironmentKeywordsSku, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_noEnvironmentKeywordsSku, put = __cordl_internal_set_noEnvironmentKeywordsSku)) ::StringW noEnvironmentKeywordsSku;

  static inline ::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus* New_ctor();

  constexpr bool const& __cordl_internal_get_checkAdditionalSkus() const;

  constexpr bool& __cordl_internal_get_checkAdditionalSkus();

  constexpr ::StringW const& __cordl_internal_get_noEnvironmentKeywordsSku() const;

  constexpr ::StringW& __cordl_internal_get_noEnvironmentKeywordsSku();

  constexpr void __cordl_internal_set_checkAdditionalSkus(bool value);

  constexpr void __cordl_internal_set_noEnvironmentKeywordsSku(::StringW value);

  /// @brief Method .ctor, addr 0x26e9d9c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusLevelProductCollectionModel_AdditionalSkus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusLevelProductCollectionModel_AdditionalSkus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusLevelProductCollectionModel_AdditionalSkus(OculusLevelProductCollectionModel_AdditionalSkus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusLevelProductCollectionModel_AdditionalSkus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusLevelProductCollectionModel_AdditionalSkus(OculusLevelProductCollectionModel_AdditionalSkus const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13141 };

  /// @brief Field checkAdditionalSkus, offset: 0x10, size: 0x1, def value: None
  bool ___checkAdditionalSkus;

  /// @brief Field noEnvironmentKeywordsSku, offset: 0x18, size: 0x8, def value: None
  ::StringW ___noEnvironmentKeywordsSku;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus, ___checkAdditionalSkus) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus, ___noEnvironmentKeywordsSku) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ILevelProductData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusLevelProductCollectionModel/LevelProductData
class CORDL_TYPE OculusLevelProductCollectionModel_LevelProductData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _additionalSkus, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalSkus, put = __cordl_internal_set__additionalSkus)) ::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus* _additionalSkus;

  /// @brief Field _levelId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelId, put = __cordl_internal_set__levelId)) ::StringW _levelId;

  /// @brief Field _sku, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sku, put = __cordl_internal_set__sku)) ::StringW _sku;

  __declspec(property(get = get_additionalSkus)) ::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus* additionalSkus;

  __declspec(property(get = get_levelId)) ::StringW levelId;

  __declspec(property(get = get_sku)) ::StringW sku;

  /// @brief Convert operator to "::GlobalNamespace::ILevelProductData"
  constexpr operator ::GlobalNamespace::ILevelProductData*() noexcept;

  static inline ::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData* New_ctor();

  constexpr ::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus* const& __cordl_internal_get__additionalSkus() const;

  constexpr ::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus*& __cordl_internal_get__additionalSkus();

  constexpr ::StringW const& __cordl_internal_get__levelId() const;

  constexpr ::StringW& __cordl_internal_get__levelId();

  constexpr ::StringW const& __cordl_internal_get__sku() const;

  constexpr ::StringW& __cordl_internal_get__sku();

  constexpr void __cordl_internal_set__additionalSkus(::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus* value);

  constexpr void __cordl_internal_set__levelId(::StringW value);

  constexpr void __cordl_internal_set__sku(::StringW value);

  /// @brief Method .ctor, addr 0x26e9dbc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_additionalSkus, addr 0x26e9dac, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus* get_additionalSkus();

  /// @brief Method get_levelId, addr 0x26e9db4, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_levelId();

  /// @brief Method get_sku, addr 0x26e9da4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_sku();

  /// @brief Convert to "::GlobalNamespace::ILevelProductData"
  constexpr ::GlobalNamespace::ILevelProductData* i___GlobalNamespace__ILevelProductData() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusLevelProductCollectionModel_LevelProductData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusLevelProductCollectionModel_LevelProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusLevelProductCollectionModel_LevelProductData(OculusLevelProductCollectionModel_LevelProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusLevelProductCollectionModel_LevelProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusLevelProductCollectionModel_LevelProductData(OculusLevelProductCollectionModel_LevelProductData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13142 };

  /// @brief Field _levelId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____levelId;

  /// @brief Field _sku, offset: 0x18, size: 0x8, def value: None
  ::StringW ____sku;

  /// @brief Field _additionalSkus, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus* ____additionalSkus;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData, ____levelId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData, ____sku) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData, ____additionalSkus) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ILevelPackProductData`1<TLevelProductData>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusLevelProductCollectionModel/LevelPackProductData
class CORDL_TYPE OculusLevelProductCollectionModel_LevelPackProductData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _additionalSkus, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalSkus, put = __cordl_internal_set__additionalSkus)) ::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus* _additionalSkus;

  /// @brief Field _levelPackId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackId, put = __cordl_internal_set__levelPackId)) ::StringW _levelPackId;

  /// @brief Field _levelProductsData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__levelProductsData,
                      put = __cordl_internal_set__levelProductsData)) ::ArrayW<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*,
                                                                               ::Array<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>*>
      _levelProductsData;

  /// @brief Field _sku, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sku, put = __cordl_internal_set__sku)) ::StringW _sku;

  __declspec(property(get = get_additionalSkus)) ::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus* additionalSkus;

  __declspec(property(get = get_levelPackId)) ::StringW levelPackId;

  __declspec(property(get = get_levelProductsData)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>* levelProductsData;

  __declspec(property(get = get_sku)) ::StringW sku;

  /// @brief Convert operator to "::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>"
  constexpr operator ::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>*() noexcept;

  static inline ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*
  New_ctor(::StringW levelPackId, ::StringW sku, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>* levelProductsData);

  constexpr ::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus* const& __cordl_internal_get__additionalSkus() const;

  constexpr ::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus*& __cordl_internal_get__additionalSkus();

  constexpr ::StringW const& __cordl_internal_get__levelPackId() const;

  constexpr ::StringW& __cordl_internal_get__levelPackId();

  constexpr ::ArrayW<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*, ::Array<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>*> const&
  __cordl_internal_get__levelProductsData() const;

  constexpr ::ArrayW<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*, ::Array<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>*>&
  __cordl_internal_get__levelProductsData();

  constexpr ::StringW const& __cordl_internal_get__sku() const;

  constexpr ::StringW& __cordl_internal_get__sku();

  constexpr void __cordl_internal_set__additionalSkus(::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus* value);

  constexpr void __cordl_internal_set__levelPackId(::StringW value);

  constexpr void __cordl_internal_set__levelProductsData(
      ::ArrayW<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*, ::Array<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>*> value);

  constexpr void __cordl_internal_set__sku(::StringW value);

  /// @brief Method .ctor, addr 0x26e9de4, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelPackId, ::StringW sku, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>* levelProductsData);

  /// @brief Method get_additionalSkus, addr 0x26e9dcc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus* get_additionalSkus();

  /// @brief Method get_levelPackId, addr 0x26e9dd4, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_levelPackId();

  /// @brief Method get_levelProductsData, addr 0x26e9ddc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>* get_levelProductsData();

  /// @brief Method get_sku, addr 0x26e9dc4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_sku();

  /// @brief Convert to "::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>"
  constexpr ::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>*
  i___GlobalNamespace__ILevelPackProductData_1___GlobalNamespace__OculusLevelProductCollectionModel_LevelProductData__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusLevelProductCollectionModel_LevelPackProductData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusLevelProductCollectionModel_LevelPackProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusLevelProductCollectionModel_LevelPackProductData(OculusLevelProductCollectionModel_LevelPackProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusLevelProductCollectionModel_LevelPackProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusLevelProductCollectionModel_LevelPackProductData(OculusLevelProductCollectionModel_LevelPackProductData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13143 };

  /// @brief Field _levelPackId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____levelPackId;

  /// @brief Field _sku, offset: 0x18, size: 0x8, def value: None
  ::StringW ____sku;

  /// @brief Field _additionalSkus, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus* ____additionalSkus;

  /// @brief Field _levelProductsData, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*, ::Array<::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>*> ____levelProductsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData, ____levelPackId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData, ____sku) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData, ____additionalSkus) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData, ____levelProductsData) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusLevelProductCollectionModel/LevelPackRedirectionData
class CORDL_TYPE OculusLevelProductCollectionModel_LevelPackRedirectionData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _redirectedSku, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__redirectedSku, put = __cordl_internal_set__redirectedSku)) ::StringW _redirectedSku;

  /// @brief Field _shouldOwnLevelPackId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__shouldOwnLevelPackId, put = __cordl_internal_set__shouldOwnLevelPackId)) ::StringW _shouldOwnLevelPackId;

  /// @brief Field _targetLevelPackId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__targetLevelPackId, put = __cordl_internal_set__targetLevelPackId)) ::StringW _targetLevelPackId;

  /// @brief Field _validUntilDate, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__validUntilDate, put = __cordl_internal_set__validUntilDate)) ::StringW _validUntilDate;

  __declspec(property(get = get_redirectedSku)) ::StringW redirectedSku;

  __declspec(property(get = get_shouldOwnLevelPackId)) ::StringW shouldOwnLevelPackId;

  __declspec(property(get = get_targetLevelPackId)) ::StringW targetLevelPackId;

  __declspec(property(get = get_validUntilDate)) ::StringW validUntilDate;

  static inline ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData* New_ctor();

  constexpr ::StringW const& __cordl_internal_get__redirectedSku() const;

  constexpr ::StringW& __cordl_internal_get__redirectedSku();

  constexpr ::StringW const& __cordl_internal_get__shouldOwnLevelPackId() const;

  constexpr ::StringW& __cordl_internal_get__shouldOwnLevelPackId();

  constexpr ::StringW const& __cordl_internal_get__targetLevelPackId() const;

  constexpr ::StringW& __cordl_internal_get__targetLevelPackId();

  constexpr ::StringW const& __cordl_internal_get__validUntilDate() const;

  constexpr ::StringW& __cordl_internal_get__validUntilDate();

  constexpr void __cordl_internal_set__redirectedSku(::StringW value);

  constexpr void __cordl_internal_set__shouldOwnLevelPackId(::StringW value);

  constexpr void __cordl_internal_set__targetLevelPackId(::StringW value);

  constexpr void __cordl_internal_set__validUntilDate(::StringW value);

  /// @brief Method .ctor, addr 0x26e9e80, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_redirectedSku, addr 0x26e9e70, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_redirectedSku();

  /// @brief Method get_shouldOwnLevelPackId, addr 0x26e9e68, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_shouldOwnLevelPackId();

  /// @brief Method get_targetLevelPackId, addr 0x26e9e60, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_targetLevelPackId();

  /// @brief Method get_validUntilDate, addr 0x26e9e78, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_validUntilDate();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusLevelProductCollectionModel_LevelPackRedirectionData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusLevelProductCollectionModel_LevelPackRedirectionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusLevelProductCollectionModel_LevelPackRedirectionData(OculusLevelProductCollectionModel_LevelPackRedirectionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusLevelProductCollectionModel_LevelPackRedirectionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusLevelProductCollectionModel_LevelPackRedirectionData(OculusLevelProductCollectionModel_LevelPackRedirectionData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13144 };

  /// @brief Field _targetLevelPackId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____targetLevelPackId;

  /// @brief Field _shouldOwnLevelPackId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____shouldOwnLevelPackId;

  /// @brief Field _redirectedSku, offset: 0x20, size: 0x8, def value: None
  ::StringW ____redirectedSku;

  /// @brief Field _validUntilDate, offset: 0x28, size: 0x8, def value: None
  ::StringW ____validUntilDate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData, ____targetLevelPackId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData, ____shouldOwnLevelPackId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData, ____redirectedSku) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData, ____validUntilDate) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusLevelProductCollectionModel
class CORDL_TYPE OculusLevelProductCollectionModel : public ::System::Object {
public:
  // Declarations
  using AdditionalSkus = ::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus;

  using LevelPackProductData = ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData;

  using LevelPackRedirectionData = ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData;

  using LevelProductData = ::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData;

  /// @brief Field _assetFileToSku, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__assetFileToSku, put = __cordl_internal_set__assetFileToSku)) ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _assetFileToSku;

  /// @brief Field _levelIdToProductData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelIdToProductData, put = __cordl_internal_set__levelIdToProductData)) ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>* _levelIdToProductData;

  /// @brief Field _levelPackIdToProductData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackIdToProductData, put = __cordl_internal_set__levelPackIdToProductData)) ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*>* _levelPackIdToProductData;

  /// @brief Field _levelPackRedirectionData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackRedirectionData, put = __cordl_internal_set__levelPackRedirectionData)) ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*>* _levelPackRedirectionData;

  /// @brief Method GetLevelPackProductData, addr 0x26e9c34, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData* GetLevelPackProductData(::StringW levelPackId);

  /// @brief Method GetLevelPackRedirectionData, addr 0x26e9d24, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData* GetLevelPackRedirectionData(::StringW levelPackId);

  /// @brief Method GetLevelProductData, addr 0x26e9bbc, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData* GetLevelProductData(::StringW levelId);

  /// @brief Method GetLevelSku, addr 0x26e9cac, size 0x78, virtual false, abstract: false, final false
  inline ::StringW GetLevelSku(::StringW assetFile);

  /// @brief Method InsertAdditionalSkuIfValid, addr 0x26e9af8, size 0xc4, virtual false, abstract: false, final false
  inline void InsertAdditionalSkuIfValid(::StringW levelId, ::StringW additionalSku, ::GlobalNamespace::BeatmapLevelDataVersion additionalSkuType);

  static inline ::GlobalNamespace::OculusLevelProductCollectionModel*
  New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>>* levelProductPacksSOs);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* const& __cordl_internal_get__assetFileToSku() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__assetFileToSku();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>* const& __cordl_internal_get__levelIdToProductData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>*& __cordl_internal_get__levelIdToProductData();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*>* const&
  __cordl_internal_get__levelPackIdToProductData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*>*& __cordl_internal_get__levelPackIdToProductData();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*>* const&
  __cordl_internal_get__levelPackRedirectionData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*>*& __cordl_internal_get__levelPackRedirectionData();

  constexpr void __cordl_internal_set__assetFileToSku(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__levelIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>* value);

  constexpr void
  __cordl_internal_set__levelPackIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*>* value);

  constexpr void
  __cordl_internal_set__levelPackRedirectionData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*>* value);

  /// @brief Method .ctor, addr 0x26e9028, size 0xad0, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>>* levelProductPacksSOs);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusLevelProductCollectionModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusLevelProductCollectionModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusLevelProductCollectionModel(OculusLevelProductCollectionModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusLevelProductCollectionModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusLevelProductCollectionModel(OculusLevelProductCollectionModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13145 };

  /// @brief Field _levelIdToProductData, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>* ____levelIdToProductData;

  /// @brief Field _levelPackIdToProductData, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*>* ____levelPackIdToProductData;

  /// @brief Field _levelPackRedirectionData, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*>* ____levelPackRedirectionData;

  /// @brief Field _assetFileToSku, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____assetFileToSku;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusLevelProductCollectionModel, ____levelIdToProductData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusLevelProductCollectionModel, ____levelPackIdToProductData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusLevelProductCollectionModel, ____levelPackRedirectionData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusLevelProductCollectionModel, ____assetFileToSku) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusLevelProductCollectionModel, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusLevelProductCollectionModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusLevelProductCollectionModel*, "", "OculusLevelProductCollectionModel");
NEED_NO_BOX(::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusLevelProductCollectionModel_AdditionalSkus*, "", "OculusLevelProductCollectionModel/AdditionalSkus");
NEED_NO_BOX(::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*, "", "OculusLevelProductCollectionModel/LevelPackProductData");
NEED_NO_BOX(::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*, "", "OculusLevelProductCollectionModel/LevelPackRedirectionData");
NEED_NO_BOX(::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*, "", "OculusLevelProductCollectionModel/LevelProductData");
