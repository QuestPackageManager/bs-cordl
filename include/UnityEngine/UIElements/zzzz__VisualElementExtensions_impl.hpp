#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/VisualElementExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementExtensions_def.hpp"
#include "UnityEngine/UIElements/zzzz__IManipulator_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementExtensions.StretchToParentSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::VisualElementExtensions::StretchToParentSize)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x6cc6358;

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
  constexpr static std::size_t addrs = 0x6cc6614;

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
  constexpr static std::size_t addrs = 0x6cc66d0;

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
  constexpr static std::size_t addrs = 0x6cc677c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                                             { "WorldToLocal", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementExtensions.LocalToWorld
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::VisualElementExtensions::LocalToWorld)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6cc6860;

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
  constexpr static std::size_t addrs = 0x6cc6940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::VisualElementExtensions*>(),
                                                             { "WorldToLocal", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::VisualElementExtensions.ChangeCoordinatesTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Vector2)>(
    &::UnityEngine::UIElements::VisualElementExtensions::ChangeCoordinatesTo)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6cc6a2c;

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
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::VisualElementExtensions::VisualElementExtensions() {}
