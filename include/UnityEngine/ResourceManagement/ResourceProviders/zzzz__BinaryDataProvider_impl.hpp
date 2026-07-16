#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/ResourceProviders/BinaryDataProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_impl.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__BinaryDataProvider_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequestAsyncOperation_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__BinaryDataProvider_def.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ProvideHandle_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__WebRequestQueueOperation_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp.GetPercentComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::GetPercentComplete)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6917fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>(), { "GetPercentComplete", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::Start)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x6917ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>(),
                                                                                           { "Start",
                                                                                             {},
                                                                                             { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(),
                                                                                               ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp.WaitForCompletionHandler
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::WaitForCompletionHandler)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6918168;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>(), { "WaitForCompletionHandler", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp.RequestOperation_completed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::*)(::UnityEngine::AsyncOperation*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::RequestOperation_completed)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x69181dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>(),
                                                                                           { "RequestOperation_completed", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp.CompleteOperation
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::*)(::ArrayW<uint8_t>, ::System::Exception*)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::CompleteOperation)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x69183b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>(),
                                                             { "CompleteOperation", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Exception*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp.ConvertBytes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::*)(::ArrayW<uint8_t>)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::ConvertBytes)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x6917fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>(),
                                                                                           { "ConvertBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp.SendWebRequest
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::*)(::StringW)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::SendWebRequest)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0x6918458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>(),
                                                            { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6917abc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp._SendWebRequest_b__13_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::*)(
    ::UnityEngine::Networking::UnityWebRequestAsyncOperation*)>(&::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::_SendWebRequest_b__13_0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x6918714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>(),
                                                             { "<SendWebRequest>b__13_0", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*&
UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_Provider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Provider;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider* const&
UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_Provider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Provider;
}
constexpr void
UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_set_m_Provider(::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Provider = value;
}
constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation*& UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_RequestOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestOperation;
}
constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation* const&
UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_RequestOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestOperation;
}
constexpr void
UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_set_m_RequestOperation(::UnityEngine::Networking::UnityWebRequestAsyncOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequestOperation = value;
}
constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation*&
UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_RequestQueueOperation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestQueueOperation;
}
constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation* const&
UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_RequestQueueOperation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_RequestQueueOperation;
}
constexpr void
UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_set_m_RequestQueueOperation(::UnityEngine::ResourceManagement::WebRequestQueueOperation* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_RequestQueueOperation = value;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle& UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_PI() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PI;
}
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle const&
UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_PI() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PI;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_set_m_PI(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PI = value;
}
constexpr bool& UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_IgnoreFailures() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreFailures;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_IgnoreFailures() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_IgnoreFailures;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_set_m_IgnoreFailures(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_IgnoreFailures = value;
}
constexpr bool& UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_Complete() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Complete;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_Complete() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Complete;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_set_m_Complete(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Complete = value;
}
constexpr int32_t& UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_Timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Timeout;
}
constexpr int32_t const& UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_get_m_Timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Timeout;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::__cordl_internal_set_m_Timeout(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Timeout = value;
}
inline float_t UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::GetPercentComplete() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>(), { "GetPercentComplete", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle,
                                                                                                     ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider* rawProvider) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>(),
                                                                                         { "Start",
                                                                                           {},
                                                                                           { ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle>(),
                                                                                             ::i2c::type_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provideHandle, rawProvider);
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::WaitForCompletionHandler() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>(), { "WaitForCompletionHandler", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::RequestOperation_completed(::UnityEngine::AsyncOperation* op) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>(),
                                                                                         { "RequestOperation_completed", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, op);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::CompleteOperation(::ArrayW<uint8_t> data, ::System::Exception* exception) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>(),
                                                           { "CompleteOperation", {}, { ::i2c::type_of<::ArrayW<uint8_t>>(), ::i2c::type_of<::System::Exception*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, exception);
}
inline ::System::Object* UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::ConvertBytes(::ArrayW<uint8_t> data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>(),
                                                                                         { "ConvertBytes", {}, { ::i2c::type_of<::ArrayW<uint8_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, data);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::SendWebRequest(::StringW path) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, path);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::_SendWebRequest_b__13_0(::UnityEngine::Networking::UnityWebRequestAsyncOperation* asyncOperation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>(),
                                                           { "<SendWebRequest>b__13_0", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequestAsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asyncOperation);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp* UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider_InternalOp::BinaryDataProvider_InternalOp() {}
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider.get_IgnoreFailures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::get_IgnoreFailures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6917a20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>(), { "get_IgnoreFailures", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider.set_IgnoreFailures
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::*)(bool)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::set_IgnoreFailures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6917a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>(), { "set_IgnoreFailures", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider.Convert
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::*)(::System::Type*, ::ArrayW<uint8_t>)>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::Convert)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6917a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider.Provide
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::*)(
    ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle)>(&::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::Provide)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6917a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::*)()>(
    &::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6917f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::__cordl_internal_get__IgnoreFailures_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IgnoreFailures_k__BackingField;
}
constexpr bool const& UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::__cordl_internal_get__IgnoreFailures_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____IgnoreFailures_k__BackingField;
}
constexpr void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::__cordl_internal_set__IgnoreFailures_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____IgnoreFailures_k__BackingField = value;
}
inline bool UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::get_IgnoreFailures() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>(), { "get_IgnoreFailures", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::set_IgnoreFailures(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>(), { "set_IgnoreFailures", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Object* UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::Convert(::System::Type* type, ::ArrayW<uint8_t> data) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, type, data);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provideHandle);
}
inline void UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider* UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::ResourceProviders::BinaryDataProvider::BinaryDataProvider() {}
