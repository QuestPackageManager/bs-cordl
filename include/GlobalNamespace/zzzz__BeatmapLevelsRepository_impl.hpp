#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapLevelsRepository.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsRepository_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsRepository.get_beatmapLevelPacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* (::GlobalNamespace::BeatmapLevelsRepository::*)()>(
    &::GlobalNamespace::BeatmapLevelsRepository::get_beatmapLevelPacks)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3727014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsRepository*>(), { "get_beatmapLevelPacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsRepository._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelsRepository::*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>*)>(
    &::GlobalNamespace::BeatmapLevelsRepository::_ctor)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x372701c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsRepository*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsRepository.GetBeatmapLevelPackByPackId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevelPack* (::GlobalNamespace::BeatmapLevelsRepository::*)(::StringW, bool)>(
    &::GlobalNamespace::BeatmapLevelsRepository::GetBeatmapLevelPackByPackId)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x37273cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsRepository*>(),
                                                                                           { "GetBeatmapLevelPackByPackId", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsRepository.GetBeatmapLevelPackByBeatmapLevelId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevelPack* (::GlobalNamespace::BeatmapLevelsRepository::*)(::StringW)>(
    &::GlobalNamespace::BeatmapLevelsRepository::GetBeatmapLevelPackByBeatmapLevelId)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x372756c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsRepository*>(), { "GetBeatmapLevelPackByBeatmapLevelId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsRepository.GetBeatmapLevelById
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevel* (::GlobalNamespace::BeatmapLevelsRepository::*)(::StringW, bool)>(
    &::GlobalNamespace::BeatmapLevelsRepository::GetBeatmapLevelById)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x3727600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsRepository*>(), { "GetBeatmapLevelById", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsRepository.AddBeatmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelsRepository::*)(::GlobalNamespace::BeatmapLevel*, ::StringW)>(
    &::GlobalNamespace::BeatmapLevelsRepository::AddBeatmapLevel)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x37277a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsRepository*>(),
                                                             { "AddBeatmapLevel", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsRepository.TryGetBeatmapLevelById
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevelsRepository::*)(::StringW, ::by_ref<::GlobalNamespace::BeatmapLevel*>)>(
    &::GlobalNamespace::BeatmapLevelsRepository::TryGetBeatmapLevelById)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3727860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsRepository*>(),
                                                             { "TryGetBeatmapLevelById", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapLevel*>>() } })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*>& GlobalNamespace::BeatmapLevelsRepository::__cordl_internal_get__beatmapLevelPacks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPacks;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapLevelPack*> const& GlobalNamespace::BeatmapLevelsRepository::__cordl_internal_get__beatmapLevelPacks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelPacks;
}
constexpr void GlobalNamespace::BeatmapLevelsRepository::__cordl_internal_set__beatmapLevelPacks(::ArrayW<::GlobalNamespace::BeatmapLevelPack*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelPacks = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevelPack*>*& GlobalNamespace::BeatmapLevelsRepository::__cordl_internal_get__idToBeatmapLevelPack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idToBeatmapLevelPack;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevelPack*>* const&
GlobalNamespace::BeatmapLevelsRepository::__cordl_internal_get__idToBeatmapLevelPack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idToBeatmapLevelPack;
}
constexpr void
GlobalNamespace::BeatmapLevelsRepository::__cordl_internal_set__idToBeatmapLevelPack(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevelPack*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____idToBeatmapLevelPack = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevel*>*& GlobalNamespace::BeatmapLevelsRepository::__cordl_internal_get__idToBeatmapLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idToBeatmapLevel;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevel*>* const& GlobalNamespace::BeatmapLevelsRepository::__cordl_internal_get__idToBeatmapLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____idToBeatmapLevel;
}
constexpr void GlobalNamespace::BeatmapLevelsRepository::__cordl_internal_set__idToBeatmapLevel(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____idToBeatmapLevel = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>*& GlobalNamespace::BeatmapLevelsRepository::__cordl_internal_get__beatmapLevelIdToBeatmapLevelPackId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelIdToBeatmapLevelPackId;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* const& GlobalNamespace::BeatmapLevelsRepository::__cordl_internal_get__beatmapLevelIdToBeatmapLevelPackId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelIdToBeatmapLevelPackId;
}
constexpr void GlobalNamespace::BeatmapLevelsRepository::__cordl_internal_set__beatmapLevelIdToBeatmapLevelPackId(::System::Collections::Generic::Dictionary_2<::StringW, ::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelIdToBeatmapLevelPackId = value;
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* GlobalNamespace::BeatmapLevelsRepository::get_beatmapLevelPacks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsRepository*>(), { "get_beatmapLevelPacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelsRepository::_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>* beatmapLevelPacks) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsRepository*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapLevelPacks);
}
inline ::GlobalNamespace::BeatmapLevelPack* GlobalNamespace::BeatmapLevelsRepository::GetBeatmapLevelPackByPackId(::StringW packId, bool ignoreCase) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsRepository*>(),
                                                                                         { "GetBeatmapLevelPackByPackId", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelPack*>(this, ___internal_method, packId, ignoreCase);
}
inline ::GlobalNamespace::BeatmapLevelPack* GlobalNamespace::BeatmapLevelsRepository::GetBeatmapLevelPackByBeatmapLevelId(::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsRepository*>(), { "GetBeatmapLevelPackByBeatmapLevelId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelPack*>(this, ___internal_method, levelId);
}
inline ::GlobalNamespace::BeatmapLevel* GlobalNamespace::BeatmapLevelsRepository::GetBeatmapLevelById(::StringW levelId, bool ignoreCase) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsRepository*>(), { "GetBeatmapLevelById", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevel*>(this, ___internal_method, levelId, ignoreCase);
}
inline void GlobalNamespace::BeatmapLevelsRepository::AddBeatmapLevel(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::StringW songPackId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsRepository*>(),
                                                           { "AddBeatmapLevel", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, beatmapLevel, songPackId);
}
inline bool GlobalNamespace::BeatmapLevelsRepository::TryGetBeatmapLevelById(::StringW levelId, ::by_ref<::GlobalNamespace::BeatmapLevel*> beatmapLevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsRepository*>(),
                                                           { "TryGetBeatmapLevelById", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapLevel*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, levelId, beatmapLevel);
}
inline ::GlobalNamespace::BeatmapLevelsRepository*
GlobalNamespace::BeatmapLevelsRepository::New_ctor(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevelPack*>* beatmapLevelPacks) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelsRepository*>(beatmapLevelPacks));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelsRepository::BeatmapLevelsRepository() {}
