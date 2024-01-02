#pragma once
#include "TrackDefinitions/DataModels/zzzz__EventBoxGroupType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TrackDefinitions::DataModels::EventBoxGroupType::EventBoxGroupType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::TrackDefinitions::DataModels::EventBoxGroupType::EventBoxGroupType() {}
constexpr ::TrackDefinitions::DataModels::EventBoxGroupType TrackDefinitions::DataModels::EventBoxGroupType::Color{ static_cast<int32_t>(0x0) };
constexpr ::TrackDefinitions::DataModels::EventBoxGroupType TrackDefinitions::DataModels::EventBoxGroupType::Rotation{ static_cast<int32_t>(0x1) };
constexpr ::TrackDefinitions::DataModels::EventBoxGroupType TrackDefinitions::DataModels::EventBoxGroupType::Translation{ static_cast<int32_t>(0x2) };
constexpr ::TrackDefinitions::DataModels::EventBoxGroupType TrackDefinitions::DataModels::EventBoxGroupType::FloatFx{ static_cast<int32_t>(0xb) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
