#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UIDocument.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocument_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__IRuntimePanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelSettings_def.hpp"
#include "UnityEngine/UIElements/zzzz__RuntimePanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocumentList_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIDocument_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualTreeAsset_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
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
  constexpr static std::size_t addrs = 0x6dae338;

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
  constexpr static std::size_t addrs = 0x6dae340;

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
  constexpr static std::size_t addrs = 0x6dae5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_parentUI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.set_parentUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)(::UnityEngine::UIElements::UIDocument*)>(&::UnityEngine::UIElements::UIDocument::set_parentUI)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dae5bc;

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
  constexpr static std::size_t addrs = 0x6dae5c4;

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
  constexpr static std::size_t addrs = 0x6dae5cc;

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
  constexpr static std::size_t addrs = 0x6dae330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_rootVisualElement", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.get_firstChildInserIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::get_firstChildInserIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dae9b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_firstChildInserIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.get_worldSpaceSizeMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode (::UnityEngine::UIElements::UIDocument::*)()>(
    &::UnityEngine::UIElements::UIDocument::get_worldSpaceSizeMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dae9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_worldSpaceSizeMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.get_sortingOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::get_sortingOrder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dae9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_sortingOrder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.set_sortingOrder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)(float_t)>(&::UnityEngine::UIElements::UIDocument::set_sortingOrder)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6dae9d0;

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
  constexpr static std::size_t addrs = 0x6dae9e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "ApplySortingOrder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6daeac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::Awake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6daeb44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::OnEnable)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x6daebdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.ResolveRuntimePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::ResolveRuntimePanel)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6daecf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "ResolveRuntimePanel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.get_runtimePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::IRuntimePanel* (::UnityEngine::UIElements::UIDocument::*)()>(
    &::UnityEngine::UIElements::UIDocument::get_runtimePanel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6daed88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_runtimePanel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::LateUpdate)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x6daeda0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.UpdateRenderer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::UpdateRenderer)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x6daf3a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "UpdateRenderer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.SanitizeRendererBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::UnityEngine::UIElements::UIDocument::*)(::UnityEngine::Bounds)>(
    &::UnityEngine::UIElements::UIDocument::SanitizeRendererBounds)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6daf9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "SanitizeRendererBounds", {}, { ::i2c::type_of<::UnityEngine::Bounds>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.AddOrRemoveRendererComponent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::AddOrRemoveRendererComponent)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x6daee90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "AddOrRemoveRendererComponent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.UpdateCutRenderChainFlag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::UpdateCutRenderChainFlag)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6daf8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "UpdateCutRenderChainFlag", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.SetTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::SetTransform)> {
  constexpr static std::size_t size = 0x3bc;
  constexpr static std::size_t addrs = 0x6daefe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "SetTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.ClearTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::ClearTransform)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x6daf658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "ClearTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.get_pixelsPerUnit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::get_pixelsPerUnit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6daf980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_pixelsPerUnit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.ComputeTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)(::UnityEngine::Transform*, ::by_ref<::UnityEngine::Matrix4x4>)>(
    &::UnityEngine::UIElements::UIDocument::ComputeTransform)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x6dafa74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(),
                                                             { "ComputeTransform", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.SetNoTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::VisualElement*)>(&::UnityEngine::UIElements::UIDocument::SetNoTransform)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x6dafe28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "SetNoTransform", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.SetupFromHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::SetupFromHierarchy)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6daeb48;

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
  constexpr static std::size_t addrs = 0x6db0084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "FindUIDocumentParent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::Reset)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6db0158;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.AddChildAndInsertContentToVisualTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)(::UnityEngine::UIElements::UIDocument*)>(
    &::UnityEngine::UIElements::UIDocument::AddChildAndInsertContentToVisualTree)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6db0260;

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
  constexpr static std::size_t addrs = 0x6db0074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "RemoveChild", {}, { ::i2c::type_of<::UnityEngine::UIElements::UIDocument*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.RecreateUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::RecreateUI)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x6dae5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "RecreateUI", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.SetupRootClassList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::SetupRootClassList)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6db03c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "SetupRootClassList", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.UpdateWorldSpaceSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::UpdateWorldSpaceSize)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0x6db04cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "UpdateWorldSpaceSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.AddRootVisualElementToTree
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::AddRootVisualElementToTree)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6dae9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "AddRootVisualElementToTree", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.RemoveFromHierarchy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::RemoveFromHierarchy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6db02f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "RemoveFromHierarchy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::OnDisable)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6db086c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.OnTransformChildrenChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::OnTransformChildrenChanged)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x6db08fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "OnTransformChildrenChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.OnTransformParentChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::OnTransformParentChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6db0b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "OnTransformParentChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIDocument.ReactToHierarchyChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIDocument::*)()>(&::UnityEngine::UIElements::UIDocument::ReactToHierarchyChanged)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6db0ae8;

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
constexpr ::UnityEngine::UIElements::VisualElement*& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_RootVisualElement() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RootVisualElement;
}
constexpr ::UnityEngine::UIElements::VisualElement* const& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_RootVisualElement() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RootVisualElement;
}
constexpr void UnityEngine::UIElements::UIDocument::__cordl_internal_set_m_RootVisualElement(::UnityEngine::UIElements::VisualElement* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RootVisualElement = value;
}
constexpr ::UnityEngine::UIElements::RuntimePanel*& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_RuntimePanel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RuntimePanel;
}
constexpr ::UnityEngine::UIElements::RuntimePanel* const& UnityEngine::UIElements::UIDocument::__cordl_internal_get_m_RuntimePanel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RuntimePanel;
}
constexpr void UnityEngine::UIElements::UIDocument::__cordl_internal_set_m_RuntimePanel(::UnityEngine::UIElements::RuntimePanel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RuntimePanel = value;
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
inline int32_t UnityEngine::UIElements::UIDocument::get_firstChildInserIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_firstChildInserIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode UnityEngine::UIElements::UIDocument::get_worldSpaceSizeMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_worldSpaceSizeMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::UIDocument_WorldSpaceSizeMode>(this, ___internal_method);
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
inline void UnityEngine::UIElements::UIDocument::ResolveRuntimePanel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "ResolveRuntimePanel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::IRuntimePanel* UnityEngine::UIElements::UIDocument::get_runtimePanel() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "get_runtimePanel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::IRuntimePanel*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "LateUpdate", {}, {} })));
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
inline void UnityEngine::UIElements::UIDocument::UpdateCutRenderChainFlag() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "UpdateCutRenderChainFlag", {}, {} })));
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
inline void UnityEngine::UIElements::UIDocument::ComputeTransform(::UnityEngine::Transform* transform, ::by_ref<::UnityEngine::Matrix4x4> matrix) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(),
                                                           { "ComputeTransform", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, transform, matrix);
}
inline void UnityEngine::UIElements::UIDocument::SetNoTransform(::UnityEngine::UIElements::VisualElement* visualElement) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "SetNoTransform", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, visualElement);
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
inline void UnityEngine::UIElements::UIDocument::SetupRootClassList() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "SetupRootClassList", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIDocument::UpdateWorldSpaceSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIDocument*>(), { "UpdateWorldSpaceSize", {}, {} })));
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
