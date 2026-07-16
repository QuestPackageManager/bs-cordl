#pragma once
// IWYU pragma private; include "UnityEngine/AsyncInstantiateOperation.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "UnityEngine/zzzz__AsyncOperation_impl.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AsyncInstantiateOperation_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::AsyncInstantiateOperation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AsyncInstantiateOperation::*)(::System::IntPtr, ::System::Threading::CancellationToken)>(
    &::UnityEngine::AsyncInstantiateOperation::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6ad67cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AsyncInstantiateOperation*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AsyncInstantiateOperation.IsCancellationRequested
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::AsyncInstantiateOperation::*)()>(&::UnityEngine::AsyncInstantiateOperation::IsCancellationRequested)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6ad6828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AsyncInstantiateOperation*>(), { "IsCancellationRequested", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AsyncInstantiateOperation.CreateResultArray
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Object>> (::UnityEngine::AsyncInstantiateOperation::*)(int32_t)>(
    &::UnityEngine::AsyncInstantiateOperation::CreateResultArray)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6ad689c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AsyncInstantiateOperation*>(), { ::i2c::class_of<::UnityEngine::AsyncInstantiateOperation*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityW<::UnityEngine::Object>>& UnityEngine::AsyncInstantiateOperation::__cordl_internal_get_m_Result() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Result;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Object>> const& UnityEngine::AsyncInstantiateOperation::__cordl_internal_get_m_Result() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Result;
}
constexpr void UnityEngine::AsyncInstantiateOperation::__cordl_internal_set_m_Result(::ArrayW<::UnityW<::UnityEngine::Object>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Result = value;
}
constexpr ::System::Threading::CancellationToken& UnityEngine::AsyncInstantiateOperation::__cordl_internal_get_m_CancellationToken() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CancellationToken;
}
constexpr ::System::Threading::CancellationToken const& UnityEngine::AsyncInstantiateOperation::__cordl_internal_get_m_CancellationToken() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_CancellationToken;
}
constexpr void UnityEngine::AsyncInstantiateOperation::__cordl_internal_set_m_CancellationToken(::System::Threading::CancellationToken value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_CancellationToken = value;
}
inline void UnityEngine::AsyncInstantiateOperation::_ctor(::System::IntPtr ptr, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AsyncInstantiateOperation*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::Threading::CancellationToken>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ptr, cancellationToken);
}
inline bool UnityEngine::AsyncInstantiateOperation::IsCancellationRequested() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AsyncInstantiateOperation*>(), { "IsCancellationRequested", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Object>> UnityEngine::AsyncInstantiateOperation::CreateResultArray(int32_t size) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AsyncInstantiateOperation*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Object>>>(this, ___internal_method, size);
}
inline ::UnityEngine::AsyncInstantiateOperation* UnityEngine::AsyncInstantiateOperation::New_ctor(::System::IntPtr ptr, ::System::Threading::CancellationToken cancellationToken) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AsyncInstantiateOperation*>(ptr, cancellationToken));
}
// Ctor Parameters []
constexpr ::UnityEngine::AsyncInstantiateOperation::AsyncInstantiateOperation() {}
