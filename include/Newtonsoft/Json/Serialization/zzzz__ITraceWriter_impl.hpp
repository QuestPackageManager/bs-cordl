#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Serialization\ITraceWriter.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ITraceWriter_def.hpp"
#include "System/Diagnostics/zzzz__TraceLevel_def.hpp"
#include "System/zzzz__Exception_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ITraceWriter.get_LevelFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::TraceLevel (::Newtonsoft::Json::Serialization::ITraceWriter::*)()>(
    &::Newtonsoft::Json::Serialization::ITraceWriter::get_LevelFilter)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ITraceWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::ITraceWriter*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ITraceWriter.Trace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::ITraceWriter::*)(::System::Diagnostics::TraceLevel, ::StringW, ::System::Exception*)>(
    &::Newtonsoft::Json::Serialization::ITraceWriter::Trace)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ITraceWriter*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::ITraceWriter*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::Diagnostics::TraceLevel Newtonsoft::Json::Serialization::ITraceWriter::get_LevelFilter() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::ITraceWriter*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceLevel>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::ITraceWriter::Trace(::System::Diagnostics::TraceLevel level, ::StringW message, ::System::Exception* ex) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::ITraceWriter*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, message, ex);
}
