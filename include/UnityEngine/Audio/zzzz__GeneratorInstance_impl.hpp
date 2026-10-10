#pragma once
// IWYU pragma private; include "UnityEngine/Audio/GeneratorInstance.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_impl.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorHeader_impl.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_impl.hpp"
#include "UnityEngine/zzzz__AudioSpeakerMode_impl.hpp"
#include "UnityEngine/Audio/zzzz__GeneratorInstance_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioFormat_def.hpp"
#include "UnityEngine/Audio/zzzz__ChannelBuffer_def.hpp"
#include "UnityEngine/Audio/zzzz__ControlContext_def.hpp"
#include "UnityEngine/Audio/zzzz__GeneratorInstance_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
#include "UnityEngine/Audio/zzzz__RealtimeContext_def.hpp"
#include "UnityEngine/zzzz__AudioSpeakerMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance_ICapabilities.get_isFinite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::GeneratorInstance_ICapabilities::*)()>(&::UnityEngine::Audio::GeneratorInstance_ICapabilities::get_isFinite)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance_ICapabilities.get_isRealtime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::GeneratorInstance_ICapabilities::*)()>(&::UnityEngine::Audio::GeneratorInstance_ICapabilities::get_isRealtime)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance_ICapabilities.get_length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Unity::IntegerTime::DiscreteTime> (::UnityEngine::Audio::GeneratorInstance_ICapabilities::*)()>(
    &::UnityEngine::Audio::GeneratorInstance_ICapabilities::get_length)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(), 2 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::Audio::GeneratorInstance_ICapabilities::get_isFinite() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Audio::GeneratorInstance_ICapabilities::get_isRealtime() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Nullable_1<::Unity::IntegerTime::DiscreteTime> UnityEngine::Audio::GeneratorInstance_ICapabilities::get_length() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Unity::IntegerTime::DiscreteTime>>(this, ___internal_method);
}
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance_Setup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::GeneratorInstance_Setup::*)(::UnityEngine::AudioSpeakerMode, int32_t)>(
    &::UnityEngine::Audio::GeneratorInstance_Setup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6eab734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_Setup>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AudioSpeakerMode>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance_Setup._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::GeneratorInstance_Setup::*)(::by_ref<::UnityEngine::Audio::AudioFormat const>)>(
    &::UnityEngine::Audio::GeneratorInstance_Setup::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6eab73c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_Setup>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Audio::AudioFormat const>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Audio::GeneratorInstance_Setup::_ctor(::UnityEngine::AudioSpeakerMode speakerMode, int32_t sampleRate) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_Setup>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::AudioSpeakerMode>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, speakerMode, sampleRate);
}
inline void UnityEngine::Audio::GeneratorInstance_Setup::_ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::AudioFormat const> fromFormat) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_Setup>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Audio::AudioFormat const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, fromFormat);
}
// Ctor Parameters [CppParam { name: "speakerMode", ty: "::UnityEngine::AudioSpeakerMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sampleRate", ty: "int32_t",
// modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::GeneratorInstance_Setup::GeneratorInstance_Setup(::UnityEngine::AudioSpeakerMode speakerMode, int32_t sampleRate) noexcept {
  this->speakerMode = speakerMode;
  this->sampleRate = sampleRate;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::GeneratorInstance_Setup::GeneratorInstance_Setup() {}
// Ctor Parameters [CppParam { name: "m_Reserved", ty: "uint8_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::GeneratorInstance_Properties::GeneratorInstance_Properties(uint8_t m_Reserved) noexcept {
  this->m_Reserved = m_Reserved;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::GeneratorInstance_Properties::GeneratorInstance_Properties() {}
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance_Configuration.get_setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::GeneratorInstance_Setup (::UnityEngine::Audio::GeneratorInstance_Configuration::*)()>(
    &::UnityEngine::Audio::GeneratorInstance_Configuration::get_setup)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6eab74c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_Configuration>(), { "get_setup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance_Configuration.get_properties
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::GeneratorInstance_Properties (::UnityEngine::Audio::GeneratorInstance_Configuration::*)()>(
    &::UnityEngine::Audio::GeneratorInstance_Configuration::get_properties)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6eab754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_Configuration>(), { "get_properties", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance_Configuration.get_isFinite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::GeneratorInstance_Configuration::*)()>(&::UnityEngine::Audio::GeneratorInstance_Configuration::get_isFinite)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6eab75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_Configuration>(), { "get_isFinite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance_Configuration.get_isRealtime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::GeneratorInstance_Configuration::*)()>(&::UnityEngine::Audio::GeneratorInstance_Configuration::get_isRealtime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6eab764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_Configuration>(), { "get_isRealtime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance_Configuration.get_length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Unity::IntegerTime::DiscreteTime> (::UnityEngine::Audio::GeneratorInstance_Configuration::*)()>(
    &::UnityEngine::Audio::GeneratorInstance_Configuration::get_length)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6eab76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_Configuration>(), { "get_length", {}, {} })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Audio::GeneratorInstance_Setup UnityEngine::Audio::GeneratorInstance_Configuration::get_setup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_Configuration>(), { "get_setup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::GeneratorInstance_Setup>(*this, ___internal_method);
}
inline ::UnityEngine::Audio::GeneratorInstance_Properties UnityEngine::Audio::GeneratorInstance_Configuration::get_properties() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_Configuration>(), { "get_properties", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::GeneratorInstance_Properties>(*this, ___internal_method);
}
inline bool UnityEngine::Audio::GeneratorInstance_Configuration::get_isFinite() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_Configuration>(), { "get_isFinite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Audio::GeneratorInstance_Configuration::get_isRealtime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_Configuration>(), { "get_isRealtime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::System::Nullable_1<::Unity::IntegerTime::DiscreteTime> UnityEngine::Audio::GeneratorInstance_Configuration::get_length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_Configuration>(), { "get_length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Unity::IntegerTime::DiscreteTime>>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Setup", ty: "::UnityEngine::Audio::GeneratorInstance_Setup", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Properties", ty:
// "::UnityEngine::Audio::GeneratorInstance_Properties", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ReportedLength", ty: "::Unity::IntegerTime::DiscreteTime", modifiers:
// "", def_value: Some("{}"), comment: None }, CppParam { name: "IsFinite", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "IsRealtime", ty: "bool", modifiers: "",
// def_value: Some("{}"), comment: None }, CppParam { name: "HasKnownLength", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::GeneratorInstance_Configuration::GeneratorInstance_Configuration(::UnityEngine::Audio::GeneratorInstance_Setup Setup,
                                                                                                 ::UnityEngine::Audio::GeneratorInstance_Properties Properties,
                                                                                                 ::Unity::IntegerTime::DiscreteTime ReportedLength, bool IsFinite, bool IsRealtime,
                                                                                                 bool HasKnownLength) noexcept {
  this->Setup = Setup;
  this->Properties = Properties;
  this->ReportedLength = ReportedLength;
  this->IsFinite = IsFinite;
  this->IsRealtime = IsRealtime;
  this->HasKnownLength = HasKnownLength;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::GeneratorInstance_Configuration::GeneratorInstance_Configuration() {}
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance_Result.get_processedFrames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Audio::GeneratorInstance_Result::*)()>(&::UnityEngine::Audio::GeneratorInstance_Result::get_processedFrames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6eab7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_Result>(), { "get_processedFrames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance_Result.op_Implicit___UnityEngine__Audio__GeneratorInstance_Result
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::GeneratorInstance_Result (*)(int32_t)>(
    &::UnityEngine::Audio::GeneratorInstance_Result::op_Implicit___UnityEngine__Audio__GeneratorInstance_Result)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6eab7d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_Result>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::Audio::GeneratorInstance_Result::get_processedFrames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_Result>(), { "get_processedFrames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::UnityEngine::Audio::GeneratorInstance_Result UnityEngine::Audio::GeneratorInstance_Result::op_Implicit___UnityEngine__Audio__GeneratorInstance_Result(int32_t processedFrames) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_Result>(), { "op_Implicit", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::GeneratorInstance_Result>(nullptr, ___internal_method, processedFrames);
}
// Ctor Parameters [CppParam { name: "m_ProcessedFrames", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::GeneratorInstance_Result::GeneratorInstance_Result(int32_t m_ProcessedFrames) noexcept {
  this->m_ProcessedFrames = m_ProcessedFrames;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::GeneratorInstance_Result::GeneratorInstance_Result() {}
// Ctor Parameters [CppParam { name: "Speed", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::GeneratorInstance_Arguments::GeneratorInstance_Arguments(float_t Speed) noexcept {
  this->Speed = Speed;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::GeneratorInstance_Arguments::GeneratorInstance_Arguments() {}
template <typename TRealtime>
inline void UnityEngine::Audio::GeneratorInstance_IControl_1<TRealtime>::Configure(::UnityEngine::Audio::ControlContext context, ::by_ref<TRealtime> realtime,
                                                                                   /* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::AudioFormat const> format,
                                                                                   ::by_ref<::UnityEngine::Audio::GeneratorInstance_Setup> setup,
                                                                                   ::by_ref<::UnityEngine::Audio::GeneratorInstance_Properties> properties) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_IControl_1<TRealtime>*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, realtime, format, setup, properties);
}
/// @brief Convert operator to "::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>"
template <typename TRealtime> constexpr UnityEngine::Audio::GeneratorInstance_IControl_1<TRealtime>::operator ::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>*() noexcept {
  return static_cast<::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>"
template <typename TRealtime>
constexpr ::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>*
UnityEngine::Audio::GeneratorInstance_IControl_1<TRealtime>::i___UnityEngine__Audio__ProcessorInstance_IControl_1_TRealtime_() noexcept {
  return static_cast<::UnityEngine::Audio::ProcessorInstance_IControl_1<TRealtime>*>(static_cast<void*>(this));
}
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance_IRealtime.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::GeneratorInstance_Result (::UnityEngine::Audio::GeneratorInstance_IRealtime::*)(
    ::by_ref<::UnityEngine::Audio::RealtimeContext const>, ::UnityEngine::Audio::ProcessorInstance_Pipe, ::UnityEngine::Audio::ChannelBuffer, ::UnityEngine::Audio::GeneratorInstance_Arguments)>(
    &::UnityEngine::Audio::GeneratorInstance_IRealtime::Process)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_IRealtime*>(), { ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_IRealtime*>(), 0 }));
    return ___internal_method;
  }
};
inline ::UnityEngine::Audio::GeneratorInstance_Result UnityEngine::Audio::GeneratorInstance_IRealtime::Process(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::RealtimeContext const> context,
                                                                                                               ::UnityEngine::Audio::ProcessorInstance_Pipe pipe,
                                                                                                               ::UnityEngine::Audio::ChannelBuffer buffer,
                                                                                                               ::UnityEngine::Audio::GeneratorInstance_Arguments args) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance_IRealtime*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::GeneratorInstance_Result>(this, ___internal_method, context, pipe, buffer, args);
}
/// @brief Convert operator to "::UnityEngine::Audio::ProcessorInstance_IRealtime"
constexpr UnityEngine::Audio::GeneratorInstance_IRealtime::operator ::UnityEngine::Audio::ProcessorInstance_IRealtime*() noexcept {
  return static_cast<::UnityEngine::Audio::ProcessorInstance_IRealtime*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Audio::ProcessorInstance_IRealtime"
constexpr ::UnityEngine::Audio::ProcessorInstance_IRealtime* UnityEngine::Audio::GeneratorInstance_IRealtime::i___UnityEngine__Audio__ProcessorInstance_IRealtime() noexcept {
  return static_cast<::UnityEngine::Audio::ProcessorInstance_IRealtime*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Audio::GeneratorInstance_ICapabilities"
constexpr UnityEngine::Audio::GeneratorInstance_IRealtime::operator ::UnityEngine::Audio::GeneratorInstance_ICapabilities*() noexcept {
  return static_cast<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Audio::GeneratorInstance_ICapabilities"
constexpr ::UnityEngine::Audio::GeneratorInstance_ICapabilities* UnityEngine::Audio::GeneratorInstance_IRealtime::i___UnityEngine__Audio__GeneratorInstance_ICapabilities() noexcept {
  return static_cast<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(static_cast<void*>(this));
}
// Ctor Parameters [CppParam { name: "Processor", ty: "::UnityEngine::Audio::ProcessorHeader", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Configuration", ty:
// "::UnityEngine::Audio::GeneratorInstance_Configuration", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::GeneratorInstance_GeneratorHeader::GeneratorInstance_GeneratorHeader(::UnityEngine::Audio::ProcessorHeader Processor,
                                                                                                     ::UnityEngine::Audio::GeneratorInstance_Configuration Configuration) noexcept {
  this->Processor = Processor;
  this->Configuration = Configuration;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::GeneratorInstance_GeneratorHeader::GeneratorInstance_GeneratorHeader() {}
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance.Configure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::GeneratorInstance::*)(::UnityEngine::Audio::ControlContext, ::by_ref<::UnityEngine::Audio::AudioFormat const>)>(
    &::UnityEngine::Audio::GeneratorInstance::Configure)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6eab500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(),
                                                { "Configure", {}, { ::i2c::type_of<::UnityEngine::Audio::ControlContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Audio::AudioFormat const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::GeneratorInstance::*)(::UnityEngine::Audio::ControlContext)>(&::UnityEngine::Audio::GeneratorInstance::Update)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6eab538;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(), { "Update", {}, { ::i2c::type_of<::UnityEngine::Audio::ControlContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance.Process
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::GeneratorInstance_Result (::UnityEngine::Audio::GeneratorInstance::*)(
    ::UnityEngine::Audio::RealtimeContext, ::UnityEngine::Audio::ChannelBuffer, ::UnityEngine::Audio::GeneratorInstance_Arguments)>(&::UnityEngine::Audio::GeneratorInstance::Process)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6eab570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(),
                                                             { "Process",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Audio::RealtimeContext>(), ::i2c::type_of<::UnityEngine::Audio::ChannelBuffer>(),
                                                                 ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance_Arguments>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance.op_Implicit___UnityEngine__Audio__ProcessorInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::ProcessorInstance (*)(::by_ref<::UnityEngine::Audio::GeneratorInstance const>)>(
    &::UnityEngine::Audio::GeneratorInstance::op_Implicit___UnityEngine__Audio__ProcessorInstance)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6eab5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(),
                                                                                           { "op_Implicit", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Audio::GeneratorInstance const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::GeneratorInstance::*)(::UnityEngine::Audio::GeneratorInstance)>(&::UnityEngine::Audio::GeneratorInstance::Equals)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6eab5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::GeneratorInstance::*)(::System::Object*)>(&::UnityEngine::Audio::GeneratorInstance::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6eab614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(), { ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Audio::GeneratorInstance, ::UnityEngine::Audio::GeneratorInstance)>(
    &::UnityEngine::Audio::GeneratorInstance::op_Equality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6eab6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(),
                                                { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance>(), ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Audio::GeneratorInstance, ::UnityEngine::Audio::GeneratorInstance)>(
    &::UnityEngine::Audio::GeneratorInstance::op_Inequality)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6eab6cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(),
                                                { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance>(), ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Audio::GeneratorInstance::*)()>(&::UnityEngine::Audio::GeneratorInstance::GetHashCode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6eab6f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(), { ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::GeneratorInstance._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::GeneratorInstance::*)(::UnityEngine::Audio::GeneratorInstance_GeneratorHeader*)>(
    &::UnityEngine::Audio::GeneratorInstance::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e9f058;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance_GeneratorHeader*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Audio::GeneratorInstance::Configure(::UnityEngine::Audio::ControlContext context, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::AudioFormat const> format) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(),
                                              { "Configure", {}, { ::i2c::type_of<::UnityEngine::Audio::ControlContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Audio::AudioFormat const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, context, format);
}
inline void UnityEngine::Audio::GeneratorInstance::Update(::UnityEngine::Audio::ControlContext context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(), { "Update", {}, { ::i2c::type_of<::UnityEngine::Audio::ControlContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, context);
}
inline ::UnityEngine::Audio::GeneratorInstance_Result UnityEngine::Audio::GeneratorInstance::Process(::UnityEngine::Audio::RealtimeContext context, ::UnityEngine::Audio::ChannelBuffer buffer,
                                                                                                     ::UnityEngine::Audio::GeneratorInstance_Arguments args) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(),
                                                           { "Process",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Audio::RealtimeContext>(), ::i2c::type_of<::UnityEngine::Audio::ChannelBuffer>(),
                                                               ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance_Arguments>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::GeneratorInstance_Result>(*this, ___internal_method, context, buffer, args);
}
inline ::UnityEngine::Audio::ProcessorInstance
UnityEngine::Audio::GeneratorInstance::op_Implicit___UnityEngine__Audio__ProcessorInstance(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Audio::GeneratorInstance const> generatorInstance) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(),
                                                                                         { "op_Implicit", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Audio::GeneratorInstance const>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::ProcessorInstance>(nullptr, ___internal_method, generatorInstance);
}
inline bool UnityEngine::Audio::GeneratorInstance::Equals(::UnityEngine::Audio::GeneratorInstance other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool UnityEngine::Audio::GeneratorInstance::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool UnityEngine::Audio::GeneratorInstance::op_Equality(::UnityEngine::Audio::GeneratorInstance a, ::UnityEngine::Audio::GeneratorInstance b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(),
                                              { "op_Equality", {}, { ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance>(), ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline bool UnityEngine::Audio::GeneratorInstance::op_Inequality(::UnityEngine::Audio::GeneratorInstance a, ::UnityEngine::Audio::GeneratorInstance b) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(),
                                              { "op_Inequality", {}, { ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance>(), ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, a, b);
}
inline int32_t UnityEngine::Audio::GeneratorInstance::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::Audio::GeneratorInstance::_ctor(::UnityEngine::Audio::GeneratorInstance_GeneratorHeader* header) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::GeneratorInstance>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Audio::GeneratorInstance_GeneratorHeader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, header);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Audio::GeneratorInstance>"
constexpr UnityEngine::Audio::GeneratorInstance::operator ::System::IEquatable_1<::UnityEngine::Audio::GeneratorInstance>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Audio::GeneratorInstance>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Audio::GeneratorInstance>"
constexpr ::System::IEquatable_1<::UnityEngine::Audio::GeneratorInstance>* UnityEngine::Audio::GeneratorInstance::i___System__IEquatable_1___UnityEngine__Audio__GeneratorInstance_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Audio::GeneratorInstance>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_ProcessorInstance", ty: "::UnityEngine::Audio::ProcessorInstance", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::Audio::GeneratorInstance::GeneratorInstance(::UnityEngine::Audio::ProcessorInstance m_ProcessorInstance) noexcept {
  this->m_ProcessorInstance = m_ProcessorInstance;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::GeneratorInstance::GeneratorInstance() {}
