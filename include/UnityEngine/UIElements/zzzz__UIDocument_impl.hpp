#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIDocument.hpp"
#include "UnityEngine/UIElements/zzzz__PivotReferenceSize_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Pivot_impl.hpp"
#include "UnityEngine/UIElements/zzzz__Position_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocument_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ColliderUpdateMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__IRuntimePanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelSettings_def.hpp"
#include "UnityEngine/UIElements/zzzz__PivotReferenceSize_def.hpp"
#include "UnityEngine/UIElements/zzzz__Pivot_def.hpp"
#include "UnityEngine/UIElements/zzzz__Position_def.hpp"
#include "UnityEngine/UIElements/zzzz__RuntimePanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocumentList_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocumentRootElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocument_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElementFocusRing_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__BoxCollider_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode::UIDocument_WorldSpaceSizeMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode::UIDocument_WorldSpaceSizeMode() {}
constexpr ::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode::Dynamic{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode::Fixed{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.get_panelSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::PanelSettings> (::UnityEngine::UIElements::UIDocument::*)()>(
    &::UnityEngine::UIElements::UIDocument::get_panelSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7248c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_panelSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.set_panelSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)(::UnityEngine::UIElements::PanelSettings*)>(
    &::UnityEngine::UIElements::UIDocument::set_panelSettings)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x7248c64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "set_panelSettings", {}, { ::i2c::type_of<::UnityEngine::UIElements::PanelSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.get_parentUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::UIDocument> (::UnityEngine::UIElements::UIDocument::*)()>(
    &::UnityEngine::UIElements::UIDocument::get_parentUI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7248ed8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_parentUI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.set_parentUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)(::UnityEngine::UIElements::UIDocument*)>(&::UnityEngine::UIElements::UIDocument::set_parentUI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7248ee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "set_parentUI", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIDocument*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.get_visualTreeAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::VisualTreeAsset> (::UnityEngine::UIElements::UIDocument::*)()>(
    &::UnityEngine::UIElements::UIDocument::get_visualTreeAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7248ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_visualTreeAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.set_visualTreeAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)(::UnityEngine::UIElements::VisualTreeAsset*)>(
    &::UnityEngine::UIElements::UIDocument::set_visualTreeAsset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7248ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "set_visualTreeAsset", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.get_rootVisualElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElement* (::UnityEngine::UIElements::UIDocument::*)()>(
    &::UnityEngine::UIElements::UIDocument::get_rootVisualElement)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7243ac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_rootVisualElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.set_rootVisualElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIDocument::set_rootVisualElement)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x72493f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "set_rootVisualElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.get_focusRing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::VisualElementFocusRing* (::UnityEngine::UIElements::UIDocument::*)()>(
    &::UnityEngine::UIElements::UIDocument::get_focusRing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72494ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_focusRing", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.set_focusRing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)(::UnityEngine::UIElements::VisualElementFocusRing*)>(
    &::UnityEngine::UIElements::UIDocument::set_focusRing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72494f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(),
                                                                                           { "set_focusRing", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementFocusRing*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.get_firstChildInserIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::get_firstChildInserIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72494fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_firstChildInserIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.get_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Position (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::get_position)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7249504;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_position", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.set_position
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)(::UnityEngine::UIElements::Position)>(&::UnityEngine::UIElements::UIDocument::set_position)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x724950c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "set_position", {}, { ::i2c::type_of<::UnityEngine::UIElements::Position>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.get_worldSpaceSizeMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode (::UnityEngine::UIElements::UIDocument::*)()>(
    &::UnityEngine::UIElements::UIDocument::get_worldSpaceSizeMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x72496e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_worldSpaceSizeMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.set_worldSpaceSizeMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)(::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode)>(
    &::UnityEngine::UIElements::UIDocument::set_worldSpaceSizeMode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x72496e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(),
                                                             { "set_worldSpaceSizeMode", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.get_worldSpaceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::get_worldSpaceSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7249ba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_worldSpaceSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.set_worldSpaceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::UIDocument::set_worldSpaceSize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x7249bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "set_worldSpaceSize", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.get_isWorldSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::get_isWorldSpace)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x7249bd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_isWorldSpace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.get_isTransformControlledByGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::get_isTransformControlledByGameObject)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x7249c5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_isTransformControlledByGameObject", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.get_pivotReferenceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::PivotReferenceSize (::UnityEngine::UIElements::UIDocument::*)()>(
    &::UnityEngine::UIElements::UIDocument::get_pivotReferenceSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7249cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_pivotReferenceSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.set_pivotReferenceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)(::UnityEngine::UIElements::PivotReferenceSize)>(
    &::UnityEngine::UIElements::UIDocument::set_pivotReferenceSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7249cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(),
                                                                                           { "set_pivotReferenceSize", {}, { ::i2c::type_of<::UnityEngine::UIElements::PivotReferenceSize>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.get_pivot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::Pivot (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::get_pivot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7249d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_pivot", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.set_pivot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)(::UnityEngine::UIElements::Pivot)>(&::UnityEngine::UIElements::UIDocument::set_pivot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7249d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "set_pivot", {}, { ::i2c::type_of<::UnityEngine::UIElements::Pivot>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.get_sortingOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::get_sortingOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x7249d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_sortingOrder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.set_sortingOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)(float_t)>(&::UnityEngine::UIElements::UIDocument::set_sortingOrder)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x7249d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "set_sortingOrder", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.ApplySortingOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::ApplySortingOrder)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7249d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "ApplySortingOrder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.FindRootUIDocument
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::UIDocument> (*)(::UnityEngine::UIElements::VisualElement*)>(
    &::UnityEngine::UIElements::UIDocument::FindRootUIDocument)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x7242e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "FindRootUIDocument", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x7249e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x7249ea4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::OnEnable)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x7249f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument._Enable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::_Enable)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x7249f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "_Enable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.get_runtimePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IRuntimePanel* (::UnityEngine::UIElements::UIDocument::*)()>(
    &::UnityEngine::UIElements::UIDocument::get_runtimePanel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x724a0ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_runtimePanel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.get_containerPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::RuntimePanel* (::UnityEngine::UIElements::UIDocument::*)()>(
    &::UnityEngine::UIElements::UIDocument::get_containerPanel)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x724a0b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_containerPanel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::LateUpdate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x724a138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.DoUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::DoUpdate)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x724a13c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "DoUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.UpdateRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::UpdateRenderer)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x724a9e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "UpdateRenderer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.SanitizeRendererBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::UnityEngine::UIElements::UIDocument::*)(::UnityEngine::Bounds)>(
    &::UnityEngine::UIElements::UIDocument::SanitizeRendererBounds)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x724b030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "SanitizeRendererBounds", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.AddOrRemoveRendererComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::AddOrRemoveRendererComponent)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x724a2bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "AddOrRemoveRendererComponent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.UpdateWorldSpaceCollider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)(::UnityEngine::UIElements::ColliderUpdateMode)>(
    &::UnityEngine::UIElements::UIDocument::UpdateWorldSpaceCollider)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x724ac4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(),
                                                                                           { "UpdateWorldSpaceCollider", {}, { ::i2c::type_of<::UnityEngine::UIElements::ColliderUpdateMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.RemoveWorldSpaceCollider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::RemoveWorldSpaceCollider)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x724a254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "RemoveWorldSpaceCollider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.IsValidBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Bounds const>)>(&::UnityEngine::UIElements::UIDocument::IsValidBounds)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x724b324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "IsValidBounds", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bounds const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.UpdateIsWorldSpaceRootFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::UpdateIsWorldSpaceRootFlag)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x724af24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "UpdateIsWorldSpaceRootFlag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.SetTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::SetTransform)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x724a3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "SetTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.ClearTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::ClearTransform)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x724a768;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "ClearTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.get_pixelsPerUnit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::get_pixelsPerUnit)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x724b010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_pixelsPerUnit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.ScaleAndFlipMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::ScaleAndFlipMatrix)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x724b5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "ScaleAndFlipMatrix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.LocalBoundsFromPivotSource
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::LocalBoundsFromPivotSource)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x724b824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "LocalBoundsFromPivotSource", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.PivotOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::PivotOffset)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x724b94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "PivotOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.TransformToGameObjectMatrix
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::TransformToGameObjectMatrix)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x724b170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "TransformToGameObjectMatrix", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.ComputeTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)(::UnityEngine::Transform*, ::by_ref<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::UIElements::UIDocument::ComputeTransform)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x724b358;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(),
                                                             { "ComputeTransform", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.GetPivotAsPercent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::UIElements::Pivot)>(&::UnityEngine::UIElements::UIDocument::GetPivotAsPercent)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x724b9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "GetPivotAsPercent", {}, { ::i2c::type_of<::UnityEngine::UIElements::Pivot>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.SetupFromHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::SetupFromHierarchy)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x7249ea8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "SetupFromHierarchy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.FindUIDocumentParent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::UIElements::UIDocument> (::UnityEngine::UIElements::UIDocument::*)()>(
    &::UnityEngine::UIElements::UIDocument::FindUIDocumentParent)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x724b9e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "FindUIDocumentParent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::Reset)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x724bab8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.AddChildAndInsertContentToVisualTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)(::UnityEngine::UIElements::UIDocument*)>(
    &::UnityEngine::UIElements::UIDocument::AddChildAndInsertContentToVisualTree)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x724bbc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "AddChildAndInsertContentToVisualTree", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIDocument*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.RemoveChild
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)(::UnityEngine::UIElements::UIDocument*)>(&::UnityEngine::UIElements::UIDocument::RemoveChild)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x724b9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "RemoveChild", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIDocument*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.RecreateUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::RecreateUI)> {
  constexpr static std::size_t size = 0x500;
  constexpr static std::size_t addrs = 0x7248ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "RecreateUI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.SetupPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::SetupPosition)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x7249524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "SetupPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.SetupRootClassList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::SetupRootClassList)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x724bd34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "SetupRootClassList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.SetupWorldSpaceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::SetupWorldSpaceSize)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0x7249700;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "SetupWorldSpaceSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.AddRootVisualElementToTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::AddRootVisualElementToTree)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x7249d34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "AddRootVisualElementToTree", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.RemoveFromHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::RemoveFromHierarchy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x724bc64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "RemoveFromHierarchy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::OnDisable)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x724bfc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.OnTransformChildrenChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::OnTransformChildrenChanged)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x724c0c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "OnTransformChildrenChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.OnTransformParentChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::OnTransformParentChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x724c35c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "OnTransformParentChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.ReactToHierarchyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::ReactToHierarchyChanged)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x724c2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "ReactToHierarchyChanged", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_UIDocumentCreationIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UIDocumentCreationIndex;
}
constexpr int32_t const& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_UIDocumentCreationIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UIDocumentCreationIndex;
}
constexpr void UnityEngine::UIElements::UIDocument::__cordl_internal_set_m_UIDocumentCreationIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UIDocumentCreationIndex = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings>& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_PanelSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PanelSettings;
}
constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings> const& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_PanelSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PanelSettings;
}
constexpr void UnityEngine::UIElements::UIDocument::__cordl_internal_set_m_PanelSettings(::UnityW<::UnityEngine::UIElements::PanelSettings> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PanelSettings = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings>& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_PreviousPanelSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousPanelSettings;
}
constexpr ::UnityW<::UnityEngine::UIElements::PanelSettings> const& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_PreviousPanelSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PreviousPanelSettings;
}
constexpr void UnityEngine::UIElements::UIDocument::__cordl_internal_set_m_PreviousPanelSettings(::UnityW<::UnityEngine::UIElements::PanelSettings> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PreviousPanelSettings = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::UIDocument>& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_ParentUI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParentUI;
}
constexpr ::UnityW<::UnityEngine::UIElements::UIDocument> const& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_ParentUI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ParentUI;
}
constexpr void UnityEngine::UIElements::UIDocument::__cordl_internal_set_m_ParentUI(::UnityW<::UnityEngine::UIElements::UIDocument> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ParentUI = value;
}
constexpr ::UnityEngine::UIElements::UIDocumentList*& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_ChildrenContent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChildrenContent;
}
constexpr ::UnityEngine::UIElements::UIDocumentList* const& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_ChildrenContent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChildrenContent;
}
constexpr void UnityEngine::UIElements::UIDocument::__cordl_internal_set_m_ChildrenContent(::UnityEngine::UIElements::UIDocumentList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ChildrenContent = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>*& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_ChildrenContentCopy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChildrenContentCopy;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>* const& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_ChildrenContentCopy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ChildrenContentCopy;
}
constexpr void UnityEngine::UIElements::UIDocument::__cordl_internal_set_m_ChildrenContentCopy(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::UIDocument>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ChildrenContentCopy = value;
}
constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset>& UnityEngine::UIElements::UIDocument::__cordl_internal_get_sourceAsset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceAsset;
}
constexpr ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> const& UnityEngine::UIElements::UIDocument::__cordl_internal_get_sourceAsset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sourceAsset;
}
constexpr void UnityEngine::UIElements::UIDocument::__cordl_internal_set_sourceAsset(::UnityW<::UnityEngine::UIElements::VisualTreeAsset> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sourceAsset = value;
}
constexpr ::UnityEngine::UIElements::UIDocumentRootElement*& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_RootVisualElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RootVisualElement;
}
constexpr ::UnityEngine::UIElements::UIDocumentRootElement* const& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_RootVisualElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RootVisualElement;
}
constexpr void UnityEngine::UIElements::UIDocument::__cordl_internal_set_m_RootVisualElement(::UnityEngine::UIElements::UIDocumentRootElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RootVisualElement = value;
}
constexpr ::UnityEngine::UIElements::VisualElementFocusRing*& UnityEngine::UIElements::UIDocument::__cordl_internal_get__focusRing_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____focusRing_k__BackingField;
}
constexpr ::UnityEngine::UIElements::VisualElementFocusRing* const& UnityEngine::UIElements::UIDocument::__cordl_internal_get__focusRing_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____focusRing_k__BackingField;
}
constexpr void UnityEngine::UIElements::UIDocument::__cordl_internal_set__focusRing_k__BackingField(::UnityEngine::UIElements::VisualElementFocusRing* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____focusRing_k__BackingField = value;
}
constexpr int32_t& UnityEngine::UIElements::UIDocument::__cordl_internal_get_softPointerCaptures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___softPointerCaptures;
}
constexpr int32_t const& UnityEngine::UIElements::UIDocument::__cordl_internal_get_softPointerCaptures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___softPointerCaptures;
}
constexpr void UnityEngine::UIElements::UIDocument::__cordl_internal_set_softPointerCaptures(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___softPointerCaptures = value;
}
constexpr int32_t& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_FirstChildInsertIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstChildInsertIndex;
}
constexpr int32_t const& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_FirstChildInsertIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FirstChildInsertIndex;
}
constexpr void UnityEngine::UIElements::UIDocument::__cordl_internal_set_m_FirstChildInsertIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FirstChildInsertIndex = value;
}
constexpr float_t& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_SortingOrder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortingOrder;
}
constexpr float_t const& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_SortingOrder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_SortingOrder;
}
constexpr void UnityEngine::UIElements::UIDocument::__cordl_internal_set_m_SortingOrder(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_SortingOrder = value;
}
constexpr ::UnityEngine::UIElements::Position& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_Position() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Position;
}
constexpr ::UnityEngine::UIElements::Position const& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_Position() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Position;
}
constexpr void UnityEngine::UIElements::UIDocument::__cordl_internal_set_m_Position(::UnityEngine::UIElements::Position value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Position = value;
}
constexpr ::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_WorldSpaceSizeMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldSpaceSizeMode;
}
constexpr ::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode const& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_WorldSpaceSizeMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldSpaceSizeMode;
}
constexpr void UnityEngine::UIElements::UIDocument::__cordl_internal_set_m_WorldSpaceSizeMode(::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WorldSpaceSizeMode = value;
}
constexpr float_t& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_WorldSpaceWidth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldSpaceWidth;
}
constexpr float_t const& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_WorldSpaceWidth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldSpaceWidth;
}
constexpr void UnityEngine::UIElements::UIDocument::__cordl_internal_set_m_WorldSpaceWidth(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WorldSpaceWidth = value;
}
constexpr float_t& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_WorldSpaceHeight() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldSpaceHeight;
}
constexpr float_t const& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_WorldSpaceHeight() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldSpaceHeight;
}
constexpr void UnityEngine::UIElements::UIDocument::__cordl_internal_set_m_WorldSpaceHeight(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WorldSpaceHeight = value;
}
constexpr ::UnityEngine::UIElements::PivotReferenceSize& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_PivotReferenceSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PivotReferenceSize;
}
constexpr ::UnityEngine::UIElements::PivotReferenceSize const& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_PivotReferenceSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PivotReferenceSize;
}
constexpr void UnityEngine::UIElements::UIDocument::__cordl_internal_set_m_PivotReferenceSize(::UnityEngine::UIElements::PivotReferenceSize value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PivotReferenceSize = value;
}
constexpr ::UnityEngine::UIElements::Pivot& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_Pivot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pivot;
}
constexpr ::UnityEngine::UIElements::Pivot const& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_Pivot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Pivot;
}
constexpr void UnityEngine::UIElements::UIDocument::__cordl_internal_set_m_Pivot(::UnityEngine::UIElements::Pivot value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Pivot = value;
}
constexpr ::UnityW<::UnityEngine::BoxCollider>& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_WorldSpaceCollider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldSpaceCollider;
}
constexpr ::UnityW<::UnityEngine::BoxCollider> const& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_WorldSpaceCollider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WorldSpaceCollider;
}
constexpr void UnityEngine::UIElements::UIDocument::__cordl_internal_set_m_WorldSpaceCollider(::UnityW<::UnityEngine::BoxCollider> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WorldSpaceCollider = value;
}
constexpr bool& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_RootHasWorldTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RootHasWorldTransform;
}
constexpr bool const& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_RootHasWorldTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RootHasWorldTransform;
}
constexpr void UnityEngine::UIElements::UIDocument::__cordl_internal_set_m_RootHasWorldTransform(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RootHasWorldTransform = value;
}
inline void UnityEngine::UIElements::UIDocument::setStaticF_s_CurrentUIDocumentCounter(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_CurrentUIDocumentCounter", ::UnityEngine::UIElements::UIDocument*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIDocument::getStaticF_s_CurrentUIDocumentCounter() {
  return ::cordl_internals::getStaticField<int32_t, "s_CurrentUIDocumentCounter", ::UnityEngine::UIElements::UIDocument*>();
}
inline void UnityEngine::UIElements::UIDocument::setStaticF_EnabledDocumentCount(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "EnabledDocumentCount", ::UnityEngine::UIElements::UIDocument*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIDocument::getStaticF_EnabledDocumentCount() {
  return ::cordl_internals::getStaticField<int32_t, "EnabledDocumentCount", ::UnityEngine::UIElements::UIDocument*>();
}
inline ::UnityW<::UnityEngine::UIElements::PanelSettings> UnityEngine::UIElements::UIDocument::get_panelSettings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_panelSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::PanelSettings>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::set_panelSettings(::UnityEngine::UIElements::PanelSettings* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "set_panelSettings", {}, { ::i2c::type_of<::UnityEngine::UIElements::PanelSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UIElements::UIDocument> UnityEngine::UIElements::UIDocument::get_parentUI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_parentUI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::UIDocument>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::set_parentUI(::UnityEngine::UIElements::UIDocument* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "set_parentUI", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIDocument*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::UIElements::VisualTreeAsset> UnityEngine::UIElements::UIDocument::get_visualTreeAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_visualTreeAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::VisualTreeAsset>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::set_visualTreeAsset(::UnityEngine::UIElements::VisualTreeAsset* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "set_visualTreeAsset", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualTreeAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::VisualElement* UnityEngine::UIElements::UIDocument::get_rootVisualElement() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_rootVisualElement", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElement*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::set_rootVisualElement(::UnityEngine::UIElements::VisualElement* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "set_rootVisualElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::VisualElementFocusRing* UnityEngine::UIElements::UIDocument::get_focusRing() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_focusRing", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::VisualElementFocusRing*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::set_focusRing(::UnityEngine::UIElements::VisualElementFocusRing* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "set_focusRing", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElementFocusRing*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::UIElements::UIDocument::get_firstChildInserIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_firstChildInserIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::Position UnityEngine::UIElements::UIDocument::get_position() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_position", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Position>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::set_position(::UnityEngine::UIElements::Position value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "set_position", {}, { ::i2c::type_of<::UnityEngine::UIElements::Position>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode UnityEngine::UIElements::UIDocument::get_worldSpaceSizeMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_worldSpaceSizeMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::set_worldSpaceSizeMode(::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(),
                                                           { "set_worldSpaceSizeMode", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::UIDocument::get_worldSpaceSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_worldSpaceSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::set_worldSpaceSize(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "set_worldSpaceSize", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::UIDocument::get_isWorldSpace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_isWorldSpace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIDocument::get_isTransformControlledByGameObject() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_isTransformControlledByGameObject", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::PivotReferenceSize UnityEngine::UIElements::UIDocument::get_pivotReferenceSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_pivotReferenceSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PivotReferenceSize>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::set_pivotReferenceSize(::UnityEngine::UIElements::PivotReferenceSize value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(),
                                                                                         { "set_pivotReferenceSize", {}, { ::i2c::type_of<::UnityEngine::UIElements::PivotReferenceSize>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::UIElements::Pivot UnityEngine::UIElements::UIDocument::get_pivot() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_pivot", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::Pivot>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::set_pivot(::UnityEngine::UIElements::Pivot value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "set_pivot", {}, { ::i2c::type_of<::UnityEngine::UIElements::Pivot>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::UIElements::UIDocument::get_sortingOrder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_sortingOrder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::set_sortingOrder(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "set_sortingOrder", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIDocument::ApplySortingOrder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "ApplySortingOrder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::UIElements::UIDocument> UnityEngine::UIElements::UIDocument::FindRootUIDocument(::UnityEngine::UIElements::VisualElement* element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "FindRootUIDocument", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::UIDocument>>(nullptr, ___internal_method, element);
}
inline void UnityEngine::UIElements::UIDocument::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::_Enable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "_Enable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::IRuntimePanel* UnityEngine::UIElements::UIDocument::get_runtimePanel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_runtimePanel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IRuntimePanel*>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::RuntimePanel* UnityEngine::UIElements::UIDocument::get_containerPanel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_containerPanel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::RuntimePanel*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::DoUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "DoUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::UpdateRenderer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "UpdateRenderer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Bounds UnityEngine::UIElements::UIDocument::SanitizeRendererBounds(::UnityEngine::Bounds b) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "SanitizeRendererBounds", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method, b);
}
inline void UnityEngine::UIElements::UIDocument::AddOrRemoveRendererComponent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "AddOrRemoveRendererComponent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::UpdateWorldSpaceCollider(::UnityEngine::UIElements::ColliderUpdateMode mode) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(),
                                                                                         { "UpdateWorldSpaceCollider", {}, { ::i2c::type_of<::UnityEngine::UIElements::ColliderUpdateMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline void UnityEngine::UIElements::UIDocument::RemoveWorldSpaceCollider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "RemoveWorldSpaceCollider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIDocument::IsValidBounds(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Bounds const> b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "IsValidBounds", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bounds const>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, b);
}
inline void UnityEngine::UIElements::UIDocument::UpdateIsWorldSpaceRootFlag() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "UpdateIsWorldSpaceRootFlag", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::SetTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "SetTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::ClearTransform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "ClearTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::UIDocument::get_pixelsPerUnit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_pixelsPerUnit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::UIElements::UIDocument::ScaleAndFlipMatrix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "ScaleAndFlipMatrix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline ::UnityEngine::Bounds UnityEngine::UIElements::UIDocument::LocalBoundsFromPivotSource() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "LocalBoundsFromPivotSource", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::UIDocument::PivotOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "PivotOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::UIElements::UIDocument::TransformToGameObjectMatrix() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "TransformToGameObjectMatrix", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::ComputeTransform(::UnityEngine::Transform* transform, ::by_ref<::UnityEngine::Matrix4x4> matrix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(),
                                                           { "ComputeTransform", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transform, matrix);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::UIDocument::GetPivotAsPercent(::UnityEngine::UIElements::Pivot origin) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "GetPivotAsPercent", {}, { ::i2c::type_of<::UnityEngine::UIElements::Pivot>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, origin);
}
inline void UnityEngine::UIElements::UIDocument::SetupFromHierarchy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "SetupFromHierarchy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::UIElements::UIDocument> UnityEngine::UIElements::UIDocument::FindUIDocumentParent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "FindUIDocumentParent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::UIElements::UIDocument>>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::AddChildAndInsertContentToVisualTree(::UnityEngine::UIElements::UIDocument* child) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "AddChildAndInsertContentToVisualTree", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIDocument*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, child);
}
inline void UnityEngine::UIElements::UIDocument::RemoveChild(::UnityEngine::UIElements::UIDocument* child) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "RemoveChild", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIDocument*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, child);
}
inline void UnityEngine::UIElements::UIDocument::RecreateUI() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "RecreateUI", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::SetupPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "SetupPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::SetupRootClassList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "SetupRootClassList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::SetupWorldSpaceSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "SetupWorldSpaceSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::AddRootVisualElementToTree() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "AddRootVisualElementToTree", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::RemoveFromHierarchy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "RemoveFromHierarchy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::OnTransformChildrenChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "OnTransformChildrenChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::OnTransformParentChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "OnTransformParentChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::ReactToHierarchyChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "ReactToHierarchyChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIDocument* UnityEngine::UIElements::UIDocument::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIDocument*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIDocument::UIDocument() {}
