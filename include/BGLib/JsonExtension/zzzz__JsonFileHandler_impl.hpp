#pragma once
// IWYU pragma private; include "BGLib\JsonExtension\JsonFileHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/JsonExtension/zzzz__JsonFileHandler_def.hpp"
#include "BGLib/JsonExtension/zzzz__JsonFileHandler_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializerSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextWriter_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template <typename T> constexpr int32_t& BGLib::JsonExtension::JsonFileHandler___c__DisplayClass0_0_1<T>::__cordl_internal_get_indentation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentation;
}
template <typename T> constexpr int32_t const& BGLib::JsonExtension::JsonFileHandler___c__DisplayClass0_0_1<T>::__cordl_internal_get_indentation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentation;
}
template <typename T> constexpr void BGLib::JsonExtension::JsonFileHandler___c__DisplayClass0_0_1<T>::__cordl_internal_set_indentation(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indentation = value;
}
template <typename T> inline void BGLib::JsonExtension::JsonFileHandler___c__DisplayClass0_0_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::JsonFileHandler___c__DisplayClass0_0_1<T>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename T> inline void BGLib::JsonExtension::JsonFileHandler___c__DisplayClass0_0_1<T>::_WriteIndentedWithDefault_b__0(::Newtonsoft::Json::JsonTextWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::JsonFileHandler___c__DisplayClass0_0_1<T>*>(),
                                                                                         { "<WriteIndentedWithDefault>b__0", {}, { ::i2c::type_of<::Newtonsoft::Json::JsonTextWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
template <typename T> inline ::BGLib::JsonExtension::JsonFileHandler___c__DisplayClass0_0_1<T>* BGLib::JsonExtension::JsonFileHandler___c__DisplayClass0_0_1<T>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BGLib::JsonExtension::JsonFileHandler___c__DisplayClass0_0_1<T>*>());
}
// Ctor Parameters []
template <typename T> constexpr ::BGLib::JsonExtension::JsonFileHandler___c__DisplayClass0_0_1<T>::JsonFileHandler___c__DisplayClass0_0_1() {}
template <typename T> inline void BGLib::JsonExtension::JsonFileHandler::WriteIndentedWithDefault(T content, ::StringW filePath, int32_t indentation) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::JsonFileHandler*>(),
                                                           { "WriteIndentedWithDefault", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, content, filePath, indentation);
}
template <typename T> inline void BGLib::JsonExtension::JsonFileHandler::WriteCompactWithoutDefault(T content, ::StringW filePath) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::JsonFileHandler*>(),
                                                           { "WriteCompactWithoutDefault", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>(), ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, content, filePath);
}
template <typename T>
inline void BGLib::JsonExtension::JsonFileHandler::WriteToFile(T content, ::StringW filePath, ::Newtonsoft::Json::JsonSerializerSettings* settings,
                                                               ::System::Action_1<::Newtonsoft::Json::JsonTextWriter*>* beforeSerialize) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::JsonFileHandler*>(),
                                                           { "WriteToFile",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<T>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                                                               ::i2c::type_of<::System::Action_1<::Newtonsoft::Json::JsonTextWriter*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, content, filePath, settings, beforeSerialize);
}
template <typename T>
inline void BGLib::JsonExtension::JsonFileHandler::WriteToText(::System::IO::TextWriter* writer, T content, ::Newtonsoft::Json::JsonSerializerSettings* settings,
                                                               ::System::Action_1<::Newtonsoft::Json::JsonTextWriter*>* beforeSerialize) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::JsonFileHandler*>(),
                                                           { "WriteToText",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::System::IO::TextWriter*>(), ::i2c::type_of<T>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>(),
                                                               ::i2c::type_of<::System::Action_1<::Newtonsoft::Json::JsonTextWriter*>*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, writer, content, settings, beforeSerialize);
}
template <typename T> inline T BGLib::JsonExtension::JsonFileHandler::ReadFromFile(::StringW filePath) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::JsonFileHandler*>(), { "ReadFromFile", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, filePath);
}
template <typename T> inline T BGLib::JsonExtension::JsonFileHandler::ReadFromFile(::StringW filePath, ::Newtonsoft::Json::JsonSerializerSettings* settings) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::JsonFileHandler*>(),
                                              { "ReadFromFile", { ::i2c::class_of<T>() }, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, filePath, settings);
}
template <typename T> inline T BGLib::JsonExtension::JsonFileHandler::ReadFromText(::System::IO::TextReader* textReader, ::Newtonsoft::Json::JsonSerializerSettings* settings) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BGLib::JsonExtension::JsonFileHandler*>(),
                                       { "ReadFromText", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::IO::TextReader*>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, textReader, settings);
}
// Ctor Parameters []
constexpr ::BGLib::JsonExtension::JsonFileHandler::JsonFileHandler() {}
