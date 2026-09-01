#pragma once
// IWYU pragma private; include "BGNet\Logging\Debug.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGNet/Logging/zzzz__Debug_def.hpp"
#include "BGNet/Logging/zzzz__Debug_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::BGNet::Logging::Debug_LoggerLinkedList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Logging::Debug_LoggerLinkedList::*)(::BGNet::Logging::Debug_ILogger*)>(&::BGNet::Logging::Debug_LoggerLinkedList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3344224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::Debug_LoggerLinkedList*>(), { ".ctor", {}, { ::i2c::type_of<::BGNet::Logging::Debug_ILogger*>() } })));
    return ___internal_method;
  }
};
constexpr ::BGNet::Logging::Debug_ILogger*& BGNet::Logging::Debug_LoggerLinkedList::__cordl_internal_get_logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logger;
}
constexpr ::BGNet::Logging::Debug_ILogger* const& BGNet::Logging::Debug_LoggerLinkedList::__cordl_internal_get_logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___logger;
}
constexpr void BGNet::Logging::Debug_LoggerLinkedList::__cordl_internal_set_logger(::BGNet::Logging::Debug_ILogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___logger = value;
}
constexpr ::BGNet::Logging::Debug_LoggerLinkedList*& BGNet::Logging::Debug_LoggerLinkedList::__cordl_internal_get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr ::BGNet::Logging::Debug_LoggerLinkedList* const& BGNet::Logging::Debug_LoggerLinkedList::__cordl_internal_get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___next;
}
constexpr void BGNet::Logging::Debug_LoggerLinkedList::__cordl_internal_set_next(::BGNet::Logging::Debug_LoggerLinkedList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___next = value;
}
inline void BGNet::Logging::Debug_LoggerLinkedList::_ctor(::BGNet::Logging::Debug_ILogger* logger) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::Debug_LoggerLinkedList*>(), { ".ctor", {}, { ::i2c::type_of<::BGNet::Logging::Debug_ILogger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logger);
}
inline ::BGNet::Logging::Debug_LoggerLinkedList* BGNet::Logging::Debug_LoggerLinkedList::New_ctor(::BGNet::Logging::Debug_ILogger* logger) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGNet::Logging::Debug_LoggerLinkedList*>(logger));
}
// Ctor Parameters []
constexpr ::BGNet::Logging::Debug_LoggerLinkedList::Debug_LoggerLinkedList() {}
//  Writing Method size for method: ::BGNet::Logging::Debug_ILogger.LogInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Logging::Debug_ILogger::*)(::StringW)>(&::BGNet::Logging::Debug_ILogger::LogInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGNet::Logging::Debug_ILogger*>(), { ::i2c::class_of<::BGNet::Logging::Debug_ILogger*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug_ILogger.LogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Logging::Debug_ILogger::*)(::StringW)>(&::BGNet::Logging::Debug_ILogger::LogError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGNet::Logging::Debug_ILogger*>(), { ::i2c::class_of<::BGNet::Logging::Debug_ILogger*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug_ILogger.LogException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Logging::Debug_ILogger::*)(::System::Exception*, ::StringW)>(&::BGNet::Logging::Debug_ILogger::LogException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGNet::Logging::Debug_ILogger*>(), { ::i2c::class_of<::BGNet::Logging::Debug_ILogger*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug_ILogger.LogWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGNet::Logging::Debug_ILogger::*)(::StringW)>(&::BGNet::Logging::Debug_ILogger::LogWarning)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BGNet::Logging::Debug_ILogger*>(), { ::i2c::class_of<::BGNet::Logging::Debug_ILogger*>(), 3 }));
    return ___internal_method;
  }
};
inline void BGNet::Logging::Debug_ILogger::LogInfo(::StringW message) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGNet::Logging::Debug_ILogger*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void BGNet::Logging::Debug_ILogger::LogError(::StringW message) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGNet::Logging::Debug_ILogger*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void BGNet::Logging::Debug_ILogger::LogException(::System::Exception* exception, ::StringW message) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGNet::Logging::Debug_ILogger*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception, message);
}
inline void BGNet::Logging::Debug_ILogger::LogWarning(::StringW message) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BGNet::Logging::Debug_ILogger*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
// Ctor Parameters [CppParam { name: "logger", ty: "::BGNet::Logging::Debug_ILogger*", modifiers: "", def_value: Some("{}") }]
constexpr ::BGNet::Logging::Debug___c__DisplayClass7_0::Debug___c__DisplayClass7_0(::BGNet::Logging::Debug_ILogger* logger) noexcept {
  this->logger = logger;
}
// Ctor Parameters []
constexpr ::BGNet::Logging::Debug___c__DisplayClass7_0::Debug___c__DisplayClass7_0() {}
//  Writing Method size for method: ::BGNet::Logging::Debug.NoDomainReloadInit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BGNet::Logging::Debug::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3343fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::Debug*>(), { "NoDomainReloadInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.AddLogger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BGNet::Logging::Debug_ILogger*)>(&::BGNet::Logging::Debug::AddLogger)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x334405c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::Debug*>(), { "AddLogger", {}, { ::i2c::type_of<::BGNet::Logging::Debug_ILogger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.RemoveAndDisposeLogger
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::BGNet::Logging::Debug_ILogger*)>(&::BGNet::Logging::Debug::RemoveAndDisposeLogger)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x334422c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::Debug*>(), { "RemoveAndDisposeLogger", {}, { ::i2c::type_of<::BGNet::Logging::Debug_ILogger*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.Log
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::BGNet::Logging::Debug::Log)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3344524;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::Debug*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.LogError
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::BGNet::Logging::Debug::LogError)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3344620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::Debug*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.LogException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Exception*, ::StringW)>(&::BGNet::Logging::Debug::LogException)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3344720;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::Debug*>(), { "LogException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.LogWarning
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW)>(&::BGNet::Logging::Debug::LogWarning)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x3344828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::Debug*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.ClearAllLoggers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::BGNet::Logging::Debug::ClearAllLoggers)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3344928;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::Debug*>(), { "ClearAllLoggers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug._RemoveAndDisposeLogger_g__DisposeLogger_7_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::BGNet::Logging::Debug___c__DisplayClass7_0>)>(&::BGNet::Logging::Debug::_RemoveAndDisposeLogger_g__DisposeLogger_7_0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x334446c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::Debug*>(),
                                                             { "<RemoveAndDisposeLogger>g__DisposeLogger|7_0", {}, { ::i2c::type_of<::by_ref<::BGNet::Logging::Debug___c__DisplayClass7_0>>() } })));
    return ___internal_method;
  }
};
inline void BGNet::Logging::Debug::setStaticF__loggersMutex(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "_loggersMutex", ::BGNet::Logging::Debug*>(std::forward<::System::Object*>(value));
}
inline ::System::Object* BGNet::Logging::Debug::getStaticF__loggersMutex() {
  return ::cordl_internals::getStaticField<::System::Object*, "_loggersMutex", ::BGNet::Logging::Debug*>();
}
inline void BGNet::Logging::Debug::setStaticF__loggers(::BGNet::Logging::Debug_LoggerLinkedList* value) {
  ::cordl_internals::setStaticField<::BGNet::Logging::Debug_LoggerLinkedList*, "_loggers", ::BGNet::Logging::Debug*>(std::forward<::BGNet::Logging::Debug_LoggerLinkedList*>(value));
}
inline ::BGNet::Logging::Debug_LoggerLinkedList* BGNet::Logging::Debug::getStaticF__loggers() {
  return ::cordl_internals::getStaticField<::BGNet::Logging::Debug_LoggerLinkedList*, "_loggers", ::BGNet::Logging::Debug*>();
}
inline void BGNet::Logging::Debug::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::Debug*>(), { "NoDomainReloadInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void BGNet::Logging::Debug::AddLogger(::BGNet::Logging::Debug_ILogger* logger) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::Debug*>(), { "AddLogger", {}, { ::i2c::type_of<::BGNet::Logging::Debug_ILogger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, logger);
}
inline void BGNet::Logging::Debug::RemoveAndDisposeLogger(::BGNet::Logging::Debug_ILogger* logger) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::Debug*>(), { "RemoveAndDisposeLogger", {}, { ::i2c::type_of<::BGNet::Logging::Debug_ILogger*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, logger);
}
inline void BGNet::Logging::Debug::Log(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::Debug*>(), { "Log", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void BGNet::Logging::Debug::LogError(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::Debug*>(), { "LogError", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void BGNet::Logging::Debug::LogException(::System::Exception* exception, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::Debug*>(), { "LogException", {}, { ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, exception, message);
}
inline void BGNet::Logging::Debug::LogWarning(::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::Debug*>(), { "LogWarning", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, message);
}
inline void BGNet::Logging::Debug::ClearAllLoggers() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::Debug*>(), { "ClearAllLoggers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void BGNet::Logging::Debug::_RemoveAndDisposeLogger_g__DisposeLogger_7_0(::by_ref<::BGNet::Logging::Debug___c__DisplayClass7_0> _cordl_fixed_empty_name_whitespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGNet::Logging::Debug*>(),
                                                           { "<RemoveAndDisposeLogger>g__DisposeLogger|7_0", {}, { ::i2c::type_of<::by_ref<::BGNet::Logging::Debug___c__DisplayClass7_0>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
// Ctor Parameters []
constexpr ::BGNet::Logging::Debug::Debug() {}
