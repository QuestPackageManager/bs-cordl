#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\LowLevel\StateEvent.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__StateEvent_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputEventTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__StateEvent_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::StateEvent__stateData_e__FixedBuffer::StateEvent__stateData_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::StateEvent__stateData_e__FixedBuffer::StateEvent__stateData_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.get_stateSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::LowLevel::StateEvent::*)()>(&::UnityEngine::InputSystem::LowLevel::StateEvent::get_stateSizeInBytes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65b123c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::StateEvent>(), { "get_stateSizeInBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.get_state
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::InputSystem::LowLevel::StateEvent::*)()>(&::UnityEngine::InputSystem::LowLevel::StateEvent::get_state)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b5a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::StateEvent>(), { "get_state", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.ToEventPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventPtr (::UnityEngine::InputSystem::LowLevel::StateEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::StateEvent::ToEventPtr)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65b5a68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::StateEvent>(), { "ToEventPtr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.get_typeStatic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::StateEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::StateEvent::get_typeStatic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65b5a6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::StateEvent>(), { "get_typeStatic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.From
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::StateEvent* (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::LowLevel::StateEvent::From)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x65b110c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::StateEvent>(),
                                                                                           { "From", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.FromUnchecked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::StateEvent* (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::LowLevel::StateEvent::FromUnchecked)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65b0f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::StateEvent>(),
                                                                                           { "FromUnchecked", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.From
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (*)(
    ::UnityEngine::InputSystem::InputDevice*, ::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventPtr>, ::Unity::Collections::Allocator)>(
    &::UnityEngine::InputSystem::LowLevel::StateEvent::From)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b5a78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::StateEvent>(),
                                                { "From",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>(),
                                                    ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.FromDefaultStateFor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (*)(
    ::UnityEngine::InputSystem::InputDevice*, ::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventPtr>, ::Unity::Collections::Allocator)>(
    &::UnityEngine::InputSystem::LowLevel::StateEvent::FromDefaultStateFor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b5dd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::StateEvent>(),
                                                { "FromDefaultStateFor",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>(),
                                                    ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::StateEvent.From
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (*)(
    ::UnityEngine::InputSystem::InputDevice*, ::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventPtr>, ::Unity::Collections::Allocator, bool)>(
    &::UnityEngine::InputSystem::LowLevel::StateEvent::From)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x65b5a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::StateEvent>(),
                                                { "From",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>(),
                                                    ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent& UnityEngine::InputSystem::LowLevel::StateEvent::__cordl_internal_get_baseEvent() {
  return this->___baseEvent;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent const& UnityEngine::InputSystem::LowLevel::StateEvent::__cordl_internal_get_baseEvent() const {
  return this->___baseEvent;
}
constexpr void UnityEngine::InputSystem::LowLevel::StateEvent::__cordl_internal_set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent value) {
  this->___baseEvent = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::FourCC& UnityEngine::InputSystem::LowLevel::StateEvent::__cordl_internal_get_stateFormat() {
  return this->___stateFormat;
}
constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& UnityEngine::InputSystem::LowLevel::StateEvent::__cordl_internal_get_stateFormat() const {
  return this->___stateFormat;
}
constexpr void UnityEngine::InputSystem::LowLevel::StateEvent::__cordl_internal_set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC value) {
  this->___stateFormat = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::StateEvent__stateData_e__FixedBuffer& UnityEngine::InputSystem::LowLevel::StateEvent::__cordl_internal_get_stateData() {
  return this->___stateData;
}
constexpr ::UnityEngine::InputSystem::LowLevel::StateEvent__stateData_e__FixedBuffer const& UnityEngine::InputSystem::LowLevel::StateEvent::__cordl_internal_get_stateData() const {
  return this->___stateData;
}
constexpr void UnityEngine::InputSystem::LowLevel::StateEvent::__cordl_internal_set_stateData(::UnityEngine::InputSystem::LowLevel::StateEvent__stateData_e__FixedBuffer value) {
  this->___stateData = value;
}
inline uint32_t UnityEngine::InputSystem::LowLevel::StateEvent::get_stateSizeInBytes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::StateEvent>(), { "get_stateSizeInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void* UnityEngine::InputSystem::LowLevel::StateEvent::get_state() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::StateEvent>(), { "get_state", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr UnityEngine::InputSystem::LowLevel::StateEvent::ToEventPtr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::StateEvent>(), { "ToEventPtr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::StateEvent::get_typeStatic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::StateEvent>(), { "get_typeStatic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
template <typename TState> inline TState UnityEngine::InputSystem::LowLevel::StateEvent::GetState() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::StateEvent>(), { "GetState", { ::i2c::class_of<TState>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TState>() })));
  return ::cordl_internals::RunMethodRethrow<TState>(*this, ___internal_method);
}
template <typename TState> inline TState UnityEngine::InputSystem::LowLevel::StateEvent::GetState(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::StateEvent>(),
                                                           { "GetState", { ::i2c::class_of<TState>() }, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TState>() })));
  return ::cordl_internals::RunMethodRethrow<TState>(nullptr, ___internal_method, ptr);
}
template <typename TState> inline int32_t UnityEngine::InputSystem::LowLevel::StateEvent::GetEventSizeWithPayload() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::StateEvent>(), { "GetEventSizeWithPayload", { ::i2c::class_of<TState>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TState>() })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::StateEvent* UnityEngine::InputSystem::LowLevel::StateEvent::From(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::StateEvent>(),
                                                                                         { "From", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::StateEvent*>(nullptr, ___internal_method, ptr);
}
inline ::UnityEngine::InputSystem::LowLevel::StateEvent* UnityEngine::InputSystem::LowLevel::StateEvent::FromUnchecked(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::StateEvent>(),
                                                                                         { "FromUnchecked", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::StateEvent*>(nullptr, ___internal_method, ptr);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::InputSystem::LowLevel::StateEvent::From(::UnityEngine::InputSystem::InputDevice* device,
                                                                                                         ::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventPtr> eventPtr,
                                                                                                         ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::StateEvent>(),
                                              { "From",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>(),
                                                  ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>>(nullptr, ___internal_method, device, eventPtr, allocator);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::InputSystem::LowLevel::StateEvent::FromDefaultStateFor(::UnityEngine::InputSystem::InputDevice* device,
                                                                                                                        ::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventPtr> eventPtr,
                                                                                                                        ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::StateEvent>(),
                                              { "FromDefaultStateFor",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>(),
                                                  ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>>(nullptr, ___internal_method, device, eventPtr, allocator);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::InputSystem::LowLevel::StateEvent::From(::UnityEngine::InputSystem::InputDevice* device,
                                                                                                         ::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventPtr> eventPtr,
                                                                                                         ::Unity::Collections::Allocator allocator, bool useDefaultState) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::StateEvent>(),
                                              { "From",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::InputDevice*>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>(),
                                                  ::i2c::type_of<::Unity::Collections::Allocator>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>>(nullptr, ___internal_method, device, eventPtr, allocator, useDefaultState);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
constexpr UnityEngine::InputSystem::LowLevel::StateEvent::operator ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo* UnityEngine::InputSystem::LowLevel::StateEvent::i___UnityEngine__InputSystem__LowLevel__IInputEventTypeInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: Some("{}") }, CppParam { name: "stateFormat", ty:
// "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: Some("{}") }, CppParam { name: "stateData", ty:
// "::UnityEngine::InputSystem::LowLevel::StateEvent__stateData_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::StateEvent::StateEvent(::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent, ::UnityEngine::InputSystem::Utilities::FourCC stateFormat,
                                                                       ::UnityEngine::InputSystem::LowLevel::StateEvent__stateData_e__FixedBuffer stateData) noexcept {
  this->baseEvent = baseEvent;
  this->stateFormat = stateFormat;
  this->stateData = stateData;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::StateEvent::StateEvent() {}
