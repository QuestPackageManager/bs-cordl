#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SliderShaderWarmup_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "GlobalNamespace/zzzz__SliderMeshController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SliderShaderWarmup.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderShaderWarmup::*)()>(&::GlobalNamespace::SliderShaderWarmup::Start)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x23959c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderShaderWarmup*>::get(), "Start",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SliderShaderWarmup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::SliderShaderWarmup::*)()>(&::GlobalNamespace::SliderShaderWarmup::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2395b9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderShaderWarmup*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SliderMeshController*& GlobalNamespace::SliderShaderWarmup::__get__sliderMeshController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderMeshController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SliderMeshController*> const& GlobalNamespace::SliderShaderWarmup::__get__sliderMeshController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sliderMeshController;
}
constexpr void GlobalNamespace::SliderShaderWarmup::__set__sliderMeshController(::GlobalNamespace::SliderMeshController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sliderMeshController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::MaterialPropertyBlockController*& GlobalNamespace::SliderShaderWarmup::__get__materialPropertyBlockController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> const& GlobalNamespace::SliderShaderWarmup::__get__materialPropertyBlockController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____materialPropertyBlockController;
}
constexpr void GlobalNamespace::SliderShaderWarmup::__set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____materialPropertyBlockController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::SliderShaderWarmup::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderShaderWarmup*>::get(), "Start",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::SliderShaderWarmup* GlobalNamespace::SliderShaderWarmup::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::SliderShaderWarmup*>());
}
inline void GlobalNamespace::SliderShaderWarmup::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::SliderShaderWarmup*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SliderShaderWarmup::SliderShaderWarmup() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
