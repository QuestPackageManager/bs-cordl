#pragma once
#include "BGLib/SaveDataCore/zzzz__LoaderState_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::SaveDataCore::LoaderState::LoaderState(uint8_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::BGLib::SaveDataCore::LoaderState::LoaderState() {}
constexpr ::BGLib::SaveDataCore::LoaderState BGLib::SaveDataCore::LoaderState::Unloaded{ static_cast<uint8_t>(0x0u) };
constexpr ::BGLib::SaveDataCore::LoaderState BGLib::SaveDataCore::LoaderState::Loading{ static_cast<uint8_t>(0x1u) };
constexpr ::BGLib::SaveDataCore::LoaderState BGLib::SaveDataCore::LoaderState::FileLoaded{ static_cast<uint8_t>(0x2u) };
