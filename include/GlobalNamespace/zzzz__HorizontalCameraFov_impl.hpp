#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HorizontalCameraFov_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HorizontalCameraFov.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HorizontalCameraFov::*)()>(&::GlobalNamespace::HorizontalCameraFov::Awake)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x1f97124;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HorizontalCameraFov*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HorizontalCameraFov._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::HorizontalCameraFov::*)()>(&::GlobalNamespace::HorizontalCameraFov::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x1f971dc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HorizontalCameraFov*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::HorizontalCameraFov::__get__horizontalFOV() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____horizontalFOV;
}
constexpr float_t const& GlobalNamespace::HorizontalCameraFov::__get__horizontalFOV() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____horizontalFOV;
}
constexpr void GlobalNamespace::HorizontalCameraFov::__set__horizontalFOV(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____horizontalFOV = value;
}
inline void GlobalNamespace::HorizontalCameraFov::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HorizontalCameraFov*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::HorizontalCameraFov* GlobalNamespace::HorizontalCameraFov::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::HorizontalCameraFov*>());
}
inline void GlobalNamespace::HorizontalCameraFov::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::HorizontalCameraFov*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HorizontalCameraFov::HorizontalCameraFov() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
