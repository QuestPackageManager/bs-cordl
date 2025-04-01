#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamLevelProductCollectionModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ILevelPackProductData_1_def.hpp"
#include "GlobalNamespace/zzzz__ILevelProductData_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SteamLevelProductCollectionModel)
namespace GlobalNamespace {
class SteamLevelProductCollectionModel_LevelDepotData;
}
namespace GlobalNamespace {
class SteamLevelProductCollectionModel_LevelPackProductData;
}
namespace GlobalNamespace {
class SteamLevelProductCollectionModel_LevelPackRedirectionData;
}
namespace GlobalNamespace {
class SteamLevelProductCollectionModel_LevelProductData;
}
namespace GlobalNamespace {
class SteamLevelProductPacksSO;
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
class SteamLevelProductCollectionModel;
}
namespace GlobalNamespace {
class SteamLevelProductCollectionModel_LevelDepotData;
}
namespace GlobalNamespace {
class SteamLevelProductCollectionModel_LevelPackProductData;
}
namespace GlobalNamespace {
class SteamLevelProductCollectionModel_LevelPackRedirectionData;
}
namespace GlobalNamespace {
class SteamLevelProductCollectionModel_LevelProductData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SteamLevelProductCollectionModel);
MARK_REF_PTR_T(::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData);
MARK_REF_PTR_T(::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData);
MARK_REF_PTR_T(::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData);
MARK_REF_PTR_T(::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SteamLevelProductCollectionModel/LevelDepotData
class CORDL_TYPE SteamLevelProductCollectionModel_LevelDepotData : public ::System::Object {
public:
  // Declarations
  /// @brief Field checkDepots, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_checkDepots, put = __cordl_internal_set_checkDepots)) bool checkDepots;

  /// @brief Field noEnvironmentKeywordsDepotId, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_noEnvironmentKeywordsDepotId, put = __cordl_internal_set_noEnvironmentKeywordsDepotId)) uint32_t noEnvironmentKeywordsDepotId;

  static inline ::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData* New_ctor();

  constexpr bool const& __cordl_internal_get_checkDepots() const;

  constexpr bool& __cordl_internal_get_checkDepots();

  constexpr uint32_t const& __cordl_internal_get_noEnvironmentKeywordsDepotId() const;

  constexpr uint32_t& __cordl_internal_get_noEnvironmentKeywordsDepotId();

  constexpr void __cordl_internal_set_checkDepots(bool value);

  constexpr void __cordl_internal_set_noEnvironmentKeywordsDepotId(uint32_t value);

  /// @brief Method .ctor, addr 0x26e7a04, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamLevelProductCollectionModel_LevelDepotData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SteamLevelProductCollectionModel_LevelDepotData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SteamLevelProductCollectionModel_LevelDepotData(SteamLevelProductCollectionModel_LevelDepotData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SteamLevelProductCollectionModel_LevelDepotData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SteamLevelProductCollectionModel_LevelDepotData(SteamLevelProductCollectionModel_LevelDepotData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13151 };

  /// @brief Field checkDepots, offset: 0x10, size: 0x1, def value: None
  bool ___checkDepots;

  /// @brief Field noEnvironmentKeywordsDepotId, offset: 0x14, size: 0x4, def value: None
  uint32_t ___noEnvironmentKeywordsDepotId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData, ___checkDepots) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData, ___noEnvironmentKeywordsDepotId) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ILevelProductData, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SteamLevelProductCollectionModel/LevelProductData
class CORDL_TYPE SteamLevelProductCollectionModel_LevelProductData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _appId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__appId, put = __cordl_internal_set__appId)) uint32_t _appId;

  /// @brief Field _levelDepotData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelDepotData, put = __cordl_internal_set__levelDepotData)) ::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData* _levelDepotData;

  /// @brief Field _levelId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelId, put = __cordl_internal_set__levelId)) ::StringW _levelId;

  __declspec(property(get = get_appId)) uint32_t appId;

  __declspec(property(get = get_levelDepotData)) ::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData* levelDepotData;

  __declspec(property(get = get_levelId)) ::StringW levelId;

  /// @brief Convert operator to "::GlobalNamespace::ILevelProductData"
  constexpr operator ::GlobalNamespace::ILevelProductData*() noexcept;

  static inline ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData* New_ctor(::StringW levelId, uint32_t appId);

  constexpr uint32_t const& __cordl_internal_get__appId() const;

  constexpr uint32_t& __cordl_internal_get__appId();

  constexpr ::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData* const& __cordl_internal_get__levelDepotData() const;

  constexpr ::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData*& __cordl_internal_get__levelDepotData();

  constexpr ::StringW const& __cordl_internal_get__levelId() const;

  constexpr ::StringW& __cordl_internal_get__levelId();

  constexpr void __cordl_internal_set__appId(uint32_t value);

  constexpr void __cordl_internal_set__levelDepotData(::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData* value);

  constexpr void __cordl_internal_set__levelId(::StringW value);

  /// @brief Method .ctor, addr 0x26e7a24, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelId, uint32_t appId);

  /// @brief Method get_appId, addr 0x26e7a0c, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_appId();

  /// @brief Method get_levelDepotData, addr 0x26e7a1c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData* get_levelDepotData();

  /// @brief Method get_levelId, addr 0x26e7a14, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_levelId();

  /// @brief Convert to "::GlobalNamespace::ILevelProductData"
  constexpr ::GlobalNamespace::ILevelProductData* i___GlobalNamespace__ILevelProductData() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamLevelProductCollectionModel_LevelProductData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SteamLevelProductCollectionModel_LevelProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SteamLevelProductCollectionModel_LevelProductData(SteamLevelProductCollectionModel_LevelProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SteamLevelProductCollectionModel_LevelProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SteamLevelProductCollectionModel_LevelProductData(SteamLevelProductCollectionModel_LevelProductData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13152 };

  /// @brief Field _levelId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____levelId;

  /// @brief Field _appId, offset: 0x18, size: 0x4, def value: None
  uint32_t ____appId;

  /// @brief Field _levelDepotData, offset: 0x20, size: 0x8, def value: None
  ::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData* ____levelDepotData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData, ____levelId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData, ____appId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData, ____levelDepotData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ILevelPackProductData`1<TLevelProductData>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SteamLevelProductCollectionModel/LevelPackProductData
class CORDL_TYPE SteamLevelProductCollectionModel_LevelPackProductData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _bundleId, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__bundleId, put = __cordl_internal_set__bundleId)) uint32_t _bundleId;

  /// @brief Field _levelPackId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackId, put = __cordl_internal_set__levelPackId)) ::StringW _levelPackId;

  /// @brief Field _levelProductsData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelProductsData,
                      put = __cordl_internal_set__levelProductsData)) ::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*,
                                                                               ::Array<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*>
      _levelProductsData;

  __declspec(property(get = get_bundleId)) uint32_t bundleId;

  __declspec(property(get = get_levelPackId)) ::StringW levelPackId;

  __declspec(property(get = get_levelProductsData)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>* levelProductsData;

  /// @brief Convert operator to "::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>"
  constexpr operator ::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*() noexcept;

  static inline ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*
  New_ctor(::StringW levelPackId, uint32_t bundleId, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>* levelProducts);

  constexpr uint32_t const& __cordl_internal_get__bundleId() const;

  constexpr uint32_t& __cordl_internal_get__bundleId();

  constexpr ::StringW const& __cordl_internal_get__levelPackId() const;

  constexpr ::StringW& __cordl_internal_get__levelPackId();

  constexpr ::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*, ::Array<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*> const&
  __cordl_internal_get__levelProductsData() const;

  constexpr ::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*, ::Array<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*>&
  __cordl_internal_get__levelProductsData();

  constexpr void __cordl_internal_set__bundleId(uint32_t value);

  constexpr void __cordl_internal_set__levelPackId(::StringW value);

  constexpr void __cordl_internal_set__levelProductsData(
      ::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*, ::Array<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*> value);

  /// @brief Method .ctor, addr 0x26e7a6c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::StringW levelPackId, uint32_t bundleId, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>* levelProducts);

  /// @brief Method get_bundleId, addr 0x26e7a54, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_bundleId();

  /// @brief Method get_levelPackId, addr 0x26e7a5c, size 0x8, virtual true, abstract: false, final true
  inline ::StringW get_levelPackId();

  /// @brief Method get_levelProductsData, addr 0x26e7a64, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>* get_levelProductsData();

  /// @brief Convert to "::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>"
  constexpr ::GlobalNamespace::ILevelPackProductData_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*
  i___GlobalNamespace__ILevelPackProductData_1___GlobalNamespace__SteamLevelProductCollectionModel_LevelProductData__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamLevelProductCollectionModel_LevelPackProductData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SteamLevelProductCollectionModel_LevelPackProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SteamLevelProductCollectionModel_LevelPackProductData(SteamLevelProductCollectionModel_LevelPackProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SteamLevelProductCollectionModel_LevelPackProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SteamLevelProductCollectionModel_LevelPackProductData(SteamLevelProductCollectionModel_LevelPackProductData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13153 };

  /// @brief Field _levelPackId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____levelPackId;

  /// @brief Field _bundleId, offset: 0x18, size: 0x4, def value: None
  uint32_t ____bundleId;

  /// @brief Field _levelProductsData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*, ::Array<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*> ____levelProductsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData, ____levelPackId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData, ____bundleId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData, ____levelProductsData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SteamLevelProductCollectionModel/LevelPackRedirectionData
class CORDL_TYPE SteamLevelProductCollectionModel_LevelPackRedirectionData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _redirectedBundleId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__redirectedBundleId, put = __cordl_internal_set__redirectedBundleId)) uint32_t _redirectedBundleId;

  /// @brief Field _shouldOwnLevelPackId, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__shouldOwnLevelPackId, put = __cordl_internal_set__shouldOwnLevelPackId)) ::StringW _shouldOwnLevelPackId;

  /// @brief Field _targetLevelPackId, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__targetLevelPackId, put = __cordl_internal_set__targetLevelPackId)) ::StringW _targetLevelPackId;

  /// @brief Field _validUntilDate, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__validUntilDate, put = __cordl_internal_set__validUntilDate)) ::StringW _validUntilDate;

  __declspec(property(get = get_redirectedBundleId)) uint32_t redirectedBundleId;

  __declspec(property(get = get_shouldOwnLevelPackId)) ::StringW shouldOwnLevelPackId;

  __declspec(property(get = get_targetLevelPackId)) ::StringW targetLevelPackId;

  __declspec(property(get = get_validUntilDate)) ::StringW validUntilDate;

  static inline ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData* New_ctor();

  constexpr uint32_t const& __cordl_internal_get__redirectedBundleId() const;

  constexpr uint32_t& __cordl_internal_get__redirectedBundleId();

  constexpr ::StringW const& __cordl_internal_get__shouldOwnLevelPackId() const;

  constexpr ::StringW& __cordl_internal_get__shouldOwnLevelPackId();

  constexpr ::StringW const& __cordl_internal_get__targetLevelPackId() const;

  constexpr ::StringW& __cordl_internal_get__targetLevelPackId();

  constexpr ::StringW const& __cordl_internal_get__validUntilDate() const;

  constexpr ::StringW& __cordl_internal_get__validUntilDate();

  constexpr void __cordl_internal_set__redirectedBundleId(uint32_t value);

  constexpr void __cordl_internal_set__shouldOwnLevelPackId(::StringW value);

  constexpr void __cordl_internal_set__targetLevelPackId(::StringW value);

  constexpr void __cordl_internal_set__validUntilDate(::StringW value);

  /// @brief Method .ctor, addr 0x26e7b0c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_redirectedBundleId, addr 0x26e7afc, size 0x8, virtual false, abstract: false, final false
  inline uint32_t get_redirectedBundleId();

  /// @brief Method get_shouldOwnLevelPackId, addr 0x26e7af4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_shouldOwnLevelPackId();

  /// @brief Method get_targetLevelPackId, addr 0x26e7aec, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_targetLevelPackId();

  /// @brief Method get_validUntilDate, addr 0x26e7b04, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_validUntilDate();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamLevelProductCollectionModel_LevelPackRedirectionData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SteamLevelProductCollectionModel_LevelPackRedirectionData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SteamLevelProductCollectionModel_LevelPackRedirectionData(SteamLevelProductCollectionModel_LevelPackRedirectionData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SteamLevelProductCollectionModel_LevelPackRedirectionData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SteamLevelProductCollectionModel_LevelPackRedirectionData(SteamLevelProductCollectionModel_LevelPackRedirectionData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13154 };

  /// @brief Field _targetLevelPackId, offset: 0x10, size: 0x8, def value: None
  ::StringW ____targetLevelPackId;

  /// @brief Field _shouldOwnLevelPackId, offset: 0x18, size: 0x8, def value: None
  ::StringW ____shouldOwnLevelPackId;

  /// @brief Field _redirectedBundleId, offset: 0x20, size: 0x4, def value: None
  uint32_t ____redirectedBundleId;

  /// @brief Field _validUntilDate, offset: 0x28, size: 0x8, def value: None
  ::StringW ____validUntilDate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData, ____targetLevelPackId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData, ____shouldOwnLevelPackId) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData, ____redirectedBundleId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData, ____validUntilDate) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SteamLevelProductCollectionModel
class CORDL_TYPE SteamLevelProductCollectionModel : public ::System::Object {
public:
  // Declarations
  using LevelDepotData = ::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData;

  using LevelPackProductData = ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData;

  using LevelPackRedirectionData = ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData;

  using LevelProductData = ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData;

  /// @brief Field _levelIdToProductData, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__levelIdToProductData,
                      put = __cordl_internal_set__levelIdToProductData)) ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*
      _levelIdToProductData;

  /// @brief Field _levelPackIdToProductData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackIdToProductData, put = __cordl_internal_set__levelPackIdToProductData)) ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*>* _levelPackIdToProductData;

  /// @brief Field _levelPackRedirectionData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackRedirectionData, put = __cordl_internal_set__levelPackRedirectionData)) ::System::Collections::Generic::Dictionary_2<
      ::StringW, ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>* _levelPackRedirectionData;

  /// @brief Field _maxPossibleInstalledDepots, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__maxPossibleInstalledDepots, put = __cordl_internal_set__maxPossibleInstalledDepots)) int32_t _maxPossibleInstalledDepots;

  __declspec(property(get = get_levelProductDataCount)) int32_t levelProductDataCount;

  __declspec(property(get = get_levelProductsData)) ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>* levelProductsData;

  /// @brief Method GetLevelPackProductData, addr 0x26e7954, size 0x58, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData* GetLevelPackProductData(::StringW levelPackId);

  /// @brief Method GetLevelPackRedirectionData, addr 0x26e79ac, size 0x58, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData* GetLevelPackRedirectionData(::StringW levelPackId);

  /// @brief Method GetLevelProductData, addr 0x26e78fc, size 0x58, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData* GetLevelProductData(::StringW levelId);

  static inline ::GlobalNamespace::SteamLevelProductCollectionModel* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>* levelProductsSOs);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>* const& __cordl_internal_get__levelIdToProductData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*& __cordl_internal_get__levelIdToProductData();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*>* const&
  __cordl_internal_get__levelPackIdToProductData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*>*& __cordl_internal_get__levelPackIdToProductData();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>* const&
  __cordl_internal_get__levelPackRedirectionData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>*& __cordl_internal_get__levelPackRedirectionData();

  constexpr int32_t const& __cordl_internal_get__maxPossibleInstalledDepots() const;

  constexpr int32_t& __cordl_internal_get__maxPossibleInstalledDepots();

  constexpr void __cordl_internal_set__levelIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>* value);

  constexpr void
  __cordl_internal_set__levelPackIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*>* value);

  constexpr void
  __cordl_internal_set__levelPackRedirectionData(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>* value);

  constexpr void __cordl_internal_set__maxPossibleInstalledDepots(int32_t value);

  /// @brief Method .ctor, addr 0x26e6fc8, size 0x8e4, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamLevelProductPacksSO>>* levelProductsSOs);

  /// @brief Method get_levelProductDataCount, addr 0x26e6fc0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_levelProductDataCount();

  /// @brief Method get_levelProductsData, addr 0x26e78ac, size 0x50, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>* get_levelProductsData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamLevelProductCollectionModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SteamLevelProductCollectionModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SteamLevelProductCollectionModel(SteamLevelProductCollectionModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SteamLevelProductCollectionModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SteamLevelProductCollectionModel(SteamLevelProductCollectionModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13155 };

  /// @brief Field _levelIdToProductData, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>* ____levelIdToProductData;

  /// @brief Field _levelPackIdToProductData, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*>* ____levelPackIdToProductData;

  /// @brief Field _levelPackRedirectionData, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>* ____levelPackRedirectionData;

  /// @brief Field _maxPossibleInstalledDepots, offset: 0x28, size: 0x4, def value: None
  int32_t ____maxPossibleInstalledDepots;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SteamLevelProductCollectionModel, ____levelIdToProductData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamLevelProductCollectionModel, ____levelPackIdToProductData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamLevelProductCollectionModel, ____levelPackRedirectionData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamLevelProductCollectionModel, ____maxPossibleInstalledDepots) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SteamLevelProductCollectionModel, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SteamLevelProductCollectionModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamLevelProductCollectionModel*, "", "SteamLevelProductCollectionModel");
NEED_NO_BOX(::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamLevelProductCollectionModel_LevelDepotData*, "", "SteamLevelProductCollectionModel/LevelDepotData");
NEED_NO_BOX(::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*, "", "SteamLevelProductCollectionModel/LevelPackProductData");
NEED_NO_BOX(::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*, "", "SteamLevelProductCollectionModel/LevelPackRedirectionData");
NEED_NO_BOX(::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*, "", "SteamLevelProductCollectionModel/LevelProductData");
