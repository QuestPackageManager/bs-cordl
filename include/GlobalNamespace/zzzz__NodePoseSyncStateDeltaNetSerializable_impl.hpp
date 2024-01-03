#pragma once
#include "GlobalNamespace/zzzz__NodePoseSyncState_impl.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncStateDeltaNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__IPacketPool_1_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__NodePoseSyncState_def.hpp"
#include "GlobalNamespace/zzzz__SyncStateId_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "GlobalNamespace/zzzz__ISyncStateDeltaSerializable_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable.get_pool
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IPacketPool_1<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>* (*)()>(
    &::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::get_pool)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xe59b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>::get(),
                                                                               "get_pool", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable.get_baseId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::SyncStateId (::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::*)()>(
    &::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::get_baseId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe59bd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>::get(),
                                                                               "get_baseId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable.set_baseId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::*)(::GlobalNamespace::SyncStateId)>(
    &::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::set_baseId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe59bd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>::get(), "set_baseId", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SyncStateId>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable.get_timeOffsetMs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::*)()>(
    &::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::get_timeOffsetMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe59be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>::get(),
                                                                               "get_timeOffsetMs", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable.set_timeOffsetMs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::*)(int32_t)>(
    &::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::set_timeOffsetMs)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe59be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>::get(), "set_timeOffsetMs",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable.get_delta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::NodePoseSyncState (::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::*)()>(
    &::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::get_delta)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe59bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>::get(),
                                                                               "get_delta", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable.set_delta
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::*)(::GlobalNamespace::NodePoseSyncState)>(
    &::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::set_delta)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xe59c00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>::get(), "set_delta", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodePoseSyncState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::Serialize)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xe59c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::Deserialize)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe59ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                   ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::*)()>(
    &::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::Release)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xe59d78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>::get(),
                                                                               "Release", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::*)()>(
    &::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe59e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>::get(),
                                                                               ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::NodePoseSyncState>"
constexpr GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::operator ::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::NodePoseSyncState>*() noexcept {
  return static_cast<::GlobalNamespace::ISyncStateDeltaSerializable_1<::GlobalNamespace::NodePoseSyncState>*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::NodePoseSyncState& GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::__get__delta() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delta;
}
constexpr ::GlobalNamespace::NodePoseSyncState const& GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::__get__delta() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____delta;
}
constexpr void GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::__set__delta(::GlobalNamespace::NodePoseSyncState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____delta = value;
}
constexpr ::GlobalNamespace::SyncStateId& GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::__get__baseId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseId_k__BackingField;
}
constexpr ::GlobalNamespace::SyncStateId const& GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::__get__baseId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseId_k__BackingField;
}
constexpr void GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::__set__baseId_k__BackingField(::GlobalNamespace::SyncStateId value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseId_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::__get__timeOffsetMs_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeOffsetMs_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::__get__timeOffsetMs_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeOffsetMs_k__BackingField;
}
constexpr void GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::__set__timeOffsetMs_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeOffsetMs_k__BackingField = value;
}
inline ::GlobalNamespace::IPacketPool_1<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>* GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::get_pool() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>::get(),
                                                                             "get_pool", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IPacketPool_1<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>*, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::SyncStateId GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::get_baseId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>::get(),
                                                                             "get_baseId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::SyncStateId, false>(this, ___internal_method);
}
inline void GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::set_baseId(::GlobalNamespace::SyncStateId value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>::get(), "set_baseId", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SyncStateId>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::get_timeOffsetMs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>::get(),
                                                                             "get_timeOffsetMs", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::set_timeOffsetMs(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>::get(), "set_timeOffsetMs",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::NodePoseSyncState GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::get_delta() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>::get(),
                                                                             "get_delta", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NodePoseSyncState, false>(this, ___internal_method);
}
inline void GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::set_delta(::GlobalNamespace::NodePoseSyncState value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>::get(), "set_delta", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NodePoseSyncState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>::get(),
                                                                             "Release", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable* GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>());
}
inline void GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NodePoseSyncStateDeltaNetSerializable::NodePoseSyncStateDeltaNetSerializable() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
