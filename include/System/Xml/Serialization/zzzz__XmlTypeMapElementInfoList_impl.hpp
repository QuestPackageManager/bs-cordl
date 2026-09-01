#pragma once
// IWYU pragma private; include "System\Xml\Serialization\XmlTypeMapElementInfoList.hpp"
#include "System/Collections/zzzz__ArrayList_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapElementInfoList_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapElementInfoList._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapElementInfoList::*)()>(&::System::Xml::Serialization::XmlTypeMapElementInfoList::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x63125e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapElementInfoList*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Xml::Serialization::XmlTypeMapElementInfoList::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapElementInfoList*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlTypeMapElementInfoList* System::Xml::Serialization::XmlTypeMapElementInfoList::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlTypeMapElementInfoList*>());
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlTypeMapElementInfoList::XmlTypeMapElementInfoList() {}
