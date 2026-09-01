#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Serialization\DiagnosticsTraceWriter.hpp"
#include "System/Diagnostics/zzzz__TraceLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__DiagnosticsTraceWriter_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ITraceWriter_def.hpp"
#include "System/Diagnostics/zzzz__TraceEventType_def.hpp"
#include "System/Diagnostics/zzzz__TraceLevel_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter.get_LevelFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::TraceLevel (::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::*)()>(
    &::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::get_LevelFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d4095c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>(), { "get_LevelFilter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter.set_LevelFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::*)(::System::Diagnostics::TraceLevel)>(
    &::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::set_LevelFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d40964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>(),
                                                                                           { "set_LevelFilter", {}, { ::i2c::type_of<::System::Diagnostics::TraceLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter.GetTraceEventType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::TraceEventType (::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::*)(::System::Diagnostics::TraceLevel)>(
    &::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::GetTraceEventType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5d4096c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>(),
                                                                                           { "GetTraceEventType", {}, { ::i2c::type_of<::System::Diagnostics::TraceLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter.Trace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::*)(::System::Diagnostics::TraceLevel, ::StringW, ::System::Exception*)>(
    &::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::Trace)> {
  constexpr static std::size_t size = 0x460;
  constexpr static std::size_t addrs = 0x5d409d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>(),
                                                { "Trace", {}, { ::i2c::type_of<::System::Diagnostics::TraceLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::*)()>(&::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5d40e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
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
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>(), { "get_LevelFilter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceLevel>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::set_LevelFilter(::System::Diagnostics::TraceLevel value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>(),
                                                                                         { "set_LevelFilter", {}, { ::i2c::type_of<::System::Diagnostics::TraceLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Diagnostics::TraceEventType Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::GetTraceEventType(::System::Diagnostics::TraceLevel level) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>(),
                                                                                         { "GetTraceEventType", {}, { ::i2c::type_of<::System::Diagnostics::TraceLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceEventType>(this, ___internal_method, level);
}
inline void Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::Trace(::System::Diagnostics::TraceLevel level, ::StringW message, ::System::Exception* ex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>(),
                                              { "Trace", {}, { ::i2c::type_of<::System::Diagnostics::TraceLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, message, ex);
}
inline void Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter* Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter*>());
}
/// @brief Convert operator to "::Newtonsoft::Json::Serialization::ITraceWriter"
constexpr Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::operator ::Newtonsoft::Json::Serialization::ITraceWriter*() noexcept {
  return static_cast<::Newtonsoft::Json::Serialization::ITraceWriter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Serialization::ITraceWriter"
constexpr ::Newtonsoft::Json::Serialization::ITraceWriter* Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::i___Newtonsoft__Json__Serialization__ITraceWriter() noexcept {
  return static_cast<::Newtonsoft::Json::Serialization::ITraceWriter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::DiagnosticsTraceWriter::DiagnosticsTraceWriter() {}
