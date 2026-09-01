#pragma once
// IWYU pragma private; include "System\Xml\SingleArrayHelperWithDictionaryString.hpp"
#include "System/Xml/zzzz__ArrayHelper_2_impl.hpp"
#include "System/Xml/zzzz__SingleArrayHelperWithDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::SingleArrayHelperWithDictionaryString.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::SingleArrayHelperWithDictionaryString::*)(::System::Xml::XmlDictionaryReader*, ::System::Xml::XmlDictionaryString*,
                                                                                                                         ::System::Xml::XmlDictionaryString*, ::ArrayW<float_t>, int32_t, int32_t)>(
    &::System::Xml::SingleArrayHelperWithDictionaryString::ReadArray)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60feb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::SingleArrayHelperWithDictionaryString*>(),
                                                                                          { ::i2c::class_of<::System::Xml::SingleArrayHelperWithDictionaryString*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::SingleArrayHelperWithDictionaryString.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::SingleArrayHelperWithDictionaryString::*)(
    ::System::Xml::XmlDictionaryWriter*, ::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<float_t>, int32_t, int32_t)>(
    &::System::Xml::SingleArrayHelperWithDictionaryString::WriteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60feb5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::SingleArrayHelperWithDictionaryString*>(),
                                                                                          { ::i2c::class_of<::System::Xml::SingleArrayHelperWithDictionaryString*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::SingleArrayHelperWithDictionaryString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::SingleArrayHelperWithDictionaryString::*)()>(&::System::Xml::SingleArrayHelperWithDictionaryString::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60feb98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SingleArrayHelperWithDictionaryString*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::SingleArrayHelperWithDictionaryString::setStaticF_Instance(::System::Xml::SingleArrayHelperWithDictionaryString* value) {
  ::cordl_internals::setStaticField<::System::Xml::SingleArrayHelperWithDictionaryString*, "Instance", ::System::Xml::SingleArrayHelperWithDictionaryString*>(
      std::forward<::System::Xml::SingleArrayHelperWithDictionaryString*>(value));
}
inline ::System::Xml::SingleArrayHelperWithDictionaryString* System::Xml::SingleArrayHelperWithDictionaryString::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Xml::SingleArrayHelperWithDictionaryString*, "Instance", ::System::Xml::SingleArrayHelperWithDictionaryString*>();
}
inline int32_t System::Xml::SingleArrayHelperWithDictionaryString::ReadArray(::System::Xml::XmlDictionaryReader* reader, ::System::Xml::XmlDictionaryString* localName,
                                                                             ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<float_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::SingleArrayHelperWithDictionaryString*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, reader, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::SingleArrayHelperWithDictionaryString::WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::System::Xml::XmlDictionaryString* localName,
                                                                           ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<float_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::SingleArrayHelperWithDictionaryString*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::SingleArrayHelperWithDictionaryString::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SingleArrayHelperWithDictionaryString*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::SingleArrayHelperWithDictionaryString* System::Xml::SingleArrayHelperWithDictionaryString::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::SingleArrayHelperWithDictionaryString*>());
}
// Ctor Parameters []
constexpr ::System::Xml::SingleArrayHelperWithDictionaryString::SingleArrayHelperWithDictionaryString() {}
