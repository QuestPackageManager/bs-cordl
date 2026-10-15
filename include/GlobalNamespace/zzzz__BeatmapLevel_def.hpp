#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapLevel.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__GameplayType_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BeatmapLevel)
namespace GlobalNamespace {
class BeatmapBasicData;
}
namespace GlobalNamespace {
struct BeatmapCharacteristic;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
struct BeatmapKey;
}
namespace GlobalNamespace {
class BeatmapLevel___c;
}
namespace GlobalNamespace {
class BeatmapLevel___c__DisplayClass29_0;
}
namespace GlobalNamespace {
class BeatmapLevel___c__DisplayClass34_0;
}
namespace GlobalNamespace {
class ColorScheme;
}
namespace GlobalNamespace {
struct EnvironmentName;
}
namespace GlobalNamespace {
struct GameplayType;
}
namespace GlobalNamespace {
class IPreviewMediaData;
}
namespace GlobalNamespace {
struct PlayerSensitivityFlag;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IReadOnlyDictionary_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevel;
}
namespace GlobalNamespace {
class BeatmapLevel___c;
}
namespace GlobalNamespace {
class BeatmapLevel___c__DisplayClass29_0;
}
namespace GlobalNamespace {
class BeatmapLevel___c__DisplayClass34_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BeatmapLevel*);
MARK_REF_T(::GlobalNamespace::BeatmapLevel___c*);
MARK_REF_T(::GlobalNamespace::BeatmapLevel___c__DisplayClass29_0*);
MARK_REF_T(::GlobalNamespace::BeatmapLevel___c__DisplayClass34_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapLevel*, "", "BeatmapLevel");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapLevel___c*, "", "BeatmapLevel/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapLevel___c__DisplayClass29_0*, "", "BeatmapLevel/<>c__DisplayClass29_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BeatmapLevel___c__DisplayClass34_0*, "", "BeatmapLevel/<>c__DisplayClass34_0");
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevel/<>c
class CORDL_TYPE BeatmapLevel___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::BeatmapLevel___c* __9;

  /// @brief Field <>9__23_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_0, put = setStaticF___9__23_0)) ::System::Func_2<
      ::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, int32_t>* __9__23_0;

  /// @brief Field <>9__23_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_1, put = setStaticF___9__23_1)) ::System::Func_2<
      ::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, int32_t>* __9__23_1;

  /// @brief Field <>9__23_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_2, put = setStaticF___9__23_2)) ::System::Func_2<
      ::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, int32_t>* __9__23_2;

  /// @brief Field <>9__29_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__29_1, put = setStaticF___9__29_1)) ::System::Func_2<
      ::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapDifficulty>* __9__29_1;

  /// @brief Field <>9__29_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__29_2, put = setStaticF___9__29_2)) ::System::Func_2<::GlobalNamespace::BeatmapDifficulty, int32_t>* __9__29_2;

  /// @brief Field <>9__34_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__34_1, put = setStaticF___9__34_1)) ::System::Func_2<
      ::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapCharacteristic>* __9__34_1;

  /// @brief Field <>9__34_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__34_2, put = setStaticF___9__34_2)) ::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, int32_t>* __9__34_2;

  static inline ::GlobalNamespace::BeatmapLevel___c* New_ctor();

  /// [NullableContext(0)]
  /// @brief Method <CollectCharacteristics>b__34_1, addr 0x39d00ac, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapCharacteristic _CollectCharacteristics_b__34_1(/* [TupleElementNames(new[] { "gameplayType", "characteristic", "difficulty" })] */ ::System::ValueTuple_3<
                                                                                  ::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>
                                                                                      entry);

  /// @brief Method <CollectCharacteristics>b__34_2, addr 0x39d00b4, size 0x58, virtual false, abstract: false, final false
  inline int32_t _CollectCharacteristics_b__34_2(::GlobalNamespace::BeatmapCharacteristic entry);

  /// [NullableContext(0)]
  /// @brief Method <GetBeatmapKeys>b__23_0, addr 0x39d0034, size 0x8, virtual false, abstract: false, final false
  inline int32_t _GetBeatmapKeys_b__23_0(/* [TupleElementNames(new[] { "gameplayType", "characteristic", "difficulty" })] */ ::System::ValueTuple_3<
                                         ::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>
                                             entry);

  /// [NullableContext(0)]
  /// @brief Method <GetBeatmapKeys>b__23_1, addr 0x39d003c, size 0x58, virtual false, abstract: false, final false
  inline int32_t _GetBeatmapKeys_b__23_1(/* [TupleElementNames(new[] { "gameplayType", "characteristic", "difficulty" })] */ ::System::ValueTuple_3<
                                         ::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>
                                             entry);

  /// [NullableContext(0)]
  /// @brief Method <GetBeatmapKeys>b__23_2, addr 0x39d0094, size 0x8, virtual false, abstract: false, final false
  inline int32_t _GetBeatmapKeys_b__23_2(/* [TupleElementNames(new[] { "gameplayType", "characteristic", "difficulty" })] */ ::System::ValueTuple_3<
                                         ::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>
                                             entry);

  /// [NullableContext(0)]
  /// @brief Method <GetDifficulties>b__29_1, addr 0x39d009c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficulty _GetDifficulties_b__29_1(/* [TupleElementNames(new[] { "gameplayType", "characteristic", "difficulty" })] */ ::System::ValueTuple_3<
                                                                       ::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>
                                                                           entry);

  /// @brief Method <GetDifficulties>b__29_2, addr 0x39d00a4, size 0x8, virtual false, abstract: false, final false
  inline int32_t _GetDifficulties_b__29_2(::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method .ctor, addr 0x39d0030, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::BeatmapLevel___c* getStaticF___9();

  static inline ::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, int32_t>*
  getStaticF___9__23_0();

  static inline ::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, int32_t>*
  getStaticF___9__23_1();

  static inline ::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, int32_t>*
  getStaticF___9__23_2();

  static inline ::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                 ::GlobalNamespace::BeatmapDifficulty>*
  getStaticF___9__29_1();

  static inline ::System::Func_2<::GlobalNamespace::BeatmapDifficulty, int32_t>* getStaticF___9__29_2();

  static inline ::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                 ::GlobalNamespace::BeatmapCharacteristic>*
  getStaticF___9__34_1();

  static inline ::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, int32_t>* getStaticF___9__34_2();

  static inline void setStaticF___9(::GlobalNamespace::BeatmapLevel___c* value);

  static inline void
  setStaticF___9__23_0(::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, int32_t>* value);

  static inline void
  setStaticF___9__23_1(::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, int32_t>* value);

  static inline void
  setStaticF___9__23_2(::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, int32_t>* value);

  static inline void setStaticF___9__29_1(::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                           ::GlobalNamespace::BeatmapDifficulty>* value);

  static inline void setStaticF___9__29_2(::System::Func_2<::GlobalNamespace::BeatmapDifficulty, int32_t>* value);

  static inline void setStaticF___9__34_1(::System::Func_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                           ::GlobalNamespace::BeatmapCharacteristic>* value);

  static inline void setStaticF___9__34_2(::System::Func_2<::GlobalNamespace::BeatmapCharacteristic, int32_t>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevel___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevel___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevel___c(BeatmapLevel___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevel___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevel___c(BeatmapLevel___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14416 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::BeatmapLevel___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies BeatmapCharacteristic, GameplayType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevel/<>c__DisplayClass29_0
class CORDL_TYPE BeatmapLevel___c__DisplayClass29_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field characteristic, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_characteristic, put = __cordl_internal_set_characteristic)) ::GlobalNamespace::BeatmapCharacteristic characteristic;

  /// @brief Field gameplayType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_gameplayType, put = __cordl_internal_set_gameplayType)) ::GlobalNamespace::GameplayType gameplayType;

  static inline ::GlobalNamespace::BeatmapLevel___c__DisplayClass29_0* New_ctor();

  /// [NullableContext(0)]
  /// @brief Method <GetDifficulties>b__0, addr 0x39d010c, size 0x28, virtual false, abstract: false, final false
  inline bool _GetDifficulties_b__0(/* [TupleElementNames(new[] { "gameplayType", "characteristic", "difficulty" })] */ ::System::ValueTuple_3<
                                    ::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>
                                        entry);

  constexpr ::GlobalNamespace::BeatmapCharacteristic const& __cordl_internal_get_characteristic() const;

  constexpr ::GlobalNamespace::BeatmapCharacteristic& __cordl_internal_get_characteristic();

  constexpr ::GlobalNamespace::GameplayType const& __cordl_internal_get_gameplayType() const;

  constexpr ::GlobalNamespace::GameplayType& __cordl_internal_get_gameplayType();

  constexpr void __cordl_internal_set_characteristic(::GlobalNamespace::BeatmapCharacteristic value);

  constexpr void __cordl_internal_set_gameplayType(::GlobalNamespace::GameplayType value);

  /// @brief Method .ctor, addr 0x39cfd04, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevel___c__DisplayClass29_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevel___c__DisplayClass29_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevel___c__DisplayClass29_0(BeatmapLevel___c__DisplayClass29_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevel___c__DisplayClass29_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevel___c__DisplayClass29_0(BeatmapLevel___c__DisplayClass29_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14417 };

  /// @brief Field gameplayType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::GameplayType ___gameplayType;

  /// @brief Field characteristic, offset: 0x14, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapCharacteristic ___characteristic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevel___c__DisplayClass29_0, ___gameplayType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel___c__DisplayClass29_0, ___characteristic) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapLevel___c__DisplayClass29_0) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
// [CompilerGenerated]
// Dependencies GameplayType, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevel/<>c__DisplayClass34_0
class CORDL_TYPE BeatmapLevel___c__DisplayClass34_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameplayType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_gameplayType, put = __cordl_internal_set_gameplayType)) ::GlobalNamespace::GameplayType gameplayType;

  static inline ::GlobalNamespace::BeatmapLevel___c__DisplayClass34_0* New_ctor();

  /// [NullableContext(0)]
  /// @brief Method <CollectCharacteristics>b__0, addr 0x39d0134, size 0x10, virtual false, abstract: false, final false
  inline bool _CollectCharacteristics_b__0(/* [TupleElementNames(new[] { "gameplayType", "characteristic", "difficulty" })] */ ::System::ValueTuple_3<
                                           ::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>
                                               entry);

  constexpr ::GlobalNamespace::GameplayType const& __cordl_internal_get_gameplayType() const;

  constexpr ::GlobalNamespace::GameplayType& __cordl_internal_get_gameplayType();

  constexpr void __cordl_internal_set_gameplayType(::GlobalNamespace::GameplayType value);

  /// @brief Method .ctor, addr 0x39cffc0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevel___c__DisplayClass34_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevel___c__DisplayClass34_0", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevel___c__DisplayClass34_0(BeatmapLevel___c__DisplayClass34_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevel___c__DisplayClass34_0", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevel___c__DisplayClass34_0(BeatmapLevel___c__DisplayClass34_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14418 };

  /// @brief Field gameplayType, offset: 0x10, size: 0x4, def value: None
  ::GlobalNamespace::GameplayType ___gameplayType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevel___c__DisplayClass34_0, ___gameplayType) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapLevel___c__DisplayClass34_0) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
// [NullableContext(1)]
// [Nullable(0)]
// Dependencies BeatmapCharacteristic, BeatmapKey, PlayerSensitivityFlag, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BeatmapLevel
class CORDL_TYPE BeatmapLevel : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::BeatmapLevel___c;

  using __c__DisplayClass29_0 = ::GlobalNamespace::BeatmapLevel___c__DisplayClass29_0;

  using __c__DisplayClass34_0 = ::GlobalNamespace::BeatmapLevel___c__DisplayClass34_0;

  /// @brief Field _beatmapKeysCache, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapKeysCache, put = __cordl_internal_set__beatmapKeysCache)) ::ArrayW<::GlobalNamespace::BeatmapKey> _beatmapKeysCache;

  /// @brief Field _characteristicsCaches, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__characteristicsCaches, put = __cordl_internal_set__characteristicsCaches)) ::ArrayW<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>>
      _characteristicsCaches;

  /// @brief Field _gameplayTypeBeatmapBasicDatas, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__gameplayTypeBeatmapBasicDatas, put = __cordl_internal_set__gameplayTypeBeatmapBasicDatas)) ::System::Collections::Generic::Dictionary_2<
      ::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapBasicData*>*
      _gameplayTypeBeatmapBasicDatas;

  /// @brief Field allLighters, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_allLighters, put = __cordl_internal_set_allLighters)) ::ArrayW<::StringW> allLighters;

  /// @brief Field allMappers, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_allMappers, put = __cordl_internal_set_allMappers)) ::ArrayW<::StringW> allMappers;

  /// @brief Field beatsPerMinute, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_beatsPerMinute, put = __cordl_internal_set_beatsPerMinute)) float_t beatsPerMinute;

  /// @brief Field contentRating, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_contentRating, put = __cordl_internal_set_contentRating)) ::GlobalNamespace::PlayerSensitivityFlag contentRating;

  /// [TupleElementNames(new[] { "gameplayType", "characteristic", "difficulty" })]
  /// @brief [Nullable(new[] { 1, 0, 1 })]
  __declspec(property(get = get_gameplayTypeBeatmapBasicData)) ::System::Collections::Generic::IReadOnlyDictionary_2<
      ::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapBasicData*>*
      gameplayTypeBeatmapBasicData;

  /// @brief Field hasPrecalculatedData, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_hasPrecalculatedData, put = __cordl_internal_set_hasPrecalculatedData)) bool hasPrecalculatedData;

  /// @brief Field integratedLufs, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_integratedLufs, put = __cordl_internal_set_integratedLufs)) float_t integratedLufs;

  /// @brief Field levelID, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_levelID, put = __cordl_internal_set_levelID)) ::StringW levelID;

  /// @brief Field previewDuration, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_previewDuration, put = __cordl_internal_set_previewDuration)) float_t previewDuration;

  /// @brief Field previewMediaData, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_previewMediaData, put = __cordl_internal_set_previewMediaData)) ::GlobalNamespace::IPreviewMediaData* previewMediaData;

  /// @brief Field previewStartTime, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_previewStartTime, put = __cordl_internal_set_previewStartTime)) float_t previewStartTime;

  /// @brief Field songAuthorName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_songAuthorName, put = __cordl_internal_set_songAuthorName)) ::StringW songAuthorName;

  /// @brief Field songDuration, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get_songDuration, put = __cordl_internal_set_songDuration)) float_t songDuration;

  /// @brief Field songName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_songName, put = __cordl_internal_set_songName)) ::StringW songName;

  /// @brief Field songSubName, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_songSubName, put = __cordl_internal_set_songSubName)) ::StringW songSubName;

  /// @brief Field songTimeOffset, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_songTimeOffset, put = __cordl_internal_set_songTimeOffset)) float_t songTimeOffset;

  /// @brief Field version, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_version, put = __cordl_internal_set_version)) int32_t version;

  /// @brief Method AddBeatmapBasicData, addr 0x39cfe2c, size 0xb0, virtual false, abstract: false, final false
  inline void AddBeatmapBasicData(::GlobalNamespace::GameplayType gameplayType, ::GlobalNamespace::BeatmapCharacteristic characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty,
                                  ::GlobalNamespace::BeatmapBasicData* beatmapBasicData);

  /// @brief Method CollectCharacteristics, addr 0x39cf700, size 0x320, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::BeatmapCharacteristic> CollectCharacteristics(::GlobalNamespace::GameplayType gameplayType);

  /// @brief Method GetBeatmapKeys, addr 0x39cf160, size 0x36c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapKey>* GetBeatmapKeys();

  /// @brief Method GetCharacteristics, addr 0x39cf6a0, size 0x60, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::BeatmapCharacteristic> GetCharacteristics(::GlobalNamespace::GameplayType gameplayType);

  /// [NullableContext(2)]
  /// @brief Method GetColorScheme, addr 0x39cf544, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::ColorScheme* GetColorScheme(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BeatmapKey const> beatmapKey);

  /// @brief Method GetDifficulties, addr 0x39cfa20, size 0x2e4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapDifficulty>* GetDifficulties(::GlobalNamespace::GameplayType gameplayType,
                                                                                                              ::GlobalNamespace::BeatmapCharacteristic characteristic);

  /// [NullableContext(2)]
  /// @brief Method GetDifficultyBeatmapData, addr 0x39cf4cc, size 0x78, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapBasicData* GetDifficultyBeatmapData(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BeatmapKey const> beatmapKey);

  /// [NullableContext(2)]
  /// @brief Method GetDifficultyBeatmapData, addr 0x39cfd08, size 0x88, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapBasicData* GetDifficultyBeatmapData(::GlobalNamespace::GameplayType gameplayType, ::GlobalNamespace::BeatmapCharacteristic characteristic,
                                                                       ::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method GetEnvironmentName, addr 0x39c0780, size 0x84, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentName GetEnvironmentName(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::BeatmapKey const> beatmapKey);

  /// @brief Method GetEnvironmentName, addr 0x39cfd90, size 0x9c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::EnvironmentName GetEnvironmentName(::GlobalNamespace::GameplayType gameplayType, ::GlobalNamespace::BeatmapCharacteristic characteristic,
                                                               ::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method HasGameplayType, addr 0x39cf55c, size 0x144, virtual false, abstract: false, final false
  inline bool HasGameplayType(::GlobalNamespace::GameplayType gameplayType);

  /// @brief Method InvalidateCaches, addr 0x39cfedc, size 0x4c, virtual false, abstract: false, final false
  inline void InvalidateCaches();

  static inline ::GlobalNamespace::BeatmapLevel*
  New_ctor(int32_t version, bool hasPrecalculatedData, ::StringW levelID, ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::ArrayW<::StringW> allMappers,
           ::ArrayW<::StringW> allLighters, float_t beatsPerMinute, float_t integratedLufs, float_t songTimeOffset, float_t previewStartTime, float_t previewDuration, float_t songDuration,
           ::GlobalNamespace::PlayerSensitivityFlag contentRating, ::GlobalNamespace::IPreviewMediaData* previewMediaData, /* [Nullable(new[] { 1, 0, 1 })] */
           ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                        ::GlobalNamespace::BeatmapBasicData*>* beatmapBasicData);

  /// @brief Method RemoveBeatmapBasicData, addr 0x39cff28, size 0x98, virtual false, abstract: false, final false
  inline void RemoveBeatmapBasicData(::GlobalNamespace::GameplayType gameplayType, ::GlobalNamespace::BeatmapCharacteristic characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty);

  /// [NullableContext(0)]
  /// [CompilerGenerated]
  /// @brief Method <GetBeatmapKeys>b__23_3, addr 0x39cffc4, size 0x18, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapKey _GetBeatmapKeys_b__23_3(/* [TupleElementNames(new[] { "gameplayType", "characteristic", "difficulty" })] */ ::System::ValueTuple_3<
                                                               ::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>
                                                                   entry);

  constexpr ::ArrayW<::GlobalNamespace::BeatmapKey> const& __cordl_internal_get__beatmapKeysCache() const;

  constexpr ::ArrayW<::GlobalNamespace::BeatmapKey>& __cordl_internal_get__beatmapKeysCache();

  constexpr ::ArrayW<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>> const& __cordl_internal_get__characteristicsCaches() const;

  constexpr ::ArrayW<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>>& __cordl_internal_get__characteristicsCaches();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                         ::GlobalNamespace::BeatmapBasicData*>* const&
  __cordl_internal_get__gameplayTypeBeatmapBasicDatas() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                         ::GlobalNamespace::BeatmapBasicData*>*&
  __cordl_internal_get__gameplayTypeBeatmapBasicDatas();

  constexpr ::ArrayW<::StringW> const& __cordl_internal_get_allLighters() const;

  constexpr ::ArrayW<::StringW>& __cordl_internal_get_allLighters();

  constexpr ::ArrayW<::StringW> const& __cordl_internal_get_allMappers() const;

  constexpr ::ArrayW<::StringW>& __cordl_internal_get_allMappers();

  constexpr float_t const& __cordl_internal_get_beatsPerMinute() const;

  constexpr float_t& __cordl_internal_get_beatsPerMinute();

  constexpr ::GlobalNamespace::PlayerSensitivityFlag const& __cordl_internal_get_contentRating() const;

  constexpr ::GlobalNamespace::PlayerSensitivityFlag& __cordl_internal_get_contentRating();

  constexpr bool const& __cordl_internal_get_hasPrecalculatedData() const;

  constexpr bool& __cordl_internal_get_hasPrecalculatedData();

  constexpr float_t const& __cordl_internal_get_integratedLufs() const;

  constexpr float_t& __cordl_internal_get_integratedLufs();

  constexpr ::StringW const& __cordl_internal_get_levelID() const;

  constexpr ::StringW& __cordl_internal_get_levelID();

  constexpr float_t const& __cordl_internal_get_previewDuration() const;

  constexpr float_t& __cordl_internal_get_previewDuration();

  constexpr ::GlobalNamespace::IPreviewMediaData* const& __cordl_internal_get_previewMediaData() const;

  constexpr ::GlobalNamespace::IPreviewMediaData*& __cordl_internal_get_previewMediaData();

  constexpr float_t const& __cordl_internal_get_previewStartTime() const;

  constexpr float_t& __cordl_internal_get_previewStartTime();

  constexpr ::StringW const& __cordl_internal_get_songAuthorName() const;

  constexpr ::StringW& __cordl_internal_get_songAuthorName();

  constexpr float_t const& __cordl_internal_get_songDuration() const;

  constexpr float_t& __cordl_internal_get_songDuration();

  constexpr ::StringW const& __cordl_internal_get_songName() const;

  constexpr ::StringW& __cordl_internal_get_songName();

  constexpr ::StringW const& __cordl_internal_get_songSubName() const;

  constexpr ::StringW& __cordl_internal_get_songSubName();

  constexpr float_t const& __cordl_internal_get_songTimeOffset() const;

  constexpr float_t& __cordl_internal_get_songTimeOffset();

  constexpr int32_t const& __cordl_internal_get_version() const;

  constexpr int32_t& __cordl_internal_get_version();

  constexpr void __cordl_internal_set__beatmapKeysCache(::ArrayW<::GlobalNamespace::BeatmapKey> value);

  constexpr void __cordl_internal_set__characteristicsCaches(::ArrayW<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>> value);

  constexpr void __cordl_internal_set__gameplayTypeBeatmapBasicDatas(
      ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                   ::GlobalNamespace::BeatmapBasicData*>* value);

  constexpr void __cordl_internal_set_allLighters(::ArrayW<::StringW> value);

  constexpr void __cordl_internal_set_allMappers(::ArrayW<::StringW> value);

  constexpr void __cordl_internal_set_beatsPerMinute(float_t value);

  constexpr void __cordl_internal_set_contentRating(::GlobalNamespace::PlayerSensitivityFlag value);

  constexpr void __cordl_internal_set_hasPrecalculatedData(bool value);

  constexpr void __cordl_internal_set_integratedLufs(float_t value);

  constexpr void __cordl_internal_set_levelID(::StringW value);

  constexpr void __cordl_internal_set_previewDuration(float_t value);

  constexpr void __cordl_internal_set_previewMediaData(::GlobalNamespace::IPreviewMediaData* value);

  constexpr void __cordl_internal_set_previewStartTime(float_t value);

  constexpr void __cordl_internal_set_songAuthorName(::StringW value);

  constexpr void __cordl_internal_set_songDuration(float_t value);

  constexpr void __cordl_internal_set_songName(::StringW value);

  constexpr void __cordl_internal_set_songSubName(::StringW value);

  constexpr void __cordl_internal_set_songTimeOffset(float_t value);

  constexpr void __cordl_internal_set_version(int32_t value);

  /// @brief Method .ctor, addr 0x39cefb0, size 0x1b0, virtual false, abstract: false, final false
  inline void
  _ctor(int32_t version, bool hasPrecalculatedData, ::StringW levelID, ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::ArrayW<::StringW> allMappers,
        ::ArrayW<::StringW> allLighters, float_t beatsPerMinute, float_t integratedLufs, float_t songTimeOffset, float_t previewStartTime, float_t previewDuration, float_t songDuration,
        ::GlobalNamespace::PlayerSensitivityFlag contentRating, ::GlobalNamespace::IPreviewMediaData* previewMediaData, /* [Nullable(new[] { 1, 0, 1 })] */
        ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                     ::GlobalNamespace::BeatmapBasicData*>* beatmapBasicData);

  /// @brief Method get_gameplayTypeBeatmapBasicData, addr 0x39cefa8, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                                               ::GlobalNamespace::BeatmapBasicData*>*
  get_gameplayTypeBeatmapBasicData();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevel", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevel(BeatmapLevel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevel", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevel(BeatmapLevel const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14419 };

  /// @brief Field kInvalidVersion offset 0xffffffff size 0x4
  static constexpr int32_t kInvalidVersion{ static_cast<int32_t>(0xffffffff) };

  /// @brief Field version, offset: 0x10, size: 0x4, def value: None
  int32_t ___version;

  /// @brief Field hasPrecalculatedData, offset: 0x14, size: 0x1, def value: None
  bool ___hasPrecalculatedData;

  /// @brief Field levelID, offset: 0x18, size: 0x8, def value: None
  ::StringW ___levelID;

  /// @brief Field songName, offset: 0x20, size: 0x8, def value: None
  ::StringW ___songName;

  /// @brief Field songSubName, offset: 0x28, size: 0x8, def value: None
  ::StringW ___songSubName;

  /// @brief Field songAuthorName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___songAuthorName;

  /// @brief Field allMappers, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::StringW> ___allMappers;

  /// @brief Field allLighters, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::StringW> ___allLighters;

  /// @brief Field beatsPerMinute, offset: 0x48, size: 0x4, def value: None
  float_t ___beatsPerMinute;

  /// @brief Field integratedLufs, offset: 0x4c, size: 0x4, def value: None
  float_t ___integratedLufs;

  /// @brief Field songTimeOffset, offset: 0x50, size: 0x4, def value: None
  float_t ___songTimeOffset;

  /// @brief Field previewStartTime, offset: 0x54, size: 0x4, def value: None
  float_t ___previewStartTime;

  /// @brief Field previewDuration, offset: 0x58, size: 0x4, def value: None
  float_t ___previewDuration;

  /// @brief Field songDuration, offset: 0x5c, size: 0x4, def value: None
  float_t ___songDuration;

  /// @brief Field contentRating, offset: 0x60, size: 0x4, def value: None
  ::GlobalNamespace::PlayerSensitivityFlag ___contentRating;

  /// @brief Field previewMediaData, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewMediaData* ___previewMediaData;

  /// [TupleElementNames(new[] { "gameplayType", "characteristic", "difficulty" })]
  /// [Nullable(new[] { 1, 0, 1 })]
  /// @brief Field _gameplayTypeBeatmapBasicDatas, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_3<::GlobalNamespace::GameplayType, ::GlobalNamespace::BeatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty>,
                                               ::GlobalNamespace::BeatmapBasicData*>* ____gameplayTypeBeatmapBasicDatas;

  /// [Nullable(new[] { 1, 2 })]
  /// @brief Field _characteristicsCaches, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::ArrayW<::GlobalNamespace::BeatmapCharacteristic>> ____characteristicsCaches;

  /// [Nullable(2)]
  /// @brief Field _beatmapKeysCache, offset: 0x80, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapKey> ____beatmapKeysCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___hasPrecalculatedData) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___levelID) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___songName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___songSubName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___songAuthorName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___allMappers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___allLighters) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___beatsPerMinute) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___integratedLufs) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___songTimeOffset) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___previewStartTime) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___previewDuration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___songDuration) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___contentRating) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ___previewMediaData) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ____gameplayTypeBeatmapBasicDatas) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ____characteristicsCaches) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevel, ____beatmapKeysCache) == 0x80, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BeatmapLevel) == 0x88, "Size mismatch!");

} // namespace GlobalNamespace
