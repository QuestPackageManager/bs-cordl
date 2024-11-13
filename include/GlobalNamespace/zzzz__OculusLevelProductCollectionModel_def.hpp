#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusLevelProductCollectionModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(OculusLevelProductCollectionModel)
namespace GlobalNamespace {
struct BeatmapLevelDataVersion;
}
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
class __OculusLevelProductCollectionModel__AdditionalSkus;
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
class __OculusLevelProductCollectionModel__AdditionalSkus;
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
MARK_REF_PTR_T(::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus);
MARK_REF_PTR_T(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData);
MARK_REF_PTR_T(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData);
MARK_REF_PTR_T(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData);
// Type: ::AdditionalSkus
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusLevelProductCollectionModel::AdditionalSkus*
class CORDL_TYPE __OculusLevelProductCollectionModel__AdditionalSkus : public ::System::Object {
public:
  // Declarations
  /// @brief Field checkAdditionalSkus, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_checkAdditionalSkus, put = __cordl_internal_set_checkAdditionalSkus)) bool checkAdditionalSkus;

  /// @brief Field noEnvironmentKeywordsSku, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_noEnvironmentKeywordsSku, put = __cordl_internal_set_noEnvironmentKeywordsSku)) ::StringW noEnvironmentKeywordsSku;

  static inline ::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus* New_ctor();

  constexpr bool const& __cordl_internal_get_checkAdditionalSkus() const;

  constexpr bool& __cordl_internal_get_checkAdditionalSkus();

  constexpr ::StringW const& __cordl_internal_get_noEnvironmentKeywordsSku() const;

  constexpr ::StringW& __cordl_internal_get_noEnvironmentKeywordsSku();

  constexpr void __cordl_internal_set_checkAdditionalSkus(bool value);

  constexpr void __cordl_internal_set_noEnvironmentKeywordsSku(::StringW value);

  /// @brief Method .ctor, addr 0x26b0efc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusLevelProductCollectionModel__AdditionalSkus();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OculusLevelProductCollectionModel__AdditionalSkus", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusLevelProductCollectionModel__AdditionalSkus(__OculusLevelProductCollectionModel__AdditionalSkus&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusLevelProductCollectionModel__AdditionalSkus", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusLevelProductCollectionModel__AdditionalSkus(__OculusLevelProductCollectionModel__AdditionalSkus const&) = delete;

  /// @brief Field checkAdditionalSkus, offset: 0x10, size: 0x1, def value: None
  bool ___checkAdditionalSkus;

  /// @brief Field noEnvironmentKeywordsSku, offset: 0x18, size: 0x8, def value: None
  ::StringW ___noEnvironmentKeywordsSku;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13102 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus, ___checkAdditionalSkus) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus, ___noEnvironmentKeywordsSku) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelProductData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusLevelProductCollectionModel::LevelProductData*
class CORDL_TYPE __OculusLevelProductCollectionModel__LevelProductData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _additionalSkus, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalSkus, put = __cordl_internal_set__additionalSkus)) ::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus* _additionalSkus;

  /// @brief Field _levelId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelId, put = __cordl_internal_set__levelId)) ::StringW _levelId;

  /// @brief Field _sku, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sku, put = __cordl_internal_set__sku)) ::StringW _sku;

  __declspec(property(get = get_additionalSkus)) ::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus* additionalSkus;

  __declspec(property(get = get_levelId)) ::StringW levelId;

  __declspec(property(get = get_sku)) ::StringW sku;

  /// @brief Convert operator to "::GlobalNamespace::ILevelProductData"
  constexpr operator ::GlobalNamespace::ILevelProductData*() noexcept;

  static inline ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData* New_ctor();

  constexpr ::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus*& __cordl_internal_get__additionalSkus();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus*> const& __cordl_internal_get__additionalSkus() const;

  constexpr ::StringW const& __cordl_internal_get__levelId() const;

  constexpr ::StringW& __cordl_internal_get__levelId();

  constexpr ::StringW const& __cordl_internal_get__sku() const;

  constexpr ::StringW& __cordl_internal_get__sku();

  constexpr void __cordl_internal_set__additionalSkus(::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus* value);

  constexpr void __cordl_internal_set__levelId(::StringW value);

  constexpr void __cordl_internal_set__sku(::StringW value);

  /// @brief Method .ctor, addr 0x26b0f1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_additionalSkus, addr 0x26b0f0c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus* get_additionalSkus();

  /// @brief Method get_levelId, addr 0x26b0f14, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_levelId();

  /// @brief Method get_sku, addr 0x26b0f04, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_sku();

  /// @brief Convert to "::GlobalNamespace::ILevelProductData"
  constexpr ::GlobalNamespace::ILevelProductData* i___GlobalNamespace__ILevelProductData() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusLevelProductCollectionModel__LevelProductData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OculusLevelProductCollectionModel__LevelProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusLevelProductCollectionModel__LevelProductData(__OculusLevelProductCollectionModel__LevelProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusLevelProductCollectionModel__LevelProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusLevelProductCollectionModel__LevelProductData(__OculusLevelProductCollectionModel__LevelProductData const&) = delete;

  /// @brief Field _levelId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____levelId;

  /// @brief Field _sku, offset: 0x18, size: 0x8, def value: None
  ::StringW ____sku;

  /// @brief Field _additionalSkus, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus* ____additionalSkus;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13103 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData, ____levelId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData, ____sku) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData, ____additionalSkus) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelPackProductData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusLevelProductCollectionModel::LevelPackProductData*
class CORDL_TYPE __OculusLevelProductCollectionModel__LevelPackProductData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _additionalSkus, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__additionalSkus, put = __cordl_internal_set__additionalSkus)) ::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus* _additionalSkus;

  /// @brief Field _levelPackId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackId, put = __cordl_internal_set__levelPackId)) ::StringW _levelPackId;

  /// @brief Field _levelProductsData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__levelProductsData,
                      put = __cordl_internal_set__levelProductsData)) ::ArrayW<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*,
                                                                               ::Array<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*>
      _levelProductsData;

  /// @brief Field _sku, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sku, put = __cordl_internal_set__sku)) ::StringW _sku;

  __declspec(property(get = get_additionalSkus)) ::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus* additionalSkus;

  __declspec(property(get = get_levelPackId)) ::StringW levelPackId;

  __declspec(property(get = get_levelProductsData)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>* levelProductsData;

  __declspec(property(get = get_sku)) ::StringW sku;

  /// @brief Convert operator to "::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>"
  constexpr operator ::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*() noexcept;

  static inline ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*
  New_ctor(::StringW levelPackId, ::StringW sku, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>* levelProductsData);

  constexpr ::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus*& __cordl_internal_get__additionalSkus();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus*> const& __cordl_internal_get__additionalSkus() const;

  constexpr ::StringW const& __cordl_internal_get__levelPackId() const;

  constexpr ::StringW& __cordl_internal_get__levelPackId();

  constexpr ::ArrayW<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*> const&
  __cordl_internal_get__levelProductsData() const;

  constexpr ::ArrayW<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*>&
  __cordl_internal_get__levelProductsData();

  constexpr ::StringW const& __cordl_internal_get__sku() const;

  constexpr ::StringW& __cordl_internal_get__sku();

  constexpr void __cordl_internal_set__additionalSkus(::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus* value);

  constexpr void __cordl_internal_set__levelPackId(::StringW value);

  constexpr void __cordl_internal_set__levelProductsData(
      ::ArrayW<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*> value);

  constexpr void __cordl_internal_set__sku(::StringW value);

  /// @brief Method .ctor, addr 0x26b0f44, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelPackId, ::StringW sku, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>* levelProductsData);

  /// @brief Method get_additionalSkus, addr 0x26b0f2c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus* get_additionalSkus();

  /// @brief Method get_levelPackId, addr 0x26b0f34, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_levelPackId();

  /// @brief Method get_levelProductsData, addr 0x26b0f3c, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>* get_levelProductsData();

  /// @brief Method get_sku, addr 0x26b0f24, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_sku();

  /// @brief Convert to "::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>"
  constexpr ::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*
  i___GlobalNamespace__ILevelPackProductData_1___GlobalNamespace____OculusLevelProductCollectionModel__LevelProductData__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusLevelProductCollectionModel__LevelPackProductData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OculusLevelProductCollectionModel__LevelPackProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusLevelProductCollectionModel__LevelPackProductData(__OculusLevelProductCollectionModel__LevelPackProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusLevelProductCollectionModel__LevelPackProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusLevelProductCollectionModel__LevelPackProductData(__OculusLevelProductCollectionModel__LevelPackProductData const&) = delete;

  /// @brief Field _levelPackId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____levelPackId;

  /// @brief Field _sku, offset: 0x18, size: 0x8, def value: None
  ::StringW ____sku;

  /// @brief Field _additionalSkus, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus* ____additionalSkus;

  /// @brief Field _levelProductsData, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*, ::Array<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*> ____levelProductsData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13104 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData, ____levelPackId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData, ____sku) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData, ____additionalSkus) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData, ____levelProductsData) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelPackRedirectionData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusLevelProductCollectionModel::LevelPackRedirectionData*
class CORDL_TYPE __OculusLevelProductCollectionModel__LevelPackRedirectionData : public ::System::Object {
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

  static inline ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData* New_ctor();

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

  /// @brief Method .ctor, addr 0x26b0fe0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_redirectedSku, addr 0x26b0fd0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_redirectedSku();

  /// @brief Method get_shouldOwnLevelPackId, addr 0x26b0fc8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_shouldOwnLevelPackId();

  /// @brief Method get_targetLevelPackId, addr 0x26b0fc0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_targetLevelPackId();

  /// @brief Method get_validUntilDate, addr 0x26b0fd8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_validUntilDate();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __OculusLevelProductCollectionModel__LevelPackRedirectionData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__OculusLevelProductCollectionModel__LevelPackRedirectionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __OculusLevelProductCollectionModel__LevelPackRedirectionData(__OculusLevelProductCollectionModel__LevelPackRedirectionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__OculusLevelProductCollectionModel__LevelPackRedirectionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __OculusLevelProductCollectionModel__LevelPackRedirectionData(__OculusLevelProductCollectionModel__LevelPackRedirectionData const&) = delete;

  /// @brief Field _targetLevelPackId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____targetLevelPackId;

  /// @brief Field _shouldOwnLevelPackId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____shouldOwnLevelPackId;

  /// @brief Field _redirectedSku, offset: 0x20, size: 0x8, def value: None
  ::StringW ____redirectedSku;

  /// @brief Field _validUntilDate, offset: 0x28, size: 0x8, def value: None
  ::StringW ____validUntilDate;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13105 };

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
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusLevelProductCollectionModel*
class CORDL_TYPE OculusLevelProductCollectionModel : public ::System::Object {
public:
  // Declarations
  using AdditionalSkus = ::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus;

  using LevelPackProductData = ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData;

  using LevelPackRedirectionData = ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData;

  using LevelProductData = ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData;

  /// @brief Field _assetFileToSku, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__assetFileToSku, put = __cordl_internal_set__assetFileToSku)) ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* _assetFileToSku;

  /// @brief Field _levelIdToProductData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelIdToProductData, put = __cordl_internal_set__levelIdToProductData)) ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>* _levelIdToProductData;

  /// @brief Field _levelPackIdToProductData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackIdToProductData, put = __cordl_internal_set__levelPackIdToProductData)) ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*>* _levelPackIdToProductData;

  /// @brief Field _levelPackRedirectionData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackRedirectionData, put = __cordl_internal_set__levelPackRedirectionData)) ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>* _levelPackRedirectionData;

  /// @brief Method GetLevelPackProductData, addr 0x26b0d94, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData* GetLevelPackProductData(::StringW levelPackId);

  /// @brief Method GetLevelPackRedirectionData, addr 0x26b0e84, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData* GetLevelPackRedirectionData(::StringW levelPackId);

  /// @brief Method GetLevelProductData, addr 0x26b0d1c, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData* GetLevelProductData(::StringW levelId);

  /// @brief Method GetLevelSku, addr 0x26b0e0c, size 0x78, virtual false, abstract: false, final false
  inline ::StringW GetLevelSku(::StringW assetFile);

  /// @brief Method InsertAdditionalSkuIfValid, addr 0x26b0c58, size 0xc4, virtual false, abstract: false, final false
  inline void InsertAdditionalSkuIfValid(::StringW levelId, ::StringW additionalSku, ::GlobalNamespace::BeatmapLevelDataVersion additionalSkuType);

  static inline ::GlobalNamespace::OculusLevelProductCollectionModel*
  New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OculusLevelProductPacksSO>>* levelProductPacksSOs);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& __cordl_internal_get__assetFileToSku();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*> const& __cordl_internal_get__assetFileToSku() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*& __cordl_internal_get__levelIdToProductData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*> const&
  __cordl_internal_get__levelIdToProductData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*>*& __cordl_internal_get__levelPackIdToProductData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*>*> const&
  __cordl_internal_get__levelPackIdToProductData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>*&
  __cordl_internal_get__levelPackRedirectionData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>*> const&
  __cordl_internal_get__levelPackRedirectionData() const;

  constexpr void __cordl_internal_set__assetFileToSku(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value);

  constexpr void __cordl_internal_set__levelIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>* value);

  constexpr void
  __cordl_internal_set__levelPackIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*>* value);

  constexpr void
  __cordl_internal_set__levelPackRedirectionData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>* value);

  /// @brief Method .ctor, addr 0x26b0188, size 0xad0, virtual false, abstract: false, final false
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

  /// @brief Field _levelIdToProductData, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>* ____levelIdToProductData;

  /// @brief Field _levelPackIdToProductData, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*>* ____levelPackIdToProductData;

  /// @brief Field _levelPackRedirectionData, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>* ____levelPackRedirectionData;

  /// @brief Field _assetFileToSku, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* ____assetFileToSku;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13106 };

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
NEED_NO_BOX(::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusLevelProductCollectionModel__AdditionalSkus*, "", "OculusLevelProductCollectionModel/AdditionalSkus");
NEED_NO_BOX(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*, "", "OculusLevelProductCollectionModel/LevelPackProductData");
NEED_NO_BOX(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*, "", "OculusLevelProductCollectionModel/LevelPackRedirectionData");
NEED_NO_BOX(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*, "", "OculusLevelProductCollectionModel/LevelProductData");
