#pragma once
#include "UnityEngineInternal/Input/zzzz__NativeInputEventBuffer_def.hpp"
constexpr ::cordl_internals::Ptr<void>& UnityEngineInternal::Input::NativeInputEventBuffer::__cordl_internal_get_eventBuffer() {
  return this->___eventBuffer;
}
constexpr ::cordl_internals::Ptr<void> const& UnityEngineInternal::Input::NativeInputEventBuffer::__cordl_internal_get_eventBuffer() const {
  return this->___eventBuffer;
}
constexpr void UnityEngineInternal::Input::NativeInputEventBuffer::__cordl_internal_set_eventBuffer(::cordl_internals::Ptr<void> value) {
  this->___eventBuffer = value;
}
constexpr int32_t& UnityEngineInternal::Input::NativeInputEventBuffer::__cordl_internal_get_eventCount() {
  return this->___eventCount;
}
constexpr int32_t const& UnityEngineInternal::Input::NativeInputEventBuffer::__cordl_internal_get_eventCount() const {
  return this->___eventCount;
}
constexpr void UnityEngineInternal::Input::NativeInputEventBuffer::__cordl_internal_set_eventCount(int32_t value) {
  this->___eventCount = value;
}
constexpr int32_t& UnityEngineInternal::Input::NativeInputEventBuffer::__cordl_internal_get_sizeInBytes() {
  return this->___sizeInBytes;
}
constexpr int32_t const& UnityEngineInternal::Input::NativeInputEventBuffer::__cordl_internal_get_sizeInBytes() const {
  return this->___sizeInBytes;
}
constexpr void UnityEngineInternal::Input::NativeInputEventBuffer::__cordl_internal_set_sizeInBytes(int32_t value) {
  this->___sizeInBytes = value;
}
constexpr int32_t& UnityEngineInternal::Input::NativeInputEventBuffer::__cordl_internal_get_capacityInBytes() {
  return this->___capacityInBytes;
}
constexpr int32_t const& UnityEngineInternal::Input::NativeInputEventBuffer::__cordl_internal_get_capacityInBytes() const {
  return this->___capacityInBytes;
}
constexpr void UnityEngineInternal::Input::NativeInputEventBuffer::__cordl_internal_set_capacityInBytes(int32_t value) {
  this->___capacityInBytes = value;
}
// Ctor Parameters [CppParam { name: "eventBuffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "eventCount", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "sizeInBytes", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "capacityInBytes", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }]
constexpr ::UnityEngineInternal::Input::NativeInputEventBuffer::NativeInputEventBuffer(::cordl_internals::Ptr<void> eventBuffer, int32_t eventCount, int32_t sizeInBytes,
                                                                                       int32_t capacityInBytes) noexcept {
  this->eventBuffer = eventBuffer;
  this->eventCount = eventCount;
  this->sizeInBytes = sizeInBytes;
  this->capacityInBytes = capacityInBytes;
}
// Ctor Parameters []
constexpr ::UnityEngineInternal::Input::NativeInputEventBuffer::NativeInputEventBuffer() {}
