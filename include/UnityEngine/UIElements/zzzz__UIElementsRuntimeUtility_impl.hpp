#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIElementsRuntimeUtility.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
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
  constexpr static std::size_t addrs = 0x713f634;

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
  constexpr static std::size_t addrs = 0x713f778;

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
  constexpr static std::size_t addrs = 0x713f7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility___c.__cctor_b__6_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UIElementsRuntimeUtility___c::*)(int32_t, int32_t)>(
    &::UnityEngine::UIElements::UIElementsRuntimeUtility___c::__cctor_b__6_0)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x713f7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility___c*>(),
                                                                                           { "<.cctor>b__6_0", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility___c._SortPanels_b__60_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::UIElements::UIElementsRuntimeUtility___c::*)(
    ::UnityEngine::UIElements::BaseRuntimePanel*, ::UnityEngine::UIElements::BaseRuntimePanel*)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility___c::_SortPanels_b__60_0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x713f84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility___c*>(),
                            { "<SortPanels>b__60_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseRuntimePanel*>() } })));
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
inline void UnityEngine::UIElements::UIElementsRuntimeUtility___c::setStaticF___9__60_0(::System::Comparison_1<::UnityEngine::UIElements::BaseRuntimePanel*>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::UnityEngine::UIElements::BaseRuntimePanel*>*, "<>9__60_0", ::UnityEngine::UIElements::UIElementsRuntimeUtility___c*>(
      std::forward<::System::Comparison_1<::UnityEngine::UIElements::BaseRuntimePanel*>*>(value));
}
inline ::System::Comparison_1<::UnityEngine::UIElements::BaseRuntimePanel*>* UnityEngine::UIElements::UIElementsRuntimeUtility___c::getStaticF___9__60_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::UnityEngine::UIElements::BaseRuntimePanel*>*, "<>9__60_0", ::UnityEngine::UIElements::UIElementsRuntimeUtility___c*>();
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility___c::__cctor_b__6_0(int32_t displayIndex, int32_t sortOrder) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility___c*>(),
                                                                                         { "<.cctor>b__6_0", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, displayIndex, sortOrder);
}
inline int32_t UnityEngine::UIElements::UIElementsRuntimeUtility___c::_SortPanels_b__60_0(::UnityEngine::UIElements::BaseRuntimePanel* runtimePanelA,
                                                                                          ::UnityEngine::UIElements::BaseRuntimePanel* runtimePanelB) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility___c*>(),
                          { "<SortPanels>b__60_0", {}, { ::i2c::type_of<::UnityEngine::UIElements::BaseRuntimePanel*>(), ::i2c::type_of<::UnityEngine::UIElements::BaseRuntimePanel*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, runtimePanelA, runtimePanelB);
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
  constexpr static std::size_t addrs = 0x713bd50;

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
  constexpr static std::size_t addrs = 0x713be54;

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
  constexpr static std::size_t addrs = 0x713c2c0;

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
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x713c690;

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
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x713cc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                                                           { "DisposeRuntimePanel", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.GetPlayerPanelsByRenderMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*, ::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*)>(
        &::UnityEngine::UIElements::UIElementsRuntimeUtility::GetPlayerPanelsByRenderMode)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x713cdb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                             { "GetPlayerPanelsByRenderMode",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.RegisterCachedPanelInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, ::UnityEngine::UIElements::IPanel*)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::RegisterCachedPanelInternal)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x713cae8;

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
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x713c8d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "RemoveCachedPanelInternal", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.RenderOffscreenPanels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::RenderOffscreenPanels)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x713da3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "RenderOffscreenPanels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.RepaintPanel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::BaseRuntimePanel*)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::RepaintPanel)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x713dd50;

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
  constexpr static std::size_t addrs = 0x713dc84;

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
  constexpr static std::size_t addrs = 0x713dde4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "BeginRenderOverlays", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.RenderOverlaysBeforePriority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t, float_t)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::RenderOverlaysBeforePriority)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x713de40;

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
  constexpr static std::size_t addrs = 0x713e084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "EndRenderOverlays", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.RepaintPanels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::RepaintPanels)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0x713e0f8;

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
  constexpr static std::size_t addrs = 0x713e324;

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
  constexpr static std::size_t addrs = 0x713e380;

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
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x713e3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "get_useDefaultEventSystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.get_overrideUseDefaultEventSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<bool> (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::get_overrideUseDefaultEventSystem)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x713e540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "get_overrideUseDefaultEventSystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.set_overrideUseDefaultEventSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Nullable_1<bool>)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::set_overrideUseDefaultEventSystem)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x713e59c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                                                           { "set_overrideUseDefaultEventSystem", {}, { ::i2c::type_of<::System::Nullable_1<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.get_autoUpdateEventSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::get_autoUpdateEventSystem)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x713e5fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "get_autoUpdateEventSystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.RegisterEventSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::RegisterEventSystem)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x713e658;

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
  constexpr static std::size_t addrs = 0x713e898;

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
  constexpr static std::size_t addrs = 0x713e9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "get_defaultEventSystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.UpdatePanels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::UpdatePanels)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0x713ea78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "UpdatePanels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.UpdateEventSystem
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::UpdateEventSystem)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x713ee58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "UpdateEventSystem", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.MarkPotentiallyEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::UIElements::PanelSettings*)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::MarkPotentiallyEmpty)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x713efa4;

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
  constexpr static std::size_t addrs = 0x713ec8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "RemoveUnusedPanels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.EnableRenderingAndInputCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::EnableRenderingAndInputCallbacks)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x713d31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "EnableRenderingAndInputCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.DisableRenderingAndInputCallbacks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::DisableRenderingAndInputCallbacks)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x713d998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "DisableRenderingAndInputCallbacks", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.SetPanelOrderingDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::SetPanelOrderingDirty)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x713f0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "SetPanelOrderingDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.SetPanelsDrawInCameraDirty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::SetPanelsDrawInCameraDirty)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x713f120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "SetPanelsDrawInCameraDirty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.GetWorldSpacePlayerPanels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* (*)()>(
    &::UnityEngine::UIElements::UIElementsRuntimeUtility::GetWorldSpacePlayerPanels)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x713f180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "GetWorldSpacePlayerPanels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.GetSortedScreenOverlayPlayerPanels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* (*)()>(
    &::UnityEngine::UIElements::UIElementsRuntimeUtility::GetSortedScreenOverlayPlayerPanels)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x713dbf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "GetSortedScreenOverlayPlayerPanels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.GetSortedPlayerPanels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* (*)()>(
    &::UnityEngine::UIElements::UIElementsRuntimeUtility::GetSortedPlayerPanels)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x713e298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "GetSortedPlayerPanels", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.SortPanels
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::SortPanels)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0x713d470;

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
  constexpr static std::size_t addrs = 0x713f20c;

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
  constexpr static std::size_t addrs = 0x713f298;

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
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x713f3e8;

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
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x713f54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                                                           { "ScreenBottomLeftToPanelDelta", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.PanelToScreenBottomLeftPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, int32_t)>(
    &::UnityEngine::UIElements::UIElementsRuntimeUtility::PanelToScreenBottomLeftPosition)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x713f5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                             { "PanelToScreenBottomLeftPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.FlipY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2, float_t)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::FlipY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x713f544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                                                           { "FlipY", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.FlipDeltaY
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (*)(::UnityEngine::Vector2)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::FlipDeltaY)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x713f5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "FlipDeltaY", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::UIElementsRuntimeUtility.GetRuntimeDisplayHeight
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(int32_t)>(&::UnityEngine::UIElements::UIElementsRuntimeUtility::GetRuntimeDisplayHeight)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x713f460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "GetRuntimeDisplayHeight", {}, { ::i2c::type_of<int32_t>() } })));
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
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::setStaticF_onWillDestroyPanel(::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>*, "onWillDestroyPanel", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>(
      std::forward<::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>*>(value));
}
inline ::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>* UnityEngine::UIElements::UIElementsRuntimeUtility::getStaticF_onWillDestroyPanel() {
  return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::UIElements::BaseRuntimePanel*>*, "onWillDestroyPanel", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>();
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::setStaticF_s_RegisteredPlayerloopCallback(bool value) {
  ::cordl_internals::setStaticField<bool, "s_RegisteredPlayerloopCallback", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>(std::forward<bool>(value));
}
inline bool UnityEngine::UIElements::UIElementsRuntimeUtility::getStaticF_s_RegisteredPlayerloopCallback() {
  return ::cordl_internals::getStaticField<bool, "s_RegisteredPlayerloopCallback", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>();
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::setStaticF_s_SortedScreenOverlayPanels(::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*, "s_SortedScreenOverlayPanels",
                                    ::UnityEngine::UIElements::UIElementsRuntimeUtility*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* UnityEngine::UIElements::UIElementsRuntimeUtility::getStaticF_s_SortedScreenOverlayPanels() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*, "s_SortedScreenOverlayPanels",
                                           ::UnityEngine::UIElements::UIElementsRuntimeUtility*>();
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::setStaticF_s_CachedWorldSpacePanels(::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*, "s_CachedWorldSpacePanels",
                                    ::UnityEngine::UIElements::UIElementsRuntimeUtility*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* UnityEngine::UIElements::UIElementsRuntimeUtility::getStaticF_s_CachedWorldSpacePanels() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*, "s_CachedWorldSpacePanels",
                                           ::UnityEngine::UIElements::UIElementsRuntimeUtility*>();
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::setStaticF_s_SortedPlayerPanels(::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*, "s_SortedPlayerPanels",
                                    ::UnityEngine::UIElements::UIElementsRuntimeUtility*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* UnityEngine::UIElements::UIElementsRuntimeUtility::getStaticF_s_SortedPlayerPanels() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*, "s_SortedPlayerPanels",
                                           ::UnityEngine::UIElements::UIElementsRuntimeUtility*>();
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::setStaticF_s_PanelOrderingOrDrawInCameraDirty(bool value) {
  ::cordl_internals::setStaticField<bool, "s_PanelOrderingOrDrawInCameraDirty", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>(std::forward<bool>(value));
}
inline bool UnityEngine::UIElements::UIElementsRuntimeUtility::getStaticF_s_PanelOrderingOrDrawInCameraDirty() {
  return ::cordl_internals::getStaticField<bool, "s_PanelOrderingOrDrawInCameraDirty", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>();
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::setStaticF_s_ResolvedSortingIndexMax(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "s_ResolvedSortingIndexMax", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::UIElements::UIElementsRuntimeUtility::getStaticF_s_ResolvedSortingIndexMax() {
  return ::cordl_internals::getStaticField<int32_t, "s_ResolvedSortingIndexMax", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>();
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
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::setStaticF__overrideUseDefaultEventSystem_k__BackingField(::System::Nullable_1<bool> value) {
  ::cordl_internals::setStaticField<::System::Nullable_1<bool>, "<overrideUseDefaultEventSystem>k__BackingField", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>(
      std::forward<::System::Nullable_1<bool>>(value));
}
inline ::System::Nullable_1<bool> UnityEngine::UIElements::UIElementsRuntimeUtility::getStaticF__overrideUseDefaultEventSystem_k__BackingField() {
  return ::cordl_internals::getStaticField<::System::Nullable_1<bool>, "<overrideUseDefaultEventSystem>k__BackingField", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>();
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::setStaticF__autoUpdateEventSystem_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<autoUpdateEventSystem>k__BackingField", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>(std::forward<bool>(value));
}
inline bool UnityEngine::UIElements::UIElementsRuntimeUtility::getStaticF__autoUpdateEventSystem_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<autoUpdateEventSystem>k__BackingField", ::UnityEngine::UIElements::UIElementsRuntimeUtility*>();
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
inline void
UnityEngine::UIElements::UIElementsRuntimeUtility::GetPlayerPanelsByRenderMode(::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* outScreenSpaceOverlayPanels,
                                                                               ::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* outWorldSpacePanels) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                           { "GetPlayerPanelsByRenderMode",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, outScreenSpaceOverlayPanels, outWorldSpacePanels);
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
inline ::System::Nullable_1<bool> UnityEngine::UIElements::UIElementsRuntimeUtility::get_overrideUseDefaultEventSystem() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "get_overrideUseDefaultEventSystem", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<bool>>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::set_overrideUseDefaultEventSystem(::System::Nullable_1<bool> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                                                         { "set_overrideUseDefaultEventSystem", {}, { ::i2c::type_of<::System::Nullable_1<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::UIElements::UIElementsRuntimeUtility::get_autoUpdateEventSystem() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "get_autoUpdateEventSystem", {}, {} })));
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
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::UpdateEventSystem() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "UpdateEventSystem", {}, {} })));
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
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::EnableRenderingAndInputCallbacks() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "EnableRenderingAndInputCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::DisableRenderingAndInputCallbacks() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "DisableRenderingAndInputCallbacks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::SetPanelOrderingDirty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "SetPanelOrderingDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::UIElementsRuntimeUtility::SetPanelsDrawInCameraDirty() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "SetPanelsDrawInCameraDirty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* UnityEngine::UIElements::UIElementsRuntimeUtility::GetWorldSpacePlayerPanels() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "GetWorldSpacePlayerPanels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* UnityEngine::UIElements::UIElementsRuntimeUtility::GetSortedScreenOverlayPlayerPanels() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "GetSortedScreenOverlayPlayerPanels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>* UnityEngine::UIElements::UIElementsRuntimeUtility::GetSortedPlayerPanels() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "GetSortedPlayerPanels", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::UIElements::BaseRuntimePanel*>*>(nullptr, ___internal_method);
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
inline ::UnityEngine::Vector2 UnityEngine::UIElements::UIElementsRuntimeUtility::PanelToScreenBottomLeftPosition(::UnityEngine::Vector2 panelPosition, int32_t targetDisplay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                           { "PanelToScreenBottomLeftPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, panelPosition, targetDisplay);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::UIElementsRuntimeUtility::FlipY(::UnityEngine::Vector2 p, float_t displayHeight) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(),
                                                                                         { "FlipY", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, p, displayHeight);
}
inline ::UnityEngine::Vector2 UnityEngine::UIElements::UIElementsRuntimeUtility::FlipDeltaY(::UnityEngine::Vector2 delta) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "FlipDeltaY", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(nullptr, ___internal_method, delta);
}
inline float_t UnityEngine::UIElements::UIElementsRuntimeUtility::GetRuntimeDisplayHeight(int32_t targetDisplay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UIElementsRuntimeUtility*>(), { "GetRuntimeDisplayHeight", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, targetDisplay);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UIElementsRuntimeUtility::UIElementsRuntimeUtility() {}
