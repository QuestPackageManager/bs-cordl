#pragma once
// IWYU pragma private; include "UnityEngine/Bindings/BlittableArrayWrapper.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags::BlittableArrayWrapper_UpdateFlags(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags::BlittableArrayWrapper_UpdateFlags() {}
constexpr ::UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags::NoUpdateNeeded{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags::SizeChanged{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags::DataIsNativePointer{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags::DataIsNativeOwnedMemory{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags::DataIsEmpty{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags::DataIsNull{ static_cast<int32_t>(0x5) };
//  Writing Method size for method: ::UnityEngine::Bindings::BlittableArrayWrapper._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Bindings::BlittableArrayWrapper::*)(void*, int32_t)>(
    &::UnityEngine::Bindings::BlittableArrayWrapper::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x68cb0e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::BlittableArrayWrapper>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Bindings::BlittableArrayWrapper::_ctor(void* data, int32_t size) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::BlittableArrayWrapper>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data, size);
}
template <typename T> inline void UnityEngine::Bindings::BlittableArrayWrapper::Unmarshal(::ByRef<::ArrayW<T, ::Array<T>*>> array) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Bindings::BlittableArrayWrapper>::get(), "Unmarshal",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::ArrayW<T, ::Array<T>*>>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, array);
}
// Ctor Parameters [CppParam { name: "data", ty: "void*", modifiers: "", def_value: Some("{}") }, CppParam { name: "size", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "updateFlags", ty: "::UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Bindings::BlittableArrayWrapper::BlittableArrayWrapper(void* data, int32_t size, ::UnityEngine::Bindings::BlittableArrayWrapper_UpdateFlags updateFlags) noexcept {
  this->data = data;
  this->size = size;
  this->updateFlags = updateFlags;
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::BlittableArrayWrapper::BlittableArrayWrapper() {}
