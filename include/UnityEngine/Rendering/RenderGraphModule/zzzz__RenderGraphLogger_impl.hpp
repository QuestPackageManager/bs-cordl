#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/RenderGraphLogger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraphLogger_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::*)(::StringW)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::Initialize)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x67dad90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*>(), { "Initialize", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger.IncrementIndentation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::IncrementIndentation)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x67dac38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*>(), { "IncrementIndentation", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger.DecrementIndentation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::*)(int32_t)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::DecrementIndentation)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x67dad18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*>(), { "DecrementIndentation", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger.LogLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::*)(::StringW, ::ArrayW<::System::Object*>)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::LogLine)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x67dae90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*>(),
                                                                                           { "LogLine", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger.GetLog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::*)(::StringW)>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::GetLog)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x67daf20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*>(), { "GetLog", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger.GetAllLogs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::GetAllLogs)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x67dafd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*>(), { "GetAllLogs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::*)()>(
    &::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::_ctor)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x67db184;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Text::StringBuilder*>*& UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::__cordl_internal_get_m_LogMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LogMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::System::Text::StringBuilder*>* const&
UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::__cordl_internal_get_m_LogMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_LogMap;
}
constexpr void
UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::__cordl_internal_set_m_LogMap(::System::Collections::Generic::Dictionary_2<::StringW, ::System::Text::StringBuilder*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_LogMap = value;
}
constexpr ::System::Text::StringBuilder*& UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::__cordl_internal_get_m_CurrentBuilder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentBuilder;
}
constexpr ::System::Text::StringBuilder* const& UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::__cordl_internal_get_m_CurrentBuilder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentBuilder;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::__cordl_internal_set_m_CurrentBuilder(::System::Text::StringBuilder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentBuilder = value;
}
constexpr int32_t& UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::__cordl_internal_get_m_CurrentIndentation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentIndentation;
}
constexpr int32_t const& UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::__cordl_internal_get_m_CurrentIndentation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CurrentIndentation;
}
constexpr void UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::__cordl_internal_set_m_CurrentIndentation(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CurrentIndentation = value;
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::Initialize(::StringW logName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*>(), { "Initialize", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logName);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::IncrementIndentation(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*>(), { "IncrementIndentation", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::DecrementIndentation(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*>(), { "DecrementIndentation", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::LogLine(::StringW format, ::ArrayW<::System::Object*> args) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*>(),
                                                                                         { "LogLine", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, format, args);
}
inline ::StringW UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::GetLog(::StringW logName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*>(), { "GetLog", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, logName);
}
inline ::StringW UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::GetAllLogs() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*>(), { "GetAllLogs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger* UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RenderGraphModule::RenderGraphLogger::RenderGraphLogger() {}
