#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamLevelProductPacksSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ILevelPackProductDataContainer_2_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(SteamLevelProductPacksSO)
namespace GlobalNamespace {
class SteamLevelProductCollectionModel_LevelPackProductData;
}
namespace GlobalNamespace {
class SteamLevelProductCollectionModel_LevelPackRedirectionData;
}
namespace GlobalNamespace {
class SteamLevelProductCollectionModel_LevelProductData;
}
// Forward declare root types
namespace GlobalNamespace {
class SteamLevelProductPacksSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SteamLevelProductPacksSO);
// Dependencies ILevelPackProductDataContainer`2<TLevelPackProductData, TLevelProductData>, PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: SteamLevelProductPacksSO
class CORDL_TYPE SteamLevelProductPacksSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _levelPackProductData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackProductData,
                      put = __cordl_internal_set__levelPackProductData)) ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData* _levelPackProductData;

  /// @brief Field _levelPackRedirectionData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackRedirectionData,
                      put = __cordl_internal_set__levelPackRedirectionData)) ::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*,
                                                                                      ::Array<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>*>
      _levelPackRedirectionData;

  __declspec(property(get = get_levelPackProductData)) ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData* levelPackProductData;

  __declspec(property(get = get_levelPackRedirectionData)) ::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*,
                                                                    ::Array<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>*>
      levelPackRedirectionData;

  /// @brief Convert operator to
  /// "::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*,::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>"
  constexpr operator ::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*,
                                                                         ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*() noexcept;

  /// @brief Method ILevelPackProductDataContainer<SteamLevelProductCollectionModel.LevelPackProductData,SteamLevelProductCollectionModel.LevelProductData>.SetLevelPackProductData, addr 0x26eb5f4,
  /// size 0x8, virtual true, abstract: false, final true
  inline void ILevelPackProductDataContainer_SteamLevelProductCollectionModel_LevelPackProductData_SteamLevelProductCollectionModel_LevelProductData__SetLevelPackProductData(
      ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData* newLevelPackProductData);

  static inline ::GlobalNamespace::SteamLevelProductPacksSO* New_ctor();

  constexpr ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData* const& __cordl_internal_get__levelPackProductData() const;

  constexpr ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*& __cordl_internal_get__levelPackProductData();

  constexpr ::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*, ::Array<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>*> const&
  __cordl_internal_get__levelPackRedirectionData() const;

  constexpr ::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*, ::Array<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>*>&
  __cordl_internal_get__levelPackRedirectionData();

  constexpr void __cordl_internal_set__levelPackProductData(::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData* value);

  constexpr void __cordl_internal_set__levelPackRedirectionData(
      ::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*, ::Array<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>*> value);

  /// @brief Method .ctor, addr 0x26eb5fc, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_levelPackProductData, addr 0x26eb5e4, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData* get_levelPackProductData();

  /// @brief Method get_levelPackRedirectionData, addr 0x26eb5ec, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*, ::Array<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>*>
  get_levelPackRedirectionData();

  /// @brief Convert to
  /// "::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*,::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>"
  constexpr ::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData*,
                                                                ::GlobalNamespace::SteamLevelProductCollectionModel_LevelProductData*>*
  i___GlobalNamespace__ILevelPackProductDataContainer_2___GlobalNamespace__SteamLevelProductCollectionModel_LevelPackProductData____GlobalNamespace__SteamLevelProductCollectionModel_LevelProductData__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamLevelProductPacksSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SteamLevelProductPacksSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SteamLevelProductPacksSO(SteamLevelProductPacksSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SteamLevelProductPacksSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SteamLevelProductPacksSO(SteamLevelProductPacksSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13156 };

  /// @brief Field _levelPackProductData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackProductData* ____levelPackProductData;

  /// @brief Field _levelPackRedirectionData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*, ::Array<::GlobalNamespace::SteamLevelProductCollectionModel_LevelPackRedirectionData*>*>
      ____levelPackRedirectionData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SteamLevelProductPacksSO, ____levelPackProductData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamLevelProductPacksSO, ____levelPackRedirectionData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SteamLevelProductPacksSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SteamLevelProductPacksSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamLevelProductPacksSO*, "", "SteamLevelProductPacksSO");
