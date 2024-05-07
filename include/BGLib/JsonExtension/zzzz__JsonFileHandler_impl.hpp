#pragma once
// IWYU pragma private; include "BGLib/JsonExtension/JsonFileHandler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/JsonExtension/zzzz__JsonFileHandler_def.hpp"
#include "BGLib/JsonExtension/zzzz__JsonFileHandler_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializerSettings_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonTextWriter_def.hpp"
#include "System/IO/zzzz__TextReader_def.hpp"
#include "System/IO/zzzz__TextWriter_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
template <typename T> constexpr int32_t& BGLib::JsonExtension::__JsonFileHandler____c__DisplayClass0_0_1<T>::__cordl_internal_get_indentation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentation;
}
template <typename T> constexpr int32_t const& BGLib::JsonExtension::__JsonFileHandler____c__DisplayClass0_0_1<T>::__cordl_internal_get_indentation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___indentation;
}
template <typename T> constexpr void BGLib::JsonExtension::__JsonFileHandler____c__DisplayClass0_0_1<T>::__cordl_internal_set_indentation(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___indentation = value;
}
template <typename T> inline ::BGLib::JsonExtension::__JsonFileHandler____c__DisplayClass0_0_1<T>* BGLib::JsonExtension::__JsonFileHandler____c__DisplayClass0_0_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::JsonExtension::__JsonFileHandler____c__DisplayClass0_0_1<T>*>());
}
template <typename T> inline void BGLib::JsonExtension::__JsonFileHandler____c__DisplayClass0_0_1<T>::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::__JsonFileHandler____c__DisplayClass0_0_1<T>*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void BGLib::JsonExtension::__JsonFileHandler____c__DisplayClass0_0_1<T>::_WriteIndentedWithDefault_b__0(::Newtonsoft::Json::JsonTextWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::__JsonFileHandler____c__DisplayClass0_0_1<T>*>::get(), "<WriteIndentedWithDefault>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonTextWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
// Ctor Parameters []
template <typename T> constexpr ::BGLib::JsonExtension::__JsonFileHandler____c__DisplayClass0_0_1<T>::__JsonFileHandler____c__DisplayClass0_0_1() {}
/// @param indentation: int32_t (default: static_cast<int32_t>(0x4))
template <typename T> inline void BGLib::JsonExtension::JsonFileHandler::WriteIndentedWithDefault(T content, ::StringW filePath, int32_t indentation) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::JsonFileHandler*>::get(), "WriteIndentedWithDefault",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, content, filePath, indentation);
}
template <typename T> inline void BGLib::JsonExtension::JsonFileHandler::WriteCompactWithoutDefault(T content, ::StringW filePath) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::JsonFileHandler*>::get(), "WriteCompactWithoutDefault",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, content, filePath);
}
/// @param beforeSerialize: ::System::Action_1<::Newtonsoft::Json::JsonTextWriter*>* (default: nullptr)
template <typename T>
inline void BGLib::JsonExtension::JsonFileHandler::WriteToFile(T content, ::StringW filePath, ::Newtonsoft::Json::JsonSerializerSettings* settings,
                                                               ::System::Action_1<::Newtonsoft::Json::JsonTextWriter*>* beforeSerialize) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::JsonFileHandler*>::get(), "WriteToFile",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Newtonsoft::Json::JsonTextWriter*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, content, filePath, settings, beforeSerialize);
}
/// @param beforeSerialize: ::System::Action_1<::Newtonsoft::Json::JsonTextWriter*>* (default: nullptr)
template <typename T>
inline void BGLib::JsonExtension::JsonFileHandler::WriteToText(::System::IO::TextWriter* writer, T content, ::Newtonsoft::Json::JsonSerializerSettings* settings,
                                                               ::System::Action_1<::Newtonsoft::Json::JsonTextWriter*>* beforeSerialize) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::JsonFileHandler*>::get(), "WriteToText",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextWriter*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializerSettings*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::Newtonsoft::Json::JsonTextWriter*>*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, writer, content, settings, beforeSerialize);
}
template <typename T> inline T BGLib::JsonExtension::JsonFileHandler::ReadFromFile(::StringW filePath) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::JsonFileHandler*>::get(),
                                                                                  "ReadFromFile", std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, filePath);
}
template <typename T> inline T BGLib::JsonExtension::JsonFileHandler::ReadFromFile(::StringW filePath, ::Newtonsoft::Json::JsonSerializerSettings* settings) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::JsonFileHandler*>::get(), "ReadFromFile",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializerSettings*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, filePath, settings);
}
template <typename T> inline T BGLib::JsonExtension::JsonFileHandler::ReadFromText(::System::IO::TextReader* textReader, ::Newtonsoft::Json::JsonSerializerSettings* settings) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::JsonExtension::JsonFileHandler*>::get(), "ReadFromText",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IO::TextReader*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializerSettings*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, textReader, settings);
}
// Ctor Parameters []
constexpr ::BGLib::JsonExtension::JsonFileHandler::JsonFileHandler() {}
