#pragma once
// IWYU pragma private; include "UnityEngine/GUISkin.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin_SkinChangedDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::GUISkin_SkinChangedDelegate::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x48dfcf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin_SkinChangedDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin_SkinChangedDelegate.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin_SkinChangedDelegate::*)()>(&::UnityEngine::GUISkin_SkinChangedDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x48dfd7c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin_SkinChangedDelegate*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin_SkinChangedDelegate*>::get(), 13));
    return ___internal_method;
  }
};
inline void UnityEngine::GUISkin_SkinChangedDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin_SkinChangedDelegate*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::GUISkin_SkinChangedDelegate::Invoke() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin_SkinChangedDelegate*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::GUISkin_SkinChangedDelegate* UnityEngine::GUISkin_SkinChangedDelegate::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::GUISkin_SkinChangedDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::GUISkin_SkinChangedDelegate::GUISkin_SkinChangedDelegate() {}
//  Writing Method size for method: ::UnityEngine::GUISkin._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::_ctor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x48de434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x48de4e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.CleanupRoots
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::GUISkin::CleanupRoots)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x48de568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "CleanupRoots",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_font
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Font> (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_font)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de5b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_font",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_font
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::Font*)>(&::UnityEngine::GUISkin::set_font)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x48de5bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_font", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_box
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_box)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48d8e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_box",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_box
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_box)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de6e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_box", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_label
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_label)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48d8a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_label",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_label
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_label)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de6e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_label", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_textField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_textField)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de6f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_textField",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_textField
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_textField)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de6f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_textField", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_textArea
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_textArea)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de700;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_textArea",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_textArea
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_textArea)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_textArea", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_button
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_button",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_button
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de718;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_button", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_toggle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_toggle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_toggle",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_toggle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_toggle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_toggle", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_window
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_window)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de730;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_window",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_window
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_window)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de738;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_window", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_horizontalSlider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_horizontalSlider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de740;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_horizontalSlider",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_horizontalSlider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_horizontalSlider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_horizontalSlider", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_horizontalSliderThumb
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_horizontalSliderThumb)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_horizontalSliderThumb",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_horizontalSliderThumb
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_horizontalSliderThumb)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_horizontalSliderThumb", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_horizontalSliderThumbExtent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_horizontalSliderThumbExtent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_horizontalSliderThumbExtent",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_horizontalSliderThumbExtent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(
    &::UnityEngine::GUISkin::set_horizontalSliderThumbExtent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_horizontalSliderThumbExtent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_sliderMixed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_sliderMixed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_sliderMixed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_sliderMixed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_sliderMixed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_sliderMixed", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_verticalSlider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_verticalSlider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de780;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_verticalSlider",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_verticalSlider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_verticalSlider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_verticalSlider", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_verticalSliderThumb
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_verticalSliderThumb)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de790;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_verticalSliderThumb",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_verticalSliderThumb
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_verticalSliderThumb)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_verticalSliderThumb", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_verticalSliderThumbExtent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_verticalSliderThumbExtent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de7a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_verticalSliderThumbExtent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_verticalSliderThumbExtent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_verticalSliderThumbExtent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de7a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_verticalSliderThumbExtent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_horizontalScrollbar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_horizontalScrollbar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de7b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_horizontalScrollbar",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_horizontalScrollbar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_horizontalScrollbar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de7b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_horizontalScrollbar", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_horizontalScrollbarThumb
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_horizontalScrollbarThumb)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de7c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_horizontalScrollbarThumb",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_horizontalScrollbarThumb
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_horizontalScrollbarThumb)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de7c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_horizontalScrollbarThumb", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_horizontalScrollbarLeftButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_horizontalScrollbarLeftButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de7d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_horizontalScrollbarLeftButton",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_horizontalScrollbarLeftButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(
    &::UnityEngine::GUISkin::set_horizontalScrollbarLeftButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de7d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_horizontalScrollbarLeftButton", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_horizontalScrollbarRightButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(
    &::UnityEngine::GUISkin::get_horizontalScrollbarRightButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de7e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_horizontalScrollbarRightButton",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_horizontalScrollbarRightButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(
    &::UnityEngine::GUISkin::set_horizontalScrollbarRightButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de7e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_horizontalScrollbarRightButton", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_verticalScrollbar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_verticalScrollbar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de7f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_verticalScrollbar",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_verticalScrollbar
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_verticalScrollbar)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de7f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_verticalScrollbar", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_verticalScrollbarThumb
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_verticalScrollbarThumb)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_verticalScrollbarThumb",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_verticalScrollbarThumb
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_verticalScrollbarThumb)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_verticalScrollbarThumb", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_verticalScrollbarUpButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_verticalScrollbarUpButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de810;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_verticalScrollbarUpButton",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_verticalScrollbarUpButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_verticalScrollbarUpButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_verticalScrollbarUpButton", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_verticalScrollbarDownButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_verticalScrollbarDownButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_verticalScrollbarDownButton",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_verticalScrollbarDownButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(
    &::UnityEngine::GUISkin::set_verticalScrollbarDownButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_verticalScrollbarDownButton", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_scrollView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_scrollView)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de830;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_scrollView",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_scrollView
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUISkin::set_scrollView)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_scrollView", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_customStyles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::UnityEngine::GUIStyle*, ::Array<::UnityEngine::GUIStyle*>*> (::UnityEngine::GUISkin::*)()>(
    &::UnityEngine::GUISkin::get_customStyles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de840;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_customStyles",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.set_customStyles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)(::ArrayW<::UnityEngine::GUIStyle*, ::Array<::UnityEngine::GUIStyle*>*>)>(
    &::UnityEngine::GUISkin::set_customStyles)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_customStyles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GUIStyle*, ::Array<::UnityEngine::GUIStyle*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_settings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUISettings* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::get_settings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x48de850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_settings",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.get_error
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (*)()>(&::UnityEngine::GUISkin::get_error)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x48de858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_error",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.Apply
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::Apply)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x48de4ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "Apply",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.BuildStyleCache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::BuildStyleCache)> {
  constexpr static std::size_t size = 0xed0;
  constexpr static std::size_t addrs = 0x48de98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "BuildStyleCache",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.GetStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)(::StringW)>(&::UnityEngine::GUISkin::GetStyle)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x48df99c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "GetStyle", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.FindStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUIStyle* (::UnityEngine::GUISkin::*)(::StringW)>(&::UnityEngine::GUISkin::FindStyle)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x48dfbac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "FindStyle", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.MakeCurrent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::MakeCurrent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x48d86a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "MakeCurrent",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUISkin.GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::UnityEngine::GUISkin::*)()>(&::UnityEngine::GUISkin::GetEnumerator)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x48dfc34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "GetEnumerator",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Font)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_box)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_button)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_toggle)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_label)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_textField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_textArea)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_window)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_horizontalSlider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_horizontalSliderThumb)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_horizontalSliderThumbExtent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_verticalSlider)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_verticalSliderThumb)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_verticalSliderThumbExtent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_SliderMixed)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_horizontalScrollbar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_horizontalScrollbarThumb)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_horizontalScrollbarLeftButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_horizontalScrollbarRightButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_verticalScrollbar)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_verticalScrollbarThumb)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_verticalScrollbarUpButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_verticalScrollbarDownButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ScrollView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::GUIStyle*, ::Array<::UnityEngine::GUIStyle*>*>& UnityEngine::GUISkin::__cordl_internal_get_m_CustomStyles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CustomStyles;
}
constexpr ::ArrayW<::UnityEngine::GUIStyle*, ::Array<::UnityEngine::GUIStyle*>*> const& UnityEngine::GUISkin::__cordl_internal_get_m_CustomStyles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CustomStyles;
}
constexpr void UnityEngine::GUISkin::__cordl_internal_set_m_CustomStyles(::ArrayW<::UnityEngine::GUIStyle*, ::Array<::UnityEngine::GUIStyle*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CustomStyles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Styles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::GUISkin::setStaticF_ms_Error(::UnityEngine::GUIStyle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::GUIStyle*, "ms_Error", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get>(
      std::forward<::UnityEngine::GUIStyle*>(value));
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::getStaticF_ms_Error() {
  return ::cordl_internals::getStaticField<::UnityEngine::GUIStyle*, "ms_Error", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get>();
}
inline void UnityEngine::GUISkin::setStaticF_m_SkinChanged(::UnityEngine::GUISkin_SkinChangedDelegate* value) {
  ::cordl_internals::setStaticField<::UnityEngine::GUISkin_SkinChangedDelegate*, "m_SkinChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get>(
      std::forward<::UnityEngine::GUISkin_SkinChangedDelegate*>(value));
}
inline ::UnityEngine::GUISkin_SkinChangedDelegate* UnityEngine::GUISkin::getStaticF_m_SkinChanged() {
  return ::cordl_internals::getStaticField<::UnityEngine::GUISkin_SkinChangedDelegate*, "m_SkinChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get>();
}
inline void UnityEngine::GUISkin::setStaticF_current(::UnityW<::UnityEngine::GUISkin> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::GUISkin>, "current", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get>(
      std::forward<::UnityW<::UnityEngine::GUISkin>>(value));
}
inline ::UnityW<::UnityEngine::GUISkin> UnityEngine::GUISkin::getStaticF_current() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::GUISkin>, "current", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get>();
}
inline void UnityEngine::GUISkin::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::CleanupRoots() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "CleanupRoots",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Font> UnityEngine::GUISkin::get_font() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_font",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Font>, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_font(::UnityEngine::Font* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_font", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Font*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_box() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_box",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_box(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_box", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_label() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_label",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_label(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_label", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_textField() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_textField",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_textField(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_textField", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_textArea() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_textArea",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_textArea(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_textArea", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_button() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_button",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_button(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_button", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_toggle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_toggle",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_toggle(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_toggle", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_window() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_window",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_window(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_window", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_horizontalSlider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_horizontalSlider",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_horizontalSlider(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_horizontalSlider", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_horizontalSliderThumb() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_horizontalSliderThumb",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_horizontalSliderThumb(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_horizontalSliderThumb", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_horizontalSliderThumbExtent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_horizontalSliderThumbExtent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_horizontalSliderThumbExtent(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_horizontalSliderThumbExtent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_sliderMixed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_sliderMixed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_sliderMixed(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_sliderMixed", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_verticalSlider() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_verticalSlider",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_verticalSlider(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_verticalSlider", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_verticalSliderThumb() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_verticalSliderThumb",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_verticalSliderThumb(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_verticalSliderThumb", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_verticalSliderThumbExtent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_verticalSliderThumbExtent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_verticalSliderThumbExtent(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_verticalSliderThumbExtent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_horizontalScrollbar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_horizontalScrollbar",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_horizontalScrollbar(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_horizontalScrollbar", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_horizontalScrollbarThumb() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_horizontalScrollbarThumb",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_horizontalScrollbarThumb(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_horizontalScrollbarThumb", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_horizontalScrollbarLeftButton() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_horizontalScrollbarLeftButton",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_horizontalScrollbarLeftButton(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_horizontalScrollbarLeftButton", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_horizontalScrollbarRightButton() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_horizontalScrollbarRightButton",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_horizontalScrollbarRightButton(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_horizontalScrollbarRightButton", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_verticalScrollbar() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_verticalScrollbar",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_verticalScrollbar(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_verticalScrollbar", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_verticalScrollbarThumb() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_verticalScrollbarThumb",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_verticalScrollbarThumb(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_verticalScrollbarThumb", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_verticalScrollbarUpButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_verticalScrollbarUpButton",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_verticalScrollbarUpButton(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_verticalScrollbarUpButton", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_verticalScrollbarDownButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_verticalScrollbarDownButton",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_verticalScrollbarDownButton(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_verticalScrollbarDownButton", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_scrollView() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_scrollView",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_scrollView(::UnityEngine::GUIStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_scrollView", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GUIStyle*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::GUIStyle*, ::Array<::UnityEngine::GUIStyle*>*> UnityEngine::GUISkin::get_customStyles() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_customStyles",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::GUIStyle*, ::Array<::UnityEngine::GUIStyle*>*>, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::set_customStyles(::ArrayW<::UnityEngine::GUIStyle*, ::Array<::UnityEngine::GUIStyle*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "set_customStyles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::GUIStyle*, ::Array<::UnityEngine::GUIStyle*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::GUISettings* UnityEngine::GUISkin::get_settings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_settings",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUISettings*, false>(this, ___internal_method);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::get_error() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "get_error",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::GUISkin::Apply() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "Apply",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::GUISkin::BuildStyleCache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "BuildStyleCache",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::GetStyle(::StringW styleName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "GetStyle", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method, styleName);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUISkin::FindStyle(::StringW styleName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "FindStyle", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*, false>(this, ___internal_method, styleName);
}
inline void UnityEngine::GUISkin::MakeCurrent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "MakeCurrent",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* UnityEngine::GUISkin::GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::GUISkin*>::get(), "GetEnumerator",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline ::UnityEngine::GUISkin* UnityEngine::GUISkin::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::GUISkin*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::GUISkin::GUISkin() {}
