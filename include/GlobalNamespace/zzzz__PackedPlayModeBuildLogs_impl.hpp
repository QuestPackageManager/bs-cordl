#pragma once
// IWYU pragma private; include "GlobalNamespace\PackedPlayModeBuildLogs.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LogType_impl.hpp"
#include "GlobalNamespace/zzzz__PackedPlayModeBuildLogs_def.hpp"
#include "GlobalNamespace/zzzz__PackedPlayModeBuildLogs_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__LogType_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog::*)(::UnityEngine::LogType, ::StringW)>(
    &::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x644a038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog::_ctor(::UnityEngine::LogType type, ::StringW message) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::LogType>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, type, message);
}
// Ctor Parameters [CppParam { name: "Type", ty: "::UnityEngine::LogType", modifiers: "", def_value: Some("{}") }, CppParam { name: "Message", ty: "::StringW", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog::PackedPlayModeBuildLogs_RuntimeBuildLog(::UnityEngine::LogType Type, ::StringW Message) noexcept {
  this->Type = Type;
  this->Message = Message;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog::PackedPlayModeBuildLogs_RuntimeBuildLog() {}
//  Writing Method size for method: ::GlobalNamespace::PackedPlayModeBuildLogs.get_RuntimeBuildLogs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>* (
    ::GlobalNamespace::PackedPlayModeBuildLogs::*)()>(&::GlobalNamespace::PackedPlayModeBuildLogs::get_RuntimeBuildLogs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6449fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackedPlayModeBuildLogs*>(), { "get_RuntimeBuildLogs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackedPlayModeBuildLogs.set_RuntimeBuildLogs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackedPlayModeBuildLogs::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>*)>(&::GlobalNamespace::PackedPlayModeBuildLogs::set_RuntimeBuildLogs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6449fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackedPlayModeBuildLogs*>(),
                                         { "set_RuntimeBuildLogs", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PackedPlayModeBuildLogs._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PackedPlayModeBuildLogs::*)()>(&::GlobalNamespace::PackedPlayModeBuildLogs::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6449fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackedPlayModeBuildLogs*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>*& GlobalNamespace::PackedPlayModeBuildLogs::__cordl_internal_get_m_RuntimeBuildLogs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RuntimeBuildLogs;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>* const&
GlobalNamespace::PackedPlayModeBuildLogs::__cordl_internal_get_m_RuntimeBuildLogs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RuntimeBuildLogs;
}
constexpr void
GlobalNamespace::PackedPlayModeBuildLogs::__cordl_internal_set_m_RuntimeBuildLogs(::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RuntimeBuildLogs = value;
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>* GlobalNamespace::PackedPlayModeBuildLogs::get_RuntimeBuildLogs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackedPlayModeBuildLogs*>(), { "get_RuntimeBuildLogs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>*>(this, ___internal_method);
}
inline void GlobalNamespace::PackedPlayModeBuildLogs::set_RuntimeBuildLogs(::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackedPlayModeBuildLogs*>(),
                                       { "set_RuntimeBuildLogs", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::PackedPlayModeBuildLogs_RuntimeBuildLog>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PackedPlayModeBuildLogs::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PackedPlayModeBuildLogs*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PackedPlayModeBuildLogs* GlobalNamespace::PackedPlayModeBuildLogs::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PackedPlayModeBuildLogs*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PackedPlayModeBuildLogs::PackedPlayModeBuildLogs() {}
