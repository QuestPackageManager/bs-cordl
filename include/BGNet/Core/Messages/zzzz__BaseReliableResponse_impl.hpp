#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "BGNet/Core/Messages/zzzz__BaseReliableResponse_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "GlobalNamespace/zzzz__IPoolablePacket_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableRequest_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedResponse_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedMessage_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "LiteNetLib/Utils/zzzz__INetSerializable_def.hpp"
#include "BGNet/Core/Messages/zzzz__IUnconnectedReliableResponse_def.hpp"
//  Writing Method size for method: ::BGNet::Core::Messages::BaseReliableResponse.get_requestId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::BGNet::Core::Messages::BaseReliableResponse::*)()>(
    &::BGNet::Core::Messages::BaseReliableResponse::get_requestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde708;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(),
                                                                               "get_requestId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseReliableResponse.set_requestId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::BaseReliableResponse::*)(uint32_t)>(
    &::BGNet::Core::Messages::BaseReliableResponse::set_requestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde710;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(), "set_requestId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseReliableResponse.get_responseId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::BGNet::Core::Messages::BaseReliableResponse::*)()>(
    &::BGNet::Core::Messages::BaseReliableResponse::get_responseId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde718;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(),
                                                                               "get_responseId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseReliableResponse.set_responseId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::BaseReliableResponse::*)(uint32_t)>(
    &::BGNet::Core::Messages::BaseReliableResponse::set_responseId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde720;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(), "set_responseId",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseReliableResponse.get_resultCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t (::BGNet::Core::Messages::BaseReliableResponse::*)()>(
    &::BGNet::Core::Messages::BaseReliableResponse::get_resultCode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde728;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseReliableResponse.get_resultCodeString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BGNet::Core::Messages::BaseReliableResponse::*)()>(
    &::BGNet::Core::Messages::BaseReliableResponse::get_resultCodeString)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdde730;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseReliableResponse.Serialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::BaseReliableResponse::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::BGNet::Core::Messages::BaseReliableResponse::Serialize)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xdde770;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseReliableResponse.Deserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::BaseReliableResponse::*)(::LiteNetLib::Utils::NetDataReader*)>(
    &::BGNet::Core::Messages::BaseReliableResponse::Deserialize)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xdde7b0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseReliableResponse.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::BaseReliableResponse::*)()>(&::BGNet::Core::Messages::BaseReliableResponse::Release)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseReliableResponse.BGNet_Core_Messages_IUnconnectedReliableRequest_WithRequestId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::Messages::IUnconnectedReliableRequest* (::BGNet::Core::Messages::BaseReliableResponse::*)(uint32_t)>(
    &::BGNet::Core::Messages::BaseReliableResponse::BGNet_Core_Messages_IUnconnectedReliableRequest_WithRequestId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde7f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(),
                                                                               "BGNet.Core.Messages.IUnconnectedReliableRequest.WithRequestId", std::vector<Il2CppClass*>{},
                                                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseReliableResponse.BGNet_Core_Messages_IUnconnectedResponse_WithResponseId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::Messages::IUnconnectedResponse* (::BGNet::Core::Messages::BaseReliableResponse::*)(uint32_t)>(
    &::BGNet::Core::Messages::BaseReliableResponse::BGNet_Core_Messages_IUnconnectedResponse_WithResponseId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde7fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(),
                                                                               "BGNet.Core.Messages.IUnconnectedResponse.WithResponseId", std::vector<Il2CppClass*>{},
                                                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseReliableResponse.BGNet_Core_Messages_IUnconnectedReliableResponse_WithRequestAndResponseId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BGNet::Core::Messages::IUnconnectedReliableResponse* (
    ::BGNet::Core::Messages::BaseReliableResponse::*)(uint32_t, uint32_t)>(&::BGNet::Core::Messages::BaseReliableResponse::BGNet_Core_Messages_IUnconnectedReliableResponse_WithRequestAndResponseId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde804;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(), "BGNet.Core.Messages.IUnconnectedReliableResponse.WithRequestAndResponseId",
        std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGNet::Core::Messages::BaseReliableResponse._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGNet::Core::Messages::BaseReliableResponse::*)()>(&::BGNet::Core::Messages::BaseReliableResponse::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xdde80c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedReliableResponse"
constexpr BGNet::Core::Messages::BaseReliableResponse::operator ::BGNet::Core::Messages::IUnconnectedReliableResponse*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedReliableResponse*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedReliableRequest"
constexpr BGNet::Core::Messages::BaseReliableResponse::operator ::BGNet::Core::Messages::IUnconnectedReliableRequest*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedReliableRequest*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedMessage"
constexpr BGNet::Core::Messages::BaseReliableResponse::operator ::BGNet::Core::Messages::IUnconnectedMessage*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedMessage*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::LiteNetLib::Utils::INetSerializable"
constexpr BGNet::Core::Messages::BaseReliableResponse::operator ::LiteNetLib::Utils::INetSerializable*() noexcept {
  return static_cast<::LiteNetLib::Utils::INetSerializable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::IPoolablePacket"
constexpr BGNet::Core::Messages::BaseReliableResponse::operator ::GlobalNamespace::IPoolablePacket*() noexcept {
  return static_cast<::GlobalNamespace::IPoolablePacket*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::BGNet::Core::Messages::IUnconnectedResponse"
constexpr BGNet::Core::Messages::BaseReliableResponse::operator ::BGNet::Core::Messages::IUnconnectedResponse*() noexcept {
  return static_cast<::BGNet::Core::Messages::IUnconnectedResponse*>(static_cast<void*>(this));
}
constexpr uint32_t& BGNet::Core::Messages::BaseReliableResponse::__get__requestId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestId_k__BackingField;
}
constexpr uint32_t const& BGNet::Core::Messages::BaseReliableResponse::__get__requestId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____requestId_k__BackingField;
}
constexpr void BGNet::Core::Messages::BaseReliableResponse::__set__requestId_k__BackingField(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____requestId_k__BackingField = value;
}
constexpr uint32_t& BGNet::Core::Messages::BaseReliableResponse::__get__responseId_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____responseId_k__BackingField;
}
constexpr uint32_t const& BGNet::Core::Messages::BaseReliableResponse::__get__responseId_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____responseId_k__BackingField;
}
constexpr void BGNet::Core::Messages::BaseReliableResponse::__set__responseId_k__BackingField(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____responseId_k__BackingField = value;
}
inline uint32_t BGNet::Core::Messages::BaseReliableResponse::get_requestId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(),
                                                                             "get_requestId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void BGNet::Core::Messages::BaseReliableResponse::set_requestId(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(), "set_requestId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint32_t BGNet::Core::Messages::BaseReliableResponse::get_responseId() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(),
                                                                             "get_responseId", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void BGNet::Core::Messages::BaseReliableResponse::set_responseId(uint32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(), "set_responseId",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline uint8_t BGNet::Core::Messages::BaseReliableResponse::get_resultCode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(),
                                                                             "get_resultCode", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<uint8_t, false>(this, ___internal_method);
}
inline ::StringW BGNet::Core::Messages::BaseReliableResponse::get_resultCodeString() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(),
                                                                             "get_resultCodeString", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void BGNet::Core::Messages::BaseReliableResponse::Serialize(::LiteNetLib::Utils::NetDataWriter* writer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(), "Serialize", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, writer);
}
inline void BGNet::Core::Messages::BaseReliableResponse::Deserialize(::LiteNetLib::Utils::NetDataReader* reader) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(), "Deserialize", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, reader);
}
inline void BGNet::Core::Messages::BaseReliableResponse::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(), "Release",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGNet::Core::Messages::IUnconnectedReliableRequest* BGNet::Core::Messages::BaseReliableResponse::BGNet_Core_Messages_IUnconnectedReliableRequest_WithRequestId(uint32_t requestId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(),
                                                                             "BGNet.Core.Messages.IUnconnectedReliableRequest.WithRequestId", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BGNet::Core::Messages::IUnconnectedReliableRequest*, false>(this, ___internal_method, requestId);
}
inline ::BGNet::Core::Messages::IUnconnectedResponse* BGNet::Core::Messages::BaseReliableResponse::BGNet_Core_Messages_IUnconnectedResponse_WithResponseId(uint32_t responseId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(),
                                                                             "BGNet.Core.Messages.IUnconnectedResponse.WithResponseId", std::vector<Il2CppClass*>{},
                                                                             ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BGNet::Core::Messages::IUnconnectedResponse*, false>(this, ___internal_method, responseId);
}
inline ::BGNet::Core::Messages::IUnconnectedReliableResponse*
BGNet::Core::Messages::BaseReliableResponse::BGNet_Core_Messages_IUnconnectedReliableResponse_WithRequestAndResponseId(uint32_t requestId, uint32_t responseId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(), "BGNet.Core.Messages.IUnconnectedReliableResponse.WithRequestAndResponseId",
      std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BGNet::Core::Messages::IUnconnectedReliableResponse*, false>(this, ___internal_method, requestId, responseId);
}
inline ::BGNet::Core::Messages::BaseReliableResponse* BGNet::Core::Messages::BaseReliableResponse::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BGNet::Core::Messages::BaseReliableResponse*>());
}
inline void BGNet::Core::Messages::BaseReliableResponse::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGNet::Core::Messages::BaseReliableResponse*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGNet::Core::Messages::BaseReliableResponse::BaseReliableResponse() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
