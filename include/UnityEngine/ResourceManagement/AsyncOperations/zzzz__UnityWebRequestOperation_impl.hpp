#pragma once
// IWYU pragma private; include "UnityEngine\ResourceManagement\AsyncOperations\UnityWebRequestOperation.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_impl.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__UnityWebRequestOperation_def.hpp"
#include "UnityEngine/Networking/zzzz__UnityWebRequest_def.hpp"
#include "UnityEngine/zzzz__AsyncOperation_def.hpp"
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::*)(::UnityEngine::Networking::UnityWebRequest*)>(
    &::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6928998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::*)()>(
    &::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::Execute)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x69289f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation._Execute_b__2_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::*)(::UnityEngine::AsyncOperation*)>(
    &::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::_Execute_b__2_0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x6928aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation*>(),
                                                                                           { "<Execute>b__2_0", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Networking::UnityWebRequest*& UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::__cordl_internal_get_m_UWR() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UWR;
}
constexpr ::UnityEngine::Networking::UnityWebRequest* const& UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::__cordl_internal_get_m_UWR() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_UWR;
}
constexpr void UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::__cordl_internal_set_m_UWR(::UnityEngine::Networking::UnityWebRequest* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_UWR = value;
}
inline void UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::_ctor(::UnityEngine::Networking::UnityWebRequest* webRequest) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Networking::UnityWebRequest*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, webRequest);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::Execute() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::_Execute_b__2_0(::UnityEngine::AsyncOperation* request) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation*>(),
                                                                                         { "<Execute>b__2_0", {}, { ::i2c::type_of<::UnityEngine::AsyncOperation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, request);
}
inline ::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation*
UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::New_ctor(::UnityEngine::Networking::UnityWebRequest* webRequest) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation*>(webRequest));
}
// Ctor Parameters []
constexpr ::UnityEngine::ResourceManagement::AsyncOperations::UnityWebRequestOperation::UnityWebRequestOperation() {}
