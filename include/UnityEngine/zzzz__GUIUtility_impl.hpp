#pragma once
// IWYU pragma private; include "UnityEngine\GUIUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GUIUtility_def.hpp"
#include "System/zzzz__Action_3_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/zzzz__EventType_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__FocusType_def.hpp"
#include "UnityEngine/zzzz__GUISkin_def.hpp"
#include "UnityEngine/zzzz__IMECompositionMode_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "UnityEngine/zzzz__ObjectGUIState_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUIUtility.get_pixelsPerPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::GUIUtility::get_pixelsPerPoint)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b463b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "get_pixelsPerPoint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.set_pixelsPerPoint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::GUIUtility::set_pixelsPerPoint)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6b4c2a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "set_pixelsPerPoint", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.get_guiDepth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::GUIUtility::get_guiDepth)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b4c2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "get_guiDepth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.set_mouseUsed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::GUIUtility::set_mouseUsed)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b42dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "set_mouseUsed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.get_textFieldInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::GUIUtility::get_textFieldInput)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b40f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "get_textFieldInput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.get_systemCopyBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::GUIUtility::get_systemCopyBuffer)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6b4c308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "get_systemCopyBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.set_systemCopyBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::GUIUtility::set_systemCopyBuffer)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6b4c444;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "set_systemCopyBuffer", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.Internal_GetControlID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::UnityEngine::FocusType, ::UnityEngine::Rect)>(&::UnityEngine::GUIUtility::Internal_GetControlID)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6b4c5cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(),
                                                { "Internal_GetControlID", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FocusType>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.GetControlID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::UnityEngine::FocusType, ::UnityEngine::Rect)>(&::UnityEngine::GUIUtility::GetControlID)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6b4c6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(),
                                                { "GetControlID", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FocusType>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.BeginContainerFromOwner
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ScriptableObject*)>(&::UnityEngine::GUIUtility::BeginContainerFromOwner)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6b4c76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "BeginContainerFromOwner", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.BeginContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ObjectGUIState*)>(&::UnityEngine::GUIUtility::BeginContainer)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b4c850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "BeginContainer", {}, { ::i2c::type_of<::UnityEngine::ObjectGUIState*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.Internal_EndContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUIUtility::Internal_EndContainer)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b4c90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "Internal_EndContainer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.CheckForTabEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Event*)>(&::UnityEngine::GUIUtility::CheckForTabEvent)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b4c934;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "CheckForTabEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.SetKeyboardControlToFirstControlId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUIUtility::SetKeyboardControlToFirstControlId)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b4c9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "SetKeyboardControlToFirstControlId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.SetKeyboardControlToLastControlId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUIUtility::SetKeyboardControlToLastControlId)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b4ca18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "SetKeyboardControlToLastControlId", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.HasFocusableControls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::GUIUtility::HasFocusableControls)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b4ca40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "HasFocusableControls", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.OwnsId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::GUIUtility::OwnsId)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b4ca68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "OwnsId", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.AlignRectToDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect, ::by_ref<int32_t>, ::by_ref<int32_t>)>(&::UnityEngine::GUIUtility::AlignRectToDevice)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6b4caa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(),
                                                { "AlignRectToDevice", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.get_compositionString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::GUIUtility::get_compositionString)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6b4cbb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "get_compositionString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.set_imeCompositionMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::IMECompositionMode)>(&::UnityEngine::GUIUtility::set_imeCompositionMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b4ccec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "set_imeCompositionMode", {}, { ::i2c::type_of<::UnityEngine::IMECompositionMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.set_compositionCursorPos
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Vector2)>(&::UnityEngine::GUIUtility::set_compositionCursorPos)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6b4cd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "set_compositionCursorPos", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.Internal_GetHotControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::GUIUtility::Internal_GetHotControl)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b4cde0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "Internal_GetHotControl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.Internal_GetKeyboardControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::GUIUtility::Internal_GetKeyboardControl)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b4ce08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "Internal_GetKeyboardControl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.Internal_SetHotControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::GUIUtility::Internal_SetHotControl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b4ce30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "Internal_SetHotControl", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.Internal_SetKeyboardControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::GUIUtility::Internal_SetKeyboardControl)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b4ce6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "Internal_SetKeyboardControl", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.Internal_GetDefaultSkin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(int32_t)>(&::UnityEngine::GUIUtility::Internal_GetDefaultSkin)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b4cea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "Internal_GetDefaultSkin", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.Internal_ExitGUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUIUtility::Internal_ExitGUI)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b4cee4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "Internal_ExitGUI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.MarkGUIChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUIUtility::MarkGUIChanged)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b4cf0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "MarkGUIChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.GetControlID
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::UnityEngine::FocusType)>(&::UnityEngine::GUIUtility::GetControlID)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b42534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "GetControlID", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FocusType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.set_guiIsExiting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::GUIUtility::set_guiIsExiting)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6b4cf84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "set_guiIsExiting", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.get_hotControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::GUIUtility::get_hotControl)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b4b5a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "get_hotControl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.set_hotControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::GUIUtility::set_hotControl)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b4cfe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "set_hotControl", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.TakeCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUIUtility::TakeCapture)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b4d060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "TakeCapture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.RemoveCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUIUtility::RemoveCapture)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b4d0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "RemoveCapture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.get_keyboardControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::GUIUtility::get_keyboardControl)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b4d150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "get_keyboardControl", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.set_keyboardControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::GUIUtility::set_keyboardControl)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b4d1bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "set_keyboardControl", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.HasKeyFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t)>(&::UnityEngine::GUIUtility::HasKeyFocus)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6b4b60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "HasKeyFocus", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.ExitGUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUIUtility::ExitGUI)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6b4d234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "ExitGUI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.GetDefaultSkin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GUISkin> (*)()>(&::UnityEngine::GUIUtility::GetDefaultSkin)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6b41b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "GetDefaultSkin", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.ProcessEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::System::IntPtr, ::by_ref<bool>)>(&::UnityEngine::GUIUtility::ProcessEvent)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6b4d334;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(),
                                                             { "ProcessEvent", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.EndContainer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUIUtility::EndContainer)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b4d530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "EndContainer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.BeginGUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, int32_t, int32_t)>(&::UnityEngine::GUIUtility::BeginGUI)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6b4d5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "BeginGUI", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.DestroyGUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::GUIUtility::DestroyGUI)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b4d7bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "DestroyGUI", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.EndGUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::GUIUtility::EndGUI)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6b4d818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "EndGUI", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.EndGUIFromException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Exception*)>(&::UnityEngine::GUIUtility::EndGUIFromException)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b4da04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "EndGUIFromException", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.EndContainerGUIFromException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Exception*)>(&::UnityEngine::GUIUtility::EndContainerGUIFromException)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b4dad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "EndContainerGUIFromException", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.ResetGlobalState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUIUtility::ResetGlobalState)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6b4d670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "ResetGlobalState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.IsExitGUIException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Exception*)>(&::UnityEngine::GUIUtility::IsExitGUIException)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b4db78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "IsExitGUIException", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.ShouldRethrowException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::Exception*)>(&::UnityEngine::GUIUtility::ShouldRethrowException)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6b4da7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "ShouldRethrowException", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.CheckOnGUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUIUtility::CheckOnGUI)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6b418f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "CheckOnGUI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.RoundToPixelGrid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(float_t)>(&::UnityEngine::GUIUtility::RoundToPixelGrid)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6b4dc0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "RoundToPixelGrid", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.AlignRectToDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (*)(::UnityEngine::Rect)>(&::UnityEngine::GUIUtility::AlignRectToDevice)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b4dcc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "AlignRectToDevice", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.HitTest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rect, ::UnityEngine::Vector2, int32_t)>(&::UnityEngine::GUIUtility::HitTest)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b4dd50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(),
                                                             { "HitTest", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.HitTest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rect, ::UnityEngine::Vector2, bool)>(&::UnityEngine::GUIUtility::HitTest)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6b4dd94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(),
                                                             { "HitTest", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.get_systemCopyBuffer_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::GUIUtility::get_systemCopyBuffer_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b4c408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "get_systemCopyBuffer_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.set_systemCopyBuffer_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::GUIUtility::set_systemCopyBuffer_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b4c590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "set_systemCopyBuffer_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.Internal_GetControlID_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::UnityEngine::FocusType, ::by_ref<::UnityEngine::Rect>)>(&::UnityEngine::GUIUtility::Internal_GetControlID_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b4c66c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(),
                            { "Internal_GetControlID_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FocusType>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.BeginContainerFromOwner_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::GUIUtility::BeginContainerFromOwner_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b4c814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "BeginContainerFromOwner_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.BeginContainer_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::GUIUtility::BeginContainer_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b4c8d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "BeginContainer_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.CheckForTabEvent_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::GUIUtility::CheckForTabEvent_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b4c9b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "CheckForTabEvent_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.AlignRectToDevice_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Rect>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<::UnityEngine::Rect>)>(
    &::UnityEngine::GUIUtility::AlignRectToDevice_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b4cb54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "AlignRectToDevice_Injected",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                                   ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.get_compositionString_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::GUIUtility::get_compositionString_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b4ccb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "get_compositionString_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIUtility.set_compositionCursorPos_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::GUIUtility::set_compositionCursorPos_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b4cda4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "set_compositionCursorPos_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::GUIUtility::setStaticF_s_ControlCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_ControlCount", ::UnityEngine::GUIUtility*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUIUtility::getStaticF_s_ControlCount() {
  return ::cordl_internals::getStaticField<int32_t, "s_ControlCount", ::UnityEngine::GUIUtility*>();
}
inline void UnityEngine::GUIUtility::setStaticF_s_SkinMode(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_SkinMode", ::UnityEngine::GUIUtility*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUIUtility::getStaticF_s_SkinMode() {
  return ::cordl_internals::getStaticField<int32_t, "s_SkinMode", ::UnityEngine::GUIUtility*>();
}
inline void UnityEngine::GUIUtility::setStaticF_s_OriginalID(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_OriginalID", ::UnityEngine::GUIUtility*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUIUtility::getStaticF_s_OriginalID() {
  return ::cordl_internals::getStaticField<int32_t, "s_OriginalID", ::UnityEngine::GUIUtility*>();
}
inline void UnityEngine::GUIUtility::setStaticF_takeCapture(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "takeCapture", ::UnityEngine::GUIUtility*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::GUIUtility::getStaticF_takeCapture() {
  return ::cordl_internals::getStaticField<::System::Action*, "takeCapture", ::UnityEngine::GUIUtility*>();
}
inline void UnityEngine::GUIUtility::setStaticF_releaseCapture(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "releaseCapture", ::UnityEngine::GUIUtility*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::GUIUtility::getStaticF_releaseCapture() {
  return ::cordl_internals::getStaticField<::System::Action*, "releaseCapture", ::UnityEngine::GUIUtility*>();
}
inline void UnityEngine::GUIUtility::setStaticF_processEvent(::System::Func_3<int32_t, ::System::IntPtr, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_3<int32_t, ::System::IntPtr, bool>*, "processEvent", ::UnityEngine::GUIUtility*>(
      std::forward<::System::Func_3<int32_t, ::System::IntPtr, bool>*>(value));
}
inline ::System::Func_3<int32_t, ::System::IntPtr, bool>* UnityEngine::GUIUtility::getStaticF_processEvent() {
  return ::cordl_internals::getStaticField<::System::Func_3<int32_t, ::System::IntPtr, bool>*, "processEvent", ::UnityEngine::GUIUtility*>();
}
inline void UnityEngine::GUIUtility::setStaticF_cleanupRoots(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "cleanupRoots", ::UnityEngine::GUIUtility*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::GUIUtility::getStaticF_cleanupRoots() {
  return ::cordl_internals::getStaticField<::System::Action*, "cleanupRoots", ::UnityEngine::GUIUtility*>();
}
inline void UnityEngine::GUIUtility::setStaticF_endContainerGUIFromException(::System::Func_2<::System::Exception*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::System::Exception*, bool>*, "endContainerGUIFromException", ::UnityEngine::GUIUtility*>(
      std::forward<::System::Func_2<::System::Exception*, bool>*>(value));
}
inline ::System::Func_2<::System::Exception*, bool>* UnityEngine::GUIUtility::getStaticF_endContainerGUIFromException() {
  return ::cordl_internals::getStaticField<::System::Func_2<::System::Exception*, bool>*, "endContainerGUIFromException", ::UnityEngine::GUIUtility*>();
}
inline void UnityEngine::GUIUtility::setStaticF_guiChanged(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "guiChanged", ::UnityEngine::GUIUtility*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::GUIUtility::getStaticF_guiChanged() {
  return ::cordl_internals::getStaticField<::System::Action*, "guiChanged", ::UnityEngine::GUIUtility*>();
}
inline void UnityEngine::GUIUtility::setStaticF_beforeEventProcessed(::System::Action_3<::UnityEngine::EventType, ::UnityEngine::KeyCode, ::UnityEngine::EventModifiers>* value) {
  ::cordl_internals::setStaticField<::System::Action_3<::UnityEngine::EventType, ::UnityEngine::KeyCode, ::UnityEngine::EventModifiers>*, "beforeEventProcessed", ::UnityEngine::GUIUtility*>(
      std::forward<::System::Action_3<::UnityEngine::EventType, ::UnityEngine::KeyCode, ::UnityEngine::EventModifiers>*>(value));
}
inline ::System::Action_3<::UnityEngine::EventType, ::UnityEngine::KeyCode, ::UnityEngine::EventModifiers>* UnityEngine::GUIUtility::getStaticF_beforeEventProcessed() {
  return ::cordl_internals::getStaticField<::System::Action_3<::UnityEngine::EventType, ::UnityEngine::KeyCode, ::UnityEngine::EventModifiers>*, "beforeEventProcessed", ::UnityEngine::GUIUtility*>();
}
inline void UnityEngine::GUIUtility::setStaticF_m_Event(::UnityEngine::Event* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Event*, "m_Event", ::UnityEngine::GUIUtility*>(std::forward<::UnityEngine::Event*>(value));
}
inline ::UnityEngine::Event* UnityEngine::GUIUtility::getStaticF_m_Event() {
  return ::cordl_internals::getStaticField<::UnityEngine::Event*, "m_Event", ::UnityEngine::GUIUtility*>();
}
inline void UnityEngine::GUIUtility::setStaticF__guiIsExiting_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<guiIsExiting>k__BackingField", ::UnityEngine::GUIUtility*>(std::forward<bool>(value));
}
inline bool UnityEngine::GUIUtility::getStaticF__guiIsExiting_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<guiIsExiting>k__BackingField", ::UnityEngine::GUIUtility*>();
}
inline void UnityEngine::GUIUtility::setStaticF_s_HasCurrentWindowKeyFocusFunc(::System::Func_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_1<bool>*, "s_HasCurrentWindowKeyFocusFunc", ::UnityEngine::GUIUtility*>(std::forward<::System::Func_1<bool>*>(value));
}
inline ::System::Func_1<bool>* UnityEngine::GUIUtility::getStaticF_s_HasCurrentWindowKeyFocusFunc() {
  return ::cordl_internals::getStaticField<::System::Func_1<bool>*, "s_HasCurrentWindowKeyFocusFunc", ::UnityEngine::GUIUtility*>();
}
inline float_t UnityEngine::GUIUtility::get_pixelsPerPoint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "get_pixelsPerPoint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::GUIUtility::set_pixelsPerPoint(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "set_pixelsPerPoint", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::GUIUtility::get_guiDepth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "get_guiDepth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::GUIUtility::set_mouseUsed(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "set_mouseUsed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::GUIUtility::get_textFieldInput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "get_textFieldInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::GUIUtility::get_systemCopyBuffer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "get_systemCopyBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void UnityEngine::GUIUtility::set_systemCopyBuffer(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "set_systemCopyBuffer", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::GUIUtility::Internal_GetControlID(int32_t hint, ::UnityEngine::FocusType focusType, ::UnityEngine::Rect rect) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(),
                                              { "Internal_GetControlID", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FocusType>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hint, focusType, rect);
}
inline int32_t UnityEngine::GUIUtility::GetControlID(int32_t hint, ::UnityEngine::FocusType focusType, ::UnityEngine::Rect rect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(),
                                                           { "GetControlID", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FocusType>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hint, focusType, rect);
}
inline void UnityEngine::GUIUtility::BeginContainerFromOwner(::UnityEngine::ScriptableObject* owner) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "BeginContainerFromOwner", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, owner);
}
inline void UnityEngine::GUIUtility::BeginContainer(::UnityEngine::ObjectGUIState* objectGUIState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "BeginContainer", {}, { ::i2c::type_of<::UnityEngine::ObjectGUIState*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, objectGUIState);
}
inline void UnityEngine::GUIUtility::Internal_EndContainer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "Internal_EndContainer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::GUIUtility::CheckForTabEvent(::UnityEngine::Event* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "CheckForTabEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, evt);
}
inline void UnityEngine::GUIUtility::SetKeyboardControlToFirstControlId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "SetKeyboardControlToFirstControlId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::GUIUtility::SetKeyboardControlToLastControlId() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "SetKeyboardControlToLastControlId", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool UnityEngine::GUIUtility::HasFocusableControls() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "HasFocusableControls", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::GUIUtility::OwnsId(int32_t id) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "OwnsId", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, id);
}
inline ::UnityEngine::Rect UnityEngine::GUIUtility::AlignRectToDevice(::UnityEngine::Rect rect, ::by_ref<int32_t> widthInPixels, ::by_ref<int32_t> heightInPixels) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(),
                                              { "AlignRectToDevice", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, rect, widthInPixels, heightInPixels);
}
inline ::StringW UnityEngine::GUIUtility::get_compositionString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "get_compositionString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline void UnityEngine::GUIUtility::set_imeCompositionMode(::UnityEngine::IMECompositionMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "set_imeCompositionMode", {}, { ::i2c::type_of<::UnityEngine::IMECompositionMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::GUIUtility::set_compositionCursorPos(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "set_compositionCursorPos", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::GUIUtility::Internal_GetHotControl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "Internal_GetHotControl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::GUIUtility::Internal_GetKeyboardControl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "Internal_GetKeyboardControl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::GUIUtility::Internal_SetHotControl(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "Internal_SetHotControl", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::GUIUtility::Internal_SetKeyboardControl(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "Internal_SetKeyboardControl", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::Object* UnityEngine::GUIUtility::Internal_GetDefaultSkin(int32_t skinMode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "Internal_GetDefaultSkin", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, skinMode);
}
inline void UnityEngine::GUIUtility::Internal_ExitGUI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "Internal_ExitGUI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::GUIUtility::MarkGUIChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "MarkGUIChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::GUIUtility::GetControlID(int32_t hint, ::UnityEngine::FocusType focus) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "GetControlID", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FocusType>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hint, focus);
}
inline void UnityEngine::GUIUtility::set_guiIsExiting(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "set_guiIsExiting", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::GUIUtility::get_hotControl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "get_hotControl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::GUIUtility::set_hotControl(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "set_hotControl", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::GUIUtility::TakeCapture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "TakeCapture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::GUIUtility::RemoveCapture() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "RemoveCapture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::GUIUtility::get_keyboardControl() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "get_keyboardControl", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline void UnityEngine::GUIUtility::set_keyboardControl(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "set_keyboardControl", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::GUIUtility::HasKeyFocus(int32_t controlID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "HasKeyFocus", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, controlID);
}
inline void UnityEngine::GUIUtility::ExitGUI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "ExitGUI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::GUISkin> UnityEngine::GUIUtility::GetDefaultSkin() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "GetDefaultSkin", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GUISkin>>(nullptr, ___internal_method);
}
inline void UnityEngine::GUIUtility::ProcessEvent(int32_t instanceID, ::System::IntPtr nativeEventPtr, ::by_ref<bool> result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "ProcessEvent", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instanceID, nativeEventPtr, result);
}
inline void UnityEngine::GUIUtility::EndContainer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "EndContainer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::GUIUtility::BeginGUI(int32_t skinMode, int32_t instanceID, int32_t useGUILayout) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "BeginGUI", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, skinMode, instanceID, useGUILayout);
}
inline void UnityEngine::GUIUtility::DestroyGUI(int32_t instanceID) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "DestroyGUI", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instanceID);
}
inline void UnityEngine::GUIUtility::EndGUI(int32_t layoutType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "EndGUI", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, layoutType);
}
inline bool UnityEngine::GUIUtility::EndGUIFromException(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "EndGUIFromException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, exception);
}
inline bool UnityEngine::GUIUtility::EndContainerGUIFromException(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "EndContainerGUIFromException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, exception);
}
inline void UnityEngine::GUIUtility::ResetGlobalState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "ResetGlobalState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool UnityEngine::GUIUtility::IsExitGUIException(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "IsExitGUIException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, exception);
}
inline bool UnityEngine::GUIUtility::ShouldRethrowException(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "ShouldRethrowException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, exception);
}
inline void UnityEngine::GUIUtility::CheckOnGUI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "CheckOnGUI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline float_t UnityEngine::GUIUtility::RoundToPixelGrid(float_t v) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "RoundToPixelGrid", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, v);
}
inline ::UnityEngine::Rect UnityEngine::GUIUtility::AlignRectToDevice(::UnityEngine::Rect rect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "AlignRectToDevice", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(nullptr, ___internal_method, rect);
}
inline bool UnityEngine::GUIUtility::HitTest(::UnityEngine::Rect rect, ::UnityEngine::Vector2 point, int32_t offset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(),
                                                           { "HitTest", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rect, point, offset);
}
inline bool UnityEngine::GUIUtility::HitTest(::UnityEngine::Rect rect, ::UnityEngine::Vector2 point, bool isDirectManipulationDevice) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(),
                                                           { "HitTest", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, rect, point, isDirectManipulationDevice);
}
inline void UnityEngine::GUIUtility::get_systemCopyBuffer_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "get_systemCopyBuffer_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::GUIUtility::set_systemCopyBuffer_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "set_systemCopyBuffer_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline int32_t UnityEngine::GUIUtility::Internal_GetControlID_Injected(int32_t hint, ::UnityEngine::FocusType focusType, ::by_ref<::UnityEngine::Rect> rect) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(),
                          { "Internal_GetControlID_Injected", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::FocusType>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, hint, focusType, rect);
}
inline void UnityEngine::GUIUtility::BeginContainerFromOwner_Injected(::System::IntPtr owner) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "BeginContainerFromOwner_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, owner);
}
inline void UnityEngine::GUIUtility::BeginContainer_Injected(::System::IntPtr objectGUIState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "BeginContainer_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, objectGUIState);
}
inline int32_t UnityEngine::GUIUtility::CheckForTabEvent_Injected(::System::IntPtr evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "CheckForTabEvent_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, evt);
}
inline void UnityEngine::GUIUtility::AlignRectToDevice_Injected(::by_ref<::UnityEngine::Rect> rect, ::by_ref<int32_t> widthInPixels, ::by_ref<int32_t> heightInPixels,
                                                                ::by_ref<::UnityEngine::Rect> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "AlignRectToDevice_Injected",
                                                                                               {},
                                                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                                                                 ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rect, widthInPixels, heightInPixels, ret);
}
inline void UnityEngine::GUIUtility::get_compositionString_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "get_compositionString_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::GUIUtility::set_compositionCursorPos_Injected(::by_ref<::UnityEngine::Vector2> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIUtility*>(), { "set_compositionCursorPos_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::GUIUtility::GUIUtility() {}
