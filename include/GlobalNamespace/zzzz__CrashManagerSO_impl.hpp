#pragma once
// IWYU pragma private; include "GlobalNamespace/CrashManagerSO.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__CrashManagerSO_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CrashManagerSO.get_logString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CrashManagerSO::*)()>(&::GlobalNamespace::CrashManagerSO::get_logString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a213e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrashManagerSO*>(), { "get_logString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrashManagerSO.get_stackTrace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::CrashManagerSO::*)()>(&::GlobalNamespace::CrashManagerSO::get_stackTrace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a213ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrashManagerSO*>(), { "get_stackTrace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrashManagerSO.StartCatchingExceptions
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrashManagerSO::*)()>(&::GlobalNamespace::CrashManagerSO::StartCatchingExceptions)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5a213f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrashManagerSO*>(), { "StartCatchingExceptions", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrashManagerSO.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrashManagerSO::*)()>(&::GlobalNamespace::CrashManagerSO::OnDisable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5a2149c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrashManagerSO*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrashManagerSO.HandleLog
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrashManagerSO::*)(::StringW, ::StringW, ::UnityEngine::LogType)>(&::GlobalNamespace::CrashManagerSO::HandleLog)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5a21544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrashManagerSO*>(),
                                                             { "HandleLog", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CrashManagerSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::CrashManagerSO::*)()>(&::GlobalNamespace::CrashManagerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a21614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrashManagerSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::CrashManagerSO::__cordl_internal_get__logString() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logString;
}
constexpr ::StringW const& GlobalNamespace::CrashManagerSO::__cordl_internal_get__logString() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____logString;
}
constexpr void GlobalNamespace::CrashManagerSO::__cordl_internal_set__logString(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____logString = value;
}
constexpr ::StringW& GlobalNamespace::CrashManagerSO::__cordl_internal_get__stackTrace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stackTrace;
}
constexpr ::StringW const& GlobalNamespace::CrashManagerSO::__cordl_internal_get__stackTrace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____stackTrace;
}
constexpr void GlobalNamespace::CrashManagerSO::__cordl_internal_set__stackTrace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____stackTrace = value;
}
inline ::StringW GlobalNamespace::CrashManagerSO::get_logString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrashManagerSO*>(), { "get_logString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::CrashManagerSO::get_stackTrace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrashManagerSO*>(), { "get_stackTrace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::CrashManagerSO::StartCatchingExceptions() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrashManagerSO*>(), { "StartCatchingExceptions", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrashManagerSO::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrashManagerSO*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::CrashManagerSO::HandleLog(::StringW logString, ::StringW stackTrace, ::UnityEngine::LogType type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrashManagerSO*>(),
                                                           { "HandleLog", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::LogType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logString, stackTrace, type);
}
inline void GlobalNamespace::CrashManagerSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::CrashManagerSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::CrashManagerSO* GlobalNamespace::CrashManagerSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::CrashManagerSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CrashManagerSO::CrashManagerSO() {}
