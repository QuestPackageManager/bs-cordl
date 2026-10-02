#pragma once
// IWYU pragma private; include "UnityEngine/Audio/ProcessorHeader.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/Audio/zzzz__Handle_impl.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorHeader_def.hpp"
#include "UnityEngine/Audio/zzzz__ControlHeader_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorFunction_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorHeader.InvokeProcessor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::ProcessorHeader::*)(::UnityEngine::Audio::ProcessorFunction, void*)>(
    &::UnityEngine::Audio::ProcessorHeader::InvokeProcessor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6eabed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorHeader>(),
                                                             { "InvokeProcessor", {}, { ::i2c::type_of<::UnityEngine::Audio::ProcessorFunction>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::ProcessorHeader.IsSameControl
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::ProcessorHeader::*)(::UnityEngine::Audio::ControlHeader*)>(&::UnityEngine::Audio::ProcessorHeader::IsSameControl)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6eac978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorHeader>(), { "IsSameControl", {}, { ::i2c::type_of<::UnityEngine::Audio::ControlHeader*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Audio::ProcessorHeader::InvokeProcessor(::UnityEngine::Audio::ProcessorFunction fn, void* args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorHeader>(),
                                                           { "InvokeProcessor", {}, { ::i2c::type_of<::UnityEngine::Audio::ProcessorFunction>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, fn, args);
}
inline bool UnityEngine::Audio::ProcessorHeader::IsSameControl(::UnityEngine::Audio::ControlHeader* other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::ProcessorHeader>(), { "IsSameControl", {}, { ::i2c::type_of<::UnityEngine::Audio::ControlHeader*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "m_Control", ty: "void*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DualThreadHandle", ty: "::Unity::Audio::Handle", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "NativeProcessorFunction", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name:
// "NativeControlFunction", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ProcessorReflectionData", ty: "::System::IntPtr", modifiers: "", def_value:
// Some("{}"), comment: None }, CppParam { name: "ControlReflectionData", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::ProcessorHeader::ProcessorHeader(void* m_Control, ::Unity::Audio::Handle DualThreadHandle, ::System::IntPtr NativeProcessorFunction,
                                                                 ::System::IntPtr NativeControlFunction, ::System::IntPtr ProcessorReflectionData, ::System::IntPtr ControlReflectionData) noexcept {
  this->m_Control = m_Control;
  this->DualThreadHandle = DualThreadHandle;
  this->NativeProcessorFunction = NativeProcessorFunction;
  this->NativeControlFunction = NativeControlFunction;
  this->ProcessorReflectionData = ProcessorReflectionData;
  this->ControlReflectionData = ControlReflectionData;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::ProcessorHeader::ProcessorHeader() {}
