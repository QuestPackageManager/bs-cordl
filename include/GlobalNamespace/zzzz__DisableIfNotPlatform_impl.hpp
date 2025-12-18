#pragma once
// IWYU pragma private; include "GlobalNamespace/DisableIfNotPlatform.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DisableIfNotPlatform_def.hpp"
#include "UnityEngine/zzzz__RuntimePlatform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DisableIfNotPlatform.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DisableIfNotPlatform::*)()>(&::GlobalNamespace::DisableIfNotPlatform::Awake)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x569c3f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableIfNotPlatform*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::DisableIfNotPlatform._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::DisableIfNotPlatform::*)()>(&::GlobalNamespace::DisableIfNotPlatform::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x569c4fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableIfNotPlatform*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*>& GlobalNamespace::DisableIfNotPlatform::__cordl_internal_get__whitelistPlatforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____whitelistPlatforms;
}
constexpr ::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*> const& GlobalNamespace::DisableIfNotPlatform::__cordl_internal_get__whitelistPlatforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____whitelistPlatforms;
}
constexpr void GlobalNamespace::DisableIfNotPlatform::__cordl_internal_set__whitelistPlatforms(::ArrayW<::UnityEngine::RuntimePlatform, ::Array<::UnityEngine::RuntimePlatform>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____whitelistPlatforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::DisableIfNotPlatform::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableIfNotPlatform*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::DisableIfNotPlatform::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisableIfNotPlatform*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::DisableIfNotPlatform* GlobalNamespace::DisableIfNotPlatform::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::DisableIfNotPlatform*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DisableIfNotPlatform::DisableIfNotPlatform() {}
