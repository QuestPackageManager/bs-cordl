#pragma once
// IWYU pragma private; include "GlobalNamespace/NodePoseSyncState.hpp"
#include "GlobalNamespace/zzzz__PoseSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "GlobalNamespace/zzzz__IEquatableByReference_1_def.hpp"
#include "GlobalNamespace/zzzz__IStateTable_3_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "GlobalNamespace/zzzz__PoseSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NodePoseSyncState_NodePose::NodePoseSyncState_NodePose(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NodePoseSyncState_NodePose::NodePoseSyncState_NodePose() {}
constexpr ::GlobalNamespace::NodePoseSyncState_NodePose GlobalNamespace::NodePoseSyncState_NodePose::Head{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::NodePoseSyncState_NodePose GlobalNamespace::NodePoseSyncState_NodePose::LeftController{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::NodePoseSyncState_NodePose GlobalNamespace::NodePoseSyncState_NodePose::RightController{ static_cast<int32_t>(0x2) };
constexpr ::GlobalNamespace::NodePoseSyncState_NodePose GlobalNamespace::NodePoseSyncState_NodePose::Count{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.Serialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NodePoseSyncState::*)(::LiteNetLib::Utils::NetDataWriter*)>(&::GlobalNamespace::NodePoseSyncState::Serialize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32bc0fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NodePoseSyncState>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.Deserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NodePoseSyncState::*)(::LiteNetLib::Utils::NetDataReader*)>(&::GlobalNamespace::NodePoseSyncState::Deserialize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x32bc154;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NodePoseSyncState>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.SetState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NodePoseSyncState::*)(::GlobalNamespace::NodePoseSyncState_NodePose, ::GlobalNamespace::PoseSerializable)>(
    &::GlobalNamespace::NodePoseSyncState::SetState)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x32bc1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NodePoseSyncState>(),
                                                { "SetState", {}, { ::i2c::type_of<::GlobalNamespace::NodePoseSyncState_NodePose>(), ::i2c::type_of<::GlobalNamespace::PoseSerializable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.GetState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PoseSerializable (::GlobalNamespace::NodePoseSyncState::*)(::GlobalNamespace::NodePoseSyncState_NodePose)>(
    &::GlobalNamespace::NodePoseSyncState::GetState)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x32bc1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NodePoseSyncState>(), { "GetState", {}, { ::i2c::type_of<::GlobalNamespace::NodePoseSyncState_NodePose>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NodePoseSyncState::*)(::by_ref<::GlobalNamespace::NodePoseSyncState>)>(&::GlobalNamespace::NodePoseSyncState::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x32bc22c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NodePoseSyncState>(), { "Equals", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::NodePoseSyncState>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.GetDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NodePoseSyncState (::GlobalNamespace::NodePoseSyncState::*)(::by_ref<::GlobalNamespace::NodePoseSyncState>)>(
    &::GlobalNamespace::NodePoseSyncState::GetDelta)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x32bc2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NodePoseSyncState>(), { "GetDelta", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::NodePoseSyncState>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.ApplyDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NodePoseSyncState (::GlobalNamespace::NodePoseSyncState::*)(::by_ref<::GlobalNamespace::NodePoseSyncState>)>(
    &::GlobalNamespace::NodePoseSyncState::ApplyDelta)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x32bc3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NodePoseSyncState>(), { "ApplyDelta", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::NodePoseSyncState>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.GetSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::NodePoseSyncState::*)()>(&::GlobalNamespace::NodePoseSyncState::GetSize)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x32bc508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NodePoseSyncState>(), { "GetSize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.IStateTable_NodePoseSyncState_NodePoseSyncState_NodePose_PoseSerializable__GetDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NodePoseSyncState (::GlobalNamespace::NodePoseSyncState::*)(::by_ref<::GlobalNamespace::NodePoseSyncState>)>(
    &::GlobalNamespace::NodePoseSyncState::IStateTable_NodePoseSyncState_NodePoseSyncState_NodePose_PoseSerializable__GetDelta)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x32bc584;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NodePoseSyncState>(),
                            { "IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.GetDelta", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::NodePoseSyncState>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.IStateTable_NodePoseSyncState_NodePoseSyncState_NodePose_PoseSerializable__ApplyDelta
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NodePoseSyncState (::GlobalNamespace::NodePoseSyncState::*)(::by_ref<::GlobalNamespace::NodePoseSyncState>)>(
    &::GlobalNamespace::NodePoseSyncState::IStateTable_NodePoseSyncState_NodePoseSyncState_NodePose_PoseSerializable__ApplyDelta)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x32bc5b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NodePoseSyncState>(),
                            { "IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.ApplyDelta", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::NodePoseSyncState>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.IEquatableByReference_NodePoseSyncState__Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::NodePoseSyncState::*)(::by_ref<::GlobalNamespace::NodePoseSyncState>)>(
    &::GlobalNamespace::NodePoseSyncState::IEquatableByReference_NodePoseSyncState__Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x32bc5e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NodePoseSyncState>(),
                                                             { "IEquatableByReference<NodePoseSyncState>.Equals", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::NodePoseSyncState>>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NodePoseSyncState::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NodePoseSyncState>(), { "Serialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataWriter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, writer);
}
inline void GlobalNamespace::NodePoseSyncState::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NodePoseSyncState>(), { "Deserialize", {}, { ::i2c::type_of<::LiteNetLib::Utils::NetDataReader*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, reader);
}
inline void GlobalNamespace::NodePoseSyncState::SetState(::GlobalNamespace::NodePoseSyncState_NodePose nodePose, ::GlobalNamespace::PoseSerializable pose) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NodePoseSyncState>(),
                                              { "SetState", {}, { ::i2c::type_of<::GlobalNamespace::NodePoseSyncState_NodePose>(), ::i2c::type_of<::GlobalNamespace::PoseSerializable>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, nodePose, pose);
}
inline ::GlobalNamespace::PoseSerializable GlobalNamespace::NodePoseSyncState::GetState(::GlobalNamespace::NodePoseSyncState_NodePose nodePose) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NodePoseSyncState>(), { "GetState", {}, { ::i2c::type_of<::GlobalNamespace::NodePoseSyncState_NodePose>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable>(*this, ___internal_method, nodePose);
}
inline bool GlobalNamespace::NodePoseSyncState::Equals(::by_ref<::GlobalNamespace::NodePoseSyncState> other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NodePoseSyncState>(), { "Equals", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::NodePoseSyncState>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::GlobalNamespace::NodePoseSyncState GlobalNamespace::NodePoseSyncState::GetDelta(::by_ref<::GlobalNamespace::NodePoseSyncState> latest) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NodePoseSyncState>(), { "GetDelta", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::NodePoseSyncState>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NodePoseSyncState>(*this, ___internal_method, latest);
}
inline ::GlobalNamespace::NodePoseSyncState GlobalNamespace::NodePoseSyncState::ApplyDelta(::by_ref<::GlobalNamespace::NodePoseSyncState> delta) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NodePoseSyncState>(), { "ApplyDelta", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::NodePoseSyncState>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NodePoseSyncState>(*this, ___internal_method, delta);
}
inline int32_t GlobalNamespace::NodePoseSyncState::GetSize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NodePoseSyncState>(), { "GetSize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::GlobalNamespace::NodePoseSyncState
GlobalNamespace::NodePoseSyncState::IStateTable_NodePoseSyncState_NodePoseSyncState_NodePose_PoseSerializable__GetDelta(::by_ref<::GlobalNamespace::NodePoseSyncState> stateTable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NodePoseSyncState>(),
                          { "IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.GetDelta", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::NodePoseSyncState>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NodePoseSyncState>(*this, ___internal_method, stateTable);
}
inline ::GlobalNamespace::NodePoseSyncState
GlobalNamespace::NodePoseSyncState::IStateTable_NodePoseSyncState_NodePoseSyncState_NodePose_PoseSerializable__ApplyDelta(::by_ref<::GlobalNamespace::NodePoseSyncState> delta) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NodePoseSyncState>(),
                          { "IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.ApplyDelta", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::NodePoseSyncState>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NodePoseSyncState>(*this, ___internal_method, delta);
}
inline bool GlobalNamespace::NodePoseSyncState::IEquatableByReference_NodePoseSyncState__Equals(::by_ref<::GlobalNamespace::NodePoseSyncState> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NodePoseSyncState>(),
                                                           { "IEquatableByReference<NodePoseSyncState>.Equals", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::NodePoseSyncState>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::GlobalNamespace::IStateTable_3<::GlobalNamespace::NodePoseSyncState,::GlobalNamespace::NodePoseSyncState_NodePose,::GlobalNamespace::PoseSerializable>"
constexpr GlobalNamespace::NodePoseSyncState::operator ::GlobalNamespace::IStateTable_3<::GlobalNamespace::NodePoseSyncState, ::GlobalNamespace::NodePoseSyncState_NodePose,
                                                                                        ::GlobalNamespace::PoseSerializable>*() {
  return static_cast<::GlobalNamespace::IStateTable_3<::GlobalNamespace::NodePoseSyncState, ::GlobalNamespace::NodePoseSyncState_NodePose, ::GlobalNamespace::PoseSerializable>*>(
      static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::GlobalNamespace::IStateTable_3<::GlobalNamespace::NodePoseSyncState,::GlobalNamespace::NodePoseSyncState_NodePose,::GlobalNamespace::PoseSerializable>"
constexpr ::GlobalNamespace::IStateTable_3<::GlobalNamespace::NodePoseSyncState, ::GlobalNamespace::NodePoseSyncState_NodePose, ::GlobalNamespace::PoseSerializable>*
GlobalNamespace::NodePoseSyncState::i___GlobalNamespace__IStateTable_3___GlobalNamespace__NodePoseSyncState___GlobalNamespace__NodePoseSyncState_NodePose___GlobalNamespace__PoseSerializable_() {
  return static_cast<::GlobalNamespace::IStateTable_3<::GlobalNamespace::NodePoseSyncState, ::GlobalNamespace::NodePoseSyncState_NodePose, ::GlobalNamespace::PoseSerializable>*>(
      static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::NodePoseSyncState::operator ::LiteNetLib::Utils::INetSerializable*() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::NodePoseSyncState::i___LiteNetLib__Utils__INetSerializable() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::NodePoseSyncState>"
constexpr GlobalNamespace::NodePoseSyncState::operator ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::NodePoseSyncState>*() {
  return static_cast<::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::NodePoseSyncState>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::NodePoseSyncState>"
constexpr ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::NodePoseSyncState>*
GlobalNamespace::NodePoseSyncState::i___GlobalNamespace__IEquatableByReference_1___GlobalNamespace__NodePoseSyncState_() {
  return static_cast<::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::NodePoseSyncState>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_head", ty: "::GlobalNamespace::PoseSerializable", modifiers: "", def_value: Some("{}") }, CppParam { name: "_leftController", ty:
// "::GlobalNamespace::PoseSerializable", modifiers: "", def_value: Some("{}") }, CppParam { name: "_rightController", ty: "::GlobalNamespace::PoseSerializable", modifiers: "", def_value: Some("{}")
// }]
constexpr ::GlobalNamespace::NodePoseSyncState::NodePoseSyncState(::GlobalNamespace::PoseSerializable _head, ::GlobalNamespace::PoseSerializable _leftController,
                                                                  ::GlobalNamespace::PoseSerializable _rightController) noexcept {
  this->_head = _head;
  this->_leftController = _leftController;
  this->_rightController = _rightController;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NodePoseSyncState::NodePoseSyncState() {}
