#pragma once
// IWYU pragma private; include "System/Xml/XmlDictionaryReaderQuotaTypes.hpp"
#include "System/Xml/zzzz__XmlDictionaryReaderQuotaTypes_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Xml::XmlDictionaryReaderQuotaTypes::XmlDictionaryReaderQuotaTypes(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Xml::XmlDictionaryReaderQuotaTypes::XmlDictionaryReaderQuotaTypes() {}
constexpr ::System::Xml::XmlDictionaryReaderQuotaTypes System::Xml::XmlDictionaryReaderQuotaTypes::MaxDepth{ static_cast<int32_t>(0x1) };
constexpr ::System::Xml::XmlDictionaryReaderQuotaTypes System::Xml::XmlDictionaryReaderQuotaTypes::MaxStringContentLength{ static_cast<int32_t>(0x2) };
constexpr ::System::Xml::XmlDictionaryReaderQuotaTypes System::Xml::XmlDictionaryReaderQuotaTypes::MaxArrayLength{ static_cast<int32_t>(0x4) };
constexpr ::System::Xml::XmlDictionaryReaderQuotaTypes System::Xml::XmlDictionaryReaderQuotaTypes::MaxBytesPerRead{ static_cast<int32_t>(0x8) };
constexpr ::System::Xml::XmlDictionaryReaderQuotaTypes System::Xml::XmlDictionaryReaderQuotaTypes::MaxNameTableCharCount{ static_cast<int32_t>(0x10) };
