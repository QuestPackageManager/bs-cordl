#pragma once
// IWYU pragma private; include "BGNet/Logging/Debug.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGNet/Logging/zzzz__Debug_def.hpp"
#include "BGNet/Logging/zzzz__Debug_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::BGNet::Logging::Debug_LoggerLinkedList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::Debug_LoggerLinkedList::*)(::BGNet::Logging::Debug_ILogger*)>(
    &::BGNet::Logging::Debug_LoggerLinkedList::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22f0c94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug_LoggerLinkedList*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Logging::Debug_ILogger*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BGNet::Logging::Debug_LoggerLinkedList::_ctor(::BGNet::Logging::Debug_ILogger* logger) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug_LoggerLinkedList*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Logging::Debug_ILogger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, logger);
}
inline ::BGNet::Logging::Debug_LoggerLinkedList* BGNet::Logging::Debug_LoggerLinkedList::New_ctor(::BGNet::Logging::Debug_ILogger* logger) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGNet::Logging::Debug_LoggerLinkedList*>(logger));
}
// Ctor Parameters []
constexpr ::BGNet::Logging::Debug_LoggerLinkedList::Debug_LoggerLinkedList() {}
//  Writing Method size for method: ::BGNet::Logging::Debug_ILogger.LogInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::Debug_ILogger::*)(::StringW)>(&::BGNet::Logging::Debug_ILogger::LogInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug_ILogger*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug_ILogger*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug_ILogger.LogError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::Debug_ILogger::*)(::StringW)>(&::BGNet::Logging::Debug_ILogger::LogError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug_ILogger*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug_ILogger*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug_ILogger.LogException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::Debug_ILogger::*)(::System::Exception*, ::StringW)>(
    &::BGNet::Logging::Debug_ILogger::LogException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug_ILogger*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug_ILogger*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug_ILogger.LogWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::Debug_ILogger::*)(::StringW)>(&::BGNet::Logging::Debug_ILogger::LogWarning)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug_ILogger*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug_ILogger*>::get(), 3));
    return ___internal_method;
  }
};
inline void BGNet::Logging::Debug_ILogger::LogInfo(::StringW message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug_ILogger*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void BGNet::Logging::Debug_ILogger::LogError(::StringW message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug_ILogger*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void BGNet::Logging::Debug_ILogger::LogException(::System::Exception* exception, ::StringW message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug_ILogger*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception, message);
}
inline void BGNet::Logging::Debug_ILogger::LogWarning(::StringW message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug_ILogger*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
//  Writing Method size for method: ::BGNet::Logging::Debug.NoDomainReloadInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::BGNet::Logging::Debug::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x22f0a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "NoDomainReloadInit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.AddLogger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGNet::Logging::Debug_ILogger*)>(&::BGNet::Logging::Debug::AddLogger)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x22f0abc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "AddLogger", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Logging::Debug_ILogger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.RemoveLogger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGNet::Logging::Debug_ILogger*)>(&::BGNet::Logging::Debug::RemoveLogger)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x22f0cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "RemoveLogger", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Logging::Debug_ILogger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::BGNet::Logging::Debug::Log)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x22f0f04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.LogError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::BGNet::Logging::Debug::LogError)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x22f0ff8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "LogError", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.LogException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Exception*, ::StringW)>(&::BGNet::Logging::Debug::LogException)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x22f10f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "LogException", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.LogWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::BGNet::Logging::Debug::LogWarning)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x22f11f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "LogWarning", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void BGNet::Logging::Debug::setStaticF__loggersMutex(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "_loggersMutex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* BGNet::Logging::Debug::getStaticF__loggersMutex() {
  return ::cordl_internals::getStaticField<::System::Object*, "_loggersMutex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get>();
}
inline void BGNet::Logging::Debug::setStaticF__loggers(::BGNet::Logging::Debug_LoggerLinkedList* value) {
  ::cordl_internals::setStaticField<::BGNet::Logging::Debug_LoggerLinkedList*, "_loggers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get>(
      std::forward<::BGNet::Logging::Debug_LoggerLinkedList*>(value));
}
inline ::BGNet::Logging::Debug_LoggerLinkedList* BGNet::Logging::Debug::getStaticF__loggers() {
  return ::cordl_internals::getStaticField<::BGNet::Logging::Debug_LoggerLinkedList*, "_loggers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get>();
}
inline void BGNet::Logging::Debug::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "NoDomainReloadInit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void BGNet::Logging::Debug::AddLogger(::BGNet::Logging::Debug_ILogger* logger) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "AddLogger", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Logging::Debug_ILogger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, logger);
}
inline void BGNet::Logging::Debug::RemoveLogger(::BGNet::Logging::Debug_ILogger* logger) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "RemoveLogger", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Logging::Debug_ILogger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, logger);
}
inline void BGNet::Logging::Debug::Log(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
inline void BGNet::Logging::Debug::LogError(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "LogError", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
inline void BGNet::Logging::Debug::LogException(::System::Exception* exception, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "LogException", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, exception, message);
}
inline void BGNet::Logging::Debug::LogWarning(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "LogWarning", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::BGNet::Logging::Debug::Debug() {}
