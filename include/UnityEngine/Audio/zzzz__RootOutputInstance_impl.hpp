#pragma once
// IWYU pragma private; include "UnityEngine/Audio/RootOutputInstance.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_impl.hpp"
#include "UnityEngine/Audio/zzzz__RootOutputInstance_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioFormat_def.hpp"
#include "UnityEngine/Audio/zzzz__ChannelBuffer_def.hpp"
#include "UnityEngine/Audio/zzzz__ControlContext_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorHeader_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
#include "UnityEngine/Audio/zzzz__RealtimeContext_def.hpp"
#include "UnityEngine/Audio/zzzz__RootOutputInstance_def.hpp"
template <typename TRealtime>
inline ::Unity::Jobs::JobHandle UnityEngine::Audio::RootOutputInstance_IControl_1<TRealtime>::Configure(::UnityEngine::Audio::ControlContext context, ::by_ref<TRealtime> realtime,
                                                                                                        /* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::AudioFormat const> format) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Audio::RootOutputInstance_IControl_1<TRealtime>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method, context, realtime, format);
}
/// @brief Convert operator to "::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>"
template <typename TRealtime> constexpr UnityEngine::Audio::RootOutputInstance_IControl_1<TRealtime>::operator ::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>*() noexcept {
  return static_cast<::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>"
template <typename TRealtime>
constexpr ::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>*
UnityEngine::Audio::RootOutputInstance_IControl_1<TRealtime>::i___UnityEngine__Audio__ProcessorInstance_IControl_1_TRealtime_() noexcept {
  return static_cast<::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>*>(static_cast<void*>(this));
}
//  Writing Method size for method: ::UnityEngine::Audio::RootOutputInstance_IRealtime.EarlyProcessing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::UnityEngine::Audio::RootOutputInstance_IRealtime::*)(
    ::by_ref<::UnityEngine::Audio::RealtimeContext const>, ::UnityEngine::Audio::ProcessorInstance_Pipe)>(&::UnityEngine::Audio::RootOutputInstance_IRealtime::EarlyProcessing)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RootOutputInstance_IRealtime*>(), { ::i2c::class_of<::UnityEngine::Audio::RootOutputInstance_IRealtime*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::RootOutputInstance_IRealtime.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::RootOutputInstance_IRealtime::*)(
    ::by_ref<::UnityEngine::Audio::RealtimeContext const>, ::UnityEngine::Audio::ProcessorInstance_Pipe, ::Unity::Jobs::JobHandle)>(&::UnityEngine::Audio::RootOutputInstance_IRealtime::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RootOutputInstance_IRealtime*>(), { ::i2c::class_of<::UnityEngine::Audio::RootOutputInstance_IRealtime*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::RootOutputInstance_IRealtime.EndProcessing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::RootOutputInstance_IRealtime::*)(::by_ref<::UnityEngine::Audio::RealtimeContext const>,
                                                                                                                    ::UnityEngine::Audio::ProcessorInstance_Pipe, ::UnityEngine::Audio::ChannelBuffer)>(
    &::UnityEngine::Audio::RootOutputInstance_IRealtime::EndProcessing)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RootOutputInstance_IRealtime*>(), { ::i2c::class_of<::UnityEngine::Audio::RootOutputInstance_IRealtime*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::RootOutputInstance_IRealtime.RemovedFromProcessing
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::RootOutputInstance_IRealtime::*)()>(&::UnityEngine::Audio::RootOutputInstance_IRealtime::RemovedFromProcessing)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RootOutputInstance_IRealtime*>(), { ::i2c::class_of<::UnityEngine::Audio::RootOutputInstance_IRealtime*>(), 3 }));
    return ___internal_method;
  }
};
inline ::Unity::Jobs::JobHandle UnityEngine::Audio::RootOutputInstance_IRealtime::EarlyProcessing(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::RealtimeContext const> context,
                                                                                                  ::UnityEngine::Audio::ProcessorInstance_Pipe pipe) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Audio::RootOutputInstance_IRealtime*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(this, ___internal_method, context, pipe);
}
inline void UnityEngine::Audio::RootOutputInstance_IRealtime::Process(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::RealtimeContext const> context,
                                                                      ::UnityEngine::Audio::ProcessorInstance_Pipe pipe, ::Unity::Jobs::JobHandle input) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Audio::RootOutputInstance_IRealtime*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, pipe, input);
}
inline void UnityEngine::Audio::RootOutputInstance_IRealtime::EndProcessing(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::RealtimeContext const> context,
                                                                            ::UnityEngine::Audio::ProcessorInstance_Pipe pipe, ::UnityEngine::Audio::ChannelBuffer output) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Audio::RootOutputInstance_IRealtime*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, pipe, output);
}
inline void UnityEngine::Audio::RootOutputInstance_IRealtime::RemovedFromProcessing() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Audio::RootOutputInstance_IRealtime*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief Convert operator to "::UnityEngine::Audio::ProcessorInstance_IRealtime"
constexpr UnityEngine::Audio::RootOutputInstance_IRealtime::operator ::UnityEngine::Audio::ProcessorInstance_IRealtime*() noexcept {
  return static_cast<::UnityEngine::Audio::ProcessorInstance_IRealtime*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Audio::ProcessorInstance_IRealtime"
constexpr ::UnityEngine::Audio::ProcessorInstance_IRealtime* UnityEngine::Audio::RootOutputInstance_IRealtime::i___UnityEngine__Audio__ProcessorInstance_IRealtime() noexcept {
  return static_cast<::UnityEngine::Audio::ProcessorInstance_IRealtime*>(static_cast<void*>(this));
}
//  Writing Method size for method: ::UnityEngine::Audio::RootOutputInstance.op_Implicit___UnityEngine__Audio__ProcessorInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::ProcessorInstance (*)(::by_ref<::UnityEngine::Audio::RootOutputInstance const>)>(
    &::UnityEngine::Audio::RootOutputInstance::op_Implicit___UnityEngine__Audio__ProcessorInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6eabb18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RootOutputInstance>(),
                                                                                           { "op_Implicit", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Audio::RootOutputInstance const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::RootOutputInstance.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::RootOutputInstance::*)(::UnityEngine::Audio::RootOutputInstance)>(
    &::UnityEngine::Audio::RootOutputInstance::Equals)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6eabb2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RootOutputInstance>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Audio::RootOutputInstance>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::RootOutputInstance.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::RootOutputInstance::*)(::System::Object*)>(&::UnityEngine::Audio::RootOutputInstance::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6eabb58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RootOutputInstance>(), { ::i2c::class_of<::UnityEngine::Audio::RootOutputInstance>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::RootOutputInstance.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Audio::RootOutputInstance, ::UnityEngine::Audio::RootOutputInstance)>(
    &::UnityEngine::Audio::RootOutputInstance::op_Equality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6eabbe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RootOutputInstance>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Audio::RootOutputInstance>(), ::i2c::type_of<::UnityEngine::Audio::RootOutputInstance>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::RootOutputInstance.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Audio::RootOutputInstance, ::UnityEngine::Audio::RootOutputInstance)>(
    &::UnityEngine::Audio::RootOutputInstance::op_Inequality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6eabc10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RootOutputInstance>(),
                                                { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Audio::RootOutputInstance>(), ::i2c::type_of<::UnityEngine::Audio::RootOutputInstance>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::RootOutputInstance.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Audio::RootOutputInstance::*)()>(&::UnityEngine::Audio::RootOutputInstance::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6eabc3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RootOutputInstance>(), { ::i2c::class_of<::UnityEngine::Audio::RootOutputInstance>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::RootOutputInstance._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::RootOutputInstance::*)(::UnityEngine::Audio::ProcessorHeader*)>(&::UnityEngine::Audio::RootOutputInstance::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6eabc54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RootOutputInstance>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Audio::ProcessorHeader*>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Audio::ProcessorInstance
UnityEngine::Audio::RootOutputInstance::op_Implicit___UnityEngine__Audio__ProcessorInstance(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::RootOutputInstance const> root) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RootOutputInstance>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Audio::RootOutputInstance const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::ProcessorInstance>(nullptr, ___internal_method, root);
}
inline bool UnityEngine::Audio::RootOutputInstance::Equals(::UnityEngine::Audio::RootOutputInstance other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RootOutputInstance>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Audio::RootOutputInstance>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Audio::RootOutputInstance::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Audio::RootOutputInstance>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::Audio::RootOutputInstance::op_Equality(::UnityEngine::Audio::RootOutputInstance a, ::UnityEngine::Audio::RootOutputInstance b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RootOutputInstance>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Audio::RootOutputInstance>(), ::i2c::type_of<::UnityEngine::Audio::RootOutputInstance>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::Audio::RootOutputInstance::op_Inequality(::UnityEngine::Audio::RootOutputInstance a, ::UnityEngine::Audio::RootOutputInstance b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RootOutputInstance>(),
                                              { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Audio::RootOutputInstance>(), ::i2c::type_of<::UnityEngine::Audio::RootOutputInstance>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline int32_t UnityEngine::Audio::RootOutputInstance::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Audio::RootOutputInstance>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Audio::RootOutputInstance::_ctor(::UnityEngine::Audio::ProcessorHeader* header) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::RootOutputInstance>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Audio::ProcessorHeader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, header);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Audio::RootOutputInstance>"
constexpr UnityEngine::Audio::RootOutputInstance::operator ::System::IEquatable_1<::UnityEngine::Audio::RootOutputInstance>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Audio::RootOutputInstance>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Audio::RootOutputInstance>"
constexpr ::System::IEquatable_1<::UnityEngine::Audio::RootOutputInstance>* UnityEngine::Audio::RootOutputInstance::i___System__IEquatable_1___UnityEngine__Audio__RootOutputInstance_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Audio::RootOutputInstance>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ProcessorInstance", ty: "::UnityEngine::Audio::ProcessorInstance", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::RootOutputInstance::RootOutputInstance(::UnityEngine::Audio::ProcessorInstance m_ProcessorInstance) noexcept {
  this->m_ProcessorInstance = m_ProcessorInstance;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::RootOutputInstance::RootOutputInstance() {}
