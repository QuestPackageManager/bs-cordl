#pragma once
#include "TrackDefinitions/DataModels/zzzz__TrackToolbarType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TrackDefinitions::DataModels::TrackToolbarType::TrackToolbarType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TrackDefinitions::DataModels::TrackToolbarType::TrackToolbarType() {}
constexpr ::TrackDefinitions::DataModels::TrackToolbarType TrackDefinitions::DataModels::TrackToolbarType::None{ static_cast<int32_t>(0xffffffff) };
constexpr ::TrackDefinitions::DataModels::TrackToolbarType TrackDefinitions::DataModels::TrackToolbarType::Lights{ static_cast<int32_t>(0x0) };
constexpr ::TrackDefinitions::DataModels::TrackToolbarType TrackDefinitions::DataModels::TrackToolbarType::Toggle{ static_cast<int32_t>(0x1) };
constexpr ::TrackDefinitions::DataModels::TrackToolbarType TrackDefinitions::DataModels::TrackToolbarType::FloatValue{ static_cast<int32_t>(0x3) };
constexpr ::TrackDefinitions::DataModels::TrackToolbarType TrackDefinitions::DataModels::TrackToolbarType::IntValue{ static_cast<int32_t>(0x4) };
constexpr ::TrackDefinitions::DataModels::TrackToolbarType TrackDefinitions::DataModels::TrackToolbarType::BtsCharacterSelection{ static_cast<int32_t>(0x5) };
constexpr ::TrackDefinitions::DataModels::TrackToolbarType TrackDefinitions::DataModels::TrackToolbarType::CarSelection{ static_cast<int32_t>(0x6) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
