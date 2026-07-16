#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/StringTraceRecord.hpp"
#include "System/Runtime/Diagnostics/zzzz__TraceRecord_impl.hpp"
#include "System/Runtime/Diagnostics/zzzz__StringTraceRecord_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Runtime::Diagnostics::StringTraceRecord._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::StringTraceRecord::*)(::StringW, ::StringW)>(&::System::Runtime::Diagnostics::StringTraceRecord::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x618c3c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::StringTraceRecord*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::StringTraceRecord.WriteTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::StringTraceRecord::*)(::System::Xml::XmlWriter*)>(
    &::System::Runtime::Diagnostics::StringTraceRecord::WriteTo)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x618c3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::StringTraceRecord*>(), { ::i2c::class_of<::System::Runtime::Diagnostics::StringTraceRecord*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Diagnostics::StringTraceRecord::__cordl_internal_get_elementName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementName;
}
constexpr ::StringW const& System::Runtime::Diagnostics::StringTraceRecord::__cordl_internal_get_elementName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementName;
}
constexpr void System::Runtime::Diagnostics::StringTraceRecord::__cordl_internal_set_elementName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementName = value;
}
constexpr ::StringW& System::Runtime::Diagnostics::StringTraceRecord::__cordl_internal_get_content() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr ::StringW const& System::Runtime::Diagnostics::StringTraceRecord::__cordl_internal_get_content() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___content;
}
constexpr void System::Runtime::Diagnostics::StringTraceRecord::__cordl_internal_set_content(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___content = value;
}
inline void System::Runtime::Diagnostics::StringTraceRecord::_ctor(::StringW elementName, ::StringW content) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::StringTraceRecord*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementName, content);
}
inline void System::Runtime::Diagnostics::StringTraceRecord::WriteTo(::System::Xml::XmlWriter* writer) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Diagnostics::StringTraceRecord*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline ::System::Runtime::Diagnostics::StringTraceRecord* System::Runtime::Diagnostics::StringTraceRecord::New_ctor(::StringW elementName, ::StringW content) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Diagnostics::StringTraceRecord*>(elementName, content));
}
// Ctor Parameters []
constexpr ::System::Runtime::Diagnostics::StringTraceRecord::StringTraceRecord() {}
