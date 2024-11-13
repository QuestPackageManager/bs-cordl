#pragma once
// IWYU pragma private; include "GlobalNamespace/CameraDepthTextureMode.hpp"
#include "UnityEngine/zzzz__DepthTextureMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__CameraDepthTextureMode_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CameraDepthTextureMode.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CameraDepthTextureMode::*)()>(&::GlobalNamespace::CameraDepthTextureMode::Awake)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x396c3a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CameraDepthTextureMode*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CameraDepthTextureMode._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CameraDepthTextureMode::*)()>(&::GlobalNamespace::CameraDepthTextureMode::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x396c404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CameraDepthTextureMode*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::DepthTextureMode& GlobalNamespace::CameraDepthTextureMode::__cordl_internal_get__depthTextureMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depthTextureMode;
}
constexpr ::UnityEngine::DepthTextureMode const& GlobalNamespace::CameraDepthTextureMode::__cordl_internal_get__depthTextureMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____depthTextureMode;
}
constexpr void GlobalNamespace::CameraDepthTextureMode::__cordl_internal_set__depthTextureMode(::UnityEngine::DepthTextureMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____depthTextureMode = value;
}
inline void GlobalNamespace::CameraDepthTextureMode::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CameraDepthTextureMode*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CameraDepthTextureMode* GlobalNamespace::CameraDepthTextureMode::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CameraDepthTextureMode*>());
}
inline void GlobalNamespace::CameraDepthTextureMode::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CameraDepthTextureMode*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CameraDepthTextureMode::CameraDepthTextureMode() {}
