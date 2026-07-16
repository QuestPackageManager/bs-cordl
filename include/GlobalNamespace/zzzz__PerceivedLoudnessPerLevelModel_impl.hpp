#pragma once
// IWYU pragma private; include "GlobalNamespace/PerceivedLoudnessPerLevelModel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessPerLevelModel_def.hpp"
#include "GlobalNamespace/zzzz__PerceivedLoudnessSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessPerLevelModel._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PerceivedLoudnessPerLevelModel::*)(
    ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PerceivedLoudnessSO>>*)>(&::GlobalNamespace::PerceivedLoudnessPerLevelModel::_ctor)> {
  constexpr static std::size_t size = 0x5e8;
  constexpr static std::size_t addrs = 0x3266ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PerceivedLoudnessSO>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessPerLevelModel.GetLoudnessCorrectionByLevelId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PerceivedLoudnessPerLevelModel::*)(::StringW)>(
    &::GlobalNamespace::PerceivedLoudnessPerLevelModel::GetLoudnessCorrectionByLevelId)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x32670b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>(), { "GetLoudnessCorrectionByLevelId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessPerLevelModel.GetMaxSfxVolumeByLevelId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PerceivedLoudnessPerLevelModel::*)(::StringW)>(
    &::GlobalNamespace::PerceivedLoudnessPerLevelModel::GetMaxSfxVolumeByLevelId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3267154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>(), { "GetMaxSfxVolumeByLevelId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessPerLevelModel.GetLoudnessByLevelId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PerceivedLoudnessPerLevelModel::*)(::StringW)>(
    &::GlobalNamespace::PerceivedLoudnessPerLevelModel::GetLoudnessByLevelId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32670d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>(), { "GetLoudnessByLevelId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerceivedLoudnessPerLevelModel.GetLoudnessByLevelIdOrNull
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<float_t> (::GlobalNamespace::PerceivedLoudnessPerLevelModel::*)(::StringW)>(
    &::GlobalNamespace::PerceivedLoudnessPerLevelModel::GetLoudnessByLevelIdOrNull)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x326716c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>(), { "GetLoudnessByLevelIdOrNull", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, float_t>*& GlobalNamespace::PerceivedLoudnessPerLevelModel::__cordl_internal_get__loudnessLevelPerLevelId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loudnessLevelPerLevelId;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, float_t>* const& GlobalNamespace::PerceivedLoudnessPerLevelModel::__cordl_internal_get__loudnessLevelPerLevelId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loudnessLevelPerLevelId;
}
constexpr void GlobalNamespace::PerceivedLoudnessPerLevelModel::__cordl_internal_set__loudnessLevelPerLevelId(::System::Collections::Generic::Dictionary_2<::StringW, float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____loudnessLevelPerLevelId = value;
}
inline void GlobalNamespace::PerceivedLoudnessPerLevelModel::_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PerceivedLoudnessSO>>* loudnessPerLeveDataList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PerceivedLoudnessSO>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, loudnessPerLeveDataList);
}
inline float_t GlobalNamespace::PerceivedLoudnessPerLevelModel::GetLoudnessCorrectionByLevelId(::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>(), { "GetLoudnessCorrectionByLevelId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, levelId);
}
inline float_t GlobalNamespace::PerceivedLoudnessPerLevelModel::GetMaxSfxVolumeByLevelId(::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>(), { "GetMaxSfxVolumeByLevelId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, levelId);
}
inline float_t GlobalNamespace::PerceivedLoudnessPerLevelModel::GetLoudnessByLevelId(::StringW levelId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>(), { "GetLoudnessByLevelId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, levelId);
}
inline ::System::Nullable_1<float_t> GlobalNamespace::PerceivedLoudnessPerLevelModel::GetLoudnessByLevelIdOrNull(::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>(), { "GetLoudnessByLevelIdOrNull", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>>(this, ___internal_method, levelId);
}
inline ::GlobalNamespace::PerceivedLoudnessPerLevelModel*
GlobalNamespace::PerceivedLoudnessPerLevelModel::New_ctor(::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PerceivedLoudnessSO>>* loudnessPerLeveDataList) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PerceivedLoudnessPerLevelModel*>(loudnessPerLeveDataList));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerceivedLoudnessPerLevelModel::PerceivedLoudnessPerLevelModel() {}
