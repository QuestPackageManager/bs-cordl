#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/NoteJumpMovementSpeedEvent.hpp"
#include "BeatmapSaveDataCommon/zzzz__EaseType_impl.hpp"
#include "BeatmapSaveDataVersion4/zzzz__NoteJumpMovementSpeedEvent_def.hpp"
// Ctor Parameters [CppParam { name: "d", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "p", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "e", ty:
// "::BeatmapSaveDataCommon::EaseType", modifiers: "", def_value: Some("{}") }]
constexpr ::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent::NoteJumpMovementSpeedEvent(float_t d, int32_t p, ::BeatmapSaveDataCommon::EaseType e) noexcept {
  this->d = d;
  this->p = p;
  this->e = e;
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion4::NoteJumpMovementSpeedEvent::NoteJumpMovementSpeedEvent() {}
