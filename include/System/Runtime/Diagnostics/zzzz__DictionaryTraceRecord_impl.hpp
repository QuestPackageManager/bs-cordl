#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/DictionaryTraceRecord.hpp"
#include "System/Runtime/Diagnostics/zzzz__TraceRecord_impl.hpp"
#include "System/Runtime/Diagnostics/zzzz__DictionaryTraceRecord_def.hpp"
#include "System/Collections/zzzz__IDictionary_def.hpp"
#include "System/Xml/zzzz__XmlWriter_def.hpp"
//  Writing Method size for method: ::System::Runtime::Diagnostics::DictionaryTraceRecord._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DictionaryTraceRecord::*)(::System::Collections::IDictionary*)>(
    &::System::Runtime::Diagnostics::DictionaryTraceRecord::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6187570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DictionaryTraceRecord*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Diagnostics::DictionaryTraceRecord.WriteTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Diagnostics::DictionaryTraceRecord::*)(::System::Xml::XmlWriter*)>(
    &::System::Runtime::Diagnostics::DictionaryTraceRecord::WriteTo)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0x618757c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DictionaryTraceRecord*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Diagnostics::DictionaryTraceRecord*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::System::Collections::IDictionary*& System::Runtime::Diagnostics::DictionaryTraceRecord::__cordl_internal_get_dictionary() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dictionary;
}
constexpr ::System::Collections::IDictionary* const& System::Runtime::Diagnostics::DictionaryTraceRecord::__cordl_internal_get_dictionary() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dictionary;
}
constexpr void System::Runtime::Diagnostics::DictionaryTraceRecord::__cordl_internal_set_dictionary(::System::Collections::IDictionary* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___dictionary = value;
}
inline void System::Runtime::Diagnostics::DictionaryTraceRecord::_ctor(::System::Collections::IDictionary* dictionary) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Diagnostics::DictionaryTraceRecord*>(), { ".ctor", {}, { ::i2c::type_of<::System::Collections::IDictionary*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dictionary);
}
inline void System::Runtime::Diagnostics::DictionaryTraceRecord::WriteTo(::System::Xml::XmlWriter* xml) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Diagnostics::DictionaryTraceRecord*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xml);
}
inline ::System::Runtime::Diagnostics::DictionaryTraceRecord* System::Runtime::Diagnostics::DictionaryTraceRecord::New_ctor(::System::Collections::IDictionary* dictionary) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Diagnostics::DictionaryTraceRecord*>(dictionary));
}
// Ctor Parameters []
constexpr ::System::Runtime::Diagnostics::DictionaryTraceRecord::DictionaryTraceRecord() {}
