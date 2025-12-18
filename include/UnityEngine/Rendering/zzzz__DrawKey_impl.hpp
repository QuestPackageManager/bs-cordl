#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DrawKey.hpp"
#include "UnityEngine/Rendering/zzzz__BatchDrawCommandFlags_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMaterialID_impl.hpp"
#include "UnityEngine/Rendering/zzzz__BatchMeshID_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RangeKey_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DrawKey_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::DrawKey.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Rendering::DrawKey::*)(::UnityEngine::Rendering::DrawKey)>(
    &::UnityEngine::Rendering::DrawKey::Equals)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x665f980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawKey>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DrawKey>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::DrawKey.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Rendering::DrawKey::*)()>(&::UnityEngine::Rendering::DrawKey::GetHashCode)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x665fad8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawKey>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawKey>::get(), 2));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::DrawKey::Equals(::UnityEngine::Rendering::DrawKey other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawKey>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Rendering::DrawKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline int32_t UnityEngine::Rendering::DrawKey::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DrawKey>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::DrawKey>"
constexpr UnityEngine::Rendering::DrawKey::operator ::System::IEquatable_1<::UnityEngine::Rendering::DrawKey>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::DrawKey>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::DrawKey>"
constexpr ::System::IEquatable_1<::UnityEngine::Rendering::DrawKey>* UnityEngine::Rendering::DrawKey::i___System__IEquatable_1___UnityEngine__Rendering__DrawKey_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Rendering::DrawKey>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "meshID", ty: "::UnityEngine::Rendering::BatchMeshID", modifiers: "", def_value: Some("{}") }, CppParam { name: "submeshIndex", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "materialID", ty: "::UnityEngine::Rendering::BatchMaterialID", modifiers: "", def_value: Some("{}") }, CppParam { name: "flags", ty:
// "::UnityEngine::Rendering::BatchDrawCommandFlags", modifiers: "", def_value: Some("{}") }, CppParam { name: "transparentInstanceId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "overridenComponents", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "range", ty: "::UnityEngine::Rendering::RangeKey", modifiers: "", def_value: Some("{}") },
// CppParam { name: "lightmapIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Rendering::DrawKey::DrawKey(::UnityEngine::Rendering::BatchMeshID meshID, int32_t submeshIndex, ::UnityEngine::Rendering::BatchMaterialID materialID,
                                                     ::UnityEngine::Rendering::BatchDrawCommandFlags flags, int32_t transparentInstanceId, uint32_t overridenComponents,
                                                     ::UnityEngine::Rendering::RangeKey range, int32_t lightmapIndex) noexcept {
  this->meshID = meshID;
  this->submeshIndex = submeshIndex;
  this->materialID = materialID;
  this->flags = flags;
  this->transparentInstanceId = transparentInstanceId;
  this->overridenComponents = overridenComponents;
  this->range = range;
  this->lightmapIndex = lightmapIndex;
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DrawKey::DrawKey() {}
