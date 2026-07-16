#pragma once
// IWYU pragma private; include "TMPro/TextContainer.hpp"
#include "TMPro/zzzz__TextContainerAnchors_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "TMPro/zzzz__TextContainer_def.hpp"
#include "TMPro/zzzz__TextContainerAnchors_def.hpp"
#include "TMPro/zzzz__TextMeshPro_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::TMPro::TextContainer.get_hasChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TextContainer::*)()>(&::TMPro::TextContainer::get_hasChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6933310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_hasChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.set_hasChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TextContainer::*)(bool)>(&::TMPro::TextContainer::set_hasChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6933318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "set_hasChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.get_pivot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::TMPro::TextContainer::*)()>(&::TMPro::TextContainer::get_pivot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6933320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_pivot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.set_pivot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TextContainer::*)(::UnityEngine::Vector2)>(&::TMPro::TextContainer::set_pivot)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6933328;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "set_pivot", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.get_anchorPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TextContainerAnchors (::TMPro::TextContainer::*)()>(&::TMPro::TextContainer::get_anchorPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6933588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_anchorPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.set_anchorPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TextContainer::*)(::TMPro::TextContainerAnchors)>(&::TMPro::TextContainer::set_anchorPosition)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6933590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "set_anchorPosition", {}, { ::i2c::type_of<::TMPro::TextContainerAnchors>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.get_rect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::TMPro::TextContainer::*)()>(&::TMPro::TextContainer::get_rect)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6933644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_rect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.set_rect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TextContainer::*)(::UnityEngine::Rect)>(&::TMPro::TextContainer::set_rect)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6933650;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "set_rect", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.get_size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::TMPro::TextContainer::*)()>(&::TMPro::TextContainer::get_size)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x693369c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_size", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.set_size
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TextContainer::*)(::UnityEngine::Vector2)>(&::TMPro::TextContainer::set_size)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x69336a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "set_size", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.get_width
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::TMPro::TextContainer::*)()>(&::TMPro::TextContainer::get_width)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69336ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_width", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.set_width
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TextContainer::*)(float_t)>(&::TMPro::TextContainer::set_width)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x69336f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "set_width", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.get_height
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::TMPro::TextContainer::*)()>(&::TMPro::TextContainer::get_height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6933708;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_height", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.set_height
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TextContainer::*)(float_t)>(&::TMPro::TextContainer::set_height)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6933710;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "set_height", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.get_isDefaultWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TextContainer::*)()>(&::TMPro::TextContainer::get_isDefaultWidth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6933724;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_isDefaultWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.get_isDefaultHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TextContainer::*)()>(&::TMPro::TextContainer::get_isDefaultHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x693372c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_isDefaultHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.get_isAutoFitting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::TMPro::TextContainer::*)()>(&::TMPro::TextContainer::get_isAutoFitting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6933734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_isAutoFitting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.set_isAutoFitting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TextContainer::*)(bool)>(&::TMPro::TextContainer::set_isAutoFitting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x693373c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "set_isAutoFitting", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.get_corners
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::TMPro::TextContainer::*)()>(&::TMPro::TextContainer::get_corners)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6933744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_corners", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.get_worldCorners
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (::TMPro::TextContainer::*)()>(&::TMPro::TextContainer::get_worldCorners)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x693374c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_worldCorners", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.get_margins
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::TMPro::TextContainer::*)()>(&::TMPro::TextContainer::get_margins)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6933754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_margins", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.set_margins
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TextContainer::*)(::UnityEngine::Vector4)>(&::TMPro::TextContainer::set_margins)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6933760;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "set_margins", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.get_rectTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RectTransform> (::TMPro::TextContainer::*)()>(&::TMPro::TextContainer::get_rectTransform)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x69337bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_rectTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.get_textMeshPro
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::TMPro::TextMeshPro> (::TMPro::TextContainer::*)()>(&::TMPro::TextContainer::get_textMeshPro)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6933858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_textMeshPro", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TextContainer::*)()>(&::TMPro::TextContainer::Awake)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x69338f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { ::i2c::class_of<::TMPro::TextContainer*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TextContainer::*)()>(&::TMPro::TextContainer::OnEnable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69339bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { ::i2c::class_of<::TMPro::TextContainer*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TextContainer::*)()>(&::TMPro::TextContainer::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x69339c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { ::i2c::class_of<::TMPro::TextContainer*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.OnContainerChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TextContainer::*)()>(&::TMPro::TextContainer::OnContainerChanged)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6933474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "OnContainerChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.OnRectTransformDimensionsChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TextContainer::*)()>(&::TMPro::TextContainer::OnRectTransformDimensionsChange)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6933b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { ::i2c::class_of<::TMPro::TextContainer*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.SetRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TextContainer::*)(::UnityEngine::Vector2)>(&::TMPro::TextContainer::SetRect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69336e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "SetRect", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.UpdateCorners
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TextContainer::*)()>(&::TMPro::TextContainer::UpdateCorners)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x69339c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "UpdateCorners", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.GetPivot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::TMPro::TextContainer::*)(::TMPro::TextContainerAnchors)>(&::TMPro::TextContainer::GetPivot)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x69335c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "GetPivot", {}, { ::i2c::type_of<::TMPro::TextContainerAnchors>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer.GetAnchorPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::TMPro::TextContainerAnchors (::TMPro::TextContainer::*)(::UnityEngine::Vector2)>(&::TMPro::TextContainer::GetAnchorPosition)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x693337c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "GetAnchorPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TMPro::TextContainer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::TMPro::TextContainer::*)()>(&::TMPro::TextContainer::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6933c84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& TMPro::TextContainer::__cordl_internal_get_m_hasChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hasChanged;
}
constexpr bool const& TMPro::TextContainer::__cordl_internal_get_m_hasChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_hasChanged;
}
constexpr void TMPro::TextContainer::__cordl_internal_set_m_hasChanged(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_hasChanged = value;
}
constexpr ::UnityEngine::Vector2& TMPro::TextContainer::__cordl_internal_get_m_pivot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_pivot;
}
constexpr ::UnityEngine::Vector2 const& TMPro::TextContainer::__cordl_internal_get_m_pivot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_pivot;
}
constexpr void TMPro::TextContainer::__cordl_internal_set_m_pivot(::UnityEngine::Vector2 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_pivot = value;
}
constexpr ::TMPro::TextContainerAnchors& TMPro::TextContainer::__cordl_internal_get_m_anchorPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_anchorPosition;
}
constexpr ::TMPro::TextContainerAnchors const& TMPro::TextContainer::__cordl_internal_get_m_anchorPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_anchorPosition;
}
constexpr void TMPro::TextContainer::__cordl_internal_set_m_anchorPosition(::TMPro::TextContainerAnchors value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_anchorPosition = value;
}
constexpr ::UnityEngine::Rect& TMPro::TextContainer::__cordl_internal_get_m_rect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_rect;
}
constexpr ::UnityEngine::Rect const& TMPro::TextContainer::__cordl_internal_get_m_rect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_rect;
}
constexpr void TMPro::TextContainer::__cordl_internal_set_m_rect(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_rect = value;
}
constexpr bool& TMPro::TextContainer::__cordl_internal_get_m_isDefaultWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isDefaultWidth;
}
constexpr bool const& TMPro::TextContainer::__cordl_internal_get_m_isDefaultWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isDefaultWidth;
}
constexpr void TMPro::TextContainer::__cordl_internal_set_m_isDefaultWidth(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_isDefaultWidth = value;
}
constexpr bool& TMPro::TextContainer::__cordl_internal_get_m_isDefaultHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isDefaultHeight;
}
constexpr bool const& TMPro::TextContainer::__cordl_internal_get_m_isDefaultHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isDefaultHeight;
}
constexpr void TMPro::TextContainer::__cordl_internal_set_m_isDefaultHeight(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_isDefaultHeight = value;
}
constexpr bool& TMPro::TextContainer::__cordl_internal_get_m_isAutoFitting() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isAutoFitting;
}
constexpr bool const& TMPro::TextContainer::__cordl_internal_get_m_isAutoFitting() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_isAutoFitting;
}
constexpr void TMPro::TextContainer::__cordl_internal_set_m_isAutoFitting(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_isAutoFitting = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& TMPro::TextContainer::__cordl_internal_get_m_corners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_corners;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& TMPro::TextContainer::__cordl_internal_get_m_corners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_corners;
}
constexpr void TMPro::TextContainer::__cordl_internal_set_m_corners(::ArrayW<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_corners = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& TMPro::TextContainer::__cordl_internal_get_m_worldCorners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_worldCorners;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& TMPro::TextContainer::__cordl_internal_get_m_worldCorners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_worldCorners;
}
constexpr void TMPro::TextContainer::__cordl_internal_set_m_worldCorners(::ArrayW<::UnityEngine::Vector3> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_worldCorners = value;
}
constexpr ::UnityEngine::Vector4& TMPro::TextContainer::__cordl_internal_get_m_margins() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_margins;
}
constexpr ::UnityEngine::Vector4 const& TMPro::TextContainer::__cordl_internal_get_m_margins() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_margins;
}
constexpr void TMPro::TextContainer::__cordl_internal_set_m_margins(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_margins = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& TMPro::TextContainer::__cordl_internal_get_m_rectTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& TMPro::TextContainer::__cordl_internal_get_m_rectTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_rectTransform;
}
constexpr void TMPro::TextContainer::__cordl_internal_set_m_rectTransform(::UnityW<::UnityEngine::RectTransform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_rectTransform = value;
}
constexpr ::UnityW<::TMPro::TextMeshPro>& TMPro::TextContainer::__cordl_internal_get_m_textMeshPro() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_textMeshPro;
}
constexpr ::UnityW<::TMPro::TextMeshPro> const& TMPro::TextContainer::__cordl_internal_get_m_textMeshPro() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_textMeshPro;
}
constexpr void TMPro::TextContainer::__cordl_internal_set_m_textMeshPro(::UnityW<::TMPro::TextMeshPro> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_textMeshPro = value;
}
inline void TMPro::TextContainer::setStaticF_k_defaultSize(::UnityEngine::Vector2 value) {
  ::cordl_internals::setStaticField<::UnityEngine::Vector2, "k_defaultSize", ::TMPro::TextContainer*>(std::forward<::UnityEngine::Vector2>(value));
}
inline ::UnityEngine::Vector2 TMPro::TextContainer::getStaticF_k_defaultSize() {
  return ::cordl_internals::getStaticField<::UnityEngine::Vector2, "k_defaultSize", ::TMPro::TextContainer*>();
}
inline bool TMPro::TextContainer::get_hasChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_hasChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void TMPro::TextContainer::set_hasChanged(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "set_hasChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 TMPro::TextContainer::get_pivot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_pivot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void TMPro::TextContainer::set_pivot(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "set_pivot", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::TMPro::TextContainerAnchors TMPro::TextContainer::get_anchorPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_anchorPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TextContainerAnchors>(this, ___internal_method);
}
inline void TMPro::TextContainer::set_anchorPosition(::TMPro::TextContainerAnchors value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "set_anchorPosition", {}, { ::i2c::type_of<::TMPro::TextContainerAnchors>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rect TMPro::TextContainer::get_rect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_rect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void TMPro::TextContainer::set_rect(::UnityEngine::Rect value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "set_rect", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 TMPro::TextContainer::get_size() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_size", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void TMPro::TextContainer::set_size(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "set_size", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t TMPro::TextContainer::get_width() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_width", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void TMPro::TextContainer::set_width(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "set_width", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t TMPro::TextContainer::get_height() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_height", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void TMPro::TextContainer::set_height(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "set_height", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool TMPro::TextContainer::get_isDefaultWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_isDefaultWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool TMPro::TextContainer::get_isDefaultHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_isDefaultHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool TMPro::TextContainer::get_isAutoFitting() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_isAutoFitting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void TMPro::TextContainer::set_isAutoFitting(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "set_isAutoFitting", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Vector3> TMPro::TextContainer::get_corners() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_corners", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector3> TMPro::TextContainer::get_worldCorners() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_worldCorners", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(this, ___internal_method);
}
inline ::UnityEngine::Vector4 TMPro::TextContainer::get_margins() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_margins", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline void TMPro::TextContainer::set_margins(::UnityEngine::Vector4 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "set_margins", {}, { ::i2c::type_of<::UnityEngine::Vector4>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::RectTransform> TMPro::TextContainer::get_rectTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_rectTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RectTransform>>(this, ___internal_method);
}
inline ::UnityW<::TMPro::TextMeshPro> TMPro::TextContainer::get_textMeshPro() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "get_textMeshPro", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::TMPro::TextMeshPro>>(this, ___internal_method);
}
inline void TMPro::TextContainer::Awake() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::TMPro::TextContainer*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TextContainer::OnEnable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::TMPro::TextContainer*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TextContainer::OnDisable() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::TMPro::TextContainer*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TextContainer::OnContainerChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "OnContainerChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TextContainer::OnRectTransformDimensionsChange() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::TMPro::TextContainer*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void TMPro::TextContainer::SetRect(::UnityEngine::Vector2 size) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "SetRect", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size);
}
inline void TMPro::TextContainer::UpdateCorners() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "UpdateCorners", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 TMPro::TextContainer::GetPivot(::TMPro::TextContainerAnchors anchor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "GetPivot", {}, { ::i2c::type_of<::TMPro::TextContainerAnchors>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, anchor);
}
inline ::TMPro::TextContainerAnchors TMPro::TextContainer::GetAnchorPosition(::UnityEngine::Vector2 pivot) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { "GetAnchorPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::TMPro::TextContainerAnchors>(this, ___internal_method, pivot);
}
inline void TMPro::TextContainer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::TMPro::TextContainer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::TMPro::TextContainer* TMPro::TextContainer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::TMPro::TextContainer*>());
}
// Ctor Parameters []
constexpr ::TMPro::TextContainer::TextContainer() {}
