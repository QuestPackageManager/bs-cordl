#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapLevelSO.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__EnvironmentName_impl.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentName_def.hpp"
#include "GlobalNamespace/zzzz__IAssetSongPreviewAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c::*)()>(
    &::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x372a4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c._Add_b__8_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c::*)(::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*,
                                                                                                                                      ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*)>(
    &::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c::_Add_b__8_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x372a4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c*>(),
            { "<Add>b__8_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c::setStaticF___9(::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c*, "<>9", ::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c*>(
      std::forward<::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c*>(value));
}
inline ::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c* GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c*, "<>9", ::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c*>();
}
inline void GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c::setStaticF___9__8_0(::System::Comparison_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>*, "<>9__8_0",
                                    ::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c*>(
      std::forward<::System::Comparison_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>* GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>*, "<>9__8_0",
                                           ::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c*>();
}
inline void GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c::_Add_b__8_0(::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap* a,
                                                                                            ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap* b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c*>(),
          { "<Add>b__8_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c* GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c::PreviewDifficultyBeatmapSet_BeatmapLevelSO___c() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet.get_beatmapCharacteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapCharacteristic (::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet::*)()>(
    &::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet::get_beatmapCharacteristic)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3725a00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>(), { "get_beatmapCharacteristic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet.get_difficultyBeatmaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>* (
    ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet::*)()>(&::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet::get_difficultyBeatmaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a2b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>(), { "get_difficultyBeatmaps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet::*)(::GlobalNamespace::BeatmapCharacteristicSO*)>(
    &::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet::*)(
    ::GlobalNamespace::BeatmapCharacteristicSO*, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>*)>(
    &::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a2c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicSO*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet::*)(::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*)>(
    &::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet::Add)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x372a2d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>(),
                                                                                           { "Add", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet::__cordl_internal_get__beatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristic;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet::__cordl_internal_get__beatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristic;
}
constexpr void GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet::__cordl_internal_set__beatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCharacteristic = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>*&
GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet::__cordl_internal_get__previewDifficultyBeatmaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewDifficultyBeatmaps;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>* const&
GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet::__cordl_internal_get__previewDifficultyBeatmaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewDifficultyBeatmaps;
}
constexpr void GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet::__cordl_internal_set__previewDifficultyBeatmaps(
    ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previewDifficultyBeatmaps = value;
}
inline ::GlobalNamespace::BeatmapCharacteristic GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet::get_beatmapCharacteristic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>(), { "get_beatmapCharacteristic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapCharacteristic>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>*
GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet::get_difficultyBeatmaps() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>(), { "get_difficultyBeatmaps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>*>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet::_ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapCharacteristic);
}
inline void
GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet::_ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                                                                   ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>* previewDifficultyBeatmaps) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristicSO*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapCharacteristic, previewDifficultyBeatmaps);
}
inline void GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet::Add(::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap* previewDifficultyBeatmap) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>(),
                                                                                         { "Add", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previewDifficultyBeatmap);
}
inline ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*
GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet::New_ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>(beatmapCharacteristic));
}
inline ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*
GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet::New_ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                                                                      ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>* previewDifficultyBeatmaps) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>(beatmapCharacteristic, previewDifficultyBeatmaps));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet::BeatmapLevelSO_PreviewDifficultyBeatmapSet() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap.get_difficulty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDifficulty (::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::*)()>(
    &::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::get_difficulty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a594;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>(), { "get_difficulty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap.get_noteJumpMovementSpeed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::*)()>(
    &::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::get_noteJumpMovementSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>(), { "get_noteJumpMovementSpeed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap.get_noteJumpStartBeatOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::*)()>(
    &::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::get_noteJumpStartBeatOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a5a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>(), { "get_noteJumpStartBeatOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap.get_environmentNameIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::*)()>(
    &::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::get_environmentNameIdx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>(), { "get_environmentNameIdx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap.get_beatmapColorSchemeIdx
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::*)()>(
    &::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::get_beatmapColorSchemeIdx)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>(), { "get_beatmapColorSchemeIdx", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap.get_notesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::*)()>(
    &::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::get_notesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>(), { "get_notesCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap.get_obstaclesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::*)()>(
    &::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::get_obstaclesCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>(), { "get_obstaclesCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap.get_bombsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::*)()>(
    &::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::get_bombsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>(), { "get_bombsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap.get_cuttableBeatmapObjectsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::*)()>(
    &::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::get_cuttableBeatmapObjectsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>(), { "get_cuttableBeatmapObjectsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::*)(
    ::GlobalNamespace::BeatmapDifficulty, float_t, float_t, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t)>(&::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x372a5dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_get__difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_get__difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr void GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_set__difficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficulty = value;
}
constexpr int32_t& GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_get__environmentNameIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentNameIdx;
}
constexpr int32_t const& GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_get__environmentNameIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentNameIdx;
}
constexpr void GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_set__environmentNameIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentNameIdx = value;
}
constexpr int32_t& GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_get__beatmapColorSchemeIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapColorSchemeIdx;
}
constexpr int32_t const& GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_get__beatmapColorSchemeIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapColorSchemeIdx;
}
constexpr void GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_set__beatmapColorSchemeIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapColorSchemeIdx = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_get__noteJumpMovementSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpMovementSpeed;
}
constexpr float_t const& GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_get__noteJumpMovementSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpMovementSpeed;
}
constexpr void GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_set__noteJumpMovementSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpMovementSpeed = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_get__noteJumpStartBeatOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpStartBeatOffset;
}
constexpr float_t const& GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_get__noteJumpStartBeatOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpStartBeatOffset;
}
constexpr void GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_set__noteJumpStartBeatOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpStartBeatOffset = value;
}
constexpr int32_t& GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_get__notesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notesCount;
}
constexpr int32_t const& GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_get__notesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____notesCount;
}
constexpr void GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_set__notesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____notesCount = value;
}
constexpr int32_t& GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_get__obstaclesCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclesCount;
}
constexpr int32_t const& GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_get__obstaclesCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclesCount;
}
constexpr void GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_set__obstaclesCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstaclesCount = value;
}
constexpr int32_t& GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_get__bombsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombsCount;
}
constexpr int32_t const& GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_get__bombsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombsCount;
}
constexpr void GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_set__bombsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bombsCount = value;
}
constexpr int32_t& GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_get__cuttableBeatmapObjectsCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cuttableBeatmapObjectsCount;
}
constexpr int32_t const& GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_get__cuttableBeatmapObjectsCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cuttableBeatmapObjectsCount;
}
constexpr void GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::__cordl_internal_set__cuttableBeatmapObjectsCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cuttableBeatmapObjectsCount = value;
}
inline ::GlobalNamespace::BeatmapDifficulty GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::get_difficulty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>(), { "get_difficulty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficulty>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::get_noteJumpMovementSpeed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>(), { "get_noteJumpMovementSpeed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::get_noteJumpStartBeatOffset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>(), { "get_noteJumpStartBeatOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::get_environmentNameIdx() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>(), { "get_environmentNameIdx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::get_beatmapColorSchemeIdx() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>(), { "get_beatmapColorSchemeIdx", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::get_notesCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>(), { "get_notesCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::get_obstaclesCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>(), { "get_obstaclesCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::get_bombsCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>(), { "get_bombsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::get_cuttableBeatmapObjectsCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>(), { "get_cuttableBeatmapObjectsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::_ctor(::GlobalNamespace::BeatmapDifficulty difficulty, float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset,
                                                                            int32_t environmentNameIdx, int32_t beatmapColorSchemeIdx, int32_t notesCount, int32_t cuttableBeatmapObjectsCount,
                                                                            int32_t obstaclesCount, int32_t bombsCount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, difficulty, noteJumpMovementSpeed, noteJumpStartBeatOffset, environmentNameIdx, beatmapColorSchemeIdx, notesCount,
                                                   cuttableBeatmapObjectsCount, obstaclesCount, bombsCount);
}
inline ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap* GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::New_ctor(::GlobalNamespace::BeatmapDifficulty difficulty,
                                                                                                                                      float_t noteJumpMovementSpeed, float_t noteJumpStartBeatOffset,
                                                                                                                                      int32_t environmentNameIdx, int32_t beatmapColorSchemeIdx,
                                                                                                                                      int32_t notesCount, int32_t cuttableBeatmapObjectsCount,
                                                                                                                                      int32_t obstaclesCount, int32_t bombsCount) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap*>(difficulty, noteJumpMovementSpeed, noteJumpStartBeatOffset, environmentNameIdx,
                                                                                                   beatmapColorSchemeIdx, notesCount, cuttableBeatmapObjectsCount, obstaclesCount, bombsCount));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmap::BeatmapLevelSO_PreviewDifficultyBeatmap() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_ColorScheme.get_colorSchemeId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelSO_ColorScheme::*)()>(&::GlobalNamespace::BeatmapLevelSO_ColorScheme::get_colorSchemeId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a5f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>(), { "get_colorSchemeId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_ColorScheme.get_overrideNotes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevelSO_ColorScheme::*)()>(&::GlobalNamespace::BeatmapLevelSO_ColorScheme::get_overrideNotes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>(), { "get_overrideNotes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_ColorScheme.get_saberAColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::BeatmapLevelSO_ColorScheme::*)()>(&::GlobalNamespace::BeatmapLevelSO_ColorScheme::get_saberAColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x372a604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>(), { "get_saberAColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_ColorScheme.get_saberBColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::BeatmapLevelSO_ColorScheme::*)()>(&::GlobalNamespace::BeatmapLevelSO_ColorScheme::get_saberBColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x372a610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>(), { "get_saberBColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_ColorScheme.get_obstaclesColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::BeatmapLevelSO_ColorScheme::*)()>(&::GlobalNamespace::BeatmapLevelSO_ColorScheme::get_obstaclesColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x372a61c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>(), { "get_obstaclesColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_ColorScheme.get_overrideLights
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevelSO_ColorScheme::*)()>(&::GlobalNamespace::BeatmapLevelSO_ColorScheme::get_overrideLights)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>(), { "get_overrideLights", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_ColorScheme.get_environmentColor0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::BeatmapLevelSO_ColorScheme::*)()>(
    &::GlobalNamespace::BeatmapLevelSO_ColorScheme::get_environmentColor0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x372a630;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>(), { "get_environmentColor0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_ColorScheme.get_environmentColor1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::BeatmapLevelSO_ColorScheme::*)()>(
    &::GlobalNamespace::BeatmapLevelSO_ColorScheme::get_environmentColor1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x372a63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>(), { "get_environmentColor1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_ColorScheme.get_environmentColor0Boost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::BeatmapLevelSO_ColorScheme::*)()>(
    &::GlobalNamespace::BeatmapLevelSO_ColorScheme::get_environmentColor0Boost)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x372a648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>(), { "get_environmentColor0Boost", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_ColorScheme.get_environmentColor1Boost
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::BeatmapLevelSO_ColorScheme::*)()>(
    &::GlobalNamespace::BeatmapLevelSO_ColorScheme::get_environmentColor1Boost)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x372a654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>(), { "get_environmentColor1Boost", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO_ColorScheme._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelSO_ColorScheme::*)(::StringW, bool, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, bool,
                                                                                                               ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color)>(
    &::GlobalNamespace::BeatmapLevelSO_ColorScheme::_ctor)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x372a660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(),
                                                                 ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>(),
                                                                 ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_get__colorSchemeId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemeId;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_get__colorSchemeId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemeId;
}
constexpr void GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_set__colorSchemeId(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorSchemeId = value;
}
constexpr bool& GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_get__overrideNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideNotes;
}
constexpr bool const& GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_get__overrideNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideNotes;
}
constexpr void GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_set__overrideNotes(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideNotes = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_get__saberAColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberAColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_get__saberAColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberAColor;
}
constexpr void GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_set__saberAColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberAColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_get__saberBColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberBColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_get__saberBColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberBColor;
}
constexpr void GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_set__saberBColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberBColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_get__obstaclesColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclesColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_get__obstaclesColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstaclesColor;
}
constexpr void GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_set__obstaclesColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstaclesColor = value;
}
constexpr bool& GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_get__overrideLights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideLights;
}
constexpr bool const& GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_get__overrideLights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____overrideLights;
}
constexpr void GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_set__overrideLights(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____overrideLights = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_get__environmentColor0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentColor0;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_get__environmentColor0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentColor0;
}
constexpr void GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_set__environmentColor0(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentColor0 = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_get__environmentColor1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentColor1;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_get__environmentColor1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentColor1;
}
constexpr void GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_set__environmentColor1(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentColor1 = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_get__environmentColor0Boost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentColor0Boost;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_get__environmentColor0Boost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentColor0Boost;
}
constexpr void GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_set__environmentColor0Boost(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentColor0Boost = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_get__environmentColor1Boost() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentColor1Boost;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_get__environmentColor1Boost() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentColor1Boost;
}
constexpr void GlobalNamespace::BeatmapLevelSO_ColorScheme::__cordl_internal_set__environmentColor1Boost(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentColor1Boost = value;
}
inline ::StringW GlobalNamespace::BeatmapLevelSO_ColorScheme::get_colorSchemeId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>(), { "get_colorSchemeId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapLevelSO_ColorScheme::get_overrideNotes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>(), { "get_overrideNotes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::BeatmapLevelSO_ColorScheme::get_saberAColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>(), { "get_saberAColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::BeatmapLevelSO_ColorScheme::get_saberBColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>(), { "get_saberBColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::BeatmapLevelSO_ColorScheme::get_obstaclesColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>(), { "get_obstaclesColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapLevelSO_ColorScheme::get_overrideLights() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>(), { "get_overrideLights", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::BeatmapLevelSO_ColorScheme::get_environmentColor0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>(), { "get_environmentColor0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::BeatmapLevelSO_ColorScheme::get_environmentColor1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>(), { "get_environmentColor1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::BeatmapLevelSO_ColorScheme::get_environmentColor0Boost() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>(), { "get_environmentColor0Boost", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::BeatmapLevelSO_ColorScheme::get_environmentColor1Boost() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>(), { "get_environmentColor1Boost", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelSO_ColorScheme::_ctor(::StringW colorSchemeId, bool overrideNotes, ::UnityEngine::Color saberAColor, ::UnityEngine::Color saberBColor,
                                                               ::UnityEngine::Color obstaclesColor, bool overrideLights, ::UnityEngine::Color environmentColor0, ::UnityEngine::Color environmentColor1,
                                                               ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(),
                                                               ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Color>(),
                                                               ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorSchemeId, overrideNotes, saberAColor, saberBColor, obstaclesColor, overrideLights, environmentColor0,
                                                   environmentColor1, environmentColor0Boost, environmentColor1Boost);
}
inline ::GlobalNamespace::BeatmapLevelSO_ColorScheme* GlobalNamespace::BeatmapLevelSO_ColorScheme::New_ctor(::StringW colorSchemeId, bool overrideNotes, ::UnityEngine::Color saberAColor,
                                                                                                            ::UnityEngine::Color saberBColor, ::UnityEngine::Color obstaclesColor, bool overrideLights,
                                                                                                            ::UnityEngine::Color environmentColor0, ::UnityEngine::Color environmentColor1,
                                                                                                            ::UnityEngine::Color environmentColor0Boost, ::UnityEngine::Color environmentColor1Boost) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>(colorSchemeId, overrideNotes, saberAColor, saberBColor, obstaclesColor, overrideLights,
                                                                                                          environmentColor0, environmentColor1, environmentColor0Boost, environmentColor1Boost));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelSO_ColorScheme::BeatmapLevelSO_ColorScheme() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_hasPrecalculatedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_hasPrecalculatedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3726b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_hasPrecalculatedData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3729ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_levelID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_levelID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_levelID", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a00c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_songName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songSubName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songSubName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_songSubName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songAuthorName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songAuthorName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_songAuthorName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_levelAuthorName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_levelAuthorName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_levelAuthorName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_beatsPerMinute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_beatsPerMinute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_beatsPerMinute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_integratedLufs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_integratedLufs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a034;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_integratedLufs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songTimeOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songTimeOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_songTimeOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_songDuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_shuffle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_shuffle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_shuffle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_shufflePeriod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_shufflePeriod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_shufflePeriod", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_previewStartTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_previewStartTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_previewStartTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_previewDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_previewDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a064;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_previewDuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_environmentName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EnvironmentName (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_environmentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a06c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_environmentName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_allDirectionsEnvironmentName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EnvironmentName (::GlobalNamespace::BeatmapLevelSO::*)()>(
    &::GlobalNamespace::BeatmapLevelSO::get_allDirectionsEnvironmentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_allDirectionsEnvironmentName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_environmentNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::EnvironmentName>* (::GlobalNamespace::BeatmapLevelSO::*)()>(
    &::GlobalNamespace::BeatmapLevelSO::get_environmentNames)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3726754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_environmentNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_colorSchemes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>* (::GlobalNamespace::BeatmapLevelSO::*)()>(
    &::GlobalNamespace::BeatmapLevelSO::get_colorSchemes)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x37267f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_colorSchemes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_coverImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_coverImage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a07c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_coverImage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_songPreviewAudioClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_songPreviewAudioClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_songPreviewAudioClip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_contentRating
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerSensitivityFlag (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_contentRating)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a08c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_contentRating", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.get_previewDifficultyBeatmapSets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>* (
    ::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::get_previewDifficultyBeatmapSets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_previewDifficultyBeatmapSets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.__SetEnvironmentName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelSO::*)(::GlobalNamespace::EnvironmentName)>(&::GlobalNamespace::BeatmapLevelSO::__SetEnvironmentName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a09c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "__SetEnvironmentName", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentName>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.IncrementVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::IncrementVersion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x372a0a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "IncrementVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.SetData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelSO::*)(
    ::StringW, ::StringW, ::StringW, ::StringW, ::StringW, float_t, float_t, float_t, float_t, float_t, float_t, float_t, ::UnityEngine::Sprite*, ::GlobalNamespace::EnvironmentName,
    ::GlobalNamespace::EnvironmentName, ::ArrayW<::GlobalNamespace::EnvironmentName>, ::ArrayW<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>)>(&::GlobalNamespace::BeatmapLevelSO::SetData)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x372a0b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(),
                                                { "SetData",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                    ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                    ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Sprite*>(),
                                                    ::i2c::type_of<::GlobalNamespace::EnvironmentName>(), ::i2c::type_of<::GlobalNamespace::EnvironmentName>(),
                                                    ::i2c::type_of<::ArrayW<::GlobalNamespace::EnvironmentName>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.SetPreviewDifficultyBeatmaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelSO::*)(::ArrayW<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>)>(
    &::GlobalNamespace::BeatmapLevelSO::SetPreviewDifficultyBeatmaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a280;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(),
                                                             { "SetPreviewDifficultyBeatmaps", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.SetIntegratedLufs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelSO::*)(float_t)>(&::GlobalNamespace::BeatmapLevelSO::SetIntegratedLufs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "SetIntegratedLufs", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.SetPreviewAudioClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelSO::*)(::UnityEngine::AudioClip*)>(&::GlobalNamespace::BeatmapLevelSO::SetPreviewAudioClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "SetPreviewAudioClip", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.SetSongDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelSO::*)(float_t)>(&::GlobalNamespace::BeatmapLevelSO::SetSongDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "SetSongDuration", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO.SetCoverImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelSO::*)(::UnityEngine::Sprite*)>(&::GlobalNamespace::BeatmapLevelSO::SetCoverImage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372a2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "SetCoverImage", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelSO::*)()>(&::GlobalNamespace::BeatmapLevelSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x372a2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr int32_t const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
constexpr ::StringW& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__levelID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelID;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__levelID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelID;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__levelID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelID = value;
}
constexpr ::StringW& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__songName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songName;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__songName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songName;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__songName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songName = value;
}
constexpr ::StringW& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__songSubName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSubName;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__songSubName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songSubName;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__songSubName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songSubName = value;
}
constexpr ::StringW& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__songAuthorName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songAuthorName;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__songAuthorName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songAuthorName;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__songAuthorName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songAuthorName = value;
}
constexpr ::StringW& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__levelAuthorName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelAuthorName;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__levelAuthorName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelAuthorName;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__levelAuthorName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelAuthorName = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__previewAudioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewAudioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__previewAudioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewAudioClip;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__previewAudioClip(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previewAudioClip = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__beatsPerMinute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatsPerMinute;
}
constexpr float_t const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__beatsPerMinute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatsPerMinute;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__beatsPerMinute(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatsPerMinute = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__integratedLufs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____integratedLufs;
}
constexpr float_t const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__integratedLufs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____integratedLufs;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__integratedLufs(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____integratedLufs = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__songTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeOffset;
}
constexpr float_t const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__songTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songTimeOffset;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__songTimeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songTimeOffset = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__shuffle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shuffle;
}
constexpr float_t const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__shuffle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shuffle;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__shuffle(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shuffle = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__shufflePeriod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shufflePeriod;
}
constexpr float_t const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__shufflePeriod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shufflePeriod;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__shufflePeriod(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shufflePeriod = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__previewStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewStartTime;
}
constexpr float_t const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__previewStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewStartTime;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__previewStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previewStartTime = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__previewDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewDuration;
}
constexpr float_t const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__previewDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewDuration;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__previewDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previewDuration = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__songDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songDuration;
}
constexpr float_t const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__songDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songDuration;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__songDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songDuration = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__coverImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverImage;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__coverImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____coverImage;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__coverImage(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____coverImage = value;
}
constexpr ::GlobalNamespace::EnvironmentName& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__environmentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentName;
}
constexpr ::GlobalNamespace::EnvironmentName const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__environmentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentName;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__environmentName(::GlobalNamespace::EnvironmentName value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentName = value;
}
constexpr ::GlobalNamespace::EnvironmentName& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__allDirectionsEnvironmentName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allDirectionsEnvironmentName;
}
constexpr ::GlobalNamespace::EnvironmentName const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__allDirectionsEnvironmentName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allDirectionsEnvironmentName;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__allDirectionsEnvironmentName(::GlobalNamespace::EnvironmentName value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allDirectionsEnvironmentName = value;
}
constexpr ::ArrayW<::GlobalNamespace::EnvironmentName>& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__environmentNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentNames;
}
constexpr ::ArrayW<::GlobalNamespace::EnvironmentName> const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__environmentNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentNames;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__environmentNames(::ArrayW<::GlobalNamespace::EnvironmentName> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentNames = value;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__colorSchemes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemes;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelSO_ColorScheme*> const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__colorSchemes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorSchemes;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__colorSchemes(::ArrayW<::GlobalNamespace::BeatmapLevelSO_ColorScheme*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorSchemes = value;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__previewDifficultyBeatmapSets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewDifficultyBeatmapSets;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*> const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__previewDifficultyBeatmapSets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previewDifficultyBeatmapSets;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__previewDifficultyBeatmapSets(::ArrayW<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previewDifficultyBeatmapSets = value;
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__contentRating() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentRating;
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag const& GlobalNamespace::BeatmapLevelSO::__cordl_internal_get__contentRating() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contentRating;
}
constexpr void GlobalNamespace::BeatmapLevelSO::__cordl_internal_set__contentRating(::GlobalNamespace::PlayerSensitivityFlag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contentRating = value;
}
inline bool GlobalNamespace::BeatmapLevelSO::get_hasPrecalculatedData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_hasPrecalculatedData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t GlobalNamespace::BeatmapLevelSO::get_version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapLevelSO::get_levelID() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_levelID", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapLevelSO::get_songName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_songName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapLevelSO::get_songSubName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_songSubName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapLevelSO::get_songAuthorName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_songAuthorName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapLevelSO::get_levelAuthorName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_levelAuthorName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO::get_beatsPerMinute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_beatsPerMinute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO::get_integratedLufs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_integratedLufs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO::get_songTimeOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_songTimeOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO::get_songDuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_songDuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO::get_shuffle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_shuffle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO::get_shufflePeriod() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_shufflePeriod", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO::get_previewStartTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_previewStartTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapLevelSO::get_previewDuration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_previewDuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentName GlobalNamespace::BeatmapLevelSO::get_environmentName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_environmentName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentName>(this, ___internal_method);
}
inline ::GlobalNamespace::EnvironmentName GlobalNamespace::BeatmapLevelSO::get_allDirectionsEnvironmentName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_allDirectionsEnvironmentName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentName>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::EnvironmentName>* GlobalNamespace::BeatmapLevelSO::get_environmentNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_environmentNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::EnvironmentName>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>* GlobalNamespace::BeatmapLevelSO::get_colorSchemes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_colorSchemes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Sprite> GlobalNamespace::BeatmapLevelSO::get_coverImage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_coverImage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> GlobalNamespace::BeatmapLevelSO::get_songPreviewAudioClip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_songPreviewAudioClip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerSensitivityFlag GlobalNamespace::BeatmapLevelSO::get_contentRating() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_contentRating", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSensitivityFlag>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>* GlobalNamespace::BeatmapLevelSO::get_previewDifficultyBeatmapSets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "get_previewDifficultyBeatmapSets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>*>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelSO::__SetEnvironmentName(::GlobalNamespace::EnvironmentName targetEnvironmentName) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "__SetEnvironmentName", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentName>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetEnvironmentName);
}
inline void GlobalNamespace::BeatmapLevelSO::IncrementVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "IncrementVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelSO::SetData(::StringW levelID, ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::StringW levelAuthorName, float_t beatsPerMinute,
                                                     float_t songTimeOffset, float_t songDuration, float_t shuffle, float_t shufflePeriod, float_t previewStartTime, float_t previewDuration,
                                                     ::UnityEngine::Sprite* coverImage, ::GlobalNamespace::EnvironmentName environmentName,
                                                     ::GlobalNamespace::EnvironmentName allDirectionEnvironmentName, ::ArrayW<::GlobalNamespace::EnvironmentName> environmentNames,
                                                     ::ArrayW<::GlobalNamespace::BeatmapLevelSO_ColorScheme*> colorSchemes) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(),
                                              { "SetData",
                                                {},
                                                { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                  ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                                                  ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Sprite*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentName>(),
                                                  ::i2c::type_of<::GlobalNamespace::EnvironmentName>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::EnvironmentName>>(),
                                                  ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapLevelSO_ColorScheme*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelID, songName, songSubName, songAuthorName, levelAuthorName, beatsPerMinute, songTimeOffset, songDuration, shuffle,
                                                   shufflePeriod, previewStartTime, previewDuration, coverImage, environmentName, allDirectionEnvironmentName, environmentNames, colorSchemes);
}
inline void GlobalNamespace::BeatmapLevelSO::SetPreviewDifficultyBeatmaps(::ArrayW<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*> previewDifficultyBeatmapSets) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(),
                                                           { "SetPreviewDifficultyBeatmaps", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapLevelSO_PreviewDifficultyBeatmapSet*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previewDifficultyBeatmapSets);
}
inline void GlobalNamespace::BeatmapLevelSO::SetIntegratedLufs(float_t integratedLufs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "SetIntegratedLufs", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, integratedLufs);
}
inline void GlobalNamespace::BeatmapLevelSO::SetPreviewAudioClip(::UnityEngine::AudioClip* audioClip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "SetPreviewAudioClip", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioClip);
}
inline void GlobalNamespace::BeatmapLevelSO::SetSongDuration(float_t songDuration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "SetSongDuration", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, songDuration);
}
inline void GlobalNamespace::BeatmapLevelSO::SetCoverImage(::UnityEngine::Sprite* coverImage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { "SetCoverImage", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, coverImage);
}
inline void GlobalNamespace::BeatmapLevelSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelSO* GlobalNamespace::BeatmapLevelSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelSO*>());
}
/// @brief Convert operator to "::GlobalNamespace::IAssetSongPreviewAudioClipProvider"
constexpr GlobalNamespace::BeatmapLevelSO::operator ::GlobalNamespace::IAssetSongPreviewAudioClipProvider*() noexcept {
  return static_cast<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAssetSongPreviewAudioClipProvider"
constexpr ::GlobalNamespace::IAssetSongPreviewAudioClipProvider* GlobalNamespace::BeatmapLevelSO::i___GlobalNamespace__IAssetSongPreviewAudioClipProvider() noexcept {
  return static_cast<::GlobalNamespace::IAssetSongPreviewAudioClipProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelSO::BeatmapLevelSO() {}
