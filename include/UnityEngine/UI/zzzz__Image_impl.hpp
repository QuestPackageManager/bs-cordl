#pragma once
// IWYU pragma private; include "UnityEngine/UI/Image.hpp"
#include "UnityEngine/UI/zzzz__MaskableGraphic_impl.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/U2D/zzzz__SpriteAtlas_def.hpp"
#include "UnityEngine/UI/zzzz__ILayoutElement_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/UI/zzzz__VertexHelper_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__ICanvasRaycastFilter_def.hpp"
#include "UnityEngine/zzzz__ISerializationCallbackReceiver_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::Image_Type::Image_Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Image_Type::Image_Type() {}
constexpr ::UnityEngine::UI::Image_Type UnityEngine::UI::Image_Type::Simple{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::Image_Type UnityEngine::UI::Image_Type::Sliced{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::Image_Type UnityEngine::UI::Image_Type::Tiled{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UI::Image_Type UnityEngine::UI::Image_Type::Filled{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::Image_FillMethod::Image_FillMethod(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Image_FillMethod::Image_FillMethod() {}
constexpr ::UnityEngine::UI::Image_FillMethod UnityEngine::UI::Image_FillMethod::Horizontal{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::Image_FillMethod UnityEngine::UI::Image_FillMethod::Vertical{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::Image_FillMethod UnityEngine::UI::Image_FillMethod::Radial90{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UI::Image_FillMethod UnityEngine::UI::Image_FillMethod::Radial180{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::UI::Image_FillMethod UnityEngine::UI::Image_FillMethod::Radial360{ static_cast<int32_t>(0x4) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::Image_OriginHorizontal::Image_OriginHorizontal(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Image_OriginHorizontal::Image_OriginHorizontal() {}
constexpr ::UnityEngine::UI::Image_OriginHorizontal UnityEngine::UI::Image_OriginHorizontal::Left{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::Image_OriginHorizontal UnityEngine::UI::Image_OriginHorizontal::Right{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::Image_OriginVertical::Image_OriginVertical(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Image_OriginVertical::Image_OriginVertical() {}
constexpr ::UnityEngine::UI::Image_OriginVertical UnityEngine::UI::Image_OriginVertical::Bottom{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::Image_OriginVertical UnityEngine::UI::Image_OriginVertical::Top{ static_cast<int32_t>(0x1) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::Image_Origin90::Image_Origin90(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Image_Origin90::Image_Origin90() {}
constexpr ::UnityEngine::UI::Image_Origin90 UnityEngine::UI::Image_Origin90::BottomLeft{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::Image_Origin90 UnityEngine::UI::Image_Origin90::TopLeft{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::Image_Origin90 UnityEngine::UI::Image_Origin90::TopRight{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UI::Image_Origin90 UnityEngine::UI::Image_Origin90::BottomRight{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::Image_Origin180::Image_Origin180(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Image_Origin180::Image_Origin180() {}
constexpr ::UnityEngine::UI::Image_Origin180 UnityEngine::UI::Image_Origin180::Bottom{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::Image_Origin180 UnityEngine::UI::Image_Origin180::Left{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::Image_Origin180 UnityEngine::UI::Image_Origin180::Top{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UI::Image_Origin180 UnityEngine::UI::Image_Origin180::Right{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UI::Image_Origin360::Image_Origin360(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Image_Origin360::Image_Origin360() {}
constexpr ::UnityEngine::UI::Image_Origin360 UnityEngine::UI::Image_Origin360::Bottom{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UI::Image_Origin360 UnityEngine::UI::Image_Origin360::Right{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::UI::Image_Origin360 UnityEngine::UI::Image_Origin360::Top{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::UI::Image_Origin360 UnityEngine::UI::Image_Origin360::Left{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::UnityEngine::UI::Image.get_sprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Sprite> (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_sprite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a5d804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_sprite",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_sprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)(::UnityEngine::Sprite*)>(&::UnityEngine::UI::Image::set_sprite)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x6a50838;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_sprite", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.DisableSpriteOptimizations
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::DisableSpriteOptimizations)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a5d998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "DisableSpriteOptimizations",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_overrideSprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Sprite> (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_overrideSprite)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a5d9a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_overrideSprite",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_overrideSprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)(::UnityEngine::Sprite*)>(&::UnityEngine::UI::Image::set_overrideSprite)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6a5da20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_overrideSprite", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_activeSprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Sprite> (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_activeSprite)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a5d9a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_activeSprite",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Image_Type (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a5dabc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_type",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)(::UnityEngine::UI::Image_Type)>(&::UnityEngine::UI::Image::set_type)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6a50af4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_type", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Image_Type>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_preserveAspect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_preserveAspect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a5dac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_preserveAspect",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_preserveAspect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)(bool)>(&::UnityEngine::UI::Image::set_preserveAspect)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6a5dacc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_preserveAspect",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_fillCenter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_fillCenter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a5db50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_fillCenter",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_fillCenter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)(bool)>(&::UnityEngine::UI::Image::set_fillCenter)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6a5db58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_fillCenter", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_fillMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::Image_FillMethod (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_fillMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a5dbdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_fillMethod",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_fillMethod
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)(::UnityEngine::UI::Image_FillMethod)>(&::UnityEngine::UI::Image::set_fillMethod)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a5dbe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_fillMethod", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Image_FillMethod>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_fillAmount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_fillAmount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a5dc60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_fillAmount",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_fillAmount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)(float_t)>(&::UnityEngine::UI::Image::set_fillAmount)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a5dc68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_fillAmount", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_fillClockwise
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_fillClockwise)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a5dd00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_fillClockwise",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_fillClockwise
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)(bool)>(&::UnityEngine::UI::Image::set_fillClockwise)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6a5dd08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_fillClockwise",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_fillOrigin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_fillOrigin)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a5dd8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_fillOrigin",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_fillOrigin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)(int32_t)>(&::UnityEngine::UI::Image::set_fillOrigin)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6a5dd94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_fillOrigin", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_eventAlphaThreshold
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_eventAlphaThreshold)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a5de18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_eventAlphaThreshold",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_eventAlphaThreshold
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)(float_t)>(&::UnityEngine::UI::Image::set_eventAlphaThreshold)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a5de28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_eventAlphaThreshold", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_alphaHitTestMinimumThreshold
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_alphaHitTestMinimumThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a5df98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_alphaHitTestMinimumThreshold",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_alphaHitTestMinimumThreshold
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)(float_t)>(&::UnityEngine::UI::Image::set_alphaHitTestMinimumThreshold)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6a5de34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_alphaHitTestMinimumThreshold",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_useSpriteMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_useSpriteMesh)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a5dfa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_useSpriteMesh",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_useSpriteMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)(bool)>(&::UnityEngine::UI::Image::set_useSpriteMesh)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6a5dfa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_useSpriteMesh",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6a5e02c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_defaultETC1GraphicMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (*)()>(&::UnityEngine::UI::Image::get_defaultETC1GraphicMaterial)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x6a5e06c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(),
                                                                               "get_defaultETC1GraphicMaterial", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_mainTexture
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Texture> (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_mainTexture)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6a5e150;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 35));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_hasBorder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_hasBorder)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6a5e2d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_hasBorder",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_pixelsPerUnitMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_pixelsPerUnitMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a5e38c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_pixelsPerUnitMultiplier",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_pixelsPerUnitMultiplier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)(float_t)>(&::UnityEngine::UI::Image::set_pixelsPerUnitMultiplier)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6a5e394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_pixelsPerUnitMultiplier", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_pixelsPerUnit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_pixelsPerUnit)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6a5e3b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_pixelsPerUnit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_multipliedPixelsPerUnit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_multipliedPixelsPerUnit)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6a5e4b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_multipliedPixelsPerUnit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_material
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_material)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6a5e4cc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 32));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.set_material
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)(::UnityEngine::Material*)>(&::UnityEngine::UI::Image::set_material)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a5e600;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 33));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.OnBeforeSerialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::OnBeforeSerialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a5e604;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 77));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.OnAfterDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::OnAfterDeserialize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a5e608;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 78));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.PreserveSpriteAspectRatio
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)(::ByRef<::UnityEngine::Rect>, ::UnityEngine::Vector2)>(
    &::UnityEngine::UI::Image::PreserveSpriteAspectRatio)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6a5e65c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "PreserveSpriteAspectRatio", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.GetDrawingDimensions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::UnityEngine::UI::Image::*)(bool)>(&::UnityEngine::UI::Image::GetDrawingDimensions)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x6a5e6f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "GetDrawingDimensions",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.SetNativeSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::SetNativeSize)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6a5eac8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 45));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.OnPopulateMesh
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)(::UnityEngine::UI::VertexHelper*)>(&::UnityEngine::UI::Image::OnPopulateMesh)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6a5ec0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 44));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.TrackSprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::TrackSprite)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x6a5d8a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "TrackSprite",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6a6104c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::OnDisable)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6a61068;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.UpdateMaterial
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::UpdateMaterial)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6a61168;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 40));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.OnCanvasHierarchyChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::OnCanvasHierarchyChanged)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6a61260;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.GenerateSimpleSprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)(::UnityEngine::UI::VertexHelper*, bool)>(
    &::UnityEngine::UI::Image::GenerateSimpleSprite)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x6a5ed58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "GenerateSimpleSprite", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.GenerateSprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)(::UnityEngine::UI::VertexHelper*, bool)>(
    &::UnityEngine::UI::Image::GenerateSprite)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x6a5f004;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "GenerateSprite", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.GenerateSlicedSprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)(::UnityEngine::UI::VertexHelper*)>(
    &::UnityEngine::UI::Image::GenerateSlicedSprite)> {
  constexpr static std::size_t size = 0x5c0;
  constexpr static std::size_t addrs = 0x6a5f2e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "GenerateSlicedSprite", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.GenerateTiledSprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)(::UnityEngine::UI::VertexHelper*)>(
    &::UnityEngine::UI::Image::GenerateTiledSprite)> {
  constexpr static std::size_t size = 0xd4c;
  constexpr static std::size_t addrs = 0x6a5f8a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "GenerateTiledSprite", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.AddQuad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UI::VertexHelper*, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>,
                                                                                           ::UnityEngine::Color32, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>)>(
    &::UnityEngine::UI::Image::AddQuad)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x6a6160c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "AddQuad", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.AddQuad
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UI::VertexHelper*, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Color32,
                                                                                           ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::UI::Image::AddQuad)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x6a61488;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "AddQuad", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 6>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.GetAdjustedBorders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector4 (::UnityEngine::UI::Image::*)(::UnityEngine::Vector4, ::UnityEngine::Rect)>(
    &::UnityEngine::UI::Image::GetAdjustedBorders)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6a6136c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "GetAdjustedBorders", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.GenerateFilledSprite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)(::UnityEngine::UI::VertexHelper*, bool)>(
    &::UnityEngine::UI::Image::GenerateFilledSprite)> {
  constexpr static std::size_t size = 0x8f8;
  constexpr static std::size_t addrs = 0x6a605ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "GenerateFilledSprite", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.RadialCut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, float_t, bool, int32_t)>(
        &::UnityEngine::UI::Image::RadialCut)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6a6171c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "RadialCut", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.RadialCut
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, float_t, float_t, bool, int32_t)>(
    &::UnityEngine::UI::Image::RadialCut)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x6a61850;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "RadialCut", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.CalculateLayoutInputHorizontal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::CalculateLayoutInputHorizontal)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a61c40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 79));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.CalculateLayoutInputVertical
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::CalculateLayoutInputVertical)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a61c44;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 80));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_minWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_minWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a61c48;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 81));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_preferredWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_preferredWidth)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6a61c50;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 82));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_flexibleWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_flexibleWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a61d1c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 83));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_minHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_minHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a61d24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 84));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_preferredHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_preferredHeight)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6a61d2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 85));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_flexibleHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_flexibleHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a61df8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 86));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.get_layoutPriority
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::get_layoutPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a61e00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 87));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.IsRaycastLocationValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Image::*)(::UnityEngine::Vector2, ::UnityEngine::Camera*)>(
    &::UnityEngine::UI::Image::IsRaycastLocationValid)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x6a61e08;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 88));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.MapCoordinate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UI::Image::*)(::UnityEngine::Vector2, ::UnityEngine::Rect)>(
    &::UnityEngine::UI::Image::MapCoordinate)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x6a621ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "MapCoordinate", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.RebuildImage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::U2D::SpriteAtlas*)>(&::UnityEngine::UI::Image::RebuildImage)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6a6243c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "RebuildImage", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::U2D::SpriteAtlas*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.TrackImage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UI::Image*)>(&::UnityEngine::UI::Image::TrackImage)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6a60ee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "TrackImage", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Image*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.UnTrackImage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UI::Image*)>(&::UnityEngine::UI::Image::UnTrackImage)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6a610e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "UnTrackImage", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Image*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image.OnDidApplyAnimationProperties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::OnDidApplyAnimationProperties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6a625f4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image._set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::Image::*)()>(
    &::UnityEngine::UI::Image::_set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6a5d80c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "<set_sprite>g__ResetAlphaHitThresholdIfNeeded|11_0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::Image._set_sprite_g__SpriteSupportsAlphaHitTest_11_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UI::Image::*)()>(&::UnityEngine::UI::Image::_set_sprite_g__SpriteSupportsAlphaHitTest_11_1)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6a62768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "<set_sprite>g__SpriteSupportsAlphaHitTest|11_1",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Sprite>& UnityEngine::UI::Image::__cordl_internal_get_m_Sprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Sprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& UnityEngine::UI::Image::__cordl_internal_get_m_Sprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Sprite;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_Sprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Sprite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::Sprite>& UnityEngine::UI::Image::__cordl_internal_get_m_OverrideSprite() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OverrideSprite;
}
constexpr ::UnityW<::UnityEngine::Sprite> const& UnityEngine::UI::Image::__cordl_internal_get_m_OverrideSprite() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OverrideSprite;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_OverrideSprite(::UnityW<::UnityEngine::Sprite> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OverrideSprite)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UI::Image_Type& UnityEngine::UI::Image::__cordl_internal_get_m_Type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type;
}
constexpr ::UnityEngine::UI::Image_Type const& UnityEngine::UI::Image::__cordl_internal_get_m_Type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Type;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_Type(::UnityEngine::UI::Image_Type value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Type = value;
}
constexpr bool& UnityEngine::UI::Image::__cordl_internal_get_m_PreserveAspect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreserveAspect;
}
constexpr bool const& UnityEngine::UI::Image::__cordl_internal_get_m_PreserveAspect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreserveAspect;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_PreserveAspect(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreserveAspect = value;
}
constexpr bool& UnityEngine::UI::Image::__cordl_internal_get_m_FillCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillCenter;
}
constexpr bool const& UnityEngine::UI::Image::__cordl_internal_get_m_FillCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillCenter;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_FillCenter(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FillCenter = value;
}
constexpr ::UnityEngine::UI::Image_FillMethod& UnityEngine::UI::Image::__cordl_internal_get_m_FillMethod() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillMethod;
}
constexpr ::UnityEngine::UI::Image_FillMethod const& UnityEngine::UI::Image::__cordl_internal_get_m_FillMethod() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillMethod;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_FillMethod(::UnityEngine::UI::Image_FillMethod value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FillMethod = value;
}
constexpr float_t& UnityEngine::UI::Image::__cordl_internal_get_m_FillAmount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillAmount;
}
constexpr float_t const& UnityEngine::UI::Image::__cordl_internal_get_m_FillAmount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillAmount;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_FillAmount(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FillAmount = value;
}
constexpr bool& UnityEngine::UI::Image::__cordl_internal_get_m_FillClockwise() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillClockwise;
}
constexpr bool const& UnityEngine::UI::Image::__cordl_internal_get_m_FillClockwise() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillClockwise;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_FillClockwise(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FillClockwise = value;
}
constexpr int32_t& UnityEngine::UI::Image::__cordl_internal_get_m_FillOrigin() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillOrigin;
}
constexpr int32_t const& UnityEngine::UI::Image::__cordl_internal_get_m_FillOrigin() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FillOrigin;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_FillOrigin(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FillOrigin = value;
}
constexpr float_t& UnityEngine::UI::Image::__cordl_internal_get_m_AlphaHitTestMinimumThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AlphaHitTestMinimumThreshold;
}
constexpr float_t const& UnityEngine::UI::Image::__cordl_internal_get_m_AlphaHitTestMinimumThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_AlphaHitTestMinimumThreshold;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_AlphaHitTestMinimumThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_AlphaHitTestMinimumThreshold = value;
}
constexpr bool& UnityEngine::UI::Image::__cordl_internal_get_m_Tracked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tracked;
}
constexpr bool const& UnityEngine::UI::Image::__cordl_internal_get_m_Tracked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Tracked;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_Tracked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Tracked = value;
}
constexpr bool& UnityEngine::UI::Image::__cordl_internal_get_m_UseSpriteMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseSpriteMesh;
}
constexpr bool const& UnityEngine::UI::Image::__cordl_internal_get_m_UseSpriteMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UseSpriteMesh;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_UseSpriteMesh(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UseSpriteMesh = value;
}
constexpr float_t& UnityEngine::UI::Image::__cordl_internal_get_m_PixelsPerUnitMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PixelsPerUnitMultiplier;
}
constexpr float_t const& UnityEngine::UI::Image::__cordl_internal_get_m_PixelsPerUnitMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PixelsPerUnitMultiplier;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_PixelsPerUnitMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PixelsPerUnitMultiplier = value;
}
constexpr float_t& UnityEngine::UI::Image::__cordl_internal_get_m_CachedReferencePixelsPerUnit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedReferencePixelsPerUnit;
}
constexpr float_t const& UnityEngine::UI::Image::__cordl_internal_get_m_CachedReferencePixelsPerUnit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedReferencePixelsPerUnit;
}
constexpr void UnityEngine::UI::Image::__cordl_internal_set_m_CachedReferencePixelsPerUnit(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedReferencePixelsPerUnit = value;
}
inline void UnityEngine::UI::Image::setStaticF_s_ETC1DefaultUI(::UnityW<::UnityEngine::Material> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_ETC1DefaultUI", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get>(
      std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UI::Image::getStaticF_s_ETC1DefaultUI() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_ETC1DefaultUI", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get>();
}
inline void UnityEngine::UI::Image::setStaticF_s_VertScratch(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>, "s_VertScratch",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get>(
      std::forward<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> UnityEngine::UI::Image::getStaticF_s_VertScratch() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>, "s_VertScratch",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get>();
}
inline void UnityEngine::UI::Image::setStaticF_s_UVScratch(::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>, "s_UVScratch",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get>(
      std::forward<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*> UnityEngine::UI::Image::getStaticF_s_UVScratch() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector2, ::Array<::UnityEngine::Vector2>*>, "s_UVScratch",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get>();
}
inline void UnityEngine::UI::Image::setStaticF_s_Xy(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "s_Xy", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get>(
      std::forward<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> UnityEngine::UI::Image::getStaticF_s_Xy() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "s_Xy",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get>();
}
inline void UnityEngine::UI::Image::setStaticF_s_Uv(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "s_Uv", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get>(
      std::forward<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> UnityEngine::UI::Image::getStaticF_s_Uv() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>, "s_Uv",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get>();
}
inline void UnityEngine::UI::Image::setStaticF_m_TrackedTexturelessImages(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*, "m_TrackedTexturelessImages",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* UnityEngine::UI::Image::getStaticF_m_TrackedTexturelessImages() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>*, "m_TrackedTexturelessImages",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get>();
}
inline void UnityEngine::UI::Image::setStaticF_s_Initialized(bool value) {
  ::cordl_internals::setStaticField<bool, "s_Initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get>(std::forward<bool>(value));
}
inline bool UnityEngine::UI::Image::getStaticF_s_Initialized() {
  return ::cordl_internals::getStaticField<bool, "s_Initialized", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get>();
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::UI::Image::get_sprite() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_sprite",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_sprite(::UnityEngine::Sprite* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_sprite", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UI::Image::DisableSpriteOptimizations() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "DisableSpriteOptimizations",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::UI::Image::get_overrideSprite() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_overrideSprite",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_overrideSprite(::UnityEngine::Sprite* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_overrideSprite", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Sprite*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Sprite> UnityEngine::UI::Image::get_activeSprite() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_activeSprite",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Sprite>, false>(this, ___internal_method);
}
inline ::UnityEngine::UI::Image_Type UnityEngine::UI::Image::get_type() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_type",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Image_Type, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_type(::UnityEngine::UI::Image_Type value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_type", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Image_Type>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::Image::get_preserveAspect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_preserveAspect",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_preserveAspect(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_preserveAspect", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::Image::get_fillCenter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_fillCenter",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_fillCenter(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_fillCenter", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::UI::Image_FillMethod UnityEngine::UI::Image::get_fillMethod() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_fillMethod",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::Image_FillMethod, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_fillMethod(::UnityEngine::UI::Image_FillMethod value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_fillMethod", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Image_FillMethod>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::Image::get_fillAmount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_fillAmount",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_fillAmount(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_fillAmount", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::Image::get_fillClockwise() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_fillClockwise",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_fillClockwise(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_fillClockwise", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UI::Image::get_fillOrigin() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_fillOrigin",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_fillOrigin(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_fillOrigin", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::Image::get_eventAlphaThreshold() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_eventAlphaThreshold",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_eventAlphaThreshold(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_eventAlphaThreshold",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::Image::get_alphaHitTestMinimumThreshold() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(),
                                                                             "get_alphaHitTestMinimumThreshold", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_alphaHitTestMinimumThreshold(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_alphaHitTestMinimumThreshold",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UI::Image::get_useSpriteMesh() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_useSpriteMesh",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_useSpriteMesh(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_useSpriteMesh", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UI::Image::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UI::Image::get_defaultETC1GraphicMaterial() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_defaultETC1GraphicMaterial",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture> UnityEngine::UI::Image::get_mainTexture() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 35)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture>, false>(this, ___internal_method);
}
inline bool UnityEngine::UI::Image::get_hasBorder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_hasBorder",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t UnityEngine::UI::Image::get_pixelsPerUnitMultiplier() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_pixelsPerUnitMultiplier",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_pixelsPerUnitMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "set_pixelsPerUnitMultiplier",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::UI::Image::get_pixelsPerUnit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_pixelsPerUnit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::UI::Image::get_multipliedPixelsPerUnit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "get_multipliedPixelsPerUnit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::UI::Image::get_material() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 32)));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::set_material(::UnityEngine::Material* value) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 33)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UI::Image::OnBeforeSerialize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 77)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::OnAfterDeserialize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 78)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::PreserveSpriteAspectRatio(::ByRef<::UnityEngine::Rect> rect, ::UnityEngine::Vector2 spriteSize) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "PreserveSpriteAspectRatio", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rect, spriteSize);
}
inline ::UnityEngine::Vector4 UnityEngine::UI::Image::GetDrawingDimensions(bool shouldPreserveAspect) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "GetDrawingDimensions",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method, shouldPreserveAspect);
}
inline void UnityEngine::UI::Image::SetNativeSize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 45)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::OnPopulateMesh(::UnityEngine::UI::VertexHelper* toFill) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 44)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, toFill);
}
inline void UnityEngine::UI::Image::TrackSprite() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "TrackSprite",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::OnEnable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::OnDisable() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::UpdateMaterial() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 40)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::OnCanvasHierarchyChanged() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::GenerateSimpleSprite(::UnityEngine::UI::VertexHelper* vh, bool lPreserveAspect) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "GenerateSimpleSprite", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vh, lPreserveAspect);
}
inline void UnityEngine::UI::Image::GenerateSprite(::UnityEngine::UI::VertexHelper* vh, bool lPreserveAspect) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "GenerateSprite", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, vh, lPreserveAspect);
}
inline void UnityEngine::UI::Image::GenerateSlicedSprite(::UnityEngine::UI::VertexHelper* toFill) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "GenerateSlicedSprite", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, toFill);
}
inline void UnityEngine::UI::Image::GenerateTiledSprite(::UnityEngine::UI::VertexHelper* toFill) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "GenerateTiledSprite", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, toFill);
}
inline void UnityEngine::UI::Image::AddQuad(::UnityEngine::UI::VertexHelper* vertexHelper, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> quadPositions,
                                            ::UnityEngine::Color32 color, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> quadUVs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "AddQuad", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, vertexHelper, quadPositions, color, quadUVs);
}
inline void UnityEngine::UI::Image::AddQuad(::UnityEngine::UI::VertexHelper* vertexHelper, ::UnityEngine::Vector2 posMin, ::UnityEngine::Vector2 posMax, ::UnityEngine::Color32 color,
                                            ::UnityEngine::Vector2 uvMin, ::UnityEngine::Vector2 uvMax) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "AddQuad", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 6>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Color32>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, vertexHelper, posMin, posMax, color, uvMin, uvMax);
}
inline ::UnityEngine::Vector4 UnityEngine::UI::Image::GetAdjustedBorders(::UnityEngine::Vector4 border, ::UnityEngine::Rect adjustedRect) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "GetAdjustedBorders", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector4>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4, false>(this, ___internal_method, border, adjustedRect);
}
inline void UnityEngine::UI::Image::GenerateFilledSprite(::UnityEngine::UI::VertexHelper* toFill, bool preserveAspect) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "GenerateFilledSprite", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::VertexHelper*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, toFill, preserveAspect);
}
inline bool UnityEngine::UI::Image::RadialCut(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> xy, ::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> uv,
                                              float_t fill, bool invert, int32_t corner) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "RadialCut", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, xy, uv, fill, invert, corner);
}
inline void UnityEngine::UI::Image::RadialCut(::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*> xy, float_t cos, float_t sin, bool invert, int32_t corner) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "RadialCut", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Vector3, ::Array<::UnityEngine::Vector3>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, xy, cos, sin, invert, corner);
}
inline void UnityEngine::UI::Image::CalculateLayoutInputHorizontal() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 79)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::CalculateLayoutInputVertical() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 80)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::UI::Image::get_minWidth() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 81)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::UI::Image::get_preferredWidth() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 82)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::UI::Image::get_flexibleWidth() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 83)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::UI::Image::get_minHeight() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 84)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::UI::Image::get_preferredHeight() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 85)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::UI::Image::get_flexibleHeight() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 86)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline int32_t UnityEngine::UI::Image::get_layoutPriority() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 87)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool UnityEngine::UI::Image::IsRaycastLocationValid(::UnityEngine::Vector2 screenPoint, ::UnityEngine::Camera* eventCamera) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 88)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, screenPoint, eventCamera);
}
inline ::UnityEngine::Vector2 UnityEngine::UI::Image::MapCoordinate(::UnityEngine::Vector2 local, ::UnityEngine::Rect rect) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "MapCoordinate", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, local, rect);
}
inline void UnityEngine::UI::Image::RebuildImage(::UnityEngine::U2D::SpriteAtlas* spriteAtlas) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "RebuildImage", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::U2D::SpriteAtlas*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, spriteAtlas);
}
inline void UnityEngine::UI::Image::TrackImage(::UnityEngine::UI::Image* g) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "TrackImage", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Image*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, g);
}
inline void UnityEngine::UI::Image::UnTrackImage(::UnityEngine::UI::Image* g) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "UnTrackImage", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::Image*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, g);
}
inline void UnityEngine::UI::Image::OnDidApplyAnimationProperties() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::Image::_set_sprite_g__ResetAlphaHitThresholdIfNeeded_11_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "<set_sprite>g__ResetAlphaHitThresholdIfNeeded|11_0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UI::Image::_set_sprite_g__SpriteSupportsAlphaHitTest_11_1() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::Image*>::get(), "<set_sprite>g__SpriteSupportsAlphaHitTest|11_1",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::UI::Image* UnityEngine::UI::Image::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UI::Image*>());
}
/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr UnityEngine::UI::Image::operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* UnityEngine::UI::Image::i___UnityEngine__ISerializationCallbackReceiver() noexcept {
  return static_cast<::UnityEngine::ISerializationCallbackReceiver*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::UI::ILayoutElement"
constexpr UnityEngine::UI::Image::operator ::UnityEngine::UI::ILayoutElement*() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutElement*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UI::ILayoutElement"
constexpr ::UnityEngine::UI::ILayoutElement* UnityEngine::UI::Image::i___UnityEngine__UI__ILayoutElement() noexcept {
  return static_cast<::UnityEngine::UI::ILayoutElement*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::ICanvasRaycastFilter"
constexpr UnityEngine::UI::Image::operator ::UnityEngine::ICanvasRaycastFilter*() noexcept {
  return static_cast<::UnityEngine::ICanvasRaycastFilter*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::ICanvasRaycastFilter"
constexpr ::UnityEngine::ICanvasRaycastFilter* UnityEngine::UI::Image::i___UnityEngine__ICanvasRaycastFilter() noexcept {
  return static_cast<::UnityEngine::ICanvasRaycastFilter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::Image::Image() {}
