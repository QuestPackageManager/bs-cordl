#pragma once
// IWYU pragma private; include "System/Xml/OnXmlDictionaryReaderClose.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/Xml/zzzz__OnXmlDictionaryReaderClose_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryReader_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Xml::OnXmlDictionaryReaderClose._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::OnXmlDictionaryReaderClose::*)(::System::Object*, ::System::IntPtr)>(&::System::Xml::OnXmlDictionaryReaderClose::_ctor)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x611ab58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::OnXmlDictionaryReaderClose*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::OnXmlDictionaryReaderClose.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::OnXmlDictionaryReaderClose::*)(::System::Xml::XmlDictionaryReader*)>(&::System::Xml::OnXmlDictionaryReaderClose::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x611ac9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::OnXmlDictionaryReaderClose*>(), { ::i2c::class_of<::System::Xml::OnXmlDictionaryReaderClose*>(), 13 }));
    return ___internal_method;
  }
};
inline void System::Xml::OnXmlDictionaryReaderClose::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::OnXmlDictionaryReaderClose*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void System::Xml::OnXmlDictionaryReaderClose::Invoke(::System::Xml::XmlDictionaryReader* reader) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::OnXmlDictionaryReaderClose*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline ::System::Xml::OnXmlDictionaryReaderClose* System::Xml::OnXmlDictionaryReaderClose::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::OnXmlDictionaryReaderClose*>(object, method));
}
// Ctor Parameters []
constexpr ::System::Xml::OnXmlDictionaryReaderClose::OnXmlDictionaryReaderClose() {}
