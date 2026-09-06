#pragma once
// IWYU pragma private; include "System/Xml/IXmlDictionary.hpp"
#include "System/Xml/zzzz__IXmlDictionary_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
//  Writing Method size for method: ::System::Xml::IXmlDictionary.TryLookup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::IXmlDictionary::*)(int32_t, ::by_ref<::System::Xml::XmlDictionaryString*>)>(&::System::Xml::IXmlDictionary::TryLookup)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Xml::IXmlDictionary*>(), { ::i2c::class_of<::System::Xml::IXmlDictionary*>(), 0 }));
    return ___internal_method;
  }
};
inline bool System::Xml::IXmlDictionary::TryLookup(int32_t key, ::by_ref<::System::Xml::XmlDictionaryString*> result) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Xml::IXmlDictionary*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key, result);
}
