#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElementExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementExtensions_def.hpp"
#include "UnityEngine/UIElements/zzzz__IManipulator_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementExtensions.StretchToParentSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::VisualElementExtensions::StretchToParentSize)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x7153394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                                                                           { "StretchToParentSize", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementExtensions.AddManipulator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IManipulator*)>(
    &::UnityEngine::UIElements::VisualElementExtensions::AddManipulator)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x7153650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                         { "AddManipulator", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::IManipulator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementExtensions.RemoveManipulator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::IManipulator*)>(
    &::UnityEngine::UIElements::VisualElementExtensions::RemoveManipulator)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x715370c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                         { "RemoveManipulator", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::IManipulator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementExtensions.WorldToLocal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::VisualElementExtensions::WorldToLocal)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x71537b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                                             { "WorldToLocal", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementExtensions.WorldToLocal3D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector3)>(
    &::UnityEngine::UIElements::VisualElementExtensions::WorldToLocal3D)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x715389c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                                             { "WorldToLocal3D", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementExtensions.LocalToWorld
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::VisualElementExtensions::LocalToWorld)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x7153978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                                             { "LocalToWorld", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementExtensions.WorldToLocal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Rect)>(
    &::UnityEngine::UIElements::VisualElementExtensions::WorldToLocal)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x7153a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                                             { "WorldToLocal", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementExtensions.LocalToWorld
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Ray)>(
    &::UnityEngine::UIElements::VisualElementExtensions::LocalToWorld)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0x7153b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                                             { "LocalToWorld", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Ray>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementExtensions.WorldToLocal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Ray)>(
    &::UnityEngine::UIElements::VisualElementExtensions::WorldToLocal)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x7153d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                                             { "WorldToLocal", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Ray>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementExtensions.ChangeCoordinatesTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::VisualElementExtensions::ChangeCoordinatesTo)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x7153f18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                                             { "ChangeCoordinatesTo",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementExtensions.ChangeCoordinatesTo_2D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::VisualElementExtensions::ChangeCoordinatesTo_2D)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x7153fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                                             { "ChangeCoordinatesTo_2D",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementExtensions.ChangeCoordinatesTo_3D
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::VisualElementExtensions::ChangeCoordinatesTo_3D)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x71540bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                                             { "ChangeCoordinatesTo_3D",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementExtensions.ChangeCoordinatesTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Rect)>(
    &::UnityEngine::UIElements::VisualElementExtensions::ChangeCoordinatesTo)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x7154214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                            { "ChangeCoordinatesTo",
                              {},
                              { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementExtensions.ChangeCoordinatesTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Ray)>(
    &::UnityEngine::UIElements::VisualElementExtensions::ChangeCoordinatesTo)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x715454c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                            { "ChangeCoordinatesTo",
                              {},
                              { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Ray>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementExtensions.IntersectWorldRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Ray, ::by_ref<float_t>, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::UIElements::VisualElementExtensions::IntersectWorldRay)> {
  constexpr static std::size_t size = 0x2cc;
  constexpr static std::size_t addrs = 0x71545a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                                                                           { "IntersectWorldRay",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Ray>(),
                                                                                               ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementExtensions.IntersectLocalRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Ray, ::by_ref<::UnityEngine::Vector3>)>(
    &::UnityEngine::UIElements::VisualElementExtensions::IntersectLocalRay)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x7154874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
            { "IntersectLocalRay", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementExtensions.TransformRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (*)(::UnityEngine::Matrix4x4, ::UnityEngine::Ray)>(&::UnityEngine::UIElements::VisualElementExtensions::TransformRay)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x7154a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                                             { "TransformRay", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Ray>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::VisualElementExtensions::StretchToParentSize(::UnityEngine::UIElements::VisualElement* elem) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                                                                         { "StretchToParentSize", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, elem);
}
inline void UnityEngine::UIElements::VisualElementExtensions::AddManipulator(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::UIElements::IManipulator* manipulator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                              { "AddManipulator", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::IManipulator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ele, manipulator);
}
inline void UnityEngine::UIElements::VisualElementExtensions::RemoveManipulator(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::UIElements::IManipulator* manipulator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                       { "RemoveManipulator", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::IManipulator*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ele, manipulator);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::VisualElementExtensions::WorldToLocal(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::Vector2 p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                                           { "WorldToLocal", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, ele, p);
}
inline ::UnityEngine::Vector3 UnityEngine::UIElements::VisualElementExtensions::WorldToLocal3D(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::Vector3 p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                                           { "WorldToLocal3D", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, ele, p);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::VisualElementExtensions::LocalToWorld(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::Vector2 p) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                                           { "LocalToWorld", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, ele, p);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::VisualElementExtensions::WorldToLocal(::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::Rect r) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                                           { "WorldToLocal", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, ele, r);
}
inline ::UnityEngine::Ray UnityEngine::UIElements::VisualElementExtensions::LocalToWorld(/* [NotNull] */ ::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::Ray r) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                                           { "LocalToWorld", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Ray>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(nullptr, ___internal_method, ele, r);
}
inline ::UnityEngine::Ray UnityEngine::UIElements::VisualElementExtensions::WorldToLocal(/* [NotNull] */ ::UnityEngine::UIElements::VisualElement* ele, ::UnityEngine::Ray r) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                                           { "WorldToLocal", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Ray>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(nullptr, ___internal_method, ele, r);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::VisualElementExtensions::ChangeCoordinatesTo(::UnityEngine::UIElements::VisualElement* src, ::UnityEngine::UIElements::VisualElement* dest,
                                                                                                    ::UnityEngine::Vector2 point) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                          { "ChangeCoordinatesTo",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, src, dest, point);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::VisualElementExtensions::ChangeCoordinatesTo_2D(/* [NotNull] */ ::UnityEngine::UIElements::VisualElement* src,
                                                                                                       /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* dest, ::UnityEngine::Vector2 point) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                          { "ChangeCoordinatesTo_2D",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, src, dest, point);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::VisualElementExtensions::ChangeCoordinatesTo_3D(/* [NotNull] */ ::UnityEngine::UIElements::VisualElement* src,
                                                                                                       /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* dest, ::UnityEngine::Vector2 point) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                          { "ChangeCoordinatesTo_3D",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, src, dest, point);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::VisualElementExtensions::ChangeCoordinatesTo(::UnityEngine::UIElements::VisualElement* src, ::UnityEngine::UIElements::VisualElement* dest,
                                                                                                 ::UnityEngine::Rect rect) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                          { "ChangeCoordinatesTo",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, src, dest, rect);
}
inline ::UnityEngine::Ray UnityEngine::UIElements::VisualElementExtensions::ChangeCoordinatesTo(/* [NotNull] */ ::UnityEngine::UIElements::VisualElement* src,
                                                                                                /* [NotNull] */ ::UnityEngine::UIElements::VisualElement* dest, ::UnityEngine::Ray ray) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                          { "ChangeCoordinatesTo",
                            {},
                            { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Ray>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(nullptr, ___internal_method, src, dest, ray);
}
inline bool UnityEngine::UIElements::VisualElementExtensions::IntersectWorldRay(/* [NotNull] */ ::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::Ray worldRay, ::by_ref<float_t> distance,
                                                                                ::by_ref<::UnityEngine::Vector3> localPoint) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                                                                         { "IntersectWorldRay",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Ray>(),
                                                                                             ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ve, worldRay, distance, localPoint);
}
inline bool UnityEngine::UIElements::VisualElementExtensions::IntersectLocalRay(/* [NotNull] */ ::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::Ray localRay,
                                                                                ::by_ref<::UnityEngine::Vector3> localPoint) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
          { "IntersectLocalRay", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ve, localRay, localPoint);
}
inline ::UnityEngine::Ray UnityEngine::UIElements::VisualElementExtensions::TransformRay(::UnityEngine::Matrix4x4 m, ::UnityEngine::Ray ray) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                                           { "TransformRay", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Ray>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(nullptr, ___internal_method, m, ray);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualElementExtensions::VisualElementExtensions() {}
