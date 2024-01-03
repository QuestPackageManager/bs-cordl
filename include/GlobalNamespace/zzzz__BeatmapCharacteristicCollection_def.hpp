#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapCharacteristicCollection)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollectionSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapCharacteristicCollection);
// Type: ::BeatmapCharacteristicCollection
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4239))
// CS Name: ::BeatmapCharacteristicCollection*
class CORDL_TYPE BeatmapCharacteristicCollection : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapCharacteristicsBySerializedName, offset 0x10, size 0x8
  __declspec(property(get = __get__beatmapCharacteristicsBySerializedName, put = __set__beatmapCharacteristicsBySerializedName))::System::Collections::Generic::Dictionary_2<
      ::StringW, ::GlobalNamespace::BeatmapCharacteristicSO*>* _beatmapCharacteristicsBySerializedName;

  /// @brief Field beatmapCharacteristics, offset 0x18, size 0x8
  __declspec(property(get = __get_beatmapCharacteristics,
                      put = __set_beatmapCharacteristics))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristicSO*>* beatmapCharacteristics;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapCharacteristicSO*>*& __get__beatmapCharacteristicsBySerializedName();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapCharacteristicSO*>*> const&
  __get__beatmapCharacteristicsBySerializedName() const;

  constexpr void __set__beatmapCharacteristicsBySerializedName(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapCharacteristicSO*>* value);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristicSO*>*& __get_beatmapCharacteristics();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristicSO*>*> const& __get_beatmapCharacteristics() const;

  constexpr void __set_beatmapCharacteristics(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristicSO*>* value);

  static inline ::GlobalNamespace::BeatmapCharacteristicCollection* New_ctor(::GlobalNamespace::BeatmapCharacteristicCollectionSO* collection, ::GlobalNamespace::AppStaticSettingsSO* appSettings);

  /// @brief Method .ctor, addr 0x232cc44, size 0x464, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapCharacteristicCollectionSO* collection, ::GlobalNamespace::AppStaticSettingsSO* appSettings);

  /// @brief Method GetBeatmapCharacteristicBySerializedName, addr 0x232d0a8, size 0x90, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapCharacteristicSO* GetBeatmapCharacteristicBySerializedName(::StringW serializedName);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicCollection", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCharacteristicCollection(BeatmapCharacteristicCollection&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicCollection", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCharacteristicCollection(BeatmapCharacteristicCollection const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCharacteristicCollection();

public:
  /// @brief Field _beatmapCharacteristicsBySerializedName, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapCharacteristicSO*>* ____beatmapCharacteristicsBySerializedName;

  /// @brief Field beatmapCharacteristics, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristicSO*>* ___beatmapCharacteristics;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapCharacteristicCollection, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicCollection, ____beatmapCharacteristicsBySerializedName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicCollection, ___beatmapCharacteristics) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapCharacteristicCollection);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapCharacteristicCollection*, "", "BeatmapCharacteristicCollection");
