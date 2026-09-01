#pragma once
// IWYU pragma private; include "UnityEngine\UI\MultipleDisplayUtilities.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/zzzz__MultipleDisplayUtilities_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::MultipleDisplayUtilities.GetRelativeMousePositionForDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::EventSystems::PointerEventData*, ::by_ref<::UnityEngine::Vector2>)>(
    &::UnityEngine::UI::MultipleDisplayUtilities::GetRelativeMousePositionForDrag)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e01954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MultipleDisplayUtilities*>(),
                            { "GetRelativeMousePositionForDrag", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MultipleDisplayUtilities.GetRelativeMousePositionForRaycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::UI::MultipleDisplayUtilities::GetRelativeMousePositionForRaycast)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6e01ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MultipleDisplayUtilities*>(),
                                                             { "GetRelativeMousePositionForRaycast", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::MultipleDisplayUtilities.RelativeMouseAtScaled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector2, int32_t)>(&::UnityEngine::UI::MultipleDisplayUtilities::RelativeMouseAtScaled)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0x6e019c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MultipleDisplayUtilities*>(),
                                                                                           { "RelativeMouseAtScaled", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline bool UnityEngine::UI::MultipleDisplayUtilities::GetRelativeMousePositionForDrag(::UnityEngine::EventSystems::PointerEventData* eventData, ::by_ref<::UnityEngine::Vector2> position) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MultipleDisplayUtilities*>(),
                          { "GetRelativeMousePositionForDrag", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, eventData, position);
}
inline ::UnityEngine::Vector3 UnityEngine::UI::MultipleDisplayUtilities::GetRelativeMousePositionForRaycast(::UnityEngine::EventSystems::PointerEventData* eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MultipleDisplayUtilities*>(),
                                                           { "GetRelativeMousePositionForRaycast", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, eventData);
}
inline ::UnityEngine::Vector3 UnityEngine::UI::MultipleDisplayUtilities::RelativeMouseAtScaled(::UnityEngine::Vector2 position, int32_t displayIndex) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::MultipleDisplayUtilities*>(),
                                                                                         { "RelativeMouseAtScaled", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, position, displayIndex);
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::MultipleDisplayUtilities::MultipleDisplayUtilities() {}
