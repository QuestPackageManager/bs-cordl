#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\Image.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleProperty_1_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__ScaleMode_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Image_def.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_def.hpp"
#include "UnityEngine/UIElements/zzzz__CustomStyleResolvedEvent_def.hpp"
#include "UnityEngine/UIElements/zzzz__ICustomStyle_def.hpp"
#include "UnityEngine/UIElements/zzzz__Image_def.hpp"
#include "UnityEngine/UIElements/zzzz__VectorImage_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__ScaleMode_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::Image_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Image_UxmlFactory::*)()>(&::UnityEngine::UIElements::Image_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6d49f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image_UxmlFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Image_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image_UxmlFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Image_UxmlFactory* UnityEngine::UIElements::Image_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Image_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Image_UxmlFactory::Image_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Image_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Image_UxmlTraits::*)()>(&::UnityEngine::UIElements::Image_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d49ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::Image_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Image_UxmlTraits* UnityEngine::UIElements::Image_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Image_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Image_UxmlTraits::Image_UxmlTraits() {}
//  Writing Method size for method: ::UnityEngine::UIElements::Image.get_image
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::UIElements::Image::*)()>(&::UnityEngine::UIElements::Image::get_image)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d47cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "get_image", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image.set_image
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Image::*)(::UnityEngine::Texture*)>(&::UnityEngine::UIElements::Image::set_image)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6d47cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "set_image", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image.get_sprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Sprite> (::UnityEngine::UIElements::Image::*)()>(&::UnityEngine::UIElements::Image::get_sprite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d47e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "get_sprite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image.set_sprite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Image::*)(::UnityEngine::Sprite*)>(&::UnityEngine::UIElements::Image::set_sprite)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6d47e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "set_sprite", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image.get_vectorImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::VectorImage> (::UnityEngine::UIElements::Image::*)()>(&::UnityEngine::UIElements::Image::get_vectorImage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d47f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "get_vectorImage", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image.set_vectorImage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Image::*)(::UnityEngine::UIElements::VectorImage*)>(&::UnityEngine::UIElements::Image::set_vectorImage)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6d47f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "set_vectorImage", {}, { ::i2c::type_of<::UnityEngine::UIElements::VectorImage*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image.get_sourceRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::UIElements::Image::*)()>(&::UnityEngine::UIElements::Image::get_sourceRect)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6d4807c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "get_sourceRect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image.set_sourceRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Image::*)(::UnityEngine::Rect)>(&::UnityEngine::UIElements::Image::set_sourceRect)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6d48208;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "set_sourceRect", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image.get_uv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::UIElements::Image::*)()>(&::UnityEngine::UIElements::Image::get_uv)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6d48528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "get_uv", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image.set_uv
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Image::*)(::UnityEngine::Rect)>(&::UnityEngine::UIElements::Image::set_uv)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6d4853c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "set_uv", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image.get_scaleMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ScaleMode (::UnityEngine::UIElements::Image::*)()>(&::UnityEngine::UIElements::Image::get_scaleMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6d48618;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "get_scaleMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image.set_scaleMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Image::*)(::UnityEngine::ScaleMode)>(&::UnityEngine::UIElements::Image::set_scaleMode)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6d48620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "set_scaleMode", {}, { ::i2c::type_of<::UnityEngine::ScaleMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image.get_tintColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::UIElements::Image::*)()>(&::UnityEngine::UIElements::Image::get_tintColor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6d486f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "get_tintColor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image.set_tintColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Image::*)(::UnityEngine::Color)>(&::UnityEngine::UIElements::Image::set_tintColor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6d4870c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "set_tintColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Image::*)()>(&::UnityEngine::UIElements::Image::_ctor)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x6d48888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image.GetTextureDisplaySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::Image::*)(::UnityEngine::Texture*)>(
    &::UnityEngine::UIElements::Image::GetTextureDisplaySize)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6d48a5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "GetTextureDisplaySize", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image.GetTextureDisplaySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::Image::*)(::UnityEngine::Sprite*)>(
    &::UnityEngine::UIElements::Image::GetTextureDisplaySize)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6d48b40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "GetTextureDisplaySize", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image.DoMeasure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::Image::*)(
    float_t, ::UnityEngine::UIElements::VisualElement_MeasureMode, float_t, ::UnityEngine::UIElements::VisualElement_MeasureMode)>(&::UnityEngine::UIElements::Image::DoMeasure)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x6d48c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { ::i2c::class_of<::UnityEngine::UIElements::Image*>(), 134 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image.OnGenerateVisualContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Image::*)(Il2CppObject*)>(&::UnityEngine::UIElements::Image::OnGenerateVisualContent)> {
  constexpr static std::size_t size = 0x54c;
  constexpr static std::size_t addrs = 0x6d48e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "OnGenerateVisualContent", {}, { ::i2c::type_of<Il2CppObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image.OnCustomStyleResolved
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Image::*)(::UnityEngine::UIElements::CustomStyleResolvedEvent*)>(
    &::UnityEngine::UIElements::Image::OnCustomStyleResolved)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6d493cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "OnCustomStyleResolved", {}, { ::i2c::type_of<::UnityEngine::UIElements::CustomStyleResolvedEvent*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image.ReadCustomProperties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Image::*)(::UnityEngine::UIElements::ICustomStyle*)>(&::UnityEngine::UIElements::Image::ReadCustomProperties)> {
  constexpr static std::size_t size = 0x504;
  constexpr static std::size_t addrs = 0x6d49404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "ReadCustomProperties", {}, { ::i2c::type_of<::UnityEngine::UIElements::ICustomStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image.ClearProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Image::*)()>(&::UnityEngine::UIElements::Image::ClearProperty)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6d49908;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "ClearProperty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image.SetScaleMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Image::*)(::UnityEngine::ScaleMode)>(&::UnityEngine::UIElements::Image::SetScaleMode)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6d48644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "SetScaleMode", {}, { ::i2c::type_of<::UnityEngine::ScaleMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image.SetTintColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Image::*)(::UnityEngine::Color)>(&::UnityEngine::UIElements::Image::SetTintColor)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6d48770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "SetTintColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image.CalculateUV
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::Image::*)(::UnityEngine::Rect)>(&::UnityEngine::UIElements::Image::CalculateUV)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6d48380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "CalculateUV", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::Image.GetSourceRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::UIElements::Image::*)()>(&::UnityEngine::UIElements::Image::GetSourceRect)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6d48080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "GetSourceRect", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ScaleMode& UnityEngine::UIElements::Image::__cordl_internal_get_m_ScaleMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScaleMode;
}
constexpr ::UnityEngine::ScaleMode const& UnityEngine::UIElements::Image::__cordl_internal_get_m_ScaleMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScaleMode;
}
constexpr void UnityEngine::UIElements::Image::__cordl_internal_set_m_ScaleMode(::UnityEngine::ScaleMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScaleMode = value;
}
constexpr ::UnityW<::UnityEngine::Texture>& UnityEngine::UIElements::Image::__cordl_internal_get_m_Image() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Image;
}
constexpr ::UnityW<::UnityEngine::Texture> const& UnityEngine::UIElements::Image::__cordl_internal_get_m_Image() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Image;
}
constexpr void UnityEngine::UIElements::Image::__cordl_internal_set_m_Image(::UnityW<::UnityEngine::Texture> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Image = value;
}
constexpr ::UnityW<::UnityEngine::Sprite>& UnityEngine::UIElements::Image::__cordl_internal_get_m_Sprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Sprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& UnityEngine::UIElements::Image::__cordl_internal_get_m_Sprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Sprite;
}
constexpr void UnityEngine::UIElements::Image::__cordl_internal_set_m_Sprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Sprite = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::VectorImage>& UnityEngine::UIElements::Image::__cordl_internal_get_m_VectorImage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VectorImage;
}
constexpr ::UnityW<::UnityEngine::UIElements::VectorImage> const& UnityEngine::UIElements::Image::__cordl_internal_get_m_VectorImage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_VectorImage;
}
constexpr void UnityEngine::UIElements::Image::__cordl_internal_set_m_VectorImage(::UnityW<::UnityEngine::UIElements::VectorImage> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_VectorImage = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::UIElements::Image::__cordl_internal_get_m_UV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UV;
}
constexpr ::UnityEngine::Rect const& UnityEngine::UIElements::Image::__cordl_internal_get_m_UV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UV;
}
constexpr void UnityEngine::UIElements::Image::__cordl_internal_set_m_UV(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UV = value;
}
constexpr ::UnityEngine::Color& UnityEngine::UIElements::Image::__cordl_internal_get_m_TintColor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TintColor;
}
constexpr ::UnityEngine::Color const& UnityEngine::UIElements::Image::__cordl_internal_get_m_TintColor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TintColor;
}
constexpr void UnityEngine::UIElements::Image::__cordl_internal_set_m_TintColor(::UnityEngine::Color value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TintColor = value;
}
constexpr bool& UnityEngine::UIElements::Image::__cordl_internal_get_m_ImageIsInline() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImageIsInline;
}
constexpr bool const& UnityEngine::UIElements::Image::__cordl_internal_get_m_ImageIsInline() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImageIsInline;
}
constexpr void UnityEngine::UIElements::Image::__cordl_internal_set_m_ImageIsInline(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ImageIsInline = value;
}
constexpr bool& UnityEngine::UIElements::Image::__cordl_internal_get_m_ScaleModeIsInline() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScaleModeIsInline;
}
constexpr bool const& UnityEngine::UIElements::Image::__cordl_internal_get_m_ScaleModeIsInline() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ScaleModeIsInline;
}
constexpr void UnityEngine::UIElements::Image::__cordl_internal_set_m_ScaleModeIsInline(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ScaleModeIsInline = value;
}
constexpr bool& UnityEngine::UIElements::Image::__cordl_internal_get_m_TintColorIsInline() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TintColorIsInline;
}
constexpr bool const& UnityEngine::UIElements::Image::__cordl_internal_get_m_TintColorIsInline() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TintColorIsInline;
}
constexpr void UnityEngine::UIElements::Image::__cordl_internal_set_m_TintColorIsInline(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TintColorIsInline = value;
}
inline void UnityEngine::UIElements::Image::setStaticF_imageProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "imageProperty", ::UnityEngine::UIElements::Image*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::Image::getStaticF_imageProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "imageProperty", ::UnityEngine::UIElements::Image*>();
}
inline void UnityEngine::UIElements::Image::setStaticF_spriteProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "spriteProperty", ::UnityEngine::UIElements::Image*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::Image::getStaticF_spriteProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "spriteProperty", ::UnityEngine::UIElements::Image*>();
}
inline void UnityEngine::UIElements::Image::setStaticF_vectorImageProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "vectorImageProperty", ::UnityEngine::UIElements::Image*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::Image::getStaticF_vectorImageProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "vectorImageProperty", ::UnityEngine::UIElements::Image*>();
}
inline void UnityEngine::UIElements::Image::setStaticF_sourceRectProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "sourceRectProperty", ::UnityEngine::UIElements::Image*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::Image::getStaticF_sourceRectProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "sourceRectProperty", ::UnityEngine::UIElements::Image*>();
}
inline void UnityEngine::UIElements::Image::setStaticF_uvProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "uvProperty", ::UnityEngine::UIElements::Image*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::Image::getStaticF_uvProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "uvProperty", ::UnityEngine::UIElements::Image*>();
}
inline void UnityEngine::UIElements::Image::setStaticF_scaleModeProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "scaleModeProperty", ::UnityEngine::UIElements::Image*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::Image::getStaticF_scaleModeProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "scaleModeProperty", ::UnityEngine::UIElements::Image*>();
}
inline void UnityEngine::UIElements::Image::setStaticF_tintColorProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "tintColorProperty", ::UnityEngine::UIElements::Image*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::Image::getStaticF_tintColorProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "tintColorProperty", ::UnityEngine::UIElements::Image*>();
}
inline void UnityEngine::UIElements::Image::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Image*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::Image::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::Image*>();
}
inline void UnityEngine::UIElements::Image::setStaticF_s_ImageProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::Texture2D>> value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::Texture2D>>, "s_ImageProperty", ::UnityEngine::UIElements::Image*>(
      std::forward<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::Texture2D>>>(value));
}
inline ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::Texture2D>> UnityEngine::UIElements::Image::getStaticF_s_ImageProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::Texture2D>>, "s_ImageProperty", ::UnityEngine::UIElements::Image*>();
}
inline void UnityEngine::UIElements::Image::setStaticF_s_SpriteProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::Sprite>> value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::Sprite>>, "s_SpriteProperty", ::UnityEngine::UIElements::Image*>(
      std::forward<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::Sprite>>>(value));
}
inline ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::Sprite>> UnityEngine::UIElements::Image::getStaticF_s_SpriteProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::Sprite>>, "s_SpriteProperty", ::UnityEngine::UIElements::Image*>();
}
inline void UnityEngine::UIElements::Image::setStaticF_s_VectorImageProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::UIElements::VectorImage>> value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::UIElements::VectorImage>>, "s_VectorImageProperty", ::UnityEngine::UIElements::Image*>(
      std::forward<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::UIElements::VectorImage>>>(value));
}
inline ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::UIElements::VectorImage>> UnityEngine::UIElements::Image::getStaticF_s_VectorImageProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityW<::UnityEngine::UIElements::VectorImage>>, "s_VectorImageProperty",
                                           ::UnityEngine::UIElements::Image*>();
}
inline void UnityEngine::UIElements::Image::setStaticF_s_ScaleModeProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::StringW> value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::StringW>, "s_ScaleModeProperty", ::UnityEngine::UIElements::Image*>(
      std::forward<::UnityEngine::UIElements::CustomStyleProperty_1<::StringW>>(value));
}
inline ::UnityEngine::UIElements::CustomStyleProperty_1<::StringW> UnityEngine::UIElements::Image::getStaticF_s_ScaleModeProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::StringW>, "s_ScaleModeProperty", ::UnityEngine::UIElements::Image*>();
}
inline void UnityEngine::UIElements::Image::setStaticF_s_TintColorProperty(::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>, "s_TintColorProperty", ::UnityEngine::UIElements::Image*>(
      std::forward<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>>(value));
}
inline ::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color> UnityEngine::UIElements::Image::getStaticF_s_TintColorProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::CustomStyleProperty_1<::UnityEngine::Color>, "s_TintColorProperty", ::UnityEngine::UIElements::Image*>();
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::UIElements::Image::get_image() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "get_image", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Image::set_image(::UnityEngine::Texture* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "set_image", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::UIElements::Image::get_sprite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "get_sprite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Image::set_sprite(::UnityEngine::Sprite* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "set_sprite", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UIElements::VectorImage> UnityEngine::UIElements::Image::get_vectorImage() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "get_vectorImage", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::VectorImage>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Image::set_vectorImage(::UnityEngine::UIElements::VectorImage* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "set_vectorImage", {}, { ::i2c::type_of<::UnityEngine::UIElements::VectorImage*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::Image::get_sourceRect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "get_sourceRect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Image::set_sourceRect(::UnityEngine::Rect value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "set_sourceRect", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::Image::get_uv() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "get_uv", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Image::set_uv(::UnityEngine::Rect value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "set_uv", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ScaleMode UnityEngine::UIElements::Image::get_scaleMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "get_scaleMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ScaleMode>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Image::set_scaleMode(::UnityEngine::ScaleMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "set_scaleMode", {}, { ::i2c::type_of<::UnityEngine::ScaleMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::UIElements::Image::get_tintColor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "get_tintColor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Image::set_tintColor(::UnityEngine::Color value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "set_tintColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::Image::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::Image::GetTextureDisplaySize(::UnityEngine::Texture* texture) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "GetTextureDisplaySize", {}, { ::i2c::type_of<::UnityEngine::Texture*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, texture);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::Image::GetTextureDisplaySize(::UnityEngine::Sprite* sprite) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "GetTextureDisplaySize", {}, { ::i2c::type_of<::UnityEngine::Sprite*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, sprite);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::Image::DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode, float_t desiredHeight,
                                                                        ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::Image*>(), 134 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, desiredWidth, widthMode, desiredHeight, heightMode);
}
inline void UnityEngine::UIElements::Image::OnGenerateVisualContent(Il2CppObject* mgc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "OnGenerateVisualContent", {}, { ::i2c::type_of<Il2CppObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mgc);
}
inline void UnityEngine::UIElements::Image::OnCustomStyleResolved(::UnityEngine::UIElements::CustomStyleResolvedEvent* e) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(),
                                                                                         { "OnCustomStyleResolved", {}, { ::i2c::type_of<::UnityEngine::UIElements::CustomStyleResolvedEvent*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void UnityEngine::UIElements::Image::ReadCustomProperties(::UnityEngine::UIElements::ICustomStyle* customStyleProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "ReadCustomProperties", {}, { ::i2c::type_of<::UnityEngine::UIElements::ICustomStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, customStyleProvider);
}
template <typename T0, typename T1, typename T2>
inline void UnityEngine::UIElements::Image::SetProperty(T0 src, ::by_ref<T0> dst, ::by_ref<T1> alt0, ::by_ref<T2> alt1, ::UnityEngine::UIElements::BindingId binding) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "SetProperty",
                                                                                                      { ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>() },
                                                                                                      { ::i2c::type_of<T0>(), ::i2c::type_of<::by_ref<T0>>(), ::i2c::type_of<::by_ref<T1>>(),
                                                                                                        ::i2c::type_of<::by_ref<T2>>(), ::i2c::type_of<::UnityEngine::UIElements::BindingId>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T0>(), ::i2c::class_of<T1>(), ::i2c::class_of<T2>() })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, src, dst, alt0, alt1, binding);
}
inline void UnityEngine::UIElements::Image::ClearProperty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "ClearProperty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::Image::SetScaleMode(::UnityEngine::ScaleMode mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "SetScaleMode", {}, { ::i2c::type_of<::UnityEngine::ScaleMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline void UnityEngine::UIElements::Image::SetTintColor(::UnityEngine::Color color) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "SetTintColor", {}, { ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, color);
}
inline void UnityEngine::UIElements::Image::CalculateUV(::UnityEngine::Rect srcRect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "CalculateUV", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, srcRect);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::Image::GetSourceRect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::Image*>(), { "GetSourceRect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Image* UnityEngine::UIElements::Image::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::Image*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::Image::Image() {}
