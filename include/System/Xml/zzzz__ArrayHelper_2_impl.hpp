#pragma once
// IWYU pragma private; include "System/Xml/ArrayHelper_2.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/zzzz__ArrayHelper_2_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
template <typename TArgument, typename TArray>
inline ::ArrayW<TArray> System::Xml::ArrayHelper_2<TArgument, TArray>::ReadArray(::System::Xml::XmlDictionaryReader* reader, TArgument localName, TArgument namespaceUri, int32_t maxArrayLength) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Xml::ArrayHelper_2<TArgument, TArray>*>(),
                          { "ReadArray", {}, { ::i2c::type_of<::System::Xml::XmlDictionaryReader*>(), ::i2c::type_of<TArgument>(), ::i2c::type_of<TArgument>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<TArray>>(this, ___internal_method, reader, localName, namespaceUri, maxArrayLength);
}
template <typename TArgument, typename TArray>
inline void System::Xml::ArrayHelper_2<TArgument, TArray>::WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, TArgument localName, TArgument namespaceUri,
                                                                      ::System::Xml::XmlDictionaryReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ArrayHelper_2<TArgument, TArray>*>(),
                                                           { "WriteArray",
                                                             {},
                                                             { ::i2c::type_of<::System::Xml::XmlDictionaryWriter*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<TArgument>(),
                                                               ::i2c::type_of<TArgument>(), ::i2c::type_of<::System::Xml::XmlDictionaryReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, prefix, localName, namespaceUri, reader);
}
template <typename TArgument, typename TArray>
inline int32_t System::Xml::ArrayHelper_2<TArgument, TArray>::ReadArray(::System::Xml::XmlDictionaryReader* reader, TArgument localName, TArgument namespaceUri, ::ArrayW<TArray> array, int32_t offset,
                                                                        int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::ArrayHelper_2<TArgument, TArray>*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, reader, localName, namespaceUri, array, offset, count);
}
template <typename TArgument, typename TArray>
inline void System::Xml::ArrayHelper_2<TArgument, TArray>::WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, TArgument localName, TArgument namespaceUri, ::ArrayW<TArray> array,
                                                                      int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::ArrayHelper_2<TArgument, TArray>*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, prefix, localName, namespaceUri, array, offset, count);
}
template <typename TArgument, typename TArray> inline void System::Xml::ArrayHelper_2<TArgument, TArray>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::ArrayHelper_2<TArgument, TArray>*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template <typename TArgument, typename TArray> inline ::System::Xml::ArrayHelper_2<TArgument, TArray>* System::Xml::ArrayHelper_2<TArgument, TArray>::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::ArrayHelper_2<TArgument, TArray>*>());
}
// Ctor Parameters []
template <typename TArgument, typename TArray> constexpr ::System::Xml::ArrayHelper_2<TArgument, TArray>::ArrayHelper_2() {}
