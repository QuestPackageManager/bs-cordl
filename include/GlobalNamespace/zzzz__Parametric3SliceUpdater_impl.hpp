#pragma once
// IWYU pragma private; include "GlobalNamespace/Parametric3SliceUpdater.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__Parametric3SliceUpdater_def.hpp"
#include "GlobalNamespace/zzzz__Parametric3SliceSpriteController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Parametric3SliceUpdater.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Parametric3SliceUpdater::*)()>(&::GlobalNamespace::Parametric3SliceUpdater::Update)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x39daf18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Parametric3SliceUpdater*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Parametric3SliceUpdater._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Parametric3SliceUpdater::*)()>(&::GlobalNamespace::Parametric3SliceUpdater::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39daf30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Parametric3SliceUpdater*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::Parametric3SliceSpriteController>& GlobalNamespace::Parametric3SliceUpdater::__cordl_internal_get__parametric3SliceSpriteController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parametric3SliceSpriteController;
}
constexpr ::UnityW<::GlobalNamespace::Parametric3SliceSpriteController> const& GlobalNamespace::Parametric3SliceUpdater::__cordl_internal_get__parametric3SliceSpriteController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____parametric3SliceSpriteController;
}
constexpr void GlobalNamespace::Parametric3SliceUpdater::__cordl_internal_set__parametric3SliceSpriteController(::UnityW<::GlobalNamespace::Parametric3SliceSpriteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____parametric3SliceSpriteController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::Parametric3SliceUpdater::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Parametric3SliceUpdater*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Parametric3SliceUpdater::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Parametric3SliceUpdater*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::Parametric3SliceUpdater* GlobalNamespace::Parametric3SliceUpdater::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::Parametric3SliceUpdater*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Parametric3SliceUpdater::Parametric3SliceUpdater() {}
