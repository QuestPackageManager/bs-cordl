#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/InputSystem.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__DeltaStateEvent_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__StateEvent_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSystem_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IObservable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "System/zzzz__Version_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputControlLayout_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceDescription_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceFindControlLayoutDelegate_def.hpp"
#include "UnityEngine/InputSystem/Layouts/zzzz__InputDeviceMatcher_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputRuntime_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputDeviceCommandDelegate_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventListener_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputMetrics_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputUpdateType_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InternedString_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionAsset_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlLayoutChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControlList_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDeviceChange_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputManager_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputRemoting_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSettings_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputSystem_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::StateEventBuffer_InputSystem__data_e__FixedBuffer::StateEventBuffer_InputSystem__data_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::StateEventBuffer_InputSystem__data_e__FixedBuffer::StateEventBuffer_InputSystem__data_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "stateEvent", ty: "::UnityEngine::InputSystem::LowLevel::StateEvent", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty:
// "::UnityEngine::InputSystem::StateEventBuffer_InputSystem__data_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputSystem_StateEventBuffer::InputSystem_StateEventBuffer(::UnityEngine::InputSystem::LowLevel::StateEvent stateEvent,
                                                                                                 ::UnityEngine::InputSystem::StateEventBuffer_InputSystem__data_e__FixedBuffer data) noexcept {
  this->stateEvent = stateEvent;
  this->data = data;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputSystem_StateEventBuffer::InputSystem_StateEventBuffer() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer::DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer::DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "stateEvent", ty: "::UnityEngine::InputSystem::LowLevel::DeltaStateEvent", modifiers: "", def_value: Some("{}") }, CppParam { name: "data", ty:
// "::UnityEngine::InputSystem::DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::InputSystem_DeltaStateEventBuffer::InputSystem_DeltaStateEventBuffer(
    ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent stateEvent, ::UnityEngine::InputSystem::DeltaStateEventBuffer_InputSystem__data_e__FixedBuffer data) noexcept {
  this->stateEvent = stateEvent;
  this->data = data;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputSystem_DeltaStateEventBuffer::InputSystem_DeltaStateEventBuffer() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputSystem::InputSystem___c::*)()>(&::UnityEngine::InputSystem::InputSystem___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6510c8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem___c._get_onAnyButtonPress_b__80_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (::UnityEngine::InputSystem::InputSystem___c::*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::InputSystem___c::_get_onAnyButtonPress_b__80_0)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6510c90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem___c*>(),
                                                             { "<get_onAnyButtonPress>b__80_0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem___c._get_onAnyButtonPress_b__80_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputSystem::InputSystem___c::*)(::UnityEngine::InputSystem::InputControl*)>(
    &::UnityEngine::InputSystem::InputSystem___c::_get_onAnyButtonPress_b__80_1)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6510e08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem___c*>(),
                                                                                           { "<get_onAnyButtonPress>b__80_1", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputSystem___c::setStaticF___9(::UnityEngine::InputSystem::InputSystem___c* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::InputSystem___c*, "<>9", ::UnityEngine::InputSystem::InputSystem___c*>(
      std::forward<::UnityEngine::InputSystem::InputSystem___c*>(value));
}
inline ::UnityEngine::InputSystem::InputSystem___c* UnityEngine::InputSystem::InputSystem___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::InputSystem___c*, "<>9", ::UnityEngine::InputSystem::InputSystem___c*>();
}
inline void UnityEngine::InputSystem::InputSystem___c::setStaticF___9__80_0(::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputControl*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputControl*>*, "<>9__80_0",
                                    ::UnityEngine::InputSystem::InputSystem___c*>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputControl*>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputControl*>* UnityEngine::InputSystem::InputSystem___c::getStaticF___9__80_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::LowLevel::InputEventPtr, ::UnityEngine::InputSystem::InputControl*>*, "<>9__80_0",
                                           ::UnityEngine::InputSystem::InputSystem___c*>();
}
inline void UnityEngine::InputSystem::InputSystem___c::setStaticF___9__80_1(::System::Func_2<::UnityEngine::InputSystem::InputControl*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityEngine::InputSystem::InputControl*, bool>*, "<>9__80_1", ::UnityEngine::InputSystem::InputSystem___c*>(
      std::forward<::System::Func_2<::UnityEngine::InputSystem::InputControl*, bool>*>(value));
}
inline ::System::Func_2<::UnityEngine::InputSystem::InputControl*, bool>* UnityEngine::InputSystem::InputSystem___c::getStaticF___9__80_1() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityEngine::InputSystem::InputControl*, bool>*, "<>9__80_1", ::UnityEngine::InputSystem::InputSystem___c*>();
}
inline void UnityEngine::InputSystem::InputSystem___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputSystem___c::_get_onAnyButtonPress_b__80_0(::UnityEngine::InputSystem::LowLevel::InputEventPtr e) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem___c*>(),
                                                           { "<get_onAnyButtonPress>b__80_0", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(this, ___internal_method, e);
}
inline bool UnityEngine::InputSystem::InputSystem___c::_get_onAnyButtonPress_b__80_1(::UnityEngine::InputSystem::InputControl* c) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem___c*>(),
                                                                                         { "<get_onAnyButtonPress>b__80_1", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c);
}
inline ::UnityEngine::InputSystem::InputSystem___c* UnityEngine::InputSystem::InputSystem___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::InputSystem::InputSystem___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputSystem___c::InputSystem___c() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.add_onLayoutChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*)>(
    &::UnityEngine::InputSystem::InputSystem::add_onLayoutChange)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x650b77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                { "add_onLayoutChange", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.remove_onLayoutChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*)>(
    &::UnityEngine::InputSystem::InputSystem::remove_onLayoutChange)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x650b8a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                { "remove_onLayoutChange", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RegisterLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::StringW, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>)>(
    &::UnityEngine::InputSystem::InputSystem::RegisterLayout)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x650b9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                            { "RegisterLayout",
                              {},
                              { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RegisterLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>)>(
    &::UnityEngine::InputSystem::InputSystem::RegisterLayout)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x650bb50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
            { "RegisterLayout", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RegisterLayoutOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::UnityEngine::InputSystem::InputSystem::RegisterLayoutOverride)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x650bc58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "RegisterLayoutOverride", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RegisterLayoutMatcher
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher)>(&::UnityEngine::InputSystem::InputSystem::RegisterLayoutMatcher)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x650bcdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                { "RegisterLayoutMatcher", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RegisterLayoutBuilder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*, ::StringW, ::StringW,
                                                                ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>)>(
    &::UnityEngine::InputSystem::InputSystem::RegisterLayoutBuilder)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x650bd5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                             { "RegisterLayoutBuilder",
                                                               {},
                                                               { ::i2c::type_of<::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RemoveLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::UnityEngine::InputSystem::InputSystem::RemoveLayout)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x650bee0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "RemoveLayout", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.TryFindMatchingLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(&::UnityEngine::InputSystem::InputSystem::TryFindMatchingLayout)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x650bf50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                             { "TryFindMatchingLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.ListLayouts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)()>(&::UnityEngine::InputSystem::InputSystem::ListLayouts)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x650bfdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "ListLayouts", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.ListLayoutsBasedOn
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)(::StringW)>(&::UnityEngine::InputSystem::InputSystem::ListLayoutsBasedOn)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x650c048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "ListLayoutsBasedOn", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.LoadLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Layouts::InputControlLayout* (*)(::StringW)>(&::UnityEngine::InputSystem::InputSystem::LoadLayout)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x650c10c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "LoadLayout", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.GetNameOfBaseLayout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW)>(&::UnityEngine::InputSystem::InputSystem::GetNameOfBaseLayout)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x650c1f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "GetNameOfBaseLayout", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.IsFirstLayoutBasedOnSecond
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW, ::StringW)>(&::UnityEngine::InputSystem::InputSystem::IsFirstLayoutBasedOnSecond)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x650c31c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                                                           { "IsFirstLayoutBasedOnSecond", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RegisterProcessor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::StringW)>(&::UnityEngine::InputSystem::InputSystem::RegisterProcessor)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x650c47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                                                           { "RegisterProcessor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.TryGetProcessor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::StringW)>(&::UnityEngine::InputSystem::InputSystem::TryGetProcessor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x650c808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "TryGetProcessor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.ListProcessors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)()>(&::UnityEngine::InputSystem::InputSystem::ListProcessors)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x650c8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "ListProcessors", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.get_devices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> (*)()>(
    &::UnityEngine::InputSystem::InputSystem::get_devices)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x650c95c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_devices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.get_disconnectedDevices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> (*)()>(
    &::UnityEngine::InputSystem::InputSystem::get_disconnectedDevices)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x650c9f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_disconnectedDevices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.add_onDeviceChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*)>(
    &::UnityEngine::InputSystem::InputSystem::add_onDeviceChange)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x650ca78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                            { "add_onDeviceChange", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.remove_onDeviceChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*)>(
    &::UnityEngine::InputSystem::InputSystem::remove_onDeviceChange)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x650cbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                            { "remove_onDeviceChange", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.add_onDeviceCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*)>(&::UnityEngine::InputSystem::InputSystem::add_onDeviceCommand)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x650cd60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                             { "add_onDeviceCommand", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.remove_onDeviceCommand
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*)>(&::UnityEngine::InputSystem::InputSystem::remove_onDeviceCommand)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x650ced4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                             { "remove_onDeviceCommand", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.add_onFindLayoutForDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*)>(
    &::UnityEngine::InputSystem::InputSystem::add_onFindLayoutForDevice)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x650d048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                             { "add_onFindLayoutForDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.remove_onFindLayoutForDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*)>(
    &::UnityEngine::InputSystem::InputSystem::remove_onFindLayoutForDevice)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x650d170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                { "remove_onFindLayoutForDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.get_pollingFrequency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::InputSystem::InputSystem::get_pollingFrequency)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x650d298;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_pollingFrequency", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.set_pollingFrequency
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(float_t)>(&::UnityEngine::InputSystem::InputSystem::set_pollingFrequency)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x650d300;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "set_pollingFrequency", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.AddDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (*)(::StringW, ::StringW, ::StringW)>(&::UnityEngine::InputSystem::InputSystem::AddDevice)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x650d378;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                             { "AddDevice", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.AddDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (*)(::UnityEngine::InputSystem::Layouts::InputDeviceDescription)>(
    &::UnityEngine::InputSystem::InputSystem::AddDevice)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x650d474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                                                           { "AddDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.AddDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::InputSystem::AddDevice)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x650d580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "AddDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RemoveDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::InputSystem::RemoveDevice)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x650d63c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "RemoveDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.FlushDisconnectedDevices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputSystem::FlushDisconnectedDevices)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x650d6b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "FlushDisconnectedDevices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.GetDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (*)(::StringW)>(&::UnityEngine::InputSystem::InputSystem::GetDevice)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x650d718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "GetDevice", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.GetDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (*)(::System::Type*)>(&::UnityEngine::InputSystem::InputSystem::GetDevice)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x650d788;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "GetDevice", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.GetDeviceById
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputDevice* (*)(int32_t)>(&::UnityEngine::InputSystem::InputSystem::GetDeviceById)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x650d968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "GetDeviceById", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.GetUnsupportedDevices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>* (*)()>(
    &::UnityEngine::InputSystem::InputSystem::GetUnsupportedDevices)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x650d9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "GetUnsupportedDevices", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.GetUnsupportedDevices
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*)>(
    &::UnityEngine::InputSystem::InputSystem::GetUnsupportedDevices)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x650da78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                         { "GetUnsupportedDevices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.EnableDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::InputSystem::EnableDevice)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x650dae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "EnableDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.DisableDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, bool)>(&::UnityEngine::InputSystem::InputSystem::DisableDevice)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x650db60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                             { "DisableDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.TrySyncDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::InputSystem::TrySyncDevice)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x650dbe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "TrySyncDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.ResetDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, bool)>(&::UnityEngine::InputSystem::InputSystem::ResetDevice)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x650dd34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                             { "ResetDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.TryResetDevice
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::InputSystem::InputDevice*)>(&::UnityEngine::InputSystem::InputSystem::TryResetDevice)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x650ddb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "TryResetDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.PauseHaptics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputSystem::PauseHaptics)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x650de94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "PauseHaptics", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.ResumeHaptics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputSystem::ResumeHaptics)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x650dfd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "ResumeHaptics", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.ResetHaptics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputSystem::ResetHaptics)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x650e118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "ResetHaptics", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.SetDeviceUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, ::StringW)>(&::UnityEngine::InputSystem::InputSystem::SetDeviceUsage)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x650e25c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                             { "SetDeviceUsage", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.SetDeviceUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::InputSystem::SetDeviceUsage)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x650e2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                            { "SetDeviceUsage", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.AddDeviceUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, ::StringW)>(&::UnityEngine::InputSystem::InputSystem::AddDeviceUsage)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x650e368;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                             { "AddDeviceUsage", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.AddDeviceUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::InputSystem::AddDeviceUsage)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x650e408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                            { "AddDeviceUsage", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RemoveDeviceUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, ::StringW)>(&::UnityEngine::InputSystem::InputSystem::RemoveDeviceUsage)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x650e490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                             { "RemoveDeviceUsage", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RemoveDeviceUsage
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::Utilities::InternedString)>(
    &::UnityEngine::InputSystem::InputSystem::RemoveDeviceUsage)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x650e530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                            { "RemoveDeviceUsage", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.FindControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControl* (*)(::StringW)>(&::UnityEngine::InputSystem::InputSystem::FindControl)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x650e5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "FindControl", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.FindControls
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> (*)(::StringW)>(
    &::UnityEngine::InputSystem::InputSystem::FindControls)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x650e728;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "FindControls", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.get_isProcessingEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::InputSystem::InputSystem::get_isProcessingEvents)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x650e7c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_isProcessingEvents", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.get_onEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventListener (*)()>(&::UnityEngine::InputSystem::InputSystem::get_onEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x650e828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_onEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.set_onEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputEventListener)>(&::UnityEngine::InputSystem::InputSystem::set_onEvent)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x650e830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                                                           { "set_onEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventListener>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.get_onAnyButtonPress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IObservable_1<::UnityEngine::InputSystem::InputControl*>* (*)()>(&::UnityEngine::InputSystem::InputSystem::get_onAnyButtonPress)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x650e834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_onAnyButtonPress", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.QueueEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(&::UnityEngine::InputSystem::InputSystem::QueueEvent)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x650ea50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                                                           { "QueueEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.QueueConfigChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, double_t)>(&::UnityEngine::InputSystem::InputSystem::QueueConfigChangeEvent)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0x650eb1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                             { "QueueConfigChangeEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.QueueTextEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputDevice*, char16_t, double_t)>(&::UnityEngine::InputSystem::InputSystem::QueueTextEvent)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x650ed68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                { "QueueTextEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputSystem::Update)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x650efbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::InputUpdateType)>(&::UnityEngine::InputSystem::InputSystem::Update)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0x650f024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "Update", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.add_onBeforeUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::InputSystem::InputSystem::add_onBeforeUpdate)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x650f1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "add_onBeforeUpdate", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.remove_onBeforeUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::InputSystem::InputSystem::remove_onBeforeUpdate)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x650f308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "remove_onBeforeUpdate", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.add_onAfterUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::InputSystem::InputSystem::add_onAfterUpdate)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x650f430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "add_onAfterUpdate", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.remove_onAfterUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::InputSystem::InputSystem::remove_onAfterUpdate)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x650f558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "remove_onAfterUpdate", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.get_settings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputSettings> (*)()>(&::UnityEngine::InputSystem::InputSystem::get_settings)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x650f178;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_settings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.set_settings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputSettings*)>(&::UnityEngine::InputSystem::InputSystem::set_settings)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x650f680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "set_settings", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.add_onSettingsChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::InputSystem::InputSystem::add_onSettingsChange)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x650f7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "add_onSettingsChange", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.remove_onSettingsChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::InputSystem::InputSystem::remove_onSettingsChange)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x650f838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "remove_onSettingsChange", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.EnableActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputSystem::EnableActions)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x650f8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "EnableActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.DisableActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::InputSystem::InputSystem::DisableActions)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x650f9d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "DisableActions", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.get_actions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::InputSystem::InputActionAsset> (*)()>(&::UnityEngine::InputSystem::InputSystem::get_actions)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x650f96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_actions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.set_actions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::InputActionAsset*)>(&::UnityEngine::InputSystem::InputSystem::set_actions)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x650faa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "set_actions", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.add_onActionsChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::InputSystem::InputSystem::add_onActionsChange)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x650fc10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "add_onActionsChange", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.remove_onActionsChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::UnityEngine::InputSystem::InputSystem::remove_onActionsChange)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x650fc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "remove_onActionsChange", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.add_onActionChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*)>(
    &::UnityEngine::InputSystem::InputSystem::add_onActionChange)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x650fcf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                { "add_onActionChange", {}, { ::i2c::type_of<::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.remove_onActionChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*)>(
    &::UnityEngine::InputSystem::InputSystem::remove_onActionChange)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x650fdbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                { "remove_onActionChange", {}, { ::i2c::type_of<::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RegisterInteraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::StringW)>(&::UnityEngine::InputSystem::InputSystem::RegisterInteraction)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x650fe88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                                                           { "RegisterInteraction", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.TryGetInteraction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::StringW)>(&::UnityEngine::InputSystem::InputSystem::TryGetInteraction)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x650ffec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "TryGetInteraction", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.ListInteractions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (*)()>(&::UnityEngine::InputSystem::InputSystem::ListInteractions)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x65100c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "ListInteractions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RegisterBindingComposite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::StringW)>(&::UnityEngine::InputSystem::InputSystem::RegisterBindingComposite)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x6510140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                                                           { "RegisterBindingComposite", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.TryGetBindingComposite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::StringW)>(&::UnityEngine::InputSystem::InputSystem::TryGetBindingComposite)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x65102a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "TryGetBindingComposite", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.DisableAllEnabledActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputSystem::DisableAllEnabledActions)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6510380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "DisableAllEnabledActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.ListEnabledActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>* (*)()>(
    &::UnityEngine::InputSystem::InputSystem::ListEnabledActions)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x65103d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "ListEnabledActions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.ListEnabledActions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>*)>(
    &::UnityEngine::InputSystem::InputSystem::ListEnabledActions)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6510474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                             { "ListEnabledActions", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.get_remoting
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::InputRemoting* (*)()>(&::UnityEngine::InputSystem::InputSystem::get_remoting)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x651051c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_remoting", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.get_version
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Version* (*)()>(&::UnityEngine::InputSystem::InputSystem::get_version)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6510578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_version", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.get_runInBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::InputSystem::InputSystem::get_runInBackground)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x65105ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_runInBackground", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.set_runInBackground
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::InputSystem::InputSystem::set_runInBackground)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x65106c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "set_runInBackground", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.get_scrollWheelDeltaPerTick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)()>(&::UnityEngine::InputSystem::InputSystem::get_scrollWheelDeltaPerTick)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x65107ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_scrollWheelDeltaPerTick", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.get_metrics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputMetrics (*)()>(&::UnityEngine::InputSystem::InputSystem::get_metrics)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6510870;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_metrics", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RunInitializeInPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputSystem::RunInitializeInPlayer)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6510b34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "RunInitializeInPlayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.EnsureInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputSystem::EnsureInitialized)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x650976c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "EnsureInitialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.InitializeInPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::InputSystem::LowLevel::IInputRuntime*, ::UnityEngine::InputSystem::InputSettings*)>(
    &::UnityEngine::InputSystem::InputSystem::InitializeInPlayer)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x6510990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                            { "InitializeInPlayer", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.RunInitialUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputSystem::RunInitialUpdate)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6510be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "RunInitialUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::InputSystem.PerformDefaultPluginInitialization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::InputSystem::PerformDefaultPluginInitialization)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6510bb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "PerformDefaultPluginInitialization", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::InputSystem::setStaticF_k_InputResetMarker(::Unity::Profiling::ProfilerMarker value) {
  ::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "k_InputResetMarker", ::UnityEngine::InputSystem::InputSystem*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker UnityEngine::InputSystem::InputSystem::getStaticF_k_InputResetMarker() {
  return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "k_InputResetMarker", ::UnityEngine::InputSystem::InputSystem*>();
}
inline void UnityEngine::InputSystem::InputSystem::setStaticF_s_Manager(::UnityEngine::InputSystem::InputManager* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::InputManager*, "s_Manager", ::UnityEngine::InputSystem::InputSystem*>(std::forward<::UnityEngine::InputSystem::InputManager*>(value));
}
inline ::UnityEngine::InputSystem::InputManager* UnityEngine::InputSystem::InputSystem::getStaticF_s_Manager() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::InputManager*, "s_Manager", ::UnityEngine::InputSystem::InputSystem*>();
}
inline void UnityEngine::InputSystem::InputSystem::setStaticF_s_Remote(::UnityEngine::InputSystem::InputRemoting* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::InputRemoting*, "s_Remote", ::UnityEngine::InputSystem::InputSystem*>(std::forward<::UnityEngine::InputSystem::InputRemoting*>(value));
}
inline ::UnityEngine::InputSystem::InputRemoting* UnityEngine::InputSystem::InputSystem::getStaticF_s_Remote() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::InputRemoting*, "s_Remote", ::UnityEngine::InputSystem::InputSystem*>();
}
inline void UnityEngine::InputSystem::InputSystem::add_onLayoutChange(::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                           { "add_onLayoutChange", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::remove_onLayoutChange(::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                              { "remove_onLayoutChange", {}, { ::i2c::type_of<::System::Action_2<::StringW, ::UnityEngine::InputSystem::InputControlLayoutChange>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::RegisterLayout(::System::Type* type, ::StringW name, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> matches) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                          { "RegisterLayout",
                            {},
                            { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, name, matches);
}
template <typename T> inline void UnityEngine::InputSystem::InputSystem::RegisterLayout(::StringW name, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> matches) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
          { "RegisterLayout", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name, matches);
}
inline void UnityEngine::InputSystem::InputSystem::RegisterLayout(::StringW json, ::StringW name, ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> matches) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
          { "RegisterLayout", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, json, name, matches);
}
inline void UnityEngine::InputSystem::InputSystem::RegisterLayoutOverride(::StringW json, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "RegisterLayoutOverride", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, json, name);
}
inline void UnityEngine::InputSystem::InputSystem::RegisterLayoutMatcher(::StringW layoutName, ::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                              { "RegisterLayoutMatcher", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, layoutName, matcher);
}
template <typename TDevice> inline void UnityEngine::InputSystem::InputSystem::RegisterLayoutMatcher(::UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                              { "RegisterLayoutMatcher", { ::i2c::class_of<TDevice>() }, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDevice>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, matcher);
}
inline void UnityEngine::InputSystem::InputSystem::RegisterLayoutBuilder(::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>* buildMethod, ::StringW name, ::StringW baseLayout,
                                                                         ::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher> matches) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                           { "RegisterLayoutBuilder",
                                                             {},
                                                             { ::i2c::type_of<::System::Func_1<::UnityEngine::InputSystem::Layouts::InputControlLayout*>*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::InputSystem::Layouts::InputDeviceMatcher>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buildMethod, name, baseLayout, matches);
}
template <typename TDevice> inline void UnityEngine::InputSystem::InputSystem::RegisterPrecompiledLayout(::StringW metadata) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "RegisterPrecompiledLayout", { ::i2c::class_of<TDevice>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDevice>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, metadata);
}
inline void UnityEngine::InputSystem::InputSystem::RemoveLayout(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "RemoveLayout", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name);
}
inline ::StringW UnityEngine::InputSystem::InputSystem::TryFindMatchingLayout(::UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                           { "TryFindMatchingLayout", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, deviceDescription);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UnityEngine::InputSystem::InputSystem::ListLayouts() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "ListLayouts", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UnityEngine::InputSystem::InputSystem::ListLayoutsBasedOn(::StringW baseLayout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "ListLayoutsBasedOn", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(nullptr, ___internal_method, baseLayout);
}
inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::InputSystem::LoadLayout(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "LoadLayout", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(nullptr, ___internal_method, name);
}
template <typename TControl> inline ::UnityEngine::InputSystem::Layouts::InputControlLayout* UnityEngine::InputSystem::InputSystem::LoadLayout() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "LoadLayout", { ::i2c::class_of<TControl>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TControl>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Layouts::InputControlLayout*>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::InputSystem::InputSystem::GetNameOfBaseLayout(::StringW layoutName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "GetNameOfBaseLayout", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, layoutName);
}
inline bool UnityEngine::InputSystem::InputSystem::IsFirstLayoutBasedOnSecond(::StringW firstLayoutName, ::StringW secondLayoutName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                                                         { "IsFirstLayoutBasedOnSecond", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, firstLayoutName, secondLayoutName);
}
inline void UnityEngine::InputSystem::InputSystem::RegisterProcessor(::System::Type* type, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "RegisterProcessor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, name);
}
template <typename T> inline void UnityEngine::InputSystem::InputSystem::RegisterProcessor(::StringW name) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "RegisterProcessor", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name);
}
inline ::System::Type* UnityEngine::InputSystem::InputSystem::TryGetProcessor(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "TryGetProcessor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, name);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UnityEngine::InputSystem::InputSystem::ListProcessors() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "ListProcessors", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> UnityEngine::InputSystem::InputSystem::get_devices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_devices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*> UnityEngine::InputSystem::InputSystem::get_disconnectedDevices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_disconnectedDevices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::InputDevice*>>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::add_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                          { "add_onDeviceChange", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::remove_onDeviceChange(::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                          { "remove_onDeviceChange", {}, { ::i2c::type_of<::System::Action_2<::UnityEngine::InputSystem::InputDevice*, ::UnityEngine::InputSystem::InputDeviceChange>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::add_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                           { "add_onDeviceCommand", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::remove_onDeviceCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                           { "remove_onDeviceCommand", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputDeviceCommandDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::add_onFindLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                           { "add_onFindLayoutForDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::remove_onFindLayoutForDevice(::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                           { "remove_onFindLayoutForDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceFindControlLayoutDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSystem::get_pollingFrequency() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_pollingFrequency", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::set_pollingFrequency(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "set_pollingFrequency", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputSystem::AddDevice(::StringW layout, ::StringW name, ::StringW variants) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                           { "AddDevice", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(nullptr, ___internal_method, layout, name, variants);
}
template <typename TDevice> inline TDevice UnityEngine::InputSystem::InputSystem::AddDevice(::StringW name) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "AddDevice", { ::i2c::class_of<TDevice>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDevice>() })));
  return ::cordl_internals::RunMethodRethrow<TDevice>(nullptr, ___internal_method, name);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputSystem::AddDevice(::UnityEngine::InputSystem::Layouts::InputDeviceDescription description) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                                                         { "AddDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(nullptr, ___internal_method, description);
}
inline void UnityEngine::InputSystem::InputSystem::AddDevice(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "AddDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputSystem::RemoveDevice(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "RemoveDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputSystem::FlushDisconnectedDevices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "FlushDisconnectedDevices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputSystem::GetDevice(::StringW nameOrLayout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "GetDevice", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(nullptr, ___internal_method, nameOrLayout);
}
template <typename TDevice> inline TDevice UnityEngine::InputSystem::InputSystem::GetDevice() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "GetDevice", { ::i2c::class_of<TDevice>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDevice>() })));
  return ::cordl_internals::RunMethodRethrow<TDevice>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputSystem::GetDevice(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "GetDevice", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(nullptr, ___internal_method, type);
}
template <typename TDevice> inline TDevice UnityEngine::InputSystem::InputSystem::GetDevice(::UnityEngine::InputSystem::Utilities::InternedString usage) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                           { "GetDevice", { ::i2c::class_of<TDevice>() }, { ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDevice>() })));
  return ::cordl_internals::RunMethodRethrow<TDevice>(nullptr, ___internal_method, usage);
}
template <typename TDevice> inline TDevice UnityEngine::InputSystem::InputSystem::GetDevice(::StringW usage) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "GetDevice", { ::i2c::class_of<TDevice>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDevice>() })));
  return ::cordl_internals::RunMethodRethrow<TDevice>(nullptr, ___internal_method, usage);
}
inline ::UnityEngine::InputSystem::InputDevice* UnityEngine::InputSystem::InputSystem::GetDeviceById(int32_t deviceId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "GetDeviceById", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputDevice*>(nullptr, ___internal_method, deviceId);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>* UnityEngine::InputSystem::InputSystem::GetUnsupportedDevices() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "GetUnsupportedDevices", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputSystem::GetUnsupportedDevices(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>* descriptions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                       { "GetUnsupportedDevices", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::Layouts::InputDeviceDescription>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, descriptions);
}
inline void UnityEngine::InputSystem::InputSystem::EnableDevice(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "EnableDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputSystem::DisableDevice(::UnityEngine::InputSystem::InputDevice* device, bool keepSendingEvents) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                           { "DisableDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device, keepSendingEvents);
}
inline bool UnityEngine::InputSystem::InputSystem::TrySyncDevice(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "TrySyncDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputSystem::ResetDevice(::UnityEngine::InputSystem::InputDevice* device, bool alsoResetDontResetControls) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "ResetDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device, alsoResetDontResetControls);
}
inline bool UnityEngine::InputSystem::InputSystem::TryResetDevice(::UnityEngine::InputSystem::InputDevice* device) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "TryResetDevice", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, device);
}
inline void UnityEngine::InputSystem::InputSystem::PauseHaptics() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "PauseHaptics", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::ResumeHaptics() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "ResumeHaptics", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::ResetHaptics() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "ResetHaptics", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::SetDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::StringW usage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                           { "SetDeviceUsage", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device, usage);
}
inline void UnityEngine::InputSystem::InputSystem::SetDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Utilities::InternedString usage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                          { "SetDeviceUsage", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device, usage);
}
inline void UnityEngine::InputSystem::InputSystem::AddDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::StringW usage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                           { "AddDeviceUsage", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device, usage);
}
inline void UnityEngine::InputSystem::InputSystem::AddDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Utilities::InternedString usage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                          { "AddDeviceUsage", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device, usage);
}
inline void UnityEngine::InputSystem::InputSystem::RemoveDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::StringW usage) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                           { "RemoveDeviceUsage", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device, usage);
}
inline void UnityEngine::InputSystem::InputSystem::RemoveDeviceUsage(::UnityEngine::InputSystem::InputDevice* device, ::UnityEngine::InputSystem::Utilities::InternedString usage) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                          { "RemoveDeviceUsage", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::UnityEngine::InputSystem::Utilities::InternedString>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device, usage);
}
inline ::UnityEngine::InputSystem::InputControl* UnityEngine::InputSystem::InputSystem::FindControl(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "FindControl", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControl*>(nullptr, ___internal_method, path);
}
inline ::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*> UnityEngine::InputSystem::InputSystem::FindControls(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "FindControls", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlList_1<::UnityEngine::InputSystem::InputControl*>>(nullptr, ___internal_method, path);
}
template <typename TControl> inline ::UnityEngine::InputSystem::InputControlList_1<TControl> UnityEngine::InputSystem::InputSystem::FindControls(::StringW path) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "FindControls", { ::i2c::class_of<TControl>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TControl>() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputControlList_1<TControl>>(nullptr, ___internal_method, path);
}
template <typename TControl> inline int32_t UnityEngine::InputSystem::InputSystem::FindControls(::StringW path, ::by_ref<::UnityEngine::InputSystem::InputControlList_1<TControl>> controls) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                          { "FindControls", { ::i2c::class_of<TControl>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::InputControlList_1<TControl>>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TControl>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, path, controls);
}
inline bool UnityEngine::InputSystem::InputSystem::get_isProcessingEvents() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_isProcessingEvents", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventListener UnityEngine::InputSystem::InputSystem::get_onEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_onEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventListener>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::set_onEvent(::UnityEngine::InputSystem::LowLevel::InputEventListener value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                                                         { "set_onEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventListener>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::System::IObservable_1<::UnityEngine::InputSystem::InputControl*>* UnityEngine::InputSystem::InputSystem::get_onAnyButtonPress() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_onAnyButtonPress", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::IObservable_1<::UnityEngine::InputSystem::InputControl*>*>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::QueueEvent(::UnityEngine::InputSystem::LowLevel::InputEventPtr eventPtr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "QueueEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventPtr);
}
template <typename TEvent> inline void UnityEngine::InputSystem::InputSystem::QueueEvent(::by_ref<TEvent> inputEvent) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "QueueEvent", { ::i2c::class_of<TEvent>() }, { ::i2c::type_of<::by_ref<TEvent>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TEvent>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, inputEvent);
}
template <typename TState> inline void UnityEngine::InputSystem::InputSystem::QueueStateEvent(::UnityEngine::InputSystem::InputDevice* device, TState state, double_t time) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                          { "QueueStateEvent", { ::i2c::class_of<TState>() }, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<TState>(), ::i2c::type_of<double_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TState>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device, state, time);
}
template <typename TDelta> inline void UnityEngine::InputSystem::InputSystem::QueueDeltaStateEvent(::UnityEngine::InputSystem::InputControl* control, TDelta delta, double_t time) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
          { "QueueDeltaStateEvent", { ::i2c::class_of<TDelta>() }, { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<TDelta>(), ::i2c::type_of<double_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TDelta>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, control, delta, time);
}
inline void UnityEngine::InputSystem::InputSystem::QueueConfigChangeEvent(::UnityEngine::InputSystem::InputDevice* device, double_t time) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                           { "QueueConfigChangeEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device, time);
}
inline void UnityEngine::InputSystem::InputSystem::QueueTextEvent(::UnityEngine::InputSystem::InputDevice* device, char16_t character, double_t time) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                              { "QueueTextEvent", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<char16_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, device, character, time);
}
inline void UnityEngine::InputSystem::InputSystem::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::Update(::UnityEngine::InputSystem::LowLevel::InputUpdateType updateType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "Update", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputUpdateType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, updateType);
}
inline void UnityEngine::InputSystem::InputSystem::add_onBeforeUpdate(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "add_onBeforeUpdate", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::remove_onBeforeUpdate(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "remove_onBeforeUpdate", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::add_onAfterUpdate(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "add_onAfterUpdate", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::remove_onAfterUpdate(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "remove_onAfterUpdate", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::InputSystem::InputSettings> UnityEngine::InputSystem::InputSystem::get_settings() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_settings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputSettings>>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::set_settings(::UnityEngine::InputSystem::InputSettings* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "set_settings", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::add_onSettingsChange(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "add_onSettingsChange", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::remove_onSettingsChange(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "remove_onSettingsChange", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::EnableActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "EnableActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::DisableActions(bool triggerSetupChanged) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "DisableActions", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, triggerSetupChanged);
}
inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> UnityEngine::InputSystem::InputSystem::get_actions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_actions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::InputSystem::InputActionAsset>>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::set_actions(::UnityEngine::InputSystem::InputActionAsset* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "set_actions", {}, { ::i2c::type_of<::UnityEngine::InputSystem::InputActionAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::add_onActionsChange(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "add_onActionsChange", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::remove_onActionsChange(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "remove_onActionsChange", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::add_onActionChange(::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                           { "add_onActionChange", {}, { ::i2c::type_of<::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::remove_onActionChange(::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                              { "remove_onActionChange", {}, { ::i2c::type_of<::System::Action_2<::System::Object*, ::UnityEngine::InputSystem::InputActionChange>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::InputSystem::RegisterInteraction(::System::Type* type, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                                                         { "RegisterInteraction", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, name);
}
template <typename T> inline void UnityEngine::InputSystem::InputSystem::RegisterInteraction(::StringW name) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "RegisterInteraction", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name);
}
inline ::System::Type* UnityEngine::InputSystem::InputSystem::TryGetInteraction(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "TryGetInteraction", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, name);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* UnityEngine::InputSystem::InputSystem::ListInteractions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "ListInteractions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::RegisterBindingComposite(::System::Type* type, ::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                                                         { "RegisterBindingComposite", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, name);
}
template <typename T> inline void UnityEngine::InputSystem::InputSystem::RegisterBindingComposite(::StringW name) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "RegisterBindingComposite", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, name);
}
inline ::System::Type* UnityEngine::InputSystem::InputSystem::TryGetBindingComposite(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "TryGetBindingComposite", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, name);
}
inline void UnityEngine::InputSystem::InputSystem::DisableAllEnabledActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "DisableAllEnabledActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>* UnityEngine::InputSystem::InputSystem::ListEnabledActions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "ListEnabledActions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>*>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::InputSystem::ListEnabledActions(::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>* actions) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                                                           { "ListEnabledActions", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::InputSystem::InputAction*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, actions);
}
inline ::UnityEngine::InputSystem::InputRemoting* UnityEngine::InputSystem::InputSystem::get_remoting() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_remoting", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::InputRemoting*>(nullptr, ___internal_method);
}
inline ::System::Version* UnityEngine::InputSystem::InputSystem::get_version() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_version", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Version*>(nullptr, ___internal_method);
}
inline bool UnityEngine::InputSystem::InputSystem::get_runInBackground() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_runInBackground", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::set_runInBackground(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "set_runInBackground", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline float_t UnityEngine::InputSystem::InputSystem::get_scrollWheelDeltaPerTick() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_scrollWheelDeltaPerTick", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputMetrics UnityEngine::InputSystem::InputSystem::get_metrics() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "get_metrics", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputMetrics>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::RunInitializeInPlayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "RunInitializeInPlayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::EnsureInitialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "EnsureInitialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::InitializeInPlayer(::UnityEngine::InputSystem::LowLevel::IInputRuntime* runtime, ::UnityEngine::InputSystem::InputSettings* settings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(),
                          { "InitializeInPlayer", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::IInputRuntime*>(), ::i2c::type_of<::UnityEngine::InputSystem::InputSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, runtime, settings);
}
inline void UnityEngine::InputSystem::InputSystem::RunInitialUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "RunInitialUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::InputSystem::PerformDefaultPluginInitialization() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::InputSystem*>(), { "PerformDefaultPluginInitialization", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::InputSystem::InputSystem() {}
