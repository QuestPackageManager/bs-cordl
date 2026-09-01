#pragma once
// IWYU pragma private; include "System\Net\FileWebRequest.hpp"
#include "System/IO/zzzz__FileAccess_impl.hpp"
#include "System/Net/zzzz__WebRequest_impl.hpp"
#include "System/Net/zzzz__FileWebRequest_def.hpp"
#include "System/IO/zzzz__Stream_def.hpp"
#include "System/Net/zzzz__ICredentials_def.hpp"
#include "System/Net/zzzz__IWebProxy_def.hpp"
#include "System/Net/zzzz__LazyAsyncResult_def.hpp"
#include "System/Net/zzzz__WebHeaderCollection_def.hpp"
#include "System/Net/zzzz__WebResponse_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
#include "System/Threading/zzzz__WaitCallback_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Uri_def.hpp"
//  Writing Method size for method: ::System::Net::FileWebRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebRequest::*)(::System::Uri*)>(&::System::Net::FileWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x64215d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { ".ctor", {}, { ::i2c::type_of<::System::Uri*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebRequest::*)(::System::Runtime::Serialization::SerializationInfo*,
                                                                                               ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::FileWebRequest::_ctor)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x6421748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(),
                            { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::System::Net::FileWebRequest::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
        &::System::Net::FileWebRequest::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6421b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(),
                                                { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebRequest::*)(::System::Runtime::Serialization::SerializationInfo*,
                                                                                               ::System::Runtime::Serialization::StreamingContext)>(&::System::Net::FileWebRequest::GetObjectData)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x6421b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { ::i2c::class_of<::System::Net::FileWebRequest*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.get_Aborted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::get_Aborted)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6421da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { "get_Aborted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.set_ConnectionGroupName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebRequest::*)(::StringW)>(&::System::Net::FileWebRequest::set_ConnectionGroupName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6421db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { ::i2c::class_of<::System::Net::FileWebRequest*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.get_ContentLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::get_ContentLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6421dbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { ::i2c::class_of<::System::Net::FileWebRequest*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.set_ContentLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebRequest::*)(int64_t)>(&::System::Net::FileWebRequest::set_ContentLength)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6421dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { ::i2c::class_of<::System::Net::FileWebRequest*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.get_Credentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::ICredentials* (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::get_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6421e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { ::i2c::class_of<::System::Net::FileWebRequest*>(), 16 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.set_Credentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebRequest::*)(::System::Net::ICredentials*)>(&::System::Net::FileWebRequest::set_Credentials)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6421e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { ::i2c::class_of<::System::Net::FileWebRequest*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.get_Headers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebHeaderCollection* (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::get_Headers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6421e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { ::i2c::class_of<::System::Net::FileWebRequest*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.get_Method
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::get_Method)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6421e4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { ::i2c::class_of<::System::Net::FileWebRequest*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.set_Method
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebRequest::*)(::StringW)>(&::System::Net::FileWebRequest::set_Method)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6421e54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { ::i2c::class_of<::System::Net::FileWebRequest*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.set_PreAuthenticate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebRequest::*)(bool)>(&::System::Net::FileWebRequest::set_PreAuthenticate)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6421f20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { ::i2c::class_of<::System::Net::FileWebRequest*>(), 21 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.get_Proxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::IWebProxy* (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::get_Proxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6421f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { ::i2c::class_of<::System::Net::FileWebRequest*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.set_Proxy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebRequest::*)(::System::Net::IWebProxy*)>(&::System::Net::FileWebRequest::set_Proxy)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6421f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { ::i2c::class_of<::System::Net::FileWebRequest*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.get_Timeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::get_Timeout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6421f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { ::i2c::class_of<::System::Net::FileWebRequest*>(), 22 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.set_Timeout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebRequest::*)(int32_t)>(&::System::Net::FileWebRequest::set_Timeout)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6421f44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { ::i2c::class_of<::System::Net::FileWebRequest*>(), 23 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.get_RequestUri
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Uri* (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::get_RequestUri)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6421fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { ::i2c::class_of<::System::Net::FileWebRequest*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.BeginGetRequestStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::FileWebRequest::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::FileWebRequest::BeginGetRequestStream)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0x6421fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { ::i2c::class_of<::System::Net::FileWebRequest*>(), 27 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.BeginGetResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::System::Net::FileWebRequest::*)(::System::AsyncCallback*, ::System::Object*)>(
    &::System::Net::FileWebRequest::BeginGetResponse)> {
  constexpr static std::size_t size = 0x30c;
  constexpr static std::size_t addrs = 0x6422448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { ::i2c::class_of<::System::Net::FileWebRequest*>(), 25 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.CanGetRequestStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::CanGetRequestStream)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x64223c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { "CanGetRequestStream", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.EndGetRequestStream
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IO::Stream* (::System::Net::FileWebRequest::*)(::System::IAsyncResult*)>(&::System::Net::FileWebRequest::EndGetRequestStream)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x6422754;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { ::i2c::class_of<::System::Net::FileWebRequest*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.EndGetResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebResponse* (::System::Net::FileWebRequest::*)(::System::IAsyncResult*)>(&::System::Net::FileWebRequest::EndGetResponse)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x6422a54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { ::i2c::class_of<::System::Net::FileWebRequest*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.GetResponse
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::WebResponse* (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::GetResponse)> {
  constexpr static std::size_t size = 0x36c;
  constexpr static std::size_t addrs = 0x6422d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { ::i2c::class_of<::System::Net::FileWebRequest*>(), 24 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.GetRequestStreamCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Net::FileWebRequest::GetRequestStreamCallback)> {
  constexpr static std::size_t size = 0x234;
  constexpr static std::size_t addrs = 0x64230c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { "GetRequestStreamCallback", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.GetResponseCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::System::Net::FileWebRequest::GetResponseCallback)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x64233a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { "GetResponseCallback", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.UnblockReader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::UnblockReader)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x64239bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { "UnblockReader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.get_UseDefaultCredentials
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::get_UseDefaultCredentials)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6423a94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { ::i2c::class_of<::System::Net::FileWebRequest*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::FileWebRequest.Abort
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::FileWebRequest::*)()>(&::System::Net::FileWebRequest::Abort)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x6423abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { ::i2c::class_of<::System::Net::FileWebRequest*>(), 31 }));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Net::FileWebRequest::__cordl_internal_get_m_connectionGroupName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_connectionGroupName;
}
constexpr ::StringW const& System::Net::FileWebRequest::__cordl_internal_get_m_connectionGroupName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_connectionGroupName;
}
constexpr void System::Net::FileWebRequest::__cordl_internal_set_m_connectionGroupName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_connectionGroupName = value;
}
constexpr int64_t& System::Net::FileWebRequest::__cordl_internal_get_m_contentLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_contentLength;
}
constexpr int64_t const& System::Net::FileWebRequest::__cordl_internal_get_m_contentLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_contentLength;
}
constexpr void System::Net::FileWebRequest::__cordl_internal_set_m_contentLength(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_contentLength = value;
}
constexpr ::System::Net::ICredentials*& System::Net::FileWebRequest::__cordl_internal_get_m_credentials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_credentials;
}
constexpr ::System::Net::ICredentials* const& System::Net::FileWebRequest::__cordl_internal_get_m_credentials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_credentials;
}
constexpr void System::Net::FileWebRequest::__cordl_internal_set_m_credentials(::System::Net::ICredentials* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_credentials = value;
}
constexpr ::System::IO::FileAccess& System::Net::FileWebRequest::__cordl_internal_get_m_fileAccess() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fileAccess;
}
constexpr ::System::IO::FileAccess const& System::Net::FileWebRequest::__cordl_internal_get_m_fileAccess() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_fileAccess;
}
constexpr void System::Net::FileWebRequest::__cordl_internal_set_m_fileAccess(::System::IO::FileAccess value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_fileAccess = value;
}
constexpr ::System::Net::WebHeaderCollection*& System::Net::FileWebRequest::__cordl_internal_get_m_headers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_headers;
}
constexpr ::System::Net::WebHeaderCollection* const& System::Net::FileWebRequest::__cordl_internal_get_m_headers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_headers;
}
constexpr void System::Net::FileWebRequest::__cordl_internal_set_m_headers(::System::Net::WebHeaderCollection* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_headers = value;
}
constexpr ::StringW& System::Net::FileWebRequest::__cordl_internal_get_m_method() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_method;
}
constexpr ::StringW const& System::Net::FileWebRequest::__cordl_internal_get_m_method() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_method;
}
constexpr void System::Net::FileWebRequest::__cordl_internal_set_m_method(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_method = value;
}
constexpr bool& System::Net::FileWebRequest::__cordl_internal_get_m_preauthenticate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_preauthenticate;
}
constexpr bool const& System::Net::FileWebRequest::__cordl_internal_get_m_preauthenticate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_preauthenticate;
}
constexpr void System::Net::FileWebRequest::__cordl_internal_set_m_preauthenticate(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_preauthenticate = value;
}
constexpr ::System::Net::IWebProxy*& System::Net::FileWebRequest::__cordl_internal_get_m_proxy() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_proxy;
}
constexpr ::System::Net::IWebProxy* const& System::Net::FileWebRequest::__cordl_internal_get_m_proxy() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_proxy;
}
constexpr void System::Net::FileWebRequest::__cordl_internal_set_m_proxy(::System::Net::IWebProxy* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_proxy = value;
}
constexpr ::System::Threading::ManualResetEvent*& System::Net::FileWebRequest::__cordl_internal_get_m_readerEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_readerEvent;
}
constexpr ::System::Threading::ManualResetEvent* const& System::Net::FileWebRequest::__cordl_internal_get_m_readerEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_readerEvent;
}
constexpr void System::Net::FileWebRequest::__cordl_internal_set_m_readerEvent(::System::Threading::ManualResetEvent* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_readerEvent = value;
}
constexpr bool& System::Net::FileWebRequest::__cordl_internal_get_m_readPending() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_readPending;
}
constexpr bool const& System::Net::FileWebRequest::__cordl_internal_get_m_readPending() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_readPending;
}
constexpr void System::Net::FileWebRequest::__cordl_internal_set_m_readPending(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_readPending = value;
}
constexpr ::System::Net::WebResponse*& System::Net::FileWebRequest::__cordl_internal_get_m_response() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_response;
}
constexpr ::System::Net::WebResponse* const& System::Net::FileWebRequest::__cordl_internal_get_m_response() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_response;
}
constexpr void System::Net::FileWebRequest::__cordl_internal_set_m_response(::System::Net::WebResponse* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_response = value;
}
constexpr ::System::IO::Stream*& System::Net::FileWebRequest::__cordl_internal_get_m_stream() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stream;
}
constexpr ::System::IO::Stream* const& System::Net::FileWebRequest::__cordl_internal_get_m_stream() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_stream;
}
constexpr void System::Net::FileWebRequest::__cordl_internal_set_m_stream(::System::IO::Stream* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_stream = value;
}
constexpr bool& System::Net::FileWebRequest::__cordl_internal_get_m_syncHint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_syncHint;
}
constexpr bool const& System::Net::FileWebRequest::__cordl_internal_get_m_syncHint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_syncHint;
}
constexpr void System::Net::FileWebRequest::__cordl_internal_set_m_syncHint(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_syncHint = value;
}
constexpr int32_t& System::Net::FileWebRequest::__cordl_internal_get_m_timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_timeout;
}
constexpr int32_t const& System::Net::FileWebRequest::__cordl_internal_get_m_timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_timeout;
}
constexpr void System::Net::FileWebRequest::__cordl_internal_set_m_timeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_timeout = value;
}
constexpr ::System::Uri*& System::Net::FileWebRequest::__cordl_internal_get_m_uri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_uri;
}
constexpr ::System::Uri* const& System::Net::FileWebRequest::__cordl_internal_get_m_uri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_uri;
}
constexpr void System::Net::FileWebRequest::__cordl_internal_set_m_uri(::System::Uri* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_uri = value;
}
constexpr bool& System::Net::FileWebRequest::__cordl_internal_get_m_writePending() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_writePending;
}
constexpr bool const& System::Net::FileWebRequest::__cordl_internal_get_m_writePending() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_writePending;
}
constexpr void System::Net::FileWebRequest::__cordl_internal_set_m_writePending(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_writePending = value;
}
constexpr bool& System::Net::FileWebRequest::__cordl_internal_get_m_writing() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_writing;
}
constexpr bool const& System::Net::FileWebRequest::__cordl_internal_get_m_writing() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_writing;
}
constexpr void System::Net::FileWebRequest::__cordl_internal_set_m_writing(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_writing = value;
}
constexpr ::System::Net::LazyAsyncResult*& System::Net::FileWebRequest::__cordl_internal_get_m_WriteAResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WriteAResult;
}
constexpr ::System::Net::LazyAsyncResult* const& System::Net::FileWebRequest::__cordl_internal_get_m_WriteAResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_WriteAResult;
}
constexpr void System::Net::FileWebRequest::__cordl_internal_set_m_WriteAResult(::System::Net::LazyAsyncResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_WriteAResult = value;
}
constexpr ::System::Net::LazyAsyncResult*& System::Net::FileWebRequest::__cordl_internal_get_m_ReadAResult() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadAResult;
}
constexpr ::System::Net::LazyAsyncResult* const& System::Net::FileWebRequest::__cordl_internal_get_m_ReadAResult() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ReadAResult;
}
constexpr void System::Net::FileWebRequest::__cordl_internal_set_m_ReadAResult(::System::Net::LazyAsyncResult* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ReadAResult = value;
}
constexpr int32_t& System::Net::FileWebRequest::__cordl_internal_get_m_Aborted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Aborted;
}
constexpr int32_t const& System::Net::FileWebRequest::__cordl_internal_get_m_Aborted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Aborted;
}
constexpr void System::Net::FileWebRequest::__cordl_internal_set_m_Aborted(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Aborted = value;
}
inline void System::Net::FileWebRequest::setStaticF_s_GetRequestStreamCallback(::System::Threading::WaitCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::WaitCallback*, "s_GetRequestStreamCallback", ::System::Net::FileWebRequest*>(std::forward<::System::Threading::WaitCallback*>(value));
}
inline ::System::Threading::WaitCallback* System::Net::FileWebRequest::getStaticF_s_GetRequestStreamCallback() {
  return ::cordl_internals::getStaticField<::System::Threading::WaitCallback*, "s_GetRequestStreamCallback", ::System::Net::FileWebRequest*>();
}
inline void System::Net::FileWebRequest::setStaticF_s_GetResponseCallback(::System::Threading::WaitCallback* value) {
  ::cordl_internals::setStaticField<::System::Threading::WaitCallback*, "s_GetResponseCallback", ::System::Net::FileWebRequest*>(std::forward<::System::Threading::WaitCallback*>(value));
}
inline ::System::Threading::WaitCallback* System::Net::FileWebRequest::getStaticF_s_GetResponseCallback() {
  return ::cordl_internals::getStaticField<::System::Threading::WaitCallback*, "s_GetResponseCallback", ::System::Net::FileWebRequest*>();
}
inline void System::Net::FileWebRequest::_ctor(::System::Uri* uri) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { ".ctor", {}, { ::i2c::type_of<::System::Uri*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uri);
}
inline void System::Net::FileWebRequest::_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(),
                          { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::FileWebRequest::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                                                  ::System::Runtime::Serialization::StreamingContext streamingContext) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(),
                                              { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline void System::Net::FileWebRequest::GetObjectData(::System::Runtime::Serialization::SerializationInfo* serializationInfo, ::System::Runtime::Serialization::StreamingContext streamingContext) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebRequest*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationInfo, streamingContext);
}
inline bool System::Net::FileWebRequest::get_Aborted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { "get_Aborted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::FileWebRequest::set_ConnectionGroupName(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebRequest*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t System::Net::FileWebRequest::get_ContentLength() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebRequest*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void System::Net::FileWebRequest::set_ContentLength(int64_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebRequest*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::ICredentials* System::Net::FileWebRequest::get_Credentials() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebRequest*>(), 16 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::ICredentials*>(this, ___internal_method);
}
inline void System::Net::FileWebRequest::set_Credentials(::System::Net::ICredentials* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebRequest*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::WebHeaderCollection* System::Net::FileWebRequest::get_Headers() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebRequest*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebHeaderCollection*>(this, ___internal_method);
}
inline ::StringW System::Net::FileWebRequest::get_Method() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebRequest*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::FileWebRequest::set_Method(::StringW value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebRequest*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Net::FileWebRequest::set_PreAuthenticate(bool value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebRequest*>(), 21 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::IWebProxy* System::Net::FileWebRequest::get_Proxy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebRequest*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::IWebProxy*>(this, ___internal_method);
}
inline void System::Net::FileWebRequest::set_Proxy(::System::Net::IWebProxy* value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebRequest*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t System::Net::FileWebRequest::get_Timeout() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebRequest*>(), 22 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::FileWebRequest::set_Timeout(int32_t value) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebRequest*>(), 23 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Uri* System::Net::FileWebRequest::get_RequestUri() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebRequest*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Uri*>(this, ___internal_method);
}
inline ::System::IAsyncResult* System::Net::FileWebRequest::BeginGetRequestStream(::System::AsyncCallback* callback, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebRequest*>(), 27 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, state);
}
inline ::System::IAsyncResult* System::Net::FileWebRequest::BeginGetResponse(::System::AsyncCallback* callback, ::System::Object* state) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebRequest*>(), 25 })));
  return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, callback, state);
}
inline bool System::Net::FileWebRequest::CanGetRequestStream() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { "CanGetRequestStream", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IO::Stream* System::Net::FileWebRequest::EndGetRequestStream(::System::IAsyncResult* asyncResult) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebRequest*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::System::IO::Stream*>(this, ___internal_method, asyncResult);
}
inline ::System::Net::WebResponse* System::Net::FileWebRequest::EndGetResponse(::System::IAsyncResult* asyncResult) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebRequest*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebResponse*>(this, ___internal_method, asyncResult);
}
inline ::System::Net::WebResponse* System::Net::FileWebRequest::GetResponse() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebRequest*>(), 24 })));
  return ::cordl_internals::RunMethodRethrow<::System::Net::WebResponse*>(this, ___internal_method);
}
inline void System::Net::FileWebRequest::GetRequestStreamCallback(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { "GetRequestStreamCallback", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline void System::Net::FileWebRequest::GetResponseCallback(::System::Object* state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { "GetResponseCallback", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, state);
}
inline void System::Net::FileWebRequest::UnblockReader() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::FileWebRequest*>(), { "UnblockReader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Net::FileWebRequest::get_UseDefaultCredentials() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebRequest*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::FileWebRequest::Abort() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::FileWebRequest*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::FileWebRequest* System::Net::FileWebRequest::New_ctor(::System::Uri* uri) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::FileWebRequest*>(uri));
}
inline ::System::Net::FileWebRequest* System::Net::FileWebRequest::New_ctor(::System::Runtime::Serialization::SerializationInfo* serializationInfo,
                                                                            ::System::Runtime::Serialization::StreamingContext streamingContext) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::FileWebRequest*>(serializationInfo, streamingContext));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Net::FileWebRequest::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Net::FileWebRequest::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Net::FileWebRequest::FileWebRequest() {}
