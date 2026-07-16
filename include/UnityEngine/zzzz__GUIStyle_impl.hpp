#pragma once
// IWYU pragma private; include "UnityEngine/GUIStyle.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/TextCore/Text/zzzz__MeshInfoBindings_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__GUIContent_def.hpp"
#include "UnityEngine/zzzz__GUIStyleState_def.hpp"
#include "UnityEngine/zzzz__GUIStyle_def.hpp"
#include "UnityEngine/zzzz__ImagePosition_def.hpp"
#include "UnityEngine/zzzz__RectOffset_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__TextClipping_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::GUIStyle_BindingsMarshaller.ConvertToNative
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUIStyle_BindingsMarshaller::ConvertToNative)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b48b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle_BindingsMarshaller*>(), { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
inline ::System::IntPtr UnityEngine::GUIStyle_BindingsMarshaller::ConvertToNative(::UnityEngine::GUIStyle* guiStyle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle_BindingsMarshaller*>(), { "ConvertToNative", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, guiStyle);
}
// Ctor Parameters []
constexpr ::UnityEngine::GUIStyle_BindingsMarshaller::GUIStyle_BindingsMarshaller() {}
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_rawName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::GUIStyle::*)()>(&::UnityEngine::GUIStyle::get_rawName)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x6b46098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_rawName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.set_rawName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIStyle::*)(::StringW)>(&::UnityEngine::GUIStyle::set_rawName)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x6b46224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "set_rawName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_font
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Font> (::UnityEngine::GUIStyle::*)()>(&::UnityEngine::GUIStyle::get_font)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6b463e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_font", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_imagePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ImagePosition (::UnityEngine::GUIStyle::*)()>(&::UnityEngine::GUIStyle::get_imagePosition)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b46584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_imagePosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_alignment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextAnchor (::UnityEngine::GUIStyle::*)()>(&::UnityEngine::GUIStyle::get_alignment)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b46654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_alignment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.set_alignment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIStyle::*)(::UnityEngine::TextAnchor)>(&::UnityEngine::GUIStyle::set_alignment)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b46724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "set_alignment", {}, { ::i2c::type_of<::UnityEngine::TextAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_wordWrap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::GUIStyle::*)()>(&::UnityEngine::GUIStyle::get_wordWrap)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b4680c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_wordWrap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_clipping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextClipping (::UnityEngine::GUIStyle::*)()>(&::UnityEngine::GUIStyle::get_clipping)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b468dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_clipping", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_contentOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::GUIStyle::*)()>(&::UnityEngine::GUIStyle::get_contentOffset)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6b469ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_contentOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_fixedWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::GUIStyle::*)()>(&::UnityEngine::GUIStyle::get_fixedWidth)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b46a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_fixedWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_fixedHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::GUIStyle::*)()>(&::UnityEngine::GUIStyle::get_fixedHeight)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b46b6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_fixedHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_stretchWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::GUIStyle::*)()>(&::UnityEngine::GUIStyle::get_stretchWidth)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b46c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_stretchWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.set_stretchWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIStyle::*)(bool)>(&::UnityEngine::GUIStyle::set_stretchWidth)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b44228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "set_stretchWidth", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_stretchHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::GUIStyle::*)()>(&::UnityEngine::GUIStyle::get_stretchHeight)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b46d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_stretchHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.set_stretchHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIStyle::*)(bool)>(&::UnityEngine::GUIStyle::set_stretchHeight)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b45978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "set_stretchHeight", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_fontSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::GUIStyle::*)()>(&::UnityEngine::GUIStyle::get_fontSize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b46e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_fontSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_fontStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::FontStyle (::UnityEngine::GUIStyle::*)()>(&::UnityEngine::GUIStyle::get_fontStyle)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b46f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_fontStyle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_richText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::GUIStyle::*)()>(&::UnityEngine::GUIStyle::get_richText)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6b47004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_richText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.Internal_Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::UnityEngine::GUIStyle*)>(&::UnityEngine::GUIStyle::Internal_Create)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b470d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "Internal_Create", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.Internal_Destroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::GUIStyle::Internal_Destroy)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b47110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "Internal_Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.GetStyleStatePtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::GUIStyle::*)(int32_t)>(&::UnityEngine::GUIStyle::GetStyleStatePtr)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b4714c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "GetStyleStatePtr", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.GetRectOffsetPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::UnityEngine::GUIStyle::*)(int32_t)>(&::UnityEngine::GUIStyle::GetRectOffsetPtr)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6b47234;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "GetRectOffsetPtr", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.Internal_Draw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIStyle::*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, bool, bool, bool, bool)>(
    &::UnityEngine::GUIStyle::Internal_Draw)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6b4731c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "Internal_Draw",
                                                                                               {},
                                                                                               { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(),
                                                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.Internal_Draw2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIStyle::*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, int32_t, bool)>(&::UnityEngine::GUIStyle::Internal_Draw2)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6b4748c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                            { "Internal_Draw2", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.Internal_CalcSizeWithConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::GUIStyle::*)(::UnityEngine::GUIContent*, ::UnityEngine::Vector2)>(
    &::UnityEngine::GUIStyle::Internal_CalcSizeWithConstraints)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6b475cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                                                             { "Internal_CalcSizeWithConstraints", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.Internal_CalcHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::GUIStyle::*)(::UnityEngine::GUIContent*, float_t)>(&::UnityEngine::GUIStyle::Internal_CalcHeight)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6b476ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "Internal_CalcHeight", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.Internal_CalcMinMaxWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::GUIStyle::*)(::UnityEngine::GUIContent*)>(&::UnityEngine::GUIStyle::Internal_CalcMinMaxWidth)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6b477f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "Internal_CalcMinMaxWidth", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.Internal_GetTextRectOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::GUIStyle::*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, ::UnityEngine::Vector2)>(
    &::UnityEngine::GUIStyle::Internal_GetTextRectOffset)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6b478fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                            { "Internal_GetTextRectOffset", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.SetMouseTooltip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::Rect)>(&::UnityEngine::GUIStyle::SetMouseTooltip)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6b3f2a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "SetMouseTooltip", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.IsTooltipActive
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::UnityEngine::GUIStyle::IsTooltipActive)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6b3f144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "IsTooltipActive", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.SetDefaultFont
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Font*)>(&::UnityEngine::GUIStyle::SetDefaultFont)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6b4495c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "SetDefaultFont", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.GetDefaultFont
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Font> (*)()>(&::UnityEngine::GUIStyle::GetDefaultFont)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6b47af4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "GetDefaultFont", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.Internal_DestroyTextGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::GUIStyle::Internal_DestroyTextGenerator)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b47c58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "Internal_DestroyTextGenerator", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIStyle::*)()>(&::UnityEngine::GUIStyle::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b441a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIStyle::*)()>(&::UnityEngine::GUIStyle::Finalize)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6b47c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { ::i2c::class_of<::UnityEngine::GUIStyle*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::GUIStyle::*)()>(&::UnityEngine::GUIStyle::get_name)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6b45954;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.set_name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIStyle::*)(::StringW)>(&::UnityEngine::GUIStyle::set_name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b44c44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_normal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyleState* (::UnityEngine::GUIStyle::*)()>(&::UnityEngine::GUIStyle::get_normal)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6b45a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_normal", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_margin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RectOffset* (::UnityEngine::GUIStyle::*)()>(&::UnityEngine::GUIStyle::get_margin)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b47d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_margin", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_padding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RectOffset* (::UnityEngine::GUIStyle::*)()>(&::UnityEngine::GUIStyle::get_padding)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6b47dc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_padding", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_lineHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::GUIStyle::*)()>(&::UnityEngine::GUIStyle::get_lineHeight)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6b47e30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_lineHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.Draw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIStyle::*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, bool, bool, bool, bool)>(&::UnityEngine::GUIStyle::Draw)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b3f0f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "Draw",
                                                                                               {},
                                                                                               { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(),
                                                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.Draw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIStyle::*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, int32_t)>(&::UnityEngine::GUIStyle::Draw)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6b3f824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                                                             { "Draw", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.Draw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIStyle::*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, int32_t, bool, bool)>(&::UnityEngine::GUIStyle::Draw)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6b3f01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::GUIStyle*>(),
            { "Draw", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.Draw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIStyle::*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, int32_t, bool, bool, bool, bool)>(
    &::UnityEngine::GUIStyle::Draw)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6b47ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "Draw",
                                                                           {},
                                                                           { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<int32_t>(),
                                                                             ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_none
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUIStyle* (*)()>(&::UnityEngine::GUIStyle::get_none)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6b3f798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_none", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.GetCursorPixelPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::GUIStyle::*)(::UnityEngine::Rect, ::UnityEngine::GUIContent*, int32_t)>(
    &::UnityEngine::GUIStyle::GetCursorPixelPosition)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6b48148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                                                { "GetCursorPixelPosition", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.CalcSizeWithConstraints
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::GUIStyle::*)(::UnityEngine::GUIContent*, ::UnityEngine::Vector2)>(
    &::UnityEngine::GUIStyle::CalcSizeWithConstraints)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b43f04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                                                             { "CalcSizeWithConstraints", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.CalcHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::GUIStyle::*)(::UnityEngine::GUIContent*, float_t)>(&::UnityEngine::GUIStyle::CalcHeight)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6b48428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "CalcHeight", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.GetPreferredSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::GUIStyle::*)(::StringW, ::UnityEngine::Rect)>(&::UnityEngine::GUIStyle::GetPreferredSize)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x6b4842c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "GetPreferredSize", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_isHeightDependantOnWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::GUIStyle::*)()>(&::UnityEngine::GUIStyle::get_isHeightDependantOnWidth)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6b43de8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_isHeightDependantOnWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.CalcMinMaxWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::GUIStyle::*)(::UnityEngine::GUIContent*, ::by_ref<float_t>, ::by_ref<float_t>)>(
    &::UnityEngine::GUIStyle::CalcMinMaxWidth)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b48530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                                         { "CalcMinMaxWidth", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::GUIStyle::*)()>(&::UnityEngine::GUIStyle::ToString)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6b48558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { ::i2c::class_of<::UnityEngine::GUIStyle*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.GetMeshInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUIStyle*, ::UnityEngine::Color, ::StringW, ::UnityEngine::Rect,
                                                                ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::MeshInfoBindings>>, ::by_ref<::UnityEngine::Vector2>, ::by_ref<int32_t>)>(
    &::UnityEngine::GUIStyle::GetMeshInfo)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x6b48624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                                                             { "GetMeshInfo",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::MeshInfoBindings>>>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.GetDimensions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUIStyle*, ::UnityEngine::Color, ::StringW, ::UnityEngine::Rect, ::by_ref<::UnityEngine::Vector2>)>(
    &::UnityEngine::GUIStyle::GetDimensions)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6b489f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "GetDimensions",
                                                                           {},
                                                                           { ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::StringW>(),
                                                                             ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.GetLineHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUIStyle*, ::by_ref<float_t>)>(&::UnityEngine::GUIStyle::GetLineHeight)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6b48a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "GetLineHeight", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.EmptyManagedCache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::GUIStyle::EmptyManagedCache)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x6b48a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "EmptyManagedCache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_rawName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::GUIStyle::get_rawName_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b461e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                                                { "get_rawName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.set_rawName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::GUIStyle::set_rawName_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b463a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                                                { "set_rawName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_font_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::GUIStyle::get_font_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b46548;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_font_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_imagePosition_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ImagePosition (*)(::System::IntPtr)>(&::UnityEngine::GUIStyle::get_imagePosition_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b46618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_imagePosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_alignment_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextAnchor (*)(::System::IntPtr)>(&::UnityEngine::GUIStyle::get_alignment_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b466e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_alignment_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.set_alignment_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::TextAnchor)>(&::UnityEngine::GUIStyle::set_alignment_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b467c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "set_alignment_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::TextAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_wordWrap_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::GUIStyle::get_wordWrap_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b468a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_wordWrap_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_clipping_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextClipping (*)(::System::IntPtr)>(&::UnityEngine::GUIStyle::get_clipping_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b46970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_clipping_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_contentOffset_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::GUIStyle::get_contentOffset_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b46a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                                                             { "get_contentOffset_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_fixedWidth_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::GUIStyle::get_fixedWidth_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b46b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_fixedWidth_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_fixedHeight_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::GUIStyle::get_fixedHeight_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b46c00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_fixedHeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_stretchWidth_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::GUIStyle::get_stretchWidth_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b46cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_stretchWidth_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.set_stretchWidth_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::GUIStyle::set_stretchWidth_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b46d0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "set_stretchWidth_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_stretchHeight_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::GUIStyle::get_stretchHeight_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b46de4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_stretchHeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.set_stretchHeight_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::GUIStyle::set_stretchHeight_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b46e20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "set_stretchHeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_fontSize_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::GUIStyle::get_fontSize_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b46ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_fontSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_fontStyle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::FontStyle (*)(::System::IntPtr)>(&::UnityEngine::GUIStyle::get_fontStyle_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b46fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_fontStyle_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.get_richText_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::GUIStyle::get_richText_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b47098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_richText_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.GetStyleStatePtr_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::UnityEngine::GUIStyle::GetStyleStatePtr_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b471f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "GetStyleStatePtr_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.GetRectOffsetPtr_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, int32_t)>(&::UnityEngine::GUIStyle::GetRectOffsetPtr_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b472d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "GetRectOffsetPtr_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.Internal_Draw_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Rect>, ::UnityEngine::GUIContent*, bool, bool, bool, bool)>(
    &::UnityEngine::GUIStyle::Internal_Draw_Injected)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6b47408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                                                             { "Internal_Draw_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::UnityEngine::GUIContent*>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.Internal_Draw2_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Rect>, ::UnityEngine::GUIContent*, int32_t, bool)>(
    &::UnityEngine::GUIStyle::Internal_Draw2_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b47560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "Internal_Draw2_Injected",
                                                                                               {},
                                                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(),
                                                                                                 ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.Internal_CalcSizeWithConstraints_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::GUIContent*, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>)>(
    &::UnityEngine::GUIStyle::Internal_CalcSizeWithConstraints_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6b47690;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "Internal_CalcSizeWithConstraints_Injected",
                                                                                        {},
                                                                                        { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::GUIContent*>(),
                                                                                          ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.Internal_CalcHeight_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, ::UnityEngine::GUIContent*, float_t)>(&::UnityEngine::GUIStyle::Internal_CalcHeight_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b477a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                                         { "Internal_CalcHeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.Internal_CalcMinMaxWidth_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::GUIContent*, ::by_ref<::UnityEngine::Vector2>)>(
    &::UnityEngine::GUIStyle::Internal_CalcMinMaxWidth_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6b478a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::GUIStyle*>(),
            { "Internal_CalcMinMaxWidth_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.Internal_GetTextRectOffset_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Rect>, ::UnityEngine::GUIContent*, ::by_ref<::UnityEngine::Vector2>,
                                                                ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::GUIStyle::Internal_GetTextRectOffset_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6b479cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                                                             { "Internal_GetTextRectOffset_Injected",
                                                               {},
                                                               { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::UnityEngine::GUIContent*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.SetMouseTooltip_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Rect>)>(
    &::UnityEngine::GUIStyle::SetMouseTooltip_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6b47a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                            { "SetMouseTooltip_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.IsTooltipActive_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::GUIStyle::IsTooltipActive_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b47a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "IsTooltipActive_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.SetDefaultFont_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::GUIStyle::SetDefaultFont_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6b47ab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "SetDefaultFont_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::GUIStyle.GetDefaultFont_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::UnityEngine::GUIStyle::GetDefaultFont_Injected)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b47c30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "GetDefaultFont_Injected", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& UnityEngine::GUIStyle::__cordl_internal_get_m_Ptr() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr ::System::IntPtr const& UnityEngine::GUIStyle::__cordl_internal_get_m_Ptr() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Ptr;
}
constexpr void UnityEngine::GUIStyle::__cordl_internal_set_m_Ptr(::System::IntPtr value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Ptr = value;
}
constexpr ::UnityEngine::GUIStyleState*& UnityEngine::GUIStyle::__cordl_internal_get_m_Normal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Normal;
}
constexpr ::UnityEngine::GUIStyleState* const& UnityEngine::GUIStyle::__cordl_internal_get_m_Normal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Normal;
}
constexpr void UnityEngine::GUIStyle::__cordl_internal_set_m_Normal(::UnityEngine::GUIStyleState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Normal = value;
}
constexpr ::UnityEngine::GUIStyleState*& UnityEngine::GUIStyle::__cordl_internal_get_m_Hover() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Hover;
}
constexpr ::UnityEngine::GUIStyleState* const& UnityEngine::GUIStyle::__cordl_internal_get_m_Hover() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Hover;
}
constexpr void UnityEngine::GUIStyle::__cordl_internal_set_m_Hover(::UnityEngine::GUIStyleState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Hover = value;
}
constexpr ::UnityEngine::GUIStyleState*& UnityEngine::GUIStyle::__cordl_internal_get_m_Active() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Active;
}
constexpr ::UnityEngine::GUIStyleState* const& UnityEngine::GUIStyle::__cordl_internal_get_m_Active() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Active;
}
constexpr void UnityEngine::GUIStyle::__cordl_internal_set_m_Active(::UnityEngine::GUIStyleState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Active = value;
}
constexpr ::UnityEngine::GUIStyleState*& UnityEngine::GUIStyle::__cordl_internal_get_m_Focused() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Focused;
}
constexpr ::UnityEngine::GUIStyleState* const& UnityEngine::GUIStyle::__cordl_internal_get_m_Focused() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Focused;
}
constexpr void UnityEngine::GUIStyle::__cordl_internal_set_m_Focused(::UnityEngine::GUIStyleState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Focused = value;
}
constexpr ::UnityEngine::GUIStyleState*& UnityEngine::GUIStyle::__cordl_internal_get_m_OnNormal() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnNormal;
}
constexpr ::UnityEngine::GUIStyleState* const& UnityEngine::GUIStyle::__cordl_internal_get_m_OnNormal() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnNormal;
}
constexpr void UnityEngine::GUIStyle::__cordl_internal_set_m_OnNormal(::UnityEngine::GUIStyleState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnNormal = value;
}
constexpr ::UnityEngine::GUIStyleState*& UnityEngine::GUIStyle::__cordl_internal_get_m_OnHover() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnHover;
}
constexpr ::UnityEngine::GUIStyleState* const& UnityEngine::GUIStyle::__cordl_internal_get_m_OnHover() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnHover;
}
constexpr void UnityEngine::GUIStyle::__cordl_internal_set_m_OnHover(::UnityEngine::GUIStyleState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnHover = value;
}
constexpr ::UnityEngine::GUIStyleState*& UnityEngine::GUIStyle::__cordl_internal_get_m_OnActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnActive;
}
constexpr ::UnityEngine::GUIStyleState* const& UnityEngine::GUIStyle::__cordl_internal_get_m_OnActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnActive;
}
constexpr void UnityEngine::GUIStyle::__cordl_internal_set_m_OnActive(::UnityEngine::GUIStyleState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnActive = value;
}
constexpr ::UnityEngine::GUIStyleState*& UnityEngine::GUIStyle::__cordl_internal_get_m_OnFocused() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnFocused;
}
constexpr ::UnityEngine::GUIStyleState* const& UnityEngine::GUIStyle::__cordl_internal_get_m_OnFocused() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnFocused;
}
constexpr void UnityEngine::GUIStyle::__cordl_internal_set_m_OnFocused(::UnityEngine::GUIStyleState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnFocused = value;
}
constexpr ::UnityEngine::RectOffset*& UnityEngine::GUIStyle::__cordl_internal_get_m_Border() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Border;
}
constexpr ::UnityEngine::RectOffset* const& UnityEngine::GUIStyle::__cordl_internal_get_m_Border() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Border;
}
constexpr void UnityEngine::GUIStyle::__cordl_internal_set_m_Border(::UnityEngine::RectOffset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Border = value;
}
constexpr ::UnityEngine::RectOffset*& UnityEngine::GUIStyle::__cordl_internal_get_m_Padding() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Padding;
}
constexpr ::UnityEngine::RectOffset* const& UnityEngine::GUIStyle::__cordl_internal_get_m_Padding() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Padding;
}
constexpr void UnityEngine::GUIStyle::__cordl_internal_set_m_Padding(::UnityEngine::RectOffset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Padding = value;
}
constexpr ::UnityEngine::RectOffset*& UnityEngine::GUIStyle::__cordl_internal_get_m_Margin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Margin;
}
constexpr ::UnityEngine::RectOffset* const& UnityEngine::GUIStyle::__cordl_internal_get_m_Margin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Margin;
}
constexpr void UnityEngine::GUIStyle::__cordl_internal_set_m_Margin(::UnityEngine::RectOffset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Margin = value;
}
constexpr ::UnityEngine::RectOffset*& UnityEngine::GUIStyle::__cordl_internal_get_m_Overflow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Overflow;
}
constexpr ::UnityEngine::RectOffset* const& UnityEngine::GUIStyle::__cordl_internal_get_m_Overflow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Overflow;
}
constexpr void UnityEngine::GUIStyle::__cordl_internal_set_m_Overflow(::UnityEngine::RectOffset* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Overflow = value;
}
constexpr ::StringW& UnityEngine::GUIStyle::__cordl_internal_get_m_Name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr ::StringW const& UnityEngine::GUIStyle::__cordl_internal_get_m_Name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Name;
}
constexpr void UnityEngine::GUIStyle::__cordl_internal_set_m_Name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Name = value;
}
inline void UnityEngine::GUIStyle::setStaticF_showKeyboardFocus(bool value) {
  ::cordl_internals::setStaticField<bool, "showKeyboardFocus", ::UnityEngine::GUIStyle*>(std::forward<bool>(value));
}
inline bool UnityEngine::GUIStyle::getStaticF_showKeyboardFocus() {
  return ::cordl_internals::getStaticField<bool, "showKeyboardFocus", ::UnityEngine::GUIStyle*>();
}
inline void UnityEngine::GUIStyle::setStaticF_s_None(::UnityEngine::GUIStyle* value) {
  ::cordl_internals::setStaticField<::UnityEngine::GUIStyle*, "s_None", ::UnityEngine::GUIStyle*>(std::forward<::UnityEngine::GUIStyle*>(value));
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUIStyle::getStaticF_s_None() {
  return ::cordl_internals::getStaticField<::UnityEngine::GUIStyle*, "s_None", ::UnityEngine::GUIStyle*>();
}
inline ::StringW UnityEngine::GUIStyle::get_rawName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_rawName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::GUIStyle::set_rawName(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "set_rawName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Font> UnityEngine::GUIStyle::get_font() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_font", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Font>>(this, ___internal_method);
}
inline ::UnityEngine::ImagePosition UnityEngine::GUIStyle::get_imagePosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_imagePosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ImagePosition>(this, ___internal_method);
}
inline ::UnityEngine::TextAnchor UnityEngine::GUIStyle::get_alignment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_alignment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextAnchor>(this, ___internal_method);
}
inline void UnityEngine::GUIStyle::set_alignment(::UnityEngine::TextAnchor value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "set_alignment", {}, { ::i2c::type_of<::UnityEngine::TextAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::GUIStyle::get_wordWrap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_wordWrap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::TextClipping UnityEngine::GUIStyle::get_clipping() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_clipping", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextClipping>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::GUIStyle::get_contentOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_contentOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline float_t UnityEngine::GUIStyle::get_fixedWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_fixedWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::GUIStyle::get_fixedHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_fixedHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool UnityEngine::GUIStyle::get_stretchWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_stretchWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::GUIStyle::set_stretchWidth(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "set_stretchWidth", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::GUIStyle::get_stretchHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_stretchHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::GUIStyle::set_stretchHeight(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "set_stretchHeight", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::GUIStyle::get_fontSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_fontSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::FontStyle UnityEngine::GUIStyle::get_fontStyle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_fontStyle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::FontStyle>(this, ___internal_method);
}
inline bool UnityEngine::GUIStyle::get_richText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_richText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IntPtr UnityEngine::GUIStyle::Internal_Create(::UnityEngine::GUIStyle* self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "Internal_Create", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, self);
}
inline void UnityEngine::GUIStyle::Internal_Destroy(::System::IntPtr self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "Internal_Destroy", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self);
}
inline ::System::IntPtr UnityEngine::GUIStyle::GetStyleStatePtr(int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "GetStyleStatePtr", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, idx);
}
inline ::System::IntPtr UnityEngine::GUIStyle::GetRectOffsetPtr(int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "GetRectOffsetPtr", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, idx);
}
inline void UnityEngine::GUIStyle::Internal_Draw(::UnityEngine::Rect screenRect, ::UnityEngine::GUIContent* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "Internal_Draw",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(),
                                                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, screenRect, content, isHover, isActive, on, hasKeyboardFocus);
}
inline void UnityEngine::GUIStyle::Internal_Draw2(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, int32_t controlID, bool on) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                          { "Internal_Draw2", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, content, controlID, on);
}
inline ::UnityEngine::Vector2 UnityEngine::GUIStyle::Internal_CalcSizeWithConstraints(::UnityEngine::GUIContent* content, ::UnityEngine::Vector2 maxSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                                                           { "Internal_CalcSizeWithConstraints", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, content, maxSize);
}
inline float_t UnityEngine::GUIStyle::Internal_CalcHeight(::UnityEngine::GUIContent* content, float_t width) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "Internal_CalcHeight", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, content, width);
}
inline ::UnityEngine::Vector2 UnityEngine::GUIStyle::Internal_CalcMinMaxWidth(::UnityEngine::GUIContent* content) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "Internal_CalcMinMaxWidth", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, content);
}
inline ::UnityEngine::Vector2 UnityEngine::GUIStyle::Internal_GetTextRectOffset(::UnityEngine::Rect screenRect, ::UnityEngine::GUIContent* content, ::UnityEngine::Vector2 textSize) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                          { "Internal_GetTextRectOffset", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, screenRect, content, textSize);
}
inline void UnityEngine::GUIStyle::SetMouseTooltip(::StringW tooltip, ::UnityEngine::Rect screenRect) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "SetMouseTooltip", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tooltip, screenRect);
}
inline bool UnityEngine::GUIStyle::IsTooltipActive(::StringW tooltip) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "IsTooltipActive", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tooltip);
}
inline void UnityEngine::GUIStyle::SetDefaultFont(::UnityEngine::Font* font) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "SetDefaultFont", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, font);
}
inline ::UnityW<::UnityEngine::Font> UnityEngine::GUIStyle::GetDefaultFont() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "GetDefaultFont", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Font>>(nullptr, ___internal_method);
}
inline void UnityEngine::GUIStyle::Internal_DestroyTextGenerator(int32_t meshInfoId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "Internal_DestroyTextGenerator", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, meshInfoId);
}
inline void UnityEngine::GUIStyle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::GUIStyle::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GUIStyle*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::GUIStyle::get_name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::GUIStyle::set_name(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "set_name", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUIStyleState* UnityEngine::GUIStyle::get_normal() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_normal", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyleState*>(this, ___internal_method);
}
inline ::UnityEngine::RectOffset* UnityEngine::GUIStyle::get_margin() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_margin", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectOffset*>(this, ___internal_method);
}
inline ::UnityEngine::RectOffset* UnityEngine::GUIStyle::get_padding() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_padding", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::RectOffset*>(this, ___internal_method);
}
inline float_t UnityEngine::GUIStyle::get_lineHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_lineHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::GUIStyle::Draw(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "Draw",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(),
                                                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, content, isHover, isActive, on, hasKeyboardFocus);
}
inline void UnityEngine::GUIStyle::Draw(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, int32_t controlID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                                                           { "Draw", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, content, controlID);
}
inline void UnityEngine::GUIStyle::Draw(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, int32_t controlID, bool on, bool hover) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::GUIStyle*>(),
          { "Draw", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, content, controlID, on, hover);
}
inline void UnityEngine::GUIStyle::Draw(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, int32_t controlId, bool isHover, bool isActive, bool on, bool hasKeyboardFocus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "Draw",
                                                                                      {},
                                                                                      { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<int32_t>(),
                                                                                        ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position, content, controlId, isHover, isActive, on, hasKeyboardFocus);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUIStyle::get_none() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_none", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUIStyle*>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::GUIStyle::GetCursorPixelPosition(::UnityEngine::Rect position, ::UnityEngine::GUIContent* content, int32_t cursorStringIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                                              { "GetCursorPixelPosition", {}, { ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, position, content, cursorStringIndex);
}
inline ::UnityEngine::Vector2 UnityEngine::GUIStyle::CalcSizeWithConstraints(::UnityEngine::GUIContent* content, ::UnityEngine::Vector2 constraints) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "CalcSizeWithConstraints", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, content, constraints);
}
inline float_t UnityEngine::GUIStyle::CalcHeight(::UnityEngine::GUIContent* content, float_t width) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "CalcHeight", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, content, width);
}
inline ::UnityEngine::Vector2 UnityEngine::GUIStyle::GetPreferredSize(::StringW content, ::UnityEngine::Rect rect) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "GetPreferredSize", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, content, rect);
}
inline bool UnityEngine::GUIStyle::get_isHeightDependantOnWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_isHeightDependantOnWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::GUIStyle::CalcMinMaxWidth(::UnityEngine::GUIContent* content, ::by_ref<float_t> minWidth, ::by_ref<float_t> maxWidth) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                                              { "CalcMinMaxWidth", {}, { ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, content, minWidth, maxWidth);
}
inline ::StringW UnityEngine::GUIStyle::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::GUIStyle*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::GUIStyle::GetMeshInfo(::UnityEngine::GUIStyle* style, ::UnityEngine::Color color, ::StringW content, ::UnityEngine::Rect rect,
                                               ::by_ref<::ArrayW<::UnityEngine::TextCore::Text::MeshInfoBindings>> meshInfos, ::by_ref<::UnityEngine::Vector2> dimensions,
                                               ::by_ref<int32_t> generationId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "GetMeshInfo",
                                                                         {},
                                                                         { ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::StringW>(),
                                                                           ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::TextCore::Text::MeshInfoBindings>>>(),
                                                                           ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, style, color, content, rect, meshInfos, dimensions, generationId);
}
inline void UnityEngine::GUIStyle::GetDimensions(::UnityEngine::GUIStyle* style, ::UnityEngine::Color color, ::StringW content, ::UnityEngine::Rect rect, ::by_ref<::UnityEngine::Vector2> dimensions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "GetDimensions",
                                                                                      {},
                                                                                      { ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::StringW>(),
                                                                                        ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, style, color, content, rect, dimensions);
}
inline void UnityEngine::GUIStyle::GetLineHeight(::UnityEngine::GUIStyle* style, ::by_ref<float_t> lineHeight) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "GetLineHeight", {}, { ::i2c::type_of<::UnityEngine::GUIStyle*>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, style, lineHeight);
}
inline void UnityEngine::GUIStyle::EmptyManagedCache() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "EmptyManagedCache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::GUIStyle::get_rawName_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                                              { "get_rawName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::GUIStyle::set_rawName_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                                              { "set_rawName_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::GUIStyle::get_font_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_font_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::ImagePosition UnityEngine::GUIStyle::get_imagePosition_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_imagePosition_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ImagePosition>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::TextAnchor UnityEngine::GUIStyle::get_alignment_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_alignment_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextAnchor>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::GUIStyle::set_alignment_Injected(::System::IntPtr _unity_self, ::UnityEngine::TextAnchor value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "set_alignment_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::TextAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::GUIStyle::get_wordWrap_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_wordWrap_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::TextClipping UnityEngine::GUIStyle::get_clipping_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_clipping_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextClipping>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::GUIStyle::get_contentOffset_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                                                           { "get_contentOffset_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline float_t UnityEngine::GUIStyle::get_fixedWidth_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_fixedWidth_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline float_t UnityEngine::GUIStyle::get_fixedHeight_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_fixedHeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::GUIStyle::get_stretchWidth_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_stretchWidth_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::GUIStyle::set_stretchWidth_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "set_stretchWidth_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::GUIStyle::get_stretchHeight_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_stretchHeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::GUIStyle::set_stretchHeight_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "set_stretchHeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::GUIStyle::get_fontSize_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_fontSize_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::FontStyle UnityEngine::GUIStyle::get_fontStyle_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_fontStyle_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::FontStyle>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::GUIStyle::get_richText_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "get_richText_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::GUIStyle::GetStyleStatePtr_Injected(::System::IntPtr _unity_self, int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "GetStyleStatePtr_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, idx);
}
inline ::System::IntPtr UnityEngine::GUIStyle::GetRectOffsetPtr_Injected(::System::IntPtr _unity_self, int32_t idx) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "GetRectOffsetPtr_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, idx);
}
inline void UnityEngine::GUIStyle::Internal_Draw_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> screenRect, ::UnityEngine::GUIContent* content, bool isHover, bool isActive,
                                                          bool on, bool hasKeyboardFocus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                                                           { "Internal_Draw_Injected",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::UnityEngine::GUIContent*>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, screenRect, content, isHover, isActive, on, hasKeyboardFocus);
}
inline void UnityEngine::GUIStyle::Internal_Draw2_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> position, ::UnityEngine::GUIContent* content, int32_t controlID, bool on) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "Internal_Draw2_Injected",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(),
                                                                                               ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, position, content, controlID, on);
}
inline void UnityEngine::GUIStyle::Internal_CalcSizeWithConstraints_Injected(::System::IntPtr _unity_self, ::UnityEngine::GUIContent* content, ::by_ref<::UnityEngine::Vector2> maxSize,
                                                                             ::by_ref<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "Internal_CalcSizeWithConstraints_Injected",
                                                                                      {},
                                                                                      { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::GUIContent*>(),
                                                                                        ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, content, maxSize, ret);
}
inline float_t UnityEngine::GUIStyle::Internal_CalcHeight_Injected(::System::IntPtr _unity_self, ::UnityEngine::GUIContent* content, float_t width) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                                       { "Internal_CalcHeight_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self, content, width);
}
inline void UnityEngine::GUIStyle::Internal_CalcMinMaxWidth_Injected(::System::IntPtr _unity_self, ::UnityEngine::GUIContent* content, ::by_ref<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::GUIStyle*>(),
          { "Internal_CalcMinMaxWidth_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::GUIContent*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, content, ret);
}
inline void UnityEngine::GUIStyle::Internal_GetTextRectOffset_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Rect> screenRect, ::UnityEngine::GUIContent* content,
                                                                       ::by_ref<::UnityEngine::Vector2> textSize, ::by_ref<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                                                           { "Internal_GetTextRectOffset_Injected",
                                                             {},
                                                             { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::UnityEngine::GUIContent*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, screenRect, content, textSize, ret);
}
inline void UnityEngine::GUIStyle::SetMouseTooltip_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> tooltip, ::by_ref<::UnityEngine::Rect> screenRect) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(),
                          { "SetMouseTooltip_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tooltip, screenRect);
}
inline bool UnityEngine::GUIStyle::IsTooltipActive_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> tooltip) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "IsTooltipActive_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, tooltip);
}
inline void UnityEngine::GUIStyle::SetDefaultFont_Injected(::System::IntPtr font) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "SetDefaultFont_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, font);
}
inline ::System::IntPtr UnityEngine::GUIStyle::GetDefaultFont_Injected() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::GUIStyle*>(), { "GetDefaultFont_Injected", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::UnityEngine::GUIStyle* UnityEngine::GUIStyle::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::GUIStyle*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::GUIStyle::GUIStyle() {}
