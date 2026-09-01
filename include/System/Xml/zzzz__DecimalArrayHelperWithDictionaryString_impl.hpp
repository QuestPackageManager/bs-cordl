#pragma once
// IWYU pragma private; include "System\Xml\DecimalArrayHelperWithDictionaryString.hpp"
#include "System/Xml/zzzz__ArrayHelper_2_impl.hpp"
#include "System/zzzz__Decimal_impl.hpp"
#include "System/Xml/zzzz__DecimalArrayHelperWithDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
//  Writing Method size for method: ::System::Xml::DecimalArrayHelperWithDictionaryString.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::DecimalArrayHelperWithDictionaryString::*)(
    ::System::Xml::XmlDictionaryReader*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<::System::Decimal>, int32_t, int32_t)>(
    &::System::Xml::DecimalArrayHelperWithDictionaryString::ReadArray)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60ff004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::DecimalArrayHelperWithDictionaryString*>(),
                                                                                          { ::i2c::class_of<::System::Xml::DecimalArrayHelperWithDictionaryString*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DecimalArrayHelperWithDictionaryString.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::DecimalArrayHelperWithDictionaryString::*)(
    ::System::Xml::XmlDictionaryWriter*, ::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<::System::Decimal>, int32_t, int32_t)>(
    &::System::Xml::DecimalArrayHelperWithDictionaryString::WriteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60ff03c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::DecimalArrayHelperWithDictionaryString*>(),
                                                                                          { ::i2c::class_of<::System::Xml::DecimalArrayHelperWithDictionaryString*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DecimalArrayHelperWithDictionaryString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::DecimalArrayHelperWithDictionaryString::*)()>(&::System::Xml::DecimalArrayHelperWithDictionaryString::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60ff078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DecimalArrayHelperWithDictionaryString*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::DecimalArrayHelperWithDictionaryString::setStaticF_Instance(::System::Xml::DecimalArrayHelperWithDictionaryString* value) {
  ::cordl_internals::setStaticField<::System::Xml::DecimalArrayHelperWithDictionaryString*, "Instance", ::System::Xml::DecimalArrayHelperWithDictionaryString*>(
      std::forward<::System::Xml::DecimalArrayHelperWithDictionaryString*>(value));
}
inline ::System::Xml::DecimalArrayHelperWithDictionaryString* System::Xml::DecimalArrayHelperWithDictionaryString::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Xml::DecimalArrayHelperWithDictionaryString*, "Instance", ::System::Xml::DecimalArrayHelperWithDictionaryString*>();
}
inline int32_t System::Xml::DecimalArrayHelperWithDictionaryString::ReadArray(::System::Xml::XmlDictionaryReader* reader, ::System::Xml::XmlDictionaryString* localName,
                                                                              ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::Decimal> array, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::DecimalArrayHelperWithDictionaryString*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, reader, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::DecimalArrayHelperWithDictionaryString::WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::System::Xml::XmlDictionaryString* localName,
                                                                            ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::Decimal> array, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::DecimalArrayHelperWithDictionaryString*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::DecimalArrayHelperWithDictionaryString::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DecimalArrayHelperWithDictionaryString*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::DecimalArrayHelperWithDictionaryString* System::Xml::DecimalArrayHelperWithDictionaryString::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::DecimalArrayHelperWithDictionaryString*>());
}
// Ctor Parameters []
constexpr ::System::Xml::DecimalArrayHelperWithDictionaryString::DecimalArrayHelperWithDictionaryString() {}
