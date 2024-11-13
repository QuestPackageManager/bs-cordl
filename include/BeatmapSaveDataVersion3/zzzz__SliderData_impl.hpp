#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/SliderData.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteCutDirection_impl.hpp"
#include "BeatmapSaveDataCommon/zzzz__SliderMidAnchorMode_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__BaseSliderData_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__SliderData_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteColorType_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__NoteCutDirection_def.hpp"
#include "BeatmapSaveDataCommon/zzzz__SliderMidAnchorMode_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::SliderData.get_headControlPointLengthMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::SliderData::*)()>(
    &::BeatmapSaveDataVersion3::SliderData::get_headControlPointLengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d4cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::SliderData*>::get(), "get_headControlPointLengthMultiplier",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::SliderData.get_tailControlPointLengthMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::BeatmapSaveDataVersion3::SliderData::*)()>(
    &::BeatmapSaveDataVersion3::SliderData::get_tailControlPointLengthMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d4d00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::SliderData*>::get(), "get_tailControlPointLengthMultiplier",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::SliderData.get_tailCutDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataCommon::NoteCutDirection (::BeatmapSaveDataVersion3::SliderData::*)()>(
    &::BeatmapSaveDataVersion3::SliderData::get_tailCutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d4d08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::SliderData*>::get(),
                                                                               "get_tailCutDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::SliderData.get_sliderMidAnchorMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataCommon::SliderMidAnchorMode (::BeatmapSaveDataVersion3::SliderData::*)()>(
    &::BeatmapSaveDataVersion3::SliderData::get_sliderMidAnchorMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26d4d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::SliderData*>::get(),
                                                                               "get_sliderMidAnchorMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::SliderData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::SliderData::*)(
    ::BeatmapSaveDataCommon::NoteColorType, float_t, int32_t, int32_t, float_t, ::BeatmapSaveDataCommon::NoteCutDirection, float_t, int32_t, int32_t, float_t,
    ::BeatmapSaveDataCommon::NoteCutDirection, ::BeatmapSaveDataCommon::SliderMidAnchorMode)>(&::BeatmapSaveDataVersion3::SliderData::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x26d4d18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::SliderData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 12>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::NoteColorType>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::NoteCutDirection>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::NoteCutDirection>::get(),
                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::SliderMidAnchorMode>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& BeatmapSaveDataVersion3::SliderData::__cordl_internal_get_mu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mu;
}
constexpr float_t const& BeatmapSaveDataVersion3::SliderData::__cordl_internal_get_mu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mu;
}
constexpr void BeatmapSaveDataVersion3::SliderData::__cordl_internal_set_mu(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mu = value;
}
constexpr float_t& BeatmapSaveDataVersion3::SliderData::__cordl_internal_get_tmu() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tmu;
}
constexpr float_t const& BeatmapSaveDataVersion3::SliderData::__cordl_internal_get_tmu() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tmu;
}
constexpr void BeatmapSaveDataVersion3::SliderData::__cordl_internal_set_tmu(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tmu = value;
}
constexpr ::BeatmapSaveDataCommon::NoteCutDirection& BeatmapSaveDataVersion3::SliderData::__cordl_internal_get_tc() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tc;
}
constexpr ::BeatmapSaveDataCommon::NoteCutDirection const& BeatmapSaveDataVersion3::SliderData::__cordl_internal_get_tc() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tc;
}
constexpr void BeatmapSaveDataVersion3::SliderData::__cordl_internal_set_tc(::BeatmapSaveDataCommon::NoteCutDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tc = value;
}
constexpr ::BeatmapSaveDataCommon::SliderMidAnchorMode& BeatmapSaveDataVersion3::SliderData::__cordl_internal_get_m() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m;
}
constexpr ::BeatmapSaveDataCommon::SliderMidAnchorMode const& BeatmapSaveDataVersion3::SliderData::__cordl_internal_get_m() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m;
}
constexpr void BeatmapSaveDataVersion3::SliderData::__cordl_internal_set_m(::BeatmapSaveDataCommon::SliderMidAnchorMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m = value;
}
inline float_t BeatmapSaveDataVersion3::SliderData::get_headControlPointLengthMultiplier() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::SliderData*>::get(), "get_headControlPointLengthMultiplier",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t BeatmapSaveDataVersion3::SliderData::get_tailControlPointLengthMultiplier() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::SliderData*>::get(), "get_tailControlPointLengthMultiplier",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::NoteCutDirection BeatmapSaveDataVersion3::SliderData::get_tailCutDirection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::SliderData*>::get(),
                                                                             "get_tailCutDirection", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::NoteCutDirection, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataCommon::SliderMidAnchorMode BeatmapSaveDataVersion3::SliderData::get_sliderMidAnchorMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::SliderData*>::get(),
                                                                             "get_sliderMidAnchorMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataCommon::SliderMidAnchorMode, false>(this, ___internal_method);
}
inline ::BeatmapSaveDataVersion3::SliderData* BeatmapSaveDataVersion3::SliderData::New_ctor(::BeatmapSaveDataCommon::NoteColorType colorType, float_t headBeat, int32_t headLine, int32_t headLayer,
                                                                                            float_t headControlPointLengthMultiplier, ::BeatmapSaveDataCommon::NoteCutDirection headCutDirection,
                                                                                            float_t tailBeat, int32_t tailLine, int32_t tailLayer, float_t tailControlPointLengthMultiplier,
                                                                                            ::BeatmapSaveDataCommon::NoteCutDirection tailCutDirection,
                                                                                            ::BeatmapSaveDataCommon::SliderMidAnchorMode sliderMidAnchorMode) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::SliderData*>(colorType, headBeat, headLine, headLayer, headControlPointLengthMultiplier, headCutDirection, tailBeat,
                                                                                          tailLine, tailLayer, tailControlPointLengthMultiplier, tailCutDirection, sliderMidAnchorMode));
}
inline void BeatmapSaveDataVersion3::SliderData::_ctor(::BeatmapSaveDataCommon::NoteColorType colorType, float_t headBeat, int32_t headLine, int32_t headLayer,
                                                       float_t headControlPointLengthMultiplier, ::BeatmapSaveDataCommon::NoteCutDirection headCutDirection, float_t tailBeat, int32_t tailLine,
                                                       int32_t tailLayer, float_t tailControlPointLengthMultiplier, ::BeatmapSaveDataCommon::NoteCutDirection tailCutDirection,
                                                       ::BeatmapSaveDataCommon::SliderMidAnchorMode sliderMidAnchorMode) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::SliderData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 12>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::NoteColorType>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::NoteCutDirection>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::NoteCutDirection>::get(),
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataCommon::SliderMidAnchorMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, colorType, headBeat, headLine, headLayer, headControlPointLengthMultiplier, headCutDirection, tailBeat, tailLine,
                                                          tailLayer, tailControlPointLengthMultiplier, tailCutDirection, sliderMidAnchorMode);
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::SliderData::SliderData() {}
