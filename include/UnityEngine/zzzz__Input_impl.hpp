#pragma once
// IWYU pragma private; include "UnityEngine\Input.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Input_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__IMECompositionMode_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__PenData_def.hpp"
#include "UnityEngine/zzzz__Touch_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Input.GetAxis
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::StringW)>(&::UnityEngine::Input::GetAxis)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b61590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetAxis", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.GetAxisRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::StringW)>(&::UnityEngine::Input::GetAxisRaw)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b616bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetAxisRaw", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.GetButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::Input::GetButton)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b617e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetButton", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.GetButtonDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::Input::GetButtonDown)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b6191c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetButtonDown", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.GetKeyInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::KeyCode)>(&::UnityEngine::Input::GetKeyInt)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b61a50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetKeyInt", {}, { ::i2c::type_of<::UnityEngine::KeyCode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.GetKeyUpInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::KeyCode)>(&::UnityEngine::Input::GetKeyUpInt)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b61a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetKeyUpInt", {}, { ::i2c::type_of<::UnityEngine::KeyCode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.GetKeyDownInt
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::KeyCode)>(&::UnityEngine::Input::GetKeyDownInt)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b61ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetKeyDownInt", {}, { ::i2c::type_of<::UnityEngine::KeyCode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.GetMouseButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::Input::GetMouseButton)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b61b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetMouseButton", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.GetMouseButtonDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::Input::GetMouseButtonDown)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b61b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetMouseButtonDown", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.GetMouseButtonUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::Input::GetMouseButtonUp)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b61b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetMouseButtonUp", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.GetTouch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Touch (*)(int32_t)>(&::UnityEngine::Input::GetTouch)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b61bb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetTouch", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.GetLastPenContactEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::PenData (*)()>(&::UnityEngine::Input::GetLastPenContactEvent)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6b61c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetLastPenContactEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.ClearLastPenContactEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Input::ClearLastPenContactEvent)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b61d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "ClearLastPenContactEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.GetKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::KeyCode)>(&::UnityEngine::Input::GetKey)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b61d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetKey", {}, { ::i2c::type_of<::UnityEngine::KeyCode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.GetKeyUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::KeyCode)>(&::UnityEngine::Input::GetKeyUp)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b61d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetKeyUp", {}, { ::i2c::type_of<::UnityEngine::KeyCode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.GetKeyDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::KeyCode)>(&::UnityEngine::Input::GetKeyDown)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b61dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetKeyDown", {}, { ::i2c::type_of<::UnityEngine::KeyCode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.get_anyKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Input::get_anyKey)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b61de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_anyKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.get_inputString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::Input::get_inputString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6b61e10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_inputString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.get_mousePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)()>(&::UnityEngine::Input::get_mousePosition)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b61f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_mousePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.get_mouseScrollDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)()>(&::UnityEngine::Input::get_mouseScrollDelta)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b61f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_mouseScrollDelta", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.get_imeCompositionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::IMECompositionMode (*)()>(&::UnityEngine::Input::get_imeCompositionMode)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b62018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_imeCompositionMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.set_imeCompositionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::IMECompositionMode)>(&::UnityEngine::Input::set_imeCompositionMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b62040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "set_imeCompositionMode", {}, { ::i2c::type_of<::UnityEngine::IMECompositionMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.get_compositionString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::Input::get_compositionString)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6b6207c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_compositionString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.get_compositionCursorPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)()>(&::UnityEngine::Input::get_compositionCursorPos)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b6217c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_compositionCursorPos", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.set_compositionCursorPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector2)>(&::UnityEngine::Input::set_compositionCursorPos)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b621fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "set_compositionCursorPos", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.get_simulateTouchEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Input::get_simulateTouchEnabled)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b62278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_simulateTouchEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.GetMousePresentInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Input::GetMousePresentInternal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b622c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetMousePresentInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.GetTouchSupportedInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Input::GetTouchSupportedInternal)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b622ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetTouchSupportedInternal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.get_mousePresent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Input::get_mousePresent)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b62314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_mousePresent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.get_touchSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Input::get_touchSupported)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b62390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_touchSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.get_touchCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Input::get_touchCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b6240c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_touchCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.CheckDisabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Input::CheckDisabled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b62434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "CheckDisabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.GetTouch_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::by_ref<::UnityEngine::Touch>)>(&::UnityEngine::Input::GetTouch_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b61c28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetTouch_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Touch>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.GetLastPenContactEvent_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::PenData>)>(&::UnityEngine::Input::GetLastPenContactEvent_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b61cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetLastPenContactEvent_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::PenData>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.get_inputString_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Input::get_inputString_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b61ed4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_inputString_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.get_mousePosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::Input::get_mousePosition_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b61f5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_mousePosition_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.get_mouseScrollDelta_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Input::get_mouseScrollDelta_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b61fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_mouseScrollDelta_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.get_compositionString_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Input::get_compositionString_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b62140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_compositionString_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.get_compositionCursorPos_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Input::get_compositionCursorPos_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b621c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_compositionCursorPos_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Input.set_compositionCursorPos_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Input::set_compositionCursorPos_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b6223c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "set_compositionCursorPos_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Input::setStaticF__simulateTouchEnabled_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<simulateTouchEnabled>k__BackingField", ::UnityEngine::Input*>(std::forward<bool>(value));
}
inline bool UnityEngine::Input::getStaticF__simulateTouchEnabled_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<simulateTouchEnabled>k__BackingField", ::UnityEngine::Input*>();
}
inline float_t UnityEngine::Input::GetAxis(::StringW axisName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetAxis", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, axisName);
}
inline float_t UnityEngine::Input::GetAxisRaw(::StringW axisName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetAxisRaw", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, axisName);
}
inline bool UnityEngine::Input::GetButton(::StringW buttonName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetButton", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buttonName);
}
inline bool UnityEngine::Input::GetButtonDown(::StringW buttonName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetButtonDown", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, buttonName);
}
inline bool UnityEngine::Input::GetKeyInt(::UnityEngine::KeyCode key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetKeyInt", {}, { ::i2c::type_of<::UnityEngine::KeyCode>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key);
}
inline bool UnityEngine::Input::GetKeyUpInt(::UnityEngine::KeyCode key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetKeyUpInt", {}, { ::i2c::type_of<::UnityEngine::KeyCode>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key);
}
inline bool UnityEngine::Input::GetKeyDownInt(::UnityEngine::KeyCode key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetKeyDownInt", {}, { ::i2c::type_of<::UnityEngine::KeyCode>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key);
}
inline bool UnityEngine::Input::GetMouseButton(int32_t button) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetMouseButton", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, button);
}
inline bool UnityEngine::Input::GetMouseButtonDown(int32_t button) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetMouseButtonDown", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, button);
}
inline bool UnityEngine::Input::GetMouseButtonUp(int32_t button) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetMouseButtonUp", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, button);
}
inline ::UnityEngine::Touch UnityEngine::Input::GetTouch(int32_t index) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetTouch", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Touch>(nullptr, ___internal_method, index);
}
inline ::UnityEngine::PenData UnityEngine::Input::GetLastPenContactEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetLastPenContactEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::PenData>(nullptr, ___internal_method);
}
inline void UnityEngine::Input::ClearLastPenContactEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "ClearLastPenContactEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool UnityEngine::Input::GetKey(::UnityEngine::KeyCode key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetKey", {}, { ::i2c::type_of<::UnityEngine::KeyCode>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key);
}
inline bool UnityEngine::Input::GetKeyUp(::UnityEngine::KeyCode key) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetKeyUp", {}, { ::i2c::type_of<::UnityEngine::KeyCode>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key);
}
inline bool UnityEngine::Input::GetKeyDown(::UnityEngine::KeyCode key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetKeyDown", {}, { ::i2c::type_of<::UnityEngine::KeyCode>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, key);
}
inline bool UnityEngine::Input::get_anyKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_anyKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Input::get_inputString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_inputString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector3 UnityEngine::Input::get_mousePosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_mousePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Input::get_mouseScrollDelta() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_mouseScrollDelta", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method);
}
inline ::UnityEngine::IMECompositionMode UnityEngine::Input::get_imeCompositionMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_imeCompositionMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::IMECompositionMode>(nullptr, ___internal_method);
}
inline void UnityEngine::Input::set_imeCompositionMode(::UnityEngine::IMECompositionMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "set_imeCompositionMode", {}, { ::i2c::type_of<::UnityEngine::IMECompositionMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::StringW UnityEngine::Input::get_compositionString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_compositionString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::Input::get_compositionCursorPos() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_compositionCursorPos", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method);
}
inline void UnityEngine::Input::set_compositionCursorPos(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "set_compositionCursorPos", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Input::get_simulateTouchEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_simulateTouchEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Input::GetMousePresentInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetMousePresentInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Input::GetTouchSupportedInternal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetTouchSupportedInternal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Input::get_mousePresent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_mousePresent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Input::get_touchSupported() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_touchSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::Input::get_touchCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_touchCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool UnityEngine::Input::CheckDisabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "CheckDisabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Input::GetTouch_Injected(int32_t index, ::by_ref<::UnityEngine::Touch> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetTouch_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Touch>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, index, ret);
}
inline void UnityEngine::Input::GetLastPenContactEvent_Injected(::by_ref<::UnityEngine::PenData> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "GetLastPenContactEvent_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::PenData>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Input::get_inputString_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_inputString_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Input::get_mousePosition_Injected(::by_ref<::UnityEngine::Vector3> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_mousePosition_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Input::get_mouseScrollDelta_Injected(::by_ref<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_mouseScrollDelta_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Input::get_compositionString_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_compositionString_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Input::get_compositionCursorPos_Injected(::by_ref<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "get_compositionCursorPos_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::Input::set_compositionCursorPos_Injected(::by_ref<::UnityEngine::Vector2> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Input*>(), { "set_compositionCursorPos_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::Input::Input() {}
