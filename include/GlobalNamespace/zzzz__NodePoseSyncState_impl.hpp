#pragma once
// IWYU pragma private; include "GlobalNamespace/NodePoseSyncState.hpp"
#include "GlobalNamespace/zzzz__IEquatableByReference_1_impl.hpp"
#include "GlobalNamespace/zzzz__IStateTable_3_impl.hpp"
#include "GlobalNamespace/zzzz__PoseSerializable_impl.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_impl.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "GlobalNamespace/zzzz__PoseSerializable_def.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncState::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::NodePoseSyncState::Serialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22e9ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncState::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::NodePoseSyncState::Deserialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x22e9af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.SetState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (::GlobalNamespace::NodePoseSyncState::*)(::GlobalNamespace::NodePoseSyncState_NodePose, ::GlobalNamespace::PoseSerializable)>(&::GlobalNamespace::NodePoseSyncState::SetState)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x22e9b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(), "SetState", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodePoseSyncState_NodePose>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.GetState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::PoseSerializable (::GlobalNamespace::NodePoseSyncState::*)(::GlobalNamespace::NodePoseSyncState_NodePose)>(&::GlobalNamespace::NodePoseSyncState::GetState)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x22e9b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(), "GetState", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodePoseSyncState_NodePose>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::NodePoseSyncState::*)(::ByRef<::GlobalNamespace::NodePoseSyncState>)>(
    &::GlobalNamespace::NodePoseSyncState::Equals)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x22e9bd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::NodePoseSyncState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.GetDelta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::NodePoseSyncState (::GlobalNamespace::NodePoseSyncState::*)(::ByRef<::GlobalNamespace::NodePoseSyncState>)>(&::GlobalNamespace::NodePoseSyncState::GetDelta)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x22e9c68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(), "GetDelta", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::NodePoseSyncState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.ApplyDelta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::NodePoseSyncState (::GlobalNamespace::NodePoseSyncState::*)(::ByRef<::GlobalNamespace::NodePoseSyncState>)>(&::GlobalNamespace::NodePoseSyncState::ApplyDelta)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x22e9d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(), "ApplyDelta", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::NodePoseSyncState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.GetSize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::NodePoseSyncState::*)()>(&::GlobalNamespace::NodePoseSyncState::GetSize)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x22e9e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(), "GetSize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.IStateTable_NodePoseSyncState_NodePoseSyncState_NodePose_PoseSerializable__GetDelta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NodePoseSyncState (::GlobalNamespace::NodePoseSyncState::*)(
    ::ByRef<::GlobalNamespace::NodePoseSyncState>)>(&::GlobalNamespace::NodePoseSyncState::IStateTable_NodePoseSyncState_NodePoseSyncState_NodePose_PoseSerializable__GetDelta)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22e9ed0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(), "IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.GetDelta",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::NodePoseSyncState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.IStateTable_NodePoseSyncState_NodePoseSyncState_NodePose_PoseSerializable__ApplyDelta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NodePoseSyncState (::GlobalNamespace::NodePoseSyncState::*)(
    ::ByRef<::GlobalNamespace::NodePoseSyncState>)>(&::GlobalNamespace::NodePoseSyncState::IStateTable_NodePoseSyncState_NodePoseSyncState_NodePose_PoseSerializable__ApplyDelta)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x22e9f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(), "IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.ApplyDelta",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::NodePoseSyncState>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncState.IEquatableByReference_NodePoseSyncState__Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::NodePoseSyncState::*)(::ByRef<::GlobalNamespace::NodePoseSyncState>)>(
    &::GlobalNamespace::NodePoseSyncState::IEquatableByReference_NodePoseSyncState__Equals)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x22e9f30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(), "IEquatableByReference<NodePoseSyncState>.Equals",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::NodePoseSyncState>>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::NodePoseSyncState::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(), "Serialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::NodePoseSyncState::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(), "Deserialize", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void GlobalNamespace::NodePoseSyncState::SetState(::GlobalNamespace::NodePoseSyncState_NodePose nodePose, ::GlobalNamespace::PoseSerializable pose) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(), "SetState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodePoseSyncState_NodePose>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PoseSerializable>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, nodePose, pose);
}
inline ::GlobalNamespace::PoseSerializable GlobalNamespace::NodePoseSyncState::GetState(::GlobalNamespace::NodePoseSyncState_NodePose nodePose) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(), "GetState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodePoseSyncState_NodePose>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PoseSerializable, false>(this, ___internal_method, nodePose);
}
inline bool GlobalNamespace::NodePoseSyncState::Equals(::ByRef<::GlobalNamespace::NodePoseSyncState> other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::NodePoseSyncState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::GlobalNamespace::NodePoseSyncState GlobalNamespace::NodePoseSyncState::GetDelta(::ByRef<::GlobalNamespace::NodePoseSyncState> latest) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(), "GetDelta", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::NodePoseSyncState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NodePoseSyncState, false>(this, ___internal_method, latest);
}
inline ::GlobalNamespace::NodePoseSyncState GlobalNamespace::NodePoseSyncState::ApplyDelta(::ByRef<::GlobalNamespace::NodePoseSyncState> delta) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(), "ApplyDelta", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::NodePoseSyncState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NodePoseSyncState, false>(this, ___internal_method, delta);
}
inline int32_t GlobalNamespace::NodePoseSyncState::GetSize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(), "GetSize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NodePoseSyncState
GlobalNamespace::NodePoseSyncState::IStateTable_NodePoseSyncState_NodePoseSyncState_NodePose_PoseSerializable__GetDelta(::ByRef<::GlobalNamespace::NodePoseSyncState> stateTable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(), "IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.GetDelta",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::NodePoseSyncState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NodePoseSyncState, false>(this, ___internal_method, stateTable);
}
inline ::GlobalNamespace::NodePoseSyncState
GlobalNamespace::NodePoseSyncState::IStateTable_NodePoseSyncState_NodePoseSyncState_NodePose_PoseSerializable__ApplyDelta(::ByRef<::GlobalNamespace::NodePoseSyncState> delta) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(), "IStateTable<NodePoseSyncState,NodePoseSyncState.NodePose,PoseSerializable>.ApplyDelta",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::NodePoseSyncState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NodePoseSyncState, false>(this, ___internal_method, delta);
}
inline bool GlobalNamespace::NodePoseSyncState::IEquatableByReference_NodePoseSyncState__Equals(::ByRef<::GlobalNamespace::NodePoseSyncState> other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncState>::get(), "IEquatableByReference<NodePoseSyncState>.Equals", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::NodePoseSyncState>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
/// @brief Convert operator to "::GlobalNamespace::IStateTable_3<::GlobalNamespace::NodePoseSyncState,::GlobalNamespace::NodePoseSyncState_NodePose,::GlobalNamespace::PoseSerializable>"
constexpr GlobalNamespace::NodePoseSyncState::operator ::GlobalNamespace::IStateTable_3<::GlobalNamespace::NodePoseSyncState, ::GlobalNamespace::NodePoseSyncState_NodePose,
                                                                                        ::GlobalNamespace::PoseSerializable>*() {
  return static_cast<::GlobalNamespace::IStateTable_3<::GlobalNamespace::NodePoseSyncState, ::GlobalNamespace::NodePoseSyncState_NodePose, ::GlobalNamespace::PoseSerializable>*>(
      static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::GlobalNamespace::IStateTable_3<::GlobalNamespace::NodePoseSyncState,::GlobalNamespace::NodePoseSyncState_NodePose,::GlobalNamespace::PoseSerializable>"
constexpr ::GlobalNamespace::IStateTable_3<::GlobalNamespace::NodePoseSyncState, ::GlobalNamespace::NodePoseSyncState_NodePose, ::GlobalNamespace::PoseSerializable>*
GlobalNamespace::NodePoseSyncState::i___GlobalNamespace__IStateTable_3___GlobalNamespace__NodePoseSyncState___GlobalNamespace__NodePoseSyncState_NodePose___GlobalNamespace__PoseSerializable_() {
  return static_cast<::GlobalNamespace::IStateTable_3<::GlobalNamespace::NodePoseSyncState, ::GlobalNamespace::NodePoseSyncState_NodePose, ::GlobalNamespace::PoseSerializable>*>(
      static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::NodePoseSyncState::operator ::LiteNetLib::Utils::INetSerializable*() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::LiteNetLib::Utils::INetSerializable"
constexpr ::LiteNetLib::Utils::INetSerializable* GlobalNamespace::NodePoseSyncState::i___LiteNetLib__Utils__INetSerializable() {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::NodePoseSyncState>"
constexpr GlobalNamespace::NodePoseSyncState::operator ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::NodePoseSyncState>*() {
  return static_cast<::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::NodePoseSyncState>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::NodePoseSyncState>"
constexpr ::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::NodePoseSyncState>*
GlobalNamespace::NodePoseSyncState::i___GlobalNamespace__IEquatableByReference_1___GlobalNamespace__NodePoseSyncState_() {
  return static_cast<::GlobalNamespace::IEquatableByReference_1<::GlobalNamespace::NodePoseSyncState>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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
