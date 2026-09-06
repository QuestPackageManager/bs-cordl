#pragma once
// IWYU pragma private; include "System/IAsyncResult.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::IAsyncResult.get_IsCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IAsyncResult::*)()>(&::System::IAsyncResult::get_IsCompleted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IAsyncResult*>(), { ::i2c::class_of<::System::IAsyncResult*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IAsyncResult.get_AsyncWaitHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::WaitHandle* (::System::IAsyncResult::*)()>(&::System::IAsyncResult::get_AsyncWaitHandle)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IAsyncResult*>(), { ::i2c::class_of<::System::IAsyncResult*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IAsyncResult.get_AsyncState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::IAsyncResult::*)()>(&::System::IAsyncResult::get_AsyncState)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IAsyncResult*>(), { ::i2c::class_of<::System::IAsyncResult*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::IAsyncResult.get_CompletedSynchronously
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::IAsyncResult::*)()>(&::System::IAsyncResult::get_CompletedSynchronously)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::IAsyncResult*>(), { ::i2c::class_of<::System::IAsyncResult*>(), 3 }));
    return ___internal_method;
  }
};
inline bool System::IAsyncResult::get_IsCompleted() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IAsyncResult*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::WaitHandle* System::IAsyncResult::get_AsyncWaitHandle() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IAsyncResult*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::WaitHandle*>(this, ___internal_method);
}
inline ::System::Object* System::IAsyncResult::get_AsyncState() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IAsyncResult*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline bool System::IAsyncResult::get_CompletedSynchronously() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::IAsyncResult*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
