#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapLevelDataSO.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristic_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataSO_def.hpp"
#include "GlobalNamespace/zzzz__IAssetSongAudioClipProvider_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__TextAsset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c::*)()>(
    &::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37235a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c._Add_b__8_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c::*)(::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*,
                                                                                                                                   ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*)>(
    &::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c::_Add_b__8_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x37235ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c*>(),
            { "<Add>b__8_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c::setStaticF___9(::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c*, "<>9", ::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c*>(
      std::forward<::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c*>(value));
}
inline ::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c* GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c*, "<>9", ::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c*>();
}
inline void GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c::setStaticF___9__8_0(::System::Comparison_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>*, "<>9__8_0", ::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c*>(
      std::forward<::System::Comparison_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>*>(value));
}
inline ::System::Comparison_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>* GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c::getStaticF___9__8_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>*, "<>9__8_0",
                                           ::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c*>();
}
inline void GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c::_Add_b__8_0(::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap* a,
                                                                                         ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap* b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c*>(),
          { "<Add>b__8_0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c* GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DifficultyBeatmapSet_BeatmapLevelDataSO___c::DifficultyBeatmapSet_BeatmapLevelDataSO___c() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet.get_beatmapCharacteristicSerializedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet::*)()>(
    &::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet::get_beatmapCharacteristicSerializedName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37232d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>(), { "get_beatmapCharacteristicSerializedName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet.get_difficultyBeatmaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>* (
    ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet::*)()>(&::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet::get_difficultyBeatmaps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37232e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>(), { "get_difficultyBeatmaps", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet::*)(
    ::StringW, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>*)>(&::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x37232e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>(),
            { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet::*)(::StringW)>(
    &::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x3723350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet::*)(::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*)>(
    &::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet::Add)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x37233d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>(),
                                                                                           { "Add", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet::__cordl_internal_get__beatmapCharacteristicSerializedName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicSerializedName;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet::__cordl_internal_get__beatmapCharacteristicSerializedName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCharacteristicSerializedName;
}
constexpr void GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet::__cordl_internal_set__beatmapCharacteristicSerializedName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCharacteristicSerializedName = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>*&
GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet::__cordl_internal_get__difficultyBeatmaps() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmaps;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>* const&
GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet::__cordl_internal_get__difficultyBeatmaps() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmaps;
}
constexpr void GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet::__cordl_internal_set__difficultyBeatmaps(
    ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficultyBeatmaps = value;
}
inline ::StringW GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet::get_beatmapCharacteristicSerializedName() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>(), { "get_beatmapCharacteristicSerializedName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>* GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet::get_difficultyBeatmaps() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>(), { "get_difficultyBeatmaps", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>*>(this, ___internal_method);
}
inline void
GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet::_ctor(::StringW beatmapCharacteristicSerializedName,
                                                                ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>* difficultyBeatmaps) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>(),
                       { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapCharacteristicSerializedName, difficultyBeatmaps);
}
inline void GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet::_ctor(::StringW beatmapCharacteristicSerializedName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapCharacteristicSerializedName);
}
inline void GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet::Add(::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap* difficultyBeatmap) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>(),
                                                                                         { "Add", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, difficultyBeatmap);
}
inline ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*
GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet::New_ctor(::StringW beatmapCharacteristicSerializedName,
                                                                   ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>* difficultyBeatmaps) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>(beatmapCharacteristicSerializedName, difficultyBeatmaps));
}
inline ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet* GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet::New_ctor(::StringW beatmapCharacteristicSerializedName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>(beatmapCharacteristicSerializedName));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet::BeatmapLevelDataSO_DifficultyBeatmapSet() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap.get_beatmapAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextAsset> (::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::*)()>(
    &::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::get_beatmapAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3723648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(), { "get_beatmapAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap.set_beatmapAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::*)(::UnityEngine::TextAsset*)>(
    &::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::set_beatmapAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3723650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(), { "set_beatmapAsset", {}, { ::i2c::type_of<::UnityEngine::TextAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap.get_hasLightshowAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::*)()>(
    &::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::get_hasLightshowAsset)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x3723658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(), { "get_hasLightshowAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap.get_lightshowAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextAsset> (::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::*)()>(
    &::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::get_lightshowAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37236bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(), { "get_lightshowAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap.set_lightshowAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::*)(::UnityEngine::TextAsset*)>(
    &::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::set_lightshowAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37236c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(), { "set_lightshowAsset", {}, { ::i2c::type_of<::UnityEngine::TextAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap.get_difficulty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDifficulty (::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::*)()>(
    &::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::get_difficulty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37236cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(), { "get_difficulty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::*)(::GlobalNamespace::BeatmapDifficulty, ::UnityEngine::TextAsset*)>(
    &::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x37236d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<::UnityEngine::TextAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::*)(
    ::GlobalNamespace::BeatmapDifficulty, ::UnityEngine::TextAsset*, ::UnityEngine::TextAsset*)>(&::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x37236e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(),
                            { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<::UnityEngine::TextAsset*>(), ::i2c::type_of<::UnityEngine::TextAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap.GetBeatmapStringAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::*)()>(
    &::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::GetBeatmapStringAsync)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3722a08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(), { "GetBeatmapStringAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap.GetLightshowStringAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::*)()>(
    &::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::GetLightshowStringAsync)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x3722b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(), { "GetLightshowStringAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap.GetBeatmapString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::*)()>(
    &::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::GetBeatmapString)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3722f6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(), { "GetBeatmapString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap.GetLightshowString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::*)()>(
    &::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::GetLightshowString)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3723050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(), { "GetLightshowString", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapDifficulty& GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::__cordl_internal_get__difficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::__cordl_internal_get__difficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficulty;
}
constexpr void GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::__cordl_internal_set__difficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficulty = value;
}
constexpr ::UnityW<::UnityEngine::TextAsset>& GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::__cordl_internal_get__beatmapAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapAsset;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::__cordl_internal_get__beatmapAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapAsset;
}
constexpr void GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::__cordl_internal_set__beatmapAsset(::UnityW<::UnityEngine::TextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapAsset = value;
}
constexpr ::UnityW<::UnityEngine::TextAsset>& GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::__cordl_internal_get__lightshowAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightshowAsset;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::__cordl_internal_get__lightshowAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lightshowAsset;
}
constexpr void GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::__cordl_internal_set__lightshowAsset(::UnityW<::UnityEngine::TextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lightshowAsset = value;
}
inline ::UnityW<::UnityEngine::TextAsset> GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::get_beatmapAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(), { "get_beatmapAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::set_beatmapAsset(::UnityEngine::TextAsset* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(), { "set_beatmapAsset", {}, { ::i2c::type_of<::UnityEngine::TextAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::get_hasLightshowAsset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(), { "get_hasLightshowAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::TextAsset> GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::get_lightshowAsset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(), { "get_lightshowAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::set_lightshowAsset(::UnityEngine::TextAsset* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(), { "set_lightshowAsset", {}, { ::i2c::type_of<::UnityEngine::TextAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapDifficulty GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::get_difficulty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(), { "get_difficulty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficulty>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::_ctor(::GlobalNamespace::BeatmapDifficulty difficulty, ::UnityEngine::TextAsset* beatmapAsset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<::UnityEngine::TextAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, difficulty, beatmapAsset);
}
inline void GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::_ctor(::GlobalNamespace::BeatmapDifficulty difficulty, ::UnityEngine::TextAsset* beatmapAsset,
                                                                         ::UnityEngine::TextAsset* lightshowAsset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(),
                          { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<::UnityEngine::TextAsset*>(), ::i2c::type_of<::UnityEngine::TextAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, difficulty, beatmapAsset, lightshowAsset);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::GetBeatmapStringAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(), { "GetBeatmapStringAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::GetLightshowStringAsync() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(), { "GetLightshowStringAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::GetBeatmapString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(), { "GetBeatmapString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::GetLightshowString() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(), { "GetLightshowString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap* GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::New_ctor(::GlobalNamespace::BeatmapDifficulty difficulty,
                                                                                                                                ::UnityEngine::TextAsset* beatmapAsset) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(difficulty, beatmapAsset));
}
inline ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*
GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::New_ctor(::GlobalNamespace::BeatmapDifficulty difficulty, ::UnityEngine::TextAsset* beatmapAsset, ::UnityEngine::TextAsset* lightshowAsset) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(difficulty, beatmapAsset, lightshowAsset));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap::BeatmapLevelDataSO_DifficultyBeatmap() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0::*)()>(&::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3723180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0._GetDifficultyBeatmap_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0::*)(::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*)>(
    &::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0::_GetDifficultyBeatmap_b__0)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x37236ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0*>(),
                                                             { "<GetDifficultyBeatmap>b__0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0::__cordl_internal_get_beatmapKey() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0::__cordl_internal_get_beatmapKey() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapKey;
}
constexpr void GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0::__cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapKey = value;
}
inline void GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0::_GetDifficultyBeatmap_b__0(::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap* difficultyBeatmap) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0*>(),
                                                           { "<GetDifficultyBeatmap>b__0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, difficultyBeatmap);
}
inline ::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0* GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass22_0::BeatmapLevelDataSO___c__DisplayClass22_0() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0::*)()>(&::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3723278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0._GetDifficultyBeatmapSet_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0::*)(::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*)>(
    &::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0::_GetDifficultyBeatmapSet_b__0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x372370c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0*>(),
                                                             { "<GetDifficultyBeatmapSet>b__0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapCharacteristic& GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0::__cordl_internal_get_beatmapCharacteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristic;
}
constexpr ::GlobalNamespace::BeatmapCharacteristic const& GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0::__cordl_internal_get_beatmapCharacteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapCharacteristic;
}
constexpr void GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0::__cordl_internal_set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristic value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapCharacteristic = value;
}
inline void GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0::_GetDifficultyBeatmapSet_b__0(::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet* difficultyBeatmapSet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0*>(),
                                                           { "<GetDifficultyBeatmapSet>b__0", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, difficultyBeatmapSet);
}
inline ::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0* GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelDataSO___c__DisplayClass23_0::BeatmapLevelDataSO___c__DisplayClass23_0() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapLevelDataSO::*)()>(&::GlobalNamespace::BeatmapLevelDataSO::get_version)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37226e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.get_songAudioClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::GlobalNamespace::BeatmapLevelDataSO::*)()>(&::GlobalNamespace::BeatmapLevelDataSO::get_songAudioClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37226ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "get_songAudioClip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.get_difficultyBeatmapSets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*> (::GlobalNamespace::BeatmapLevelDataSO::*)()>(
    &::GlobalNamespace::BeatmapLevelDataSO::get_difficultyBeatmapSets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37226f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "get_difficultyBeatmapSets", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.get_audioDataAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::TextAsset> (::GlobalNamespace::BeatmapLevelDataSO::*)()>(&::GlobalNamespace::BeatmapLevelDataSO::get_audioDataAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37226fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "get_audioDataAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.set_audioDataAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelDataSO::*)(::UnityEngine::TextAsset*)>(&::GlobalNamespace::BeatmapLevelDataSO::set_audioDataAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3722704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "set_audioDataAsset", {}, { ::i2c::type_of<::UnityEngine::TextAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.GetAudioDataStringAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::BeatmapLevelDataSO::*)()>(
    &::GlobalNamespace::BeatmapLevelDataSO::GetAudioDataStringAsync)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x372270c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "GetAudioDataStringAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.GetBeatmapStringAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::BeatmapLevelDataSO::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::BeatmapLevelDataSO::GetBeatmapStringAsync)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3722860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "GetBeatmapStringAsync", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.GetLightshowStringAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::BeatmapLevelDataSO::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::BeatmapLevelDataSO::GetLightshowStringAsync)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3722ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "GetLightshowStringAsync", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.GetAudioDataString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelDataSO::*)()>(&::GlobalNamespace::BeatmapLevelDataSO::GetAudioDataString)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x3722cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "GetAudioDataString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.GetBeatmapString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelDataSO::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::BeatmapLevelDataSO::GetBeatmapString)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3722f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "GetBeatmapString", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.GetLightshowString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelDataSO::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::BeatmapLevelDataSO::GetLightshowString)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x372302c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "GetLightshowString", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.ContainsBeatmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevelDataSO::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::BeatmapLevelDataSO::ContainsBeatmapData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x3723160;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "ContainsBeatmapData", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.GetDifficultyBeatmap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap* (::GlobalNamespace::BeatmapLevelDataSO::*)(::GlobalNamespace::BeatmapKey)>(
    &::GlobalNamespace::BeatmapLevelDataSO::GetDifficultyBeatmap)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3722908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "GetDifficultyBeatmap", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.GetDifficultyBeatmapSet
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet* (
    ::GlobalNamespace::BeatmapLevelDataSO::*)(::GlobalNamespace::BeatmapCharacteristic)>(&::GlobalNamespace::BeatmapLevelDataSO::GetDifficultyBeatmapSet)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3723184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(),
                                                                                           { "GetDifficultyBeatmapSet", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.IncrementVersion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelDataSO::*)()>(&::GlobalNamespace::BeatmapLevelDataSO::IncrementVersion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x372327c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "IncrementVersion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.SetAudioClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelDataSO::*)(::UnityEngine::AudioClip*)>(&::GlobalNamespace::BeatmapLevelDataSO::SetAudioClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372328c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "SetAudioClip", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.SetDifficultyBeatmapSets
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelDataSO::*)(::ArrayW<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>)>(
    &::GlobalNamespace::BeatmapLevelDataSO::SetDifficultyBeatmapSets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3723294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(),
                                                             { "SetDifficultyBeatmapSets", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelDataSO::*)()>(&::GlobalNamespace::BeatmapLevelDataSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x372329c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.IBeatmapLevelData_get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelDataSO::*)()>(&::GlobalNamespace::BeatmapLevelDataSO::IBeatmapLevelData_get_name)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37232a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "IBeatmapLevelData.get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.IBeatmapLevelData_GetBeatmapStringAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::BeatmapLevelDataSO::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::BeatmapLevelDataSO::IBeatmapLevelData_GetBeatmapStringAsync)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37232a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(),
                                                             { "IBeatmapLevelData.GetBeatmapStringAsync", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.IBeatmapLevelData_GetLightshowStringAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::BeatmapLevelDataSO::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::BeatmapLevelDataSO::IBeatmapLevelData_GetLightshowStringAsync)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37232ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(),
                                                             { "IBeatmapLevelData.GetLightshowStringAsync", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.IBeatmapLevelData_GetBeatmapString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelDataSO::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::BeatmapLevelDataSO::IBeatmapLevelData_GetBeatmapString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37232b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "IBeatmapLevelData.GetBeatmapString", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.IBeatmapLevelData_GetLightshowString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::BeatmapLevelDataSO::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::BeatmapLevelDataSO::IBeatmapLevelData_GetLightshowString)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37232b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "IBeatmapLevelData.GetLightshowString", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelDataSO.IBeatmapLevelData_ContainsBeatmapData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevelDataSO::*)(::by_ref<::GlobalNamespace::BeatmapKey>)>(
    &::GlobalNamespace::BeatmapLevelDataSO::IBeatmapLevelData_ContainsBeatmapData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x37232b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(),
                                                             { "IBeatmapLevelData.ContainsBeatmapData", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BeatmapLevelDataSO::__cordl_internal_get__version() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr int32_t const& GlobalNamespace::BeatmapLevelDataSO::__cordl_internal_get__version() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____version;
}
constexpr void GlobalNamespace::BeatmapLevelDataSO::__cordl_internal_set__version(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____version = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& GlobalNamespace::BeatmapLevelDataSO::__cordl_internal_get__audioClip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& GlobalNamespace::BeatmapLevelDataSO::__cordl_internal_get__audioClip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioClip;
}
constexpr void GlobalNamespace::BeatmapLevelDataSO::__cordl_internal_set__audioClip(::UnityW<::UnityEngine::AudioClip> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioClip = value;
}
constexpr ::UnityW<::UnityEngine::TextAsset>& GlobalNamespace::BeatmapLevelDataSO::__cordl_internal_get__audioDataAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioDataAsset;
}
constexpr ::UnityW<::UnityEngine::TextAsset> const& GlobalNamespace::BeatmapLevelDataSO::__cordl_internal_get__audioDataAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____audioDataAsset;
}
constexpr void GlobalNamespace::BeatmapLevelDataSO::__cordl_internal_set__audioDataAsset(::UnityW<::UnityEngine::TextAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____audioDataAsset = value;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>& GlobalNamespace::BeatmapLevelDataSO::__cordl_internal_get__difficultyBeatmapSets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmapSets;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*> const& GlobalNamespace::BeatmapLevelDataSO::__cordl_internal_get__difficultyBeatmapSets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____difficultyBeatmapSets;
}
constexpr void GlobalNamespace::BeatmapLevelDataSO::__cordl_internal_set__difficultyBeatmapSets(::ArrayW<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____difficultyBeatmapSets = value;
}
inline int32_t GlobalNamespace::BeatmapLevelDataSO::get_version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> GlobalNamespace::BeatmapLevelDataSO::get_songAudioClip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "get_songAudioClip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline ::ArrayW<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*> GlobalNamespace::BeatmapLevelDataSO::get_difficultyBeatmapSets() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "get_difficultyBeatmapSets", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::TextAsset> GlobalNamespace::BeatmapLevelDataSO::get_audioDataAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "get_audioDataAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::TextAsset>>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelDataSO::set_audioDataAsset(::UnityEngine::TextAsset* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "set_audioDataAsset", {}, { ::i2c::type_of<::UnityEngine::TextAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::BeatmapLevelDataSO::GetAudioDataStringAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "GetAudioDataStringAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::BeatmapLevelDataSO::GetBeatmapStringAsync(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "GetBeatmapStringAsync", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, beatmapKey);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::BeatmapLevelDataSO::GetLightshowStringAsync(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "GetLightshowStringAsync", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, beatmapKey);
}
inline ::StringW GlobalNamespace::BeatmapLevelDataSO::GetAudioDataString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "GetAudioDataString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapLevelDataSO::GetBeatmapString(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "GetBeatmapString", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, beatmapKey);
}
inline ::StringW GlobalNamespace::BeatmapLevelDataSO::GetLightshowString(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "GetLightshowString", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, beatmapKey);
}
inline bool GlobalNamespace::BeatmapLevelDataSO::ContainsBeatmapData(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "ContainsBeatmapData", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, beatmapKey);
}
inline ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap* GlobalNamespace::BeatmapLevelDataSO::GetDifficultyBeatmap(::GlobalNamespace::BeatmapKey beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "GetDifficultyBeatmap", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmap*>(this, ___internal_method, beatmapKey);
}
inline ::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet* GlobalNamespace::BeatmapLevelDataSO::GetDifficultyBeatmapSet(::GlobalNamespace::BeatmapCharacteristic beatmapCharacteristic) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "GetDifficultyBeatmapSet", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>(this, ___internal_method, beatmapCharacteristic);
}
inline void GlobalNamespace::BeatmapLevelDataSO::IncrementVersion() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "IncrementVersion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelDataSO::SetAudioClip(::UnityEngine::AudioClip* audioClip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "SetAudioClip", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioClip);
}
inline void GlobalNamespace::BeatmapLevelDataSO::SetDifficultyBeatmapSets(::ArrayW<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*> difficultyBeatmapSets) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(),
                                                           { "SetDifficultyBeatmapSets", {}, { ::i2c::type_of<::ArrayW<::GlobalNamespace::BeatmapLevelDataSO_DifficultyBeatmapSet*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, difficultyBeatmapSets);
}
inline void GlobalNamespace::BeatmapLevelDataSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::BeatmapLevelDataSO::IBeatmapLevelData_get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "IBeatmapLevelData.get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::BeatmapLevelDataSO::IBeatmapLevelData_GetBeatmapStringAsync(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(),
                                                           { "IBeatmapLevelData.GetBeatmapStringAsync", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, beatmapKey);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::BeatmapLevelDataSO::IBeatmapLevelData_GetLightshowStringAsync(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(),
                                                           { "IBeatmapLevelData.GetLightshowStringAsync", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, beatmapKey);
}
inline ::StringW GlobalNamespace::BeatmapLevelDataSO::IBeatmapLevelData_GetBeatmapString(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(),
                                                                                         { "IBeatmapLevelData.GetBeatmapString", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, beatmapKey);
}
inline ::StringW GlobalNamespace::BeatmapLevelDataSO::IBeatmapLevelData_GetLightshowString(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "IBeatmapLevelData.GetLightshowString", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, beatmapKey);
}
inline bool GlobalNamespace::BeatmapLevelDataSO::IBeatmapLevelData_ContainsBeatmapData(::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelDataSO*>(), { "IBeatmapLevelData.ContainsBeatmapData", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, beatmapKey);
}
inline ::GlobalNamespace::BeatmapLevelDataSO* GlobalNamespace::BeatmapLevelDataSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelDataSO*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelData"
constexpr GlobalNamespace::BeatmapLevelDataSO::operator ::GlobalNamespace::IBeatmapLevelData*() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapLevelData*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatmapLevelData"
constexpr ::GlobalNamespace::IBeatmapLevelData* GlobalNamespace::BeatmapLevelDataSO::i___GlobalNamespace__IBeatmapLevelData() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapLevelData*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IAssetSongAudioClipProvider"
constexpr GlobalNamespace::BeatmapLevelDataSO::operator ::GlobalNamespace::IAssetSongAudioClipProvider*() noexcept {
  return static_cast<::GlobalNamespace::IAssetSongAudioClipProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IAssetSongAudioClipProvider"
constexpr ::GlobalNamespace::IAssetSongAudioClipProvider* GlobalNamespace::BeatmapLevelDataSO::i___GlobalNamespace__IAssetSongAudioClipProvider() noexcept {
  return static_cast<::GlobalNamespace::IAssetSongAudioClipProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelDataSO::BeatmapLevelDataSO() {}
