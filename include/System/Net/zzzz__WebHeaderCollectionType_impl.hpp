#pragma once
// IWYU pragma private; include "System/Net/WebHeaderCollectionType.hpp"
#include "System/Net/zzzz__WebHeaderCollectionType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Net::WebHeaderCollectionType::WebHeaderCollectionType(uint16_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::System::Net::WebHeaderCollectionType::WebHeaderCollectionType()   {
}
constexpr ::System::Net::WebHeaderCollectionType  System::Net::WebHeaderCollectionType::Unknown{static_cast<uint16_t>(0x0u)};
constexpr ::System::Net::WebHeaderCollectionType  System::Net::WebHeaderCollectionType::WebRequest{static_cast<uint16_t>(0x1u)};
constexpr ::System::Net::WebHeaderCollectionType  System::Net::WebHeaderCollectionType::WebResponse{static_cast<uint16_t>(0x2u)};
constexpr ::System::Net::WebHeaderCollectionType  System::Net::WebHeaderCollectionType::HttpWebRequest{static_cast<uint16_t>(0x3u)};
constexpr ::System::Net::WebHeaderCollectionType  System::Net::WebHeaderCollectionType::HttpWebResponse{static_cast<uint16_t>(0x4u)};
constexpr ::System::Net::WebHeaderCollectionType  System::Net::WebHeaderCollectionType::HttpListenerRequest{static_cast<uint16_t>(0x5u)};
constexpr ::System::Net::WebHeaderCollectionType  System::Net::WebHeaderCollectionType::HttpListenerResponse{static_cast<uint16_t>(0x6u)};
constexpr ::System::Net::WebHeaderCollectionType  System::Net::WebHeaderCollectionType::FtpWebRequest{static_cast<uint16_t>(0x7u)};
constexpr ::System::Net::WebHeaderCollectionType  System::Net::WebHeaderCollectionType::FtpWebResponse{static_cast<uint16_t>(0x8u)};
constexpr ::System::Net::WebHeaderCollectionType  System::Net::WebHeaderCollectionType::FileWebRequest{static_cast<uint16_t>(0x9u)};
constexpr ::System::Net::WebHeaderCollectionType  System::Net::WebHeaderCollectionType::FileWebResponse{static_cast<uint16_t>(0xau)};
