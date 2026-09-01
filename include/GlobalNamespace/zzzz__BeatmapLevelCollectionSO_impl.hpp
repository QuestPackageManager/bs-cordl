#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapLevelCollectionSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelCollectionSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelCollectionSO.get_beatmapLevels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* (
    ::GlobalNamespace::BeatmapLevelCollectionSO::*)()>(&::GlobalNamespace::BeatmapLevelCollectionSO::get_beatmapLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37224d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelCollectionSO*>(), { "get_beatmapLevels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelCollectionSO.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::BeatmapLevelCollectionSO> (*)()>(&::GlobalNamespace::BeatmapLevelCollectionSO::Create)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x37224dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelCollectionSO*>(), { "Create", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelCollectionSO.AddBeatmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelCollectionSO::*)(::GlobalNamespace::BeatmapLevelSO*)>(
    &::GlobalNamespace::BeatmapLevelCollectionSO::AddBeatmapLevel)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x3722580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelCollectionSO*>(), { "AddBeatmapLevel", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelCollectionSO.SortLevels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelCollectionSO::*)()>(&::GlobalNamespace::BeatmapLevelCollectionSO::SortLevels)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3722634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelCollectionSO*>(), { "SortLevels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelCollectionSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelCollectionSO::*)()>(&::GlobalNamespace::BeatmapLevelCollectionSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37226dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelCollectionSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*& GlobalNamespace::BeatmapLevelCollectionSO::__cordl_internal_get__beatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevels;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* const& GlobalNamespace::BeatmapLevelCollectionSO::__cordl_internal_get__beatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevels;
}
constexpr void GlobalNamespace::BeatmapLevelCollectionSO::__cordl_internal_set__beatmapLevels(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevels = value;
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>* GlobalNamespace::BeatmapLevelCollectionSO::get_beatmapLevels() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelCollectionSO*>(), { "get_beatmapLevels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::BeatmapLevelSO>>*>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::BeatmapLevelCollectionSO> GlobalNamespace::BeatmapLevelCollectionSO::Create() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelCollectionSO*>(), { "Create", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BeatmapLevelCollectionSO>>(nullptr, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelCollectionSO::AddBeatmapLevel(::GlobalNamespace::BeatmapLevelSO* beatmapLevel) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelCollectionSO*>(), { "AddBeatmapLevel", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapLevel);
}
inline void GlobalNamespace::BeatmapLevelCollectionSO::SortLevels() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelCollectionSO*>(), { "SortLevels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelCollectionSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelCollectionSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelCollectionSO* GlobalNamespace::BeatmapLevelCollectionSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelCollectionSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelCollectionSO::BeatmapLevelCollectionSO() {}
