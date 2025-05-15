#pragma once
// IWYU pragma private; include "GlobalNamespace/SonyLevelPacksPriceModel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(SonyLevelPacksPriceModel)
namespace GlobalNamespace {
class SonyLevelPacksPriceModel_PricePerBundlePair;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyLevelPacksPriceModel;
}
namespace GlobalNamespace {
class SonyLevelPacksPriceModel_PricePerBundlePair;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyLevelPacksPriceModel);
MARK_REF_PTR_T(::GlobalNamespace::SonyLevelPacksPriceModel_PricePerBundlePair);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyLevelPacksPriceModel/PricePerBundlePair
class CORDL_TYPE SonyLevelPacksPriceModel_PricePerBundlePair : public ::System::Object {
public:
  // Declarations
  /// @brief Field _levelsCount, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get__levelsCount, put = __cordl_internal_set__levelsCount)) int32_t _levelsCount;

  /// @brief Field _pricePerBundle, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__pricePerBundle, put = __cordl_internal_set__pricePerBundle)) float_t _pricePerBundle;

  __declspec(property(get = get_levelsCount)) int32_t levelsCount;

  __declspec(property(get = get_pricePerBundle)) float_t pricePerBundle;

  static inline ::GlobalNamespace::SonyLevelPacksPriceModel_PricePerBundlePair* New_ctor();

  constexpr int32_t const& __cordl_internal_get__levelsCount() const;

  constexpr int32_t& __cordl_internal_get__levelsCount();

  constexpr float_t const& __cordl_internal_get__pricePerBundle() const;

  constexpr float_t& __cordl_internal_get__pricePerBundle();

  constexpr void __cordl_internal_set__levelsCount(int32_t value);

  constexpr void __cordl_internal_set__pricePerBundle(float_t value);

  /// @brief Method .ctor, addr 0x26ec84c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_levelsCount, addr 0x26ec844, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_levelsCount();

  /// @brief Method get_pricePerBundle, addr 0x26ec83c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pricePerBundle();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyLevelPacksPriceModel_PricePerBundlePair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelPacksPriceModel_PricePerBundlePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyLevelPacksPriceModel_PricePerBundlePair(SonyLevelPacksPriceModel_PricePerBundlePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelPacksPriceModel_PricePerBundlePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyLevelPacksPriceModel_PricePerBundlePair(SonyLevelPacksPriceModel_PricePerBundlePair const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13185 };

  /// @brief Field _pricePerBundle, offset: 0x10, size: 0x4, def value: None
  float_t ____pricePerBundle;

  /// @brief Field _levelsCount, offset: 0x14, size: 0x4, def value: None
  int32_t ____levelsCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyLevelPacksPriceModel_PricePerBundlePair, ____pricePerBundle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelPacksPriceModel_PricePerBundlePair, ____levelsCount) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLevelPacksPriceModel_PricePerBundlePair, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyLevelPacksPriceModel
class CORDL_TYPE SonyLevelPacksPriceModel : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  using PricePerBundlePair = ::GlobalNamespace::SonyLevelPacksPriceModel_PricePerBundlePair;

  /// @brief Field _pricePairBundlePairs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__pricePairBundlePairs,
                      put = __cordl_internal_set__pricePairBundlePairs)) ::ArrayW<::GlobalNamespace::SonyLevelPacksPriceModel_PricePerBundlePair*,
                                                                                  ::Array<::GlobalNamespace::SonyLevelPacksPriceModel_PricePerBundlePair*>*>
      _pricePairBundlePairs;

  /// @brief Field _pricePerLevel, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__pricePerLevel, put = __cordl_internal_set__pricePerLevel)) float_t _pricePerLevel;

  __declspec(property(
      get = get_pricePairBundlePairs)) ::ArrayW<::GlobalNamespace::SonyLevelPacksPriceModel_PricePerBundlePair*, ::Array<::GlobalNamespace::SonyLevelPacksPriceModel_PricePerBundlePair*>*>
      pricePairBundlePairs;

  __declspec(property(get = get_pricePerLevel)) float_t pricePerLevel;

  /// @brief Method GetPricePerBundlePair, addr 0x26ec77c, size 0x5c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SonyLevelPacksPriceModel_PricePerBundlePair* GetPricePerBundlePair(int32_t levelsCount);

  static inline ::GlobalNamespace::SonyLevelPacksPriceModel* New_ctor();

  constexpr ::ArrayW<::GlobalNamespace::SonyLevelPacksPriceModel_PricePerBundlePair*, ::Array<::GlobalNamespace::SonyLevelPacksPriceModel_PricePerBundlePair*>*> const&
  __cordl_internal_get__pricePairBundlePairs() const;

  constexpr ::ArrayW<::GlobalNamespace::SonyLevelPacksPriceModel_PricePerBundlePair*, ::Array<::GlobalNamespace::SonyLevelPacksPriceModel_PricePerBundlePair*>*>&
  __cordl_internal_get__pricePairBundlePairs();

  constexpr float_t const& __cordl_internal_get__pricePerLevel() const;

  constexpr float_t& __cordl_internal_get__pricePerLevel();

  constexpr void __cordl_internal_set__pricePairBundlePairs(
      ::ArrayW<::GlobalNamespace::SonyLevelPacksPriceModel_PricePerBundlePair*, ::Array<::GlobalNamespace::SonyLevelPacksPriceModel_PricePerBundlePair*>*> value);

  constexpr void __cordl_internal_set__pricePerLevel(float_t value);

  /// @brief Method .ctor, addr 0x26ec7d8, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_pricePairBundlePairs, addr 0x26ec774, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::SonyLevelPacksPriceModel_PricePerBundlePair*, ::Array<::GlobalNamespace::SonyLevelPacksPriceModel_PricePerBundlePair*>*> get_pricePairBundlePairs();

  /// @brief Method get_pricePerLevel, addr 0x26ec76c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_pricePerLevel();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyLevelPacksPriceModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelPacksPriceModel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyLevelPacksPriceModel(SonyLevelPacksPriceModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelPacksPriceModel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyLevelPacksPriceModel(SonyLevelPacksPriceModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13186 };

  /// @brief Field _pricePerLevel, offset: 0x18, size: 0x4, def value: None
  float_t ____pricePerLevel;

  /// @brief Field _pricePairBundlePairs, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SonyLevelPacksPriceModel_PricePerBundlePair*, ::Array<::GlobalNamespace::SonyLevelPacksPriceModel_PricePerBundlePair*>*> ____pricePairBundlePairs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyLevelPacksPriceModel, ____pricePerLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelPacksPriceModel, ____pricePairBundlePairs) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLevelPacksPriceModel, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyLevelPacksPriceModel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLevelPacksPriceModel*, "", "SonyLevelPacksPriceModel");
NEED_NO_BOX(::GlobalNamespace::SonyLevelPacksPriceModel_PricePerBundlePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLevelPacksPriceModel_PricePerBundlePair*, "", "SonyLevelPacksPriceModel/PricePerBundlePair");
