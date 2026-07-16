#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IMGUIContainer.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/zzzz__BindingId_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ContextType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/UIElements/zzzz__IMGUIContainer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextType_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__IMGUIContainer_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__GUILayoutUtility_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__ObjectGUIState_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer_UxmlFactory::*)()>(&::UnityEngine::UIElements::IMGUIContainer_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6db245c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer_UxmlFactory*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::IMGUIContainer_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer_UxmlFactory*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::IMGUIContainer_UxmlFactory* UnityEngine::UIElements::IMGUIContainer_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::IMGUIContainer_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::IMGUIContainer_UxmlFactory::IMGUIContainer_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer_UxmlTraits::*)()>(&::UnityEngine::UIElements::IMGUIContainer_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6db24c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer_UxmlTraits*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::IMGUIContainer_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer_UxmlTraits*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::IMGUIContainer_UxmlTraits* UnityEngine::UIElements::IMGUIContainer_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::IMGUIContainer_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::IMGUIContainer_UxmlTraits::IMGUIContainer_UxmlTraits() {}
// Ctor Parameters [CppParam { name: "matrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "contentColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "backgroundColor", ty: "::UnityEngine::Color", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "changed", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "displayIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "pixelsPerPoint", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::IMGUIContainer_GUIGlobals::IMGUIContainer_GUIGlobals(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Color color, ::UnityEngine::Color contentColor,
                                                                                          ::UnityEngine::Color backgroundColor, bool enabled, bool changed, int32_t displayIndex,
                                                                                          float_t pixelsPerPoint) noexcept {
  this->matrix = matrix;
  this->color = color;
  this->contentColor = contentColor;
  this->backgroundColor = backgroundColor;
  this->enabled = enabled;
  this->changed = changed;
  this->displayIndex = displayIndex;
  this->pixelsPerPoint = pixelsPerPoint;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::IMGUIContainer_GUIGlobals::IMGUIContainer_GUIGlobals() {}
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_onGUIHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Action* (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::get_onGUIHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dae65c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "get_onGUIHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.set_onGUIHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(::System::Action*)>(&::UnityEngine::UIElements::IMGUIContainer::set_onGUIHandler)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6dae664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "set_onGUIHandler", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_guiState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::ObjectGUIState* (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::get_guiState)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6dae6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "get_guiState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_lastWorldClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::get_lastWorldClip)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6dae7d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "get_lastWorldClip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.set_lastWorldClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::Rect)>(&::UnityEngine::UIElements::IMGUIContainer::set_lastWorldClip)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6dae7ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "set_lastWorldClip", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_cullingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::get_cullingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dae800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "get_cullingEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.set_cullingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(bool)>(&::UnityEngine::UIElements::IMGUIContainer::set_cullingEnabled)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6dae808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "set_cullingEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_cache
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GUILayoutUtility_LayoutCache* (::UnityEngine::UIElements::IMGUIContainer::*)()>(
    &::UnityEngine::UIElements::IMGUIContainer::get_cache)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6dae8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "get_cache", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_layoutMeasuredWidth
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::get_layoutMeasuredWidth)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6dae924;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "get_layoutMeasuredWidth", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_layoutMeasuredHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::get_layoutMeasuredHeight)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6dae94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "get_layoutMeasuredHeight", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_contextType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::ContextType (::UnityEngine::UIElements::IMGUIContainer::*)()>(
    &::UnityEngine::UIElements::IMGUIContainer::get_contextType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6dae974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "get_contextType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.set_contextType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::ContextType)>(
    &::UnityEngine::UIElements::IMGUIContainer::set_contextType)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6dae97c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "set_contextType", {}, { ::i2c::type_of<::UnityEngine::UIElements::ContextType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_focusOnlyIfHasFocusableControls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::get_focusOnlyIfHasFocusableControls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6daea10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "get_focusOnlyIfHasFocusableControls", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_canGrabFocus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::get_canGrabFocus)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6daea18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6daefd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(::System::Action*)>(&::UnityEngine::UIElements::IMGUIContainer::_ctor)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x6daefe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { ".ctor", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.OnGenerateVisualContent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(Il2CppObject*)>(&::UnityEngine::UIElements::IMGUIContainer::OnGenerateVisualContent)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6daf238;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "OnGenerateVisualContent", {}, { ::i2c::type_of<Il2CppObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.SaveGlobals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::SaveGlobals)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x6daf3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "SaveGlobals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.RestoreGlobals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::RestoreGlobals)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x6daf588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "RestoreGlobals", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.DoOnGUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(
    ::UnityEngine::Event*, ::UnityEngine::Matrix4x4, ::UnityEngine::Rect, bool, ::UnityEngine::Rect, ::System::Action*, bool)>(&::UnityEngine::UIElements::IMGUIContainer::DoOnGUI)> {
  constexpr static std::size_t size = 0x1030;
  constexpr static std::size_t addrs = 0x6daf778;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                                                             { "DoOnGUI",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Rect>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.MarkDirtyLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::MarkDirtyLayout)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6db07a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "MarkDirtyLayout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.DoIMGUIRepaint
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::DoIMGUIRepaint)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x6db07d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "DoIMGUIRepaint", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.SendEventToIMGUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::EventBase*, bool, bool)>(
    &::UnityEngine::UIElements::IMGUIContainer::SendEventToIMGUI)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0x6db0e14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                                                             { "SendEventToIMGUI", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.SendEventToIMGUIRaw
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::EventBase*, bool, bool)>(
    &::UnityEngine::UIElements::IMGUIContainer::SendEventToIMGUIRaw)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6db1080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                                                { "SendEventToIMGUIRaw", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.VerifyBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::IMGUIContainer::VerifyBounds)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6db1124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "VerifyBounds", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.IsContainerCapturingTheMouse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::IsContainerCapturingTheMouse)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6db11d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "IsContainerCapturingTheMouse", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.IsLocalEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::IMGUIContainer::IsLocalEvent)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x6db12e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "IsLocalEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.IsEventInsideLocalWindow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::IMGUIContainer::IsEventInsideLocalWindow)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x6db1518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                                                                                           { "IsEventInsideLocalWindow", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.IsDockAreaMouseUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::IMGUIContainer::IsDockAreaMouseUp)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6db16d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "IsDockAreaMouseUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.HandleIMGUIEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::Event*, bool)>(
    &::UnityEngine::UIElements::IMGUIContainer::HandleIMGUIEvent)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6db11c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                                                                                           { "HandleIMGUIEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.HandleIMGUIEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::Event*, ::System::Action*, bool)>(
    &::UnityEngine::UIElements::IMGUIContainer::HandleIMGUIEvent)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6db180c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                                                             { "HandleIMGUIEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.HandleIMGUIEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::Event*, ::UnityEngine::Matrix4x4, ::UnityEngine::Rect, ::System::Action*,
                                                                                                           bool)>(&::UnityEngine::UIElements::IMGUIContainer::HandleIMGUIEvent)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x6db0ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                                                             { "HandleIMGUIEvent",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Rect>(),
                                                                 ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.HandleEventBubbleUpDisabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::IMGUIContainer::HandleEventBubbleUpDisabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6db1a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.HandleEventBubbleUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::IMGUIContainer::HandleEventBubbleUp)> {
  constexpr static std::size_t size = 0x4cc;
  constexpr static std::size_t addrs = 0x6db1a9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.SetFoldoutDepthClass
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::SetFoldoutDepthClass)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6db1f68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "SetFoldoutDepthClass", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.DoMeasure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::IMGUIContainer::*)(
    float_t, ::UnityEngine::UIElements::VisualElement_MeasureMode, float_t, ::UnityEngine::UIElements::VisualElement_MeasureMode)>(&::UnityEngine::UIElements::IMGUIContainer::DoMeasure)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x6db20e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), 134 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.GetCurrentClipRect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::GetCurrentClipRect)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6db17d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "GetCurrentClipRect", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.GetCurrentTransformAndClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::IMGUIContainer*, ::UnityEngine::Event*, ::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Rect>)>(
    &::UnityEngine::UIElements::IMGUIContainer::GetCurrentTransformAndClip)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6db18d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                                                             { "GetCurrentTransformAndClip",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::UIElements::IMGUIContainer*>(), ::i2c::type_of<::UnityEngine::Event*>(),
                                                                 ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::Dispose)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6db23ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(bool)>(&::UnityEngine::UIElements::IMGUIContainer::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6db2420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), 137 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer._DoOnGUI_b__59_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::_DoOnGUI_b__59_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x6db2438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "<DoOnGUI>b__59_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action*& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_OnGUIHandler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnGUIHandler;
}
constexpr ::System::Action* const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_OnGUIHandler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OnGUIHandler;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_m_OnGUIHandler(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OnGUIHandler = value;
}
constexpr ::UnityEngine::ObjectGUIState*& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_ObjectGUIState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ObjectGUIState;
}
constexpr ::UnityEngine::ObjectGUIState* const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_ObjectGUIState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ObjectGUIState;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_m_ObjectGUIState(::UnityEngine::ObjectGUIState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ObjectGUIState = value;
}
constexpr bool& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_useOwnerObjectGUIState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useOwnerObjectGUIState;
}
constexpr bool const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_useOwnerObjectGUIState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___useOwnerObjectGUIState;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_useOwnerObjectGUIState(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___useOwnerObjectGUIState = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get__lastWorldClip_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastWorldClip_k__BackingField;
}
constexpr ::UnityEngine::Rect const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get__lastWorldClip_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastWorldClip_k__BackingField;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set__lastWorldClip_k__BackingField(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastWorldClip_k__BackingField = value;
}
constexpr bool& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_CullingEnabled() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CullingEnabled;
}
constexpr bool const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_CullingEnabled() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CullingEnabled;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_m_CullingEnabled(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CullingEnabled = value;
}
constexpr bool& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_IsFocusDelegated() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsFocusDelegated;
}
constexpr bool const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_IsFocusDelegated() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IsFocusDelegated;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_m_IsFocusDelegated(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IsFocusDelegated = value;
}
constexpr bool& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_RefreshCachedLayout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RefreshCachedLayout;
}
constexpr bool const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_RefreshCachedLayout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RefreshCachedLayout;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_m_RefreshCachedLayout(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RefreshCachedLayout = value;
}
constexpr ::UnityEngine::GUILayoutUtility_LayoutCache*& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_Cache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cache;
}
constexpr ::UnityEngine::GUILayoutUtility_LayoutCache* const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_Cache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Cache;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_m_Cache(::UnityEngine::GUILayoutUtility_LayoutCache* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Cache = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_CachedClippingRect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedClippingRect;
}
constexpr ::UnityEngine::Rect const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_CachedClippingRect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedClippingRect;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_m_CachedClippingRect(::UnityEngine::Rect value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedClippingRect = value;
}
constexpr ::UnityEngine::Matrix4x4& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_CachedTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedTransform;
}
constexpr ::UnityEngine::Matrix4x4 const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_CachedTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CachedTransform;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_m_CachedTransform(::UnityEngine::Matrix4x4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CachedTransform = value;
}
constexpr ::UnityEngine::UIElements::ContextType& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_ContextType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContextType;
}
constexpr ::UnityEngine::UIElements::ContextType const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_ContextType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ContextType;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_m_ContextType(::UnityEngine::UIElements::ContextType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ContextType = value;
}
constexpr bool& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_lostFocus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lostFocus;
}
constexpr bool const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_lostFocus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lostFocus;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_lostFocus(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lostFocus = value;
}
constexpr bool& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_receivedFocus() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___receivedFocus;
}
constexpr bool const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_receivedFocus() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___receivedFocus;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_receivedFocus(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___receivedFocus = value;
}
constexpr ::UnityEngine::UIElements::FocusChangeDirection*& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_focusChangeDirection() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___focusChangeDirection;
}
constexpr ::UnityEngine::UIElements::FocusChangeDirection* const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_focusChangeDirection() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___focusChangeDirection;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_focusChangeDirection(::UnityEngine::UIElements::FocusChangeDirection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___focusChangeDirection = value;
}
constexpr bool& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_hasFocusableControls() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasFocusableControls;
}
constexpr bool const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_hasFocusableControls() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasFocusableControls;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_hasFocusableControls(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasFocusableControls = value;
}
constexpr int32_t& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_newKeyboardFocusControlID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newKeyboardFocusControlID;
}
constexpr int32_t const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_newKeyboardFocusControlID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___newKeyboardFocusControlID;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_newKeyboardFocusControlID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___newKeyboardFocusControlID = value;
}
constexpr bool& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get__focusOnlyIfHasFocusableControls_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____focusOnlyIfHasFocusableControls_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get__focusOnlyIfHasFocusableControls_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____focusOnlyIfHasFocusableControls_k__BackingField;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set__focusOnlyIfHasFocusableControls_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____focusOnlyIfHasFocusableControls_k__BackingField = value;
}
constexpr ::UnityEngine::UIElements::IMGUIContainer_GUIGlobals& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_GUIGlobals() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GUIGlobals;
}
constexpr ::UnityEngine::UIElements::IMGUIContainer_GUIGlobals const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get_m_GUIGlobals() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GUIGlobals;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set_m_GUIGlobals(::UnityEngine::UIElements::IMGUIContainer_GUIGlobals value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GUIGlobals = value;
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_cullingEnabledProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "cullingEnabledProperty", ::UnityEngine::UIElements::IMGUIContainer*>(
      std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::IMGUIContainer::getStaticF_cullingEnabledProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "cullingEnabledProperty", ::UnityEngine::UIElements::IMGUIContainer*>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_contextTypeProperty(::UnityEngine::UIElements::BindingId value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::BindingId, "contextTypeProperty", ::UnityEngine::UIElements::IMGUIContainer*>(std::forward<::UnityEngine::UIElements::BindingId>(value));
}
inline ::UnityEngine::UIElements::BindingId UnityEngine::UIElements::IMGUIContainer::getStaticF_contextTypeProperty() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::BindingId, "contextTypeProperty", ::UnityEngine::UIElements::IMGUIContainer*>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::IMGUIContainer*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::IMGUIContainer::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::UnityEngine::UIElements::IMGUIContainer*>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_ussFoldoutChildDepthClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussFoldoutChildDepthClassName", ::UnityEngine::UIElements::IMGUIContainer*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::IMGUIContainer::getStaticF_ussFoldoutChildDepthClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussFoldoutChildDepthClassName", ::UnityEngine::UIElements::IMGUIContainer*>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_ussFoldoutChildDepthClassNames(::System::Collections::Generic::List_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "ussFoldoutChildDepthClassNames", ::UnityEngine::UIElements::IMGUIContainer*>(
      std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* UnityEngine::UIElements::IMGUIContainer::getStaticF_ussFoldoutChildDepthClassNames() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "ussFoldoutChildDepthClassNames", ::UnityEngine::UIElements::IMGUIContainer*>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_k_OnGUIMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_OnGUIMarker", ::UnityEngine::UIElements::IMGUIContainer*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::IMGUIContainer::getStaticF_k_OnGUIMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_OnGUIMarker", ::UnityEngine::UIElements::IMGUIContainer*>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_k_ImmediateCallbackMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ImmediateCallbackMarker", ::UnityEngine::UIElements::IMGUIContainer*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::IMGUIContainer::getStaticF_k_ImmediateCallbackMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ImmediateCallbackMarker", ::UnityEngine::UIElements::IMGUIContainer*>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_s_DefaultMeasureEvent(::UnityEngine::Event* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Event*, "s_DefaultMeasureEvent", ::UnityEngine::UIElements::IMGUIContainer*>(std::forward<::UnityEngine::Event*>(value));
}
inline ::UnityEngine::Event* UnityEngine::UIElements::IMGUIContainer::getStaticF_s_DefaultMeasureEvent() {
  return ::cordl_internals::getStaticField<::UnityEngine::Event*, "s_DefaultMeasureEvent", ::UnityEngine::UIElements::IMGUIContainer*>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_s_MeasureEvent(::UnityEngine::Event* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Event*, "s_MeasureEvent", ::UnityEngine::UIElements::IMGUIContainer*>(std::forward<::UnityEngine::Event*>(value));
}
inline ::UnityEngine::Event* UnityEngine::UIElements::IMGUIContainer::getStaticF_s_MeasureEvent() {
  return ::cordl_internals::getStaticField<::UnityEngine::Event*, "s_MeasureEvent", ::UnityEngine::UIElements::IMGUIContainer*>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_s_CurrentEvent(::UnityEngine::Event* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Event*, "s_CurrentEvent", ::UnityEngine::UIElements::IMGUIContainer*>(std::forward<::UnityEngine::Event*>(value));
}
inline ::UnityEngine::Event* UnityEngine::UIElements::IMGUIContainer::getStaticF_s_CurrentEvent() {
  return ::cordl_internals::getStaticField<::UnityEngine::Event*, "s_CurrentEvent", ::UnityEngine::UIElements::IMGUIContainer*>();
}
inline ::System::Action* UnityEngine::UIElements::IMGUIContainer::get_onGUIHandler() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "get_onGUIHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Action*>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::set_onGUIHandler(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "set_onGUIHandler", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::ObjectGUIState* UnityEngine::UIElements::IMGUIContainer::get_guiState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "get_guiState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ObjectGUIState*>(this, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::IMGUIContainer::get_lastWorldClip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "get_lastWorldClip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::set_lastWorldClip(::UnityEngine::Rect value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "set_lastWorldClip", {}, { ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::IMGUIContainer::get_cullingEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "get_cullingEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::set_cullingEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "set_cullingEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::GUILayoutUtility_LayoutCache* UnityEngine::UIElements::IMGUIContainer::get_cache() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "get_cache", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUILayoutUtility_LayoutCache*>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::IMGUIContainer::get_layoutMeasuredWidth() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "get_layoutMeasuredWidth", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::IMGUIContainer::get_layoutMeasuredHeight() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "get_layoutMeasuredHeight", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ContextType UnityEngine::UIElements::IMGUIContainer::get_contextType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "get_contextType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ContextType>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::set_contextType(::UnityEngine::UIElements::ContextType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "set_contextType", {}, { ::i2c::type_of<::UnityEngine::UIElements::ContextType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::IMGUIContainer::get_focusOnlyIfHasFocusableControls() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "get_focusOnlyIfHasFocusableControls", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::IMGUIContainer::get_canGrabFocus() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::_ctor(::System::Action* onGUIHandler) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { ".ctor", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onGUIHandler);
}
inline void UnityEngine::UIElements::IMGUIContainer::OnGenerateVisualContent(Il2CppObject* mgc) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "OnGenerateVisualContent", {}, { ::i2c::type_of<Il2CppObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mgc);
}
inline void UnityEngine::UIElements::IMGUIContainer::SaveGlobals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "SaveGlobals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::RestoreGlobals() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "RestoreGlobals", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::DoOnGUI(::UnityEngine::Event* evt, ::UnityEngine::Matrix4x4 parentTransform, ::UnityEngine::Rect clippingRect, bool isComputingLayout,
                                                             ::UnityEngine::Rect layoutSize, ::System::Action* onGUIHandler, bool canAffectFocus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                                                           { "DoOnGUI",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Rect>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt, parentTransform, clippingRect, isComputingLayout, layoutSize, onGUIHandler, canAffectFocus);
}
inline void UnityEngine::UIElements::IMGUIContainer::MarkDirtyLayout() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "MarkDirtyLayout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::DoIMGUIRepaint() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "DoIMGUIRepaint", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::IMGUIContainer::SendEventToIMGUI(::UnityEngine::UIElements::EventBase* evt, bool canAffectFocus, bool verifyBounds) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                                                           { "SendEventToIMGUI", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, evt, canAffectFocus, verifyBounds);
}
inline bool UnityEngine::UIElements::IMGUIContainer::SendEventToIMGUIRaw(::UnityEngine::UIElements::EventBase* evt, bool canAffectFocus, bool verifyBounds) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                                              { "SendEventToIMGUIRaw", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, evt, canAffectFocus, verifyBounds);
}
inline bool UnityEngine::UIElements::IMGUIContainer::VerifyBounds(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "VerifyBounds", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, evt);
}
inline bool UnityEngine::UIElements::IMGUIContainer::IsContainerCapturingTheMouse() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "IsContainerCapturingTheMouse", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::IMGUIContainer::IsLocalEvent(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "IsLocalEvent", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, evt);
}
inline bool UnityEngine::UIElements::IMGUIContainer::IsEventInsideLocalWindow(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                                                                                         { "IsEventInsideLocalWindow", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, evt);
}
inline bool UnityEngine::UIElements::IMGUIContainer::IsDockAreaMouseUp(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "IsDockAreaMouseUp", {}, { ::i2c::type_of<::UnityEngine::UIElements::EventBase*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, evt);
}
inline bool UnityEngine::UIElements::IMGUIContainer::HandleIMGUIEvent(::UnityEngine::Event* e, bool canAffectFocus) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                                                                                         { "HandleIMGUIEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e, canAffectFocus);
}
inline bool UnityEngine::UIElements::IMGUIContainer::HandleIMGUIEvent(::UnityEngine::Event* e, ::System::Action* onGUIHandler, bool canAffectFocus) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                                                           { "HandleIMGUIEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e, onGUIHandler, canAffectFocus);
}
inline bool UnityEngine::UIElements::IMGUIContainer::HandleIMGUIEvent(::UnityEngine::Event* e, ::UnityEngine::Matrix4x4 worldTransform, ::UnityEngine::Rect clippingRect,
                                                                      ::System::Action* onGUIHandler, bool canAffectFocus) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                                                                                         { "HandleIMGUIEvent",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(),
                                                                                             ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::System::Action*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, e, worldTransform, clippingRect, onGUIHandler, canAffectFocus);
}
inline void UnityEngine::UIElements::IMGUIContainer::HandleEventBubbleUpDisabled(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::IMGUIContainer::HandleEventBubbleUp(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::IMGUIContainer::SetFoldoutDepthClass() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "SetFoldoutDepthClass", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::IMGUIContainer::DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode, float_t desiredHeight,
                                                                                 ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), 134 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method, desiredWidth, widthMode, desiredHeight, heightMode);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::IMGUIContainer::GetCurrentClipRect() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "GetCurrentClipRect", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::GetCurrentTransformAndClip(::UnityEngine::UIElements::IMGUIContainer* container, ::UnityEngine::Event* evt,
                                                                                ::by_ref<::UnityEngine::Matrix4x4> transform, ::by_ref<::UnityEngine::Rect> clipRect) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(),
                                                           { "GetCurrentTransformAndClip",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::UIElements::IMGUIContainer*>(), ::i2c::type_of<::UnityEngine::Event*>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, container, evt, transform, clipRect);
}
inline void UnityEngine::UIElements::IMGUIContainer::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::Dispose(bool disposeManaged) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), 137 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposeManaged);
}
inline void UnityEngine::UIElements::IMGUIContainer::_DoOnGUI_b__59_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IMGUIContainer*>(), { "<DoOnGUI>b__59_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::IMGUIContainer* UnityEngine::UIElements::IMGUIContainer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::IMGUIContainer*>());
}
inline ::UnityEngine::UIElements::IMGUIContainer* UnityEngine::UIElements::IMGUIContainer::New_ctor(::System::Action* onGUIHandler) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::IMGUIContainer*>(onGUIHandler));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::UIElements::IMGUIContainer::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::UIElements::IMGUIContainer::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::IMGUIContainer::IMGUIContainer() {}
