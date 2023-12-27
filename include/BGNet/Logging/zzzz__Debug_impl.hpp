#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BGNet/Logging/zzzz__Debug_def.hpp"
#include "BGNet/Logging/zzzz__Debug_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::BGNet::Logging::__Debug__LoggerLinkedList._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::__Debug__LoggerLinkedList::*)(::BGNet::Logging::__Debug__ILogger*)>(
    &::BGNet::Logging::__Debug__LoggerLinkedList::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe61608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::__Debug__LoggerLinkedList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Logging::__Debug__ILogger*>::get() })));
    return ___internal_method;
  }
};
constexpr ::BGNet::Logging::__Debug__ILogger*& BGNet::Logging::__Debug__LoggerLinkedList::__get_logger() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___logger;
}
constexpr ::cordl_internals::to_const_pointer<::BGNet::Logging::__Debug__ILogger*> const& BGNet::Logging::__Debug__LoggerLinkedList::__get_logger() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___logger;
}
constexpr void BGNet::Logging::__Debug__LoggerLinkedList::__set_logger(::BGNet::Logging::__Debug__ILogger* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___logger)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BGNet::Logging::__Debug__LoggerLinkedList*& BGNet::Logging::__Debug__LoggerLinkedList::__get_next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___next;
}
constexpr ::cordl_internals::to_const_pointer<::BGNet::Logging::__Debug__LoggerLinkedList*> const& BGNet::Logging::__Debug__LoggerLinkedList::__get_next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___next;
}
constexpr void BGNet::Logging::__Debug__LoggerLinkedList::__set_next(::BGNet::Logging::__Debug__LoggerLinkedList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::BGNet::Logging::__Debug__LoggerLinkedList* BGNet::Logging::__Debug__LoggerLinkedList::New_ctor(::BGNet::Logging::__Debug__ILogger* logger) {
  return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Logging::__Debug__LoggerLinkedList*>(logger));
}
inline void BGNet::Logging::__Debug__LoggerLinkedList::_ctor(::BGNet::Logging::__Debug__ILogger* logger) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::__Debug__LoggerLinkedList*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Logging::__Debug__ILogger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, logger);
}
// Ctor Parameters []
constexpr ::BGNet::Logging::__Debug__LoggerLinkedList::__Debug__LoggerLinkedList() {}
//  Writing Method size for method: ::BGNet::Logging::__Debug__ILogger.LogInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::__Debug__ILogger::*)(::StringW)>(&::BGNet::Logging::__Debug__ILogger::LogInfo)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::__Debug__ILogger*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::__Debug__ILogger*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::__Debug__ILogger.LogError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::__Debug__ILogger::*)(::StringW)>(&::BGNet::Logging::__Debug__ILogger::LogError)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::__Debug__ILogger*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::__Debug__ILogger*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::__Debug__ILogger.LogException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::__Debug__ILogger::*)(::System::Exception*, ::StringW)>(
    &::BGNet::Logging::__Debug__ILogger::LogException)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::__Debug__ILogger*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::__Debug__ILogger*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::__Debug__ILogger.LogWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Logging::__Debug__ILogger::*)(::StringW)>(&::BGNet::Logging::__Debug__ILogger::LogWarning)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::__Debug__ILogger*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::__Debug__ILogger*>::get(), 3));
    return ___internal_method;
  }
};
inline void BGNet::Logging::__Debug__ILogger::LogInfo(::StringW message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::__Debug__ILogger*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void BGNet::Logging::__Debug__ILogger::LogError(::StringW message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::__Debug__ILogger*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void BGNet::Logging::__Debug__ILogger::LogException(::System::Exception* exception, ::StringW message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::__Debug__ILogger*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception, message);
}
inline void BGNet::Logging::__Debug__ILogger::LogWarning(::StringW message) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::__Debug__ILogger*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
//  Writing Method size for method: ::BGNet::Logging::Debug.NoDomainReloadInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::BGNet::Logging::Debug::NoDomainReloadInit)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xe61380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "NoDomainReloadInit",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.AddLogger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGNet::Logging::__Debug__ILogger*)>(&::BGNet::Logging::Debug::AddLogger)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xe61418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "AddLogger", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Logging::__Debug__ILogger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.RemoveLogger
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::BGNet::Logging::__Debug__ILogger*)>(&::BGNet::Logging::Debug::RemoveLogger)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xe61630;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "RemoveLogger", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Logging::__Debug__ILogger*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::BGNet::Logging::Debug::Log)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xe6187c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "Log", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.LogError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::BGNet::Logging::Debug::LogError)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xe61970;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "LogError", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.LogException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Exception*, ::StringW)>(&::BGNet::Logging::Debug::LogException)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xe61a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "LogException", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Logging::Debug.LogWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW)>(&::BGNet::Logging::Debug::LogWarning)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xe61b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "LogWarning", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void BGNet::Logging::Debug::setStaticF__loggersMutex(::System::Object* value) {
  ::cordl_internals::setStaticField<::System::Object*, "_loggersMutex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get>(std::forward<::System::Object*>(value));
}
inline ::System::Object* BGNet::Logging::Debug::getStaticF__loggersMutex() {
  return ::cordl_internals::getStaticField<::System::Object*, "_loggersMutex", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get>();
}
inline void BGNet::Logging::Debug::setStaticF__loggers(::BGNet::Logging::__Debug__LoggerLinkedList* value) {
  ::cordl_internals::setStaticField<::BGNet::Logging::__Debug__LoggerLinkedList*, "_loggers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get>(
      std::forward<::BGNet::Logging::__Debug__LoggerLinkedList*>(value));
}
inline ::BGNet::Logging::__Debug__LoggerLinkedList* BGNet::Logging::Debug::getStaticF__loggers() {
  return ::cordl_internals::getStaticField<::BGNet::Logging::__Debug__LoggerLinkedList*, "_loggers", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get>();
}
inline void BGNet::Logging::Debug::NoDomainReloadInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "NoDomainReloadInit",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void BGNet::Logging::Debug::AddLogger(::BGNet::Logging::__Debug__ILogger* logger) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "AddLogger", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Logging::__Debug__ILogger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, logger);
}
inline void BGNet::Logging::Debug::RemoveLogger(::BGNet::Logging::__Debug__ILogger* logger) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "RemoveLogger", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGNet::Logging::__Debug__ILogger*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, logger);
}
inline void BGNet::Logging::Debug::Log(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "Log", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
inline void BGNet::Logging::Debug::LogError(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "LogError", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
/// @param message: ::StringW (default: nullptr)
inline void BGNet::Logging::Debug::LogException(::System::Exception* exception, ::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "LogException", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                                 ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, exception, message);
}
inline void BGNet::Logging::Debug::LogWarning(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Logging::Debug*>::get(), "LogWarning", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, message);
}
// Ctor Parameters []
constexpr ::BGNet::Logging::Debug::Debug() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
