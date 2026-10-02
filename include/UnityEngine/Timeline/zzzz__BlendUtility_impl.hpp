#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/BlendUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Timeline/zzzz__BlendUtility_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/Timeline/zzzz__BlendUtility_def.hpp"
#include "UnityEngine/Timeline/zzzz__TimelineClip_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::BlendUtility___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::BlendUtility___c::*)()>(&::UnityEngine::Timeline::BlendUtility___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6df65e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::BlendUtility___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::BlendUtility___c._ComputeBlendsFromOverlaps_b__1_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Timeline::BlendUtility___c::*)(::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TimelineClip*)>(
    &::UnityEngine::Timeline::BlendUtility___c::_ComputeBlendsFromOverlaps_b__1_0)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6df65ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::BlendUtility___c*>(),
                            { "<ComputeBlendsFromOverlaps>b__1_0", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Timeline::BlendUtility___c::setStaticF___9(::UnityEngine::Timeline::BlendUtility___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Timeline::BlendUtility___c*, "<>9", ::UnityEngine::Timeline::BlendUtility___c*>(std::forward<::UnityEngine::Timeline::BlendUtility___c*>(value));
}
inline ::UnityEngine::Timeline::BlendUtility___c* UnityEngine::Timeline::BlendUtility___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::Timeline::BlendUtility___c*, "<>9", ::UnityEngine::Timeline::BlendUtility___c*>();
}
inline void UnityEngine::Timeline::BlendUtility___c::setStaticF___9__1_0(::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>*, "<>9__1_0", ::UnityEngine::Timeline::BlendUtility___c*>(
      std::forward<::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>* UnityEngine::Timeline::BlendUtility___c::getStaticF___9__1_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::Timeline::TimelineClip*>*, "<>9__1_0", ::UnityEngine::Timeline::BlendUtility___c*>();
}
inline void UnityEngine::Timeline::BlendUtility___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::BlendUtility___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::Timeline::BlendUtility___c::_ComputeBlendsFromOverlaps_b__1_0(::UnityEngine::Timeline::TimelineClip* c1, ::UnityEngine::Timeline::TimelineClip* c2) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::BlendUtility___c*>(),
                          { "<ComputeBlendsFromOverlaps>b__1_0", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, c1, c2);
}
inline ::UnityEngine::Timeline::BlendUtility___c* UnityEngine::Timeline::BlendUtility___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::BlendUtility___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::BlendUtility___c::BlendUtility___c() {}
//  Writing Method size for method: ::UnityEngine::Timeline::BlendUtility.Overlaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TimelineClip*)>(&::UnityEngine::Timeline::BlendUtility::Overlaps)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6df613c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::BlendUtility*>(),
                                                { "Overlaps", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::BlendUtility.ComputeBlendsFromOverlaps
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::Timeline::TimelineClip*>)>(&::UnityEngine::Timeline::BlendUtility::ComputeBlendsFromOverlaps)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x6df623c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::BlendUtility*>(), { "ComputeBlendsFromOverlaps", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Timeline::TimelineClip*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Timeline::BlendUtility.UpdateClipIntersection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Timeline::TimelineClip*, ::UnityEngine::Timeline::TimelineClip*)>(
    &::UnityEngine::Timeline::BlendUtility::UpdateClipIntersection)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6df6448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::BlendUtility*>(),
                                         { "UpdateClipIntersection", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Timeline::BlendUtility::Overlaps(::UnityEngine::Timeline::TimelineClip* blendOut, ::UnityEngine::Timeline::TimelineClip* blendIn) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::BlendUtility*>(),
                                              { "Overlaps", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, blendOut, blendIn);
}
inline void UnityEngine::Timeline::BlendUtility::ComputeBlendsFromOverlaps(::ArrayW<::UnityEngine::Timeline::TimelineClip*> clips) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::BlendUtility*>(),
                                                                                         { "ComputeBlendsFromOverlaps", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Timeline::TimelineClip*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, clips);
}
inline void UnityEngine::Timeline::BlendUtility::UpdateClipIntersection(::UnityEngine::Timeline::TimelineClip* blendOutClip, ::UnityEngine::Timeline::TimelineClip* blendInClip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::BlendUtility*>(),
                                       { "UpdateClipIntersection", {}, { ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>(), ::i2c::type_of<::UnityEngine::Timeline::TimelineClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, blendOutClip, blendInClip);
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::BlendUtility::BlendUtility() {}
