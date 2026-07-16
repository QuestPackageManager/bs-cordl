#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapCharacteristicCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(BeatmapCharacteristicCollection)
namespace GlobalNamespace {
class AppStaticSettingsSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollectionSO;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection___c;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapCharacteristic;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapCharacteristicCollection;
}
namespace GlobalNamespace {
class BeatmapCharacteristicCollection___c;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeatmapCharacteristicCollection*);
MARK_REF_T(::GlobalNamespace::BeatmapCharacteristicCollection___c*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapCharacteristicCollection*, "", "BeatmapCharacteristicCollection");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapCharacteristicCollection___c*, "", "BeatmapCharacteristicCollection/<>c");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapCharacteristicCollection/<>c
class CORDL_TYPE BeatmapCharacteristicCollection___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::BeatmapCharacteristicCollection___c* __9;

  /// @brief Field <>9__3_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__3_0, put = setStaticF___9__3_0)) ::System::Func_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapCharacteristic>* __9__3_0;

  static inline ::GlobalNamespace::BeatmapCharacteristicCollection___c* New_ctor();

  /// @brief Method <.ctor>b__3_0, addr 0x370c6cc, size 0x58, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapCharacteristic __ctor_b__3_0(::GlobalNamespace::BeatmapCharacteristicSO* c);

  /// @brief Method .ctor, addr 0x370c6c8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::BeatmapCharacteristicCollection___c* getStaticF___9();

  static inline ::System::Func_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapCharacteristic>* getStaticF___9__3_0();

  static inline void setStaticF___9(::GlobalNamespace::BeatmapCharacteristicCollection___c* value);

  static inline void setStaticF___9__3_0(::System::Func_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapCharacteristic>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapCharacteristicCollection___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicCollection___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapCharacteristicCollection___c(BeatmapCharacteristicCollection___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapCharacteristicCollection___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapCharacteristicCollection___c(BeatmapCharacteristicCollection___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14848 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristicCollection___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapCharacteristicCollection
class CORDL_TYPE BeatmapCharacteristicCollection : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::BeatmapCharacteristicCollection___c;

  /// @brief Field _beatmapCharacteristicsBySerializedName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristicsBySerializedName,
                      put =
                          __cordl_internal_set__beatmapCharacteristicsBySerializedName)) ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*
      _beatmapCharacteristicsBySerializedName;

  /// @brief Field beatmapCharacteristics, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapCharacteristics,
                      put = __cordl_internal_set_beatmapCharacteristics)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristic>* beatmapCharacteristics;

  /// @brief Field disabledBeatmapCharacteristics, offset 0x20, size 0x8
  __declspec(property(
      get = __cordl_internal_get_disabledBeatmapCharacteristics,
      put = __cordl_internal_set_disabledBeatmapCharacteristics)) ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristic>* disabledBeatmapCharacteristics;

  /// @brief Method GetBeatmapCharacteristicBySerializedName, addr 0x370c488, size 0x80, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> GetBeatmapCharacteristicBySerializedName(::StringW serializedName);

  /// @brief Method GetBeatmapCharacteristicIcon, addr 0x370c508, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Sprite> GetBeatmapCharacteristicIcon(::GlobalNamespace::BeatmapCharacteristic characteristic);

  static inline ::GlobalNamespace::BeatmapCharacteristicCollection* New_ctor(::GlobalNamespace::BeatmapCharacteristicCollectionSO* collection,
                                                                             ::GlobalNamespace::AppStaticSettingsSO* appStaticSettings);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* const& __cordl_internal_get__beatmapCharacteristicsBySerializedName() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*& __cordl_internal_get__beatmapCharacteristicsBySerializedName();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristic>* const& __cordl_internal_get_beatmapCharacteristics() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristic>*& __cordl_internal_get_beatmapCharacteristics();

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristic>* const& __cordl_internal_get_disabledBeatmapCharacteristics() const;

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristic>*& __cordl_internal_get_disabledBeatmapCharacteristics();

  constexpr void __cordl_internal_set__beatmapCharacteristicsBySerializedName(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value);

  constexpr void __cordl_internal_set_beatmapCharacteristics(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristic>* value);

  constexpr void __cordl_internal_set_disabledBeatmapCharacteristics(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristic>* value);

  /// @brief Method .ctor, addr 0x370bc28, size 0x64c, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14849 };

  /// @brief Field _beatmapCharacteristicsBySerializedName, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* ____beatmapCharacteristicsBySerializedName;

  /// @brief Field beatmapCharacteristics, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristic>* ___beatmapCharacteristics;

  /// @brief Field disabledBeatmapCharacteristics, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapCharacteristic>* ___disabledBeatmapCharacteristics;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicCollection, ____beatmapCharacteristicsBySerializedName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicCollection, ___beatmapCharacteristics) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapCharacteristicCollection, ___disabledBeatmapCharacteristics) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapCharacteristicCollection) == 0x28, "Size mismatch!");

} // namespace GlobalNamespace
