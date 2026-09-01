#pragma once
// IWYU pragma private; include "UnityEngine\GUI.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__GUI_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
#include "UnityEngine/zzzz__GUISkin_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__GUI_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngineInternal/zzzz__GenericStack_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUI_WindowFunction._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUI_WindowFunction::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::GUI_WindowFunction::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b438b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI_WindowFunction*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI_WindowFunction.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUI_WindowFunction::*)(int32_t)>(&::UnityEngine::GUI_WindowFunction::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b43924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GUI_WindowFunction*>(), { ::i2c::class_of<::UnityEngine::GUI_WindowFunction*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::GUI_WindowFunction::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI_WindowFunction*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::GUI_WindowFunction::Invoke(int32_t id) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GUI_WindowFunction*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline ::UnityEngine::GUI_WindowFunction* UnityEngine::GUI_WindowFunction::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GUI_WindowFunction*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::GUI_WindowFunction::GUI_WindowFunction() {}
//  Writing Method size for method: ::UnityEngine::GUI.get_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)()>(&::UnityEngine::GUI::get_color)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b40fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "get_color", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_color
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Color)>(&::UnityEngine::GUI::set_color)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6b41084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "set_color", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_backgroundColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)()>(&::UnityEngine::GUI::get_backgroundColor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b41148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "get_backgroundColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_backgroundColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Color)>(&::UnityEngine::GUI::set_backgroundColor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6b41210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "set_backgroundColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_contentColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)()>(&::UnityEngine::GUI::get_contentColor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b412d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "get_contentColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_contentColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Color)>(&::UnityEngine::GUI::set_contentColor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6b4139c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "set_contentColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_changed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::GUI::get_changed)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b41460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "get_changed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_changed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::GUI::set_changed)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b41488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "set_changed", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::GUI::get_enabled)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b414c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "get_enabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_enabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::GUI::set_enabled)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b414ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "set_enabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_nextScrollStepTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::DateTime)>(&::UnityEngine::GUI::set_nextScrollStepTime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6b41814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "set_nextScrollStepTime", {}, { ::i2c::type_of<::System::DateTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_skin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUISkin*)>(&::UnityEngine::GUI::set_skin)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6b41874;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "set_skin", {}, { ::i2c::type_of<::UnityEngine::GUISkin*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_skin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::GUISkin> (*)()>(&::UnityEngine::GUI::get_skin)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6b41a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "get_skin", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DoSetSkin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUISkin*)>(&::UnityEngine::GUI::DoSetSkin)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6b419b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "DoSetSkin", {}, { ::i2c::type_of<::UnityEngine::GUISkin*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_matrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (*)()>(&::UnityEngine::GUI::get_matrix)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b41c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "get_matrix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_matrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Matrix4x4)>(&::UnityEngine::GUI::set_matrix)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6b41d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "set_matrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Label
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::StringW)>(&::UnityEngine::GUI::Label)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6b41dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "Label", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Label
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::Label)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6b41f40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(),
                                                { "Label", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Box
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::StringW)>(&::UnityEngine::GUI::Box)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6b42298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "Box", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.Box
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::Box)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x6b42378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(),
                                                { "Box", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.DoLabel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::DoLabel)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x6b42004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(),
                                         { "DoLabel", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.BeginGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*)>(&::UnityEngine::GUI::BeginGroup)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6b42980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(),
                                         { "BeginGroup", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.BeginGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::GUIStyle*, ::UnityEngine::Vector2)>(&::UnityEngine::GUI::BeginGroup)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x6b42a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "BeginGroup",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(),
                                                                                                         ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.EndGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUI::EndGroup)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b42e00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "EndGroup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_scrollViewStates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngineInternal::GenericStack* (*)()>(&::UnityEngine::GUI::get_scrollViewStates)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b42e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "get_scrollViewStates", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.CallWindowDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUI_WindowFunction*, int32_t, int32_t, ::UnityEngine::GUISkin*, int32_t, float_t, float_t, ::UnityEngine::GUIStyle*)>(
    &::UnityEngine::GUI::CallWindowDelegate)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x6b42ef4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(),
                                         { "CallWindowDelegate",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUISkin*>(),
                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_color_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::GUI::get_color_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b41048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "get_color_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_color_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::GUI::set_color_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b4110c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "set_color_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_backgroundColor_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::GUI::get_backgroundColor_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b411d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "get_backgroundColor_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_backgroundColor_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::GUI::set_backgroundColor_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b41298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "set_backgroundColor_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.get_contentColor_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::GUI::get_contentColor_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b41360;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "get_contentColor_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUI.set_contentColor_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Color>)>(&::UnityEngine::GUI::set_contentColor_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b41424;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "set_contentColor_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::GUI::setStaticF_s_HotTextField(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_HotTextField", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_HotTextField() {
  return ::cordl_internals::getStaticField<int32_t, "s_HotTextField", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_BoxHash(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_BoxHash", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_BoxHash() {
  return ::cordl_internals::getStaticField<int32_t, "s_BoxHash", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_ButonHash(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_ButonHash", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_ButonHash() {
  return ::cordl_internals::getStaticField<int32_t, "s_ButonHash", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_RepeatButtonHash(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_RepeatButtonHash", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_RepeatButtonHash() {
  return ::cordl_internals::getStaticField<int32_t, "s_RepeatButtonHash", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_ToggleHash(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_ToggleHash", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_ToggleHash() {
  return ::cordl_internals::getStaticField<int32_t, "s_ToggleHash", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_ButtonGridHash(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_ButtonGridHash", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_ButtonGridHash() {
  return ::cordl_internals::getStaticField<int32_t, "s_ButtonGridHash", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_SliderHash(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_SliderHash", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_SliderHash() {
  return ::cordl_internals::getStaticField<int32_t, "s_SliderHash", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_BeginGroupHash(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_BeginGroupHash", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_BeginGroupHash() {
  return ::cordl_internals::getStaticField<int32_t, "s_BeginGroupHash", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_ScrollviewHash(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_ScrollviewHash", ::UnityEngine::GUI*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::GUI::getStaticF_s_ScrollviewHash() {
  return ::cordl_internals::getStaticField<int32_t, "s_ScrollviewHash", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF__nextScrollStepTime_k__BackingField(::System::DateTime value) {
  ::cordl_internals::setStaticField<::System::DateTime, "<nextScrollStepTime>k__BackingField", ::UnityEngine::GUI*>(std::forward<::System::DateTime>(value));
}
inline ::System::DateTime UnityEngine::GUI::getStaticF__nextScrollStepTime_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::DateTime, "<nextScrollStepTime>k__BackingField", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_Skin(::UnityW<::UnityEngine::GUISkin> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::GUISkin>, "s_Skin", ::UnityEngine::GUI*>(std::forward<::UnityW<::UnityEngine::GUISkin>>(value));
}
inline ::UnityW<::UnityEngine::GUISkin> UnityEngine::GUI::getStaticF_s_Skin() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::GUISkin>, "s_Skin", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF_s_ToolTipRect(::UnityEngine::Rect value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rect, "s_ToolTipRect", ::UnityEngine::GUI*>(std::forward<::UnityEngine::Rect>(value));
}
inline ::UnityEngine::Rect UnityEngine::GUI::getStaticF_s_ToolTipRect() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rect, "s_ToolTipRect", ::UnityEngine::GUI*>();
}
inline void UnityEngine::GUI::setStaticF__scrollViewStates_k__BackingField(::UnityEngineInternal::GenericStack* value) {
  ::cordl_internals::setStaticField<::UnityEngineInternal::GenericStack*, "<scrollViewStates>k__BackingField", ::UnityEngine::GUI*>(std::forward<::UnityEngineInternal::GenericStack*>(value));
}
inline ::UnityEngineInternal::GenericStack* UnityEngine::GUI::getStaticF__scrollViewStates_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngineInternal::GenericStack*, "<scrollViewStates>k__BackingField", ::UnityEngine::GUI*>();
}
inline ::UnityEngine::Color UnityEngine::GUI::get_color() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "get_color", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::set_color(::UnityEngine::Color value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "set_color", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::GUI::get_backgroundColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "get_backgroundColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::set_backgroundColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "set_backgroundColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::GUI::get_contentColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "get_contentColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::set_contentColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "set_contentColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::GUI::get_changed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "get_changed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::set_changed(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "set_changed", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::GUI::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "get_enabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::set_enabled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "set_enabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::GUI::set_nextScrollStepTime(::System::DateTime value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "set_nextScrollStepTime", {}, { ::i2c::type_of<::System::DateTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::GUI::set_skin(::UnityEngine::GUISkin* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "set_skin", {}, { ::i2c::type_of<::UnityEngine::GUISkin*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::GUISkin> UnityEngine::GUI::get_skin() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "get_skin", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GUISkin>>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::DoSetSkin(::UnityEngine::GUISkin* newSkin) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "DoSetSkin", {}, { ::i2c::type_of<::UnityEngine::GUISkin*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, newSkin);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::GUI::get_matrix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "get_matrix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::set_matrix(::UnityEngine::Matrix4x4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "set_matrix", {}, { ::i2c::type_of<::UnityEngine::Matrix4x4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::GUI::Label(::UnityEngine::Rect position, ::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "Label", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text);
}
inline void UnityEngine::GUI::Label(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(),
                                              { "Label", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, content, style);
}
inline void UnityEngine::GUI::Box(::UnityEngine::Rect position, ::StringW text) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "Box", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, text);
}
inline void UnityEngine::GUI::Box(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(),
                                              { "Box", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, content, style);
}
inline void UnityEngine::GUI::DoLabel(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(),
                                              { "DoLabel", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, content, style);
}
inline void UnityEngine::GUI::BeginGroup(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(),
                                       { "BeginGroup", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, content, style);
}
inline void UnityEngine::GUI::BeginGroup(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, ::UnityEngine::GUIStyle* style, ::UnityEngine::Vector2 scrollOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "BeginGroup",
                                                                                                     {},
                                                                                                     { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(),
                                                                                                       ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, position, content, style, scrollOffset);
}
inline void UnityEngine::GUI::EndGroup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "EndGroup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngineInternal::GenericStack* UnityEngine::GUI::get_scrollViewStates() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "get_scrollViewStates", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngineInternal::GenericStack*>(nullptr, ___internal_method);
}
inline void UnityEngine::GUI::CallWindowDelegate(::UnityEngine::GUI_WindowFunction* func, int32_t id, int32_t instanceID, ::UnityEngine::GUISkin* _skin, int32_t forceRect, float_t width,
                                                 float_t height, ::UnityEngine::GUIStyle* style) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(),
                                              { "CallWindowDelegate",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::GUI_WindowFunction*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::GUISkin*>(),
                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, func, id, instanceID, _skin, forceRect, width, height, style);
}
inline void UnityEngine::GUI::get_color_Injected(::by_ref<::UnityEngine::Color> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "get_color_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::GUI::set_color_Injected(::by_ref<::UnityEngine::Color> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "set_color_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::GUI::get_backgroundColor_Injected(::by_ref<::UnityEngine::Color> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "get_backgroundColor_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::GUI::set_backgroundColor_Injected(::by_ref<::UnityEngine::Color> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "set_backgroundColor_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::GUI::get_contentColor_Injected(::by_ref<::UnityEngine::Color> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "get_contentColor_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::GUI::set_contentColor_Injected(::by_ref<::UnityEngine::Color> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUI*>(), { "set_contentColor_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Color>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
// Ctor Parameters []
constexpr ::UnityEngine::GUI::GUI() {}
