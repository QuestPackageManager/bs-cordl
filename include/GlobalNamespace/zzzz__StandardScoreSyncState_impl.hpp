#pragma once
// IWYU pragma private; include "GlobalNamespace\StandardScoreSyncState.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncState_def.hpp"
#include "GlobalNamespace/zzzz__IEquatableByReference_1_def.hpp"
#include "GlobalNamespace/zzzz__IStateTable_3_def.hpp"
#include "GlobalNamespace/zzzz__StandardScoreSyncState_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::StandardScoreSyncState_Score::StandardScoreSyncState_Score(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardScoreSyncState_Score::StandardScoreSyncState_Score() {}
constexpr ::GlobalNamespace::StandardScoreSyncState_Score GlobalNamespace::StandardScoreSyncState_Score::ModifiedScore{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::StandardScoreSyncState_Score GlobalNamespace::StandardScoreSyncState_Score::MultipliedScore{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::StandardScoreSyncState_Score GlobalNamespace::StandardScoreSyncState_Score::ImmediateMaxPossibleMultipliedScore{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::StandardScoreSyncState_Score GlobalNamespace::StandardScoreSyncState_Score::Combo{ static_cast<int32_t>(0x3) };
constexpr ::GlobalNamespace::StandardScoreSyncState_Score GlobalNamespace::StandardScoreSyncState_Score::Multiplier{ static_cast<int32_t>(0x4) };
constexpr ::GlobalNamespace::StandardScoreSyncState_Score GlobalNamespace::StandardScoreSyncState_Score::Count{ static_cast<int32_t>(0x5) };
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncState.SetState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardScoreSyncState::*)(::GlobalNamespace::StandardScoreSyncState_Score, int32_t)>(
    &::GlobalNamespace::StandardScoreSyncState::SetState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x32be758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncState>(),
                                                             { "SetState", {}, { ::i2c::type_of<::GlobalNamespace::StandardScoreSyncState_Score>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncState.GetDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::StandardScoreSyncState (::GlobalNamespace::StandardScoreSyncState::*)(::by_ref<::GlobalNamespace::StandardScoreSyncState>)>(
    &::GlobalNamespace::StandardScoreSyncState::GetDelta)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x32be7a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncState>(), { "GetDelta", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::StandardScoreSyncState>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncState.ApplyDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::StandardScoreSyncState (::GlobalNamespace::StandardScoreSyncState::*)(::by_ref<::GlobalNamespace::StandardScoreSyncState>)>(
    &::GlobalNamespace::StandardScoreSyncState::ApplyDelta)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x32be7cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncState>(),
                                                                                           { "ApplyDelta", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::StandardScoreSyncState>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncState.GetState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::StandardScoreSyncState::*)(::GlobalNamespace::StandardScoreSyncState_Score)>(
    &::GlobalNamespace::StandardScoreSyncState::GetState)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32be7f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncState>(), { "GetState", {}, { ::i2c::type_of<::GlobalNamespace::StandardScoreSyncState_Score>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncState.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardScoreSyncState::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::StandardScoreSyncState::Serialize)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x32be848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncState>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncState.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardScoreSyncState::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::StandardScoreSyncState::Deserialize)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x32be904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncState>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncState.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StandardScoreSyncState::*)(::by_ref<::GlobalNamespace::StandardScoreSyncState>)>(
    &::GlobalNamespace::StandardScoreSyncState::Equals)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x32be9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncState>(), { "Equals", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::StandardScoreSyncState>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncState.GetSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::StandardScoreSyncState::*)()>(&::GlobalNamespace::StandardScoreSyncState::GetSize)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x32bea08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncState>(), { "GetSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncState.IStateTable_StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32__GetDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::StandardScoreSyncState (::GlobalNamespace::StandardScoreSyncState::*)(::by_ref<::GlobalNamespace::StandardScoreSyncState>)>(
    &::GlobalNamespace::StandardScoreSyncState::IStateTable_StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32__GetDelta)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x32beb04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::StandardScoreSyncState>(),
                         { "IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.GetDelta", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::StandardScoreSyncState>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncState.IStateTable_StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32__ApplyDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::StandardScoreSyncState (::GlobalNamespace::StandardScoreSyncState::*)(::by_ref<::GlobalNamespace::StandardScoreSyncState>)>(
    &::GlobalNamespace::StandardScoreSyncState::IStateTable_StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32__ApplyDelta)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x32beb28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncState>(), { "IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.ApplyDelta",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::by_ref<::GlobalNamespace::StandardScoreSyncState>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardScoreSyncState.IEquatableByReference_StandardScoreSyncState__Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StandardScoreSyncState::*)(::by_ref<::GlobalNamespace::StandardScoreSyncState>)>(
    &::GlobalNamespace::StandardScoreSyncState::IEquatableByReference_StandardScoreSyncState__Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32beb4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncState>(),
                                                { "IEquatableByReference<StandardScoreSyncState>.Equals", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::StandardScoreSyncState>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StandardScoreSyncState::SetState(::GlobalNamespace::StandardScoreSyncState_Score s, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncState>(),
                                                           { "SetState", {}, { ::i2c::type_of<::GlobalNamespace::StandardScoreSyncState_Score>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, s, value);
}
inline ::GlobalNamespace::StandardScoreSyncState GlobalNamespace::StandardScoreSyncState::GetDelta(::by_ref<::GlobalNamespace::StandardScoreSyncState> stateTable) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncState>(), { "GetDelta", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::StandardScoreSyncState>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StandardScoreSyncState>(*this, ___internal_method, stateTable);
}
inline ::GlobalNamespace::StandardScoreSyncState GlobalNamespace::StandardScoreSyncState::ApplyDelta(::by_ref<::GlobalNamespace::StandardScoreSyncState> delta) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncState>(), { "ApplyDelta", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::StandardScoreSyncState>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StandardScoreSyncState>(*this, ___internal_method, delta);
}
inline int32_t GlobalNamespace::StandardScoreSyncState::GetState(::GlobalNamespace::StandardScoreSyncState_Score s) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncState>(), { "GetState", {}, { ::i2c::type_of<::GlobalNamespace::StandardScoreSyncState_Score>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, s);
}
inline void GlobalNamespace::StandardScoreSyncState::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncState>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::StandardScoreSyncState::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncState>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline bool GlobalNamespace::StandardScoreSyncState::Equals(::by_ref<::GlobalNamespace::StandardScoreSyncState> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncState>(), { "Equals", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::StandardScoreSyncState>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline int32_t GlobalNamespace::StandardScoreSyncState::GetSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncState>(), { "GetSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::GlobalNamespace::StandardScoreSyncState
GlobalNamespace::StandardScoreSyncState::IStateTable_StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32__GetDelta(::by_ref<::GlobalNamespace::StandardScoreSyncState> stateTable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncState>(), { "IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.GetDelta",
                                                                                                              {},
                                                                                                              { ::i2c::type_of<::by_ref<::GlobalNamespace::StandardScoreSyncState>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StandardScoreSyncState>(*this, ___internal_method, stateTable);
}
inline ::GlobalNamespace::StandardScoreSyncState
GlobalNamespace::StandardScoreSyncState::IStateTable_StandardScoreSyncState_StandardScoreSyncState_Score_System_Int32__ApplyDelta(::by_ref<::GlobalNamespace::StandardScoreSyncState> delta) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::StandardScoreSyncState>(),
                       { "IStateTable<StandardScoreSyncState,StandardScoreSyncState.Score,System.Int32>.ApplyDelta", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::StandardScoreSyncState>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::StandardScoreSyncState>(*this, ___internal_method, delta);
}
inline bool GlobalNamespace::StandardScoreSyncState::IEquatableByReference_StandardScoreSyncState__Equals(::by_ref<::GlobalNamespace::StandardScoreSyncState> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardScoreSyncState>(),
                                                           { "IEquatableByReference<StandardScoreSyncState>.Equals", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::StandardScoreSyncState>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::GlobalNamespace::IStateTable_3<::GlobalNamespace::StandardScoreSyncState,::GlobalNamespace::StandardScoreSyncState_Score,int32_t>"
constexpr GlobalNamespace::StandardScoreSyncState::operator ::GlobalNamespace::IStateTable_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t>*() {
  return static_cast<::GlobalNamespace::IStateTable_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t>*>(
      static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::GlobalNamespace::IStateTable_3<::GlobalNamespace::StandardScoreSyncState,::GlobalNamespace::StandardScoreSyncState_Score,int32_t>"
constexpr ::GlobalNamespace::IStateTable_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t>*
GlobalNamespace::StandardScoreSyncState::i___GlobalNamespace__IStateTable_3___GlobalNamespace__StandardScoreSyncState___GlobalNamespace__StandardScoreSyncState_Score_int32_t_() {
  return static_cast<::GlobalNamespace::IStateTable_3<::GlobalNamespace::StandardScoreSyncState, ::GlobalNamespace::StandardScoreSyncState_Score, int32_t>*>(
      static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::StandardScoreSyncState::operator ::LiteNetLib::Utils::INetSerializable*() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::StandardScoreSyncState::i___LiteNetLib__Utils__INetSerializable() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StandardScoreSyncState>"
constexpr GlobalNamespace::StandardScoreSyncState::operator ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StandardScoreSyncState>*() {
  return static_cast<::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StandardScoreSyncState>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StandardScoreSyncState>"
constexpr ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StandardScoreSyncState>*
GlobalNamespace::StandardScoreSyncState::i___GlobalNamespace__IEquatableByReference_1___GlobalNamespace__StandardScoreSyncState_() {
  return static_cast<::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::StandardScoreSyncState>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_modifiedScore", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_multipliedScore", ty: "int32_t", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "_immediateMaxPossibleMultipliedScore", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_combo", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "_multiplier", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::StandardScoreSyncState::StandardScoreSyncState(int32_t _modifiedScore, int32_t _multipliedScore, int32_t _immediateMaxPossibleMultipliedScore, int32_t _combo,
                                                                            int32_t _multiplier) noexcept {
  this->_modifiedScore = _modifiedScore;
  this->_multipliedScore = _multipliedScore;
  this->_immediateMaxPossibleMultipliedScore = _immediateMaxPossibleMultipliedScore;
  this->_combo = _combo;
  this->_multiplier = _multiplier;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardScoreSyncState::StandardScoreSyncState() {}
