#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCharacteristicCollection.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapCharacteristicCollection)
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollectionSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCharacteristicCollection);
// Type: ::BeatmapCharacteristicCollection
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::BeatmapCharacteristicCollection*
class CORDL_TYPE BeatmapCharacteristicCollection : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapCharacteristicsBySerializedName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicsBySerializedName,
                      put =
                          __cordl_internal_set__beatmapCharacteristicsBySerializedName)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*
      _beatmapCharacteristicsBySerializedName;

  /// @brief Field beatmapCharacteristics, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapCharacteristics,
                      put = __cordl_internal_set_beatmapCharacteristics)) ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* beatmapCharacteristics;

  /// @brief Field disabledBeatmapCharacteristics, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get_disabledBeatmapCharacteristics,
      put = __cordl_internal_set_disabledBeatmapCharacteristics)) ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* disabledBeatmapCharacteristics;

  /// @brief Method GetBeatmapCharacteristicBySerializedName, addr 0x26740f4, size 0x70, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> GetBeatmapCharacteristicBySerializedName(::StringW serializedName);

  static inline ::GlobalNamespace::BeatmapCharacteristicCollection* New_ctor(::GlobalNamespace::BeatmapCharacteristicCollectionSO* collection,
                                                                             ::GlobalNamespace::AppStaticSettingsSO* appStaticSettings);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*& __cordl_internal_get__beatmapCharacteristicsBySerializedName();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> const&
  __cordl_internal_get__beatmapCharacteristicsBySerializedName() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*& __cordl_internal_get_beatmapCharacteristics();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> const&
  __cordl_internal_get_beatmapCharacteristics() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*& __cordl_internal_get_disabledBeatmapCharacteristics();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> const&
  __cordl_internal_get_disabledBeatmapCharacteristics() const;

  constexpr void __cordl_internal_set__beatmapCharacteristicsBySerializedName(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

  constexpr void __cordl_internal_set_beatmapCharacteristics(::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

  constexpr void __cordl_internal_set_disabledBeatmapCharacteristics(::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

  /// @brief Method .ctor, addr 0x2673bd4, size 0x520, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapCharacteristicCollectionSO* collection, ::GlobalNamespace::AppStaticSettingsSO* appStaticSettings);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCharacteristicCollection();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCharacteristicCollection(BeatmapCharacteristicCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCharacteristicCollection(BeatmapCharacteristicCollection const&) = delete;

  /// @brief Field _beatmapCharacteristicsBySerializedName, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* ____beatmapCharacteristicsBySerializedName;

  /// @brief Field beatmapCharacteristics, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* ___beatmapCharacteristics;

  /// @brief Field disabledBeatmapCharacteristics, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* ___disabledBeatmapCharacteristics;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12824 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicCollection, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicCollection, ____beatmapCharacteristicsBySerializedName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicCollection, ___beatmapCharacteristics) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicCollection, ___disabledBeatmapCharacteristics) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicCollection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicCollection*, "", "BeatmapCharacteristicCollection");
