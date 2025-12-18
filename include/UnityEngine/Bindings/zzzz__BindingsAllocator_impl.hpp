#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/BindingsAllocator.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*)>(&::UnityEngine::Bindings::BindingsAllocator::Free)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6933ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::BindingsAllocator*>::get(), "Free",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::BindingsAllocator.FreeNativeOwnedMemory
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*)>(&::UnityEngine::Bindings::BindingsAllocator::FreeNativeOwnedMemory)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6933f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::BindingsAllocator*>::get(), "FreeNativeOwnedMemory",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::BindingsAllocator.GetNativeOwnedDataPointer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(void*)>(&::UnityEngine::Bindings::BindingsAllocator::GetNativeOwnedDataPointer)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6933f50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::BindingsAllocator*>::get(), "GetNativeOwnedDataPointer",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Bindings::BindingsAllocator::Free(void* ptr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::BindingsAllocator*>::get(), "Free",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ptr);
}
inline void UnityEngine::Bindings::BindingsAllocator::FreeNativeOwnedMemory(void* ptr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::BindingsAllocator*>::get(), "FreeNativeOwnedMemory",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ptr);
}
inline void* UnityEngine::Bindings::BindingsAllocator::GetNativeOwnedDataPointer(void* ptr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::BindingsAllocator*>::get(), "GetNativeOwnedDataPointer",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, ptr);
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::BindingsAllocator::BindingsAllocator() {}
