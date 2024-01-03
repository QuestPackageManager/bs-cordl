#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__CustomBoundingBox_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomBoundingBox.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomBoundingBox::*)()>(&::GlobalNamespace::CustomBoundingBox::Awake)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x20f1db4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBoundingBox*>::get(), "Awake",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomBoundingBox._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomBoundingBox::*)()>(&::GlobalNamespace::CustomBoundingBox::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x20f1e20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBoundingBox*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& GlobalNamespace::CustomBoundingBox::__get__boundingBoxCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundingBoxCenter;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CustomBoundingBox::__get__boundingBoxCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundingBoxCenter;
}
constexpr void GlobalNamespace::CustomBoundingBox::__set__boundingBoxCenter(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____boundingBoxCenter = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::CustomBoundingBox::__get__boundingBoxSize() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundingBoxSize;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::CustomBoundingBox::__get__boundingBoxSize() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____boundingBoxSize;
}
constexpr void GlobalNamespace::CustomBoundingBox::__set__boundingBoxSize(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____boundingBoxSize = value;
}
constexpr ::UnityEngine::MeshRenderer*& GlobalNamespace::CustomBoundingBox::__get__meshRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& GlobalNamespace::CustomBoundingBox::__get__meshRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshRenderer;
}
constexpr void GlobalNamespace::CustomBoundingBox::__set__meshRenderer(::UnityEngine::MeshRenderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____meshRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::CustomBoundingBox::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBoundingBox*>::get(), "Awake",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomBoundingBox* GlobalNamespace::CustomBoundingBox::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CustomBoundingBox*>());
}
inline void GlobalNamespace::CustomBoundingBox::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBoundingBox*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomBoundingBox::CustomBoundingBox() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
