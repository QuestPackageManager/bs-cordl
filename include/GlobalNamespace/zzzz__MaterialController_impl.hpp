#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialController_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialController.get_material
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Material* (::GlobalNamespace::MaterialController::*)()>(
    &::GlobalNamespace::MaterialController::get_material)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2114950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialController*>::get(), "get_material",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialController.OnValidate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialController::*)()>(&::GlobalNamespace::MaterialController::OnValidate)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2114958;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialController*>::get(), "OnValidate",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialController._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialController::*)()>(&::GlobalNamespace::MaterialController::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2114984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialController*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Material*& GlobalNamespace::MaterialController::__get__material() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& GlobalNamespace::MaterialController::__get__material() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material;
}
constexpr void GlobalNamespace::MaterialController::__set__material(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____material)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*>& GlobalNamespace::MaterialController::__get__renderers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderers;
}
constexpr ::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> const& GlobalNamespace::MaterialController::__get__renderers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderers;
}
constexpr void GlobalNamespace::MaterialController::__set__renderers(::ArrayW<::UnityEngine::Renderer*, ::Array<::UnityEngine::Renderer*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Material* GlobalNamespace::MaterialController::get_material() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialController*>::get(), "get_material",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Material*, false>(this, ___internal_method);
}
inline void GlobalNamespace::MaterialController::OnValidate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialController*>::get(), "OnValidate",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialController* GlobalNamespace::MaterialController::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MaterialController*>());
}
inline void GlobalNamespace::MaterialController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialController*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialController::MaterialController() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
