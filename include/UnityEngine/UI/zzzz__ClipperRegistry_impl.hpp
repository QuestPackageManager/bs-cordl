#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/zzzz__ClipperRegistry_def.hpp"
#include "UnityEngine/UI/Collections/zzzz__IndexedSet_1_def.hpp"
#include "UnityEngine/UI/zzzz__IClipper_def.hpp"
//  Writing Method size for method: ::UnityEngine::UI::ClipperRegistry._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ClipperRegistry::*)()>(&::UnityEngine::UI::ClipperRegistry::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d531b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ClipperRegistry.get_instance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::UI::ClipperRegistry* (*)()>(&::UnityEngine::UI::ClipperRegistry::get_instance)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d51fd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get(), "get_instance",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ClipperRegistry.Cull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::UI::ClipperRegistry::*)()>(&::UnityEngine::UI::ClipperRegistry::Cull)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x2d52054;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get(), "Cull",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ClipperRegistry.Register
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UI::IClipper*)>(&::UnityEngine::UI::ClipperRegistry::Register)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2d53230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get(), "Register", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::IClipper*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ClipperRegistry.Unregister
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UI::IClipper*)>(&::UnityEngine::UI::ClipperRegistry::Unregister)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d532a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get(), "Unregister", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::IClipper*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UI::ClipperRegistry.Disable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::UI::IClipper*)>(&::UnityEngine::UI::ClipperRegistry::Disable)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d532fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get(), "Disable", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::IClipper*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::IClipper*>*& UnityEngine::UI::ClipperRegistry::__get_m_Clippers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Clippers;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::IClipper*>*> const& UnityEngine::UI::ClipperRegistry::__get_m_Clippers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Clippers;
}
constexpr void UnityEngine::UI::ClipperRegistry::__set_m_Clippers(::UnityEngine::UI::Collections::IndexedSet_1<::UnityEngine::UI::IClipper*>* value) {
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
inline ::UnityEngine::UI::ClipperRegistry* UnityEngine::UI::ClipperRegistry::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::UI::ClipperRegistry*>());
}
inline void UnityEngine::UI::ClipperRegistry::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::UI::ClipperRegistry* UnityEngine::UI::ClipperRegistry::get_instance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get(), "get_instance",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::UI::ClipperRegistry*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::UI::ClipperRegistry::Cull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get(), "Cull",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::UI::ClipperRegistry::Register(::UnityEngine::UI::IClipper* c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get(), "Register", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::IClipper*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, c);
}
inline void UnityEngine::UI::ClipperRegistry::Unregister(::UnityEngine::UI::IClipper* c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get(), "Unregister", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::IClipper*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, c);
}
inline void UnityEngine::UI::ClipperRegistry::Disable(::UnityEngine::UI::IClipper* c) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::UI::ClipperRegistry*>::get(), "Disable", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::UI::IClipper*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, c);
}
// Ctor Parameters []
constexpr ::UnityEngine::UI::ClipperRegistry::ClipperRegistry() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
