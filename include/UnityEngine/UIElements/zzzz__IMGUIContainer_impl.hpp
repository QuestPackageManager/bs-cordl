#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IMGUIContainer.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ContextType_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlFactory_2_impl.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Matrix4x4_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/UIElements/zzzz__IMGUIContainer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextType_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
#include "UnityEngine/UIElements/zzzz__IMGUIContainer_def.hpp"
#include "UnityEngine/UIElements/zzzz__MeshGenerationContext_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__GUILayoutUtility_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__ObjectGUIState_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer_UxmlFactory._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer_UxmlFactory::*)()>(
    &::UnityEngine::UIElements::IMGUIContainer_UxmlFactory::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4a40bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer_UxmlFactory*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::IMGUIContainer_UxmlFactory::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer_UxmlFactory*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::IMGUIContainer_UxmlFactory* UnityEngine::UIElements::IMGUIContainer_UxmlFactory::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::IMGUIContainer_UxmlFactory*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::IMGUIContainer_UxmlFactory::IMGUIContainer_UxmlFactory() {}
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer_UxmlTraits._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer_UxmlTraits::*)()>(
    &::UnityEngine::UIElements::IMGUIContainer_UxmlTraits::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x4a40c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer_UxmlTraits*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::IMGUIContainer_UxmlTraits::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer_UxmlTraits*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::IMGUIContainer_UxmlTraits* UnityEngine::UIElements::IMGUIContainer_UxmlTraits::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::IMGUIContainer_UxmlTraits*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::IMGUIContainer_UxmlTraits::IMGUIContainer_UxmlTraits() {}
// Ctor Parameters [CppParam { name: "matrix", ty: "::UnityEngine::Matrix4x4", modifiers: "", def_value: Some("{}") }, CppParam { name: "color", ty: "::UnityEngine::Color", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "contentColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}") }, CppParam { name: "backgroundColor", ty: "::UnityEngine::Color", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "changed", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "displayIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::IMGUIContainer_GUIGlobals::IMGUIContainer_GUIGlobals(::UnityEngine::Matrix4x4 matrix, ::UnityEngine::Color color, ::UnityEngine::Color contentColor,
                                                                                          ::UnityEngine::Color backgroundColor, bool enabled, bool changed, int32_t displayIndex) noexcept {
  this->matrix = matrix;
  this->color = color;
  this->contentColor = contentColor;
  this->backgroundColor = backgroundColor;
  this->enabled = enabled;
  this->changed = changed;
  this->displayIndex = displayIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::IMGUIContainer_GUIGlobals::IMGUIContainer_GUIGlobals() {}
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_onGUIHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Action* (::UnityEngine::UIElements::IMGUIContainer::*)()>(
    &::UnityEngine::UIElements::IMGUIContainer::get_onGUIHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a3d6c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                               "get_onGUIHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.set_onGUIHandler
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(::System::Action*)>(
    &::UnityEngine::UIElements::IMGUIContainer::set_onGUIHandler)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x4a3d6c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "set_onGUIHandler",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_guiState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ObjectGUIState* (::UnityEngine::UIElements::IMGUIContainer::*)()>(
    &::UnityEngine::UIElements::IMGUIContainer::get_guiState)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x4a3d720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                               "get_guiState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_lastWorldClip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::UnityEngine::UIElements::IMGUIContainer::*)()>(
    &::UnityEngine::UIElements::IMGUIContainer::get_lastWorldClip)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4a3d7bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                               "get_lastWorldClip", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.set_lastWorldClip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::Rect)>(
    &::UnityEngine::UIElements::IMGUIContainer::set_lastWorldClip)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4a3d7d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "set_lastWorldClip",
                                   std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_cullingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)()>(
    &::UnityEngine::UIElements::IMGUIContainer::get_cullingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a3d7e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                               "get_cullingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_cache
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::GUILayoutUtility_LayoutCache* (::UnityEngine::UIElements::IMGUIContainer::*)()>(
    &::UnityEngine::UIElements::IMGUIContainer::get_cache)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x4a3d7ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "get_cache",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_layoutMeasuredWidth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::IMGUIContainer::*)()>(
    &::UnityEngine::UIElements::IMGUIContainer::get_layoutMeasuredWidth)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4a3d854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                               "get_layoutMeasuredWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_layoutMeasuredHeight
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::UIElements::IMGUIContainer::*)()>(
    &::UnityEngine::UIElements::IMGUIContainer::get_layoutMeasuredHeight)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x4a3d87c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                               "get_layoutMeasuredHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_contextType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::ContextType (::UnityEngine::UIElements::IMGUIContainer::*)()>(
    &::UnityEngine::UIElements::IMGUIContainer::get_contextType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a3d8a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                               "get_contextType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.set_contextType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::ContextType)>(
    &::UnityEngine::UIElements::IMGUIContainer::set_contextType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a3d8ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "set_contextType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_focusOnlyIfHasFocusableControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)()>(
    &::UnityEngine::UIElements::IMGUIContainer::get_focusOnlyIfHasFocusableControls)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a3d8b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "get_focusOnlyIfHasFocusableControls",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.get_canGrabFocus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)()>(
    &::UnityEngine::UIElements::IMGUIContainer::get_canGrabFocus)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x4a3d8bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4a3dc9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(::System::Action*)>(
    &::UnityEngine::UIElements::IMGUIContainer::_ctor)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x4a3dca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.OnGenerateVisualContent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::MeshGenerationContext*)>(
    &::UnityEngine::UIElements::IMGUIContainer::OnGenerateVisualContent)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x4a3def8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "OnGenerateVisualContent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshGenerationContext*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.SaveGlobals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::SaveGlobals)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x4a3e020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "SaveGlobals",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.RestoreGlobals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::RestoreGlobals)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x4a3e130;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                               "RestoreGlobals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.DoOnGUI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(
    ::UnityEngine::Event*, ::UnityEngine::Matrix4x4, ::UnityEngine::Rect, bool, ::UnityEngine::Rect, ::System::Action*, bool)>(&::UnityEngine::UIElements::IMGUIContainer::DoOnGUI)> {
  constexpr static std::size_t size = 0xdb4;
  constexpr static std::size_t addrs = 0x4a3e240;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "DoOnGUI", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.MarkDirtyLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::MarkDirtyLayout)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x4a3eff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                               "MarkDirtyLayout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.ProcessEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::IMGUIContainer::ProcessEvent)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x4a3f008;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "ProcessEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.DoIMGUIRepaint
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::DoIMGUIRepaint)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x4a3f444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                               "DoIMGUIRepaint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.SendEventToIMGUI
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::EventBase*, bool, bool)>(
    &::UnityEngine::UIElements::IMGUIContainer::SendEventToIMGUI)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x4a3f1a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "SendEventToIMGUI", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.SendEventToIMGUIRaw
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::EventBase*, bool, bool)>(
    &::UnityEngine::UIElements::IMGUIContainer::SendEventToIMGUIRaw)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x4a3fa50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "SendEventToIMGUIRaw", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.VerifyBounds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::IMGUIContainer::VerifyBounds)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x4a3fb50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "VerifyBounds", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.IsContainerCapturingTheMouse
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)()>(
    &::UnityEngine::UIElements::IMGUIContainer::IsContainerCapturingTheMouse)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x4a3fbf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                               "IsContainerCapturingTheMouse", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.IsLocalEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::IMGUIContainer::IsLocalEvent)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x4a3fd00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "IsLocalEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.IsEventInsideLocalWindow
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::IMGUIContainer::IsEventInsideLocalWindow)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x4a3ff04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "IsEventInsideLocalWindow", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.IsDockAreaMouseUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::UIElements::EventBase*)>(&::UnityEngine::UIElements::IMGUIContainer::IsDockAreaMouseUp)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x4a400b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "IsDockAreaMouseUp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.HandleIMGUIEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::Event*, bool)>(
    &::UnityEngine::UIElements::IMGUIContainer::HandleIMGUIEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4a3fbe0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                               "HandleIMGUIEvent", std::span<Il2CppClass const* const, 0>(),
                                                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get(),
                                                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.HandleIMGUIEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::Event*, ::System::Action*, bool)>(
    &::UnityEngine::UIElements::IMGUIContainer::HandleIMGUIEvent)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x4a40244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "HandleIMGUIEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.HandleIMGUIEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::IMGUIContainer::*)(
    ::UnityEngine::Event*, ::UnityEngine::Matrix4x4, ::UnityEngine::Rect, ::System::Action*, bool)>(&::UnityEngine::UIElements::IMGUIContainer::HandleIMGUIEvent)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x4a3f724;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "HandleIMGUIEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.ExecuteDefaultAction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::IMGUIContainer::ExecuteDefaultAction)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x4a404c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.SetFoldoutDepthClass
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)()>(
    &::UnityEngine::UIElements::IMGUIContainer::SetFoldoutDepthClass)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x4a407b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                               "SetFoldoutDepthClass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.DoMeasure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::UIElements::IMGUIContainer::*)(
    float_t, ::UnityEngine::UIElements::VisualElement_MeasureMode, float_t, ::UnityEngine::UIElements::VisualElement_MeasureMode)>(&::UnityEngine::UIElements::IMGUIContainer::DoMeasure)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x4a4091c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), 98));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.GetCurrentClipRect
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Rect (::UnityEngine::UIElements::IMGUIContainer::*)()>(
    &::UnityEngine::UIElements::IMGUIContainer::GetCurrentClipRect)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x4a4020c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                               "GetCurrentClipRect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.GetCurrentTransformAndClip
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UIElements::IMGUIContainer*, ::UnityEngine::Event*, ::ByRef<::UnityEngine::Matrix4x4>,
                                                                                           ::ByRef<::UnityEngine::Rect>)>(&::UnityEngine::UIElements::IMGUIContainer::GetCurrentTransformAndClip)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x4a4030c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "GetCurrentTransformAndClip", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)()>(&::UnityEngine::UIElements::IMGUIContainer::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x4a40b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)(bool)>(&::UnityEngine::UIElements::IMGUIContainer::Dispose)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4a40bc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), 101));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::IMGUIContainer._DoOnGUI_b__56_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::IMGUIContainer::*)()>(
    &::UnityEngine::UIElements::IMGUIContainer::_DoOnGUI_b__56_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4a40be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                               "<DoOnGUI>b__56_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_OnGUIHandler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ObjectGUIState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Cache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
constexpr ::UnityEngine::UIElements::ContextType& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get__contextType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contextType_k__BackingField;
}
constexpr ::UnityEngine::UIElements::ContextType const& UnityEngine::UIElements::IMGUIContainer::__cordl_internal_get__contextType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____contextType_k__BackingField;
}
constexpr void UnityEngine::UIElements::IMGUIContainer::__cordl_internal_set__contextType_k__BackingField(::UnityEngine::UIElements::ContextType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____contextType_k__BackingField = value;
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___focusChangeDirection)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_ussClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::IMGUIContainer::getStaticF_ussClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_ussFoldoutChildDepthClassName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "ussFoldoutChildDepthClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get>(
      std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::IMGUIContainer::getStaticF_ussFoldoutChildDepthClassName() {
  return ::cordl_internals::getStaticField<::StringW, "ussFoldoutChildDepthClassName", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_ussFoldoutChildDepthClassNames(::System::Collections::Generic::List_1<::StringW>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::StringW>*, "ussFoldoutChildDepthClassNames",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get>(
      std::forward<::System::Collections::Generic::List_1<::StringW>*>(value));
}
inline ::System::Collections::Generic::List_1<::StringW>* UnityEngine::UIElements::IMGUIContainer::getStaticF_ussFoldoutChildDepthClassNames() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::StringW>*, "ussFoldoutChildDepthClassNames",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_k_OnGUIMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_OnGUIMarker", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::IMGUIContainer::getStaticF_k_OnGUIMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_OnGUIMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_k_ImmediateCallbackMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_ImmediateCallbackMarker",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::IMGUIContainer::getStaticF_k_ImmediateCallbackMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_ImmediateCallbackMarker",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_s_DefaultMeasureEvent(::UnityEngine::Event* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Event*, "s_DefaultMeasureEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get>(
      std::forward<::UnityEngine::Event*>(value));
}
inline ::UnityEngine::Event* UnityEngine::UIElements::IMGUIContainer::getStaticF_s_DefaultMeasureEvent() {
  return ::cordl_internals::getStaticField<::UnityEngine::Event*, "s_DefaultMeasureEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_s_MeasureEvent(::UnityEngine::Event* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Event*, "s_MeasureEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get>(
      std::forward<::UnityEngine::Event*>(value));
}
inline ::UnityEngine::Event* UnityEngine::UIElements::IMGUIContainer::getStaticF_s_MeasureEvent() {
  return ::cordl_internals::getStaticField<::UnityEngine::Event*, "s_MeasureEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get>();
}
inline void UnityEngine::UIElements::IMGUIContainer::setStaticF_s_CurrentEvent(::UnityEngine::Event* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Event*, "s_CurrentEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get>(
      std::forward<::UnityEngine::Event*>(value));
}
inline ::UnityEngine::Event* UnityEngine::UIElements::IMGUIContainer::getStaticF_s_CurrentEvent() {
  return ::cordl_internals::getStaticField<::UnityEngine::Event*, "s_CurrentEvent", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get>();
}
inline ::System::Action* UnityEngine::UIElements::IMGUIContainer::get_onGUIHandler() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                             "get_onGUIHandler", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Action*, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::set_onGUIHandler(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "set_onGUIHandler",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::ObjectGUIState* UnityEngine::UIElements::IMGUIContainer::get_guiState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "get_guiState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::ObjectGUIState*, false>(this, ___internal_method);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::IMGUIContainer::get_lastWorldClip() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                             "get_lastWorldClip", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::set_lastWorldClip(::UnityEngine::Rect value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "set_lastWorldClip",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::IMGUIContainer::get_cullingEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                             "get_cullingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::GUILayoutUtility_LayoutCache* UnityEngine::UIElements::IMGUIContainer::get_cache() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "get_cache",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::GUILayoutUtility_LayoutCache*, false>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::IMGUIContainer::get_layoutMeasuredWidth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                             "get_layoutMeasuredWidth", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::UIElements::IMGUIContainer::get_layoutMeasuredHeight() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                             "get_layoutMeasuredHeight", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ContextType UnityEngine::UIElements::IMGUIContainer::get_contextType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                             "get_contextType", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::ContextType, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::set_contextType(::UnityEngine::UIElements::ContextType value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "set_contextType", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::ContextType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::UIElements::IMGUIContainer::get_focusOnlyIfHasFocusableControls() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "get_focusOnlyIfHasFocusableControls",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::IMGUIContainer::get_canGrabFocus() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::_ctor(::System::Action* onGUIHandler) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, onGUIHandler);
}
inline void UnityEngine::UIElements::IMGUIContainer::OnGenerateVisualContent(::UnityEngine::UIElements::MeshGenerationContext* mgc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "OnGenerateVisualContent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::MeshGenerationContext*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mgc);
}
inline void UnityEngine::UIElements::IMGUIContainer::SaveGlobals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "SaveGlobals",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::RestoreGlobals() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                             "RestoreGlobals", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::DoOnGUI(::UnityEngine::Event* evt, ::UnityEngine::Matrix4x4 parentTransform, ::UnityEngine::Rect clippingRect, bool isComputingLayout,
                                                             ::UnityEngine::Rect layoutSize, ::System::Action* onGUIHandler, bool canAffectFocus) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "DoOnGUI", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, parentTransform, clippingRect, isComputingLayout, layoutSize, onGUIHandler, canAffectFocus);
}
inline void UnityEngine::UIElements::IMGUIContainer::MarkDirtyLayout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                             "MarkDirtyLayout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::ProcessEvent(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "ProcessEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::IMGUIContainer::DoIMGUIRepaint() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                             "DoIMGUIRepaint", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::IMGUIContainer::SendEventToIMGUI(::UnityEngine::UIElements::EventBase* evt, bool canAffectFocus, bool verifyBounds) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "SendEventToIMGUI", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, evt, canAffectFocus, verifyBounds);
}
inline bool UnityEngine::UIElements::IMGUIContainer::SendEventToIMGUIRaw(::UnityEngine::UIElements::EventBase* evt, bool canAffectFocus, bool verifyBounds) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "SendEventToIMGUIRaw", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, evt, canAffectFocus, verifyBounds);
}
inline bool UnityEngine::UIElements::IMGUIContainer::VerifyBounds(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "VerifyBounds", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, evt);
}
inline bool UnityEngine::UIElements::IMGUIContainer::IsContainerCapturingTheMouse() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                             "IsContainerCapturingTheMouse", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::IMGUIContainer::IsLocalEvent(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "IsLocalEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, evt);
}
inline bool UnityEngine::UIElements::IMGUIContainer::IsEventInsideLocalWindow(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "IsEventInsideLocalWindow", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, evt);
}
inline bool UnityEngine::UIElements::IMGUIContainer::IsDockAreaMouseUp(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "IsDockAreaMouseUp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, evt);
}
inline bool UnityEngine::UIElements::IMGUIContainer::HandleIMGUIEvent(::UnityEngine::Event* e, bool canAffectFocus) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "HandleIMGUIEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e, canAffectFocus);
}
inline bool UnityEngine::UIElements::IMGUIContainer::HandleIMGUIEvent(::UnityEngine::Event* e, ::System::Action* onGUIHandler, bool canAffectFocus) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "HandleIMGUIEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e, onGUIHandler, canAffectFocus);
}
inline bool UnityEngine::UIElements::IMGUIContainer::HandleIMGUIEvent(::UnityEngine::Event* e, ::UnityEngine::Matrix4x4 worldTransform, ::UnityEngine::Rect clippingRect,
                                                                      ::System::Action* onGUIHandler, bool canAffectFocus) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "HandleIMGUIEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Matrix4x4>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rect>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e, worldTransform, clippingRect, onGUIHandler, canAffectFocus);
}
inline void UnityEngine::UIElements::IMGUIContainer::ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::IMGUIContainer::SetFoldoutDepthClass() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                             "SetFoldoutDepthClass", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::IMGUIContainer::DoMeasure(float_t desiredWidth, ::UnityEngine::UIElements::VisualElement_MeasureMode widthMode, float_t desiredHeight,
                                                                                 ::UnityEngine::UIElements::VisualElement_MeasureMode heightMode) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), 98)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method, desiredWidth, widthMode, desiredHeight, heightMode);
}
inline ::UnityEngine::Rect UnityEngine::UIElements::IMGUIContainer::GetCurrentClipRect() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                             "GetCurrentClipRect", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::GetCurrentTransformAndClip(::UnityEngine::UIElements::IMGUIContainer* container, ::UnityEngine::Event* evt,
                                                                                ::ByRef<::UnityEngine::Matrix4x4> transform, ::ByRef<::UnityEngine::Rect> clipRect) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "GetCurrentTransformAndClip", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Event*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Matrix4x4>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Rect>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, container, evt, transform, clipRect);
}
inline void UnityEngine::UIElements::IMGUIContainer::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::IMGUIContainer::Dispose(bool disposeManaged) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(), 101)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposeManaged);
}
inline void UnityEngine::UIElements::IMGUIContainer::_DoOnGUI_b__56_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::IMGUIContainer*>::get(),
                                                                             "<DoOnGUI>b__56_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::IMGUIContainer* UnityEngine::UIElements::IMGUIContainer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::IMGUIContainer*>());
}
inline ::UnityEngine::UIElements::IMGUIContainer* UnityEngine::UIElements::IMGUIContainer::New_ctor(::System::Action* onGUIHandler) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::IMGUIContainer*>(onGUIHandler));
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
