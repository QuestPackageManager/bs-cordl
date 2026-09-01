#pragma once
// IWYU pragma private; include "System\Xml\DoubleArrayHelperWithDictionaryString.hpp"
#include "System/Xml/zzzz__ArrayHelper_2_impl.hpp"
#include "System/Xml/zzzz__DoubleArrayHelperWithDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::DoubleArrayHelperWithDictionaryString.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::DoubleArrayHelperWithDictionaryString::*)(::System::Xml::XmlDictionaryReader*, ::System::Xml::XmlDictionaryString*,
                                                                                                                         ::System::Xml::XmlDictionaryString*, ::ArrayW<double_t>, int32_t, int32_t)>(
    &::System::Xml::DoubleArrayHelperWithDictionaryString::ReadArray)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60fed94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::DoubleArrayHelperWithDictionaryString*>(),
                                                                                          { ::i2c::class_of<::System::Xml::DoubleArrayHelperWithDictionaryString*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DoubleArrayHelperWithDictionaryString.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::DoubleArrayHelperWithDictionaryString::*)(
    ::System::Xml::XmlDictionaryWriter*, ::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<double_t>, int32_t, int32_t)>(
    &::System::Xml::DoubleArrayHelperWithDictionaryString::WriteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60fedcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::DoubleArrayHelperWithDictionaryString*>(),
                                                                                          { ::i2c::class_of<::System::Xml::DoubleArrayHelperWithDictionaryString*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DoubleArrayHelperWithDictionaryString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::DoubleArrayHelperWithDictionaryString::*)()>(&::System::Xml::DoubleArrayHelperWithDictionaryString::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60fee08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DoubleArrayHelperWithDictionaryString*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::DoubleArrayHelperWithDictionaryString::setStaticF_Instance(::System::Xml::DoubleArrayHelperWithDictionaryString* value) {
  ::cordl_internals::setStaticField<::System::Xml::DoubleArrayHelperWithDictionaryString*, "Instance", ::System::Xml::DoubleArrayHelperWithDictionaryString*>(
      std::forward<::System::Xml::DoubleArrayHelperWithDictionaryString*>(value));
}
inline ::System::Xml::DoubleArrayHelperWithDictionaryString* System::Xml::DoubleArrayHelperWithDictionaryString::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Xml::DoubleArrayHelperWithDictionaryString*, "Instance", ::System::Xml::DoubleArrayHelperWithDictionaryString*>();
}
inline int32_t System::Xml::DoubleArrayHelperWithDictionaryString::ReadArray(::System::Xml::XmlDictionaryReader* reader, ::System::Xml::XmlDictionaryString* localName,
                                                                             ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<double_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::DoubleArrayHelperWithDictionaryString*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, reader, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::DoubleArrayHelperWithDictionaryString::WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::System::Xml::XmlDictionaryString* localName,
                                                                           ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<double_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::DoubleArrayHelperWithDictionaryString*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::DoubleArrayHelperWithDictionaryString::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DoubleArrayHelperWithDictionaryString*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::DoubleArrayHelperWithDictionaryString* System::Xml::DoubleArrayHelperWithDictionaryString::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::DoubleArrayHelperWithDictionaryString*>());
}
// Ctor Parameters []
constexpr ::System::Xml::DoubleArrayHelperWithDictionaryString::DoubleArrayHelperWithDictionaryString() {}
