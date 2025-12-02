#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/XRGraphicsAutomatedTests.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__XRGraphicsAutomatedTests_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRLayout_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::XRGraphicsAutomatedTests.get_activatedFromCommandLine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Rendering::XRGraphicsAutomatedTests::get_activatedFromCommandLine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x65b0884;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::XRGraphicsAutomatedTests*>::get(),
                                                                               "get_activatedFromCommandLine", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::XRGraphicsAutomatedTests.get_enabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::Rendering::XRGraphicsAutomatedTests::get_enabled)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x65b088c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::XRGraphicsAutomatedTests*>::get(),
                                                                               "get_enabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::XRGraphicsAutomatedTests.OverrideLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Experimental::Rendering::XRLayout*, ::UnityEngine::Camera*)>(
    &::UnityEngine::Rendering::XRGraphicsAutomatedTests::OverrideLayout)> {
  constexpr static std::size_t size = 0x51c;
  constexpr static std::size_t addrs = 0x65b08e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::XRGraphicsAutomatedTests*>::get(), "OverrideLayout", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRLayout*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::XRGraphicsAutomatedTests::setStaticF__enabled_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<enabled>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::XRGraphicsAutomatedTests*>::get>(
      std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::XRGraphicsAutomatedTests::getStaticF__enabled_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<enabled>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::XRGraphicsAutomatedTests*>::get>();
}
inline void UnityEngine::Rendering::XRGraphicsAutomatedTests::setStaticF_running(bool value) {
  ::cordl_internals::setStaticField<bool, "running", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::XRGraphicsAutomatedTests*>::get>(std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::XRGraphicsAutomatedTests::getStaticF_running() {
  return ::cordl_internals::getStaticField<bool, "running", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::XRGraphicsAutomatedTests*>::get>();
}
inline bool UnityEngine::Rendering::XRGraphicsAutomatedTests::get_activatedFromCommandLine() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::XRGraphicsAutomatedTests*>::get(),
                                                                             "get_activatedFromCommandLine", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::XRGraphicsAutomatedTests::get_enabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::XRGraphicsAutomatedTests*>::get(),
                                                                             "get_enabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::XRGraphicsAutomatedTests::OverrideLayout(::UnityEngine::Experimental::Rendering::XRLayout* layout, ::UnityEngine::Camera* camera) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::XRGraphicsAutomatedTests*>::get(), "OverrideLayout", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Experimental::Rendering::XRLayout*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, layout, camera);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::XRGraphicsAutomatedTests::XRGraphicsAutomatedTests() {}
