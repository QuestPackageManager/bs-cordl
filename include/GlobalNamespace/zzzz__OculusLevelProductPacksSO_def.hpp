#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusLevelProductPacksSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ILevelPackProductDataContainer_2_def.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
CORDL_MODULE_EXPORT(OculusLevelProductPacksSO)
namespace GlobalNamespace {
class OculusLevelProductCollectionModel_LevelPackProductData;
}
namespace GlobalNamespace {
class OculusLevelProductCollectionModel_LevelPackRedirectionData;
}
namespace GlobalNamespace {
class OculusLevelProductCollectionModel_LevelProductData;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusLevelProductPacksSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusLevelProductPacksSO);
// Dependencies ILevelPackProductDataContainer`2<TLevelPackProductData, TLevelProductData>, PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusLevelProductPacksSO
class CORDL_TYPE OculusLevelProductPacksSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _levelPackProductData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackProductData,
                      put = __cordl_internal_set__levelPackProductData)) ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData* _levelPackProductData;

  /// @brief Field _levelPackRedirectionData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackRedirectionData,
                      put = __cordl_internal_set__levelPackRedirectionData)) ::ArrayW<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*,
                                                                                      ::Array<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*>*>
      _levelPackRedirectionData;

  __declspec(property(get = get_levelPackProductData)) ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData* levelPackProductData;

  __declspec(property(
      get = get_levelPackRedirectionData)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*>* levelPackRedirectionData;

  /// @brief Convert operator to
  /// "::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*,::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>"
  constexpr operator ::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*,
                                                                         ::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>*() noexcept;

  /// @brief Method ILevelPackProductDataContainer<OculusLevelProductCollectionModel.LevelPackProductData,OculusLevelProductCollectionModel.LevelProductData>.SetLevelPackProductData, addr 0x26ee160,
  /// size 0x8, virtual true, abstract: false, final true
  inline void ILevelPackProductDataContainer_OculusLevelProductCollectionModel_LevelPackProductData_OculusLevelProductCollectionModel_LevelProductData__SetLevelPackProductData(
      ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData* newLevelPackProductData);

  static inline ::GlobalNamespace::OculusLevelProductPacksSO* New_ctor();

  constexpr ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData* const& __cordl_internal_get__levelPackProductData() const;

  constexpr ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*& __cordl_internal_get__levelPackProductData();

  constexpr ::ArrayW<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*, ::Array<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*>*> const&
  __cordl_internal_get__levelPackRedirectionData() const;

  constexpr ::ArrayW<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*, ::Array<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*>*>&
  __cordl_internal_get__levelPackRedirectionData();

  constexpr void __cordl_internal_set__levelPackProductData(::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData* value);

  constexpr void __cordl_internal_set__levelPackRedirectionData(
      ::ArrayW<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*, ::Array<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*>*> value);

  /// @brief Method .ctor, addr 0x26ee168, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_levelPackProductData, addr 0x26ee150, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData* get_levelPackProductData();

  /// @brief Method get_levelPackRedirectionData, addr 0x26ee158, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*>* get_levelPackRedirectionData();

  /// @brief Convert to
  /// "::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*,::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>"
  constexpr ::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData*,
                                                                ::GlobalNamespace::OculusLevelProductCollectionModel_LevelProductData*>*
  i___GlobalNamespace__ILevelPackProductDataContainer_2___GlobalNamespace__OculusLevelProductCollectionModel_LevelPackProductData____GlobalNamespace__OculusLevelProductCollectionModel_LevelProductData__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusLevelProductPacksSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusLevelProductPacksSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusLevelProductPacksSO(OculusLevelProductPacksSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusLevelProductPacksSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusLevelProductPacksSO(OculusLevelProductPacksSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13148 };

  /// @brief Field _levelPackProductData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackProductData* ____levelPackProductData;

  /// @brief Field _levelPackRedirectionData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*, ::Array<::GlobalNamespace::OculusLevelProductCollectionModel_LevelPackRedirectionData*>*>
      ____levelPackRedirectionData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusLevelProductPacksSO, ____levelPackProductData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusLevelProductPacksSO, ____levelPackRedirectionData) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusLevelProductPacksSO, 0x28>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusLevelProductPacksSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusLevelProductPacksSO*, "", "OculusLevelProductPacksSO");
