#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/Extrapolation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Timeline/zzzz__Extrapolation_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__Extrapolation_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
#include "UnityEngine/Timeline/zzzz__TrackAsset_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::Extrapolation___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Timeline::Extrapolation___c::*)()>(&::UnityEngine::Timeline::Extrapolation___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x482cd48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::Extrapolation___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::Extrapolation___c._SortClipsByStartTime_b__2_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Timeline::Extrapolation___c::*)(
    ::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TimelineClip*)>(&::UnityEngine::Timeline::Extrapolation___c::_SortClipsByStartTime_b__2_0)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x482cd50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::Extrapolation___c*>::get(), "<SortClipsByStartTime>b__2_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::Extrapolation___c::setStaticF___9(::UnityEngine::Timeline::Extrapolation___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Timeline::Extrapolation___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::Extrapolation___c*>::get>(
      std::forward<::UnityEngine::Timeline::Extrapolation___c*>(value));
}
inline ::UnityEngine::Timeline::Extrapolation___c* UnityEngine::Timeline::Extrapolation___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Timeline::Extrapolation___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::Extrapolation___c*>::get>();
}
inline void UnityEngine::Timeline::Extrapolation___c::setStaticF___9__2_0(::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>*, "<>9__2_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::Extrapolation___c*>::get>(
      std::forward<::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* UnityEngine::Timeline::Extrapolation___c::getStaticF___9__2_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>*, "<>9__2_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::Extrapolation___c*>::get>();
}
inline void UnityEngine::Timeline::Extrapolation___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::Extrapolation___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::Timeline::Extrapolation___c::_SortClipsByStartTime_b__2_0(::UnityEngine::Timeline::TimelineClip* clip1, ::UnityEngine::Timeline::TimelineClip* clip2) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::Extrapolation___c*>::get(), "<SortClipsByStartTime>b__2_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TimelineClip*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, clip1, clip2);
}
inline ::UnityEngine::Timeline::Extrapolation___c* UnityEngine::Timeline::Extrapolation___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Timeline::Extrapolation___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::Extrapolation___c::Extrapolation___c() {}
//  Writing Method size for method: ::UnityEngine::Timeline::Extrapolation.CalculateExtrapolationTimes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Timeline::TrackAsset*)>(
    &::UnityEngine::Timeline::Extrapolation::CalculateExtrapolationTimes)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x482c718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::Extrapolation*>::get(), "CalculateExtrapolationTimes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::Extrapolation.SortClipsByStartTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::Timeline::TimelineClip*, ::Array<::UnityEngine::Timeline::TimelineClip*>*> (*)(
    ::ArrayW<::UnityEngine::Timeline::TimelineClip*, ::Array<::UnityEngine::Timeline::TimelineClip*>*>)>(&::UnityEngine::Timeline::Extrapolation::SortClipsByStartTime)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x482cb30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::Extrapolation*>::get(), "SortClipsByStartTime", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Timeline::TimelineClip*, ::Array<::UnityEngine::Timeline::TimelineClip*>*>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::Extrapolation::setStaticF_kMinExtrapolationTime(double_t value) {
  ::cordl_internals::setStaticField<double_t, "kMinExtrapolationTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::Extrapolation*>::get>(
      std::forward<double_t>(value));
}
inline double_t UnityEngine::Timeline::Extrapolation::getStaticF_kMinExtrapolationTime() {
  return ::cordl_internals::getStaticField<double_t, "kMinExtrapolationTime", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::Extrapolation*>::get>();
}
inline void UnityEngine::Timeline::Extrapolation::CalculateExtrapolationTimes(::UnityEngine::Timeline::TrackAsset* asset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::Extrapolation*>::get(), "CalculateExtrapolationTimes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Timeline::TrackAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, asset);
}
inline ::ArrayW<::UnityEngine::Timeline::TimelineClip*, ::Array<::UnityEngine::Timeline::TimelineClip*>*>
UnityEngine::Timeline::Extrapolation::SortClipsByStartTime(::ArrayW<::UnityEngine::Timeline::TimelineClip*, ::Array<::UnityEngine::Timeline::TimelineClip*>*> clips) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Timeline::Extrapolation*>::get(), "SortClipsByStartTime", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Timeline::TimelineClip*, ::Array<::UnityEngine::Timeline::TimelineClip*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Timeline::TimelineClip*, ::Array<::UnityEngine::Timeline::TimelineClip*>*>, false>(nullptr, ___internal_method, clips);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::Extrapolation::Extrapolation() {}
