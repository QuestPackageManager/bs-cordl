#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIElementsUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UIElementsUtility_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__ContextType_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IMGUIContainer_def.hpp"
#include "UnityEngine/UIElements/zzzz__IUIElementsUtility_def.hpp"
#include "UnityEngine/UIElements/zzzz__Panel_def.hpp"
#include "UnityEngine/UIElements/zzzz__VisualElement_def.hpp"
#include "UnityEngine/zzzz__EventType_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__GUILayoutUtility_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsUtility.get_isOSXContextualMenuPlatform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::UIElements::UIElementsUtility::get_isOSXContextualMenuPlatform)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x6cb598c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(), { "get_isOSXContextualMenuPlatform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsUtility._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIElementsUtility::*)()>(&::UnityEngine::UIElements::UIElementsUtility::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6cb5a48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsUtility.UnityEngine_UIElements_IUIElementsUtility_MakeCurrentIMGUIContainerDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIElementsUtility::*)()>(
    &::UnityEngine::UIElements::UIElementsUtility::UnityEngine_UIElements_IUIElementsUtility_MakeCurrentIMGUIContainerDirty)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6cb5aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(), { "UnityEngine.UIElements.IUIElementsUtility.MakeCurrentIMGUIContainerDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsUtility.UnityEngine_UIElements_IUIElementsUtility_TakeCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIElementsUtility::*)()>(
    &::UnityEngine::UIElements::UIElementsUtility::UnityEngine_UIElements_IUIElementsUtility_TakeCapture)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x6cb5b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(), { "UnityEngine.UIElements.IUIElementsUtility.TakeCapture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsUtility.UnityEngine_UIElements_IUIElementsUtility_ReleaseCapture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIElementsUtility::*)()>(
    &::UnityEngine::UIElements::UIElementsUtility::UnityEngine_UIElements_IUIElementsUtility_ReleaseCapture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cb5c6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(), { "UnityEngine.UIElements.IUIElementsUtility.ReleaseCapture", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsUtility.UnityEngine_UIElements_IUIElementsUtility_ProcessEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIElementsUtility::*)(int32_t, ::System::IntPtr, ::by_ref<bool>)>(
    &::UnityEngine::UIElements::UIElementsUtility::UnityEngine_UIElements_IUIElementsUtility_ProcessEvent)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x6cb5c74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(),
                            { "UnityEngine.UIElements.IUIElementsUtility.ProcessEvent", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsUtility.UnityEngine_UIElements_IUIElementsUtility_CleanupRoots
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIElementsUtility::*)()>(
    &::UnityEngine::UIElements::UIElementsUtility::UnityEngine_UIElements_IUIElementsUtility_CleanupRoots)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6cb63a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(), { "UnityEngine.UIElements.IUIElementsUtility.CleanupRoots", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsUtility.UnityEngine_UIElements_IUIElementsUtility_EndContainerGUIFromException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::UIElementsUtility::*)(::System::Exception*)>(
    &::UnityEngine::UIElements::UIElementsUtility::UnityEngine_UIElements_IUIElementsUtility_EndContainerGUIFromException)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6cb6408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(),
                                                             { "UnityEngine.UIElements.IUIElementsUtility.EndContainerGUIFromException", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsUtility.RegisterCachedPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::UIElements::Panel*)>(&::UnityEngine::UIElements::UIElementsUtility::RegisterCachedPanel)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6cb242c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(),
                                                             { "RegisterCachedPanel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::Panel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsUtility.RemoveCachedPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::UIElements::UIElementsUtility::RemoveCachedPanel)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x6cb2624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(), { "RemoveCachedPanel", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsUtility.TryGetPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(int32_t, ::by_ref<::UnityEngine::UIElements::Panel*>)>(&::UnityEngine::UIElements::UIElementsUtility::TryGetPanel)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6cb1ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(),
                                                             { "TryGetPanel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Panel*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsUtility.BeginContainerGUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GUILayoutUtility_LayoutCache*, ::UnityEngine::Event*, ::UnityEngine::UIElements::IMGUIContainer*)>(
    &::UnityEngine::UIElements::UIElementsUtility::BeginContainerGUI)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x6cb6500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(),
                                                                                           { "BeginContainerGUI",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::GUILayoutUtility_LayoutCache*>(), ::i2c::type_of<::UnityEngine::Event*>(),
                                                                                               ::i2c::type_of<::UnityEngine::UIElements::IMGUIContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsUtility.EndContainerGUI
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Event*, ::UnityEngine::Rect)>(&::UnityEngine::UIElements::UIElementsUtility::EndContainerGUI)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x6cb6780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(),
                                                             { "EndContainerGUI", {}, { ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsUtility.CreateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (*)(::UnityEngine::Event*)>(&::UnityEngine::UIElements::UIElementsUtility::CreateEvent)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6cb6a2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(), { "CreateEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsUtility.CreateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (*)(::UnityEngine::Event*, ::UnityEngine::EventType)>(
    &::UnityEngine::UIElements::UIElementsUtility::CreateEvent)> {
  constexpr static std::size_t size = 0x358;
  constexpr static std::size_t addrs = 0x6cb1af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(),
                                                             { "CreateEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::UnityEngine::EventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsUtility.DoDispatch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::UIElements::BaseVisualElementPanel*)>(&::UnityEngine::UIElements::UIElementsUtility::DoDispatch)> {
  constexpr static std::size_t size = 0x600;
  constexpr static std::size_t addrs = 0x6cb5da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(),
                                                                                           { "DoDispatch", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsUtility.GetAllPanels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>*, ::UnityEngine::UIElements::ContextType)>(
    &::UnityEngine::UIElements::UIElementsUtility::GetAllPanels)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6cb26ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(),
            { "GetAllPanels", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>*>(), ::i2c::type_of<::UnityEngine::UIElements::ContextType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsUtility.GetPanelsIterator
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2_Enumerator<int32_t, ::UnityEngine::UIElements::Panel*> (*)()>(
    &::UnityEngine::UIElements::UIElementsUtility::GetPanelsIterator)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6cb6aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(), { "GetPanelsIterator", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsUtility.PixelsPerUnitScaleForElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::UIElements::VisualElement*, ::UnityEngine::Sprite*)>(
    &::UnityEngine::UIElements::UIElementsUtility::PixelsPerUnitScaleForElement)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6cb6b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(),
                                                { "PixelsPerUnitScaleForElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Sprite*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsUtility.ParseMenuName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::UIElements::UIElementsUtility::ParseMenuName)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x6cb6c48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(), { "ParseMenuName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIElementsUtility::setStaticF_s_ContainerStack(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::IMGUIContainer*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::IMGUIContainer*>*, "s_ContainerStack", ::UnityEngine::UIElements::UIElementsUtility*>(
      std::forward<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::IMGUIContainer*>*>(value));
}
inline ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::IMGUIContainer*>* UnityEngine::UIElements::UIElementsUtility::getStaticF_s_ContainerStack() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::IMGUIContainer*>*, "s_ContainerStack", ::UnityEngine::UIElements::UIElementsUtility*>();
}
inline void UnityEngine::UIElements::UIElementsUtility::setStaticF_s_UIElementsCache(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::Panel*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::Panel*>*, "s_UIElementsCache", ::UnityEngine::UIElements::UIElementsUtility*>(
      std::forward<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::Panel*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::Panel*>* UnityEngine::UIElements::UIElementsUtility::getStaticF_s_UIElementsCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::UIElements::Panel*>*, "s_UIElementsCache",
                                           ::UnityEngine::UIElements::UIElementsUtility*>();
}
inline void UnityEngine::UIElements::UIElementsUtility::setStaticF_s_EventInstance(::UnityEngine::Event* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Event*, "s_EventInstance", ::UnityEngine::UIElements::UIElementsUtility*>(std::forward<::UnityEngine::Event*>(value));
}
inline ::UnityEngine::Event* UnityEngine::UIElements::UIElementsUtility::getStaticF_s_EventInstance() {
  return ::cordl_internals::getStaticField<::UnityEngine::Event*, "s_EventInstance", ::UnityEngine::UIElements::UIElementsUtility*>();
}
inline void UnityEngine::UIElements::UIElementsUtility::setStaticF_editorPlayModeTintColor(::UnityEngine::Color value) {
  ::cordl_internals::setStaticField<::UnityEngine::Color, "editorPlayModeTintColor", ::UnityEngine::UIElements::UIElementsUtility*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color UnityEngine::UIElements::UIElementsUtility::getStaticF_editorPlayModeTintColor() {
  return ::cordl_internals::getStaticField<::UnityEngine::Color, "editorPlayModeTintColor", ::UnityEngine::UIElements::UIElementsUtility*>();
}
inline void UnityEngine::UIElements::UIElementsUtility::setStaticF_singleLineHeight(float_t value) {
  ::cordl_internals::setStaticField<float_t, "singleLineHeight", ::UnityEngine::UIElements::UIElementsUtility*>(std::forward<float_t>(value));
}
inline float_t UnityEngine::UIElements::UIElementsUtility::getStaticF_singleLineHeight() {
  return ::cordl_internals::getStaticField<float_t, "singleLineHeight", ::UnityEngine::UIElements::UIElementsUtility*>();
}
inline void UnityEngine::UIElements::UIElementsUtility::setStaticF_s_EnableOSXContextualMenuEventsOnNonOSXPlatforms(bool value) {
  ::cordl_internals::setStaticField<bool, "s_EnableOSXContextualMenuEventsOnNonOSXPlatforms", ::UnityEngine::UIElements::UIElementsUtility*>(std::forward<bool>(value));
}
inline bool UnityEngine::UIElements::UIElementsUtility::getStaticF_s_EnableOSXContextualMenuEventsOnNonOSXPlatforms() {
  return ::cordl_internals::getStaticField<bool, "s_EnableOSXContextualMenuEventsOnNonOSXPlatforms", ::UnityEngine::UIElements::UIElementsUtility*>();
}
inline void UnityEngine::UIElements::UIElementsUtility::setStaticF_s_Instance(::UnityEngine::UIElements::UIElementsUtility* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UIElementsUtility*, "s_Instance", ::UnityEngine::UIElements::UIElementsUtility*>(
      std::forward<::UnityEngine::UIElements::UIElementsUtility*>(value));
}
inline ::UnityEngine::UIElements::UIElementsUtility* UnityEngine::UIElements::UIElementsUtility::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UIElementsUtility*, "s_Instance", ::UnityEngine::UIElements::UIElementsUtility*>();
}
inline void UnityEngine::UIElements::UIElementsUtility::setStaticF_s_PanelsIterationList(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>*, "s_PanelsIterationList", ::UnityEngine::UIElements::UIElementsUtility*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>* UnityEngine::UIElements::UIElementsUtility::getStaticF_s_PanelsIterationList() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>*, "s_PanelsIterationList", ::UnityEngine::UIElements::UIElementsUtility*>();
}
inline void UnityEngine::UIElements::UIElementsUtility::setStaticF_s_RepaintProfilerMarkerName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_RepaintProfilerMarkerName", ::UnityEngine::UIElements::UIElementsUtility*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::UIElementsUtility::getStaticF_s_RepaintProfilerMarkerName() {
  return ::cordl_internals::getStaticField<::StringW, "s_RepaintProfilerMarkerName", ::UnityEngine::UIElements::UIElementsUtility*>();
}
inline void UnityEngine::UIElements::UIElementsUtility::setStaticF_s_EventProfilerMarkerName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_EventProfilerMarkerName", ::UnityEngine::UIElements::UIElementsUtility*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::UIElementsUtility::getStaticF_s_EventProfilerMarkerName() {
  return ::cordl_internals::getStaticField<::StringW, "s_EventProfilerMarkerName", ::UnityEngine::UIElements::UIElementsUtility*>();
}
inline void UnityEngine::UIElements::UIElementsUtility::setStaticF_s_RepaintProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_RepaintProfilerMarker", ::UnityEngine::UIElements::UIElementsUtility*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIElementsUtility::getStaticF_s_RepaintProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_RepaintProfilerMarker", ::UnityEngine::UIElements::UIElementsUtility*>();
}
inline void UnityEngine::UIElements::UIElementsUtility::setStaticF_s_EventProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_EventProfilerMarker", ::UnityEngine::UIElements::UIElementsUtility*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIElementsUtility::getStaticF_s_EventProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_EventProfilerMarker", ::UnityEngine::UIElements::UIElementsUtility*>();
}
inline void UnityEngine::UIElements::UIElementsUtility::setStaticF_s_Modifiers(::ArrayW<char16_t> value) {
  ::cordl_internals::setStaticField<::ArrayW<char16_t>, "s_Modifiers", ::UnityEngine::UIElements::UIElementsUtility*>(std::forward<::ArrayW<char16_t>>(value));
}
inline ::ArrayW<char16_t> UnityEngine::UIElements::UIElementsUtility::getStaticF_s_Modifiers() {
  return ::cordl_internals::getStaticField<::ArrayW<char16_t>, "s_Modifiers", ::UnityEngine::UIElements::UIElementsUtility*>();
}
inline bool UnityEngine::UIElements::UIElementsUtility::get_isOSXContextualMenuPlatform() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(), { "get_isOSXContextualMenuPlatform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIElementsUtility::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIElementsUtility::UnityEngine_UIElements_IUIElementsUtility_MakeCurrentIMGUIContainerDirty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(), { "UnityEngine.UIElements.IUIElementsUtility.MakeCurrentIMGUIContainerDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIElementsUtility::UnityEngine_UIElements_IUIElementsUtility_TakeCapture() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(), { "UnityEngine.UIElements.IUIElementsUtility.TakeCapture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIElementsUtility::UnityEngine_UIElements_IUIElementsUtility_ReleaseCapture() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(), { "UnityEngine.UIElements.IUIElementsUtility.ReleaseCapture", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIElementsUtility::UnityEngine_UIElements_IUIElementsUtility_ProcessEvent(int32_t instanceID, ::System::IntPtr nativeEventPtr, ::by_ref<bool> eventHandled) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(),
                          { "UnityEngine.UIElements.IUIElementsUtility.ProcessEvent", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, instanceID, nativeEventPtr, eventHandled);
}
inline bool UnityEngine::UIElements::UIElementsUtility::UnityEngine_UIElements_IUIElementsUtility_CleanupRoots() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(), { "UnityEngine.UIElements.IUIElementsUtility.CleanupRoots", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::UIElementsUtility::UnityEngine_UIElements_IUIElementsUtility_EndContainerGUIFromException(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(),
                                                           { "UnityEngine.UIElements.IUIElementsUtility.EndContainerGUIFromException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, exception);
}
inline void UnityEngine::UIElements::UIElementsUtility::RegisterCachedPanel(int32_t instanceID, ::UnityEngine::UIElements::Panel* panel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(),
                                                           { "RegisterCachedPanel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::Panel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instanceID, panel);
}
inline void UnityEngine::UIElements::UIElementsUtility::RemoveCachedPanel(int32_t instanceID) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(), { "RemoveCachedPanel", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instanceID);
}
inline bool UnityEngine::UIElements::UIElementsUtility::TryGetPanel(int32_t instanceID, ::by_ref<::UnityEngine::UIElements::Panel*> panel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(),
                                                           { "TryGetPanel", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::UIElements::Panel*>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, instanceID, panel);
}
inline void UnityEngine::UIElements::UIElementsUtility::BeginContainerGUI(::UnityEngine::GUILayoutUtility_LayoutCache* cache, ::UnityEngine::Event* evt,
                                                                          ::UnityEngine::UIElements::IMGUIContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(),
                                                                                         { "BeginContainerGUI",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::GUILayoutUtility_LayoutCache*>(), ::i2c::type_of<::UnityEngine::Event*>(),
                                                                                             ::i2c::type_of<::UnityEngine::UIElements::IMGUIContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cache, evt, container);
}
inline void UnityEngine::UIElements::UIElementsUtility::EndContainerGUI(::UnityEngine::Event* evt, ::UnityEngine::Rect layoutSize) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(),
                                                           { "EndContainerGUI", {}, { ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::UnityEngine::Rect>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, evt, layoutSize);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::UIElementsUtility::CreateEvent(::UnityEngine::Event* systemEvent) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(), { "CreateEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(nullptr, ___internal_method, systemEvent);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::UIElementsUtility::CreateEvent(::UnityEngine::Event* systemEvent, ::UnityEngine::EventType eventType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(),
                                                           { "CreateEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>(), ::i2c::type_of<::UnityEngine::EventType>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(nullptr, ___internal_method, systemEvent, eventType);
}
inline bool UnityEngine::UIElements::UIElementsUtility::DoDispatch(::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(),
                                                                                         { "DoDispatch", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseVisualElementPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, panel);
}
inline void UnityEngine::UIElements::UIElementsUtility::GetAllPanels(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>* panels,
                                                                     ::UnityEngine::UIElements::ContextType contextType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(),
          { "GetAllPanels", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>*>(), ::i2c::type_of<::UnityEngine::UIElements::ContextType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, panels, contextType);
}
inline ::System::Collections::Generic::Dictionary_2_Enumerator<int32_t, ::UnityEngine::UIElements::Panel*> UnityEngine::UIElements::UIElementsUtility::GetPanelsIterator() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(), { "GetPanelsIterator", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2_Enumerator<int32_t, ::UnityEngine::UIElements::Panel*>>(nullptr, ___internal_method);
}
inline float_t UnityEngine::UIElements::UIElementsUtility::PixelsPerUnitScaleForElement(::UnityEngine::UIElements::VisualElement* ve, ::UnityEngine::Sprite* sprite) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(),
                                              { "PixelsPerUnitScaleForElement", {}, { ::i2c::type_of<::UnityEngine::UIElements::VisualElement*>(), ::i2c::type_of<::UnityEngine::Sprite*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, ve, sprite);
}
inline ::StringW UnityEngine::UIElements::UIElementsUtility::ParseMenuName(::StringW menuName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsUtility*>(), { "ParseMenuName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, menuName);
}
inline ::UnityEngine::UIElements::UIElementsUtility* UnityEngine::UIElements::UIElementsUtility::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIElementsUtility*>());
}
/// @brief Convert operator to "::UnityEngine::UIElements::IUIElementsUtility"
constexpr UnityEngine::UIElements::UIElementsUtility::operator ::UnityEngine::UIElements::IUIElementsUtility*() noexcept {
  return static_cast<::UnityEngine::UIElements::IUIElementsUtility*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::UIElements::IUIElementsUtility"
constexpr ::UnityEngine::UIElements::IUIElementsUtility* UnityEngine::UIElements::UIElementsUtility::i___UnityEngine__UIElements__IUIElementsUtility() noexcept {
  return static_cast<::UnityEngine::UIElements::IUIElementsUtility*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIElementsUtility::UIElementsUtility() {}
