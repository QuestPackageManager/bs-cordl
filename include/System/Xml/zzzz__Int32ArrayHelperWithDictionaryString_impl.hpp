#pragma once
// IWYU pragma private; include "System\Xml\Int32ArrayHelperWithDictionaryString.hpp"
#include "System/Xml/zzzz__ArrayHelper_2_impl.hpp"
#include "System/Xml/zzzz__Int32ArrayHelperWithDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::Int32ArrayHelperWithDictionaryString.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Int32ArrayHelperWithDictionaryString::*)(::System::Xml::XmlDictionaryReader*, ::System::Xml::XmlDictionaryString*,
                                                                                                                        ::System::Xml::XmlDictionaryString*, ::ArrayW<int32_t>, int32_t, int32_t)>(
    &::System::Xml::Int32ArrayHelperWithDictionaryString::ReadArray)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60fe644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Int32ArrayHelperWithDictionaryString*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Int32ArrayHelperWithDictionaryString*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Int32ArrayHelperWithDictionaryString.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Int32ArrayHelperWithDictionaryString::*)(
    ::System::Xml::XmlDictionaryWriter*, ::StringW, ::System::Xml::XmlDictionaryString*, ::System::Xml::XmlDictionaryString*, ::ArrayW<int32_t>, int32_t, int32_t)>(
    &::System::Xml::Int32ArrayHelperWithDictionaryString::WriteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60fe67c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Int32ArrayHelperWithDictionaryString*>(),
                                                                                          { ::i2c::class_of<::System::Xml::Int32ArrayHelperWithDictionaryString*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Int32ArrayHelperWithDictionaryString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Int32ArrayHelperWithDictionaryString::*)()>(&::System::Xml::Int32ArrayHelperWithDictionaryString::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60fe6b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Int32ArrayHelperWithDictionaryString*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Int32ArrayHelperWithDictionaryString::setStaticF_Instance(::System::Xml::Int32ArrayHelperWithDictionaryString* value) {
  ::cordl_internals::setStaticField<::System::Xml::Int32ArrayHelperWithDictionaryString*, "Instance", ::System::Xml::Int32ArrayHelperWithDictionaryString*>(
      std::forward<::System::Xml::Int32ArrayHelperWithDictionaryString*>(value));
}
inline ::System::Xml::Int32ArrayHelperWithDictionaryString* System::Xml::Int32ArrayHelperWithDictionaryString::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Xml::Int32ArrayHelperWithDictionaryString*, "Instance", ::System::Xml::Int32ArrayHelperWithDictionaryString*>();
}
inline int32_t System::Xml::Int32ArrayHelperWithDictionaryString::ReadArray(::System::Xml::XmlDictionaryReader* reader, ::System::Xml::XmlDictionaryString* localName,
                                                                            ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int32_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Int32ArrayHelperWithDictionaryString*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, reader, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::Int32ArrayHelperWithDictionaryString::WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::System::Xml::XmlDictionaryString* localName,
                                                                          ::System::Xml::XmlDictionaryString* namespaceUri, ::ArrayW<int32_t> array, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Int32ArrayHelperWithDictionaryString*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::Int32ArrayHelperWithDictionaryString::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Int32ArrayHelperWithDictionaryString*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Int32ArrayHelperWithDictionaryString* System::Xml::Int32ArrayHelperWithDictionaryString::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Int32ArrayHelperWithDictionaryString*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Int32ArrayHelperWithDictionaryString::Int32ArrayHelperWithDictionaryString() {}
