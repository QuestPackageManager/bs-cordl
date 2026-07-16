#pragma once
// IWYU pragma private; include "System/Xml/Int64ArrayHelperWithString.hpp"
#include "System/Xml/zzzz__ArrayHelper_2_impl.hpp"
#include "System/Xml/zzzz__Int64ArrayHelperWithString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::Int64ArrayHelperWithString.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::Int64ArrayHelperWithString::*)(::System::Xml::XmlDictionaryReader*, ::StringW, ::StringW, ::ArrayW<int64_t>, int32_t,
                                                                                                              int32_t)>(&::System::Xml::Int64ArrayHelperWithString::ReadArray)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60f8f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Int64ArrayHelperWithString*>(), { ::i2c::class_of<::System::Xml::Int64ArrayHelperWithString*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Int64ArrayHelperWithString.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Int64ArrayHelperWithString::*)(::System::Xml::XmlDictionaryWriter*, ::StringW, ::StringW, ::StringW, ::ArrayW<int64_t>,
                                                                                                           int32_t, int32_t)>(&::System::Xml::Int64ArrayHelperWithString::WriteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60f8f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::Int64ArrayHelperWithString*>(), { ::i2c::class_of<::System::Xml::Int64ArrayHelperWithString*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Int64ArrayHelperWithString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Int64ArrayHelperWithString::*)()>(&::System::Xml::Int64ArrayHelperWithString::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60f8fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Int64ArrayHelperWithString*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Int64ArrayHelperWithString::setStaticF_Instance(::System::Xml::Int64ArrayHelperWithString* value) {
  ::cordl_internals::setStaticField<::System::Xml::Int64ArrayHelperWithString*, "Instance", ::System::Xml::Int64ArrayHelperWithString*>(
      std::forward<::System::Xml::Int64ArrayHelperWithString*>(value));
}
inline ::System::Xml::Int64ArrayHelperWithString* System::Xml::Int64ArrayHelperWithString::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Xml::Int64ArrayHelperWithString*, "Instance", ::System::Xml::Int64ArrayHelperWithString*>();
}
inline int32_t System::Xml::Int64ArrayHelperWithString::ReadArray(::System::Xml::XmlDictionaryReader* reader, ::StringW localName, ::StringW namespaceUri, ::ArrayW<int64_t> array, int32_t offset,
                                                                  int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Int64ArrayHelperWithString*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, reader, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::Int64ArrayHelperWithString::WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<int64_t> array,
                                                                int32_t offset, int32_t count) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::Int64ArrayHelperWithString*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::Int64ArrayHelperWithString::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Int64ArrayHelperWithString*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Int64ArrayHelperWithString* System::Xml::Int64ArrayHelperWithString::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Int64ArrayHelperWithString*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Int64ArrayHelperWithString::Int64ArrayHelperWithString() {}
