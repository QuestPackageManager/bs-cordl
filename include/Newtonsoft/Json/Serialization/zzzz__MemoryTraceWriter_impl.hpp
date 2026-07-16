#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/MemoryTraceWriter.hpp"
#include "System/Diagnostics/zzzz__TraceLevel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__MemoryTraceWriter_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ITraceWriter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
#include "System/Diagnostics/zzzz__TraceLevel_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::MemoryTraceWriter.get_LevelFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Diagnostics::TraceLevel (::Newtonsoft::Json::Serialization::MemoryTraceWriter::*)()>(
    &::Newtonsoft::Json::Serialization::MemoryTraceWriter::get_LevelFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d57520;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::MemoryTraceWriter*>(), { "get_LevelFilter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::MemoryTraceWriter.set_LevelFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::MemoryTraceWriter::*)(::System::Diagnostics::TraceLevel)>(
    &::Newtonsoft::Json::Serialization::MemoryTraceWriter::set_LevelFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d57528;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::MemoryTraceWriter*>(),
                                                                                           { "set_LevelFilter", {}, { ::i2c::type_of<::System::Diagnostics::TraceLevel>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::MemoryTraceWriter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::MemoryTraceWriter::*)()>(&::Newtonsoft::Json::Serialization::MemoryTraceWriter::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5d57530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::MemoryTraceWriter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::MemoryTraceWriter.Trace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::MemoryTraceWriter::*)(::System::Diagnostics::TraceLevel, ::StringW, ::System::Exception*)>(
    &::Newtonsoft::Json::Serialization::MemoryTraceWriter::Trace)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0x5d575d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::MemoryTraceWriter*>(),
                                                { "Trace", {}, { ::i2c::type_of<::System::Diagnostics::TraceLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::MemoryTraceWriter.GetTraceMessages
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::StringW>* (::Newtonsoft::Json::Serialization::MemoryTraceWriter::*)()>(
    &::Newtonsoft::Json::Serialization::MemoryTraceWriter::GetTraceMessages)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d578ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::MemoryTraceWriter*>(), { "GetTraceMessages", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::MemoryTraceWriter.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Newtonsoft::Json::Serialization::MemoryTraceWriter::*)()>(&::Newtonsoft::Json::Serialization::MemoryTraceWriter::ToString)> {
  constexpr static std::size_t size = 0x27c;
  constexpr static std::size_t addrs = 0x5d578b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::MemoryTraceWriter*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::MemoryTraceWriter*>(), 3 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Queue_1<::StringW>*& Newtonsoft::Json::Serialization::MemoryTraceWriter::__cordl_internal_get__traceMessages() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____traceMessages;
}
constexpr ::System::Collections::Generic::Queue_1<::StringW>* const& Newtonsoft::Json::Serialization::MemoryTraceWriter::__cordl_internal_get__traceMessages() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____traceMessages;
}
constexpr void Newtonsoft::Json::Serialization::MemoryTraceWriter::__cordl_internal_set__traceMessages(::System::Collections::Generic::Queue_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____traceMessages = value;
}
constexpr ::System::Object*& Newtonsoft::Json::Serialization::MemoryTraceWriter::__cordl_internal_get__lock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lock;
}
constexpr ::System::Object* const& Newtonsoft::Json::Serialization::MemoryTraceWriter::__cordl_internal_get__lock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lock;
}
constexpr void Newtonsoft::Json::Serialization::MemoryTraceWriter::__cordl_internal_set__lock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lock = value;
}
constexpr ::System::Diagnostics::TraceLevel& Newtonsoft::Json::Serialization::MemoryTraceWriter::__cordl_internal_get__LevelFilter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LevelFilter_k__BackingField;
}
constexpr ::System::Diagnostics::TraceLevel const& Newtonsoft::Json::Serialization::MemoryTraceWriter::__cordl_internal_get__LevelFilter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____LevelFilter_k__BackingField;
}
constexpr void Newtonsoft::Json::Serialization::MemoryTraceWriter::__cordl_internal_set__LevelFilter_k__BackingField(::System::Diagnostics::TraceLevel value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____LevelFilter_k__BackingField = value;
}
inline ::System::Diagnostics::TraceLevel Newtonsoft::Json::Serialization::MemoryTraceWriter::get_LevelFilter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::MemoryTraceWriter*>(), { "get_LevelFilter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Diagnostics::TraceLevel>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::MemoryTraceWriter::set_LevelFilter(::System::Diagnostics::TraceLevel value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::MemoryTraceWriter*>(), { "set_LevelFilter", {}, { ::i2c::type_of<::System::Diagnostics::TraceLevel>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Newtonsoft::Json::Serialization::MemoryTraceWriter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::MemoryTraceWriter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Newtonsoft::Json::Serialization::MemoryTraceWriter::Trace(::System::Diagnostics::TraceLevel level, ::StringW message, ::System::Exception* ex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::MemoryTraceWriter*>(),
                                              { "Trace", {}, { ::i2c::type_of<::System::Diagnostics::TraceLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, message, ex);
}
inline ::System::Collections::Generic::IEnumerable_1<::StringW>* Newtonsoft::Json::Serialization::MemoryTraceWriter::GetTraceMessages() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::MemoryTraceWriter*>(), { "GetTraceMessages", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::StringW>*>(this, ___internal_method);
}
inline ::StringW Newtonsoft::Json::Serialization::MemoryTraceWriter::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::MemoryTraceWriter*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::Newtonsoft::Json::Serialization::MemoryTraceWriter* Newtonsoft::Json::Serialization::MemoryTraceWriter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::MemoryTraceWriter*>());
}
/// @brief Convert operator to "::Newtonsoft::Json::Serialization::ITraceWriter"
constexpr Newtonsoft::Json::Serialization::MemoryTraceWriter::operator ::Newtonsoft::Json::Serialization::ITraceWriter*() noexcept {
  return static_cast<::Newtonsoft::Json::Serialization::ITraceWriter*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Serialization::ITraceWriter"
constexpr ::Newtonsoft::Json::Serialization::ITraceWriter* Newtonsoft::Json::Serialization::MemoryTraceWriter::i___Newtonsoft__Json__Serialization__ITraceWriter() noexcept {
  return static_cast<::Newtonsoft::Json::Serialization::ITraceWriter*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::MemoryTraceWriter::MemoryTraceWriter() {}
