#pragma once
// IWYU pragma private; include "GlobalNamespace/CustomBoundingBox.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CustomBoundingBox_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomBoundingBox.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomBoundingBox::*)()>(&::GlobalNamespace::CustomBoundingBox::Awake)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x39c1de4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBoundingBox*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomBoundingBox._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomBoundingBox::*)()>(&::GlobalNamespace::CustomBoundingBox::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x39c1e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBoundingBox*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::CustomBoundingBox::__cordl_internal_get__boundingBoxCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundingBoxCenter;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CustomBoundingBox::__cordl_internal_get__boundingBoxCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundingBoxCenter;
}
constexpr void GlobalNamespace::CustomBoundingBox::__cordl_internal_set__boundingBoxCenter(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____boundingBoxCenter = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CustomBoundingBox::__cordl_internal_get__boundingBoxSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundingBoxSize;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CustomBoundingBox::__cordl_internal_get__boundingBoxSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundingBoxSize;
}
constexpr void GlobalNamespace::CustomBoundingBox::__cordl_internal_set__boundingBoxSize(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____boundingBoxSize = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::CustomBoundingBox::__cordl_internal_get__meshRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::CustomBoundingBox::__cordl_internal_get__meshRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr void GlobalNamespace::CustomBoundingBox::__cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::CustomBoundingBox::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBoundingBox*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::CustomBoundingBox::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBoundingBox*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomBoundingBox* GlobalNamespace::CustomBoundingBox::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::CustomBoundingBox*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomBoundingBox::CustomBoundingBox() {}
