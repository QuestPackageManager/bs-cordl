#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRGLTFAnimationNodeMorphTargetHandler.hpp"
#include "GlobalNamespace/zzzz__OVRMeshAttributes_impl.hpp"
#include "GlobalNamespace/zzzz__OVRMeshData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRGLTFAnimationNodeMorphTargetHandler_def.hpp"
#include "GlobalNamespace/zzzz__OVRMeshData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::*)(::GlobalNamespace::OVRMeshData)>(
    &::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c3c2cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMeshData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::*)()>(
    &::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::Update)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5c3c378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>::get(), "Update",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler.MarkModified
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::*)()>(
    &::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::MarkModified)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c3c5fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>::get(), "MarkModified",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRMeshData& GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::__cordl_internal_get__meshData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshData;
}
constexpr ::GlobalNamespace::OVRMeshData const& GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::__cordl_internal_get__meshData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshData;
}
constexpr void GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::__cordl_internal_set__meshData(::GlobalNamespace::OVRMeshData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____meshData = value;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*>& GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::__cordl_internal_get_Weights() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Weights;
}
constexpr ::ArrayW<float_t, ::Array<float_t>*> const& GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::__cordl_internal_get_Weights() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___Weights;
}
constexpr void GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::__cordl_internal_set_Weights(::ArrayW<float_t, ::Array<float_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___Weights)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::__cordl_internal_get__modified() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modified;
}
constexpr bool const& GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::__cordl_internal_get__modified() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____modified;
}
constexpr void GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::__cordl_internal_set__modified(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____modified = value;
}
constexpr ::GlobalNamespace::OVRMeshAttributes& GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::__cordl_internal_get__meshModifiableData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshModifiableData;
}
constexpr ::GlobalNamespace::OVRMeshAttributes const& GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::__cordl_internal_get__meshModifiableData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____meshModifiableData;
}
constexpr void GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::__cordl_internal_set__meshModifiableData(::GlobalNamespace::OVRMeshAttributes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____meshModifiableData = value;
}
inline void GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::_ctor(::GlobalNamespace::OVRMeshData meshData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRMeshData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, meshData);
}
inline void GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>::get(),
                                                                             "Update", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::MarkModified() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>::get(),
                                                                             "MarkModified", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler* GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::New_ctor(::GlobalNamespace::OVRMeshData meshData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler*>(meshData));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRGLTFAnimationNodeMorphTargetHandler::OVRGLTFAnimationNodeMorphTargetHandler() {}
