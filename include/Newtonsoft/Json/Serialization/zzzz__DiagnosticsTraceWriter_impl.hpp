#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/DiagnosticsTraceWriter.hpp"
#include "System/Diagnostics/zzzz__TraceLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__DiagnosticsTraceWriter_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ITraceWriter_def.hpp"
#include "System/Diagnostics/zzzz__TraceEventType_def.hpp"
#include "System/Diagnostics/zzzz__TraceLevel_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter.get_LevelFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::TraceLevel (::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::*)()>(
    &::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::get_LevelFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e6ea4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>::get(), "get_LevelFilter",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter.set_LevelFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::*)(::System::Diagnostics::TraceLevel)>(
    &::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::set_LevelFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e6ea54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>::get(), "set_LevelFilter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceLevel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter.GetTraceEventType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Diagnostics::TraceEventType (::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::*)(
    ::System::Diagnostics::TraceLevel)>(&::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::GetTraceEventType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3e6ea5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>::get(), "GetTraceEventType", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceLevel>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter.Trace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::*)(
    ::System::Diagnostics::TraceLevel, ::StringW, ::System::Exception*)>(&::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::Trace)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x3e6eac8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>::get(), "Trace", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceLevel>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::*)()>(
    &::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3e6ef40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::Newtonsoft::Json::Serialization::ITraceWriter"
constexpr Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::operator ::Newtonsoft::Json::Serialization::ITraceWriter*() noexcept {
  return static_cast<::Newtonsoft::Json::Serialization::ITraceWriter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Serialization::ITraceWriter"
constexpr ::Newtonsoft::Json::Serialization::ITraceWriter* Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::i___Newtonsoft__Json__Serialization__ITraceWriter() noexcept {
  return static_cast<::Newtonsoft::Json::Serialization::ITraceWriter*>(static_cast<void*>(this));
}
constexpr ::System::Diagnostics::TraceLevel& Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::__cordl_internal_get__LevelFilter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LevelFilter_k__BackingField;
}
constexpr ::System::Diagnostics::TraceLevel const& Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::__cordl_internal_get__LevelFilter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LevelFilter_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::__cordl_internal_set__LevelFilter_k__BackingField(::System::Diagnostics::TraceLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LevelFilter_k__BackingField = value;
}
inline ::System::Diagnostics::TraceLevel Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::get_LevelFilter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>::get(),
                                                                             "get_LevelFilter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceLevel, false>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::set_LevelFilter(::System::Diagnostics::TraceLevel value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>::get(), "set_LevelFilter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceLevel>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Diagnostics::TraceEventType Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::GetTraceEventType(::System::Diagnostics::TraceLevel level) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>::get(), "GetTraceEventType", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceLevel>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceEventType, false>(this, ___internal_method, level);
}
inline void Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::Trace(::System::Diagnostics::TraceLevel level, ::StringW message, ::System::Exception* ex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>::get(), "Trace", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Diagnostics::TraceLevel>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Exception*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, level, message, ex);
}
inline ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter* Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>());
}
inline void Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::DiagnosticsTraceWriter() {}
