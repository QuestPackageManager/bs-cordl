#pragma once
// IWYU pragma private; include "GlobalNamespace\ListLogger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ListLogger_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberLogger_def.hpp"
#include "GlobalNamespace/zzzz__ListLogger_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ListLogger_LogType::ListLogger_LogType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ListLogger_LogType::ListLogger_LogType() {}
constexpr ::GlobalNamespace::ListLogger_LogType GlobalNamespace::ListLogger_LogType::Info{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::ListLogger_LogType GlobalNamespace::ListLogger_LogType::Warning{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::ListLogger_LogType GlobalNamespace::ListLogger_LogType::Error{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::ListLogger_LogType GlobalNamespace::ListLogger_LogType::Exception{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::ListLogger_LogMessage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ListLogger_LogMessage::*)(::GlobalNamespace::ListLogger_LogType, ::StringW, ::System::Object*)>(
    &::GlobalNamespace::ListLogger_LogMessage::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58e5e50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListLogger_LogMessage*>(),
                                                { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::ListLogger_LogType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListLogger_LogMessage.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::ListLogger_LogMessage::*)()>(&::GlobalNamespace::ListLogger_LogMessage::ToString)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x58e6148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListLogger_LogMessage*>(), { ::i2c::class_of<::GlobalNamespace::ListLogger_LogMessage*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ListLogger_LogType& GlobalNamespace::ListLogger_LogMessage::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::GlobalNamespace::ListLogger_LogType const& GlobalNamespace::ListLogger_LogMessage::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void GlobalNamespace::ListLogger_LogMessage::__cordl_internal_set_type(::GlobalNamespace::ListLogger_LogType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::StringW& GlobalNamespace::ListLogger_LogMessage::__cordl_internal_get_message() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message;
}
constexpr ::StringW const& GlobalNamespace::ListLogger_LogMessage::__cordl_internal_get_message() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___message;
}
constexpr void GlobalNamespace::ListLogger_LogMessage::__cordl_internal_set_message(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___message = value;
}
constexpr ::System::Object*& GlobalNamespace::ListLogger_LogMessage::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::System::Object* const& GlobalNamespace::ListLogger_LogMessage::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void GlobalNamespace::ListLogger_LogMessage::__cordl_internal_set_context(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context = value;
}
inline void GlobalNamespace::ListLogger_LogMessage::_ctor(::GlobalNamespace::ListLogger_LogType type, ::StringW message, ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListLogger_LogMessage*>(),
                                              { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::ListLogger_LogType>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, message, context);
}
inline ::StringW GlobalNamespace::ListLogger_LogMessage::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ListLogger_LogMessage*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::GlobalNamespace::ListLogger_LogMessage* GlobalNamespace::ListLogger_LogMessage::New_ctor(::GlobalNamespace::ListLogger_LogType type, ::StringW message, ::System::Object* context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ListLogger_LogMessage*>(type, message, context));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ListLogger_LogMessage::ListLogger_LogMessage() {}
//  Writing Method size for method: ::GlobalNamespace::ListLogger.get_messages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::ListLogger_LogMessage*>* (::GlobalNamespace::ListLogger::*)()>(
    &::GlobalNamespace::ListLogger::get_messages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e5ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListLogger*>(), { "get_messages", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListLogger._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ListLogger::*)()>(&::GlobalNamespace::ListLogger::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x58e5cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListLogger*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListLogger.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ListLogger::*)(::StringW)>(&::GlobalNamespace::ListLogger::Log)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e5d64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListLogger*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListLogger.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ListLogger::*)(::StringW, ::System::Object*)>(&::GlobalNamespace::ListLogger::Log)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x58e5d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListLogger*>(), { "Log", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListLogger.LogWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ListLogger::*)(::StringW)>(&::GlobalNamespace::ListLogger::LogWarning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e5e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListLogger*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListLogger.LogWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ListLogger::*)(::StringW, ::System::Object*)>(&::GlobalNamespace::ListLogger::LogWarning)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x58e5e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListLogger*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListLogger.LogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ListLogger::*)(::StringW)>(&::GlobalNamespace::ListLogger::LogError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e5f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListLogger*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListLogger.LogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ListLogger::*)(::StringW, ::System::Object*)>(&::GlobalNamespace::ListLogger::LogError)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x58e5f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListLogger*>(), { "LogError", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListLogger.LogException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ListLogger::*)(::System::Exception*)>(&::GlobalNamespace::ListLogger::LogException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58e603c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListLogger*>(), { "LogException", {}, { ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListLogger.LogException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ListLogger::*)(::System::Exception*, ::System::Object*)>(&::GlobalNamespace::ListLogger::LogException)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x58e6044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListLogger*>(), { "LogException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ListLogger_LogMessage*>*& GlobalNamespace::ListLogger::__cordl_internal_get__messages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messages;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ListLogger_LogMessage*>* const& GlobalNamespace::ListLogger::__cordl_internal_get__messages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____messages;
}
constexpr void GlobalNamespace::ListLogger::__cordl_internal_set__messages(::System::Collections::Generic::List_1<::GlobalNamespace::ListLogger_LogMessage*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____messages = value;
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::ListLogger_LogMessage*>* GlobalNamespace::ListLogger::get_messages() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListLogger*>(), { "get_messages", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::ListLogger_LogMessage*>*>(this, ___internal_method);
}
inline void GlobalNamespace::ListLogger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListLogger*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ListLogger::Log(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListLogger*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::ListLogger::Log(::StringW message, ::System::Object* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListLogger*>(), { "Log", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, context);
}
inline void GlobalNamespace::ListLogger::LogWarning(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListLogger*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::ListLogger::LogWarning(::StringW message, ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListLogger*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, context);
}
inline void GlobalNamespace::ListLogger::LogError(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListLogger*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void GlobalNamespace::ListLogger::LogError(::StringW message, ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListLogger*>(), { "LogError", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, context);
}
inline void GlobalNamespace::ListLogger::LogException(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListLogger*>(), { "LogException", {}, { ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception);
}
inline void GlobalNamespace::ListLogger::LogException(::System::Exception* exception, ::System::Object* context) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ListLogger*>(), { "LogException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception, context);
}
inline ::GlobalNamespace::ListLogger* GlobalNamespace::ListLogger::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ListLogger*>());
}
/// @brief Convert operator to "::GlobalNamespace::IBeatSaberLogger"
constexpr GlobalNamespace::ListLogger::operator ::GlobalNamespace::IBeatSaberLogger*() noexcept {
  return static_cast<::GlobalNamespace::IBeatSaberLogger*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IBeatSaberLogger"
constexpr ::GlobalNamespace::IBeatSaberLogger* GlobalNamespace::ListLogger::i___GlobalNamespace__IBeatSaberLogger() noexcept {
  return static_cast<::GlobalNamespace::IBeatSaberLogger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ListLogger::ListLogger() {}
