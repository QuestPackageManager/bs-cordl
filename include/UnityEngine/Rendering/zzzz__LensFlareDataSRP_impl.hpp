#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/LensFlareDataSRP.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LensFlareDataSRP_def.hpp"
#include "UnityEngine/Rendering/zzzz__LensFlareDataElementSRP_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareDataSRP._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::LensFlareDataSRP::*)()>(&::UnityEngine::Rendering::LensFlareDataSRP::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x65839b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareDataSRP*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::LensFlareDataSRP.HasAModulateByLightColorElement
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::LensFlareDataSRP::*)()>(
    &::UnityEngine::Rendering::LensFlareDataSRP::HasAModulateByLightColorElement)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x65839d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareDataSRP*>::get(), "HasAModulateByLightColorElement",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*, ::Array<::UnityEngine::Rendering::LensFlareDataElementSRP*>*>&
UnityEngine::Rendering::LensFlareDataSRP::__cordl_internal_get_elements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
constexpr ::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*, ::Array<::UnityEngine::Rendering::LensFlareDataElementSRP*>*> const&
UnityEngine::Rendering::LensFlareDataSRP::__cordl_internal_get_elements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elements;
}
constexpr void UnityEngine::Rendering::LensFlareDataSRP::__cordl_internal_set_elements(
    ::ArrayW<::UnityEngine::Rendering::LensFlareDataElementSRP*, ::Array<::UnityEngine::Rendering::LensFlareDataElementSRP*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___elements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Rendering::LensFlareDataSRP::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareDataSRP*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::LensFlareDataSRP::HasAModulateByLightColorElement() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::LensFlareDataSRP*>::get(),
                                                                             "HasAModulateByLightColorElement", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::LensFlareDataSRP* UnityEngine::Rendering::LensFlareDataSRP::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::LensFlareDataSRP*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LensFlareDataSRP::LensFlareDataSRP() {}
