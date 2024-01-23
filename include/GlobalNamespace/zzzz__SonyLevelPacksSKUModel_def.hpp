#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SonyLevelPacksSKUModel)
namespace GlobalNamespace {
class BeatmapLevelPackSO;
}
namespace GlobalNamespace {
class BeatmapLevelSO;
}
namespace GlobalNamespace {
class __SonyLevelPacksSKUModel__LevelPackProductData;
}
namespace GlobalNamespace {
class __SonyLevelPacksSKUModel__LevelProductData;
}
namespace GlobalNamespace {
class __SonyLevelPacksSKUModel__PricePerBundlePair;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyLevelPacksSKUModel;
}
namespace GlobalNamespace {
class __SonyLevelPacksSKUModel__LevelPackProductData;
}
namespace GlobalNamespace {
class __SonyLevelPacksSKUModel__LevelProductData;
}
namespace GlobalNamespace {
class __SonyLevelPacksSKUModel__PricePerBundlePair;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyLevelPacksSKUModel);
MARK_REF_PTR_T(::GlobalNamespace::__SonyLevelPacksSKUModel__LevelPackProductData);
MARK_REF_PTR_T(::GlobalNamespace::__SonyLevelPacksSKUModel__LevelProductData);
MARK_REF_PTR_T(::GlobalNamespace::__SonyLevelPacksSKUModel__PricePerBundlePair);
// Type: ::PricePerBundlePair
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4584))
// CS Name: ::SonyLevelPacksSKUModel::PricePerBundlePair*
class CORDL_TYPE __SonyLevelPacksSKUModel__PricePerBundlePair : public ::System::Object {
public:
  // Declarations
  /// @brief Field _pricePerBundle, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__pricePerBundle, put = __cordl_internal_set__pricePerBundle)) float_t _pricePerBundle;

  /// @brief Field _levelsCount, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__levelsCount, put = __cordl_internal_set__levelsCount)) int32_t _levelsCount;

  __declspec(property(get = get_pricePerBundle)) float_t pricePerBundle;

  __declspec(property(get = get_levelsCount)) int32_t levelsCount;

  constexpr float_t& __cordl_internal_get__pricePerBundle();

  constexpr float_t const& __cordl_internal_get__pricePerBundle() const;

  constexpr void __cordl_internal_set__pricePerBundle(float_t value);

  constexpr int32_t& __cordl_internal_get__levelsCount();

  constexpr int32_t const& __cordl_internal_get__levelsCount() const;

  constexpr void __cordl_internal_set__levelsCount(int32_t value);

  /// @brief Method get_pricePerBundle, addr 0x23699dc, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pricePerBundle();

  /// @brief Method get_levelsCount, addr 0x23699e4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_levelsCount();

  static inline ::GlobalNamespace::__SonyLevelPacksSKUModel__PricePerBundlePair* New_ctor();

  /// @brief Method .ctor, addr 0x23699ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelPacksSKUModel__PricePerBundlePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SonyLevelPacksSKUModel__PricePerBundlePair(__SonyLevelPacksSKUModel__PricePerBundlePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelPacksSKUModel__PricePerBundlePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SonyLevelPacksSKUModel__PricePerBundlePair(__SonyLevelPacksSKUModel__PricePerBundlePair const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyLevelPacksSKUModel__PricePerBundlePair();

public:
  /// @brief Field _pricePerBundle, offset: 0x10, size: 0x4, def value: None
  float_t ____pricePerBundle;

  /// @brief Field _levelsCount, offset: 0x14, size: 0x4, def value: None
  int32_t ____levelsCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyLevelPacksSKUModel__PricePerBundlePair, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelPacksSKUModel__PricePerBundlePair, ____pricePerBundle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelPacksSKUModel__PricePerBundlePair, ____levelsCount) == 0x14, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelProductData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4585))
// CS Name: ::SonyLevelPacksSKUModel::LevelProductData*
class CORDL_TYPE __SonyLevelPacksSKUModel__LevelProductData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _levelIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__levelIndex, put = __cordl_internal_set__levelIndex)) int32_t _levelIndex;

  /// @brief Field _level, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__level, put = __cordl_internal_set__level))::UnityW<::GlobalNamespace::BeatmapLevelSO> _level;

  __declspec(property(get = get_levelIndex)) int32_t levelIndex;

  __declspec(property(get = get_level))::UnityW<::GlobalNamespace::BeatmapLevelSO> level;

  constexpr int32_t& __cordl_internal_get__levelIndex();

  constexpr int32_t const& __cordl_internal_get__levelIndex() const;

  constexpr void __cordl_internal_set__levelIndex(int32_t value);

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO>& __cordl_internal_get__level();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelSO> const& __cordl_internal_get__level() const;

  constexpr void __cordl_internal_set__level(::UnityW<::GlobalNamespace::BeatmapLevelSO> value);

  /// @brief Method get_levelIndex, addr 0x23699f4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_levelIndex();

  /// @brief Method get_level, addr 0x23699fc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapLevelSO> get_level();

  static inline ::GlobalNamespace::__SonyLevelPacksSKUModel__LevelProductData* New_ctor();

  /// @brief Method .ctor, addr 0x2369a04, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelPacksSKUModel__LevelProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SonyLevelPacksSKUModel__LevelProductData(__SonyLevelPacksSKUModel__LevelProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelPacksSKUModel__LevelProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SonyLevelPacksSKUModel__LevelProductData(__SonyLevelPacksSKUModel__LevelProductData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyLevelPacksSKUModel__LevelProductData();

public:
  /// @brief Field _levelIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ____levelIndex;

  /// @brief Field _level, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelSO> ____level;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelProductData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelPacksSKUModel__LevelProductData, ____levelIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelPacksSKUModel__LevelProductData, ____level) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::LevelPackProductData
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4586))
// CS Name: ::SonyLevelPacksSKUModel::LevelPackProductData*
class CORDL_TYPE __SonyLevelPacksSKUModel__LevelPackProductData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _packIndex, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__packIndex, put = __cordl_internal_set__packIndex)) int32_t _packIndex;

  /// @brief Field _levelPack, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPack, put = __cordl_internal_set__levelPack))::UnityW<::GlobalNamespace::BeatmapLevelPackSO> _levelPack;

  /// @brief Field _levelProductsData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelProductsData,
                      put = __cordl_internal_set__levelProductsData))::ArrayW<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelProductData*,
                                                                              ::Array<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelProductData*>*> _levelProductsData;

  __declspec(property(get = get_packIndex)) int32_t packIndex;

  __declspec(property(get = get_levelPack))::UnityW<::GlobalNamespace::BeatmapLevelPackSO> levelPack;

  __declspec(property(
      get = get_levelProductsData))::ArrayW<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelProductData*>*> levelProductsData;

  constexpr int32_t& __cordl_internal_get__packIndex();

  constexpr int32_t const& __cordl_internal_get__packIndex() const;

  constexpr void __cordl_internal_set__packIndex(int32_t value);

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelPackSO>& __cordl_internal_get__levelPack();

  constexpr ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> const& __cordl_internal_get__levelPack() const;

  constexpr void __cordl_internal_set__levelPack(::UnityW<::GlobalNamespace::BeatmapLevelPackSO> value);

  constexpr ::ArrayW<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelProductData*>*>&
  __cordl_internal_get__levelProductsData();

  constexpr ::ArrayW<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelProductData*>*> const&
  __cordl_internal_get__levelProductsData() const;

  constexpr void
  __cordl_internal_set__levelProductsData(::ArrayW<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelProductData*>*> value);

  /// @brief Method get_packIndex, addr 0x2369a0c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_packIndex();

  /// @brief Method get_levelPack, addr 0x2369a14, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> get_levelPack();

  /// @brief Method get_levelProductsData, addr 0x2369a1c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelProductData*>*> get_levelProductsData();

  static inline ::GlobalNamespace::__SonyLevelPacksSKUModel__LevelPackProductData* New_ctor();

  /// @brief Method .ctor, addr 0x2369a24, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelPacksSKUModel__LevelPackProductData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SonyLevelPacksSKUModel__LevelPackProductData(__SonyLevelPacksSKUModel__LevelPackProductData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SonyLevelPacksSKUModel__LevelPackProductData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SonyLevelPacksSKUModel__LevelPackProductData(__SonyLevelPacksSKUModel__LevelPackProductData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SonyLevelPacksSKUModel__LevelPackProductData();

public:
  /// @brief Field _packIndex, offset: 0x10, size: 0x4, def value: None
  int32_t ____packIndex;

  /// @brief Field _levelPack, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapLevelPackSO> ____levelPack;

  /// @brief Field _levelProductsData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelProductData*, ::Array<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelProductData*>*> ____levelProductsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelPackProductData, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelPacksSKUModel__LevelPackProductData, ____packIndex) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelPacksSKUModel__LevelPackProductData, ____levelPack) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__SonyLevelPacksSKUModel__LevelPackProductData, ____levelProductsData) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::SonyLevelPacksSKUModel
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15857))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4587))
// CS Name: ::SonyLevelPacksSKUModel*
class CORDL_TYPE SonyLevelPacksSKUModel : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using LevelPackProductData = ::GlobalNamespace::__SonyLevelPacksSKUModel__LevelPackProductData;

  using LevelProductData = ::GlobalNamespace::__SonyLevelPacksSKUModel__LevelProductData;

  using PricePerBundlePair = ::GlobalNamespace::__SonyLevelPacksSKUModel__PricePerBundlePair;

  /// @brief Field _pricePerLevel, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__pricePerLevel, put = __cordl_internal_set__pricePerLevel)) float_t _pricePerLevel;

  /// @brief Field _pricePairBundlePairs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__pricePairBundlePairs,
                      put = __cordl_internal_set__pricePairBundlePairs))::ArrayW<::GlobalNamespace::__SonyLevelPacksSKUModel__PricePerBundlePair*,
                                                                                 ::Array<::GlobalNamespace::__SonyLevelPacksSKUModel__PricePerBundlePair*>*> _pricePairBundlePairs;

  /// @brief Field _levelPackProductsData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackProductsData,
                      put = __cordl_internal_set__levelPackProductsData))::ArrayW<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelPackProductData*,
                                                                                  ::Array<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelPackProductData*>*> _levelPackProductsData;

  __declspec(property(get = get_pricePerLevel)) float_t pricePerLevel;

  __declspec(property(get = get_pricePairBundlePairs))::ArrayW<::GlobalNamespace::__SonyLevelPacksSKUModel__PricePerBundlePair*,
                                                               ::Array<::GlobalNamespace::__SonyLevelPacksSKUModel__PricePerBundlePair*>*> pricePairBundlePairs;

  __declspec(property(get = get_levelPackProductsData))::ArrayW<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelPackProductData*,
                                                                ::Array<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelPackProductData*>*> levelPackProductsData;

  constexpr float_t& __cordl_internal_get__pricePerLevel();

  constexpr float_t const& __cordl_internal_get__pricePerLevel() const;

  constexpr void __cordl_internal_set__pricePerLevel(float_t value);

  constexpr ::ArrayW<::GlobalNamespace::__SonyLevelPacksSKUModel__PricePerBundlePair*, ::Array<::GlobalNamespace::__SonyLevelPacksSKUModel__PricePerBundlePair*>*>&
  __cordl_internal_get__pricePairBundlePairs();

  constexpr ::ArrayW<::GlobalNamespace::__SonyLevelPacksSKUModel__PricePerBundlePair*, ::Array<::GlobalNamespace::__SonyLevelPacksSKUModel__PricePerBundlePair*>*> const&
  __cordl_internal_get__pricePairBundlePairs() const;

  constexpr void __cordl_internal_set__pricePairBundlePairs(
      ::ArrayW<::GlobalNamespace::__SonyLevelPacksSKUModel__PricePerBundlePair*, ::Array<::GlobalNamespace::__SonyLevelPacksSKUModel__PricePerBundlePair*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelPackProductData*, ::Array<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelPackProductData*>*>&
  __cordl_internal_get__levelPackProductsData();

  constexpr ::ArrayW<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelPackProductData*, ::Array<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelPackProductData*>*> const&
  __cordl_internal_get__levelPackProductsData() const;

  constexpr void __cordl_internal_set__levelPackProductsData(
      ::ArrayW<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelPackProductData*, ::Array<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelPackProductData*>*> value);

  /// @brief Method get_pricePerLevel, addr 0x236985c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pricePerLevel();

  /// @brief Method get_pricePairBundlePairs, addr 0x2369864, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__SonyLevelPacksSKUModel__PricePerBundlePair*, ::Array<::GlobalNamespace::__SonyLevelPacksSKUModel__PricePerBundlePair*>*> get_pricePairBundlePairs();

  /// @brief Method get_levelPackProductsData, addr 0x236986c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelPackProductData*, ::Array<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelPackProductData*>*> get_levelPackProductsData();

  /// @brief Method GetLevelPackProductData, addr 0x2369874, size 0x88, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SonyLevelPacksSKUModel__LevelPackProductData* GetLevelPackProductData(::StringW levelPackID);

  /// @brief Method GetPricePerBundlePair, addr 0x23698fc, size 0x50, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SonyLevelPacksSKUModel__PricePerBundlePair* GetPricePerBundlePair(int32_t levelsCount);

  static inline ::GlobalNamespace::SonyLevelPacksSKUModel* New_ctor();

  /// @brief Method .ctor, addr 0x236994c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelPacksSKUModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyLevelPacksSKUModel(SonyLevelPacksSKUModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelPacksSKUModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyLevelPacksSKUModel(SonyLevelPacksSKUModel const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyLevelPacksSKUModel();

public:
  /// @brief Field _pricePerLevel, offset: 0x18, size: 0x4, def value: None
  float_t ____pricePerLevel;

  /// @brief Field _pricePairBundlePairs, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SonyLevelPacksSKUModel__PricePerBundlePair*, ::Array<::GlobalNamespace::__SonyLevelPacksSKUModel__PricePerBundlePair*>*> ____pricePairBundlePairs;

  /// @brief Field _levelPackProductsData, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelPackProductData*, ::Array<::GlobalNamespace::__SonyLevelPacksSKUModel__LevelPackProductData*>*> ____levelPackProductsData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLevelPacksSKUModel, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelPacksSKUModel, ____pricePerLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelPacksSKUModel, ____pricePairBundlePairs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelPacksSKUModel, ____levelPackProductsData) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyLevelPacksSKUModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLevelPacksSKUModel*, "", "SonyLevelPacksSKUModel");
NEED_NO_BOX(::GlobalNamespace::__SonyLevelPacksSKUModel__LevelPackProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyLevelPacksSKUModel__LevelPackProductData*, "", "SonyLevelPacksSKUModel/LevelPackProductData");
NEED_NO_BOX(::GlobalNamespace::__SonyLevelPacksSKUModel__LevelProductData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyLevelPacksSKUModel__LevelProductData*, "", "SonyLevelPacksSKUModel/LevelProductData");
NEED_NO_BOX(::GlobalNamespace::__SonyLevelPacksSKUModel__PricePerBundlePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__SonyLevelPacksSKUModel__PricePerBundlePair*, "", "SonyLevelPacksSKUModel/PricePerBundlePair");
