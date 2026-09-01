#pragma once
// IWYU pragma private; include "UnityEngine\UI\Text.hpp"
#include "UnityEngine/UI/zzzz__MaskableGraphic_impl.hpp"
#include "UnityEngine/zzzz__UIVertex_impl.hpp"
#include "UnityEngine/UI/zzzz__Text_def.hpp"
#include "UnityEngine/UI/zzzz__FontData_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutElement_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
#include "UnityEngine/zzzz__FontStyle_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
#include "UnityEngine/zzzz__HorizontalWrapMode_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__TextAnchor_def.hpp"
#include "UnityEngine/zzzz__TextGenerationSettings_def.hpp"
#include "UnityEngine/zzzz__TextGenerator_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__VerticalWrapMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::Text._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6e0df3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.get_cachedTextGenerator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextGenerator* (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::get_cachedTextGenerator)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6e0dfc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_cachedTextGenerator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.get_cachedTextGeneratorForLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextGenerator* (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::get_cachedTextGeneratorForLayout)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e0e048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_cachedTextGeneratorForLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.get_mainTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::get_mainTexture)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x6e0e0b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { ::i2c::class_of<::UnityEngine::UI::Text*>(), 35 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.FontTextureChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::FontTextureChanged)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6e0e278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "FontTextureChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.get_font
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Font> (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::get_font)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e0e260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_font", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.set_font
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Text::*)(::UnityEngine::Font*)>(&::UnityEngine::UI::Text::set_font)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x6e0e390;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "set_font", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.get_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::get_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0e4b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { ::i2c::class_of<::UnityEngine::UI::Text*>(), 74 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.set_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Text::*)(::StringW)>(&::UnityEngine::UI::Text::set_text)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6e0e4bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { ::i2c::class_of<::UnityEngine::UI::Text*>(), 75 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.get_supportRichText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::get_supportRichText)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e0e590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_supportRichText", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.set_supportRichText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Text::*)(bool)>(&::UnityEngine::UI::Text::set_supportRichText)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6e0e5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "set_supportRichText", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.get_resizeTextForBestFit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::get_resizeTextForBestFit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e0e608;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_resizeTextForBestFit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.set_resizeTextForBestFit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Text::*)(bool)>(&::UnityEngine::UI::Text::set_resizeTextForBestFit)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6e0e620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "set_resizeTextForBestFit", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.get_resizeTextMinSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::get_resizeTextMinSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e0e680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_resizeTextMinSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.set_resizeTextMinSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Text::*)(int32_t)>(&::UnityEngine::UI::Text::set_resizeTextMinSize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e0e698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "set_resizeTextMinSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.get_resizeTextMaxSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::get_resizeTextMaxSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e0e6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_resizeTextMaxSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.set_resizeTextMaxSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Text::*)(int32_t)>(&::UnityEngine::UI::Text::set_resizeTextMaxSize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e0e704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "set_resizeTextMaxSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.get_alignment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextAnchor (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::get_alignment)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e0e758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_alignment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.set_alignment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Text::*)(::UnityEngine::TextAnchor)>(&::UnityEngine::UI::Text::set_alignment)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e0e770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "set_alignment", {}, { ::i2c::type_of<::UnityEngine::TextAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.get_alignByGeometry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::get_alignByGeometry)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e0e7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_alignByGeometry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.set_alignByGeometry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Text::*)(bool)>(&::UnityEngine::UI::Text::set_alignByGeometry)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6e0e7dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "set_alignByGeometry", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.get_fontSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::get_fontSize)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e0e81c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_fontSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.set_fontSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Text::*)(int32_t)>(&::UnityEngine::UI::Text::set_fontSize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e0e834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "set_fontSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.get_horizontalOverflow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::HorizontalWrapMode (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::get_horizontalOverflow)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e0e888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_horizontalOverflow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.set_horizontalOverflow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Text::*)(::UnityEngine::HorizontalWrapMode)>(&::UnityEngine::UI::Text::set_horizontalOverflow)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e0e8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "set_horizontalOverflow", {}, { ::i2c::type_of<::UnityEngine::HorizontalWrapMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.get_verticalOverflow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::VerticalWrapMode (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::get_verticalOverflow)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e0e8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_verticalOverflow", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.set_verticalOverflow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Text::*)(::UnityEngine::VerticalWrapMode)>(&::UnityEngine::UI::Text::set_verticalOverflow)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e0e90c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "set_verticalOverflow", {}, { ::i2c::type_of<::UnityEngine::VerticalWrapMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.get_lineSpacing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::get_lineSpacing)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e0e960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_lineSpacing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.set_lineSpacing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Text::*)(float_t)>(&::UnityEngine::UI::Text::set_lineSpacing)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e0e978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "set_lineSpacing", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.get_fontStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::FontStyle (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::get_fontStyle)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6e0e9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_fontStyle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.set_fontStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Text::*)(::UnityEngine::FontStyle)>(&::UnityEngine::UI::Text::set_fontStyle)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6e0e9e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "set_fontStyle", {}, { ::i2c::type_of<::UnityEngine::FontStyle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.get_pixelsPerUnit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::get_pixelsPerUnit)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6e0ea38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_pixelsPerUnit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::OnEnable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6e0eb84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { ::i2c::class_of<::UnityEngine::UI::Text*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::OnDisable)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e0ec04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { ::i2c::class_of<::UnityEngine::UI::Text*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.UpdateGeometry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::UpdateGeometry)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6e0ec6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { ::i2c::class_of<::UnityEngine::UI::Text*>(), 41 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.AssignDefaultFont
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::AssignDefaultFont)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6e0ecf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "AssignDefaultFont", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.AssignDefaultFontIfNecessary
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::AssignDefaultFontIfNecessary)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6e0ed68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "AssignDefaultFontIfNecessary", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.GetGenerationSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::TextGenerationSettings (::UnityEngine::UI::Text::*)(::UnityEngine::Vector2)>(&::UnityEngine::UI::Text::GetGenerationSettings)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x6e0ee30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "GetGenerationSettings", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.GetTextAnchorPivot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::TextAnchor)>(&::UnityEngine::UI::Text::GetTextAnchorPivot)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6e0eff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "GetTextAnchorPivot", {}, { ::i2c::type_of<::UnityEngine::TextAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.OnPopulateMesh
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Text::*)(::UnityEngine::UI::VertexHelper*)>(&::UnityEngine::UI::Text::OnPopulateMesh)> {
  constexpr static std::size_t size = 0x5b8;
  constexpr static std::size_t addrs = 0x6e0f070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { ::i2c::class_of<::UnityEngine::UI::Text*>(), 44 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.CalculateLayoutInputHorizontal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::CalculateLayoutInputHorizontal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e0f73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { ::i2c::class_of<::UnityEngine::UI::Text*>(), 76 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.CalculateLayoutInputVertical
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::CalculateLayoutInputVertical)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e0f740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { ::i2c::class_of<::UnityEngine::UI::Text*>(), 77 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.get_minWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::get_minWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0f744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { ::i2c::class_of<::UnityEngine::UI::Text*>(), 78 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.get_preferredWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::get_preferredWidth)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6e0f74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { ::i2c::class_of<::UnityEngine::UI::Text*>(), 79 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.get_flexibleWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::get_flexibleWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0f84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { ::i2c::class_of<::UnityEngine::UI::Text*>(), 80 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.get_minHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::get_minHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0f854;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { ::i2c::class_of<::UnityEngine::UI::Text*>(), 81 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.get_preferredHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::get_preferredHeight)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6e0f85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { ::i2c::class_of<::UnityEngine::UI::Text*>(), 82 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.get_flexibleHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::get_flexibleHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0f920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { ::i2c::class_of<::UnityEngine::UI::Text*>(), 83 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Text.get_layoutPriority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UI::Text::*)()>(&::UnityEngine::UI::Text::get_layoutPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e0f928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { ::i2c::class_of<::UnityEngine::UI::Text*>(), 84 }));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::FontData*& UnityEngine::UI::Text::__cordl_internal_get_m_FontData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontData;
}
constexpr ::UnityEngine::UI::FontData* const& UnityEngine::UI::Text::__cordl_internal_get_m_FontData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FontData;
}
constexpr void UnityEngine::UI::Text::__cordl_internal_set_m_FontData(::UnityEngine::UI::FontData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FontData = value;
}
constexpr ::StringW& UnityEngine::UI::Text::__cordl_internal_get_m_Text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr ::StringW const& UnityEngine::UI::Text::__cordl_internal_get_m_Text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Text;
}
constexpr void UnityEngine::UI::Text::__cordl_internal_set_m_Text(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Text = value;
}
constexpr ::UnityEngine::TextGenerator*& UnityEngine::UI::Text::__cordl_internal_get_m_TextCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextCache;
}
constexpr ::UnityEngine::TextGenerator* const& UnityEngine::UI::Text::__cordl_internal_get_m_TextCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextCache;
}
constexpr void UnityEngine::UI::Text::__cordl_internal_set_m_TextCache(::UnityEngine::TextGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextCache = value;
}
constexpr ::UnityEngine::TextGenerator*& UnityEngine::UI::Text::__cordl_internal_get_m_TextCacheForLayout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextCacheForLayout;
}
constexpr ::UnityEngine::TextGenerator* const& UnityEngine::UI::Text::__cordl_internal_get_m_TextCacheForLayout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextCacheForLayout;
}
constexpr void UnityEngine::UI::Text::__cordl_internal_set_m_TextCacheForLayout(::UnityEngine::TextGenerator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextCacheForLayout = value;
}
constexpr bool& UnityEngine::UI::Text::__cordl_internal_get_m_DisableFontTextureRebuiltCallback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisableFontTextureRebuiltCallback;
}
constexpr bool const& UnityEngine::UI::Text::__cordl_internal_get_m_DisableFontTextureRebuiltCallback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisableFontTextureRebuiltCallback;
}
constexpr void UnityEngine::UI::Text::__cordl_internal_set_m_DisableFontTextureRebuiltCallback(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DisableFontTextureRebuiltCallback = value;
}
constexpr ::ArrayW<::UnityEngine::UIVertex>& UnityEngine::UI::Text::__cordl_internal_get_m_TempVerts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempVerts;
}
constexpr ::ArrayW<::UnityEngine::UIVertex> const& UnityEngine::UI::Text::__cordl_internal_get_m_TempVerts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TempVerts;
}
constexpr void UnityEngine::UI::Text::__cordl_internal_set_m_TempVerts(::ArrayW<::UnityEngine::UIVertex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TempVerts = value;
}
inline void UnityEngine::UI::Text::setStaticF_s_DefaultText(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_DefaultText", ::UnityEngine::UI::Text*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UI::Text::getStaticF_s_DefaultText() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_DefaultText", ::UnityEngine::UI::Text*>();
}
inline void UnityEngine::UI::Text::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::TextGenerator* UnityEngine::UI::Text::get_cachedTextGenerator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_cachedTextGenerator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextGenerator*>(this, ___internal_method);
}
inline ::UnityEngine::TextGenerator* UnityEngine::UI::Text::get_cachedTextGeneratorForLayout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_cachedTextGeneratorForLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextGenerator*>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::UI::Text::get_mainTexture() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Text*>(), 35 })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method);
}
inline void UnityEngine::UI::Text::FontTextureChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "FontTextureChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Font> UnityEngine::UI::Text::get_font() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_font", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Font>>(this, ___internal_method);
}
inline void UnityEngine::UI::Text::set_font(::UnityEngine::Font* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "set_font", {}, { ::i2c::type_of<::UnityEngine::Font*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::UI::Text::get_text() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Text*>(), 74 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::UI::Text::set_text(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Text*>(), 75 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::Text::get_supportRichText() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_supportRichText", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::Text::set_supportRichText(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "set_supportRichText", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::Text::get_resizeTextForBestFit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_resizeTextForBestFit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::Text::set_resizeTextForBestFit(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "set_resizeTextForBestFit", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UI::Text::get_resizeTextMinSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_resizeTextMinSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UI::Text::set_resizeTextMinSize(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "set_resizeTextMinSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UI::Text::get_resizeTextMaxSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_resizeTextMaxSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UI::Text::set_resizeTextMaxSize(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "set_resizeTextMaxSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::TextAnchor UnityEngine::UI::Text::get_alignment() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_alignment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextAnchor>(this, ___internal_method);
}
inline void UnityEngine::UI::Text::set_alignment(::UnityEngine::TextAnchor value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "set_alignment", {}, { ::i2c::type_of<::UnityEngine::TextAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::Text::get_alignByGeometry() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_alignByGeometry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UI::Text::set_alignByGeometry(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "set_alignByGeometry", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UI::Text::get_fontSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_fontSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::UI::Text::set_fontSize(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "set_fontSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::HorizontalWrapMode UnityEngine::UI::Text::get_horizontalOverflow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_horizontalOverflow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::HorizontalWrapMode>(this, ___internal_method);
}
inline void UnityEngine::UI::Text::set_horizontalOverflow(::UnityEngine::HorizontalWrapMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "set_horizontalOverflow", {}, { ::i2c::type_of<::UnityEngine::HorizontalWrapMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::VerticalWrapMode UnityEngine::UI::Text::get_verticalOverflow() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_verticalOverflow", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::VerticalWrapMode>(this, ___internal_method);
}
inline void UnityEngine::UI::Text::set_verticalOverflow(::UnityEngine::VerticalWrapMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "set_verticalOverflow", {}, { ::i2c::type_of<::UnityEngine::VerticalWrapMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::Text::get_lineSpacing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_lineSpacing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::Text::set_lineSpacing(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "set_lineSpacing", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::FontStyle UnityEngine::UI::Text::get_fontStyle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_fontStyle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::FontStyle>(this, ___internal_method);
}
inline void UnityEngine::UI::Text::set_fontStyle(::UnityEngine::FontStyle value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "set_fontStyle", {}, { ::i2c::type_of<::UnityEngine::FontStyle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::Text::get_pixelsPerUnit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "get_pixelsPerUnit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UI::Text::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Text*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Text::OnDisable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Text*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Text::UpdateGeometry() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Text*>(), 41 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Text::AssignDefaultFont() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "AssignDefaultFont", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Text::AssignDefaultFontIfNecessary() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "AssignDefaultFontIfNecessary", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::TextGenerationSettings UnityEngine::UI::Text::GetGenerationSettings(::UnityEngine::Vector2 extents) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "GetGenerationSettings", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::TextGenerationSettings>(this, ___internal_method, extents);
}
inline ::UnityEngine::Vector2 UnityEngine::UI::Text::GetTextAnchorPivot(::UnityEngine::TextAnchor anchor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UI::Text*>(), { "GetTextAnchorPivot", {}, { ::i2c::type_of<::UnityEngine::TextAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, anchor);
}
inline void UnityEngine::UI::Text::OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Text*>(), 44 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, toFill);
}
inline void UnityEngine::UI::Text::CalculateLayoutInputHorizontal() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Text*>(), 76 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UI::Text::CalculateLayoutInputVertical() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Text*>(), 77 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::UI::Text::get_minWidth() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Text*>(), 78 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UI::Text::get_preferredWidth() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Text*>(), 79 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UI::Text::get_flexibleWidth() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Text*>(), 80 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UI::Text::get_minHeight() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Text*>(), 81 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UI::Text::get_preferredHeight() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Text*>(), 82 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UI::Text::get_flexibleHeight() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Text*>(), 83 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline int32_t UnityEngine::UI::Text::get_layoutPriority() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UI::Text*>(), 84 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::UI::Text* UnityEngine::UI::Text::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UI::Text*>());
}
/// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
constexpr UnityEngine::UI::Text::operator ::UnityEngine::UI::ILayoutElement*() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ILayoutElement"
constexpr ::UnityEngine::UI::ILayoutElement* UnityEngine::UI::Text::i___UnityEngine__UI__ILayoutElement() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutElement*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Text::Text() {}
