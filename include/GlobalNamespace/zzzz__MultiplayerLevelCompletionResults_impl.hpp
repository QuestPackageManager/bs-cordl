#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerLevelCompletionResults.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelCompletionResults_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetImmutableSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/zzzz__IComparable_def.hpp"
#include "System/zzzz__Object_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState() {}
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState::SongFinished{
  static_cast<int32_t>(0x0)
};
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState::NotFinished{
  static_cast<int32_t>(0x1)
};
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState::NotStarted{
  static_cast<int32_t>(0x2)
};
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason() {}
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason::Cleared{
  static_cast<int32_t>(0x0)
};
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason::Failed{
  static_cast<int32_t>(0x1)
};
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason::GivenUp{
  static_cast<int32_t>(0x2)
};
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason::Quit{
  static_cast<int32_t>(0x3)
};
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason::HostEndedLevel{
  static_cast<int32_t>(0x4)
};
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason::WasInactive{
  static_cast<int32_t>(0x5)
};
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason::StartupFailed{
  static_cast<int32_t>(0x6)
};
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason
    GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason::ConnectedAfterLevelEnded{ static_cast<int32_t>(0x7) };
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.get_playerLevelEndState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState (::GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(
    &::GlobalNamespace::MultiplayerLevelCompletionResults::get_playerLevelEndState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b87d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(), { "get_playerLevelEndState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.get_playerLevelEndReason
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason (
    ::GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(&::GlobalNamespace::MultiplayerLevelCompletionResults::get_playerLevelEndReason)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b87e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(), { "get_playerLevelEndReason", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.get_levelCompletionResults
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LevelCompletionResults* (::GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(
    &::GlobalNamespace::MultiplayerLevelCompletionResults::get_levelCompletionResults)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x32b87e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(), { "get_levelCompletionResults", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.get_hasAnyResults
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(&::GlobalNamespace::MultiplayerLevelCompletionResults::get_hasAnyResults)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x32b87f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(), { "get_hasAnyResults", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.get_failedOrGivenUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(&::GlobalNamespace::MultiplayerLevelCompletionResults::get_failedOrGivenUp)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x32b880c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(), { "get_failedOrGivenUp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelCompletionResults::*)()>(&::GlobalNamespace::MultiplayerLevelCompletionResults::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32b8820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelCompletionResults::*)(
    ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState, ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason,
    ::GlobalNamespace::LevelCompletionResults*)>(&::GlobalNamespace::MultiplayerLevelCompletionResults::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x32b8824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelCompletionResults::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::MultiplayerLevelCompletionResults::Serialize)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x32b8830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.CreateFromSerializedData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerLevelCompletionResults* (
    ::GlobalNamespace::MultiplayerLevelCompletionResults::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::MultiplayerLevelCompletionResults::CreateFromSerializedData)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x32b88bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(),
                                                                                           { "CreateFromSerializedData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.CompareTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MultiplayerLevelCompletionResults::*)(::System::Object*)>(
    &::GlobalNamespace::MultiplayerLevelCompletionResults::CompareTo)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x32b8964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelCompletionResults.HasAnyResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState)>(
    &::GlobalNamespace::MultiplayerLevelCompletionResults::HasAnyResult)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x32b8800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(),
                                                             { "HasAnyResult", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState& GlobalNamespace::MultiplayerLevelCompletionResults::__cordl_internal_get__playerLevelEndState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerLevelEndState;
}
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState const&
GlobalNamespace::MultiplayerLevelCompletionResults::__cordl_internal_get__playerLevelEndState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerLevelEndState;
}
constexpr void
GlobalNamespace::MultiplayerLevelCompletionResults::__cordl_internal_set__playerLevelEndState(::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerLevelEndState = value;
}
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason& GlobalNamespace::MultiplayerLevelCompletionResults::__cordl_internal_get__playerLevelEndReason() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerLevelEndReason;
}
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason const&
GlobalNamespace::MultiplayerLevelCompletionResults::__cordl_internal_get__playerLevelEndReason() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerLevelEndReason;
}
constexpr void
GlobalNamespace::MultiplayerLevelCompletionResults::__cordl_internal_set__playerLevelEndReason(::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerLevelEndReason = value;
}
constexpr ::GlobalNamespace::LevelCompletionResults*& GlobalNamespace::MultiplayerLevelCompletionResults::__cordl_internal_get__levelCompletionResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelCompletionResults;
}
constexpr ::GlobalNamespace::LevelCompletionResults* const& GlobalNamespace::MultiplayerLevelCompletionResults::__cordl_internal_get__levelCompletionResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____levelCompletionResults;
}
constexpr void GlobalNamespace::MultiplayerLevelCompletionResults::__cordl_internal_set__levelCompletionResults(::GlobalNamespace::LevelCompletionResults* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____levelCompletionResults = value;
}
inline ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState GlobalNamespace::MultiplayerLevelCompletionResults::get_playerLevelEndState() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(), { "get_playerLevelEndState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason GlobalNamespace::MultiplayerLevelCompletionResults::get_playerLevelEndReason() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(), { "get_playerLevelEndReason", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason>(this, ___internal_method);
}
inline ::GlobalNamespace::LevelCompletionResults* GlobalNamespace::MultiplayerLevelCompletionResults::get_levelCompletionResults() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(), { "get_levelCompletionResults", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LevelCompletionResults*>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerLevelCompletionResults::get_hasAnyResults() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(), { "get_hasAnyResults", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::MultiplayerLevelCompletionResults::get_failedOrGivenUp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(), { "get_failedOrGivenUp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLevelCompletionResults::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLevelCompletionResults::_ctor(::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState playerLevelEndState,
                                                                      ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason playerLevelEndReason,
                                                                      ::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerLevelEndState, playerLevelEndReason, levelCompletionResults);
}
inline void GlobalNamespace::MultiplayerLevelCompletionResults::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer);
}
inline ::GlobalNamespace::MultiplayerLevelCompletionResults* GlobalNamespace::MultiplayerLevelCompletionResults::CreateFromSerializedData(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(),
                                                                                         { "CreateFromSerializedData", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerLevelCompletionResults*>(this, ___internal_method, reader);
}
inline int32_t GlobalNamespace::MultiplayerLevelCompletionResults::CompareTo(::System::Object* obj) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(), { "CompareTo", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, obj);
}
inline bool GlobalNamespace::MultiplayerLevelCompletionResults::HasAnyResult(::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState playerLevelEndState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelCompletionResults*>(),
                                                           { "HasAnyResult", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, playerLevelEndState);
}
inline ::GlobalNamespace::MultiplayerLevelCompletionResults* GlobalNamespace::MultiplayerLevelCompletionResults::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerLevelCompletionResults*>());
}
inline ::GlobalNamespace::MultiplayerLevelCompletionResults*
GlobalNamespace::MultiplayerLevelCompletionResults::New_ctor(::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndState playerLevelEndState,
                                                             ::GlobalNamespace::MultiplayerLevelCompletionResults_MultiplayerPlayerLevelEndReason playerLevelEndReason,
                                                             ::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerLevelCompletionResults*>(playerLevelEndState, playerLevelEndReason, levelCompletionResults));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>"
constexpr GlobalNamespace::MultiplayerLevelCompletionResults::operator ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>"
constexpr ::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*
GlobalNamespace::MultiplayerLevelCompletionResults::i___LiteNetLib__Utils__INetImmutableSerializable_1___GlobalNamespace__MultiplayerLevelCompletionResults__() noexcept {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable_1<::GlobalNamespace::MultiplayerLevelCompletionResults*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetImmutableSerializable"
constexpr GlobalNamespace::MultiplayerLevelCompletionResults::operator ::LiteNetLib::Utils::INetImmutableSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::LiteNetLib::Utils::INetImmutableSerializable"
constexpr ::LiteNetLib::Utils::INetImmutableSerializable* GlobalNamespace::MultiplayerLevelCompletionResults::i___LiteNetLib__Utils__INetImmutableSerializable() noexcept {
  return static_cast<::LiteNetLib::Utils::INetImmutableSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IComparable"
constexpr GlobalNamespace::MultiplayerLevelCompletionResults::operator ::System::IComparable*() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IComparable"
constexpr ::System::IComparable* GlobalNamespace::MultiplayerLevelCompletionResults::i___System__IComparable() noexcept {
  return static_cast<::System::IComparable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLevelCompletionResults::MultiplayerLevelCompletionResults() {}
