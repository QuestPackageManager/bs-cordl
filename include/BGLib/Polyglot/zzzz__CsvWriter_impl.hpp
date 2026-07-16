#pragma once
// IWYU pragma private; include "BGLib/Polyglot/CsvWriter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/Polyglot/zzzz__CsvWriter_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::BGLib::Polyglot::CsvWriter.AppendRow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Collections::Generic::List_1<::StringW>*)>(&::BGLib::Polyglot::CsvWriter::AppendRow)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0x331ed18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::CsvWriter*>(),
                                                             { "AppendRow", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::CsvWriter.AppendRowInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::BGLib::Polyglot::CsvWriter::AppendRowInternal)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x331eee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::CsvWriter*>(),
                            { "AppendRowInternal", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::CsvWriter.AppendElement
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::StringW)>(&::BGLib::Polyglot::CsvWriter::AppendElement)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x331f320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::CsvWriter*>(), { "AppendElement", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::CsvWriter.HasEscapeChars
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::StringW)>(&::BGLib::Polyglot::CsvWriter::HasEscapeChars)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x331f244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::CsvWriter*>(), { "HasEscapeChars", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::CsvWriter.AppendCSVLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::System::Collections::Generic::IEnumerable_1<::StringW>*)>(
    &::BGLib::Polyglot::CsvWriter::AppendCSVLine)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x331f3b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::CsvWriter*>(),
                                         { "AppendCSVLine", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::Polyglot::CsvWriter.AppendCSVLine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::ArrayW<::StringW>)>(&::BGLib::Polyglot::CsvWriter::AppendCSVLine)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x331f3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::CsvWriter*>(), { "AppendCSVLine", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
    return ___internal_method;
  }
};
inline void BGLib::Polyglot::CsvWriter::AppendRow(::StringW filePath, ::System::Collections::Generic::List_1<::StringW>* row) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::CsvWriter*>(),
                                                           { "AppendRow", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Collections::Generic::List_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, filePath, row);
}
inline void BGLib::Polyglot::CsvWriter::AppendRowInternal(::System::Text::StringBuilder* buffer, ::System::Collections::Generic::IEnumerable_1<::StringW>* row) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::CsvWriter*>(),
                          { "AppendRowInternal", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, row);
}
inline void BGLib::Polyglot::CsvWriter::AppendElement(::System::Text::StringBuilder* buffer, ::StringW element) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::CsvWriter*>(), { "AppendElement", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, element);
}
inline bool BGLib::Polyglot::CsvWriter::HasEscapeChars(::StringW element) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::CsvWriter*>(), { "HasEscapeChars", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, element);
}
inline void BGLib::Polyglot::CsvWriter::AppendCSVLine(::System::Text::StringBuilder* buffer, ::System::Collections::Generic::IEnumerable_1<::StringW>* values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::CsvWriter*>(),
                                       { "AppendCSVLine", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::StringW>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, values);
}
inline void BGLib::Polyglot::CsvWriter::AppendCSVLine(::System::Text::StringBuilder* buffer, ::ArrayW<::StringW> values) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::BGLib::Polyglot::CsvWriter*>(), { "AppendCSVLine", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::ArrayW<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer, values);
}
// Ctor Parameters []
constexpr ::BGLib::Polyglot::CsvWriter::CsvWriter() {}
