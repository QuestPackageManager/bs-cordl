#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\ShaderDebugPrintManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderDebugPrintManager_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Rendering/zzzz__AsyncGPUReadbackRequest_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderDebugPrintInput_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShaderDebugPrintManager_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
inline void UnityEngine::Rendering::ShaderDebugPrintManager_Profiling::setStaticF_BufferReadComplete(::UnityEngine::Rendering::ProfilingSampler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "BufferReadComplete", ::UnityEngine::Rendering::ShaderDebugPrintManager_Profiling*>(
      std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::ShaderDebugPrintManager_Profiling::getStaticF_BufferReadComplete() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "BufferReadComplete", ::UnityEngine::Rendering::ShaderDebugPrintManager_Profiling*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShaderDebugPrintManager_Profiling::ShaderDebugPrintManager_Profiling() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType::ShaderDebugPrintManager_DebugValueType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType::ShaderDebugPrintManager_DebugValueType() {}
constexpr ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType::TypeUint{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType::TypeInt{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType::TypeFloat{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType::TypeUint2{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType::TypeInt2{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType::TypeFloat2{ static_cast<int32_t>(0x6) };
constexpr ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType::TypeUint3{ static_cast<int32_t>(0x7) };
constexpr ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType::TypeInt3{ static_cast<int32_t>(0x8) };
constexpr ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType::TypeFloat3{ static_cast<int32_t>(0x9) };
constexpr ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType::TypeUint4{ static_cast<int32_t>(0xa) };
constexpr ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType::TypeInt4{ static_cast<int32_t>(0xb) };
constexpr ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType::TypeFloat4{ static_cast<int32_t>(0xc) };
constexpr ::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType::TypeBool{ static_cast<int32_t>(0xd) };
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderDebugPrintManager.DebugValueTypeToElemSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::ShaderDebugPrintManager::*)(::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType)>(
    &::UnityEngine::Rendering::ShaderDebugPrintManager::DebugValueTypeToElemSize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x676df94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintManager*>(),
                                                             { "DebugValueTypeToElemSize", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderDebugPrintManager._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ShaderDebugPrintManager::*)()>(&::UnityEngine::Rendering::ShaderDebugPrintManager::_ctor)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x676dfb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintManager*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderDebugPrintManager.get_instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ShaderDebugPrintManager* (*)()>(&::UnityEngine::Rendering::ShaderDebugPrintManager::get_instance)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x676e2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintManager*>(), { "get_instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderDebugPrintManager.SetShaderDebugPrintInputConstants
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ShaderDebugPrintManager::*)(
    ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ShaderDebugPrintInput)>(&::UnityEngine::Rendering::ShaderDebugPrintManager::SetShaderDebugPrintInputConstants)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x676e30c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintManager*>(),
            { "SetShaderDebugPrintInputConstants", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ShaderDebugPrintInput>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderDebugPrintManager.SetShaderDebugPrintBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ShaderDebugPrintManager::*)(::UnityEngine::Rendering::CommandBuffer*)>(
    &::UnityEngine::Rendering::ShaderDebugPrintManager::SetShaderDebugPrintBindings)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x676e3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintManager*>(),
                                                                                           { "SetShaderDebugPrintBindings", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderDebugPrintManager.ClearShaderDebugPrintBuffer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ShaderDebugPrintManager::*)()>(
    &::UnityEngine::Rendering::ShaderDebugPrintManager::ClearShaderDebugPrintBuffer)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x676e54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintManager*>(), { "ClearShaderDebugPrintBuffer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderDebugPrintManager.BufferReadComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ShaderDebugPrintManager::*)(::UnityEngine::Rendering::AsyncGPUReadbackRequest)>(
    &::UnityEngine::Rendering::ShaderDebugPrintManager::BufferReadComplete)> {
  constexpr static std::size_t size = 0x10c0;
  constexpr static std::size_t addrs = 0x676e644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintManager*>(),
                                                                                           { "BufferReadComplete", {}, { ::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderDebugPrintManager.EndFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ShaderDebugPrintManager::*)()>(&::UnityEngine::Rendering::ShaderDebugPrintManager::EndFrame)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x676f704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintManager*>(), { "EndFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderDebugPrintManager.PrintImmediate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ShaderDebugPrintManager::*)()>(&::UnityEngine::Rendering::ShaderDebugPrintManager::PrintImmediate)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x676f7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintManager*>(), { "PrintImmediate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderDebugPrintManager.get_outputLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::ShaderDebugPrintManager::*)()>(&::UnityEngine::Rendering::ShaderDebugPrintManager::get_outputLine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676f8a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintManager*>(), { "get_outputLine", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderDebugPrintManager.set_outputAction
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ShaderDebugPrintManager::*)(::System::Action_1<::StringW>*)>(
    &::UnityEngine::Rendering::ShaderDebugPrintManager::set_outputAction)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x676f8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintManager*>(), { "set_outputAction", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::ShaderDebugPrintManager.DefaultOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::ShaderDebugPrintManager::*)(::StringW)>(&::UnityEngine::Rendering::ShaderDebugPrintManager::DefaultOutput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x676f8b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintManager*>(), { "DefaultOutput", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::GraphicsBuffer*>*& UnityEngine::Rendering::ShaderDebugPrintManager::__cordl_internal_get_m_OutputBuffers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OutputBuffers;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::GraphicsBuffer*>* const& UnityEngine::Rendering::ShaderDebugPrintManager::__cordl_internal_get_m_OutputBuffers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OutputBuffers;
}
constexpr void UnityEngine::Rendering::ShaderDebugPrintManager::__cordl_internal_set_m_OutputBuffers(::System::Collections::Generic::List_1<::UnityEngine::GraphicsBuffer*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OutputBuffers = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*& UnityEngine::Rendering::ShaderDebugPrintManager::__cordl_internal_get_m_ReadbackRequests() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadbackRequests;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* const&
UnityEngine::Rendering::ShaderDebugPrintManager::__cordl_internal_get_m_ReadbackRequests() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadbackRequests;
}
constexpr void
UnityEngine::Rendering::ShaderDebugPrintManager::__cordl_internal_set_m_ReadbackRequests(::System::Collections::Generic::List_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReadbackRequests = value;
}
constexpr ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*& UnityEngine::Rendering::ShaderDebugPrintManager::__cordl_internal_get_m_BufferReadCompleteAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BufferReadCompleteAction;
}
constexpr ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* const& UnityEngine::Rendering::ShaderDebugPrintManager::__cordl_internal_get_m_BufferReadCompleteAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_BufferReadCompleteAction;
}
constexpr void UnityEngine::Rendering::ShaderDebugPrintManager::__cordl_internal_set_m_BufferReadCompleteAction(::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_BufferReadCompleteAction = value;
}
constexpr int32_t& UnityEngine::Rendering::ShaderDebugPrintManager::__cordl_internal_get_m_FrameCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameCounter;
}
constexpr int32_t const& UnityEngine::Rendering::ShaderDebugPrintManager::__cordl_internal_get_m_FrameCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameCounter;
}
constexpr void UnityEngine::Rendering::ShaderDebugPrintManager::__cordl_internal_set_m_FrameCounter(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FrameCounter = value;
}
constexpr bool& UnityEngine::Rendering::ShaderDebugPrintManager::__cordl_internal_get_m_FrameCleared() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameCleared;
}
constexpr bool const& UnityEngine::Rendering::ShaderDebugPrintManager::__cordl_internal_get_m_FrameCleared() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_FrameCleared;
}
constexpr void UnityEngine::Rendering::ShaderDebugPrintManager::__cordl_internal_set_m_FrameCleared(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_FrameCleared = value;
}
constexpr ::StringW& UnityEngine::Rendering::ShaderDebugPrintManager::__cordl_internal_get_m_OutputLine() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OutputLine;
}
constexpr ::StringW const& UnityEngine::Rendering::ShaderDebugPrintManager::__cordl_internal_get_m_OutputLine() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OutputLine;
}
constexpr void UnityEngine::Rendering::ShaderDebugPrintManager::__cordl_internal_set_m_OutputLine(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OutputLine = value;
}
constexpr ::System::Action_1<::StringW>*& UnityEngine::Rendering::ShaderDebugPrintManager::__cordl_internal_get_m_OutputAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OutputAction;
}
constexpr ::System::Action_1<::StringW>* const& UnityEngine::Rendering::ShaderDebugPrintManager::__cordl_internal_get_m_OutputAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_OutputAction;
}
constexpr void UnityEngine::Rendering::ShaderDebugPrintManager::__cordl_internal_set_m_OutputAction(::System::Action_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_OutputAction = value;
}
inline void UnityEngine::Rendering::ShaderDebugPrintManager::setStaticF_s_Instance(::UnityEngine::Rendering::ShaderDebugPrintManager* value) {
  ::cordl_internals::setStaticField<::UnityEngine::Rendering::ShaderDebugPrintManager*, "s_Instance", ::UnityEngine::Rendering::ShaderDebugPrintManager*>(
      std::forward<::UnityEngine::Rendering::ShaderDebugPrintManager*>(value));
}
inline ::UnityEngine::Rendering::ShaderDebugPrintManager* UnityEngine::Rendering::ShaderDebugPrintManager::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ShaderDebugPrintManager*, "s_Instance", ::UnityEngine::Rendering::ShaderDebugPrintManager*>();
}
inline void UnityEngine::Rendering::ShaderDebugPrintManager::setStaticF_m_ShaderPropertyIDInputMouse(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "m_ShaderPropertyIDInputMouse", ::UnityEngine::Rendering::ShaderDebugPrintManager*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ShaderDebugPrintManager::getStaticF_m_ShaderPropertyIDInputMouse() {
  return ::cordl_internals::getStaticField<int32_t, "m_ShaderPropertyIDInputMouse", ::UnityEngine::Rendering::ShaderDebugPrintManager*>();
}
inline void UnityEngine::Rendering::ShaderDebugPrintManager::setStaticF_m_ShaderPropertyIDInputFrame(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "m_ShaderPropertyIDInputFrame", ::UnityEngine::Rendering::ShaderDebugPrintManager*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ShaderDebugPrintManager::getStaticF_m_ShaderPropertyIDInputFrame() {
  return ::cordl_internals::getStaticField<int32_t, "m_ShaderPropertyIDInputFrame", ::UnityEngine::Rendering::ShaderDebugPrintManager*>();
}
inline void UnityEngine::Rendering::ShaderDebugPrintManager::setStaticF_m_shaderDebugOutputData(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "m_shaderDebugOutputData", ::UnityEngine::Rendering::ShaderDebugPrintManager*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::ShaderDebugPrintManager::getStaticF_m_shaderDebugOutputData() {
  return ::cordl_internals::getStaticField<int32_t, "m_shaderDebugOutputData", ::UnityEngine::Rendering::ShaderDebugPrintManager*>();
}
inline int32_t UnityEngine::Rendering::ShaderDebugPrintManager::DebugValueTypeToElemSize(::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintManager*>(),
                                                           { "DebugValueTypeToElemSize", {}, { ::i2c::type_of<::UnityEngine::Rendering::ShaderDebugPrintManager_DebugValueType>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, type);
}
inline void UnityEngine::Rendering::ShaderDebugPrintManager::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintManager*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ShaderDebugPrintManager* UnityEngine::Rendering::ShaderDebugPrintManager::get_instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintManager*>(), { "get_instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShaderDebugPrintManager*>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::ShaderDebugPrintManager::SetShaderDebugPrintInputConstants(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::Rendering::ShaderDebugPrintInput input) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintManager*>(),
          { "SetShaderDebugPrintInputConstants", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ShaderDebugPrintInput>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, input);
}
inline void UnityEngine::Rendering::ShaderDebugPrintManager::SetShaderDebugPrintBindings(::UnityEngine::Rendering::CommandBuffer* cmd) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintManager*>(),
                                                                                         { "SetShaderDebugPrintBindings", {}, { ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::ShaderDebugPrintManager::ClearShaderDebugPrintBuffer() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintManager*>(), { "ClearShaderDebugPrintBuffer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ShaderDebugPrintManager::BufferReadComplete(::UnityEngine::Rendering::AsyncGPUReadbackRequest request) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintManager*>(),
                                                                                         { "BufferReadComplete", {}, { ::i2c::type_of<::UnityEngine::Rendering::AsyncGPUReadbackRequest>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline void UnityEngine::Rendering::ShaderDebugPrintManager::EndFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintManager*>(), { "EndFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ShaderDebugPrintManager::PrintImmediate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintManager*>(), { "PrintImmediate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::ShaderDebugPrintManager::get_outputLine() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintManager*>(), { "get_outputLine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Rendering::ShaderDebugPrintManager::set_outputAction(::System::Action_1<::StringW>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintManager*>(), { "set_outputAction", {}, { ::i2c::type_of<::System::Action_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::ShaderDebugPrintManager::DefaultOutput(::StringW line) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::ShaderDebugPrintManager*>(), { "DefaultOutput", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, line);
}
inline ::UnityEngine::Rendering::ShaderDebugPrintManager* UnityEngine::Rendering::ShaderDebugPrintManager::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::ShaderDebugPrintManager*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::ShaderDebugPrintManager::ShaderDebugPrintManager() {}
