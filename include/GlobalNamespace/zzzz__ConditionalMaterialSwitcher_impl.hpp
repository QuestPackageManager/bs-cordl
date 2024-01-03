#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__ConditionalMaterialSwitcher_def.hpp"
#include "GlobalNamespace/zzzz__BoolSO_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ConditionalMaterialSwitcher.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConditionalMaterialSwitcher::*)()>(&::GlobalNamespace::ConditionalMaterialSwitcher::Awake)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x226c040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConditionalMaterialSwitcher*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ConditionalMaterialSwitcher._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ConditionalMaterialSwitcher::*)()>(&::GlobalNamespace::ConditionalMaterialSwitcher::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x226c0b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConditionalMaterialSwitcher*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Material*& GlobalNamespace::ConditionalMaterialSwitcher::__get__material0() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material0;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& GlobalNamespace::ConditionalMaterialSwitcher::__get__material0() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material0;
}
constexpr void GlobalNamespace::ConditionalMaterialSwitcher::__set__material0(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____material0)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Material*& GlobalNamespace::ConditionalMaterialSwitcher::__get__material1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material1;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Material*> const& GlobalNamespace::ConditionalMaterialSwitcher::__get__material1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____material1;
}
constexpr void GlobalNamespace::ConditionalMaterialSwitcher::__set__material1(::UnityEngine::Material* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____material1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BoolSO*& GlobalNamespace::ConditionalMaterialSwitcher::__get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BoolSO*> const& GlobalNamespace::ConditionalMaterialSwitcher::__get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void GlobalNamespace::ConditionalMaterialSwitcher::__set__value(::GlobalNamespace::BoolSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Renderer*& GlobalNamespace::ConditionalMaterialSwitcher::__get__renderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Renderer*> const& GlobalNamespace::ConditionalMaterialSwitcher::__get__renderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderer;
}
constexpr void GlobalNamespace::ConditionalMaterialSwitcher::__set__renderer(::UnityEngine::Renderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::ConditionalMaterialSwitcher::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConditionalMaterialSwitcher*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::ConditionalMaterialSwitcher* GlobalNamespace::ConditionalMaterialSwitcher::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::ConditionalMaterialSwitcher*>());
}
inline void GlobalNamespace::ConditionalMaterialSwitcher::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ConditionalMaterialSwitcher*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ConditionalMaterialSwitcher::ConditionalMaterialSwitcher() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
