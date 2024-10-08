#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusLevelProductPacksSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(OculusLevelProductPacksSO)
namespace GlobalNamespace {
template <typename TLevelPackProductData, typename TLevelProductData> class ILevelPackProductDataContainer_2;
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
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusLevelProductPacksSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OculusLevelProductPacksSO);
// Type: ::OculusLevelProductPacksSO
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OculusLevelProductPacksSO*
class CORDL_TYPE OculusLevelProductPacksSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _levelPackProductData, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackProductData,
                      put = __cordl_internal_set__levelPackProductData)) ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData* _levelPackProductData;

  /// @brief Field _levelPackRedirectionData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__levelPackRedirectionData,
                      put = __cordl_internal_set__levelPackRedirectionData)) ::ArrayW<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*,
                                                                                      ::Array<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>*>
      _levelPackRedirectionData;

  __declspec(property(get = get_levelPackProductData)) ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData* levelPackProductData;

  __declspec(property(
      get = get_levelPackRedirectionData)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>* levelPackRedirectionData;

  /// @brief Convert operator to
  /// "::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*,::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>"
  constexpr operator ::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*,
                                                                         ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*() noexcept;

  /// @brief Method ILevelPackProductDataContainer<OculusLevelProductCollectionModel.LevelPackProductData,OculusLevelProductCollectionModel.LevelProductData>.SetLevelPackProductData, addr 0x26a53d8,
  /// size 0x8, virtual true, abstract: false, final true
  inline void ILevelPackProductDataContainer_OculusLevelProductCollectionModel_LevelPackProductData_OculusLevelProductCollectionModel_LevelProductData__SetLevelPackProductData(
      ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData* newLevelPackProductData);

  static inline ::GlobalNamespace::OculusLevelProductPacksSO* New_ctor();

  constexpr ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*& __cordl_internal_get__levelPackProductData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*> const& __cordl_internal_get__levelPackProductData() const;

  constexpr ::ArrayW<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*,
                     ::Array<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>*> const&
  __cordl_internal_get__levelPackRedirectionData() const;

  constexpr ::ArrayW<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>*>&
  __cordl_internal_get__levelPackRedirectionData();

  constexpr void __cordl_internal_set__levelPackProductData(::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData* value);

  constexpr void __cordl_internal_set__levelPackRedirectionData(
      ::ArrayW<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>*> value);

  /// @brief Method .ctor, addr 0x26a53e0, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_levelPackProductData, addr 0x26a53c8, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData* get_levelPackProductData();

  /// @brief Method get_levelPackRedirectionData, addr 0x26a53d0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>* get_levelPackRedirectionData();

  /// @brief Convert to
  /// "::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*,::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>"
  constexpr ::GlobalNamespace::ILevelPackProductDataContainer_2<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData*,
                                                                ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelProductData*>*
  i___GlobalNamespace__ILevelPackProductDataContainer_2___GlobalNamespace____OculusLevelProductCollectionModel__LevelPackProductData____GlobalNamespace____OculusLevelProductCollectionModel__LevelProductData__() noexcept;

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

  /// @brief Field _levelPackProductData, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackProductData* ____levelPackProductData;

  /// @brief Field _levelPackRedirectionData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*, ::Array<::GlobalNamespace::__OculusLevelProductCollectionModel__LevelPackRedirectionData*>*>
      ____levelPackRedirectionData;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13098 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OculusLevelProductPacksSO, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusLevelProductPacksSO, ____levelPackProductData) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OculusLevelProductPacksSO, ____levelPackRedirectionData) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OculusLevelProductPacksSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OculusLevelProductPacksSO*, "", "OculusLevelProductPacksSO");
