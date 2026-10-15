#pragma once
// IWYU pragma private; include "GlobalNamespace/SteamGameDlcProductCollectionModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(SteamGameDlcProductCollectionModel)
namespace GlobalNamespace {
class SteamGameDlcProductSO;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class SteamGameDlcProductCollectionModel;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::SteamGameDlcProductCollectionModel*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SteamGameDlcProductCollectionModel*, "", "SteamGameDlcProductCollectionModel");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: SteamGameDlcProductCollectionModel
class CORDL_TYPE SteamGameDlcProductCollectionModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field _gameDlcIdToProductData, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__gameDlcIdToProductData,
      put = __cordl_internal_set__gameDlcIdToProductData)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::SteamGameDlcProductSO>>* _gameDlcIdToProductData;

  /// @brief Method GetGameDlcProductData, addr 0x39f7288, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::SteamGameDlcProductSO> GetGameDlcProductData(::StringW gameDlcId);

  static inline ::GlobalNamespace::SteamGameDlcProductCollectionModel* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamGameDlcProductSO>>* gameDlcProducts);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::SteamGameDlcProductSO>>* const& __cordl_internal_get__gameDlcIdToProductData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::SteamGameDlcProductSO>>*& __cordl_internal_get__gameDlcIdToProductData();

  constexpr void __cordl_internal_set__gameDlcIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::SteamGameDlcProductSO>>* value);

  /// @brief Method .ctor, addr 0x39f6f24, size 0x364, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::SteamGameDlcProductSO>>* gameDlcProducts);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SteamGameDlcProductCollectionModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SteamGameDlcProductCollectionModel", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SteamGameDlcProductCollectionModel(SteamGameDlcProductCollectionModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SteamGameDlcProductCollectionModel", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SteamGameDlcProductCollectionModel(SteamGameDlcProductCollectionModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14616 };

  /// @brief Field _gameDlcIdToProductData, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::SteamGameDlcProductSO>>* ____gameDlcIdToProductData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SteamGameDlcProductCollectionModel, ____gameDlcIdToProductData) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SteamGameDlcProductCollectionModel) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
