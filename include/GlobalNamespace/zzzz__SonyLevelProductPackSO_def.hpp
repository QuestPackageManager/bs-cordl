#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SonyLevelProductPackSO)
namespace GlobalNamespace {
class __SonyLevelProductCollectionModel__LevelPackProductData;
}
namespace GlobalNamespace {
class __SonyLevelProductCollectionModel__LevelPackRedirectionData;
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
// Type: ::SonyLevelProductPackSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SonyLevelProductPackSO*
class CORDL_TYPE SonyLevelProductPackSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _levelPackProductData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackProductData,
                      put = __cordl_internal_set__levelPackProductData))::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData* _levelPackProductData;

  /// @brief Field _levelPackRedirectionData, offset 0x20, size 0x8
  __declspec(
      property(get = __cordl_internal_get__levelPackRedirectionData,
               put = __cordl_internal_set__levelPackRedirectionData))::ArrayW<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*,
                                                                              ::Array<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>*> _levelPackRedirectionData;

  __declspec(property(get = get_levelPackProductData, put = set_levelPackProductData))::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData* levelPackProductData;

  __declspec(property(
      get = get_levelPackRedirectionData,
      put = set_levelPackRedirectionData))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>* levelPackRedirectionData;

  static inline ::GlobalNamespace::SonyLevelProductPackSO* New_ctor();

  constexpr ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*& __cordl_internal_get__levelPackProductData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData*> const& __cordl_internal_get__levelPackProductData() const;

  constexpr ::ArrayW<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>*> const&
  __cordl_internal_get__levelPackRedirectionData() const;

  constexpr ::ArrayW<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>*>&
  __cordl_internal_get__levelPackRedirectionData();

  constexpr void __cordl_internal_set__levelPackProductData(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData* value);

  constexpr void __cordl_internal_set__levelPackRedirectionData(
      ::ArrayW<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>*> value);

  /// @brief Method .ctor, addr 0x12e96d8, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_levelPackProductData, addr 0x12eb990, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData* get_levelPackProductData();

  /// @brief Method get_levelPackRedirectionData, addr 0x12eb9a0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>* get_levelPackRedirectionData();

  /// @brief Method set_levelPackProductData, addr 0x12eb998, size 0x8, virtual false, abstract: false, final false
  inline void set_levelPackProductData(::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData* value);

  /// @brief Method set_levelPackRedirectionData, addr 0x12eb9a8, size 0x5c, virtual false, abstract: false, final false
  inline void set_levelPackRedirectionData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>* value);

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

  /// @brief Field _levelPackProductData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackProductData* ____levelPackProductData;

  /// @brief Field _levelPackRedirectionData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__SonyLevelProductCollectionModel__LevelPackRedirectionData*>*>
      ____levelPackRedirectionData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyLevelProductPackSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductPackSO, ____levelPackProductData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyLevelProductPackSO, ____levelPackRedirectionData) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyLevelProductPackSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyLevelProductPackSO*, "", "SonyLevelProductPackSO");
