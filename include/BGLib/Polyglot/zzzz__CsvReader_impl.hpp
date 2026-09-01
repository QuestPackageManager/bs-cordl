#pragma once
// IWYU pragma private; include "BGLib\Polyglot\CsvReader.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/Polyglot/zzzz__CsvReader_def.hpp"
#include "BGLib/Polyglot/zzzz__CsvReader_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::Polyglot::CsvReader_ParsingMode::CsvReader_ParsingMode(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::CsvReader_ParsingMode::CsvReader_ParsingMode() {}
constexpr ::BGLib::Polyglot::CsvReader_ParsingMode BGLib::Polyglot::CsvReader_ParsingMode::None{ static_cast<int32_t>(0x0) };
constexpr ::BGLib::Polyglot::CsvReader_ParsingMode BGLib::Polyglot::CsvReader_ParsingMode::OutQuote{ static_cast<int32_t>(0x1) };
constexpr ::BGLib::Polyglot::CsvReader_ParsingMode BGLib::Polyglot::CsvReader_ParsingMode::InQuote{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::BGLib::Polyglot::CsvReader.Parse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::StringW>*>* (*)(::StringW)>(
    &::BGLib::Polyglot::CsvReader::Parse)> {
  constexpr static std::size_t size = 0x820;
  constexpr static std::size_t addrs = 0x331d9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::CsvReader*>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::CsvReader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BGLib::Polyglot::CsvReader::*)()>(&::BGLib::Polyglot::CsvReader::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x332109c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::CsvReader*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::StringW>*>* BGLib::Polyglot::CsvReader::Parse(::StringW src) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::CsvReader*>(), { "Parse", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::StringW>*>*>(nullptr, ___internal_method, src);
}
inline void BGLib::Polyglot::CsvReader::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::CsvReader*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BGLib::Polyglot::CsvReader* BGLib::Polyglot::CsvReader::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::Polyglot::CsvReader*>());
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::CsvReader::CsvReader() {}
