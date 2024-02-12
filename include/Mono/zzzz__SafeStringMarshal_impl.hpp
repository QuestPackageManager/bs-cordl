#pragma once
#include "System/zzzz__IntPtr_impl.hpp"
#include "Mono/zzzz__SafeStringMarshal_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Mono::SafeStringMarshal.StringToUtf8_icall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(ByRef<::StringW>)>(&::Mono::SafeStringMarshal::StringToUtf8_icall)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2432cf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SafeStringMarshal>::get(), "StringToUtf8_icall", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SafeStringMarshal.StringToUtf8
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (*)(::StringW)>(&::Mono::SafeStringMarshal::StringToUtf8)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x2432cf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SafeStringMarshal>::get(), "StringToUtf8", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SafeStringMarshal.GFree
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(void*)>(&::Mono::SafeStringMarshal::GFree)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2432d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SafeStringMarshal>::get(), "GFree", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SafeStringMarshal._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::SafeStringMarshal::*)(::StringW)>(&::Mono::SafeStringMarshal::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2432acc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SafeStringMarshal>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SafeStringMarshal.get_Value
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void* (::Mono::SafeStringMarshal::*)()>(&::Mono::SafeStringMarshal::get_Value)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2432d14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SafeStringMarshal>::get(), "get_Value",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mono::SafeStringMarshal.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Mono::SafeStringMarshal::*)()>(&::Mono::SafeStringMarshal::Dispose)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x2432d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SafeStringMarshal>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr Mono::SafeStringMarshal::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Mono::SafeStringMarshal::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void* Mono::SafeStringMarshal::StringToUtf8_icall(ByRef<::StringW> str) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SafeStringMarshal>::get(), "StringToUtf8_icall", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::StringW>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, str);
}
inline void* Mono::SafeStringMarshal::StringToUtf8(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SafeStringMarshal>::get(), "StringToUtf8", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void*, false>(nullptr, ___internal_method, str);
}
inline void Mono::SafeStringMarshal::GFree(void* ptr) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SafeStringMarshal>::get(), "GFree", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ptr);
}
inline void Mono::SafeStringMarshal::_ctor(::StringW str) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SafeStringMarshal>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, str);
}
inline void* Mono::SafeStringMarshal::get_Value() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SafeStringMarshal>::get(), "get_Value",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void*, false>(this, ___internal_method);
}
inline void Mono::SafeStringMarshal::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::SafeStringMarshal>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "str", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "marshaled_string", ty: "void*", modifiers: "", def_value: Some("{}") }]
constexpr ::Mono::SafeStringMarshal::SafeStringMarshal(::StringW str, void* marshaled_string) noexcept {
  this->str = str;
  this->marshaled_string = marshaled_string;
}
// Ctor Parameters []
constexpr ::Mono::SafeStringMarshal::SafeStringMarshal() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
