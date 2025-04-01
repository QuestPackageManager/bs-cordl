#pragma once
// IWYU pragma private; include "GlobalNamespace/ListLogger.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberLogger_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__ListLogger_def.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::ListLogger_LogMessage::*)(::GlobalNamespace::ListLogger_LogType, ::StringW, ::System::Object*)>(&::GlobalNamespace::ListLogger_LogMessage::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3b12ba8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger_LogMessage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ListLogger_LogType>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListLogger_LogMessage.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::ListLogger_LogMessage::*)()>(&::GlobalNamespace::ListLogger_LogMessage::ToString)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x3b12edc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger_LogMessage*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger_LogMessage*>::get(), 3));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___message)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___context)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ListLogger_LogMessage::_ctor(::GlobalNamespace::ListLogger_LogType type, ::StringW message, ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger_LogMessage*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ListLogger_LogType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type, message, context);
}
inline ::StringW GlobalNamespace::ListLogger_LogMessage::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger_LogMessage*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ListLogger_LogMessage* GlobalNamespace::ListLogger_LogMessage::New_ctor(::GlobalNamespace::ListLogger_LogType type, ::StringW message, ::System::Object* context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ListLogger_LogMessage*>(type, message, context));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ListLogger_LogMessage::ListLogger_LogMessage() {}
//  Writing Method size for method: ::GlobalNamespace::ListLogger.get_messages
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::ListLogger_LogMessage*>* (::GlobalNamespace::ListLogger::*)()>(&::GlobalNamespace::ListLogger::get_messages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b12a30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger*>::get(), "get_messages",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListLogger._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ListLogger::*)()>(&::GlobalNamespace::ListLogger::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3b12a38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListLogger.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ListLogger::*)(::StringW)>(&::GlobalNamespace::ListLogger::Log)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b12ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListLogger.Log
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ListLogger::*)(::StringW, ::System::Object*)>(&::GlobalNamespace::ListLogger::Log)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x3b12ac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListLogger.LogWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ListLogger::*)(::StringW)>(&::GlobalNamespace::ListLogger::LogWarning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b12be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger*>::get(), "LogWarning", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListLogger.LogWarning
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ListLogger::*)(::StringW, ::System::Object*)>(&::GlobalNamespace::ListLogger::LogWarning)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3b12bec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger*>::get(), "LogWarning", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListLogger.LogError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ListLogger::*)(::StringW)>(&::GlobalNamespace::ListLogger::LogError)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b12cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger*>::get(), "LogError", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListLogger.LogError
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ListLogger::*)(::StringW, ::System::Object*)>(&::GlobalNamespace::ListLogger::LogError)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3b12ce0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger*>::get(), "LogError", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListLogger.LogException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ListLogger::*)(::System::Exception*)>(&::GlobalNamespace::ListLogger::LogException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3b12dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger*>::get(), "LogException", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ListLogger.LogException
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ListLogger::*)(::System::Exception*, ::System::Object*)>(
    &::GlobalNamespace::ListLogger::LogException)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3b12dd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger*>::get(), "LogException", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____messages)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::ListLogger_LogMessage*>* GlobalNamespace::ListLogger::get_messages() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger*>::get(), "get_messages",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::ListLogger_LogMessage*>*, false>(this, ___internal_method);
}
inline void GlobalNamespace::ListLogger::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::ListLogger::Log(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void GlobalNamespace::ListLogger::Log(::StringW message, ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger*>::get(), "Log", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, context);
}
inline void GlobalNamespace::ListLogger::LogWarning(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger*>::get(), "LogWarning", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void GlobalNamespace::ListLogger::LogWarning(::StringW message, ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger*>::get(), "LogWarning", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, context);
}
inline void GlobalNamespace::ListLogger::LogError(::StringW message) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger*>::get(), "LogError", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message);
}
inline void GlobalNamespace::ListLogger::LogError(::StringW message, ::System::Object* context) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger*>::get(), "LogError", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, message, context);
}
inline void GlobalNamespace::ListLogger::LogException(::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger*>::get(), "LogException", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception);
}
inline void GlobalNamespace::ListLogger::LogException(::System::Exception* exception, ::System::Object* context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ListLogger*>::get(), "LogException", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, exception, context);
}
inline ::GlobalNamespace::ListLogger* GlobalNamespace::ListLogger::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::ListLogger*>());
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
