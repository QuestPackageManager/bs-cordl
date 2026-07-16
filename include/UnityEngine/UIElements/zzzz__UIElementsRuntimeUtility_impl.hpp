#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIElementsRuntimeUtility.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UIElementsRuntimeUtility_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseRuntimePanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__DefaultEventSystem_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelSettings_def.hpp"
#include "UnityEngine/UIElements/zzzz__Panel_def.hpp"
#include "UnityEngine/UIElements/zzzz__UIElementsRuntimeUtility_def.hpp"
#include "UnityEngine/zzzz__Event_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6cb4408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::UIElements::BaseRuntimePanel* (::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate::*)(::UnityEngine::ScriptableObject*)>(
        &::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6cb454c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline ::UnityEngine::UIElements::BaseRuntimePanel* UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate::Invoke(::UnityEngine::ScriptableObject* ownerObject) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BaseRuntimePanel*>(this, ___internal_method, ownerObject);
}
inline ::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate* UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate::New_ctor(::System::Object* object,
                                                                                                                                                                              ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate::UIElementsRuntimeUtility_CreateRuntimePanelDelegate() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIElementsRuntimeUtility___c::*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtility___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cb45b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility___c.__cctor_b__3_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIElementsRuntimeUtility___c::*)(int32_t, int32_t)>(
    &::UnityEngine::UIElements::UIElementsRuntimeUtility___c::__cctor_b__3_0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6cb45b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility___c*>(),
                                                                                           { "<.cctor>b__3_0", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility___c._SortPanels_b__43_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::UIElementsRuntimeUtility___c::*)(::UnityEngine::UIElements::Panel*, ::UnityEngine::UIElements::Panel*)>(
    &::UnityEngine::UIElements::UIElementsRuntimeUtility___c::_SortPanels_b__43_0)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x6cb4620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility___c*>(),
                                                { "<SortPanels>b__43_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::Panel*>(), ::i2c::type_of<::UnityEngine::UIElements::Panel*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIElementsRuntimeUtility___c::setStaticF___9(::UnityEngine::UIElements::UIElementsRuntimeUtility___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::UIElementsRuntimeUtility___c*, "<>9", ::UnityEngine::UIElements::UIElementsRuntimeUtility___c*>(
      std::forward<::UnityEngine::UIElements::UIElementsRuntimeUtility___c*>(value));
}
inline ::UnityEngine::UIElements::UIElementsRuntimeUtility___c* UnityEngine::UIElements::UIElementsRuntimeUtility___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::UIElementsRuntimeUtility___c*, "<>9", ::UnityEngine::UIElements::UIElementsRuntimeUtility___c*>();
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility___c::setStaticF___9__43_0(::System::Comparison_1<::UnityEngine::UIElements::Panel*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::UIElements::Panel*>*, "<>9__43_0", ::UnityEngine::UIElements::UIElementsRuntimeUtility___c*>(
      std::forward<::System::Comparison_1<::UnityEngine::UIElements::Panel*>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::UIElements::Panel*>* UnityEngine::UIElements::UIElementsRuntimeUtility___c::getStaticF___9__43_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::UIElements::Panel*>*, "<>9__43_0", ::UnityEngine::UIElements::UIElementsRuntimeUtility___c*>();
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility___c::__cctor_b__3_0(int32_t displayIndex, int32_t sortOrder) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility___c*>(),
                                                                                         { "<.cctor>b__3_0", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayIndex, sortOrder);
}
inline int32_t UnityEngine::UIElements::UIElementsRuntimeUtility___c::_SortPanels_b__43_0(::UnityEngine::UIElements::Panel* a, ::UnityEngine::UIElements::Panel* b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility___c*>(),
                                              { "<SortPanels>b__43_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::Panel*>(), ::i2c::type_of<::UnityEngine::UIElements::Panel*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, a, b);
}
inline ::UnityEngine::UIElements::UIElementsRuntimeUtility___c* UnityEngine::UIElements::UIElementsRuntimeUtility___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UIElementsRuntimeUtility___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIElementsRuntimeUtility___c::UIElementsRuntimeUtility___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.add_onCreatePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>*)>(
    &::UnityEngine::UIElements::UIElementsRuntimeUtility::add_onCreatePanel)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6cb1588;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                             { "add_onCreatePanel", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.remove_onCreatePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>*)>(
    &::UnityEngine::UIElements::UIElementsRuntimeUtility::remove_onCreatePanel)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x6cb168c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                             { "remove_onCreatePanel", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.CreateEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::EventBase* (*)(::UnityEngine::Event*)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::CreateEvent)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6cb1a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "CreateEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.FindOrCreateRuntimePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::UnityEngine::UIElements::BaseRuntimePanel* (*)(::UnityEngine::ScriptableObject*, ::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate*)>(
        &::UnityEngine::UIElements::UIElementsRuntimeUtility::FindOrCreateRuntimePanel)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6cb1e48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                            { "FindOrCreateRuntimePanel",
                              {},
                              { ::i2c::type_of<::UnityEngine::ScriptableObject*>(), ::i2c::type_of<::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.DisposeRuntimePanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ScriptableObject*)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::DisposeRuntimePanel)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6cb2340;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                                                           { "DisposeRuntimePanel", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.RegisterCachedPanelInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::UIElements::IPanel*)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::RegisterCachedPanelInternal)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x6cb21ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                             { "RegisterCachedPanelInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.RemoveCachedPanelInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::RemoveCachedPanelInternal)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6cb2088;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "RemoveCachedPanelInternal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.RenderOffscreenPanels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::RenderOffscreenPanels)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x6cb290c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "RenderOffscreenPanels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.RepaintPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::BaseRuntimePanel*)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::RepaintPanel)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x6cb2c80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                                                           { "RepaintPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseRuntimePanel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.RenderPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::BaseRuntimePanel*, bool)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::RenderPanel)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6cb2bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                             { "RenderPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.BeginRenderOverlays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::BeginRenderOverlays)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6cb2e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "BeginRenderOverlays", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.RenderOverlaysBeforePriority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, float_t)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::RenderOverlaysBeforePriority)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x6cb2e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                                                           { "RenderOverlaysBeforePriority", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.EndRenderOverlays
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::EndRenderOverlays)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6cb3090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "EndRenderOverlays", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.RepaintPanels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::RepaintPanels)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x6cb3104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "RepaintPanels", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.get_activeEventSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::get_activeEventSystem)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6cb32f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "get_activeEventSystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.set_activeEventSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::set_activeEventSystem)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6cb3354;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "set_activeEventSystem", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.get_useDefaultEventSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::get_useDefaultEventSystem)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6cb33b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "get_useDefaultEventSystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.RegisterEventSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::RegisterEventSystem)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x6cb3480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "RegisterEventSystem", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.UnregisterEventSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::UnregisterEventSystem)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6cb36c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "UnregisterEventSystem", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.get_defaultEventSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::UIElements::DefaultEventSystem* (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::get_defaultEventSystem)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6cb37f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "get_defaultEventSystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.UpdatePanels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::UpdatePanels)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x6cb38a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "UpdatePanels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.MarkPotentiallyEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::PanelSettings*)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::MarkPotentiallyEmpty)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6cb3ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                                                           { "MarkPotentiallyEmpty", {}, { ::i2c::type_of<::UnityEngine::UIElements::PanelSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.RemoveUnusedPanels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::RemoveUnusedPanels)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x6cb3b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "RemoveUnusedPanels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.RegisterPlayerloopCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::RegisterPlayerloopCallback)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6cb24d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "RegisterPlayerloopCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.UnregisterPlayerloopCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::UnregisterPlayerloopCallback)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x6cb2820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "UnregisterPlayerloopCallback", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.SetPanelOrderingDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::SetPanelOrderingDirty)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6cb3dfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "SetPanelOrderingDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.GetSortedPlayerPanels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>* (*)()>(
    &::UnityEngine::UIElements::UIElementsRuntimeUtility::GetSortedPlayerPanels)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6cb2b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "GetSortedPlayerPanels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.SortPanels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::SortPanels)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x6cb3e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "SortPanels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.MultiDisplayBottomLeftToPanelPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::by_ref<::System::Nullable_1<int32_t>>)>(
    &::UnityEngine::UIElements::UIElementsRuntimeUtility::MultiDisplayBottomLeftToPanelPosition)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6cb4124;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                         { "MultiDisplayBottomLeftToPanelPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<::System::Nullable_1<int32_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.MultiDisplayToLocalScreenPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, ::by_ref<::System::Nullable_1<int32_t>>)>(
    &::UnityEngine::UIElements::UIElementsRuntimeUtility::MultiDisplayToLocalScreenPosition)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6cb41b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                { "MultiDisplayToLocalScreenPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<::System::Nullable_1<int32_t>>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.ScreenBottomLeftToPanelPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, int32_t)>(
    &::UnityEngine::UIElements::UIElementsRuntimeUtility::ScreenBottomLeftToPanelPosition)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6cb4300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                             { "ScreenBottomLeftToPanelPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.ScreenBottomLeftToPanelDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::ScreenBottomLeftToPanelDelta)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cb4400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                                                           { "ScreenBottomLeftToPanelDelta", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::setStaticF_onCreatePanel(::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>*, "onCreatePanel", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>(
      std::forward<::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>*>(value));
}
inline ::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>* UnityEngine::UIElements::UIElementsRuntimeUtility::getStaticF_onCreatePanel() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>*, "onCreatePanel", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>();
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::setStaticF_s_RegisteredPlayerloopCallback(bool value) {
  ::cordl_internals::setStaticField<bool, "s_RegisteredPlayerloopCallback", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>(std::forward<bool>(value));
}
inline bool UnityEngine::UIElements::UIElementsRuntimeUtility::getStaticF_s_RegisteredPlayerloopCallback() {
  return ::cordl_internals::getStaticField<bool, "s_RegisteredPlayerloopCallback", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>();
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::setStaticF_s_SortedRuntimePanels(::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>*, "s_SortedRuntimePanels", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>(
      std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>* UnityEngine::UIElements::UIElementsRuntimeUtility::getStaticF_s_SortedRuntimePanels() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>*, "s_SortedRuntimePanels", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>();
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::setStaticF_s_PanelOrderingDirty(bool value) {
  ::cordl_internals::setStaticField<bool, "s_PanelOrderingDirty", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>(std::forward<bool>(value));
}
inline bool UnityEngine::UIElements::UIElementsRuntimeUtility::getStaticF_s_PanelOrderingDirty() {
  return ::cordl_internals::getStaticField<bool, "s_PanelOrderingDirty", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>();
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::setStaticF_s_ResolvedSortingIndexMax(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_ResolvedSortingIndexMax", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIElementsRuntimeUtility::getStaticF_s_ResolvedSortingIndexMax() {
  return ::cordl_internals::getStaticField<int32_t, "s_ResolvedSortingIndexMax", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>();
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::setStaticF_s_RepaintProfilerMarkerName(::StringW value) {
  ::cordl_internals::setStaticField<::StringW, "s_RepaintProfilerMarkerName", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>(std::forward<::StringW>(value));
}
inline ::StringW UnityEngine::UIElements::UIElementsRuntimeUtility::getStaticF_s_RepaintProfilerMarkerName() {
  return ::cordl_internals::getStaticField<::StringW, "s_RepaintProfilerMarkerName", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>();
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::setStaticF_s_RepaintProfilerMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "s_RepaintProfilerMarker", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>(
      std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::UIElements::UIElementsRuntimeUtility::getStaticF_s_RepaintProfilerMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "s_RepaintProfilerMarker", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>();
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::setStaticF_currentOverlayIndex(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "currentOverlayIndex", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIElementsRuntimeUtility::getStaticF_currentOverlayIndex() {
  return ::cordl_internals::getStaticField<int32_t, "currentOverlayIndex", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>();
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::setStaticF__activeEventSystem_k__BackingField(::UnityW<::UnityEngine::Object> value) {
  ::cordl_internals::setStaticField<::UnityW<::UnityEngine::Object>, "<activeEventSystem>k__BackingField", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>(
      std::forward<::UnityW<::UnityEngine::Object>>(value));
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::UIElements::UIElementsRuntimeUtility::getStaticF__activeEventSystem_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Object>, "<activeEventSystem>k__BackingField", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>();
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::setStaticF_s_DefaultEventSystem(::UnityEngine::UIElements::DefaultEventSystem* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::DefaultEventSystem*, "s_DefaultEventSystem", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>(
      std::forward<::UnityEngine::UIElements::DefaultEventSystem*>(value));
}
inline ::UnityEngine::UIElements::DefaultEventSystem* UnityEngine::UIElements::UIElementsRuntimeUtility::getStaticF_s_DefaultEventSystem() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::DefaultEventSystem*, "s_DefaultEventSystem", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>();
}
inline void
UnityEngine::UIElements::UIElementsRuntimeUtility::setStaticF_s_PotentiallyEmptyPanelSettings(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::PanelSettings>>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::PanelSettings>>*, "s_PotentiallyEmptyPanelSettings",
                                    ::UnityEngine::UIElements::UIElementsRuntimeUtility*>(
      std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::PanelSettings>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::PanelSettings>>* UnityEngine::UIElements::UIElementsRuntimeUtility::getStaticF_s_PotentiallyEmptyPanelSettings() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UIElements::PanelSettings>>*, "s_PotentiallyEmptyPanelSettings",
                                           ::UnityEngine::UIElements::UIElementsRuntimeUtility*>();
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::add_onCreatePanel(::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                           { "add_onCreatePanel", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::remove_onCreatePanel(::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                           { "remove_onCreatePanel", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::UIElements::EventBase* UnityEngine::UIElements::UIElementsRuntimeUtility::CreateEvent(::UnityEngine::Event* systemEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "CreateEvent", {}, { ::i2c::type_of<::UnityEngine::Event*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventBase*>(nullptr, ___internal_method, systemEvent);
}
inline ::UnityEngine::UIElements::BaseRuntimePanel*
UnityEngine::UIElements::UIElementsRuntimeUtility::FindOrCreateRuntimePanel(::UnityEngine::ScriptableObject* ownerObject,
                                                                            ::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate* createDelegate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                       { "FindOrCreateRuntimePanel",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::ScriptableObject*>(), ::i2c::type_of<::UnityEngine::UIElements::UIElementsRuntimeUtility_CreateRuntimePanelDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::BaseRuntimePanel*>(nullptr, ___internal_method, ownerObject, createDelegate);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::DisposeRuntimePanel(::UnityEngine::ScriptableObject* ownerObject) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                                                         { "DisposeRuntimePanel", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ownerObject);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::RegisterCachedPanelInternal(int32_t instanceID, ::UnityEngine::UIElements::IPanel* panel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                           { "RegisterCachedPanelInternal", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::UIElements::IPanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instanceID, panel);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::RemoveCachedPanelInternal(int32_t instanceID) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "RemoveCachedPanelInternal", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, instanceID);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::RenderOffscreenPanels() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "RenderOffscreenPanels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::RepaintPanel(::UnityEngine::UIElements::BaseRuntimePanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                                                         { "RepaintPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseRuntimePanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, panel);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::RenderPanel(::UnityEngine::UIElements::BaseRuntimePanel* panel, bool restoreState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                           { "RenderPanel", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, panel, restoreState);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::BeginRenderOverlays(int32_t displayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "BeginRenderOverlays", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, displayIndex);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::RenderOverlaysBeforePriority(int32_t displayIndex, float_t maxPriority) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                                                         { "RenderOverlaysBeforePriority", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, displayIndex, maxPriority);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::EndRenderOverlays(int32_t displayIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "EndRenderOverlays", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, displayIndex);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::RepaintPanels(bool onlyOffscreen) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "RepaintPanels", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, onlyOffscreen);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::UIElements::UIElementsRuntimeUtility::get_activeEventSystem() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "get_activeEventSystem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::set_activeEventSystem(::UnityEngine::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "set_activeEventSystem", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::UIElements::UIElementsRuntimeUtility::get_useDefaultEventSystem() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "get_useDefaultEventSystem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::RegisterEventSystem(::UnityEngine::Object* eventSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "RegisterEventSystem", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventSystem);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::UnregisterEventSystem(::UnityEngine::Object* eventSystem) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "UnregisterEventSystem", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventSystem);
}
inline ::UnityEngine::UIElements::DefaultEventSystem* UnityEngine::UIElements::UIElementsRuntimeUtility::get_defaultEventSystem() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "get_defaultEventSystem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::DefaultEventSystem*>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::UpdatePanels() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "UpdatePanels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::MarkPotentiallyEmpty(::UnityEngine::UIElements::PanelSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                                                         { "MarkPotentiallyEmpty", {}, { ::i2c::type_of<::UnityEngine::UIElements::PanelSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, settings);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::RemoveUnusedPanels() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "RemoveUnusedPanels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::RegisterPlayerloopCallback() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "RegisterPlayerloopCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::UnregisterPlayerloopCallback() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "UnregisterPlayerloopCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::SetPanelOrderingDirty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "SetPanelOrderingDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>* UnityEngine::UIElements::UIElementsRuntimeUtility::GetSortedPlayerPanels() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "GetSortedPlayerPanels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::Panel*>*>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::SortPanels() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "SortPanels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::UIElementsRuntimeUtility::MultiDisplayBottomLeftToPanelPosition(::UnityEngine::Vector2 position,
                                                                                                                       ::by_ref<::System::Nullable_1<int32_t>> targetDisplay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                       { "MultiDisplayBottomLeftToPanelPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<::System::Nullable_1<int32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, position, targetDisplay);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::UIElementsRuntimeUtility::MultiDisplayToLocalScreenPosition(::UnityEngine::Vector2 position,
                                                                                                                   ::by_ref<::System::Nullable_1<int32_t>> targetDisplay) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                              { "MultiDisplayToLocalScreenPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::by_ref<::System::Nullable_1<int32_t>>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, position, targetDisplay);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::UIElementsRuntimeUtility::ScreenBottomLeftToPanelPosition(::UnityEngine::Vector2 position, int32_t targetDisplay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                           { "ScreenBottomLeftToPanelPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, position, targetDisplay);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::UIElementsRuntimeUtility::ScreenBottomLeftToPanelDelta(::UnityEngine::Vector2 delta) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "ScreenBottomLeftToPanelDelta", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, delta);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIElementsRuntimeUtility::UIElementsRuntimeUtility() {}
