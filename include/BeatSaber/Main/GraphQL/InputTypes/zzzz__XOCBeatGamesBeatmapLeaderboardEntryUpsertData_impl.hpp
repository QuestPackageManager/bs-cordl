#pragma once
// IWYU pragma private; include "BeatSaber\Main\GraphQL\InputTypes\XOCBeatGamesBeatmapLeaderboardEntryUpsertData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Main/GraphQL/InputTypes/zzzz__XOCBeatGamesBeatmapLeaderboardEntryUpsertData_def.hpp"
#include "BeatSaber/Main/GraphQL/Enums/zzzz__XOCBeatGamesBeatmapCharacteristic_def.hpp"
#include "BeatSaber/Main/GraphQL/Enums/zzzz__XOCBeatGamesBeatmapDifficulty_def.hpp"
#include "BeatSaber/Main/GraphQL/InputTypes/zzzz__IXOCBeatGamesBeatmapLeaderboardEntryUpsertData_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLInputObject_def.hpp"
#include "OculusStudios/GraphQL/ClientInterface/zzzz__IGraphQLInputSupportsClientMutationId_def.hpp"
#include "System/Collections/Generic/zzzz__IDictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__SortedDictionary_2_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData.set_AccuracyScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::*)(::System::Nullable_1<int64_t>)>(
    &::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_AccuracyScore)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x32a11c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                                                           { "set_AccuracyScore", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData.set_BadCutsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::*)(int64_t)>(
    &::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_BadCutsCount)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x32a127c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                                                           { "set_BadCutsCount", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData.set_Characteristic
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::*)(
    ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic)>(&::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_Characteristic)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x32a1314;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                             { "set_Characteristic", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData.set_ClientMutationId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::*)(::StringW)>(
    &::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_ClientMutationId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32a13c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                                                           { "set_ClientMutationId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData.set_ClientSongId
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::*)(::StringW)>(
    &::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_ClientSongId)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32a1440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                                                           { "set_ClientSongId", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData.set_CutAngle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::*)(::System::Nullable_1<int64_t>)>(
    &::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_CutAngle)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x32a14c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                                                           { "set_CutAngle", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData.set_Difficulty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::*)(
    ::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty)>(&::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_Difficulty)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x32a1578;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                             { "set_Difficulty", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData.set_MaxPerfectCombo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::*)(::System::Nullable_1<int64_t>)>(
    &::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_MaxPerfectCombo)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x32a1624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                                                           { "set_MaxPerfectCombo", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData.set_MissedCutsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::*)(int64_t)>(
    &::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_MissedCutsCount)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x32a16dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                                                           { "set_MissedCutsCount", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData.set_ModifierMask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::*)(int64_t)>(
    &::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_ModifierMask)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x32a1774;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                                                           { "set_ModifierMask", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData.set_PausesCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::*)(::System::Nullable_1<int64_t>)>(
    &::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_PausesCount)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x32a180c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                                                           { "set_PausesCount", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData.set_PlayerRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::*)(::StringW)>(
    &::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_PlayerRoot)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x32a18c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                                                           { "set_PlayerRoot", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData.set_Score
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::*)(int64_t)>(
    &::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_Score)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x32a1944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                                                           { "set_Score", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData.set_SwingScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::*)(::System::Nullable_1<int64_t>)>(
    &::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_SwingScore)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x32a19dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                                                           { "set_SwingScore", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData.GetParams
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* (
    ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::*)()>(&::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::GetParams)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x32a1a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(), { "GetParams", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::*)()>(
    &::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x32a1aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>*&
BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::__cordl_internal_get__params() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____params;
}
constexpr ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>* const&
BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::__cordl_internal_get__params() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____params;
}
constexpr void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::__cordl_internal_set__params(
    ::System::Collections::Generic::SortedDictionary_2<::StringW, ::System::Object*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____params = value;
}
inline void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_AccuracyScore(::System::Nullable_1<int64_t> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                                                         { "set_AccuracyScore", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_BadCutsCount(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                                                         { "set_BadCutsCount", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_Characteristic(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                           { "set_Characteristic", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapCharacteristic>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_ClientMutationId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                                                         { "set_ClientMutationId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_ClientSongId(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                                                         { "set_ClientSongId", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_CutAngle(::System::Nullable_1<int64_t> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                                                         { "set_CutAngle", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_Difficulty(::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                           { "set_Difficulty", {}, { ::i2c::type_of<::BeatSaber::Main::GraphQL::Enums::XOCBeatGamesBeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_MaxPerfectCombo(::System::Nullable_1<int64_t> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                                                         { "set_MaxPerfectCombo", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_MissedCutsCount(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                                                         { "set_MissedCutsCount", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_ModifierMask(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                                                         { "set_ModifierMask", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_PausesCount(::System::Nullable_1<int64_t> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                                                         { "set_PausesCount", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_PlayerRoot(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                                                         { "set_PlayerRoot", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_Score(int64_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(), { "set_Score", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::set_SwingScore(::System::Nullable_1<int64_t> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(),
                                                                                         { "set_SwingScore", {}, { ::i2c::type_of<::System::Nullable_1<int64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>* BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::GetParams() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(), { "GetParams", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IDictionary_2<::StringW, ::System::Object*>*>(this, ___internal_method);
}
inline void BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData* BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData*>());
}
/// @brief Convert operator to "::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryUpsertData"
constexpr BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::operator ::BeatSaber::Main::GraphQL::InputTypes::
    IXOCBeatGamesBeatmapLeaderboardEntryUpsertData*() noexcept {
  return static_cast<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(static_cast<void*>(this));
}
/// @brief Convert to "::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryUpsertData"
constexpr ::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryUpsertData*
BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::i___BeatSaber__Main__GraphQL__InputTypes__IXOCBeatGamesBeatmapLeaderboardEntryUpsertData() noexcept {
  return static_cast<::BeatSaber::Main::GraphQL::InputTypes::IXOCBeatGamesBeatmapLeaderboardEntryUpsertData*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject"
constexpr BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject"
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*
BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::i___OculusStudios__GraphQL__ClientInterface__IGraphQLInputObject() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLInputObject*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId"
constexpr BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::operator ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId*() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId*>(static_cast<void*>(this));
}
/// @brief Convert to "::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId"
constexpr ::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId*
BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::i___OculusStudios__GraphQL__ClientInterface__IGraphQLInputSupportsClientMutationId() noexcept {
  return static_cast<::OculusStudios::GraphQL::ClientInterface::IGraphQLInputSupportsClientMutationId*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::BeatSaber::Main::GraphQL::InputTypes::XOCBeatGamesBeatmapLeaderboardEntryUpsertData::XOCBeatGamesBeatmapLeaderboardEntryUpsertData() {}
