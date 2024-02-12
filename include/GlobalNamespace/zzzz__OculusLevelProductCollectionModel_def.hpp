#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OculusLevelProductCollectionModel)
namespace GlobalNamespace {
template <typename TLevelProductData> class ILevelPackProductData_1;
}
namespace GlobalNamespace {
class ILevelProductData;
}
namespace GlobalNamespace {
class OculusLevelProductPacksSO;
}
namespace GlobalNamespace {
class __OculusLevelProductCollectionModel__LevelPackProductData;
}
namespace GlobalNamespace {
class __OculusLevelProductCollectionModel__LevelPackRedirectionData;
}
namespace GlobalNamespace {
class __OculusLevelProductCollectionModel__LevelProductData;
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
class __OculusLevelProductCollectionModel__LevelPackProductData;
}
namespace GlobalNamespace {
class __OculusLevelProductCollectionModel__LevelPackRedirectionData;
}
namespace GlobalNamespace {
class __OculusLevelProductCollectionModel__LevelProductData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusLevelProductCollectionModel);
MARK_REF_PTR_T(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData);
MARK_REF_PTR_T(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData);
MARK_REF_PTR_T(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData);
// Type: ::LevelProductData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10965))
// CS Name: ::OculusLevelProductCollectionModel::LevelProductData*
class CORDL_TYPE __OculusLevelProductCollectionModel__LevelProductData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _levelId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelId, put = __cordl_internal_set__levelId))::StringW _levelId;

  /// @brief Field _sku, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sku, put = __cordl_internal_set__sku))::StringW _sku;

  __declspec(property(get = get_sku))::StringW sku;

  __declspec(property(get = get_levelId))::StringW levelId;

  __declspec(property(get = get_assetFile))::StringW assetFile;

  /// @brief Convert operator to "::GlobalNamespace::ILevelProductData"
  constexpr operator ::GlobalNamespace::ILevelProductData*() noexcept;

  /// @brief Convert to "::GlobalNamespace::ILevelProductData"
  constexpr ::GlobalNamespace::ILevelProductData* i___GlobalNamespace__ILevelProductData() noexcept;

  constexpr ::StringW& __cordl_internal_get__levelId();

  constexpr ::StringW const& __cordl_internal_get__levelId() const;

  constexpr void __cordl_internal_set__levelId(::StringW value);

  constexpr ::StringW& __cordl_internal_get__sku();

  constexpr ::StringW const& __cordl_internal_get__sku() const;

  constexpr void __cordl_internal_set__sku(::StringW value);

  /// @brief Method get_sku, addr 0x12a5f44, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_sku();

  /// @brief Method get_levelId, addr 0x12a5f4c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_levelId();

  /// @brief Method get_assetFile, addr 0x12a4010, size 0x1c, virtual false, abstract: false, final false
  inline ::StringW get_assetFile();

  static inline ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData* New_ctor(::StringW levelId, ::StringW sku);

  /// @brief Method .ctor, addr 0x12a5f54, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelId, ::StringW sku);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusLevelProductCollectionModel__LevelProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusLevelProductCollectionModel__LevelProductData(__OculusLevelProductCollectionModel__LevelProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusLevelProductCollectionModel__LevelProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusLevelProductCollectionModel__LevelProductData(__OculusLevelProductCollectionModel__LevelProductData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusLevelProductCollectionModel__LevelProductData();

public:
  /// @brief Field _levelId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____levelId;

  /// @brief Field _sku, offset: 0x18, size: 0x8, def value: None
  ::StringW ____sku;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData, ____levelId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData, ____sku) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelPackProductData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10966))
// CS Name: ::OculusLevelProductCollectionModel::LevelPackProductData*
class CORDL_TYPE __OculusLevelProductCollectionModel__LevelPackProductData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _levelPackId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackId, put = __cordl_internal_set__levelPackId))::StringW _levelPackId;

  /// @brief Field _sku, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sku, put = __cordl_internal_set__sku))::StringW _sku;

  /// @brief Field _levelProductsData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelProductsData,
                      put = __cordl_internal_set__levelProductsData))::ArrayW<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*,
                                                                              ::Array<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*> _levelProductsData;

  __declspec(property(get = get_sku))::StringW sku;

  __declspec(property(get = get_levelPackId))::StringW levelPackId;

  __declspec(property(get = get_levelProductsData))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>* levelProductsData;

  /// @brief Convert operator to "::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>"
  constexpr operator ::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*() noexcept;

  /// @brief Convert to "::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>"
  constexpr ::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*
  i___GlobalNamespace__ILevelPackProductData_1___GlobalNamespace____OculusLevelProductCollectionModel__LevelProductData__() noexcept;

  constexpr ::StringW& __cordl_internal_get__levelPackId();

  constexpr ::StringW const& __cordl_internal_get__levelPackId() const;

  constexpr void __cordl_internal_set__levelPackId(::StringW value);

  constexpr ::StringW& __cordl_internal_get__sku();

  constexpr ::StringW const& __cordl_internal_get__sku() const;

  constexpr void __cordl_internal_set__sku(::StringW value);

  constexpr ::ArrayW<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*>&
  __cordl_internal_get__levelProductsData();

  constexpr ::ArrayW<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*> const&
  __cordl_internal_get__levelProductsData() const;

  constexpr void __cordl_internal_set__levelProductsData(
      ::ArrayW<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*> value);

  /// @brief Method get_sku, addr 0x12a5f80, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_sku();

  /// @brief Method get_levelPackId, addr 0x12a5f88, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_levelPackId();

  /// @brief Method get_levelProductsData, addr 0x12a5f90, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>* get_levelProductsData();

  static inline ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*
  New_ctor(::StringW levelPackId, ::StringW sku,
           ::ArrayW<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*> levelProductsData);

  /// @brief Method .ctor, addr 0x12a5f98, size 0x3c, virtual false, abstract: false, final false
  inline void
  _ctor(::StringW levelPackId, ::StringW sku,
        ::ArrayW<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*> levelProductsData);

  // Ctor Parameters [CppParam { name: "", ty: "__OculusLevelProductCollectionModel__LevelPackProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusLevelProductCollectionModel__LevelPackProductData(__OculusLevelProductCollectionModel__LevelPackProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusLevelProductCollectionModel__LevelPackProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusLevelProductCollectionModel__LevelPackProductData(__OculusLevelProductCollectionModel__LevelPackProductData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusLevelProductCollectionModel__LevelPackProductData();

public:
  /// @brief Field _levelPackId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____levelPackId;

  /// @brief Field _sku, offset: 0x18, size: 0x8, def value: None
  ::StringW ____sku;

  /// @brief Field _levelProductsData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*> ____levelProductsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData, ____levelPackId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData, ____sku) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData, ____levelProductsData) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelPackRedirectionData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10967))
// CS Name: ::OculusLevelProductCollectionModel::LevelPackRedirectionData*
class CORDL_TYPE __OculusLevelProductCollectionModel__LevelPackRedirectionData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _targetLevelPackId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__targetLevelPackId, put = __cordl_internal_set__targetLevelPackId))::StringW _targetLevelPackId;

  /// @brief Field _shouldOwnLevelPackId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__shouldOwnLevelPackId, put = __cordl_internal_set__shouldOwnLevelPackId))::StringW _shouldOwnLevelPackId;

  /// @brief Field _redirectedSku, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__redirectedSku, put = __cordl_internal_set__redirectedSku))::StringW _redirectedSku;

  /// @brief Field _validUntilDate, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__validUntilDate, put = __cordl_internal_set__validUntilDate))::StringW _validUntilDate;

  __declspec(property(get = get_targetLevelPackId))::StringW targetLevelPackId;

  __declspec(property(get = get_shouldOwnLevelPackId))::StringW shouldOwnLevelPackId;

  __declspec(property(get = get_redirectedSku))::StringW redirectedSku;

  __declspec(property(get = get_validUntilDate))::StringW validUntilDate;

  constexpr ::StringW& __cordl_internal_get__targetLevelPackId();

  constexpr ::StringW const& __cordl_internal_get__targetLevelPackId() const;

  constexpr void __cordl_internal_set__targetLevelPackId(::StringW value);

  constexpr ::StringW& __cordl_internal_get__shouldOwnLevelPackId();

  constexpr ::StringW const& __cordl_internal_get__shouldOwnLevelPackId() const;

  constexpr void __cordl_internal_set__shouldOwnLevelPackId(::StringW value);

  constexpr ::StringW& __cordl_internal_get__redirectedSku();

  constexpr ::StringW const& __cordl_internal_get__redirectedSku() const;

  constexpr void __cordl_internal_set__redirectedSku(::StringW value);

  constexpr ::StringW& __cordl_internal_get__validUntilDate();

  constexpr ::StringW const& __cordl_internal_get__validUntilDate() const;

  constexpr void __cordl_internal_set__validUntilDate(::StringW value);

  /// @brief Method get_targetLevelPackId, addr 0x12a5fd4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_targetLevelPackId();

  /// @brief Method get_shouldOwnLevelPackId, addr 0x12a5fdc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_shouldOwnLevelPackId();

  /// @brief Method get_redirectedSku, addr 0x12a5fe4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_redirectedSku();

  /// @brief Method get_validUntilDate, addr 0x12a5fec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_validUntilDate();

  static inline ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData* New_ctor();

  /// @brief Method .ctor, addr 0x12a5ff4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__OculusLevelProductCollectionModel__LevelPackRedirectionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusLevelProductCollectionModel__LevelPackRedirectionData(__OculusLevelProductCollectionModel__LevelPackRedirectionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusLevelProductCollectionModel__LevelPackRedirectionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusLevelProductCollectionModel__LevelPackRedirectionData(__OculusLevelProductCollectionModel__LevelPackRedirectionData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusLevelProductCollectionModel__LevelPackRedirectionData();

public:
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
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData, ____targetLevelPackId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData, ____shouldOwnLevelPackId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData, ____redirectedSku) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData, ____validUntilDate) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::OculusLevelProductCollectionModel
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10968))
// CS Name: ::OculusLevelProductCollectionModel*
class CORDL_TYPE OculusLevelProductCollectionModel : public ::System::Object {
public:
  // Declarations
  using LevelPackRedirectionData = ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData;

  using LevelPackProductData = ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData;

  using LevelProductData = ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData;

  /// @brief Field _levelIdToProductData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelIdToProductData, put = __cordl_internal_set__levelIdToProductData))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>* _levelIdToProductData;

  /// @brief Field _levelPackIdToProductData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackIdToProductData, put = __cordl_internal_set__levelPackIdToProductData))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*>* _levelPackIdToProductData;

  /// @brief Field _levelPackRedirectionData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackRedirectionData, put = __cordl_internal_set__levelPackRedirectionData))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>* _levelPackRedirectionData;

  /// @brief Field _assetFileToSku, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__assetFileToSku, put = __cordl_internal_set__assetFileToSku))::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _assetFileToSku;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*& __cordl_internal_get__levelIdToProductData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*> const&
  __cordl_internal_get__levelIdToProductData() const;

  constexpr void __cordl_internal_set__levelIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*>*& __cordl_internal_get__levelPackIdToProductData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*>*> const&
  __cordl_internal_get__levelPackIdToProductData() const;

  constexpr void
  __cordl_internal_set__levelPackIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>*&
  __cordl_internal_get__levelPackRedirectionData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>*> const&
  __cordl_internal_get__levelPackRedirectionData() const;

  constexpr void
  __cordl_internal_set__levelPackRedirectionData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>* value);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__assetFileToSku();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__assetFileToSku() const;

  constexpr void __cordl_internal_set__assetFileToSku(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  static inline ::GlobalNamespace::OculusLevelProductCollectionModel*
  New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>>* levelProductPacksSOs);

  /// @brief Method .ctor, addr 0x12a5044, size 0xd20, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>>* levelProductPacksSOs);

  /// @brief Method GetLevelProductData, addr 0x12a5d64, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData* GetLevelProductData(::StringW levelId);

  /// @brief Method GetLevelPackProductData, addr 0x12a5ddc, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData* GetLevelPackProductData(::StringW levelPackId);

  /// @brief Method GetLevelSku, addr 0x12a5e54, size 0x78, virtual false, abstract: false, final false
  inline ::StringW GetLevelSku(::StringW assetFile);

  /// @brief Method GetLevelPackRedirectionData, addr 0x12a5ecc, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData* GetLevelPackRedirectionData(::StringW levelPackId);

  // Ctor Parameters [CppParam { name: "", ty: "OculusLevelProductCollectionModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusLevelProductCollectionModel(OculusLevelProductCollectionModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusLevelProductCollectionModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusLevelProductCollectionModel(OculusLevelProductCollectionModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusLevelProductCollectionModel();

public:
  /// @brief Field _levelIdToProductData, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>* ____levelIdToProductData;

  /// @brief Field _levelPackIdToProductData, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*>* ____levelPackIdToProductData;

  /// @brief Field _levelPackRedirectionData, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>* ____levelPackRedirectionData;

  /// @brief Field _assetFileToSku, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____assetFileToSku;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusLevelProductCollectionModel, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusLevelProductCollectionModel, ____levelIdToProductData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusLevelProductCollectionModel, ____levelPackIdToProductData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusLevelProductCollectionModel, ____levelPackRedirectionData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusLevelProductCollectionModel, ____assetFileToSku) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusLevelProductCollectionModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusLevelProductCollectionModel*, "", "OculusLevelProductCollectionModel");
NEED_NO_BOX(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*, "", "OculusLevelProductCollectionModel/LevelPackProductData");
NEED_NO_BOX(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*, "", "OculusLevelProductCollectionModel/LevelPackRedirectionData");
NEED_NO_BOX(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*, "", "OculusLevelProductCollectionModel/LevelProductData");
