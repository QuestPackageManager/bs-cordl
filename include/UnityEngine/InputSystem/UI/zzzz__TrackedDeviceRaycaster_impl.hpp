#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\UI\TrackedDeviceRaycaster.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseRaycaster_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__TrackedDeviceRaycaster_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__RaycastResult_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__ExtendedPointerEventData_def.hpp"
#include "UnityEngine/InputSystem/UI/zzzz__TrackedDeviceRaycaster_def.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Canvas_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData::*)(
    ::UnityEngine::UI::Graphic*, ::UnityEngine::Vector3, ::UnityEngine::Vector2, float_t)>(&::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x659b224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>(),
            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UI::Graphic*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData.get_graphic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UI::Graphic> (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData::*)()>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData::get_graphic)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659b348;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>(), { "get_graphic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData.get_worldHitPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData::*)()>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData::get_worldHitPosition)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x659b350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>(), { "get_worldHitPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData.get_screenPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData::*)()>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData::get_screenPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659b35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>(), { "get_screenPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData.get_distance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData::*)()>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData::get_distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659b364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>(), { "get_distance", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData::_ctor(::UnityEngine::UI::Graphic* graphic, ::UnityEngine::Vector3 worldHitPosition,
                                                                                       ::UnityEngine::Vector2 screenPosition, float_t distance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::UI::Graphic*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, graphic, worldHitPosition, screenPosition, distance);
}
inline ::UnityW<::UnityEngine::UI::Graphic> UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData::get_graphic() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>(), { "get_graphic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UI::Graphic>>(*this, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData::get_worldHitPosition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>(), { "get_worldHitPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData::get_screenPosition() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>(), { "get_screenPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData::get_distance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>(), { "get_distance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_graphic_k__BackingField", ty: "::UnityW<::UnityEngine::UI::Graphic>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_worldHitPosition_k__BackingField", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "_screenPosition_k__BackingField", ty: "::UnityEngine::Vector2",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_distance_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData::TrackedDeviceRaycaster_RaycastHitData(::UnityW<::UnityEngine::UI::Graphic> _graphic_k__BackingField,
                                                                                                                       ::UnityEngine::Vector3 _worldHitPosition_k__BackingField,
                                                                                                                       ::UnityEngine::Vector2 _screenPosition_k__BackingField,
                                                                                                                       float_t _distance_k__BackingField) noexcept {
  this->_graphic_k__BackingField = _graphic_k__BackingField;
  this->_worldHitPosition_k__BackingField = _worldHitPosition_k__BackingField;
  this->_screenPosition_k__BackingField = _screenPosition_k__BackingField;
  this->_distance_k__BackingField = _distance_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData::TrackedDeviceRaycaster_RaycastHitData() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c::*)()>(&::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x659b3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c._SortedRaycastGraphics_b__25_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c::*)(::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData,
                                                                                                                               ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData)>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c::_SortedRaycastGraphics_b__25_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x659b3c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c*>(),
                                                                                           { "<SortedRaycastGraphics>b__25_0",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>(),
                                                                                               ::i2c::type_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c::setStaticF___9(::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c*, "<>9", ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c*>(
      std::forward<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c*>(value));
}
inline ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c* UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c*, "<>9", ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c*>();
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c::setStaticF___9__25_0(::System::Comparison_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>*, "<>9__25_0",
                                    ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c*>(
      std::forward<::System::Comparison_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>* UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c::getStaticF___9__25_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>*, "<>9__25_0",
                                           ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c*>();
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c::_SortedRaycastGraphics_b__25_0(::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData g1,
                                                                                                        ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData g2) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c*>(),
                                                                                         { "<SortedRaycastGraphics>b__25_0",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>(),
                                                                                             ::i2c::type_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, g1, g2);
}
inline ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c* UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster___c::TrackedDeviceRaycaster___c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.get_eventCamera
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Camera> (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_eventCamera)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x659a570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.get_blockingMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LayerMask (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_blockingMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), { "get_blockingMask", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.set_blockingMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(::UnityEngine::LayerMask)>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_blockingMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), { "set_blockingMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.get_checkFor3DOcclusion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_checkFor3DOcclusion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), { "get_checkFor3DOcclusion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.set_checkFor3DOcclusion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(bool)>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_checkFor3DOcclusion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a6bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), { "set_checkFor3DOcclusion", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.get_checkFor2DOcclusion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_checkFor2DOcclusion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a6c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), { "get_checkFor2DOcclusion", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.set_checkFor2DOcclusion
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(bool)>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_checkFor2DOcclusion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), { "set_checkFor2DOcclusion", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.get_ignoreReversedGraphics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_ignoreReversedGraphics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a6d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), { "get_ignoreReversedGraphics", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.set_ignoreReversedGraphics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(bool)>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_ignoreReversedGraphics)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a6dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), { "set_ignoreReversedGraphics", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.get_maxDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_maxDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a6e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), { "get_maxDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.set_maxDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(float_t)>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_maxDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x659a6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), { "set_maxDistance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(&::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::OnEnable)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x659a6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(&::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::OnDisable)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x659a780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.Raycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::Raycast)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x659a878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.PerformRaycast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(
    ::UnityEngine::InputSystem::UI::ExtendedPointerEventData*, ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*)>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::PerformRaycast)> {
  constexpr static std::size_t size = 0x614;
  constexpr static std::size_t addrs = 0x65935f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(),
                                                             { "PerformRaycast",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.SortedRaycastGraphics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)(
    ::UnityEngine::Canvas*, ::UnityEngine::Ray, ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>*)>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::SortedRaycastGraphics)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x659a924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(),
                                                { "SortedRaycastGraphics",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::UnityEngine::Ray>(),
                                                    ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.RayIntersectsRectTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::RectTransform*, ::UnityEngine::Ray, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::RayIntersectsRectTransform)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x659ae28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(),
                                                                                           { "RayIntersectsRectTransform",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Ray>(),
                                                                                               ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster.get_canvas
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Canvas> (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(
    &::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_canvas)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x659a608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), { "get_canvas", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::*)()>(&::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x659b238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>*&
UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__cordl_internal_get_m_RaycastResultsCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastResultsCache;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>* const&
UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__cordl_internal_get_m_RaycastResultsCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RaycastResultsCache;
}
constexpr void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__cordl_internal_set_m_RaycastResultsCache(
    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RaycastResultsCache = value;
}
constexpr bool& UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__cordl_internal_get_m_IgnoreReversedGraphics() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreReversedGraphics;
}
constexpr bool const& UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__cordl_internal_get_m_IgnoreReversedGraphics() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreReversedGraphics;
}
constexpr void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__cordl_internal_set_m_IgnoreReversedGraphics(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IgnoreReversedGraphics = value;
}
constexpr bool& UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__cordl_internal_get_m_CheckFor2DOcclusion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CheckFor2DOcclusion;
}
constexpr bool const& UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__cordl_internal_get_m_CheckFor2DOcclusion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CheckFor2DOcclusion;
}
constexpr void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__cordl_internal_set_m_CheckFor2DOcclusion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CheckFor2DOcclusion = value;
}
constexpr bool& UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__cordl_internal_get_m_CheckFor3DOcclusion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CheckFor3DOcclusion;
}
constexpr bool const& UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__cordl_internal_get_m_CheckFor3DOcclusion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CheckFor3DOcclusion;
}
constexpr void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__cordl_internal_set_m_CheckFor3DOcclusion(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CheckFor3DOcclusion = value;
}
constexpr float_t& UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__cordl_internal_get_m_MaxDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxDistance;
}
constexpr float_t const& UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__cordl_internal_get_m_MaxDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MaxDistance;
}
constexpr void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__cordl_internal_set_m_MaxDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MaxDistance = value;
}
constexpr ::UnityEngine::LayerMask& UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__cordl_internal_get_m_BlockingMask() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlockingMask;
}
constexpr ::UnityEngine::LayerMask const& UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__cordl_internal_get_m_BlockingMask() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BlockingMask;
}
constexpr void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__cordl_internal_set_m_BlockingMask(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BlockingMask = value;
}
constexpr ::UnityW<::UnityEngine::Canvas>& UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__cordl_internal_get_m_Canvas() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Canvas;
}
constexpr ::UnityW<::UnityEngine::Canvas> const& UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__cordl_internal_get_m_Canvas() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Canvas;
}
constexpr void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::__cordl_internal_set_m_Canvas(::UnityW<::UnityEngine::Canvas> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Canvas = value;
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::setStaticF_s_Instances(
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityW<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>> value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityW<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>>, "s_Instances",
                                    ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(
      std::forward<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityW<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>>>(value));
}
inline ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityW<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>>
UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::getStaticF_s_Instances() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Utilities::InlinedArray_1<::UnityW<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster>>, "s_Instances",
                                           ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>();
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::setStaticF_s_SortedGraphics(
    ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>*, "s_SortedGraphics",
                                    ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>*
UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::getStaticF_s_SortedGraphics() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>*, "s_SortedGraphics",
                                           ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>();
}
inline ::UnityW<::UnityEngine::Camera> UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_eventCamera() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Camera>>(this, ___internal_method);
}
inline ::UnityEngine::LayerMask UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_blockingMask() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), { "get_blockingMask", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::LayerMask>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_blockingMask(::UnityEngine::LayerMask value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), { "set_blockingMask", {}, { ::i2c::type_of<::UnityEngine::LayerMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_checkFor3DOcclusion() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), { "get_checkFor3DOcclusion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_checkFor3DOcclusion(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), { "set_checkFor3DOcclusion", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_checkFor2DOcclusion() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), { "get_checkFor2DOcclusion", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_checkFor2DOcclusion(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), { "set_checkFor2DOcclusion", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_ignoreReversedGraphics() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), { "get_ignoreReversedGraphics", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_ignoreReversedGraphics(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), { "set_ignoreReversedGraphics", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_maxDistance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), { "get_maxDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::set_maxDistance(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), { "set_maxDistance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::OnDisable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::Raycast(::UnityEngine::EventSystems::PointerEventData* eventData,
                                                                          ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData, resultAppendList);
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::PerformRaycast(::UnityEngine::InputSystem::UI::ExtendedPointerEventData* eventData,
                                                                                 ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* resultAppendList) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(),
                                                           { "PerformRaycast",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::InputSystem::UI::ExtendedPointerEventData*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData, resultAppendList);
}
inline void
UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::SortedRaycastGraphics(::UnityEngine::Canvas* canvas, ::UnityEngine::Ray ray,
                                                                            ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>* results) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(),
                                                           { "SortedRaycastGraphics",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Canvas*>(), ::i2c::type_of<::UnityEngine::Ray>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster_RaycastHitData>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canvas, ray, results);
}
inline bool UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::RayIntersectsRectTransform(::UnityEngine::RectTransform* transform, ::UnityEngine::Ray ray,
                                                                                             ::by_ref<::UnityEngine::Vector3> worldPosition, ::by_ref<float_t> distance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(),
                                                                                         { "RayIntersectsRectTransform",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::RectTransform*>(), ::i2c::type_of<::UnityEngine::Ray>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, transform, ray, worldPosition, distance);
}
inline ::UnityW<::UnityEngine::Canvas> UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::get_canvas() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), { "get_canvas", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Canvas>>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster* UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::UI::TrackedDeviceRaycaster::TrackedDeviceRaycaster() {}
