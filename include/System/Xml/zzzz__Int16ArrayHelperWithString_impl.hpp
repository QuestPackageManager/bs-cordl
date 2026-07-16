#pragma once
// IWYU pragma private; include "System/Xml/Int16ArrayHelperWithString.hpp"
#include "System/Xml/zzzz__ArrayHelper_2_impl.hpp"
#include "System/Xml/zzzz__Int16ArrayHelperWithString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::Int16ArrayHelperWithString.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Int16ArrayHelperWithString::*)(::System::Xml::XmlDictionaryReader*, ::StringW, ::StringW, ::ArrayW<int16_t>, int32_t,
                                                                                                              int32_t)>(&::System::Xml::Int16ArrayHelperWithString::ReadArray)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60f8a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Int16ArrayHelperWithString*>(), { ::i2c::class_of<::System::Xml::Int16ArrayHelperWithString*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Int16ArrayHelperWithString.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Int16ArrayHelperWithString::*)(::System::Xml::XmlDictionaryWriter*, ::StringW, ::StringW, ::StringW, ::ArrayW<int16_t>,
                                                                                                           int32_t, int32_t)>(&::System::Xml::Int16ArrayHelperWithString::WriteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60f8abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Int16ArrayHelperWithString*>(), { ::i2c::class_of<::System::Xml::Int16ArrayHelperWithString*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Int16ArrayHelperWithString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Int16ArrayHelperWithString::*)()>(&::System::Xml::Int16ArrayHelperWithString::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60f8af8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Int16ArrayHelperWithString*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Int16ArrayHelperWithString::setStaticF_Instance(::System::Xml::Int16ArrayHelperWithString* value) {
  ::cordl_internals::setStaticField<::System::Xml::Int16ArrayHelperWithString*, "Instance", ::System::Xml::Int16ArrayHelperWithString*>(
      std::forward<::System::Xml::Int16ArrayHelperWithString*>(value));
}
inline ::System::Xml::Int16ArrayHelperWithString* System::Xml::Int16ArrayHelperWithString::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Xml::Int16ArrayHelperWithString*, "Instance", ::System::Xml::Int16ArrayHelperWithString*>();
}
inline int32_t System::Xml::Int16ArrayHelperWithString::ReadArray(::System::Xml::XmlDictionaryReader* reader, ::StringW localName, ::StringW namespaceUri, ::ArrayW<int16_t> array, int32_t offset,
                                                                  int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Int16ArrayHelperWithString*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, reader, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::Int16ArrayHelperWithString::WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<int16_t> array,
                                                                int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Int16ArrayHelperWithString*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::Int16ArrayHelperWithString::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Int16ArrayHelperWithString*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Int16ArrayHelperWithString* System::Xml::Int16ArrayHelperWithString::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Int16ArrayHelperWithString*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Int16ArrayHelperWithString::Int16ArrayHelperWithString() {}
