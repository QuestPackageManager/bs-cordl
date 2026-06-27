#pragma once
// IWYU pragma private; include "UnityEngineInternal/Input/NativeInputEvent.hpp"
#include "UnityEngineInternal/Input/zzzz__NativeInputEventType_impl.hpp"
#include "UnityEngineInternal/Input/zzzz__NativeInputEvent_def.hpp"
constexpr ::UnityEngineInternal::Input::NativeInputEventType& UnityEngineInternal::Input::NativeInputEvent::__cordl_internal_get_type()  {
return this->___type;
}
constexpr ::UnityEngineInternal::Input::NativeInputEventType const& UnityEngineInternal::Input::NativeInputEvent::__cordl_internal_get_type() const {
return this->___type;
}
constexpr void UnityEngineInternal::Input::NativeInputEvent::__cordl_internal_set_type(::UnityEngineInternal::Input::NativeInputEventType  value)  {
this->___type = value;
}
constexpr uint16_t& UnityEngineInternal::Input::NativeInputEvent::__cordl_internal_get_sizeInBytes()  {
return this->___sizeInBytes;
}
constexpr uint16_t const& UnityEngineInternal::Input::NativeInputEvent::__cordl_internal_get_sizeInBytes() const {
return this->___sizeInBytes;
}
constexpr void UnityEngineInternal::Input::NativeInputEvent::__cordl_internal_set_sizeInBytes(uint16_t  value)  {
this->___sizeInBytes = value;
}
constexpr uint16_t& UnityEngineInternal::Input::NativeInputEvent::__cordl_internal_get_deviceId()  {
return this->___deviceId;
}
constexpr uint16_t const& UnityEngineInternal::Input::NativeInputEvent::__cordl_internal_get_deviceId() const {
return this->___deviceId;
}
constexpr void UnityEngineInternal::Input::NativeInputEvent::__cordl_internal_set_deviceId(uint16_t  value)  {
this->___deviceId = value;
}
constexpr double_t& UnityEngineInternal::Input::NativeInputEvent::__cordl_internal_get_time()  {
return this->___time;
}
constexpr double_t const& UnityEngineInternal::Input::NativeInputEvent::__cordl_internal_get_time() const {
return this->___time;
}
constexpr void UnityEngineInternal::Input::NativeInputEvent::__cordl_internal_set_time(double_t  value)  {
this->___time = value;
}
constexpr int32_t& UnityEngineInternal::Input::NativeInputEvent::__cordl_internal_get_eventId()  {
return this->___eventId;
}
constexpr int32_t const& UnityEngineInternal::Input::NativeInputEvent::__cordl_internal_get_eventId() const {
return this->___eventId;
}
constexpr void UnityEngineInternal::Input::NativeInputEvent::__cordl_internal_set_eventId(int32_t  value)  {
this->___eventId = value;
}
// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngineInternal::Input::NativeInputEventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "sizeInBytes", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "deviceId", ty: "uint16_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "time", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "eventId", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngineInternal::Input::NativeInputEvent::NativeInputEvent(::UnityEngineInternal::Input::NativeInputEventType  type, uint16_t  sizeInBytes, uint16_t  deviceId, double_t  time, int32_t  eventId) noexcept  {
this->type = type;
this->sizeInBytes = sizeInBytes;
this->deviceId = deviceId;
this->time = time;
this->eventId = eventId;
}
// Ctor Parameters []
constexpr ::UnityEngineInternal::Input::NativeInputEvent::NativeInputEvent()   {
}
