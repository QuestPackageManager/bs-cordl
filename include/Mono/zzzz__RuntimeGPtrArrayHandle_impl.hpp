#pragma once
// IWYU pragma private; include "Mono/RuntimeGPtrArrayHandle.hpp"
#include "Mono/zzzz__RuntimeGPtrArrayHandle_def.hpp"
#include "Mono/zzzz__RuntimeStructs_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::RuntimeGPtrArrayHandle::*)(::System::IntPtr)>(&::Mono::RuntimeGPtrArrayHandle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ff1d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.get_Length
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Mono::RuntimeGPtrArrayHandle::*)()>(&::Mono::RuntimeGPtrArrayHandle::get_Length)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58ff1d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(), "get_Length",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::Mono::RuntimeGPtrArrayHandle::*)(int32_t)>(&::Mono::RuntimeGPtrArrayHandle::get_Item)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58ff1f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.Lookup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::IntPtr (::Mono::RuntimeGPtrArrayHandle::*)(int32_t)>(&::Mono::RuntimeGPtrArrayHandle::Lookup)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58ff1f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(), "Lookup", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.GPtrArrayFree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Mono::RuntimeStructs_GPtrArray*)>(&::Mono::RuntimeGPtrArrayHandle::GPtrArrayFree)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x58ff258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(), "GPtrArrayFree", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::RuntimeStructs_GPtrArray*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::RuntimeGPtrArrayHandle.DestroyAndFree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::Mono::RuntimeGPtrArrayHandle>)>(&::Mono::RuntimeGPtrArrayHandle::DestroyAndFree)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x58ff298;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(), "DestroyAndFree", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Mono::RuntimeGPtrArrayHandle>>::get() })));
    return ___internal_method;
  }
};
inline void Mono::RuntimeGPtrArrayHandle::_ctor(::System::IntPtr ptr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ptr);
}
inline int32_t Mono::RuntimeGPtrArrayHandle::get_Length() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(), "get_Length",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::IntPtr Mono::RuntimeGPtrArrayHandle::get_Item(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, i);
}
inline ::System::IntPtr Mono::RuntimeGPtrArrayHandle::Lookup(int32_t i) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(), "Lookup", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr, false>(this, ___internal_method, i);
}
inline void Mono::RuntimeGPtrArrayHandle::GPtrArrayFree(::Mono::RuntimeStructs_GPtrArray* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(), "GPtrArrayFree", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Mono::RuntimeStructs_GPtrArray*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void Mono::RuntimeGPtrArrayHandle::DestroyAndFree(::ByRef<::Mono::RuntimeGPtrArrayHandle> h) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::RuntimeGPtrArrayHandle>::get(), "DestroyAndFree", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Mono::RuntimeGPtrArrayHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, h);
}
// Ctor Parameters [CppParam { name: "value", ty: "::Mono::RuntimeStructs_GPtrArray*", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::RuntimeGPtrArrayHandle::RuntimeGPtrArrayHandle(::Mono::RuntimeStructs_GPtrArray* value) noexcept {
  this->value = value;
}
// Ctor Parameters []
constexpr ::Mono::RuntimeGPtrArrayHandle::RuntimeGPtrArrayHandle() {}
