#pragma once
#include "Mono/zzzz__RuntimeGPtrArrayHandle_def.hpp"
#include "Mono/zzzz__RuntimeStructs_def.hpp"
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::RuntimeGPtrArrayHandle::*)(void*)>(&::Mono::RuntimeGPtrArrayHandle::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x25035c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.get_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::RuntimeGPtrArrayHandle::*)()>(&::Mono::RuntimeGPtrArrayHandle::get_Length)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x25035e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(), "get_Length",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (::Mono::RuntimeGPtrArrayHandle::*)(int32_t)>(&::Mono::RuntimeGPtrArrayHandle::get_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2503600;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.Lookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (::Mono::RuntimeGPtrArrayHandle::*)(int32_t)>(&::Mono::RuntimeGPtrArrayHandle::Lookup)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x2503604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(), "Lookup", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.GPtrArrayFree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>)>(
    &::Mono::RuntimeGPtrArrayHandle::GPtrArrayFree)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2503670;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(), "GPtrArrayFree", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.DestroyAndFree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(ByRef<::Mono::RuntimeGPtrArrayHandle>)>(&::Mono::RuntimeGPtrArrayHandle::DestroyAndFree)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2503674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(), "DestroyAndFree", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::RuntimeGPtrArrayHandle>>::get() })));
    return ___internal_method;
  }
};
inline void Mono::RuntimeGPtrArrayHandle::_ctor(void* ptr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ptr);
}
inline int32_t Mono::RuntimeGPtrArrayHandle::get_Length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(), "get_Length",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void* Mono::RuntimeGPtrArrayHandle::get_Item(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method, i);
}
inline void* Mono::RuntimeGPtrArrayHandle::Lookup(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(), "Lookup", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method, i);
}
inline void Mono::RuntimeGPtrArrayHandle::GPtrArrayFree(::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray> value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(), "GPtrArrayFree", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Mono::RuntimeGPtrArrayHandle::DestroyAndFree(ByRef<::Mono::RuntimeGPtrArrayHandle> h) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(), "DestroyAndFree", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::Mono::RuntimeGPtrArrayHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, h);
}
// Ctor Parameters [CppParam { name: "value", ty: "::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray>", modifiers: "", def_value: Some("nullptr") }]
constexpr ::Mono::RuntimeGPtrArrayHandle::RuntimeGPtrArrayHandle(::cordl_internals::Ptr<::Mono::__RuntimeStructs__GPtrArray> value) noexcept {
  this->value = value;
}
// Ctor Parameters []
constexpr ::Mono::RuntimeGPtrArrayHandle::RuntimeGPtrArrayHandle() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
