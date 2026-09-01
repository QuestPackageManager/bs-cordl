#pragma once
// IWYU pragma private; include "GlobalNamespace\NoteData.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectData_impl.hpp"
#include "GlobalNamespace/zzzz__ColorType_impl.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_impl.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_impl.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataItem_def.hpp"
#include "GlobalNamespace/zzzz__ColorType_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NoteData_GameplayType::NoteData_GameplayType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteData_GameplayType::NoteData_GameplayType() {}
constexpr ::GlobalNamespace::NoteData_GameplayType GlobalNamespace::NoteData_GameplayType::Normal{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::NoteData_GameplayType GlobalNamespace::NoteData_GameplayType::Bomb{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::NoteData_GameplayType GlobalNamespace::NoteData_GameplayType::BurstSliderHead{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::NoteData_GameplayType GlobalNamespace::NoteData_GameplayType::BurstSliderElement{ static_cast<int32_t>(0x3) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NoteData_ScoringType::NoteData_ScoringType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteData_ScoringType::NoteData_ScoringType() {}
constexpr ::GlobalNamespace::NoteData_ScoringType GlobalNamespace::NoteData_ScoringType::Ignore{ static_cast<int32_t>(0xffffffff) };
constexpr ::GlobalNamespace::NoteData_ScoringType GlobalNamespace::NoteData_ScoringType::NoScore{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::NoteData_ScoringType GlobalNamespace::NoteData_ScoringType::Normal{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::NoteData_ScoringType GlobalNamespace::NoteData_ScoringType::ArcHead{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::NoteData_ScoringType GlobalNamespace::NoteData_ScoringType::ArcTail{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::NoteData_ScoringType GlobalNamespace::NoteData_ScoringType::ChainHead{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::NoteData_ScoringType GlobalNamespace::NoteData_ScoringType::ChainLink{ static_cast<int32_t>(0x5) };
constexpr ::GlobalNamespace::NoteData_ScoringType GlobalNamespace::NoteData_ScoringType::ArcHeadArcTail{ static_cast<int32_t>(0x6) };
constexpr ::GlobalNamespace::NoteData_ScoringType GlobalNamespace::NoteData_ScoringType::ChainHeadArcTail{ static_cast<int32_t>(0x7) };
constexpr ::GlobalNamespace::NoteData_ScoringType GlobalNamespace::NoteData_ScoringType::ChainLinkArcHead{ static_cast<int32_t>(0x8) };
constexpr ::GlobalNamespace::NoteData_ScoringType GlobalNamespace::NoteData_ScoringType::ChainHeadArcHead{ static_cast<int32_t>(0x9) };
constexpr ::GlobalNamespace::NoteData_ScoringType GlobalNamespace::NoteData_ScoringType::ChainHeadArcHeadArcTail{ static_cast<int32_t>(0xa) };
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_subtypeGroupIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_subtypeGroupIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325cc58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { ::i2c::class_of<::GlobalNamespace::NoteData*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_gameplayType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteData_GameplayType (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_gameplayType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325cc60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_gameplayType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_gameplayType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)(::GlobalNamespace::NoteData_GameplayType)>(&::GlobalNamespace::NoteData::set_gameplayType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325cc68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_gameplayType", {}, { ::i2c::type_of<::GlobalNamespace::NoteData_GameplayType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_scoringType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteData_ScoringType (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_scoringType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325cc70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_scoringType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_scoringType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)(::GlobalNamespace::NoteData_ScoringType)>(&::GlobalNamespace::NoteData::set_scoringType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325cc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_scoringType", {}, { ::i2c::type_of<::GlobalNamespace::NoteData_ScoringType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_colorType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorType (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_colorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325cc80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_colorType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_colorType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)(::GlobalNamespace::ColorType)>(&::GlobalNamespace::NoteData::set_colorType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325cc88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_colorType", {}, { ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_cutDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteCutDirection (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_cutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325cc90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_cutDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_cutDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)(::GlobalNamespace::NoteCutDirection)>(&::GlobalNamespace::NoteData::set_cutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325cc98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_cutDirection", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_timeToNextColorNote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_timeToNextColorNote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325cca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_timeToNextColorNote", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_timeToNextColorNote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)(float_t)>(&::GlobalNamespace::NoteData::set_timeToNextColorNote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325cca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_timeToNextColorNote", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_timeToPrevColorNote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_timeToPrevColorNote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325ccb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_timeToPrevColorNote", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_timeToPrevColorNote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)(float_t)>(&::GlobalNamespace::NoteData::set_timeToPrevColorNote)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325ccb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_timeToPrevColorNote", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_lineIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_lineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325ccc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_lineIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_lineIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)(int32_t)>(&::GlobalNamespace::NoteData::set_lineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325ccc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_lineIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_noteLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteLineLayer (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_noteLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325ccd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_noteLineLayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_noteLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)(::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::NoteData::set_noteLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325ccd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_noteLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_beforeJumpNoteLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteLineLayer (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_beforeJumpNoteLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325cce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_beforeJumpNoteLineLayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_beforeJumpNoteLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)(::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::NoteData::set_beforeJumpNoteLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325cce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_beforeJumpNoteLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_flipLineIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_flipLineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325ccf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_flipLineIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_flipLineIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)(int32_t)>(&::GlobalNamespace::NoteData::set_flipLineIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325ccf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_flipLineIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_flipYSide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_flipYSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325cd00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_flipYSide", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_flipYSide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)(float_t)>(&::GlobalNamespace::NoteData::set_flipYSide)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325cd08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_flipYSide", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_cutDirectionAngleOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_cutDirectionAngleOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325cd10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_cutDirectionAngleOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_cutDirectionAngleOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)(float_t)>(&::GlobalNamespace::NoteData::set_cutDirectionAngleOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325cd18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_cutDirectionAngleOffset", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_cutSfxVolumeMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_cutSfxVolumeMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325cd20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_cutSfxVolumeMultiplier", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_cutSfxVolumeMultiplier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)(float_t)>(&::GlobalNamespace::NoteData::set_cutSfxVolumeMultiplier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325cd28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_cutSfxVolumeMultiplier", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_isArcHead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_isArcHead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325cd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_isArcHead", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_isArcHead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)(bool)>(&::GlobalNamespace::NoteData::set_isArcHead)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325cd38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_isArcHead", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.get_isArcTail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::get_isArcTail)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325cd40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_isArcTail", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.set_isArcTail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)(bool)>(&::GlobalNamespace::NoteData::set_isArcTail)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325cd48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_isArcTail", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.GetCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDataItem* (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::GetCopy)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x325cd50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { ::i2c::class_of<::GlobalNamespace::NoteData*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)(
    float_t, float_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteData_GameplayType, ::GlobalNamespace::NoteData_ScoringType,
    ::GlobalNamespace::ColorType, ::GlobalNamespace::NoteCutDirection, float_t, float_t, int32_t, float_t, float_t, float_t)>(&::GlobalNamespace::NoteData::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x325ce18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(),
                                ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteData_GameplayType>(),
                                ::i2c::type_of<::GlobalNamespace::NoteData_ScoringType>(), ::i2c::type_of<::GlobalNamespace::ColorType>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(),
                                ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.CreateBombNoteData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteData* (*)(float_t, float_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::NoteData::CreateBombNoteData)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x325cebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "CreateBombNoteData",
                                                                                                                {},
                                                                                                                { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                                                                                  ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.CreateBasicNoteData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteData* (*)(float_t, float_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::ColorType,
                                                                                        ::GlobalNamespace::NoteCutDirection)>(&::GlobalNamespace::NoteData::CreateBasicNoteData)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x325cf6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(),
                            { "CreateBasicNoteData",
                              {},
                              { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(),
                                ::i2c::type_of<::GlobalNamespace::ColorType>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.CreateBurstSliderNoteData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteData* (*)(float_t, float_t, int32_t, int32_t, ::GlobalNamespace::NoteLineLayer, ::GlobalNamespace::NoteLineLayer,
                                                                                        ::GlobalNamespace::ColorType, ::GlobalNamespace::NoteCutDirection, float_t)>(
    &::GlobalNamespace::NoteData::CreateBurstSliderNoteData)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x325d030;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(),
                                                { "CreateBurstSliderNoteData",
                                                  {},
                                                  { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(),
                                                    ::i2c::type_of<::GlobalNamespace::ColorType>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.CopyWith
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteData* (
    ::GlobalNamespace::NoteData::*)(::System::Nullable_1<float_t>, ::System::Nullable_1<int32_t>, ::System::Nullable_1<int32_t>, ::System::Nullable_1<int32_t>,
                                    ::System::Nullable_1<::GlobalNamespace::NoteLineLayer>, ::System::Nullable_1<::GlobalNamespace::NoteLineLayer>,
                                    ::System::Nullable_1<::GlobalNamespace::NoteData_GameplayType>, ::System::Nullable_1<::GlobalNamespace::NoteData_ScoringType>,
                                    ::System::Nullable_1<::GlobalNamespace::ColorType>, ::System::Nullable_1<::GlobalNamespace::NoteCutDirection>, ::System::Nullable_1<float_t>,
                                    ::System::Nullable_1<float_t>, ::System::Nullable_1<int32_t>, ::System::Nullable_1<float_t>, ::System::Nullable_1<float_t>, ::System::Nullable_1<float_t>)>(
    &::GlobalNamespace::NoteData::CopyWith)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x325d108;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(),
                                         { "CopyWith",
                                           {},
                                           { ::i2c::type_of<::System::Nullable_1<float_t>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(),
                                             ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::NoteLineLayer>>(),
                                             ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::NoteLineLayer>>(), ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::NoteData_GameplayType>>(),
                                             ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::NoteData_ScoringType>>(), ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::ColorType>>(),
                                             ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::NoteCutDirection>>(), ::i2c::type_of<::System::Nullable_1<float_t>>(),
                                             ::i2c::type_of<::System::Nullable_1<float_t>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<float_t>>(),
                                             ::i2c::type_of<::System::Nullable_1<float_t>>(), ::i2c::type_of<::System::Nullable_1<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.SetBeforeJumpNoteLineLayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)(::GlobalNamespace::NoteLineLayer)>(&::GlobalNamespace::NoteData::SetBeforeJumpNoteLineLayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "SetBeforeJumpNoteLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.ChangeToBurstSliderHead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::ChangeToBurstSliderHead)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x325d47c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "ChangeToBurstSliderHead", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.ChangeToGameNote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::ChangeToGameNote)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x325d4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "ChangeToGameNote", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.MarkAsSliderHead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::MarkAsSliderHead)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x325d4c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "MarkAsSliderHead", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.MarkAsSliderTail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::MarkAsSliderTail)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x325d508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "MarkAsSliderTail", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.SetNoteFlipToNote
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)(::GlobalNamespace::NoteData*)>(&::GlobalNamespace::NoteData::SetNoteFlipToNote)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x325d54c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "SetNoteFlipToNote", {}, { ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.SetCutDirectionAngleOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)(float_t)>(&::GlobalNamespace::NoteData::SetCutDirectionAngleOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "SetCutDirectionAngleOffset", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.GetCutDirectionAngleOffsetForSlider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::GetCutDirectionAngleOffsetForSlider)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x325d5b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "GetCutDirectionAngleOffsetForSlider", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.ResetNoteFlip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::ResetNoteFlip)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x325d5d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "ResetNoteFlip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.Mirror
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)(int32_t)>(&::GlobalNamespace::NoteData::Mirror)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x325d5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { ::i2c::class_of<::GlobalNamespace::NoteData*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.SetNoteToAnyCutDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::SetNoteToAnyCutDirection)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x325d658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "SetNoteToAnyCutDirection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.ChangeNoteCutDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)(::GlobalNamespace::NoteCutDirection)>(&::GlobalNamespace::NoteData::ChangeNoteCutDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x325d664;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "ChangeNoteCutDirection", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.TransformNoteAOrBToRandomType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoteData::*)()>(&::GlobalNamespace::NoteData::TransformNoteAOrBToRandomType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x325d66c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "TransformNoteAOrBToRandomType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoteData.SubtypeIdentifier
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::GlobalNamespace::ColorType)>(&::GlobalNamespace::NoteData::SubtypeIdentifier)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x325ceb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "SubtypeIdentifier", {}, { ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NoteData_GameplayType& GlobalNamespace::NoteData::__cordl_internal_get__gameplayType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayType_k__BackingField;
}
constexpr ::GlobalNamespace::NoteData_GameplayType const& GlobalNamespace::NoteData::__cordl_internal_get__gameplayType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayType_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__cordl_internal_set__gameplayType_k__BackingField(::GlobalNamespace::NoteData_GameplayType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayType_k__BackingField = value;
}
constexpr ::GlobalNamespace::NoteData_ScoringType& GlobalNamespace::NoteData::__cordl_internal_get__scoringType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoringType_k__BackingField;
}
constexpr ::GlobalNamespace::NoteData_ScoringType const& GlobalNamespace::NoteData::__cordl_internal_get__scoringType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoringType_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__cordl_internal_set__scoringType_k__BackingField(::GlobalNamespace::NoteData_ScoringType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoringType_k__BackingField = value;
}
constexpr ::GlobalNamespace::ColorType& GlobalNamespace::NoteData::__cordl_internal_get__colorType_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorType_k__BackingField;
}
constexpr ::GlobalNamespace::ColorType const& GlobalNamespace::NoteData::__cordl_internal_get__colorType_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorType_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__cordl_internal_set__colorType_k__BackingField(::GlobalNamespace::ColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorType_k__BackingField = value;
}
constexpr ::GlobalNamespace::NoteCutDirection& GlobalNamespace::NoteData::__cordl_internal_get__cutDirection_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutDirection_k__BackingField;
}
constexpr ::GlobalNamespace::NoteCutDirection const& GlobalNamespace::NoteData::__cordl_internal_get__cutDirection_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutDirection_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__cordl_internal_set__cutDirection_k__BackingField(::GlobalNamespace::NoteCutDirection value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cutDirection_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::NoteData::__cordl_internal_get__timeToNextColorNote_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeToNextColorNote_k__BackingField;
}
constexpr float_t const& GlobalNamespace::NoteData::__cordl_internal_get__timeToNextColorNote_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeToNextColorNote_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__cordl_internal_set__timeToNextColorNote_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeToNextColorNote_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::NoteData::__cordl_internal_get__timeToPrevColorNote_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeToPrevColorNote_k__BackingField;
}
constexpr float_t const& GlobalNamespace::NoteData::__cordl_internal_get__timeToPrevColorNote_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeToPrevColorNote_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__cordl_internal_set__timeToPrevColorNote_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeToPrevColorNote_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::NoteData::__cordl_internal_get__lineIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::NoteData::__cordl_internal_get__lineIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineIndex_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__cordl_internal_set__lineIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lineIndex_k__BackingField = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::NoteData::__cordl_internal_get__noteLineLayer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteLineLayer_k__BackingField;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::NoteData::__cordl_internal_get__noteLineLayer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteLineLayer_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__cordl_internal_set__noteLineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteLineLayer_k__BackingField = value;
}
constexpr ::GlobalNamespace::NoteLineLayer& GlobalNamespace::NoteData::__cordl_internal_get__beforeJumpNoteLineLayer_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beforeJumpNoteLineLayer_k__BackingField;
}
constexpr ::GlobalNamespace::NoteLineLayer const& GlobalNamespace::NoteData::__cordl_internal_get__beforeJumpNoteLineLayer_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beforeJumpNoteLineLayer_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__cordl_internal_set__beforeJumpNoteLineLayer_k__BackingField(::GlobalNamespace::NoteLineLayer value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beforeJumpNoteLineLayer_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::NoteData::__cordl_internal_get__flipLineIndex_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flipLineIndex_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::NoteData::__cordl_internal_get__flipLineIndex_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flipLineIndex_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__cordl_internal_set__flipLineIndex_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flipLineIndex_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::NoteData::__cordl_internal_get__flipYSide_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flipYSide_k__BackingField;
}
constexpr float_t const& GlobalNamespace::NoteData::__cordl_internal_get__flipYSide_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flipYSide_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__cordl_internal_set__flipYSide_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flipYSide_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::NoteData::__cordl_internal_get__cutDirectionAngleOffset_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutDirectionAngleOffset_k__BackingField;
}
constexpr float_t const& GlobalNamespace::NoteData::__cordl_internal_get__cutDirectionAngleOffset_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutDirectionAngleOffset_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__cordl_internal_set__cutDirectionAngleOffset_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cutDirectionAngleOffset_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::NoteData::__cordl_internal_get__cutSfxVolumeMultiplier_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutSfxVolumeMultiplier_k__BackingField;
}
constexpr float_t const& GlobalNamespace::NoteData::__cordl_internal_get__cutSfxVolumeMultiplier_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cutSfxVolumeMultiplier_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__cordl_internal_set__cutSfxVolumeMultiplier_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cutSfxVolumeMultiplier_k__BackingField = value;
}
constexpr bool& GlobalNamespace::NoteData::__cordl_internal_get__isArcHead_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isArcHead_k__BackingField;
}
constexpr bool const& GlobalNamespace::NoteData::__cordl_internal_get__isArcHead_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isArcHead_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__cordl_internal_set__isArcHead_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isArcHead_k__BackingField = value;
}
constexpr bool& GlobalNamespace::NoteData::__cordl_internal_get__isArcTail_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isArcTail_k__BackingField;
}
constexpr bool const& GlobalNamespace::NoteData::__cordl_internal_get__isArcTail_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isArcTail_k__BackingField;
}
constexpr void GlobalNamespace::NoteData::__cordl_internal_set__isArcTail_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isArcTail_k__BackingField = value;
}
inline int32_t GlobalNamespace::NoteData::get_subtypeGroupIdentifier() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteData*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::GlobalNamespace::NoteData_GameplayType GlobalNamespace::NoteData::get_gameplayType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_gameplayType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData_GameplayType>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_gameplayType(::GlobalNamespace::NoteData_GameplayType value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_gameplayType", {}, { ::i2c::type_of<::GlobalNamespace::NoteData_GameplayType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteData_ScoringType GlobalNamespace::NoteData::get_scoringType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_scoringType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData_ScoringType>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_scoringType(::GlobalNamespace::NoteData_ScoringType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_scoringType", {}, { ::i2c::type_of<::GlobalNamespace::NoteData_ScoringType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ColorType GlobalNamespace::NoteData::get_colorType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_colorType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorType>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_colorType(::GlobalNamespace::ColorType value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_colorType", {}, { ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteCutDirection GlobalNamespace::NoteData::get_cutDirection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_cutDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteCutDirection>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_cutDirection(::GlobalNamespace::NoteCutDirection value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_cutDirection", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::NoteData::get_timeToNextColorNote() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_timeToNextColorNote", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_timeToNextColorNote(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_timeToNextColorNote", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::NoteData::get_timeToPrevColorNote() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_timeToPrevColorNote", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_timeToPrevColorNote(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_timeToPrevColorNote", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::NoteData::get_lineIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_lineIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_lineIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_lineIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteLineLayer GlobalNamespace::NoteData::get_noteLineLayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_noteLineLayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_noteLineLayer(::GlobalNamespace::NoteLineLayer value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_noteLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NoteLineLayer GlobalNamespace::NoteData::get_beforeJumpNoteLineLayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_beforeJumpNoteLineLayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteLineLayer>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_beforeJumpNoteLineLayer(::GlobalNamespace::NoteLineLayer value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_beforeJumpNoteLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::NoteData::get_flipLineIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_flipLineIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_flipLineIndex(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_flipLineIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::NoteData::get_flipYSide() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_flipYSide", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_flipYSide(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_flipYSide", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::NoteData::get_cutDirectionAngleOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_cutDirectionAngleOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_cutDirectionAngleOffset(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_cutDirectionAngleOffset", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::NoteData::get_cutSfxVolumeMultiplier() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_cutSfxVolumeMultiplier", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_cutSfxVolumeMultiplier(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_cutSfxVolumeMultiplier", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::NoteData::get_isArcHead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_isArcHead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_isArcHead(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_isArcHead", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::NoteData::get_isArcTail() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "get_isArcTail", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::set_isArcTail(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "set_isArcTail", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapDataItem* GlobalNamespace::NoteData::GetCopy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteData*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataItem*>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::_ctor(float_t time, float_t beat, int32_t rotation, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer,
                                             ::GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer, ::GlobalNamespace::NoteData_GameplayType gameplayType,
                                             ::GlobalNamespace::NoteData_ScoringType scoringType, ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteCutDirection cutDirection,
                                             float_t timeToNextColorNote, float_t timeToPrevColorNote, int32_t flipLineIndex, float_t flipYSide, float_t cutDirectionAngleOffset,
                                             float_t cutSfxVolumeMultiplier) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(),
                          { ".ctor",
                            {},
                            { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(),
                              ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteData_GameplayType>(), ::i2c::type_of<::GlobalNamespace::NoteData_ScoringType>(),
                              ::i2c::type_of<::GlobalNamespace::ColorType>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(),
                              ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, time, beat, rotation, lineIndex, noteLineLayer, beforeJumpNoteLineLayer, gameplayType, scoringType, colorType,
                                                   cutDirection, timeToNextColorNote, timeToPrevColorNote, flipLineIndex, flipYSide, cutDirectionAngleOffset, cutSfxVolumeMultiplier);
}
inline ::GlobalNamespace::NoteData* GlobalNamespace::NoteData::CreateBombNoteData(float_t time, float_t beat, int32_t rotation, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "CreateBombNoteData",
                                                                                                              {},
                                                                                                              { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(),
                                                                                                                ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData*>(nullptr, ___internal_method, time, beat, rotation, lineIndex, noteLineLayer);
}
inline ::GlobalNamespace::NoteData* GlobalNamespace::NoteData::CreateBasicNoteData(float_t time, float_t beat, int32_t rotation, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer,
                                                                                   ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteCutDirection cutDirection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "CreateBasicNoteData",
                                                                                          {},
                                                                                          { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                            ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::ColorType>(),
                                                                                            ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData*>(nullptr, ___internal_method, time, beat, rotation, lineIndex, noteLineLayer, colorType, cutDirection);
}
inline ::GlobalNamespace::NoteData* GlobalNamespace::NoteData::CreateBurstSliderNoteData(float_t time, float_t beat, int32_t rotation, int32_t lineIndex,
                                                                                         ::GlobalNamespace::NoteLineLayer noteLineLayer, ::GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer,
                                                                                         ::GlobalNamespace::ColorType colorType, ::GlobalNamespace::NoteCutDirection cutDirection,
                                                                                         float_t cutSfxVolumeMultiplier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(),
                                                           { "CreateBurstSliderNoteData",
                                                             {},
                                                             { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(), ::i2c::type_of<::GlobalNamespace::NoteLineLayer>(),
                                                               ::i2c::type_of<::GlobalNamespace::ColorType>(), ::i2c::type_of<::GlobalNamespace::NoteCutDirection>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData*>(nullptr, ___internal_method, time, beat, rotation, lineIndex, noteLineLayer, beforeJumpNoteLineLayer, colorType,
                                                                           cutDirection, cutSfxVolumeMultiplier);
}
inline ::GlobalNamespace::NoteData*
GlobalNamespace::NoteData::CopyWith(::System::Nullable_1<float_t> time, ::System::Nullable_1<int32_t> beat, ::System::Nullable_1<int32_t> rotation, ::System::Nullable_1<int32_t> lineIndex,
                                    ::System::Nullable_1<::GlobalNamespace::NoteLineLayer> noteLineLayer, ::System::Nullable_1<::GlobalNamespace::NoteLineLayer> beforeJumpNoteLineLayer,
                                    ::System::Nullable_1<::GlobalNamespace::NoteData_GameplayType> gameplayType, ::System::Nullable_1<::GlobalNamespace::NoteData_ScoringType> scoringType,
                                    ::System::Nullable_1<::GlobalNamespace::ColorType> colorType, ::System::Nullable_1<::GlobalNamespace::NoteCutDirection> cutDirection,
                                    ::System::Nullable_1<float_t> timeToNextColorNote, ::System::Nullable_1<float_t> timeToPrevColorNote, ::System::Nullable_1<int32_t> flipLineIndex,
                                    ::System::Nullable_1<float_t> flipYSide, ::System::Nullable_1<float_t> cutDirectionAngleOffset, ::System::Nullable_1<float_t> cutSfxVolumeMultiplier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(),
                                       { "CopyWith",
                                         {},
                                         { ::i2c::type_of<::System::Nullable_1<float_t>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(),
                                           ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::NoteLineLayer>>(),
                                           ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::NoteLineLayer>>(), ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::NoteData_GameplayType>>(),
                                           ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::NoteData_ScoringType>>(), ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::ColorType>>(),
                                           ::i2c::type_of<::System::Nullable_1<::GlobalNamespace::NoteCutDirection>>(), ::i2c::type_of<::System::Nullable_1<float_t>>(),
                                           ::i2c::type_of<::System::Nullable_1<float_t>>(), ::i2c::type_of<::System::Nullable_1<int32_t>>(), ::i2c::type_of<::System::Nullable_1<float_t>>(),
                                           ::i2c::type_of<::System::Nullable_1<float_t>>(), ::i2c::type_of<::System::Nullable_1<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteData*>(this, ___internal_method, time, beat, rotation, lineIndex, noteLineLayer, beforeJumpNoteLineLayer, gameplayType, scoringType,
                                                                           colorType, cutDirection, timeToNextColorNote, timeToPrevColorNote, flipLineIndex, flipYSide, cutDirectionAngleOffset,
                                                                           cutSfxVolumeMultiplier);
}
inline void GlobalNamespace::NoteData::SetBeforeJumpNoteLineLayer(::GlobalNamespace::NoteLineLayer lineLayer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "SetBeforeJumpNoteLineLayer", {}, { ::i2c::type_of<::GlobalNamespace::NoteLineLayer>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lineLayer);
}
inline void GlobalNamespace::NoteData::ChangeToBurstSliderHead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "ChangeToBurstSliderHead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::ChangeToGameNote() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "ChangeToGameNote", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::MarkAsSliderHead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "MarkAsSliderHead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::MarkAsSliderTail() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "MarkAsSliderTail", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::SetNoteFlipToNote(::GlobalNamespace::NoteData* targetNote) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "SetNoteFlipToNote", {}, { ::i2c::type_of<::GlobalNamespace::NoteData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetNote);
}
inline void GlobalNamespace::NoteData::SetCutDirectionAngleOffset(float_t cutDirectionAngleOffset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "SetCutDirectionAngleOffset", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cutDirectionAngleOffset);
}
inline float_t GlobalNamespace::NoteData::GetCutDirectionAngleOffsetForSlider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "GetCutDirectionAngleOffsetForSlider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::ResetNoteFlip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "ResetNoteFlip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::Mirror(int32_t lineCount) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::NoteData*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lineCount);
}
inline void GlobalNamespace::NoteData::SetNoteToAnyCutDirection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "SetNoteToAnyCutDirection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::NoteData::ChangeNoteCutDirection(::GlobalNamespace::NoteCutDirection newCutDirection) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "ChangeNoteCutDirection", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newCutDirection);
}
inline void GlobalNamespace::NoteData::TransformNoteAOrBToRandomType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "TransformNoteAOrBToRandomType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t GlobalNamespace::NoteData::SubtypeIdentifier(::GlobalNamespace::ColorType colorType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoteData*>(), { "SubtypeIdentifier", {}, { ::i2c::type_of<::GlobalNamespace::ColorType>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, colorType);
}
inline ::GlobalNamespace::NoteData* GlobalNamespace::NoteData::New_ctor(float_t time, float_t beat, int32_t rotation, int32_t lineIndex, ::GlobalNamespace::NoteLineLayer noteLineLayer,
                                                                        ::GlobalNamespace::NoteLineLayer beforeJumpNoteLineLayer, ::GlobalNamespace::NoteData_GameplayType gameplayType,
                                                                        ::GlobalNamespace::NoteData_ScoringType scoringType, ::GlobalNamespace::ColorType colorType,
                                                                        ::GlobalNamespace::NoteCutDirection cutDirection, float_t timeToNextColorNote, float_t timeToPrevColorNote,
                                                                        int32_t flipLineIndex, float_t flipYSide, float_t cutDirectionAngleOffset, float_t cutSfxVolumeMultiplier) {
  return THROW_UNLESS(::i2c::no_logger{},
                      ::i2c::new_ctor<::GlobalNamespace::NoteData*>(time, beat, rotation, lineIndex, noteLineLayer, beforeJumpNoteLineLayer, gameplayType, scoringType, colorType, cutDirection,
                                                                    timeToNextColorNote, timeToPrevColorNote, flipLineIndex, flipYSide, cutDirectionAngleOffset, cutSfxVolumeMultiplier));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoteData::NoteData() {}
