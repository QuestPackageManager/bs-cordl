#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BGNet/Core/Messages/zzzz__BaseReliableRequest_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableRequest_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
//  Writing Method size for method: ::BGNet::Core::Messages::BaseReliableRequest.get_requestId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::BGNet::Core::Messages::BaseReliableRequest::*)()>(
    &::BGNet::Core::Messages::BaseReliableRequest::get_requestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde6f0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableRequest*>::get(),
                                                                               "get_requestId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseReliableRequest.set_requestId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::BaseReliableRequest::*)(uint32_t)>(
    &::BGNet::Core::Messages::BaseReliableRequest::set_requestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde6f8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableRequest*>::get(), "set_requestId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseReliableRequest.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::BaseReliableRequest::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::BGNet::Core::Messages::BaseReliableRequest::Serialize)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xdde510;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableRequest*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseReliableRequest.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::BaseReliableRequest::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::BGNet::Core::Messages::BaseReliableRequest::Deserialize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xdde668;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableRequest*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseReliableRequest.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::BaseReliableRequest::*)()>(&::BGNet::Core::Messages::BaseReliableRequest::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableRequest*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableRequest*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseReliableRequest.BGNet_Core_Messages_IUnconnectedReliableRequest_WithRequestId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::Messages::IUnconnectedReliableRequest* (::BGNet::Core::Messages::BaseReliableRequest::*)(uint32_t)>(
    &::BGNet::Core::Messages::BaseReliableRequest::BGNet_Core_Messages_IUnconnectedReliableRequest_WithRequestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableRequest*>::get(),
                                                                               "BGNet.Core.Messages.IUnconnectedReliableRequest.WithRequestId", std::vector<Il2CppClass*>{},
                                                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseReliableRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::BaseReliableRequest::*)()>(&::BGNet::Core::Messages::BaseReliableRequest::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde6e8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableRequest*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedReliableRequest"
constexpr BGNet::Core::Messages::BaseReliableRequest::operator ::BGNet::Core::Messages::IUnconnectedReliableRequest*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedReliableRequest*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
constexpr BGNet::Core::Messages::BaseReliableRequest::operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr BGNet::Core::Messages::BaseReliableRequest::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr BGNet::Core::Messages::BaseReliableRequest::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
constexpr uint32_t& BGNet::Core::Messages::BaseReliableRequest::__get__requestId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestId_k__BackingField;
}
constexpr uint32_t const& BGNet::Core::Messages::BaseReliableRequest::__get__requestId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestId_k__BackingField;
}
constexpr void BGNet::Core::Messages::BaseReliableRequest::__set__requestId_k__BackingField(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requestId_k__BackingField = value;
}
inline uint32_t BGNet::Core::Messages::BaseReliableRequest::get_requestId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableRequest*>::get(),
                                                                             "get_requestId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void BGNet::Core::Messages::BaseReliableRequest::set_requestId(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableRequest*>::get(), "set_requestId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void BGNet::Core::Messages::BaseReliableRequest::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableRequest*>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void BGNet::Core::Messages::BaseReliableRequest::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableRequest*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void BGNet::Core::Messages::BaseReliableRequest::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableRequest*>::get(), "Release",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGNet::Core::Messages::IUnconnectedReliableRequest* BGNet::Core::Messages::BaseReliableRequest::BGNet_Core_Messages_IUnconnectedReliableRequest_WithRequestId(uint32_t requestId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableRequest*>::get(),
                                                                             "BGNet.Core.Messages.IUnconnectedReliableRequest.WithRequestId", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BGNet::Core::Messages::IUnconnectedReliableRequest*, false>(this, ___internal_method, requestId);
}
inline ::BGNet::Core::Messages::BaseReliableRequest* BGNet::Core::Messages::BaseReliableRequest::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::Messages::BaseReliableRequest*>());
}
inline void BGNet::Core::Messages::BaseReliableRequest::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableRequest*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::BaseReliableRequest::BaseReliableRequest() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
