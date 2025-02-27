#pragma once
// IWYU pragma private; include "LiteNetLib/BaseChannel.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__BaseChannel_def.hpp"
#include "LiteNetLib/zzzz__NetPacket_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "System/Collections/Generic/zzzz__Queue_1_def.hpp"
//  Writing Method size for method: ::LiteNetLib::BaseChannel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::BaseChannel::*)(::LiteNetLib::NetPeer*)>(&::LiteNetLib::BaseChannel::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3ab9804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::BaseChannel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::BaseChannel.get_PacketsInQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::LiteNetLib::BaseChannel::*)()>(&::LiteNetLib::BaseChannel::get_PacketsInQueue)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3ab9890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::BaseChannel*>::get(), "get_PacketsInQueue",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::BaseChannel.AddToQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::BaseChannel::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::BaseChannel::AddToQueue)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x3ab98d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::BaseChannel*>::get(), "AddToQueue", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::BaseChannel.SendNextPackets
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::BaseChannel::*)()>(&::LiteNetLib::BaseChannel::SendNextPackets)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::BaseChannel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::BaseChannel*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::BaseChannel.ProcessPacket
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::BaseChannel::*)(::LiteNetLib::NetPacket*)>(&::LiteNetLib::BaseChannel::ProcessPacket)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::BaseChannel*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::BaseChannel*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::LiteNetLib::BaseChannel*& LiteNetLib::BaseChannel::__cordl_internal_get_Next() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr ::LiteNetLib::BaseChannel* const& LiteNetLib::BaseChannel::__cordl_internal_get_Next() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Next;
}
constexpr void LiteNetLib::BaseChannel::__cordl_internal_set_Next(::LiteNetLib::BaseChannel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Next)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::NetPeer*& LiteNetLib::BaseChannel::__cordl_internal_get_Peer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Peer;
}
constexpr ::LiteNetLib::NetPeer* const& LiteNetLib::BaseChannel::__cordl_internal_get_Peer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Peer;
}
constexpr void LiteNetLib::BaseChannel::__cordl_internal_set_Peer(::LiteNetLib::NetPeer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Peer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>*& LiteNetLib::BaseChannel::__cordl_internal_get_OutgoingQueue() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OutgoingQueue;
}
constexpr ::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>* const& LiteNetLib::BaseChannel::__cordl_internal_get_OutgoingQueue() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___OutgoingQueue;
}
constexpr void LiteNetLib::BaseChannel::__cordl_internal_set_OutgoingQueue(::System::Collections::Generic::Queue_1<::LiteNetLib::NetPacket*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___OutgoingQueue)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void LiteNetLib::BaseChannel::_ctor(::LiteNetLib::NetPeer* peer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::BaseChannel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPeer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, peer);
}
inline int32_t LiteNetLib::BaseChannel::get_PacketsInQueue() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::BaseChannel*>::get(), "get_PacketsInQueue",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void LiteNetLib::BaseChannel::AddToQueue(::LiteNetLib::NetPacket* packet) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::BaseChannel*>::get(), "AddToQueue", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, packet);
}
inline void LiteNetLib::BaseChannel::SendNextPackets() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::BaseChannel*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool LiteNetLib::BaseChannel::ProcessPacket(::LiteNetLib::NetPacket* packet) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::BaseChannel*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, packet);
}
inline ::LiteNetLib::BaseChannel* LiteNetLib::BaseChannel::New_ctor(::LiteNetLib::NetPeer* peer) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::LiteNetLib::BaseChannel*>(peer));
}
// Ctor Parameters []
constexpr ::LiteNetLib::BaseChannel::BaseChannel() {}
