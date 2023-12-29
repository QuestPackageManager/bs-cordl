#pragma once
#include "BeatSaberAPI/DataTransferObjects/zzzz__PlatformEnviroment_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatSaberAPI::DataTransferObjects::PlatformEnviroment::PlatformEnviroment(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BeatSaberAPI::DataTransferObjects::PlatformEnviroment::PlatformEnviroment() {}
constexpr ::BeatSaberAPI::DataTransferObjects::PlatformEnviroment BeatSaberAPI::DataTransferObjects::PlatformEnviroment::Test{ static_cast<uint8_t>(0x0u) };
constexpr ::BeatSaberAPI::DataTransferObjects::PlatformEnviroment BeatSaberAPI::DataTransferObjects::PlatformEnviroment::Developer{ static_cast<uint8_t>(0x1u) };
constexpr ::BeatSaberAPI::DataTransferObjects::PlatformEnviroment BeatSaberAPI::DataTransferObjects::PlatformEnviroment::Production{ static_cast<uint8_t>(0x2u) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
