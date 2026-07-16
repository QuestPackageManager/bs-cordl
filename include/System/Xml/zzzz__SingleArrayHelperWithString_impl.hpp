#pragma once
// IWYU pragma private; include "System/Xml/SingleArrayHelperWithString.hpp"
#include "System/Xml/zzzz__ArrayHelper_2_impl.hpp"
#include "System/Xml/zzzz__SingleArrayHelperWithString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
//  Writing Method size for method: ::System::Xml::SingleArrayHelperWithString.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::SingleArrayHelperWithString::*)(::System::Xml::XmlDictionaryReader*, ::StringW, ::StringW, ::ArrayW<float_t>, int32_t,
                                                                                                               int32_t)>(&::System::Xml::SingleArrayHelperWithString::ReadArray)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60f91d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::SingleArrayHelperWithString*>(), { ::i2c::class_of<::System::Xml::SingleArrayHelperWithString*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::SingleArrayHelperWithString.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::SingleArrayHelperWithString::*)(::System::Xml::XmlDictionaryWriter*, ::StringW, ::StringW, ::StringW, ::ArrayW<float_t>,
                                                                                                            int32_t, int32_t)>(&::System::Xml::SingleArrayHelperWithString::WriteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60f920c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::SingleArrayHelperWithString*>(), { ::i2c::class_of<::System::Xml::SingleArrayHelperWithString*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::SingleArrayHelperWithString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::SingleArrayHelperWithString::*)()>(&::System::Xml::SingleArrayHelperWithString::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60f9248;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SingleArrayHelperWithString*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::SingleArrayHelperWithString::setStaticF_Instance(::System::Xml::SingleArrayHelperWithString* value) {
  ::cordl_internals::setStaticField<::System::Xml::SingleArrayHelperWithString*, "Instance", ::System::Xml::SingleArrayHelperWithString*>(
      std::forward<::System::Xml::SingleArrayHelperWithString*>(value));
}
inline ::System::Xml::SingleArrayHelperWithString* System::Xml::SingleArrayHelperWithString::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Xml::SingleArrayHelperWithString*, "Instance", ::System::Xml::SingleArrayHelperWithString*>();
}
inline int32_t System::Xml::SingleArrayHelperWithString::ReadArray(::System::Xml::XmlDictionaryReader* reader, ::StringW localName, ::StringW namespaceUri, ::ArrayW<float_t> array, int32_t offset,
                                                                   int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::SingleArrayHelperWithString*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, reader, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::SingleArrayHelperWithString::WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::StringW localName, ::StringW namespaceUri, ::ArrayW<float_t> array,
                                                                 int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::SingleArrayHelperWithString*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::SingleArrayHelperWithString::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::SingleArrayHelperWithString*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::SingleArrayHelperWithString* System::Xml::SingleArrayHelperWithString::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::SingleArrayHelperWithString*>());
}
// Ctor Parameters []
constexpr ::System::Xml::SingleArrayHelperWithString::SingleArrayHelperWithString() {}
