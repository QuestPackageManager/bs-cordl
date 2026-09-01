#pragma once
// IWYU pragma private; include "System\Xml\DecimalArrayHelperWithString.hpp"
#include "System/Xml/zzzz__ArrayHelper_2_impl.hpp"
#include "System/zzzz__Decimal_impl.hpp"
#include "System/Xml/zzzz__DecimalArrayHelperWithString_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
//  Writing Method size for method: ::System::Xml::DecimalArrayHelperWithString.ReadArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Xml::DecimalArrayHelperWithString::*)(::System::Xml::XmlDictionaryReader*, ::StringW, ::StringW, ::ArrayW<::System::Decimal>,
                                                                                                                int32_t, int32_t)>(&::System::Xml::DecimalArrayHelperWithString::ReadArray)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x60feecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::DecimalArrayHelperWithString*>(), { ::i2c::class_of<::System::Xml::DecimalArrayHelperWithString*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DecimalArrayHelperWithString.WriteArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::DecimalArrayHelperWithString::*)(
    ::System::Xml::XmlDictionaryWriter*, ::StringW, ::StringW, ::StringW, ::ArrayW<::System::Decimal>, int32_t, int32_t)>(&::System::Xml::DecimalArrayHelperWithString::WriteArray)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60fef04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::DecimalArrayHelperWithString*>(), { ::i2c::class_of<::System::Xml::DecimalArrayHelperWithString*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::DecimalArrayHelperWithString._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::DecimalArrayHelperWithString::*)()>(&::System::Xml::DecimalArrayHelperWithString::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x60fef40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DecimalArrayHelperWithString*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::DecimalArrayHelperWithString::setStaticF_Instance(::System::Xml::DecimalArrayHelperWithString* value) {
  ::cordl_internals::setStaticField<::System::Xml::DecimalArrayHelperWithString*, "Instance", ::System::Xml::DecimalArrayHelperWithString*>(
      std::forward<::System::Xml::DecimalArrayHelperWithString*>(value));
}
inline ::System::Xml::DecimalArrayHelperWithString* System::Xml::DecimalArrayHelperWithString::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::System::Xml::DecimalArrayHelperWithString*, "Instance", ::System::Xml::DecimalArrayHelperWithString*>();
}
inline int32_t System::Xml::DecimalArrayHelperWithString::ReadArray(::System::Xml::XmlDictionaryReader* reader, ::StringW localName, ::StringW namespaceUri, ::ArrayW<::System::Decimal> array,
                                                                    int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::DecimalArrayHelperWithString*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, reader, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::DecimalArrayHelperWithString::WriteArray(::System::Xml::XmlDictionaryWriter* writer, ::StringW prefix, ::StringW localName, ::StringW namespaceUri,
                                                                  ::ArrayW<::System::Decimal> array, int32_t offset, int32_t count) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::DecimalArrayHelperWithString*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, prefix, localName, namespaceUri, array, offset, count);
}
inline void System::Xml::DecimalArrayHelperWithString::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::DecimalArrayHelperWithString*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::DecimalArrayHelperWithString* System::Xml::DecimalArrayHelperWithString::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::DecimalArrayHelperWithString*>());
}
// Ctor Parameters []
constexpr ::System::Xml::DecimalArrayHelperWithString::DecimalArrayHelperWithString() {}
