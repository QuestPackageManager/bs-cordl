#pragma once
// IWYU pragma private; include "GlobalNamespace/OculusGameDlcProductCollectionModel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(OculusGameDlcProductCollectionModel)
namespace GlobalNamespace {
class OculusGameDlcProductSO;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class OculusGameDlcProductCollectionModel;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::OculusGameDlcProductCollectionModel*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::OculusGameDlcProductCollectionModel*, "", "OculusGameDlcProductCollectionModel");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: OculusGameDlcProductCollectionModel
class CORDL_TYPE OculusGameDlcProductCollectionModel : public ::System::Object {
public:
  // Declarations
  /// @brief Field _gameDlcIdToProductData, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__gameDlcIdToProductData,
      put = __cordl_internal_set__gameDlcIdToProductData)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::OculusGameDlcProductSO>>* _gameDlcIdToProductData;

  /// @brief Method GetGameDlcProductData, addr 0x39f5f1c, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::OculusGameDlcProductSO> GetGameDlcProductData(::StringW gameDlcId);

  static inline ::GlobalNamespace::OculusGameDlcProductCollectionModel* New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OculusGameDlcProductSO>>* gameDlcProducts);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::OculusGameDlcProductSO>>* const& __cordl_internal_get__gameDlcIdToProductData() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::OculusGameDlcProductSO>>*& __cordl_internal_get__gameDlcIdToProductData();

  constexpr void __cordl_internal_set__gameDlcIdToProductData(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::OculusGameDlcProductSO>>* value);

  /// @brief Method .ctor, addr 0x39f5bb8, size 0x364, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OculusGameDlcProductSO>>* gameDlcProducts);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OculusGameDlcProductCollectionModel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OculusGameDlcProductCollectionModel", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OculusGameDlcProductCollectionModel(OculusGameDlcProductCollectionModel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OculusGameDlcProductCollectionModel", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OculusGameDlcProductCollectionModel(OculusGameDlcProductCollectionModel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14608 };

  /// @brief Field _gameDlcIdToProductData, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::OculusGameDlcProductSO>>* ____gameDlcIdToProductData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::OculusGameDlcProductCollectionModel, ____gameDlcIdToProductData) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::OculusGameDlcProductCollectionModel) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
