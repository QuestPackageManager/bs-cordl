#pragma once
// IWYU pragma private; include "UnityEngine\Bindings\BindingsAllocator.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Bindings/zzzz__BindingsAllocator_def.hpp"
#include "UnityEngine/Bindings/zzzz__BindingsAllocator_def.hpp"
// Ctor Parameters [CppParam { name: "data", ty: "void*", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Bindings::BindingsAllocator_NativeOwnedMemory::BindingsAllocator_NativeOwnedMemory(void* data) noexcept {
  this->data = data;
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::BindingsAllocator_NativeOwnedMemory::BindingsAllocator_NativeOwnedMemory() {}
//  Writing Method size for method: ::UnityEngine::Bindings::BindingsAllocator.Free
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*)>(&::UnityEngine::Bindings::BindingsAllocator::Free)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6afee28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::BindingsAllocator*>(), { "Free", {}, { ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::BindingsAllocator.FreeNativeOwnedMemory
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*)>(&::UnityEngine::Bindings::BindingsAllocator::FreeNativeOwnedMemory)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6afee64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::BindingsAllocator*>(), { "FreeNativeOwnedMemory", {}, { ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::BindingsAllocator.GetNativeOwnedDataPointer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(void*)>(&::UnityEngine::Bindings::BindingsAllocator::GetNativeOwnedDataPointer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6afeea0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::BindingsAllocator*>(), { "GetNativeOwnedDataPointer", {}, { ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Bindings::BindingsAllocator::Free(void* ptr) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::BindingsAllocator*>(), { "Free", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr);
}
inline void UnityEngine::Bindings::BindingsAllocator::FreeNativeOwnedMemory(void* ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::BindingsAllocator*>(), { "FreeNativeOwnedMemory", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ptr);
}
inline void* UnityEngine::Bindings::BindingsAllocator::GetNativeOwnedDataPointer(void* ptr) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::BindingsAllocator*>(), { "GetNativeOwnedDataPointer", {}, { ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, ptr);
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::BindingsAllocator::BindingsAllocator() {}
