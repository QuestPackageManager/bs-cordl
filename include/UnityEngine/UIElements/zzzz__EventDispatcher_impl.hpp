#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__IEventDispatchingStrategy_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDispatchState_def.hpp"
#include "UnityEngine/UIElements/zzzz__ClickDetector_def.hpp"
#include "UnityEngine/UIElements/zzzz__IPanel_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__DispatchMode_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectPool_1_def.hpp"
// Ctor Parameters [CppParam { name: "m_Event", ty: "::UnityEngine::UIElements::EventBase*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "m_Panel", ty:
// "::UnityEngine::UIElements::IPanel*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::UIElements::__EventDispatcher__EventRecord::__EventDispatcher__EventRecord(::UnityEngine::UIElements::EventBase* m_Event,
                                                                                                    ::UnityEngine::UIElements::IPanel* m_Panel) noexcept {
  this->m_Event = m_Event;
  this->m_Panel = m_Panel;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__EventDispatcher__EventRecord::__EventDispatcher__EventRecord() {}
// Ctor Parameters [CppParam { name: "m_GateCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Queue", ty:
// "::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*", modifiers: "", def_value: Some("nullptr") }]
constexpr ::UnityEngine::UIElements::__EventDispatcher__DispatchContext::__EventDispatcher__DispatchContext(
    uint32_t m_GateCount, ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>* m_Queue) noexcept {
  this->m_GateCount = m_GateCount;
  this->m_Queue = m_Queue;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::__EventDispatcher__DispatchContext::__EventDispatcher__DispatchContext() {}
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.get_pointerState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::PointerDispatchState* (::UnityEngine::UIElements::EventDispatcher::*)()>(
    &::UnityEngine::UIElements::EventDispatcher::get_pointerState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2e02708;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                                                                               "get_pointerState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.CreateForRuntime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::UIElements::EventDispatcher* (*)(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*)>(
        &::UnityEngine::UIElements::EventDispatcher::CreateForRuntime)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2e02710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "CreateForRuntime", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)(
    ::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*)>(&::UnityEngine::UIElements::EventDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x2e02770;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.get_dispatchImmediately
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventDispatcher::*)()>(
    &::UnityEngine::UIElements::EventDispatcher::get_dispatchImmediately)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2e0291c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                                                                               "get_dispatchImmediately", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.set_processingEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)(bool)>(
    &::UnityEngine::UIElements::EventDispatcher::set_processingEvents)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2e0293c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "set_processingEvents",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.Dispatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)(
    ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*, ::UnityEngine::UIElements::DispatchMode)>(&::UnityEngine::UIElements::EventDispatcher::Dispatch)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x2e02948;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "Dispatch", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DispatchMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.CloseGate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)()>(&::UnityEngine::UIElements::EventDispatcher::CloseGate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2e025b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "CloseGate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.OpenGate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)()>(&::UnityEngine::UIElements::EventDispatcher::OpenGate)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2e025e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "OpenGate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.ProcessEventQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)()>(
    &::UnityEngine::UIElements::EventDispatcher::ProcessEventQueue)> {
  constexpr static std::size_t size = 0x3c8;
  constexpr static std::size_t addrs = 0x2e02e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                                                                               "ProcessEventQueue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.ProcessEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)(
    ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*)>(&::UnityEngine::UIElements::EventDispatcher::ProcessEvent)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x2e02aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "ProcessEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.ApplyDispatchingStrategies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)(
    ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::IPanel*, bool)>(&::UnityEngine::UIElements::EventDispatcher::ApplyDispatchingStrategies)> {
  constexpr static std::size_t size = 0x330;
  constexpr static std::size_t addrs = 0x2e03244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "ApplyDispatchingStrategies", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::ClickDetector*& UnityEngine::UIElements::EventDispatcher::__get_m_ClickDetector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ClickDetector;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ClickDetector*> const& UnityEngine::UIElements::EventDispatcher::__get_m_ClickDetector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_ClickDetector;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__set_m_ClickDetector(::UnityEngine::UIElements::ClickDetector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ClickDetector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*& UnityEngine::UIElements::EventDispatcher::__get_m_DispatchingStrategies() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_DispatchingStrategies;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*> const&
UnityEngine::UIElements::EventDispatcher::__get_m_DispatchingStrategies() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_DispatchingStrategies;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__set_m_DispatchingStrategies(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DispatchingStrategies)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*& UnityEngine::UIElements::EventDispatcher::__get_m_Queue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Queue;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*> const&
UnityEngine::UIElements::EventDispatcher::__get_m_Queue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Queue;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__set_m_Queue(::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Queue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::PointerDispatchState*& UnityEngine::UIElements::EventDispatcher::__get__pointerState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pointerState_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::PointerDispatchState*> const& UnityEngine::UIElements::EventDispatcher::__get__pointerState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____pointerState_k__BackingField;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__set__pointerState_k__BackingField(::UnityEngine::UIElements::PointerDispatchState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pointerState_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& UnityEngine::UIElements::EventDispatcher::__get_m_GateCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_GateCount;
}
constexpr uint32_t const& UnityEngine::UIElements::EventDispatcher::__get_m_GateCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_GateCount;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__set_m_GateCount(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_GateCount = value;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*& UnityEngine::UIElements::EventDispatcher::__get_m_DispatchContexts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_DispatchContexts;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>*> const&
UnityEngine::UIElements::EventDispatcher::__get_m_DispatchContexts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_DispatchContexts;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__set_m_DispatchContexts(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::__EventDispatcher__DispatchContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DispatchContexts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::EventDispatcher::__get_m_Immediate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Immediate;
}
constexpr bool const& UnityEngine::UIElements::EventDispatcher::__get_m_Immediate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___m_Immediate;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__set_m_Immediate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___m_Immediate = value;
}
constexpr bool& UnityEngine::UIElements::EventDispatcher::__get__processingEvents_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____processingEvents_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::EventDispatcher::__get__processingEvents_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____processingEvents_k__BackingField;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__set__processingEvents_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____processingEvents_k__BackingField = value;
}
inline void UnityEngine::UIElements::EventDispatcher::setStaticF_k_EventQueuePool(
    ::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*>*, "k_EventQueuePool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get>(
      std::forward<::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*>*>(value));
}
inline ::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*>*
UnityEngine::UIElements::EventDispatcher::getStaticF_k_EventQueuePool() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::__EventDispatcher__EventRecord>*>*,
                                           "k_EventQueuePool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get>();
}
inline void UnityEngine::UIElements::EventDispatcher::setStaticF_s_EditorStrategies(
    ::ArrayW<::UnityEngine::UIElements::IEventDispatchingStrategy*, ::Array<::UnityEngine::UIElements::IEventDispatchingStrategy*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::UIElements::IEventDispatchingStrategy*, ::Array<::UnityEngine::UIElements::IEventDispatchingStrategy*>*>, "s_EditorStrategies",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get>(
      std::forward<::ArrayW<::UnityEngine::UIElements::IEventDispatchingStrategy*, ::Array<::UnityEngine::UIElements::IEventDispatchingStrategy*>*>>(value));
}
inline ::ArrayW<::UnityEngine::UIElements::IEventDispatchingStrategy*, ::Array<::UnityEngine::UIElements::IEventDispatchingStrategy*>*>
UnityEngine::UIElements::EventDispatcher::getStaticF_s_EditorStrategies() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::UIElements::IEventDispatchingStrategy*, ::Array<::UnityEngine::UIElements::IEventDispatchingStrategy*>*>, "s_EditorStrategies",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get>();
}
inline ::UnityEngine::UIElements::PointerDispatchState* UnityEngine::UIElements::EventDispatcher::get_pointerState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                                                                             "get_pointerState", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PointerDispatchState*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventDispatcher*
UnityEngine::UIElements::EventDispatcher::CreateForRuntime(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>* strategies) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "CreateForRuntime", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventDispatcher*, false>(nullptr, ___internal_method, strategies);
}
inline ::UnityEngine::UIElements::EventDispatcher*
UnityEngine::UIElements::EventDispatcher::New_ctor(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>* strategies) {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UIElements::EventDispatcher*>(strategies));
}
inline void UnityEngine::UIElements::EventDispatcher::_ctor(::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>* strategies) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::UnityEngine::UIElements::IEventDispatchingStrategy*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, strategies);
}
inline bool UnityEngine::UIElements::EventDispatcher::get_dispatchImmediately() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                                                                             "get_dispatchImmediately", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventDispatcher::set_processingEvents(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "set_processingEvents",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::EventDispatcher::Dispatch(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel,
                                                               ::UnityEngine::UIElements::DispatchMode dispatchMode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "Dispatch", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DispatchMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, panel, dispatchMode);
}
inline void UnityEngine::UIElements::EventDispatcher::CloseGate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "CloseGate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventDispatcher::OpenGate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "OpenGate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventDispatcher::ProcessEventQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                                                                             "ProcessEventQueue", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventDispatcher::ProcessEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "ProcessEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, panel);
}
inline void UnityEngine::UIElements::EventDispatcher::ApplyDispatchingStrategies(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::IPanel* panel, bool imguiEventIsInitiallyUsed) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "ApplyDispatchingStrategies", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::IPanel*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, panel, imguiEventIsInitiallyUsed);
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventDispatcher::EventDispatcher() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
