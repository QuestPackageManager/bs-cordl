#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__DeltaStateEvent_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__StateEvent_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSystem_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSystem_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSystem_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommandDelegate_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventListener_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputManager_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputRuntime_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSettings_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceFindControlLayoutDelegate_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputMetrics_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlLayoutChange_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__DeltaStateEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__StateEvent_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__InputSystem__StateEventBuffer___data_e__FixedBuffer::__InputSystem__StateEventBuffer___data_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputSystem__StateEventBuffer___data_e__FixedBuffer::__InputSystem__StateEventBuffer___data_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "stateEvent", ty: "::UnityEngine::InputSystem::LowLevel::StateEvent", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty:
// "::GlobalNamespace::__InputSystem__StateEventBuffer___data_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputSystem__StateEventBuffer::__InputSystem__StateEventBuffer(::UnityEngine::InputSystem::LowLevel::StateEvent stateEvent,
                                                                                                       ::GlobalNamespace::__InputSystem__StateEventBuffer___data_e__FixedBuffer data) noexcept {
  this->stateEvent = stateEvent;
  this->data = data;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputSystem__StateEventBuffer::__InputSystem__StateEventBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer::__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer::__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "stateEvent", ty: "::UnityEngine::InputSystem::LowLevel::DeltaStateEvent", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty:
// "::GlobalNamespace::__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::__InputSystem__DeltaStateEventBuffer::__InputSystem__DeltaStateEventBuffer(
    ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent stateEvent, ::GlobalNamespace::__InputSystem__DeltaStateEventBuffer___data_e__FixedBuffer data) noexcept {
  this->stateEvent = stateEvent;
  this->data = data;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputSystem__DeltaStateEventBuffer::__InputSystem__DeltaStateEventBuffer() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputSystem____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::__InputSystem____c::*)()>(&::UnityEngine::InputSystem::__InputSystem____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a62b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputSystem____c*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputSystem____c._get_onAnyButtonPress_b__79_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (
    ::UnityEngine::InputSystem::__InputSystem____c::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::__InputSystem____c::_get_onAnyButtonPress_b__79_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2a62b48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputSystem____c*>::get(), "<get_onAnyButtonPress>b__79_0", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::__InputSystem____c._get_onAnyButtonPress_b__79_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputSystem::__InputSystem____c::*)(::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::__InputSystem____c::_get_onAnyButtonPress_b__79_1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2a62d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputSystem____c*>::get(), "<get_onAnyButtonPress>b__79_1", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::__InputSystem____c::setStaticF___9(::UnityEngine::InputSystem::__InputSystem____c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::__InputSystem____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputSystem____c*>::get>(
      std::forward<::UnityEngine::InputSystem::__InputSystem____c*>(value));
}
inline ::UnityEngine::InputSystem::__InputSystem____c* UnityEngine::InputSystem::__InputSystem____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::__InputSystem____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputSystem____c*>::get>();
}
inline void
UnityEngine::InputSystem::__InputSystem____c::setStaticF___9__79_0(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputControl*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputControl*>*, "<>9__79_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputSystem____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputControl*>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputControl*>* UnityEngine::InputSystem::__InputSystem____c::getStaticF___9__79_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputControl*>*, "<>9__79_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputSystem____c*>::get>();
}
inline void UnityEngine::InputSystem::__InputSystem____c::setStaticF___9__79_1(::System::Func_2<::UnityEngine::InputSystem::InputControl*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::InputControl*, bool>*, "<>9__79_1",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputSystem____c*>::get>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::InputControl*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::InputControl*, bool>* UnityEngine::InputSystem::__InputSystem____c::getStaticF___9__79_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::InputControl*, bool>*, "<>9__79_1",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputSystem____c*>::get>();
}
inline ::UnityEngine::InputSystem::__InputSystem____c* UnityEngine::InputSystem::__InputSystem____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::InputSystem::__InputSystem____c*>());
}
inline void UnityEngine::InputSystem::__InputSystem____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputSystem____c*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::__InputSystem____c::_get_onAnyButtonPress_b__79_0(::UnityEngine::InputSystem::LowLevel::InputEventPtr e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputSystem____c*>::get(), "<get_onAnyButtonPress>b__79_0", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(this, ___internal_method, e);
}
inline bool UnityEngine::InputSystem::__InputSystem____c::_get_onAnyButtonPress_b__79_1(::UnityEngine::InputSystem::InputControl* c) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::__InputSystem____c*>::get(), "<get_onAnyButtonPress>b__79_1", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, c);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::__InputSystem____c::__InputSystem____c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.add_onLayoutChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*)>(
    &::UnityEngine::InputSystem::InputSystem::add_onLayoutChange)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2a5de2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "add_onLayoutChange", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.remove_onLayoutChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*)>(
    &::UnityEngine::InputSystem::InputSystem::remove_onLayoutChange)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2a5df58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "remove_onLayoutChange", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RegisterLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*, ::StringW, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>)>(
    &::UnityEngine::InputSystem::InputSystem::RegisterLayout)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x2a5e084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RegisterLayout", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RegisterLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>)>(
    &::UnityEngine::InputSystem::InputSystem::RegisterLayout)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2a5e228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RegisterLayout", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RegisterLayoutOverride
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::StringW)>(&::UnityEngine::InputSystem::InputSystem::RegisterLayoutOverride)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2a5e324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RegisterLayoutOverride", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RegisterLayoutMatcher
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(
    &::UnityEngine::InputSystem::InputSystem::RegisterLayoutMatcher)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2a5e3a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RegisterLayoutMatcher", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RegisterLayoutBuilder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*, ::StringW, ::StringW,
                                                                                           ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>)>(
    &::UnityEngine::InputSystem::InputSystem::RegisterLayoutBuilder)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x2a5e420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RegisterLayoutBuilder", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RemoveLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::UnityEngine::InputSystem::InputSystem::RemoveLayout)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2a5e5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RemoveLayout", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.TryFindMatchingLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(
    &::UnityEngine::InputSystem::InputSystem::TryFindMatchingLayout)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2a5e610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "TryFindMatchingLayout", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.ListLayouts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)()>(
    &::UnityEngine::InputSystem::InputSystem::ListLayouts)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x2a5e688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "ListLayouts",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.ListLayoutsBasedOn
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW)>(
    &::UnityEngine::InputSystem::InputSystem::ListLayoutsBasedOn)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x2a5e6f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "ListLayoutsBasedOn",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.LoadLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (*)(::StringW)>(
    &::UnityEngine::InputSystem::InputSystem::LoadLayout)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2a5e7b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "LoadLayout", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.GetNameOfBaseLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::InputSystem::InputSystem::GetNameOfBaseLayout)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x2a5e8a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "GetNameOfBaseLayout",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.IsFirstLayoutBasedOnSecond
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::StringW, ::StringW)>(&::UnityEngine::InputSystem::InputSystem::IsFirstLayoutBasedOnSecond)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x2a5e9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "IsFirstLayoutBasedOnSecond", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RegisterProcessor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*, ::StringW)>(&::UnityEngine::InputSystem::InputSystem::RegisterProcessor)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x2a5eb10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RegisterProcessor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.TryGetProcessor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::StringW)>(&::UnityEngine::InputSystem::InputSystem::TryGetProcessor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2a5eef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "TryGetProcessor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.ListProcessors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)()>(
    &::UnityEngine::InputSystem::InputSystem::ListProcessors)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2a5efcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                               "ListProcessors", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.get_devices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> (*)()>(
    &::UnityEngine::InputSystem::InputSystem::get_devices)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2a5f044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "get_devices",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.get_disconnectedDevices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> (*)()>(
    &::UnityEngine::InputSystem::InputSystem::get_disconnectedDevices)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2a5f0a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                               "get_disconnectedDevices", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.add_onDeviceChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*)>(&::UnityEngine::InputSystem::InputSystem::add_onDeviceChange)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2a5f144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "add_onDeviceChange", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.remove_onDeviceChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*)>(&::UnityEngine::InputSystem::InputSystem::remove_onDeviceChange)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2a5f2c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "remove_onDeviceChange", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.add_onDeviceCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*)>(
    &::UnityEngine::InputSystem::InputSystem::add_onDeviceCommand)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2a5f43c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "add_onDeviceCommand", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.remove_onDeviceCommand
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*)>(
    &::UnityEngine::InputSystem::InputSystem::remove_onDeviceCommand)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x2a5f5b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "remove_onDeviceCommand", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.add_onFindLayoutForDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*)>(
    &::UnityEngine::InputSystem::InputSystem::add_onFindLayoutForDevice)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2a5f734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "add_onFindLayoutForDevice", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.remove_onFindLayoutForDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*)>(
    &::UnityEngine::InputSystem::InputSystem::remove_onFindLayoutForDevice)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2a5f860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "remove_onFindLayoutForDevice", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.get_pollingFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)()>(&::UnityEngine::InputSystem::InputSystem::get_pollingFrequency)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2a5f98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                               "get_pollingFrequency", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.set_pollingFrequency
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(float_t)>(&::UnityEngine::InputSystem::InputSystem::set_pollingFrequency)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2a5f9f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "set_pollingFrequency",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.AddDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice* (*)(::StringW, ::StringW, ::StringW)>(
    &::UnityEngine::InputSystem::InputSystem::AddDevice)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x2a5fa64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "AddDevice", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.AddDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice* (*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(
    &::UnityEngine::InputSystem::InputSystem::AddDevice)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x2a5fb68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "AddDevice", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.AddDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::InputSystem::AddDevice)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x2a5fc80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "AddDevice", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RemoveDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::InputSystem::RemoveDevice)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2a5fd3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RemoveDevice", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.FlushDisconnectedDevices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputSystem::FlushDisconnectedDevices)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2a5fdac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                               "FlushDisconnectedDevices", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.GetDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice* (*)(::StringW)>(&::UnityEngine::InputSystem::InputSystem::GetDevice)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2a5fe10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "GetDevice", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.GetDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice* (*)(::System::Type*)>(&::UnityEngine::InputSystem::InputSystem::GetDevice)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x2a5fe7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "GetDevice", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.GetDeviceById
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputDevice* (*)(int32_t)>(&::UnityEngine::InputSystem::InputSystem::GetDeviceById)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2a60080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "GetDeviceById", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.GetUnsupportedDevices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>* (*)()>(
    &::UnityEngine::InputSystem::InputSystem::GetUnsupportedDevices)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2a600ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                               "GetUnsupportedDevices", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.GetUnsupportedDevices
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*)>(
    &::UnityEngine::InputSystem::InputSystem::GetUnsupportedDevices)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2a60188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "GetUnsupportedDevices", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.EnableDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::InputSystem::EnableDevice)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2a601f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "EnableDevice", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.DisableDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, bool)>(&::UnityEngine::InputSystem::InputSystem::DisableDevice)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2a60268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "DisableDevice", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.TrySyncDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::InputSystem::TrySyncDevice)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2a602e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "TrySyncDevice", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.ResetDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, bool)>(&::UnityEngine::InputSystem::InputSystem::ResetDevice)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2a60438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "ResetDevice", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.TryResetDevice
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::InputSystem::TryResetDevice)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a604b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "TryResetDevice", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.PauseHaptics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputSystem::PauseHaptics)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x2a6057c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "PauseHaptics",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.ResumeHaptics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputSystem::ResumeHaptics)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2a606ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "ResumeHaptics",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.ResetHaptics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputSystem::ResetHaptics)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x2a607e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "ResetHaptics",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.SetDeviceUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, ::StringW)>(
    &::UnityEngine::InputSystem::InputSystem::SetDeviceUsage)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2a60914;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "SetDeviceUsage", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.SetDeviceUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::InputSystem::SetDeviceUsage)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2a60998;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "SetDeviceUsage", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.AddDeviceUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, ::StringW)>(
    &::UnityEngine::InputSystem::InputSystem::AddDeviceUsage)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2a60a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "AddDeviceUsage", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.AddDeviceUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::InputSystem::AddDeviceUsage)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2a60abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "AddDeviceUsage", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RemoveDeviceUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, ::StringW)>(
    &::UnityEngine::InputSystem::InputSystem::RemoveDeviceUsage)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2a60b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RemoveDeviceUsage", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RemoveDeviceUsage
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::InputSystem::RemoveDeviceUsage)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2a60be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RemoveDeviceUsage", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.FindControl
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControl* (*)(::StringW)>(&::UnityEngine::InputSystem::InputSystem::FindControl)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x2a60c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "FindControl", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.FindControls
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> (*)(::StringW)>(
    &::UnityEngine::InputSystem::InputSystem::FindControls)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2a60e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "FindControls", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.get_isProcessingEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::InputSystem::InputSystem::get_isProcessingEvents)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2a60e94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                               "get_isProcessingEvents", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.get_onEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventListener (*)()>(
    &::UnityEngine::InputSystem::InputSystem::get_onEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a60ef8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "get_onEvent",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.set_onEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputEventListener)>(
    &::UnityEngine::InputSystem::InputSystem::set_onEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a60f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "set_onEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventListener>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.get_onAnyButtonPress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IObservable_1<::UnityEngine::InputSystem::InputControl*>* (*)()>(
    &::UnityEngine::InputSystem::InputSystem::get_onAnyButtonPress)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x2a60f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                               "get_onAnyButtonPress", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.QueueEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::InputSystem::QueueEvent)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x2a6110c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "QueueEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.QueueConfigChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, double_t)>(
    &::UnityEngine::InputSystem::InputSystem::QueueConfigChangeEvent)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x2a611ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "QueueConfigChangeEvent", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.QueueTextEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, char16_t, double_t)>(
    &::UnityEngine::InputSystem::InputSystem::QueueTextEvent)> {
  constexpr static std::size_t size = 0x228;
  constexpr static std::size_t addrs = 0x2a61404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "QueueTextEvent", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputSystem::Update)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2a6162c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "Update",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&::UnityEngine::InputSystem::InputSystem::Update)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x2a61690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "Update", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.add_onBeforeUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::InputSystem::InputSystem::add_onBeforeUpdate)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2a6184c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "add_onBeforeUpdate",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.remove_onBeforeUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::InputSystem::InputSystem::remove_onBeforeUpdate)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2a61978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "remove_onBeforeUpdate",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.add_onAfterUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::InputSystem::InputSystem::add_onAfterUpdate)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2a61aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "add_onAfterUpdate",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.remove_onAfterUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::InputSystem::InputSystem::remove_onAfterUpdate)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x2a61bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "remove_onAfterUpdate",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.get_settings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputSettings* (*)()>(&::UnityEngine::InputSystem::InputSystem::get_settings)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x2a617e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "get_settings",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.set_settings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::InputSettings*)>(&::UnityEngine::InputSystem::InputSystem::set_settings)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x2a61cfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "set_settings", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.add_onSettingsChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::InputSystem::InputSystem::add_onSettingsChange)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2a61e40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "add_onSettingsChange",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.remove_onSettingsChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::InputSystem::InputSystem::remove_onSettingsChange)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2a61eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "remove_onSettingsChange",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.add_onActionChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*)>(
    &::UnityEngine::InputSystem::InputSystem::add_onActionChange)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2a61f18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "add_onActionChange", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.remove_onActionChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*)>(
    &::UnityEngine::InputSystem::InputSystem::remove_onActionChange)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2a61fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "remove_onActionChange", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RegisterInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*, ::StringW)>(&::UnityEngine::InputSystem::InputSystem::RegisterInteraction)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2a62088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RegisterInteraction", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.TryGetInteraction
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::StringW)>(&::UnityEngine::InputSystem::InputSystem::TryGetInteraction)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2a62214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "TryGetInteraction",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.ListInteractions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)()>(
    &::UnityEngine::InputSystem::InputSystem::ListInteractions)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2a622f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                               "ListInteractions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RegisterBindingComposite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Type*, ::StringW)>(&::UnityEngine::InputSystem::InputSystem::RegisterBindingComposite)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x2a62368;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RegisterBindingComposite", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.TryGetBindingComposite
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (*)(::StringW)>(&::UnityEngine::InputSystem::InputSystem::TryGetBindingComposite)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x2a624f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "TryGetBindingComposite",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.DisableAllEnabledActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputSystem::DisableAllEnabledActions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a625d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                               "DisableAllEnabledActions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.ListEnabledActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>* (*)()>(
    &::UnityEngine::InputSystem::InputSystem::ListEnabledActions)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2a625d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                               "ListEnabledActions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.ListEnabledActions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>*)>(
    &::UnityEngine::InputSystem::InputSystem::ListEnabledActions)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2a62674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "ListEnabledActions", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.get_remoting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::InputRemoting* (*)()>(&::UnityEngine::InputSystem::InputSystem::get_remoting)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2a626d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "get_remoting",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.get_version
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (*)()>(&::UnityEngine::InputSystem::InputSystem::get_version)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2a62728;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "get_version",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.get_metrics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputMetrics (*)()>(&::UnityEngine::InputSystem::InputSystem::get_metrics)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x2a6279c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "get_metrics",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RunInitializeInPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputSystem::RunInitializeInPlayer)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2a629d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                               "RunInitializeInPlayer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.EnsureInitialized
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputSystem::EnsureInitialized)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2a62a50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                               "EnsureInitialized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.InitializeInPlayer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::IInputRuntime*, ::UnityEngine::InputSystem::InputSettings*)>(
    &::UnityEngine::InputSystem::InputSystem::InitializeInPlayer)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2a6283c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "InitializeInPlayer", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RunInitialUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputSystem::RunInitialUpdate)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2a62a8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                               "RunInitialUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.PerformDefaultPluginInitialization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputSystem::PerformDefaultPluginInitialization)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2a62a54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                               "PerformDefaultPluginInitialization", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputSystem::setStaticF_s_Manager(::UnityEngine::InputSystem::InputManager* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::InputManager*, "s_Manager", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get>(
      std::forward<::UnityEngine::InputSystem::InputManager*>(value));
}
inline ::UnityEngine::InputSystem::InputManager* UnityEngine::InputSystem::InputSystem::getStaticF_s_Manager() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::InputManager*, "s_Manager",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get>();
}
inline void UnityEngine::InputSystem::InputSystem::setStaticF_s_Remote(::UnityEngine::InputSystem::InputRemoting* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::InputRemoting*, "s_Remote", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get>(
      std::forward<::UnityEngine::InputSystem::InputRemoting*>(value));
}
inline ::UnityEngine::InputSystem::InputRemoting* UnityEngine::InputSystem::InputSystem::getStaticF_s_Remote() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::InputRemoting*, "s_Remote",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get>();
}
inline void UnityEngine::InputSystem::InputSystem::add_onLayoutChange(::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "add_onLayoutChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::remove_onLayoutChange(::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "remove_onLayoutChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
/// @param name: ::StringW (default: nullptr)
/// @param matches: ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> (default: {})
inline void UnityEngine::InputSystem::InputSystem::RegisterLayout(::System::Type* type, ::StringW name, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> matches) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RegisterLayout", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, name, matches);
}
/// @param name: ::StringW (default: nullptr)
/// @param matches: ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> (default: {})
template <typename T> inline void UnityEngine::InputSystem::InputSystem::RegisterLayout(::StringW name, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> matches) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RegisterLayout",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name, matches);
}
/// @param name: ::StringW (default: nullptr)
/// @param matches: ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> (default: {})
inline void UnityEngine::InputSystem::InputSystem::RegisterLayout(::StringW json, ::StringW name, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> matches) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RegisterLayout", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, json, name, matches);
}
/// @param name: ::StringW (default: nullptr)
inline void UnityEngine::InputSystem::InputSystem::RegisterLayoutOverride(::StringW json, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RegisterLayoutOverride", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, json, name);
}
inline void UnityEngine::InputSystem::InputSystem::RegisterLayoutMatcher(::StringW layoutName, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RegisterLayoutMatcher", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, layoutName, matcher);
}
template <typename TDevice> inline void UnityEngine::InputSystem::InputSystem::RegisterLayoutMatcher(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RegisterLayoutMatcher",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevice>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevice>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, matcher);
}
/// @param baseLayout: ::StringW (default: nullptr)
/// @param matches: ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> (default: {})
inline void UnityEngine::InputSystem::InputSystem::RegisterLayoutBuilder(::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>* buildMethod, ::StringW name, ::StringW baseLayout,
                                                                         ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> matches) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RegisterLayoutBuilder", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, buildMethod, name, baseLayout, matches);
}
template <typename TDevice> inline void UnityEngine::InputSystem::InputSystem::RegisterPrecompiledLayout(::StringW metadata) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RegisterPrecompiledLayout",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevice>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevice>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, metadata);
}
inline void UnityEngine::InputSystem::InputSystem::RemoveLayout(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RemoveLayout", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name);
}
inline ::StringW UnityEngine::InputSystem::InputSystem::TryFindMatchingLayout(::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "TryFindMatchingLayout", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, deviceDescription);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UnityEngine::InputSystem::InputSystem::ListLayouts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "ListLayouts",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UnityEngine::InputSystem::InputSystem::ListLayoutsBasedOn(::StringW baseLayout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "ListLayoutsBasedOn",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(nullptr, ___internal_method, baseLayout);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::InputSystem::LoadLayout(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "LoadLayout", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*, false>(nullptr, ___internal_method, name);
}
template <typename TControl> inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::InputSystem::LoadLayout() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "LoadLayout",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*, false>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputSystem::GetNameOfBaseLayout(::StringW layoutName) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "GetNameOfBaseLayout",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, layoutName);
}
inline bool UnityEngine::InputSystem::InputSystem::IsFirstLayoutBasedOnSecond(::StringW firstLayoutName, ::StringW secondLayoutName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "IsFirstLayoutBasedOnSecond", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, firstLayoutName, secondLayoutName);
}
/// @param name: ::StringW (default: nullptr)
inline void UnityEngine::InputSystem::InputSystem::RegisterProcessor(::System::Type* type, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RegisterProcessor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, name);
}
/// @param name: ::StringW (default: nullptr)
template <typename T> inline void UnityEngine::InputSystem::InputSystem::RegisterProcessor(::StringW name) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                                  "RegisterProcessor", std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name);
}
inline ::System::Type* UnityEngine::InputSystem::InputSystem::TryGetProcessor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "TryGetProcessor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, name);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UnityEngine::InputSystem::InputSystem::ListProcessors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "ListProcessors",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> UnityEngine::InputSystem::InputSystem::get_devices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "get_devices",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> UnityEngine::InputSystem::InputSystem::get_disconnectedDevices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                             "get_disconnectedDevices", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::add_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "add_onDeviceChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::remove_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "remove_onDeviceChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::add_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "add_onDeviceCommand", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::remove_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "remove_onDeviceCommand", std::vector<Il2CppClass*>{},
                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::add_onFindLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "add_onFindLayoutForDevice", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::remove_onFindLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "remove_onFindLayoutForDevice", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSystem::get_pollingFrequency() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                             "get_pollingFrequency", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::set_pollingFrequency(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "set_pollingFrequency",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
/// @param name: ::StringW (default: nullptr)
/// @param variants: ::StringW (default: nullptr)
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputSystem::AddDevice(::StringW layout, ::StringW name, ::StringW variants) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "AddDevice", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(nullptr, ___internal_method, layout, name, variants);
}
/// @param name: ::StringW (default: nullptr)
template <typename TDevice> inline TDevice UnityEngine::InputSystem::InputSystem::AddDevice(::StringW name) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "AddDevice",
                                                                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevice>::get() },
                                                                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevice>::get() }));
  return ::cordl_internals::RunMethodRethrow<TDevice, false>(nullptr, ___internal_method, name);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputSystem::AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "AddDevice", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(nullptr, ___internal_method, description);
}
inline void UnityEngine::InputSystem::InputSystem::AddDevice(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "AddDevice", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputSystem::RemoveDevice(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RemoveDevice", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputSystem::FlushDisconnectedDevices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                             "FlushDisconnectedDevices", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputSystem::GetDevice(::StringW nameOrLayout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "GetDevice", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(nullptr, ___internal_method, nameOrLayout);
}
template <typename TDevice> inline TDevice UnityEngine::InputSystem::InputSystem::GetDevice() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "GetDevice",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevice>::get() }, ::std::vector<Il2CppType const*>{})));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevice>::get() }));
  return ::cordl_internals::RunMethodRethrow<TDevice, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputSystem::GetDevice(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "GetDevice", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(nullptr, ___internal_method, type);
}
template <typename TDevice> inline TDevice UnityEngine::InputSystem::InputSystem::GetDevice(::UnityEngine::InputSystem::Utilities::InternedString usage) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "GetDevice",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevice>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevice>::get() }));
  return ::cordl_internals::RunMethodRethrow<TDevice, false>(nullptr, ___internal_method, usage);
}
template <typename TDevice> inline TDevice UnityEngine::InputSystem::InputSystem::GetDevice(::StringW usage) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "GetDevice",
                                                                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevice>::get() },
                                                                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDevice>::get() }));
  return ::cordl_internals::RunMethodRethrow<TDevice, false>(nullptr, ___internal_method, usage);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputSystem::GetDeviceById(int32_t deviceId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "GetDeviceById", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*, false>(nullptr, ___internal_method, deviceId);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>* UnityEngine::InputSystem::InputSystem::GetUnsupportedDevices() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                             "GetUnsupportedDevices", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputSystem::GetUnsupportedDevices(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>* descriptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "GetUnsupportedDevices", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, descriptions);
}
inline void UnityEngine::InputSystem::InputSystem::EnableDevice(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "EnableDevice", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device);
}
/// @param keepSendingEvents: bool (default: false)
inline void UnityEngine::InputSystem::InputSystem::DisableDevice(::UnityEngine::InputSystem::InputDevice* device, bool keepSendingEvents) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "DisableDevice", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, keepSendingEvents);
}
inline bool UnityEngine::InputSystem::InputSystem::TrySyncDevice(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "TrySyncDevice", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, device);
}
/// @param alsoResetDontResetControls: bool (default: false)
inline void UnityEngine::InputSystem::InputSystem::ResetDevice(::UnityEngine::InputSystem::InputDevice* device, bool alsoResetDontResetControls) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "ResetDevice", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, alsoResetDontResetControls);
}
inline bool UnityEngine::InputSystem::InputSystem::TryResetDevice(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "TryResetDevice", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputSystem::PauseHaptics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "PauseHaptics",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::ResumeHaptics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "ResumeHaptics",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::ResetHaptics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "ResetHaptics",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::SetDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::StringW usage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "SetDeviceUsage", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, usage);
}
inline void UnityEngine::InputSystem::InputSystem::SetDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Utilities::InternedString usage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "SetDeviceUsage", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, usage);
}
inline void UnityEngine::InputSystem::InputSystem::AddDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::StringW usage) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "AddDeviceUsage", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, usage);
}
inline void UnityEngine::InputSystem::InputSystem::AddDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Utilities::InternedString usage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "AddDeviceUsage", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, usage);
}
inline void UnityEngine::InputSystem::InputSystem::RemoveDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::StringW usage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RemoveDeviceUsage", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, usage);
}
inline void UnityEngine::InputSystem::InputSystem::RemoveDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Utilities::InternedString usage) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RemoveDeviceUsage", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Utilities::InternedString>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, usage);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputSystem::FindControl(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "FindControl", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*, false>(nullptr, ___internal_method, path);
}
inline ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> UnityEngine::InputSystem::InputSystem::FindControls(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "FindControls", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>, false>(nullptr, ___internal_method, path);
}
template <typename TControl> inline ::UnityEngine::InputSystem::InputControlList_1<TControl> UnityEngine::InputSystem::InputSystem::FindControls(::StringW path) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                                  "FindControls", std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get() },
                                                                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get() }));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlList_1<TControl>, false>(nullptr, ___internal_method, path);
}
template <typename TControl> inline int32_t UnityEngine::InputSystem::InputSystem::FindControls(::StringW path, ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>> controls) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "FindControls",
                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get() },
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::InputSystem::InputControlList_1<TControl>>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TControl>::get() }));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, path, controls);
}
inline bool UnityEngine::InputSystem::InputSystem::get_isProcessingEvents() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                             "get_isProcessingEvents", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventListener UnityEngine::InputSystem::InputSystem::get_onEvent() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "get_onEvent",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventListener, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::set_onEvent(::UnityEngine::InputSystem::LowLevel::InputEventListener value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "set_onEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventListener>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::System::IObservable_1<::UnityEngine::InputSystem::InputControl*>* UnityEngine::InputSystem::InputSystem::get_onAnyButtonPress() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                             "get_onAnyButtonPress", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::IObservable_1<::UnityEngine::InputSystem::InputControl*>*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "QueueEvent", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputEventPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, eventPtr);
}
template <typename TEvent> inline void UnityEngine::InputSystem::InputSystem::QueueEvent(ByRef<TEvent> inputEvent) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "QueueEvent",
                                                                                  std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEvent>::get() },
                                                                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<TEvent>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TEvent>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, inputEvent);
}
/// @param time: double_t (default: -1.0)
template <typename TState> inline void UnityEngine::InputSystem::InputSystem::QueueStateEvent(::UnityEngine::InputSystem::InputDevice* device, TState state, double_t time) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "QueueStateEvent",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TState>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TState>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, state, time);
}
/// @param time: double_t (default: -1.0)
template <typename TDelta> inline void UnityEngine::InputSystem::InputSystem::QueueDeltaStateEvent(::UnityEngine::InputSystem::InputControl* control, TDelta delta, double_t time) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "QueueDeltaStateEvent",
      std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDelta>::get() },
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputControl*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TDelta>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TDelta>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, control, delta, time);
}
/// @param time: double_t (default: -1.0)
inline void UnityEngine::InputSystem::InputSystem::QueueConfigChangeEvent(::UnityEngine::InputSystem::InputDevice* device, double_t time) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "QueueConfigChangeEvent", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, time);
}
/// @param time: double_t (default: -1.0)
inline void UnityEngine::InputSystem::InputSystem::QueueTextEvent(::UnityEngine::InputSystem::InputDevice* device, char16_t character, double_t time) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "QueueTextEvent", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputDevice*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, device, character, time);
}
inline void UnityEngine::InputSystem::InputSystem::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "Update",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::Update(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "Update", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::InputUpdateType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, updateType);
}
inline void UnityEngine::InputSystem::InputSystem::add_onBeforeUpdate(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "add_onBeforeUpdate",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::remove_onBeforeUpdate(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "remove_onBeforeUpdate",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::add_onAfterUpdate(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "add_onAfterUpdate",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::remove_onAfterUpdate(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "remove_onAfterUpdate",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputSettings* UnityEngine::InputSystem::InputSystem::get_settings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "get_settings",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputSettings*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::set_settings(::UnityEngine::InputSystem::InputSettings* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "set_settings", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::add_onSettingsChange(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "add_onSettingsChange",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::remove_onSettingsChange(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "remove_onSettingsChange",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::add_onActionChange(::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "add_onActionChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::remove_onActionChange(::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "remove_onActionChange", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
/// @param name: ::StringW (default: nullptr)
inline void UnityEngine::InputSystem::InputSystem::RegisterInteraction(::System::Type* type, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RegisterInteraction", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, name);
}
/// @param name: ::StringW (default: nullptr)
template <typename T> inline void UnityEngine::InputSystem::InputSystem::RegisterInteraction(::StringW name) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                                  "RegisterInteraction", std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name);
}
inline ::System::Type* UnityEngine::InputSystem::InputSystem::TryGetInteraction(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "TryGetInteraction",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, name);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UnityEngine::InputSystem::InputSystem::ListInteractions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                             "ListInteractions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::RegisterBindingComposite(::System::Type* type, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RegisterBindingComposite", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, type, name);
}
/// @param name: ::StringW (default: nullptr)
template <typename T> inline void UnityEngine::InputSystem::InputSystem::RegisterBindingComposite(::StringW name) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "RegisterBindingComposite",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, name);
}
inline ::System::Type* UnityEngine::InputSystem::InputSystem::TryGetBindingComposite(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "TryGetBindingComposite",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(nullptr, ___internal_method, name);
}
inline void UnityEngine::InputSystem::InputSystem::DisableAllEnabledActions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                             "DisableAllEnabledActions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>* UnityEngine::InputSystem::InputSystem::ListEnabledActions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                             "ListEnabledActions", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>*, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputSystem::ListEnabledActions(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>* actions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "ListEnabledActions", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, actions);
}
inline ::UnityEngine::InputSystem::InputRemoting* UnityEngine::InputSystem::InputSystem::get_remoting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "get_remoting",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputRemoting*, false>(nullptr, ___internal_method);
}
inline ::System::Version* UnityEngine::InputSystem::InputSystem::get_version() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "get_version",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputMetrics UnityEngine::InputSystem::InputSystem::get_metrics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "get_metrics",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputMetrics, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::RunInitializeInPlayer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                             "RunInitializeInPlayer", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::EnsureInitialized() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                             "EnsureInitialized", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
/// @param runtime: ::UnityEngine::InputSystem::LowLevel::IInputRuntime* (default: nullptr)
/// @param settings: ::UnityEngine::InputSystem::InputSettings* (default: nullptr)
inline void UnityEngine::InputSystem::InputSystem::InitializeInPlayer(::UnityEngine::InputSystem::LowLevel::IInputRuntime* runtime, ::UnityEngine::InputSystem::InputSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(), "InitializeInPlayer", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::InputSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, runtime, settings);
}
inline void UnityEngine::InputSystem::InputSystem::RunInitialUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                             "RunInitialUpdate", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::PerformDefaultPluginInitialization() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::InputSystem*>::get(),
                                                                             "PerformDefaultPluginInitialization", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputSystem::InputSystem() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
