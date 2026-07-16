#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/DeltaStateEvent.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__DeltaStateEvent_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__DeltaStateEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputEventTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_def.hpp"
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent__stateData_e__FixedBuffer::DeltaStateEvent__stateData_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent__stateData_e__FixedBuffer::DeltaStateEvent__stateData_e__FixedBuffer() {}
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent.get_deltaStateSizeInBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::get_deltaStateSizeInBytes)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65a93bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>(), { "get_deltaStateSizeInBytes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent.get_deltaState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::*)()>(&::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::get_deltaState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65a93c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>(), { "get_deltaState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent.get_typeStatic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::get_typeStatic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x65a93d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>(), { "get_typeStatic", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent.ToEventPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventPtr (::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::ToEventPtr)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65a93dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>(), { "ToEventPtr", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent.From
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent* (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::From)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x65a93e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>(),
                                                                                           { "From", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent.FromUnchecked
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent* (*)(::UnityEngine::InputSystem::LowLevel::InputEventPtr)>(
    &::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::FromUnchecked)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x65a9510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>(),
                                                                                           { "FromUnchecked", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent.From
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeArray_1<uint8_t> (*)(
    ::UnityEngine::InputSystem::InputControl*, ::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventPtr>, ::Unity::Collections::Allocator)>(
    &::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::From)> {
  constexpr static std::size_t size = 0x394;
  constexpr static std::size_t addrs = 0x65a9514;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>(),
                                                { "From",
                                                  {},
                                                  { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>(),
                                                    ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent& UnityEngine::InputSystem::LowLevel::DeltaStateEvent::__cordl_internal_get_baseEvent() {
  return this->___baseEvent;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent const& UnityEngine::InputSystem::LowLevel::DeltaStateEvent::__cordl_internal_get_baseEvent() const {
  return this->___baseEvent;
}
constexpr void UnityEngine::InputSystem::LowLevel::DeltaStateEvent::__cordl_internal_set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent value) {
  this->___baseEvent = value;
}
constexpr ::UnityEngine::InputSystem::Utilities::FourCC& UnityEngine::InputSystem::LowLevel::DeltaStateEvent::__cordl_internal_get_stateFormat() {
  return this->___stateFormat;
}
constexpr ::UnityEngine::InputSystem::Utilities::FourCC const& UnityEngine::InputSystem::LowLevel::DeltaStateEvent::__cordl_internal_get_stateFormat() const {
  return this->___stateFormat;
}
constexpr void UnityEngine::InputSystem::LowLevel::DeltaStateEvent::__cordl_internal_set_stateFormat(::UnityEngine::InputSystem::Utilities::FourCC value) {
  this->___stateFormat = value;
}
constexpr uint32_t& UnityEngine::InputSystem::LowLevel::DeltaStateEvent::__cordl_internal_get_stateOffset() {
  return this->___stateOffset;
}
constexpr uint32_t const& UnityEngine::InputSystem::LowLevel::DeltaStateEvent::__cordl_internal_get_stateOffset() const {
  return this->___stateOffset;
}
constexpr void UnityEngine::InputSystem::LowLevel::DeltaStateEvent::__cordl_internal_set_stateOffset(uint32_t value) {
  this->___stateOffset = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent__stateData_e__FixedBuffer& UnityEngine::InputSystem::LowLevel::DeltaStateEvent::__cordl_internal_get_stateData() {
  return this->___stateData;
}
constexpr ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent__stateData_e__FixedBuffer const& UnityEngine::InputSystem::LowLevel::DeltaStateEvent::__cordl_internal_get_stateData() const {
  return this->___stateData;
}
constexpr void UnityEngine::InputSystem::LowLevel::DeltaStateEvent::__cordl_internal_set_stateData(::UnityEngine::InputSystem::LowLevel::DeltaStateEvent__stateData_e__FixedBuffer value) {
  this->___stateData = value;
}
inline uint32_t UnityEngine::InputSystem::LowLevel::DeltaStateEvent::get_deltaStateSizeInBytes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>(), { "get_deltaStateSizeInBytes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(*this, ___internal_method);
}
inline void* UnityEngine::InputSystem::LowLevel::DeltaStateEvent::get_deltaState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>(), { "get_deltaState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void*>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::DeltaStateEvent::get_typeStatic() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>(), { "get_typeStatic", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr UnityEngine::InputSystem::LowLevel::DeltaStateEvent::ToEventPtr() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>(), { "ToEventPtr", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventPtr>(*this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent* UnityEngine::InputSystem::LowLevel::DeltaStateEvent::From(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>(),
                                                                                         { "From", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent*>(nullptr, ___internal_method, ptr);
}
inline ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent* UnityEngine::InputSystem::LowLevel::DeltaStateEvent::FromUnchecked(::UnityEngine::InputSystem::LowLevel::InputEventPtr ptr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>(),
                                                                                         { "FromUnchecked", {}, { ::i2c::type_of<::UnityEngine::InputSystem::LowLevel::InputEventPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent*>(nullptr, ___internal_method, ptr);
}
inline ::Unity::Collections::NativeArray_1<uint8_t> UnityEngine::InputSystem::LowLevel::DeltaStateEvent::From(::UnityEngine::InputSystem::InputControl* control,
                                                                                                              ::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventPtr> eventPtr,
                                                                                                              ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::LowLevel::DeltaStateEvent>(),
                                              { "From",
                                                {},
                                                { ::i2c::type_of<::UnityEngine::InputSystem::InputControl*>(), ::i2c::type_of<::by_ref<::UnityEngine::InputSystem::LowLevel::InputEventPtr>>(),
                                                  ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<uint8_t>>(nullptr, ___internal_method, control, eventPtr, allocator);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
constexpr UnityEngine::InputSystem::LowLevel::DeltaStateEvent::operator ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo* UnityEngine::InputSystem::LowLevel::DeltaStateEvent::i___UnityEngine__InputSystem__LowLevel__IInputEventTypeInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: Some("{}") }, CppParam { name: "stateFormat", ty:
// "::UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: Some("{}") }, CppParam { name: "stateOffset", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "stateData", ty: "::UnityEngine::InputSystem::LowLevel::DeltaStateEvent__stateData_e__FixedBuffer", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::DeltaStateEvent(::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent, ::UnityEngine::InputSystem::Utilities::FourCC stateFormat,
                                                                                 uint32_t stateOffset,
                                                                                 ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent__stateData_e__FixedBuffer stateData) noexcept {
  this->baseEvent = baseEvent;
  this->stateFormat = stateFormat;
  this->stateOffset = stateOffset;
  this->stateData = stateData;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::DeltaStateEvent::DeltaStateEvent() {}
