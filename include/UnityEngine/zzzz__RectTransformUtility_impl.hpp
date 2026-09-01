#pragma once
// IWYU pragma private; include "UnityEngine\RectTransformUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__RectTransformUtility_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::RectTransformUtility.PixelAdjustPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::UnityEngine::Transform*, ::UnityEngine::Canvas*)>(
    &::UnityEngine::RectTransformUtility::PixelAdjustPoint)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6de9550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(),
                            { "PixelAdjustPoint", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Canvas*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransformUtility.PixelAdjustRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::RectTransform*, ::UnityEngine::Canvas*)>(&::UnityEngine::RectTransformUtility::PixelAdjustRect)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6de96b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(),
                                                             { "PixelAdjustRect", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Canvas*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransformUtility.PointInRectangle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2, ::UnityEngine::RectTransform*, ::UnityEngine::Camera*, ::UnityEngine::Vector4)>(
    &::UnityEngine::RectTransformUtility::PointInRectangle)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6de980c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(), { "PointInRectangle",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::RectTransform*>(),
                                                                                                             ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransformUtility.RectangleContainsScreenPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Camera*)>(
    &::UnityEngine::RectTransformUtility::RectangleContainsScreenPoint)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6de9974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::RectTransformUtility*>(),
            { "RectangleContainsScreenPoint", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransformUtility.RectangleContainsScreenPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Camera*, ::UnityEngine::Vector4)>(
    &::UnityEngine::RectTransformUtility::RectangleContainsScreenPoint)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6de9a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(), { "RectangleContainsScreenPoint",
                                                                                                           {},
                                                                                                           { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                                             ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransformUtility.ScreenPointToWorldPointInRectangle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Camera*, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::RectTransformUtility::ScreenPointToWorldPointInRectangle)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0x6de9b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(),
                                                                                           { "ScreenPointToWorldPointInRectangle",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                               ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransformUtility.ScreenPointToLocalPointInRectangle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RectTransform*, ::UnityEngine::Vector2, ::UnityEngine::Camera*, ::by_ref<::UnityEngine::Vector2>)>(
    &::UnityEngine::RectTransformUtility::ScreenPointToLocalPointInRectangle)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6dea140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(),
                                                                                           { "ScreenPointToLocalPointInRectangle",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                               ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransformUtility.ScreenPointToRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (*)(::UnityEngine::Camera*, ::UnityEngine::Vector2)>(&::UnityEngine::RectTransformUtility::ScreenPointToRay)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x6de9f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(),
                                                             { "ScreenPointToRay", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransformUtility.WorldToScreenPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Camera*, ::UnityEngine::Vector3)>(&::UnityEngine::RectTransformUtility::WorldToScreenPoint)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6dea244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(),
                                                             { "WorldToScreenPoint", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransformUtility.FlipLayoutOnAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RectTransform*, int32_t, bool, bool)>(&::UnityEngine::RectTransformUtility::FlipLayoutOnAxis)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x6dea2f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(),
                                         { "FlipLayoutOnAxis", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransformUtility.FlipLayoutAxes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RectTransform*, bool, bool)>(&::UnityEngine::RectTransformUtility::FlipLayoutAxes)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x6dea5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(),
                                                             { "FlipLayoutAxes", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransformUtility.GetTransposed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2)>(&::UnityEngine::RectTransformUtility::GetTransposed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6dea850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(), { "GetTransposed", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransformUtility.PixelAdjustPoint_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector2>, ::System::IntPtr, ::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(
    &::UnityEngine::RectTransformUtility::PixelAdjustPoint_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6de9658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(), { "PixelAdjustPoint_Injected",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                      ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransformUtility.PixelAdjustRect_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::by_ref<::UnityEngine::Rect>)>(&::UnityEngine::RectTransformUtility::PixelAdjustRect_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6de97b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(),
                            { "PixelAdjustRect_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RectTransformUtility.PointInRectangle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Vector2>, ::System::IntPtr, ::System::IntPtr, ::by_ref<::UnityEngine::Vector4>)>(
    &::UnityEngine::RectTransformUtility::PointInRectangle_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6de9918;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(), { "PointInRectangle_Injected",
                                                                                                    {},
                                                                                                    { ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                      ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::RectTransformUtility::setStaticF_s_Corners(::ArrayW<::UnityEngine::Vector3> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "s_Corners", ::UnityEngine::RectTransformUtility*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::RectTransformUtility::getStaticF_s_Corners() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "s_Corners", ::UnityEngine::RectTransformUtility*>();
}
inline ::UnityEngine::Vector2 UnityEngine::RectTransformUtility::PixelAdjustPoint(::UnityEngine::Vector2 point, ::UnityEngine::Transform* elementTransform, ::UnityEngine::Canvas* canvas) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(),
                          { "PixelAdjustPoint", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Canvas*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, point, elementTransform, canvas);
}
inline ::UnityEngine::Rect UnityEngine::RectTransformUtility::PixelAdjustRect(::UnityEngine::RectTransform* rectTransform, ::UnityEngine::Canvas* canvas) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(),
                                                           { "PixelAdjustRect", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Canvas*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, rectTransform, canvas);
}
inline bool UnityEngine::RectTransformUtility::PointInRectangle(::UnityEngine::Vector2 screenPoint, ::UnityEngine::RectTransform* rect, ::UnityEngine::Camera* cam, ::UnityEngine::Vector4 offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(), { "PointInRectangle",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::RectTransform*>(),
                                                                                                           ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, screenPoint, rect, cam, offset);
}
inline bool UnityEngine::RectTransformUtility::RectangleContainsScreenPoint(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* cam) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::RectTransformUtility*>(),
          { "RectangleContainsScreenPoint", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rect, screenPoint, cam);
}
inline bool UnityEngine::RectTransformUtility::RectangleContainsScreenPoint(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* cam,
                                                                            ::UnityEngine::Vector4 offset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(), { "RectangleContainsScreenPoint",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                                           ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rect, screenPoint, cam, offset);
}
inline bool UnityEngine::RectTransformUtility::ScreenPointToWorldPointInRectangle(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* cam,
                                                                                  ::by_ref<::UnityEngine::Vector3> worldPoint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(), { "ScreenPointToWorldPointInRectangle",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                                    ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rect, screenPoint, cam, worldPoint);
}
inline bool UnityEngine::RectTransformUtility::ScreenPointToLocalPointInRectangle(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* cam,
                                                                                  ::by_ref<::UnityEngine::Vector2> localPoint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(), { "ScreenPointToLocalPointInRectangle",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Vector2>(),
                                                                                                    ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rect, screenPoint, cam, localPoint);
}
inline ::UnityEngine::Ray UnityEngine::RectTransformUtility::ScreenPointToRay(::UnityEngine::Camera* cam, ::UnityEngine::Vector2 screenPos) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(),
                                                           { "ScreenPointToRay", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(nullptr, ___internal_method, cam, screenPos);
}
inline ::UnityEngine::Vector2 UnityEngine::RectTransformUtility::WorldToScreenPoint(::UnityEngine::Camera* cam, ::UnityEngine::Vector3 worldPoint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(),
                                                           { "WorldToScreenPoint", {}, { ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, cam, worldPoint);
}
inline void UnityEngine::RectTransformUtility::FlipLayoutOnAxis(::UnityEngine::RectTransform* rect, int32_t axis, bool keepPositioning, bool recursive) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(),
                                       { "FlipLayoutOnAxis", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rect, axis, keepPositioning, recursive);
}
inline void UnityEngine::RectTransformUtility::FlipLayoutAxes(::UnityEngine::RectTransform* rect, bool keepPositioning, bool recursive) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(),
                                                           { "FlipLayoutAxes", {}, { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rect, keepPositioning, recursive);
}
inline ::UnityEngine::Vector2 UnityEngine::RectTransformUtility::GetTransposed(::UnityEngine::Vector2 input) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(), { "GetTransposed", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, input);
}
inline void UnityEngine::RectTransformUtility::PixelAdjustPoint_Injected(::by_ref<::UnityEngine::Vector2> point, ::System::IntPtr elementTransform, ::System::IntPtr canvas,
                                                                         ::by_ref<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(), { "PixelAdjustPoint_Injected",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                    ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, point, elementTransform, canvas, ret);
}
inline void UnityEngine::RectTransformUtility::PixelAdjustRect_Injected(::System::IntPtr rectTransform, ::System::IntPtr canvas, ::by_ref<::UnityEngine::Rect> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(),
                          { "PixelAdjustRect_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rectTransform, canvas, ret);
}
inline bool UnityEngine::RectTransformUtility::PointInRectangle_Injected(::by_ref<::UnityEngine::Vector2> screenPoint, ::System::IntPtr rect, ::System::IntPtr cam,
                                                                         ::by_ref<::UnityEngine::Vector4> offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::RectTransformUtility*>(), { "PointInRectangle_Injected",
                                                                                                  {},
                                                                                                  { ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                                    ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, screenPoint, rect, cam, offset);
}
// Ctor Parameters []
constexpr ::UnityEngine::RectTransformUtility::RectTransformUtility() {}
