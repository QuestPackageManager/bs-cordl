#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamLevelProductPacksSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SteamLevelProductPacksSO)
namespace GlobalNamespace {
template <typename TLevelPackProductData, typename TLevelProductData> class ILevelPackProductDataContainer_2;
}
namespace GlobalNamespace {
class __SteamLevelProductCollectionModel__LevelPackProductData;
}
namespace GlobalNamespace {
class __SteamLevelProductCollectionModel__LevelPackRedirectionData;
}
namespace GlobalNamespace {
class __SteamLevelProductCollectionModel__LevelProductData;
}
// Forward declare root types
namespace GlobalNamespace {
class SteamLevelProductPacksSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SteamLevelProductPacksSO);
// Type: ::SteamLevelProductPacksSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SteamLevelProductPacksSO*
class CORDL_TYPE SteamLevelProductPacksSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _levelPackProductData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackProductData,
                      put = __cordl_internal_set__levelPackProductData)) ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData* _levelPackProductData;

  /// @brief Field _levelPackRedirectionData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackRedirectionData,
                      put = __cordl_internal_set__levelPackRedirectionData)) ::ArrayW<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*,
                                                                                      ::Array<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>*>
      _levelPackRedirectionData;

  __declspec(property(get = get_levelPackProductData)) ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData* levelPackProductData;

  __declspec(property(get = get_levelPackRedirectionData)) ::ArrayW<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*,
                                                                    ::Array<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>*>
      levelPackRedirectionData;

  /// @brief Convert operator to
  /// "::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*,::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>"
  constexpr operator ::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*,
                                                                         ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*() noexcept;

  /// @brief Method ILevelPackProductDataContainer<SteamLevelProductCollectionModel.LevelPackProductData,SteamLevelProductCollectionModel.LevelProductData>.SetLevelPackProductData, addr 0x26b2380,
  /// size 0x8, virtual true, abstract: false, final true
  inline void ILevelPackProductDataContainer_SteamLevelProductCollectionModel_LevelPackProductData_SteamLevelProductCollectionModel_LevelProductData__SetLevelPackProductData(
      ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData* newLevelPackProductData);

  static inline ::GlobalNamespace::SteamLevelProductPacksSO* New_ctor();

  constexpr ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*& __cordl_internal_get__levelPackProductData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*> const& __cordl_internal_get__levelPackProductData() const;

  constexpr ::ArrayW<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*,
                     ::Array<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>*> const&
  __cordl_internal_get__levelPackRedirectionData() const;

  constexpr ::ArrayW<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>*>&
  __cordl_internal_get__levelPackRedirectionData();

  constexpr void __cordl_internal_set__levelPackProductData(::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData* value);

  constexpr void __cordl_internal_set__levelPackRedirectionData(
      ::ArrayW<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>*> value);

  /// @brief Method .ctor, addr 0x26b2388, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_levelPackProductData, addr 0x26b2370, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData* get_levelPackProductData();

  /// @brief Method get_levelPackRedirectionData, addr 0x26b2378, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>*>
  get_levelPackRedirectionData();

  /// @brief Convert to
  /// "::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*,::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>"
  constexpr ::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData*,
                                                                ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelProductData*>*
  i___GlobalNamespace__ILevelPackProductDataContainer_2___GlobalNamespace____SteamLevelProductCollectionModel__LevelPackProductData____GlobalNamespace____SteamLevelProductCollectionModel__LevelProductData__() noexcept;

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

  /// @brief Field _levelPackProductData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackProductData* ____levelPackProductData;

  /// @brief Field _levelPackRedirectionData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__SteamLevelProductCollectionModel__LevelPackRedirectionData*>*>
      ____levelPackRedirectionData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13117 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SteamLevelProductPacksSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamLevelProductPacksSO, ____levelPackProductData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SteamLevelProductPacksSO, ____levelPackRedirectionData) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SteamLevelProductPacksSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SteamLevelProductPacksSO*, "", "SteamLevelProductPacksSO");
