#pragma once
// IWYU pragma private; include "GlobalNamespace/SonyLevelProductPackSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(SonyLevelProductPackSO)
namespace GlobalNamespace {
class SonyLevelProductCollectionModel_LevelPackProductData;
}
namespace GlobalNamespace {
class SonyLevelProductCollectionModel_LevelPackRedirectionData;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyLevelProductPackSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyLevelProductPackSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: SonyLevelProductPackSO
class CORDL_TYPE SonyLevelProductPackSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _levelPackProductData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackProductData,
                      put = __cordl_internal_set__levelPackProductData)) ::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData* _levelPackProductData;

  /// @brief Field _levelPackRedirectionData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackRedirectionData,
                      put = __cordl_internal_set__levelPackRedirectionData)) ::ArrayW<::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData*,
                                                                                      ::Array<::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData*>*>
      _levelPackRedirectionData;

  __declspec(property(get = get_levelPackProductData, put = set_levelPackProductData)) ::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData* levelPackProductData;

  __declspec(property(
      get = get_levelPackRedirectionData,
      put = set_levelPackRedirectionData)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData*>* levelPackRedirectionData;

  static inline ::GlobalNamespace::SonyLevelProductPackSO* New_ctor();

  constexpr ::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData* const& __cordl_internal_get__levelPackProductData() const;

  constexpr ::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData*& __cordl_internal_get__levelPackProductData();

  constexpr ::ArrayW<::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData*, ::Array<::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData*>*> const&
  __cordl_internal_get__levelPackRedirectionData() const;

  constexpr ::ArrayW<::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData*, ::Array<::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData*>*>&
  __cordl_internal_get__levelPackRedirectionData();

  constexpr void __cordl_internal_set__levelPackProductData(::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData* value);

  constexpr void __cordl_internal_set__levelPackRedirectionData(
      ::ArrayW<::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData*, ::Array<::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData*>*> value);

  /// @brief Method .ctor, addr 0x26eadd0, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_levelPackProductData, addr 0x26ecd20, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData* get_levelPackProductData();

  /// @brief Method get_levelPackRedirectionData, addr 0x26ecd30, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData*>* get_levelPackRedirectionData();

  /// @brief Method set_levelPackProductData, addr 0x26ecd28, size 0x8, virtual false, abstract: false, final false
  inline void set_levelPackProductData(::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData* value);

  /// @brief Method set_levelPackRedirectionData, addr 0x26ecd38, size 0x5c, virtual false, abstract: false, final false
  inline void set_levelPackRedirectionData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyLevelProductPackSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductPackSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyLevelProductPackSO(SonyLevelProductPackSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyLevelProductPackSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyLevelProductPackSO(SonyLevelProductPackSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13194 };

  /// @brief Field _levelPackProductData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackProductData* ____levelPackProductData;

  /// @brief Field _levelPackRedirectionData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData*, ::Array<::GlobalNamespace::SonyLevelProductCollectionModel_LevelPackRedirectionData*>*>
      ____levelPackRedirectionData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SonyLevelProductPackSO, ____levelPackProductData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductPackSO, ____levelPackRedirectionData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLevelProductPackSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyLevelProductPackSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLevelProductPackSO*, "", "SonyLevelProductPackSO");
