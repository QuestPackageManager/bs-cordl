#pragma once
#include "LiteNetLib/zzzz__ConnectionRequestResult_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LiteNetLib/zzzz__ConnectionRequest_def.hpp"
#include "LiteNetLib/zzzz__NetPeer_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataWriter_def.hpp"
#include "System/Net/zzzz__IPEndPoint_def.hpp"
#include "LiteNetLib/Utils/zzzz__NetDataReader_def.hpp"
#include "LiteNetLib/zzzz__NetConnectRequestPacket_def.hpp"
#include "LiteNetLib/zzzz__NetManager_def.hpp"
#include "LiteNetLib/zzzz__ConnectionRequestResult_def.hpp"
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.get_Result
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::ConnectionRequestResult (::LiteNetLib::ConnectionRequest::*)()>(
    &::LiteNetLib::ConnectionRequest::get_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f81d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "get_Result",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.set_Result
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ConnectionRequest::*)(::LiteNetLib::ConnectionRequestResult)>(
    &::LiteNetLib::ConnectionRequest::set_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f81d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "set_Result", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequestResult>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.TryActivate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::LiteNetLib::ConnectionRequest::*)()>(&::LiteNetLib::ConnectionRequest::TryActivate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21f81e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "TryActivate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.UpdateRequest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ConnectionRequest::*)(::LiteNetLib::NetConnectRequestPacket*)>(
    &::LiteNetLib::ConnectionRequest::UpdateRequest)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x21f8208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "UpdateRequest", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetConnectRequestPacket*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ConnectionRequest::*)(
    int64_t, uint8_t, ::LiteNetLib::Utils::NetDataReader*, ::System::Net::IPEndPoint*, ::LiteNetLib::NetManager*)>(&::LiteNetLib::ConnectionRequest::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x21f8238;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetManager*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.AcceptIfKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetPeer* (::LiteNetLib::ConnectionRequest::*)(::StringW)>(
    &::LiteNetLib::ConnectionRequest::AcceptIfKey)> {
  constexpr static std::size_t size = 0x1a8;
  constexpr static std::size_t addrs = 0x21f8290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "AcceptIfKey", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.Accept
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LiteNetLib::NetPeer* (::LiteNetLib::ConnectionRequest::*)()>(&::LiteNetLib::ConnectionRequest::Accept)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x21f8938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "Accept",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.Reject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ConnectionRequest::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t, bool)>(
    &::LiteNetLib::ConnectionRequest::Reject)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x21f899c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "Reject", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.Reject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ConnectionRequest::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::LiteNetLib::ConnectionRequest::Reject)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f8a24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "Reject", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.RejectForce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ConnectionRequest::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>, int32_t, int32_t)>(
    &::LiteNetLib::ConnectionRequest::RejectForce)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x21f8a2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "RejectForce", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.RejectForce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ConnectionRequest::*)()>(&::LiteNetLib::ConnectionRequest::RejectForce)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21f8a34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "RejectForce",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.RejectForce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ConnectionRequest::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::LiteNetLib::ConnectionRequest::RejectForce)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21f8a48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "RejectForce", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.RejectForce
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ConnectionRequest::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::LiteNetLib::ConnectionRequest::RejectForce)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21f8a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "RejectForce", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.Reject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ConnectionRequest::*)()>(&::LiteNetLib::ConnectionRequest::Reject)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x21f8a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "Reject",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.Reject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ConnectionRequest::*)(::ArrayW<uint8_t, ::Array<uint8_t>*>)>(
    &::LiteNetLib::ConnectionRequest::Reject)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x21f8aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "Reject", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LiteNetLib::ConnectionRequest.Reject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LiteNetLib::ConnectionRequest::*)(::LiteNetLib::Utils::NetDataWriter*)>(
    &::LiteNetLib::ConnectionRequest::Reject)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21f8ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "Reject", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
    return ___internal_method;
  }
};
constexpr ::LiteNetLib::NetManager*& LiteNetLib::ConnectionRequest::__get__listener() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____listener;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::NetManager*> const& LiteNetLib::ConnectionRequest::__get__listener() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____listener;
}
constexpr void LiteNetLib::ConnectionRequest::__set__listener(::LiteNetLib::NetManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____listener)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& LiteNetLib::ConnectionRequest::__get__used() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____used;
}
constexpr int32_t const& LiteNetLib::ConnectionRequest::__get__used() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____used;
}
constexpr void LiteNetLib::ConnectionRequest::__set__used(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____used = value;
}
constexpr ::LiteNetLib::Utils::NetDataReader*& LiteNetLib::ConnectionRequest::__get_Data() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Data;
}
constexpr ::cordl_internals::to_const_pointer<::LiteNetLib::Utils::NetDataReader*> const& LiteNetLib::ConnectionRequest::__get_Data() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___Data;
}
constexpr void LiteNetLib::ConnectionRequest::__set_Data(::LiteNetLib::Utils::NetDataReader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Data)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::LiteNetLib::ConnectionRequestResult& LiteNetLib::ConnectionRequest::__get__Result_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Result_k__BackingField;
}
constexpr ::LiteNetLib::ConnectionRequestResult const& LiteNetLib::ConnectionRequest::__get__Result_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____Result_k__BackingField;
}
constexpr void LiteNetLib::ConnectionRequest::__set__Result_k__BackingField(::LiteNetLib::ConnectionRequestResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____Result_k__BackingField = value;
}
constexpr int64_t& LiteNetLib::ConnectionRequest::__get_ConnectionTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ConnectionTime;
}
constexpr int64_t const& LiteNetLib::ConnectionRequest::__get_ConnectionTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ConnectionTime;
}
constexpr void LiteNetLib::ConnectionRequest::__set_ConnectionTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___ConnectionTime = value;
}
constexpr uint8_t& LiteNetLib::ConnectionRequest::__get_ConnectionNumber() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ConnectionNumber;
}
constexpr uint8_t const& LiteNetLib::ConnectionRequest::__get_ConnectionNumber() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___ConnectionNumber;
}
constexpr void LiteNetLib::ConnectionRequest::__set_ConnectionNumber(uint8_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___ConnectionNumber = value;
}
constexpr ::System::Net::IPEndPoint*& LiteNetLib::ConnectionRequest::__get_RemoteEndPoint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___RemoteEndPoint;
}
constexpr ::cordl_internals::to_const_pointer<::System::Net::IPEndPoint*> const& LiteNetLib::ConnectionRequest::__get_RemoteEndPoint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___RemoteEndPoint;
}
constexpr void LiteNetLib::ConnectionRequest::__set_RemoteEndPoint(::System::Net::IPEndPoint* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___RemoteEndPoint)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::LiteNetLib::ConnectionRequestResult LiteNetLib::ConnectionRequest::get_Result() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "get_Result",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::ConnectionRequestResult, false>(this, ___internal_method);
}
inline void LiteNetLib::ConnectionRequest::set_Result(::LiteNetLib::ConnectionRequestResult value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "set_Result", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::ConnectionRequestResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool LiteNetLib::ConnectionRequest::TryActivate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "TryActivate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void LiteNetLib::ConnectionRequest::UpdateRequest(::LiteNetLib::NetConnectRequestPacket* connRequest) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "UpdateRequest", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetConnectRequestPacket*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connRequest);
}
inline ::LiteNetLib::ConnectionRequest* LiteNetLib::ConnectionRequest::New_ctor(int64_t connectionId, uint8_t connectionNumber, ::LiteNetLib::Utils::NetDataReader* netDataReader,
                                                                                ::System::Net::IPEndPoint* endPoint, ::LiteNetLib::NetManager* listener) {
  return THROW_UNLESS(::il2cpp_utils::New<::LiteNetLib::ConnectionRequest*>(connectionId, connectionNumber, netDataReader, endPoint, listener));
}
inline void LiteNetLib::ConnectionRequest::_ctor(int64_t connectionId, uint8_t connectionNumber, ::LiteNetLib::Utils::NetDataReader* netDataReader, ::System::Net::IPEndPoint* endPoint,
                                                 ::LiteNetLib::NetManager* listener) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint8_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataReader*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Net::IPEndPoint*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::NetManager*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, connectionId, connectionNumber, netDataReader, endPoint, listener);
}
inline ::LiteNetLib::NetPeer* LiteNetLib::ConnectionRequest::AcceptIfKey(::StringW key) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "AcceptIfKey", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPeer*, false>(this, ___internal_method, key);
}
inline ::LiteNetLib::NetPeer* LiteNetLib::ConnectionRequest::Accept() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "Accept",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::LiteNetLib::NetPeer*, false>(this, ___internal_method);
}
inline void LiteNetLib::ConnectionRequest::Reject(::ArrayW<uint8_t, ::Array<uint8_t>*> rejectData, int32_t start, int32_t length, bool force) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "Reject", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rejectData, start, length, force);
}
inline void LiteNetLib::ConnectionRequest::Reject(::ArrayW<uint8_t, ::Array<uint8_t>*> rejectData, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "Reject", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rejectData, start, length);
}
inline void LiteNetLib::ConnectionRequest::RejectForce(::ArrayW<uint8_t, ::Array<uint8_t>*> rejectData, int32_t start, int32_t length) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "RejectForce", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rejectData, start, length);
}
inline void LiteNetLib::ConnectionRequest::RejectForce() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "RejectForce",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::ConnectionRequest::RejectForce(::ArrayW<uint8_t, ::Array<uint8_t>*> rejectData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "RejectForce", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rejectData);
}
inline void LiteNetLib::ConnectionRequest::RejectForce(::LiteNetLib::Utils::NetDataWriter* rejectData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "RejectForce", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rejectData);
}
inline void LiteNetLib::ConnectionRequest::Reject() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "Reject",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void LiteNetLib::ConnectionRequest::Reject(::ArrayW<uint8_t, ::Array<uint8_t>*> rejectData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "Reject", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rejectData);
}
inline void LiteNetLib::ConnectionRequest::Reject(::LiteNetLib::Utils::NetDataWriter* rejectData) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LiteNetLib::ConnectionRequest*>::get(), "Reject", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::LiteNetLib::Utils::NetDataWriter*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rejectData);
}
// Ctor Parameters []
constexpr ::LiteNetLib::ConnectionRequest::ConnectionRequest() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
