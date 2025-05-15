#pragma once
// IWYU pragma private; include "UnityEngine/UI/ClipperRegistry.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/zzzz__ClipperRegistry_def.hpp"
#include "UnityEngine/UI/Collections/zzzz__IndexedSet_1_def.hpp"
#include "UnityEngine/UI/zzzz__IClipper_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::ClipperRegistry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ClipperRegistry::*)()>(&::UnityEngine::UI::ClipperRegistry::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4959b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ClipperRegistry.get_instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::ClipperRegistry* (*)()>(&::UnityEngine::UI::ClipperRegistry::get_instance)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x4958788;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get(), "get_instance",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ClipperRegistry.Cull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ClipperRegistry::*)()>(&::UnityEngine::UI::ClipperRegistry::Cull)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x49587fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get(), "Cull",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ClipperRegistry.Register
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UI::IClipper*)>(&::UnityEngine::UI::ClipperRegistry::Register)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x4959b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::IClipper*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ClipperRegistry.Unregister
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UI::IClipper*)>(&::UnityEngine::UI::ClipperRegistry::Unregister)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4959c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get(), "Unregister", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::IClipper*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ClipperRegistry.Disable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UI::IClipper*)>(&::UnityEngine::UI::ClipperRegistry::Disable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x4959c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get(), "Disable", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::IClipper*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::IClipper*>*& UnityEngine::UI::ClipperRegistry::__cordl_internal_get_m_Clippers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Clippers;
}
constexpr ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::IClipper*>* const& UnityEngine::UI::ClipperRegistry::__cordl_internal_get_m_Clippers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Clippers;
}
constexpr void UnityEngine::UI::ClipperRegistry::__cordl_internal_set_m_Clippers(::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::IClipper*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Clippers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::UI::ClipperRegistry::setStaticF_s_Instance(::UnityEngine::UI::ClipperRegistry* value) {
  ::cordl_internals::setStaticField<::UnityEngine::UI::ClipperRegistry*, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get>(
      std::forward<::UnityEngine::UI::ClipperRegistry*>(value));
}
inline ::UnityEngine::UI::ClipperRegistry* UnityEngine::UI::ClipperRegistry::getStaticF_s_Instance() {
  return ::cordl_internals::getStaticField<::UnityEngine::UI::ClipperRegistry*, "s_Instance", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get>();
}
inline void UnityEngine::UI::ClipperRegistry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UI::ClipperRegistry* UnityEngine::UI::ClipperRegistry::get_instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get(), "get_instance",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::ClipperRegistry*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UI::ClipperRegistry::Cull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get(), "Cull",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::ClipperRegistry::Register(::UnityEngine::UI::IClipper* c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::IClipper*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, c);
}
inline void UnityEngine::UI::ClipperRegistry::Unregister(::UnityEngine::UI::IClipper* c) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get(), "Unregister", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::IClipper*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, c);
}
inline void UnityEngine::UI::ClipperRegistry::Disable(::UnityEngine::UI::IClipper* c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get(), "Disable", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::IClipper*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, c);
}
inline ::UnityEngine::UI::ClipperRegistry* UnityEngine::UI::ClipperRegistry::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::UI::ClipperRegistry*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ClipperRegistry::ClipperRegistry() {}
