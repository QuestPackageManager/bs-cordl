#pragma once
// IWYU pragma private; include "UnityEngine/GUISkin.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "UnityEngine/zzzz__GUIStyle_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/zzzz__GUISkin_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__GUISettings_def.hpp"
#include "UnityEngine/zzzz__GUISkin_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUISkin_SkinChangedDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin_SkinChangedDelegate::*)(::System::Object*, ::System::IntPtr)>(&::UnityEngine::GUISkin_SkinChangedDelegate::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6b45e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin_SkinChangedDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin_SkinChangedDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin_SkinChangedDelegate::*)()>(&::UnityEngine::GUISkin_SkinChangedDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b45e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin_SkinChangedDelegate*>(), { ::i2c::class_of<::UnityEngine::GUISkin_SkinChangedDelegate*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::GUISkin_SkinChangedDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin_SkinChangedDelegate*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::GUISkin_SkinChangedDelegate::Invoke() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GUISkin_SkinChangedDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::GUISkin_SkinChangedDelegate* UnityEngine::GUISkin_SkinChangedDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GUISkin_SkinChangedDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::GUISkin_SkinChangedDelegate::GUISkin_SkinChangedDelegate() {}
//  Writing Method size for method: ::UnityEngine::GUISkin._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6b44700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b447a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.CleanupRoots
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUISkin::CleanupRoots)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6b44830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "CleanupRoots", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_font
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Font> (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_font)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44880;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_font", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_font
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::Font*)>(&::UnityEngine::GUISkin::set_font)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6b44888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_font", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_box
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_box)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b3ede8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_box", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_box
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_box)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44a04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_box", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_label
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_label)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b3e9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_label", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_label
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_label)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_label", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_textField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_textField)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44a14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_textField", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_textField
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_textField)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_textField", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_textArea
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_textArea)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44a24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_textArea", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_textArea
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_textArea)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_textArea", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_button
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44a34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_button", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_button
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44a3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_button", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_toggle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_toggle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_toggle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_toggle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_toggle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44a4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_toggle", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_window
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_window)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_window", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_window
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_window)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_window", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_horizontalSlider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_horizontalSlider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_horizontalSlider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_horizontalSlider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_horizontalSlider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_horizontalSlider", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_horizontalSliderThumb
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_horizontalSliderThumb)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44a74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_horizontalSliderThumb", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_horizontalSliderThumb
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_horizontalSliderThumb)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_horizontalSliderThumb", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_horizontalSliderThumbExtent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_horizontalSliderThumbExtent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_horizontalSliderThumbExtent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_horizontalSliderThumbExtent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_horizontalSliderThumbExtent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_horizontalSliderThumbExtent", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_sliderMixed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_sliderMixed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_sliderMixed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_sliderMixed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_sliderMixed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_sliderMixed", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_verticalSlider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_verticalSlider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_verticalSlider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_verticalSlider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_verticalSlider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44aac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_verticalSlider", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_verticalSliderThumb
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_verticalSliderThumb)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_verticalSliderThumb", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_verticalSliderThumb
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_verticalSliderThumb)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_verticalSliderThumb", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_verticalSliderThumbExtent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_verticalSliderThumbExtent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44ac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_verticalSliderThumbExtent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_verticalSliderThumbExtent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_verticalSliderThumbExtent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_verticalSliderThumbExtent", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_horizontalScrollbar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_horizontalScrollbar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44ad4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_horizontalScrollbar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_horizontalScrollbar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_horizontalScrollbar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44adc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_horizontalScrollbar", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_horizontalScrollbarThumb
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_horizontalScrollbarThumb)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44ae4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_horizontalScrollbarThumb", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_horizontalScrollbarThumb
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_horizontalScrollbarThumb)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44aec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_horizontalScrollbarThumb", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_horizontalScrollbarLeftButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_horizontalScrollbarLeftButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_horizontalScrollbarLeftButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_horizontalScrollbarLeftButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_horizontalScrollbarLeftButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_horizontalScrollbarLeftButton", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_horizontalScrollbarRightButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_horizontalScrollbarRightButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44b04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_horizontalScrollbarRightButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_horizontalScrollbarRightButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_horizontalScrollbarRightButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44b0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_horizontalScrollbarRightButton", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_verticalScrollbar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_verticalScrollbar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_verticalScrollbar", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_verticalScrollbar
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_verticalScrollbar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_verticalScrollbar", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_verticalScrollbarThumb
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_verticalScrollbarThumb)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44b24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_verticalScrollbarThumb", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_verticalScrollbarThumb
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_verticalScrollbarThumb)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_verticalScrollbarThumb", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_verticalScrollbarUpButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_verticalScrollbarUpButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_verticalScrollbarUpButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_verticalScrollbarUpButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_verticalScrollbarUpButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_verticalScrollbarUpButton", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_verticalScrollbarDownButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_verticalScrollbarDownButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_verticalScrollbarDownButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_verticalScrollbarDownButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_verticalScrollbarDownButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_verticalScrollbarDownButton", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_scrollView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_scrollView)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44b54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_scrollView", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_scrollView
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_scrollView)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44b5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_scrollView", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_customStyles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::GUIStyle*> (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_customStyles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_customStyles", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_customStyles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)(::ArrayW<::UnityEngine::GUIStyle*>)>(&::UnityEngine::GUISkin::set_customStyles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_customStyles", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::GUIStyle*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_settings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUISettings* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44b74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_settings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_error
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (*)()>(&::UnityEngine::GUISkin::get_error)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6b44b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_error", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.Apply
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::Apply)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6b447ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "Apply", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.BuildStyleCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::BuildStyleCache)> {
  constexpr static std::size_t size = 0xd08;
  constexpr static std::size_t addrs = 0x6b44c4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "BuildStyleCache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.GetStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)(::StringW)>(&::UnityEngine::GUISkin::GetStyle)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6b45ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "GetStyle", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.FindStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)(::StringW)>(&::UnityEngine::GUISkin::FindStyle)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b45cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "FindStyle", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.MakeCurrent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::MakeCurrent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6b3e63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "MakeCurrent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.GetEnumerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::GetEnumerator)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6b45d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "GetEnumerator", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Font>& UnityEngine::GUISkin::__cordl_internal_get_m_Font() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Font;
}
constexpr ::UnityW<::UnityEngine::Font> const& UnityEngine::GUISkin::__cordl_internal_get_m_Font() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Font;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_Font(::UnityW<::UnityEngine::Font> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Font = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUISkin::__cordl_internal_get_m_box() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_box;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUISkin::__cordl_internal_get_m_box() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_box;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_box(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_box = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUISkin::__cordl_internal_get_m_button() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_button;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUISkin::__cordl_internal_get_m_button() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_button;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_button(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_button = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUISkin::__cordl_internal_get_m_toggle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_toggle;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUISkin::__cordl_internal_get_m_toggle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_toggle;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_toggle(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_toggle = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUISkin::__cordl_internal_get_m_label() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_label;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUISkin::__cordl_internal_get_m_label() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_label;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_label(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_label = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUISkin::__cordl_internal_get_m_textField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_textField;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUISkin::__cordl_internal_get_m_textField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_textField;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_textField(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_textField = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUISkin::__cordl_internal_get_m_textArea() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_textArea;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUISkin::__cordl_internal_get_m_textArea() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_textArea;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_textArea(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_textArea = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUISkin::__cordl_internal_get_m_window() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_window;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUISkin::__cordl_internal_get_m_window() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_window;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_window(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_window = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUISkin::__cordl_internal_get_m_horizontalSlider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_horizontalSlider;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUISkin::__cordl_internal_get_m_horizontalSlider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_horizontalSlider;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_horizontalSlider(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_horizontalSlider = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUISkin::__cordl_internal_get_m_horizontalSliderThumb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_horizontalSliderThumb;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUISkin::__cordl_internal_get_m_horizontalSliderThumb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_horizontalSliderThumb;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_horizontalSliderThumb(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_horizontalSliderThumb = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUISkin::__cordl_internal_get_m_horizontalSliderThumbExtent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_horizontalSliderThumbExtent;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUISkin::__cordl_internal_get_m_horizontalSliderThumbExtent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_horizontalSliderThumbExtent;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_horizontalSliderThumbExtent(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_horizontalSliderThumbExtent = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUISkin::__cordl_internal_get_m_verticalSlider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_verticalSlider;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUISkin::__cordl_internal_get_m_verticalSlider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_verticalSlider;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_verticalSlider(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_verticalSlider = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUISkin::__cordl_internal_get_m_verticalSliderThumb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_verticalSliderThumb;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUISkin::__cordl_internal_get_m_verticalSliderThumb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_verticalSliderThumb;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_verticalSliderThumb(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_verticalSliderThumb = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUISkin::__cordl_internal_get_m_verticalSliderThumbExtent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_verticalSliderThumbExtent;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUISkin::__cordl_internal_get_m_verticalSliderThumbExtent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_verticalSliderThumbExtent;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_verticalSliderThumbExtent(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_verticalSliderThumbExtent = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUISkin::__cordl_internal_get_m_SliderMixed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SliderMixed;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUISkin::__cordl_internal_get_m_SliderMixed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SliderMixed;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_SliderMixed(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SliderMixed = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUISkin::__cordl_internal_get_m_horizontalScrollbar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_horizontalScrollbar;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUISkin::__cordl_internal_get_m_horizontalScrollbar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_horizontalScrollbar;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_horizontalScrollbar(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_horizontalScrollbar = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUISkin::__cordl_internal_get_m_horizontalScrollbarThumb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_horizontalScrollbarThumb;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUISkin::__cordl_internal_get_m_horizontalScrollbarThumb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_horizontalScrollbarThumb;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_horizontalScrollbarThumb(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_horizontalScrollbarThumb = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUISkin::__cordl_internal_get_m_horizontalScrollbarLeftButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_horizontalScrollbarLeftButton;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUISkin::__cordl_internal_get_m_horizontalScrollbarLeftButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_horizontalScrollbarLeftButton;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_horizontalScrollbarLeftButton(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_horizontalScrollbarLeftButton = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUISkin::__cordl_internal_get_m_horizontalScrollbarRightButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_horizontalScrollbarRightButton;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUISkin::__cordl_internal_get_m_horizontalScrollbarRightButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_horizontalScrollbarRightButton;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_horizontalScrollbarRightButton(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_horizontalScrollbarRightButton = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUISkin::__cordl_internal_get_m_verticalScrollbar() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_verticalScrollbar;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUISkin::__cordl_internal_get_m_verticalScrollbar() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_verticalScrollbar;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_verticalScrollbar(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_verticalScrollbar = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUISkin::__cordl_internal_get_m_verticalScrollbarThumb() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_verticalScrollbarThumb;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUISkin::__cordl_internal_get_m_verticalScrollbarThumb() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_verticalScrollbarThumb;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_verticalScrollbarThumb(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_verticalScrollbarThumb = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUISkin::__cordl_internal_get_m_verticalScrollbarUpButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_verticalScrollbarUpButton;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUISkin::__cordl_internal_get_m_verticalScrollbarUpButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_verticalScrollbarUpButton;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_verticalScrollbarUpButton(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_verticalScrollbarUpButton = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUISkin::__cordl_internal_get_m_verticalScrollbarDownButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_verticalScrollbarDownButton;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUISkin::__cordl_internal_get_m_verticalScrollbarDownButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_verticalScrollbarDownButton;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_verticalScrollbarDownButton(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_verticalScrollbarDownButton = value;
}
constexpr ::UnityEngine::GUIStyle*& UnityEngine::GUISkin::__cordl_internal_get_m_ScrollView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollView;
}
constexpr ::UnityEngine::GUIStyle* const& UnityEngine::GUISkin::__cordl_internal_get_m_ScrollView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScrollView;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_ScrollView(::UnityEngine::GUIStyle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScrollView = value;
}
constexpr ::ArrayW<::UnityEngine::GUIStyle*>& UnityEngine::GUISkin::__cordl_internal_get_m_CustomStyles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CustomStyles;
}
constexpr ::ArrayW<::UnityEngine::GUIStyle*> const& UnityEngine::GUISkin::__cordl_internal_get_m_CustomStyles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CustomStyles;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_CustomStyles(::ArrayW<::UnityEngine::GUIStyle*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CustomStyles = value;
}
constexpr ::UnityEngine::GUISettings*& UnityEngine::GUISkin::__cordl_internal_get_m_Settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr ::UnityEngine::GUISettings* const& UnityEngine::GUISkin::__cordl_internal_get_m_Settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Settings;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_Settings(::UnityEngine::GUISettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Settings = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::GUIStyle*>*& UnityEngine::GUISkin::__cordl_internal_get_m_Styles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Styles;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::GUIStyle*>* const& UnityEngine::GUISkin::__cordl_internal_get_m_Styles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Styles;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_Styles(::System::Collections::Generic::Dictionary_2<::StringW, ::UnityEngine::GUIStyle*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Styles = value;
}
inline void UnityEngine::GUISkin::setStaticF_ms_Error(::UnityEngine::GUIStyle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::GUIStyle*, "ms_Error", ::UnityEngine::GUISkin*>(std::forward<::UnityEngine::GUIStyle*>(value));
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::getStaticF_ms_Error() {
  return ::cordl_internals::getStaticField<::UnityEngine::GUIStyle*, "ms_Error", ::UnityEngine::GUISkin*>();
}
inline void UnityEngine::GUISkin::setStaticF_m_SkinChanged(::UnityEngine::GUISkin_SkinChangedDelegate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::GUISkin_SkinChangedDelegate*, "m_SkinChanged", ::UnityEngine::GUISkin*>(std::forward<::UnityEngine::GUISkin_SkinChangedDelegate*>(value));
}
inline ::UnityEngine::GUISkin_SkinChangedDelegate* UnityEngine::GUISkin::getStaticF_m_SkinChanged() {
  return ::cordl_internals::getStaticField<::UnityEngine::GUISkin_SkinChangedDelegate*, "m_SkinChanged", ::UnityEngine::GUISkin*>();
}
inline void UnityEngine::GUISkin::setStaticF_current(::UnityW<::UnityEngine::GUISkin> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::GUISkin>, "current", ::UnityEngine::GUISkin*>(std::forward<::UnityW<::UnityEngine::GUISkin>>(value));
}
inline ::UnityW<::UnityEngine::GUISkin> UnityEngine::GUISkin::getStaticF_current() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::GUISkin>, "current", ::UnityEngine::GUISkin*>();
}
inline void UnityEngine::GUISkin::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::CleanupRoots() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "CleanupRoots", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Font> UnityEngine::GUISkin::get_font() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_font", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Font>>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_font(::UnityEngine::Font* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_font", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_box() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_box", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_box(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_box", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_label() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_label", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_label(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_label", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_textField() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_textField", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_textField(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_textField", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_textArea() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_textArea", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_textArea(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_textArea", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_button() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_button", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_button(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_button", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_toggle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_toggle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_toggle(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_toggle", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_window() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_window", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_window(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_window", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_horizontalSlider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_horizontalSlider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_horizontalSlider(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_horizontalSlider", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_horizontalSliderThumb() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_horizontalSliderThumb", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_horizontalSliderThumb(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_horizontalSliderThumb", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_horizontalSliderThumbExtent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_horizontalSliderThumbExtent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_horizontalSliderThumbExtent(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_horizontalSliderThumbExtent", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_sliderMixed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_sliderMixed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_sliderMixed(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_sliderMixed", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_verticalSlider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_verticalSlider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_verticalSlider(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_verticalSlider", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_verticalSliderThumb() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_verticalSliderThumb", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_verticalSliderThumb(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_verticalSliderThumb", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_verticalSliderThumbExtent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_verticalSliderThumbExtent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_verticalSliderThumbExtent(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_verticalSliderThumbExtent", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_horizontalScrollbar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_horizontalScrollbar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_horizontalScrollbar(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_horizontalScrollbar", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_horizontalScrollbarThumb() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_horizontalScrollbarThumb", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_horizontalScrollbarThumb(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_horizontalScrollbarThumb", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_horizontalScrollbarLeftButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_horizontalScrollbarLeftButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_horizontalScrollbarLeftButton(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_horizontalScrollbarLeftButton", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_horizontalScrollbarRightButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_horizontalScrollbarRightButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_horizontalScrollbarRightButton(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_horizontalScrollbarRightButton", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_verticalScrollbar() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_verticalScrollbar", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_verticalScrollbar(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_verticalScrollbar", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_verticalScrollbarThumb() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_verticalScrollbarThumb", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_verticalScrollbarThumb(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_verticalScrollbarThumb", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_verticalScrollbarUpButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_verticalScrollbarUpButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_verticalScrollbarUpButton(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_verticalScrollbarUpButton", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_verticalScrollbarDownButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_verticalScrollbarDownButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_verticalScrollbarDownButton(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_verticalScrollbarDownButton", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_scrollView() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_scrollView", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_scrollView(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_scrollView", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::GUIStyle*> UnityEngine::GUISkin::get_customStyles() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_customStyles", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::GUIStyle*>>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_customStyles(::ArrayW<::UnityEngine::GUIStyle*> value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "set_customStyles", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::GUIStyle*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUISettings* UnityEngine::GUISkin::get_settings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_settings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUISettings*>(this, ___internal_method);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_error() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "get_error", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(nullptr, ___internal_method);
}
inline void UnityEngine::GUISkin::Apply() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "Apply", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::BuildStyleCache() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "BuildStyleCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::GetStyle(::StringW styleName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "GetStyle", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method, styleName);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::FindStyle(::StringW styleName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "FindStyle", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(this, ___internal_method, styleName);
}
inline void UnityEngine::GUISkin::MakeCurrent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "MakeCurrent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::GUISkin::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUISkin*>(), { "GetEnumerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline ::UnityEngine::GUISkin* UnityEngine::GUISkin::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GUISkin*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::GUISkin::GUISkin() {}
