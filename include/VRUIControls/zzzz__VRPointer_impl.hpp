#pragma once
// IWYU pragma private; include "VRUIControls/VRPointer.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "VRUIControls/zzzz__VRPointer_def.hpp"
#include "GlobalNamespace/zzzz__VRController_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__EventSystem_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "VRUIControls/zzzz__VRLaserPointer_def.hpp"
//  Writing Method size for method: ::VRUIControls::VRPointer.add_lastUsedControllerChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRPointer::*)(::System::Action_1<::UnityW<::GlobalNamespace::VRController>>*)>(
    &::VRUIControls::VRPointer::add_lastUsedControllerChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e39004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(),
                                                             { "add_lastUsedControllerChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::VRController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.remove_lastUsedControllerChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRPointer::*)(::System::Action_1<::UnityW<::GlobalNamespace::VRController>>*)>(
    &::VRUIControls::VRPointer::remove_lastUsedControllerChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6e390c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(),
                                                             { "remove_lastUsedControllerChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::VRController>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.get_pointingOver
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GameObject> (::VRUIControls::VRPointer::*)()>(&::VRUIControls::VRPointer::get_pointingOver)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e39184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "get_pointingOver", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.get_flatCanvasWorldPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::VRUIControls::VRPointer::*)()>(&::VRUIControls::VRPointer::get_flatCanvasWorldPosition)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e3919c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "get_flatCanvasWorldPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.get_cursorTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::VRUIControls::VRPointer::*)()>(&::VRUIControls::VRPointer::get_cursorTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e39204;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "get_cursorTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.get_state
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::VRUIControls::VRPointer::*)()>(&::VRUIControls::VRPointer::get_state)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x6e3920c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "get_state", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.get_lastSelectedVrController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::VRController> (::VRUIControls::VRPointer::*)()>(&::VRUIControls::VRPointer::get_lastSelectedVrController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e395cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "get_lastSelectedVrController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.get_cursorPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::VRUIControls::VRPointer::*)()>(&::VRUIControls::VRPointer::get_cursorPosition)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6e395d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "get_cursorPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRPointer::*)()>(&::VRUIControls::VRPointer::Awake)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e396c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRPointer::*)()>(&::VRUIControls::VRPointer::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e39a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRPointer::*)()>(&::VRUIControls::VRPointer::OnDisable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e39ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRPointer::*)()>(&::VRUIControls::VRPointer::LateUpdate)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6e39ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.IsLeftControllerDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VRUIControls::VRPointer::*)()>(&::VRUIControls::VRPointer::IsLeftControllerDown)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e39bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "IsLeftControllerDown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.IsRightControllerDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VRUIControls::VRPointer::*)()>(&::VRUIControls::VRPointer::IsRightControllerDown)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e39c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "IsRightControllerDown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.SelectRightController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRPointer::*)()>(&::VRUIControls::VRPointer::SelectRightController)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6e399b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "SelectRightController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.SelectLeftController
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRPointer::*)()>(&::VRUIControls::VRPointer::SelectLeftController)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6e399f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "SelectLeftController", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.ShowLastSelectedPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRPointer::*)()>(&::VRUIControls::VRPointer::ShowLastSelectedPointer)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6e39a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "ShowLastSelectedPointer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.CreateLaserPointers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VRUIControls::VRPointer::*)()>(&::VRUIControls::VRPointer::CreateLaserPointers)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6e39770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "CreateLaserPointers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.SetupLaserPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRPointer::*)(::VRUIControls::VRLaserPointer*)>(&::VRUIControls::VRPointer::SetupLaserPointer)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6e39cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "SetupLaserPointer", {}, { ::i2c::type_of<::VRUIControls::VRLaserPointer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.CreateCursors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VRUIControls::VRPointer::*)()>(&::VRUIControls::VRPointer::CreateCursors)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6e3987c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "CreateCursors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.RefreshLaserPointerAndLaserHit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRPointer::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::VRUIControls::VRPointer::RefreshLaserPointerAndLaserHit)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x6e39d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "RefreshLaserPointerAndLaserHit", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.OnApplicationFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRPointer::*)(bool)>(&::VRUIControls::VRPointer::OnApplicationFocus)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6e39fa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "OnApplicationFocus", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.HideLaserPointersAndCursors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRPointer::*)()>(&::VRUIControls::VRPointer::HideLaserPointersAndCursors)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e39ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "HideLaserPointersAndCursors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.HideLaserPointers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRPointer::*)()>(&::VRUIControls::VRPointer::HideLaserPointers)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6e39fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "HideLaserPointers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.HideCursors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRPointer::*)()>(&::VRUIControls::VRPointer::HideCursors)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6e39c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "HideCursors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRPointer::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::VRUIControls::VRPointer::Process)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6e3a010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "Process", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::VRPointer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::VRPointer::*)()>(&::VRUIControls::VRPointer::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6e3a0bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::VRController>& VRUIControls::VRPointer::__cordl_internal_get__leftVRController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftVRController;
}
constexpr ::UnityW<::GlobalNamespace::VRController> const& VRUIControls::VRPointer::__cordl_internal_get__leftVRController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftVRController;
}
constexpr void VRUIControls::VRPointer::__cordl_internal_set__leftVRController(::UnityW<::GlobalNamespace::VRController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftVRController = value;
}
constexpr ::UnityW<::GlobalNamespace::VRController>& VRUIControls::VRPointer::__cordl_internal_get__rightVRController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightVRController;
}
constexpr ::UnityW<::GlobalNamespace::VRController> const& VRUIControls::VRPointer::__cordl_internal_get__rightVRController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightVRController;
}
constexpr void VRUIControls::VRPointer::__cordl_internal_set__rightVRController(::UnityW<::GlobalNamespace::VRController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightVRController = value;
}
constexpr ::UnityW<::VRUIControls::VRLaserPointer>& VRUIControls::VRPointer::__cordl_internal_get__laserPointerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____laserPointerPrefab;
}
constexpr ::UnityW<::VRUIControls::VRLaserPointer> const& VRUIControls::VRPointer::__cordl_internal_get__laserPointerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____laserPointerPrefab;
}
constexpr void VRUIControls::VRPointer::__cordl_internal_set__laserPointerPrefab(::UnityW<::VRUIControls::VRLaserPointer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____laserPointerPrefab = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& VRUIControls::VRPointer::__cordl_internal_get__cursorPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cursorPrefab;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VRUIControls::VRPointer::__cordl_internal_get__cursorPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cursorPrefab;
}
constexpr void VRUIControls::VRPointer::__cordl_internal_set__cursorPrefab(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cursorPrefab = value;
}
constexpr float_t& VRUIControls::VRPointer::__cordl_internal_get__defaultLaserPointerLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultLaserPointerLength;
}
constexpr float_t const& VRUIControls::VRPointer::__cordl_internal_get__defaultLaserPointerLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultLaserPointerLength;
}
constexpr void VRUIControls::VRPointer::__cordl_internal_set__defaultLaserPointerLength(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultLaserPointerLength = value;
}
constexpr float_t& VRUIControls::VRPointer::__cordl_internal_get__laserPointerWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____laserPointerWidth;
}
constexpr float_t const& VRUIControls::VRPointer::__cordl_internal_get__laserPointerWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____laserPointerWidth;
}
constexpr void VRUIControls::VRPointer::__cordl_internal_set__laserPointerWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____laserPointerWidth = value;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::VRController>>*& VRUIControls::VRPointer::__cordl_internal_get_lastUsedControllerChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastUsedControllerChangedEvent;
}
constexpr ::System::Action_1<::UnityW<::GlobalNamespace::VRController>>* const& VRUIControls::VRPointer::__cordl_internal_get_lastUsedControllerChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastUsedControllerChangedEvent;
}
constexpr void VRUIControls::VRPointer::__cordl_internal_set_lastUsedControllerChangedEvent(::System::Action_1<::UnityW<::GlobalNamespace::VRController>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastUsedControllerChangedEvent = value;
}
constexpr ::UnityEngine::EventSystems::PointerEventData*& VRUIControls::VRPointer::__cordl_internal_get__currentPointerData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPointerData;
}
constexpr ::UnityEngine::EventSystems::PointerEventData* const& VRUIControls::VRPointer::__cordl_internal_get__currentPointerData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____currentPointerData;
}
constexpr void VRUIControls::VRPointer::__cordl_internal_set__currentPointerData(::UnityEngine::EventSystems::PointerEventData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____currentPointerData = value;
}
constexpr ::UnityW<::VRUIControls::VRLaserPointer>& VRUIControls::VRPointer::__cordl_internal_get__laserPointer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____laserPointer;
}
constexpr ::UnityW<::VRUIControls::VRLaserPointer> const& VRUIControls::VRPointer::__cordl_internal_get__laserPointer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____laserPointer;
}
constexpr void VRUIControls::VRPointer::__cordl_internal_set__laserPointer(::UnityW<::VRUIControls::VRLaserPointer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____laserPointer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& VRUIControls::VRPointer::__cordl_internal_get__cursorTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cursorTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VRUIControls::VRPointer::__cordl_internal_get__cursorTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cursorTransform;
}
constexpr void VRUIControls::VRPointer::__cordl_internal_set__cursorTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cursorTransform = value;
}
constexpr ::UnityW<::VRUIControls::VRLaserPointer>& VRUIControls::VRPointer::__cordl_internal_get__leftLaserPointer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftLaserPointer;
}
constexpr ::UnityW<::VRUIControls::VRLaserPointer> const& VRUIControls::VRPointer::__cordl_internal_get__leftLaserPointer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftLaserPointer;
}
constexpr void VRUIControls::VRPointer::__cordl_internal_set__leftLaserPointer(::UnityW<::VRUIControls::VRLaserPointer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftLaserPointer = value;
}
constexpr ::UnityW<::VRUIControls::VRLaserPointer>& VRUIControls::VRPointer::__cordl_internal_get__rightLaserPointer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightLaserPointer;
}
constexpr ::UnityW<::VRUIControls::VRLaserPointer> const& VRUIControls::VRPointer::__cordl_internal_get__rightLaserPointer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightLaserPointer;
}
constexpr void VRUIControls::VRPointer::__cordl_internal_set__rightLaserPointer(::UnityW<::VRUIControls::VRLaserPointer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightLaserPointer = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& VRUIControls::VRPointer::__cordl_internal_get__leftCursorTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftCursorTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VRUIControls::VRPointer::__cordl_internal_get__leftCursorTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftCursorTransform;
}
constexpr void VRUIControls::VRPointer::__cordl_internal_set__leftCursorTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftCursorTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& VRUIControls::VRPointer::__cordl_internal_get__rightCursorTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightCursorTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& VRUIControls::VRPointer::__cordl_internal_get__rightCursorTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightCursorTransform;
}
constexpr void VRUIControls::VRPointer::__cordl_internal_set__rightCursorTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightCursorTransform = value;
}
constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem>& VRUIControls::VRPointer::__cordl_internal_get__eventSystem() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventSystem;
}
constexpr ::UnityW<::UnityEngine::EventSystems::EventSystem> const& VRUIControls::VRPointer::__cordl_internal_get__eventSystem() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventSystem;
}
constexpr void VRUIControls::VRPointer::__cordl_internal_set__eventSystem(::UnityW<::UnityEngine::EventSystems::EventSystem> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventSystem = value;
}
constexpr ::UnityW<::GlobalNamespace::VRController>& VRUIControls::VRPointer::__cordl_internal_get__lastSelectedVrController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSelectedVrController;
}
constexpr ::UnityW<::GlobalNamespace::VRController> const& VRUIControls::VRPointer::__cordl_internal_get__lastSelectedVrController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSelectedVrController;
}
constexpr void VRUIControls::VRPointer::__cordl_internal_set__lastSelectedVrController(::UnityW<::GlobalNamespace::VRController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastSelectedVrController = value;
}
constexpr bool& VRUIControls::VRPointer::__cordl_internal_get__lastSelectedControllerWasRight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSelectedControllerWasRight;
}
constexpr bool const& VRUIControls::VRPointer::__cordl_internal_get__lastSelectedControllerWasRight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSelectedControllerWasRight;
}
constexpr void VRUIControls::VRPointer::__cordl_internal_set__lastSelectedControllerWasRight(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastSelectedControllerWasRight = value;
}
constexpr bool& VRUIControls::VRPointer::__cordl_internal_get__rightControllerWasReleased() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightControllerWasReleased;
}
constexpr bool const& VRUIControls::VRPointer::__cordl_internal_get__rightControllerWasReleased() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightControllerWasReleased;
}
constexpr void VRUIControls::VRPointer::__cordl_internal_set__rightControllerWasReleased(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightControllerWasReleased = value;
}
constexpr bool& VRUIControls::VRPointer::__cordl_internal_get__leftControllerWasReleased() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftControllerWasReleased;
}
constexpr bool const& VRUIControls::VRPointer::__cordl_internal_get__leftControllerWasReleased() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftControllerWasReleased;
}
constexpr void VRUIControls::VRPointer::__cordl_internal_set__leftControllerWasReleased(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftControllerWasReleased = value;
}
constexpr bool& VRUIControls::VRPointer::__cordl_internal_get__hasLaserPointers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasLaserPointers;
}
constexpr bool const& VRUIControls::VRPointer::__cordl_internal_get__hasLaserPointers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasLaserPointers;
}
constexpr void VRUIControls::VRPointer::__cordl_internal_set__hasLaserPointers(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasLaserPointers = value;
}
constexpr bool& VRUIControls::VRPointer::__cordl_internal_get__hasCursors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasCursors;
}
constexpr bool const& VRUIControls::VRPointer::__cordl_internal_get__hasCursors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasCursors;
}
constexpr void VRUIControls::VRPointer::__cordl_internal_set__hasCursors(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasCursors = value;
}
inline void VRUIControls::VRPointer::add_lastUsedControllerChangedEvent(::System::Action_1<::UnityW<::GlobalNamespace::VRController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(),
                                                           { "add_lastUsedControllerChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::VRController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void VRUIControls::VRPointer::remove_lastUsedControllerChangedEvent(::System::Action_1<::UnityW<::GlobalNamespace::VRController>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(),
                                                           { "remove_lastUsedControllerChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::GlobalNamespace::VRController>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GameObject> VRUIControls::VRPointer::get_pointingOver() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "get_pointingOver", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 VRUIControls::VRPointer::get_flatCanvasWorldPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "get_flatCanvasWorldPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> VRUIControls::VRPointer::get_cursorTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "get_cursorTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::StringW VRUIControls::VRPointer::get_state() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "get_state", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::VRController> VRUIControls::VRPointer::get_lastSelectedVrController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "get_lastSelectedVrController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::VRController>>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 VRUIControls::VRPointer::get_cursorPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "get_cursorPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void VRUIControls::VRPointer::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void VRUIControls::VRPointer::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void VRUIControls::VRPointer::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void VRUIControls::VRPointer::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool VRUIControls::VRPointer::IsLeftControllerDown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "IsLeftControllerDown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool VRUIControls::VRPointer::IsRightControllerDown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "IsRightControllerDown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void VRUIControls::VRPointer::SelectRightController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "SelectRightController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void VRUIControls::VRPointer::SelectLeftController() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "SelectLeftController", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void VRUIControls::VRPointer::ShowLastSelectedPointer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "ShowLastSelectedPointer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool VRUIControls::VRPointer::CreateLaserPointers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "CreateLaserPointers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void VRUIControls::VRPointer::SetupLaserPointer(::VRUIControls::VRLaserPointer* laserPointer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "SetupLaserPointer", {}, { ::i2c::type_of<::VRUIControls::VRLaserPointer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, laserPointer);
}
inline bool VRUIControls::VRPointer::CreateCursors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "CreateCursors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void VRUIControls::VRPointer::RefreshLaserPointerAndLaserHit(::UnityEngine::EventSystems::PointerEventData* pointerData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "RefreshLaserPointerAndLaserHit", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerData);
}
inline void VRUIControls::VRPointer::OnApplicationFocus(bool hasFocus) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "OnApplicationFocus", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasFocus);
}
inline void VRUIControls::VRPointer::HideLaserPointersAndCursors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "HideLaserPointersAndCursors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void VRUIControls::VRPointer::HideLaserPointers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "HideLaserPointers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void VRUIControls::VRPointer::HideCursors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "HideCursors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void VRUIControls::VRPointer::Process(::UnityEngine::EventSystems::PointerEventData* pointerEventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { "Process", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerEventData);
}
inline void VRUIControls::VRPointer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::VRPointer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VRUIControls::VRPointer* VRUIControls::VRPointer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VRUIControls::VRPointer*>());
}
// Ctor Parameters []
constexpr ::VRUIControls::VRPointer::VRPointer() {}
