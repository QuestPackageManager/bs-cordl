#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapLevelsPromoModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsPromoModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsPromoDataSO_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsPromoModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapLevelsPromoModel::*)(::GlobalNamespace::BeatmapLevelsPromoDataSO*)>(
    &::GlobalNamespace::BeatmapLevelsPromoModel::_ctor)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x374e5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoModel*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelsPromoDataSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsPromoModel.IsBeatmapLevelPackPromoted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevelsPromoModel::*)(::GlobalNamespace::BeatmapLevelPack*)>(
    &::GlobalNamespace::BeatmapLevelsPromoModel::IsBeatmapLevelPackPromoted)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x374e78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoModel*>(),
                                                                                           { "IsBeatmapLevelPackPromoted", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsPromoModel.IsBeatmapLevelPackUpdated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevelsPromoModel::*)(::GlobalNamespace::BeatmapLevelPack*)>(
    &::GlobalNamespace::BeatmapLevelsPromoModel::IsBeatmapLevelPackUpdated)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x374e7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoModel*>(),
                                                                                           { "IsBeatmapLevelPackUpdated", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsPromoModel.IsBeatmapLevelPromoted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevelsPromoModel::*)(::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::BeatmapLevelsPromoModel::IsBeatmapLevelPromoted)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x374e85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoModel*>(), { "IsBeatmapLevelPromoted", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsPromoModel.IsBeatmapLevelUpdated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapLevelsPromoModel::*)(::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::BeatmapLevelsPromoModel::IsBeatmapLevelUpdated)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x374e8c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoModel*>(), { "IsBeatmapLevelUpdated", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::BeatmapLevelsPromoModel::__cordl_internal_get__promotedBeatmapLevelPacksSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promotedBeatmapLevelPacksSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GlobalNamespace::BeatmapLevelsPromoModel::__cordl_internal_get__promotedBeatmapLevelPacksSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promotedBeatmapLevelPacksSet;
}
constexpr void GlobalNamespace::BeatmapLevelsPromoModel::__cordl_internal_set__promotedBeatmapLevelPacksSet(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____promotedBeatmapLevelPacksSet = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::BeatmapLevelsPromoModel::__cordl_internal_get__updatedBeatmapLevelPacksSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatedBeatmapLevelPacksSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GlobalNamespace::BeatmapLevelsPromoModel::__cordl_internal_get__updatedBeatmapLevelPacksSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatedBeatmapLevelPacksSet;
}
constexpr void GlobalNamespace::BeatmapLevelsPromoModel::__cordl_internal_set__updatedBeatmapLevelPacksSet(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updatedBeatmapLevelPacksSet = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::BeatmapLevelsPromoModel::__cordl_internal_get__promotedBeatmapLevelsSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promotedBeatmapLevelsSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GlobalNamespace::BeatmapLevelsPromoModel::__cordl_internal_get__promotedBeatmapLevelsSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____promotedBeatmapLevelsSet;
}
constexpr void GlobalNamespace::BeatmapLevelsPromoModel::__cordl_internal_set__promotedBeatmapLevelsSet(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____promotedBeatmapLevelsSet = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::BeatmapLevelsPromoModel::__cordl_internal_get__updatedBeatmapLevelsSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatedBeatmapLevelsSet;
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>* const& GlobalNamespace::BeatmapLevelsPromoModel::__cordl_internal_get__updatedBeatmapLevelsSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____updatedBeatmapLevelsSet;
}
constexpr void GlobalNamespace::BeatmapLevelsPromoModel::__cordl_internal_set__updatedBeatmapLevelsSet(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____updatedBeatmapLevelsSet = value;
}
inline void GlobalNamespace::BeatmapLevelsPromoModel::_ctor(::GlobalNamespace::BeatmapLevelsPromoDataSO* promoDataSO) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoModel*>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelsPromoDataSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, promoDataSO);
}
inline bool GlobalNamespace::BeatmapLevelsPromoModel::IsBeatmapLevelPackPromoted(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoModel*>(),
                                                                                         { "IsBeatmapLevelPackPromoted", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, beatmapLevelPack);
}
inline bool GlobalNamespace::BeatmapLevelsPromoModel::IsBeatmapLevelPackUpdated(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoModel*>(),
                                                                                         { "IsBeatmapLevelPackUpdated", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevelPack*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, beatmapLevelPack);
}
inline bool GlobalNamespace::BeatmapLevelsPromoModel::IsBeatmapLevelPromoted(::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoModel*>(), { "IsBeatmapLevelPromoted", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, beatmapLevel);
}
inline bool GlobalNamespace::BeatmapLevelsPromoModel::IsBeatmapLevelUpdated(::GlobalNamespace::BeatmapLevel* beatmapLevel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapLevelsPromoModel*>(), { "IsBeatmapLevelUpdated", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, beatmapLevel);
}
inline ::GlobalNamespace::BeatmapLevelsPromoModel* GlobalNamespace::BeatmapLevelsPromoModel::New_ctor(::GlobalNamespace::BeatmapLevelsPromoDataSO* promoDataSO) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapLevelsPromoModel*>(promoDataSO));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelsPromoModel::BeatmapLevelsPromoModel() {}
