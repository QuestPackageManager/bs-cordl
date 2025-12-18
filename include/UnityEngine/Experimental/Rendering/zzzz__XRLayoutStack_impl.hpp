#pragma once
// IWYU pragma private; include "UnityEngine/Experimental/Rendering/XRLayoutStack.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRLayoutStack_def.hpp"
#include "System/Collections/Generic/zzzz__Stack_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRLayout_def.hpp"
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRLayoutStack.New
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::XRLayout* (::UnityEngine::Experimental::Rendering::XRLayoutStack::*)()>(
    &::UnityEngine::Experimental::Rendering::XRLayoutStack::New)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x65903c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRLayoutStack*>::get(),
                                                                               "New", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRLayoutStack.get_top
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Experimental::Rendering::XRLayout* (::UnityEngine::Experimental::Rendering::XRLayoutStack::*)()>(
    &::UnityEngine::Experimental::Rendering::XRLayoutStack::get_top)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x659047c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRLayoutStack*>::get(),
                                                                               "get_top", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRLayoutStack.Release
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRLayoutStack::*)()>(
    &::UnityEngine::Experimental::Rendering::XRLayoutStack::Release)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x65904d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRLayoutStack*>::get(),
                                                                               "Release", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRLayoutStack.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRLayoutStack::*)()>(
    &::UnityEngine::Experimental::Rendering::XRLayoutStack::Dispose)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x65905dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRLayoutStack*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Experimental::Rendering::XRLayoutStack._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Experimental::Rendering::XRLayoutStack::*)()>(
    &::UnityEngine::Experimental::Rendering::XRLayoutStack::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6590678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRLayoutStack*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Experimental::Rendering::XRLayout*>*& UnityEngine::Experimental::Rendering::XRLayoutStack::__cordl_internal_get_m_Stack() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Stack;
}
constexpr ::System::Collections::Generic::Stack_1<::UnityEngine::Experimental::Rendering::XRLayout*>* const& UnityEngine::Experimental::Rendering::XRLayoutStack::__cordl_internal_get_m_Stack() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Stack;
}
constexpr void UnityEngine::Experimental::Rendering::XRLayoutStack::__cordl_internal_set_m_Stack(::System::Collections::Generic::Stack_1<::UnityEngine::Experimental::Rendering::XRLayout*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Stack)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Experimental::Rendering::XRLayout* UnityEngine::Experimental::Rendering::XRLayoutStack::New() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRLayoutStack*>::get(),
                                                                             "New", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::XRLayout*, false>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::XRLayout* UnityEngine::Experimental::Rendering::XRLayoutStack::get_top() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRLayoutStack*>::get(),
                                                                             "get_top", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::XRLayout*, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRLayoutStack::Release() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRLayoutStack*>::get(),
                                                                             "Release", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRLayoutStack::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRLayoutStack*>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Experimental::Rendering::XRLayoutStack::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Experimental::Rendering::XRLayoutStack*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::XRLayoutStack* UnityEngine::Experimental::Rendering::XRLayoutStack::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Experimental::Rendering::XRLayoutStack*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr UnityEngine::Experimental::Rendering::XRLayoutStack::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Experimental::Rendering::XRLayoutStack::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Experimental::Rendering::XRLayoutStack::XRLayoutStack() {}
