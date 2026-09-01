#pragma once
// IWYU pragma private; include "UnityEngine\EventSystems\PointerEventDataExtension.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventDataExtension_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventDataExtension.IsVRPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::EventSystems::PointerEventDataExtension::IsVRPointer)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e4f324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventDataExtension*>(),
                                                                                           { "IsVRPointer", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventDataExtension.GetRay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (*)(::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::EventSystems::PointerEventDataExtension::GetRay)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5e4f3a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventDataExtension*>(),
                                                                                           { "GetRay", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventDataExtension.GetSwipeStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::EventSystems::PointerEventDataExtension::GetSwipeStart)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e4f434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventDataExtension*>(),
                                                                                           { "GetSwipeStart", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerEventDataExtension.SetSwipeStart
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::Vector2)>(
    &::UnityEngine::EventSystems::PointerEventDataExtension::SetSwipeStart)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5e4f4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventDataExtension*>(),
                                                             { "SetSwipeStart", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::EventSystems::PointerEventDataExtension::IsVRPointer(::UnityEngine::EventSystems::PointerEventData* pointerEventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventDataExtension*>(),
                                                                                         { "IsVRPointer", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pointerEventData);
}
inline ::UnityEngine::Ray UnityEngine::EventSystems::PointerEventDataExtension::GetRay(::UnityEngine::EventSystems::PointerEventData* pointerEventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventDataExtension*>(),
                                                                                         { "GetRay", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(nullptr, ___internal_method, pointerEventData);
}
inline ::UnityEngine::Vector2 UnityEngine::EventSystems::PointerEventDataExtension::GetSwipeStart(::UnityEngine::EventSystems::PointerEventData* pointerEventData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventDataExtension*>(),
                                                                                         { "GetSwipeStart", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, pointerEventData);
}
inline void UnityEngine::EventSystems::PointerEventDataExtension::SetSwipeStart(::UnityEngine::EventSystems::PointerEventData* pointerEventData, ::UnityEngine::Vector2 start) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerEventDataExtension*>(),
                                                           { "SetSwipeStart", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointerEventData, start);
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::PointerEventDataExtension::PointerEventDataExtension() {}
