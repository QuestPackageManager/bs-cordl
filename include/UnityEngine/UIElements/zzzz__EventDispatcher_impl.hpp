#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/EventDispatcher.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__BaseVisualElementPanel_def.hpp"
#include "UnityEngine/UIElements/zzzz__ClickDetector_def.hpp"
#include "UnityEngine/UIElements/zzzz__DispatchMode_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventDispatcher_def.hpp"
#include "UnityEngine/UIElements/zzzz__ObjectPool_1_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerDispatchState_def.hpp"
// Ctor Parameters [CppParam { name: "m_Event", ty: "::UnityEngine::UIElements::EventBase*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Panel", ty:
// "::UnityEngine::UIElements::BaseVisualElementPanel*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::EventDispatcher_EventRecord::EventDispatcher_EventRecord(::UnityEngine::UIElements::EventBase* m_Event,
                                                                                              ::UnityEngine::UIElements::BaseVisualElementPanel* m_Panel) noexcept {
  this->m_Event = m_Event;
  this->m_Panel = m_Panel;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventDispatcher_EventRecord::EventDispatcher_EventRecord() {}
// Ctor Parameters [CppParam { name: "m_GateCount", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_Queue", ty:
// "::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::UIElements::EventDispatcher_DispatchContext::EventDispatcher_DispatchContext(
    uint32_t m_GateCount, ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>* m_Queue) noexcept {
  this->m_GateCount = m_GateCount;
  this->m_Queue = m_Queue;
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventDispatcher_DispatchContext::EventDispatcher_DispatchContext() {}
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventDispatcher___c::*)()>(&::UnityEngine::UIElements::EventDispatcher___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bca3d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher___c.__cctor_b__35_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>* (
    ::UnityEngine::UIElements::EventDispatcher___c::*)()>(&::UnityEngine::UIElements::EventDispatcher___c::__cctor_b__35_0)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6bca3dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher___c*>::get(),
                                                                               "<.cctor>b__35_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::EventDispatcher___c::setStaticF___9(::UnityEngine::UIElements::EventDispatcher___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::EventDispatcher___c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher___c*>::get>(
      std::forward<::UnityEngine::UIElements::EventDispatcher___c*>(value));
}
inline ::UnityEngine::UIElements::EventDispatcher___c* UnityEngine::UIElements::EventDispatcher___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::EventDispatcher___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher___c*>::get>();
}
inline void UnityEngine::UIElements::EventDispatcher___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>* UnityEngine::UIElements::EventDispatcher___c::__cctor_b__35_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher___c*>::get(),
                                                                             "<.cctor>b__35_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventDispatcher___c* UnityEngine::UIElements::EventDispatcher___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::EventDispatcher___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventDispatcher___c::EventDispatcher___c() {}
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.get_pointerState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::PointerDispatchState* (::UnityEngine::UIElements::EventDispatcher::*)()>(
    &::UnityEngine::UIElements::EventDispatcher::get_pointerState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc93cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                                                                               "get_pointerState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.CreateDefault
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UIElements::EventDispatcher* (*)()>(&::UnityEngine::UIElements::EventDispatcher::CreateDefault)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6bc93d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                                                                               "CreateDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)()>(&::UnityEngine::UIElements::EventDispatcher::_ctor)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x6bc9428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.get_dispatchImmediately
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventDispatcher::*)()>(
    &::UnityEngine::UIElements::EventDispatcher::get_dispatchImmediately)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6bc9564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                                                                               "get_dispatchImmediately", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.set_processingEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)(bool)>(
    &::UnityEngine::UIElements::EventDispatcher::set_processingEvents)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bc9584;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "set_processingEvents",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.Dispatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)(
    ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*, ::UnityEngine::UIElements::DispatchMode)>(&::UnityEngine::UIElements::EventDispatcher::Dispatch)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6bc958c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "Dispatch", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVisualElementPanel*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DispatchMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.HandleRecursiveState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::UIElements::EventDispatcher::*)(::UnityEngine::UIElements::EventBase*)>(
    &::UnityEngine::UIElements::EventDispatcher::HandleRecursiveState)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0x6bc9a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "HandleRecursiveState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.CloseGate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)()>(&::UnityEngine::UIElements::EventDispatcher::CloseGate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6bc9120;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "CloseGate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.OpenGate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)()>(&::UnityEngine::UIElements::EventDispatcher::OpenGate)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x6bc9148;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "OpenGate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.ProcessEventQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)()>(
    &::UnityEngine::UIElements::EventDispatcher::ProcessEventQueue)> {
  constexpr static std::size_t size = 0x39c;
  constexpr static std::size_t addrs = 0x6bc9ec4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                                                                               "ProcessEventQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::EventDispatcher.ProcessEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UIElements::EventDispatcher::*)(
    ::UnityEngine::UIElements::EventBase*, ::UnityEngine::UIElements::BaseVisualElementPanel*)>(&::UnityEngine::UIElements::EventDispatcher::ProcessEvent)> {
  constexpr static std::size_t size = 0x280;
  constexpr static std::size_t addrs = 0x6bc97b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "ProcessEvent", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVisualElementPanel*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UIElements::ClickDetector*& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_ClickDetector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClickDetector;
}
constexpr ::UnityEngine::UIElements::ClickDetector* const& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_ClickDetector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ClickDetector;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__cordl_internal_set_m_ClickDetector(::UnityEngine::UIElements::ClickDetector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_ClickDetector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>*& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_Queue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Queue;
}
constexpr ::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>* const& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_Queue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Queue;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__cordl_internal_set_m_Queue(::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Queue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::UIElements::PointerDispatchState*& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get__pointerState_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerState_k__BackingField;
}
constexpr ::UnityEngine::UIElements::PointerDispatchState* const& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get__pointerState_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pointerState_k__BackingField;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__cordl_internal_set__pointerState_k__BackingField(::UnityEngine::UIElements::PointerDispatchState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pointerState_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr uint32_t& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_GateCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GateCount;
}
constexpr uint32_t const& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_GateCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GateCount;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__cordl_internal_set_m_GateCount(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GateCount = value;
}
constexpr uint32_t& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_GateDepth() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GateDepth;
}
constexpr uint32_t const& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_GateDepth() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_GateDepth;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__cordl_internal_set_m_GateDepth(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_GateDepth = value;
}
constexpr int32_t& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_DispatchStackFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DispatchStackFrame;
}
constexpr int32_t const& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_DispatchStackFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DispatchStackFrame;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__cordl_internal_set_m_DispatchStackFrame(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DispatchStackFrame = value;
}
constexpr ::UnityEngine::UIElements::EventBase*& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_CurrentEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentEvent;
}
constexpr ::UnityEngine::UIElements::EventBase* const& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_CurrentEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentEvent;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__cordl_internal_set_m_CurrentEvent(::UnityEngine::UIElements::EventBase* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_CurrentEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventDispatcher_DispatchContext>*& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_DispatchContexts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DispatchContexts;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventDispatcher_DispatchContext>* const&
UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_DispatchContexts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DispatchContexts;
}
constexpr void
UnityEngine::UIElements::EventDispatcher::__cordl_internal_set_m_DispatchContexts(::System::Collections::Generic::Stack_1<::UnityEngine::UIElements::EventDispatcher_DispatchContext>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_DispatchContexts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_Immediate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Immediate;
}
constexpr bool const& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get_m_Immediate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Immediate;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__cordl_internal_set_m_Immediate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Immediate = value;
}
constexpr bool& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get__processingEvents_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processingEvents_k__BackingField;
}
constexpr bool const& UnityEngine::UIElements::EventDispatcher::__cordl_internal_get__processingEvents_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____processingEvents_k__BackingField;
}
constexpr void UnityEngine::UIElements::EventDispatcher::__cordl_internal_set__processingEvents_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____processingEvents_k__BackingField = value;
}
inline void UnityEngine::UIElements::EventDispatcher::setStaticF_k_EventQueuePool(
    ::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>*>* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>*>*, "k_EventQueuePool",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get>(
      std::forward<::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>*>*>(value));
}
inline ::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>*>*
UnityEngine::UIElements::EventDispatcher::getStaticF_k_EventQueuePool() {
  return ::cordl_internals::getStaticField<::UnityEngine::UIElements::ObjectPool_1<::System::Collections::Generic::Queue_1<::UnityEngine::UIElements::EventDispatcher_EventRecord>*>*,
                                           "k_EventQueuePool", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get>();
}
inline ::UnityEngine::UIElements::PointerDispatchState* UnityEngine::UIElements::EventDispatcher::get_pointerState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                                                                             "get_pointerState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::PointerDispatchState*, false>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::EventDispatcher* UnityEngine::UIElements::EventDispatcher::CreateDefault() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                                                                             "CreateDefault", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UIElements::EventDispatcher*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UIElements::EventDispatcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::UIElements::EventDispatcher::get_dispatchImmediately() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                                                                             "get_dispatchImmediately", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventDispatcher::set_processingEvents(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "set_processingEvents",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::UIElements::EventDispatcher::Dispatch(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel,
                                                               ::UnityEngine::UIElements::DispatchMode dispatchMode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "Dispatch", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVisualElementPanel*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::DispatchMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, panel, dispatchMode);
}
inline bool UnityEngine::UIElements::EventDispatcher::HandleRecursiveState(::UnityEngine::UIElements::EventBase* evt) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "HandleRecursiveState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, evt);
}
inline void UnityEngine::UIElements::EventDispatcher::CloseGate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "CloseGate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventDispatcher::OpenGate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "OpenGate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventDispatcher::ProcessEventQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(),
                                                                             "ProcessEventQueue", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UIElements::EventDispatcher::ProcessEvent(::UnityEngine::UIElements::EventBase* evt, ::UnityEngine::UIElements::BaseVisualElementPanel* panel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UIElements::EventDispatcher*>::get(), "ProcessEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::EventBase*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UIElements::BaseVisualElementPanel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, evt, panel);
}
inline ::UnityEngine::UIElements::EventDispatcher* UnityEngine::UIElements::EventDispatcher::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UIElements::EventDispatcher*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::EventDispatcher::EventDispatcher() {}
