#pragma once
// IWYU pragma private; include "System\Xml\TimeSpanArrayHelperWithDictionaryString.hpp"
#include "System/Xml/zzzz__ArrayHelper_2_impl.hpp"
#include "System/zzzz__TimeSpan_impl.hpp"
#include "System/Xml/zzzz__TimeSpanArrayHelperWithDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::System::Xml::TimeSpanArrayHelperWithDictionaryString.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::TimeSpanArrayHelperWithDictionaryString::*)(
    ::System::Xml::XmlDictionaryReader*, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<::System::TimeSpan>, int32_t, int32_t)>(
    &::System::Xml::TimeSpanArrayHelperWithDictionaryString::ReadArray)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60ff754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::TimeSpanArrayHelperWithDictionaryString*>(),
                                                                                          { ::i2c::class_of<::System::Xml::TimeSpanArrayHelperWithDictionaryString*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TimeSpanArrayHelperWithDictionaryString.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TimeSpanArrayHelperWithDictionaryString::*)(
    ::System::Xml::XmlDictionaryWriter*, ::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<::System::TimeSpan>, int32_t, int32_t)>(
    &::System::Xml::TimeSpanArrayHelperWithDictionaryString::WriteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60ff78c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::TimeSpanArrayHelperWithDictionaryString*>(),
                                                                                          { ::i2c::class_of<::System::Xml::TimeSpanArrayHelperWithDictionaryString*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::TimeSpanArrayHelperWithDictionaryString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::TimeSpanArrayHelperWithDictionaryString::*)()>(&::System::Xml::TimeSpanArrayHelperWithDictionaryString::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60ff7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::TimeSpanArrayHelperWithDictionaryString*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::TimeSpanArrayHelperWithDictionaryString::setStaticF_Instance(::System::Xml::TimeSpanArrayHelperWithDictionaryString* value) {
  ::cordl_internals::setStaticField<::System::Xml::TimeSpanArrayHelperWithDictionaryString*, "Instance", ::System::Xml::TimeSpanArrayHelperWithDictionaryString*>(
      std::forward<::System::Xml::TimeSpanArrayHelperWithDictionaryString*>(value));
}
inline ::System::Xml::TimeSpanArrayHelperWithDictionaryString* System::Xml::TimeSpanArrayHelperWithDictionaryString::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Xml::TimeSpanArrayHelperWithDictionaryString*, "Instance", ::System::Xml::TimeSpanArrayHelperWithDictionaryString*>();
}
inline int32_t System::Xml::TimeSpanArrayHelperWithDictionaryString::ReadArray(::System::Xml::XmlDictionaryReader* reader, ::System::Xml::XmlDictionaryString* localName,
                                                                               ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::TimeSpan> array, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::TimeSpanArrayHelperWithDictionaryString*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, reader, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::TimeSpanArrayHelperWithDictionaryString::WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::System::Xml::XmlDictionaryString* localName,
                                                                             ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<::System::TimeSpan> array, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::TimeSpanArrayHelperWithDictionaryString*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::TimeSpanArrayHelperWithDictionaryString::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::TimeSpanArrayHelperWithDictionaryString*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::TimeSpanArrayHelperWithDictionaryString* System::Xml::TimeSpanArrayHelperWithDictionaryString::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::TimeSpanArrayHelperWithDictionaryString*>());
}
// Ctor Parameters []
constexpr ::System::Xml::TimeSpanArrayHelperWithDictionaryString::TimeSpanArrayHelperWithDictionaryString() {}
