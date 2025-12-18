#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RangeKey.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowCastingMode_impl.hpp"
#include "UnityEngine/zzzz__MotionVectorGenerationMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RangeKey_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::RangeKey.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::RangeKey::*)(::UnityEngine::Rendering::RangeKey)>(
    &::UnityEngine::Rendering::RangeKey::Equals)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x665f8b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RangeKey>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RangeKey>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::RangeKey.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::RangeKey::*)()>(&::UnityEngine::Rendering::RangeKey::GetHashCode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x665f93c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RangeKey>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RangeKey>::get(), 2));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::RangeKey::Equals(::UnityEngine::Rendering::RangeKey other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RangeKey>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::RangeKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t UnityEngine::Rendering::RangeKey::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::RangeKey>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::RangeKey>"
constexpr UnityEngine::Rendering::RangeKey::operator ::System::IEquatable_1<::UnityEngine::Rendering::RangeKey>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::RangeKey>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::RangeKey>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::RangeKey>* UnityEngine::Rendering::RangeKey::i___System__IEquatable_1___UnityEngine__Rendering__RangeKey_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::RangeKey>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "layer", ty: "uint8_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "renderingLayerMask", ty: "uint32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "motionMode", ty: "::UnityEngine::MotionVectorGenerationMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "shadowCastingMode", ty:
// "::UnityEngine::Rendering::ShadowCastingMode", modifiers: "", def_value: Some("{}") }, CppParam { name: "staticShadowCaster", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "rendererPriority", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "supportsIndirect", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::RangeKey::RangeKey(uint8_t layer, uint32_t renderingLayerMask, ::UnityEngine::MotionVectorGenerationMode motionMode,
                                                       ::UnityEngine::Rendering::ShadowCastingMode shadowCastingMode, bool staticShadowCaster, int32_t rendererPriority,
                                                       bool supportsIndirect) noexcept {
  this->layer = layer;
  this->renderingLayerMask = renderingLayerMask;
  this->motionMode = motionMode;
  this->shadowCastingMode = shadowCastingMode;
  this->staticShadowCaster = staticShadowCaster;
  this->rendererPriority = rendererPriority;
  this->supportsIndirect = supportsIndirect;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::RangeKey::RangeKey() {}
