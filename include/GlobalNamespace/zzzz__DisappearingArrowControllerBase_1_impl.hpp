#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__DisappearingArrowControllerBase_1_def.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockController_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "GlobalNamespace/zzzz__CutoutEffect_def.hpp"
template <typename T>
constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*>&
GlobalNamespace::DisappearingArrowControllerBase_1<T>::__get__transparentObjectMaterialPropertyBlocks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transparentObjectMaterialPropertyBlocks;
}
template <typename T>
constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> const&
GlobalNamespace::DisappearingArrowControllerBase_1<T>::__get__transparentObjectMaterialPropertyBlocks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____transparentObjectMaterialPropertyBlocks;
}
template <typename T>
constexpr void GlobalNamespace::DisappearingArrowControllerBase_1<T>::__set__transparentObjectMaterialPropertyBlocks(
    ::ArrayW<::GlobalNamespace::MaterialPropertyBlockController*, ::Array<::GlobalNamespace::MaterialPropertyBlockController*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____transparentObjectMaterialPropertyBlocks)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::UnityEngine::MeshRenderer*& GlobalNamespace::DisappearingArrowControllerBase_1<T>::__get__cubeMeshRenderer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cubeMeshRenderer;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::UnityEngine::MeshRenderer*> const& GlobalNamespace::DisappearingArrowControllerBase_1<T>::__get__cubeMeshRenderer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cubeMeshRenderer;
}
template <typename T> constexpr void GlobalNamespace::DisappearingArrowControllerBase_1<T>::__set__cubeMeshRenderer(::UnityEngine::MeshRenderer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____cubeMeshRenderer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr ::GlobalNamespace::CutoutEffect*& GlobalNamespace::DisappearingArrowControllerBase_1<T>::__get__arrowCutoutEffect() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrowCutoutEffect;
}
template <typename T> constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::CutoutEffect*> const& GlobalNamespace::DisappearingArrowControllerBase_1<T>::__get__arrowCutoutEffect() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____arrowCutoutEffect;
}
template <typename T> constexpr void GlobalNamespace::DisappearingArrowControllerBase_1<T>::__set__arrowCutoutEffect(::GlobalNamespace::CutoutEffect* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____arrowCutoutEffect)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
template <typename T> constexpr float_t& GlobalNamespace::DisappearingArrowControllerBase_1<T>::__get__disappearingNormalStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearingNormalStart;
}
template <typename T> constexpr float_t const& GlobalNamespace::DisappearingArrowControllerBase_1<T>::__get__disappearingNormalStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearingNormalStart;
}
template <typename T> constexpr void GlobalNamespace::DisappearingArrowControllerBase_1<T>::__set__disappearingNormalStart(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearingNormalStart = value;
}
template <typename T> constexpr float_t& GlobalNamespace::DisappearingArrowControllerBase_1<T>::__get__disappearingNormalEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearingNormalEnd;
}
template <typename T> constexpr float_t const& GlobalNamespace::DisappearingArrowControllerBase_1<T>::__get__disappearingNormalEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearingNormalEnd;
}
template <typename T> constexpr void GlobalNamespace::DisappearingArrowControllerBase_1<T>::__set__disappearingNormalEnd(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearingNormalEnd = value;
}
template <typename T> constexpr float_t& GlobalNamespace::DisappearingArrowControllerBase_1<T>::__get__disappearingGhostStart() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearingGhostStart;
}
template <typename T> constexpr float_t const& GlobalNamespace::DisappearingArrowControllerBase_1<T>::__get__disappearingGhostStart() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearingGhostStart;
}
template <typename T> constexpr void GlobalNamespace::DisappearingArrowControllerBase_1<T>::__set__disappearingGhostStart(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearingGhostStart = value;
}
template <typename T> constexpr float_t& GlobalNamespace::DisappearingArrowControllerBase_1<T>::__get__disappearingGhostEnd() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearingGhostEnd;
}
template <typename T> constexpr float_t const& GlobalNamespace::DisappearingArrowControllerBase_1<T>::__get__disappearingGhostEnd() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____disappearingGhostEnd;
}
template <typename T> constexpr void GlobalNamespace::DisappearingArrowControllerBase_1<T>::__set__disappearingGhostEnd(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____disappearingGhostEnd = value;
}
template <typename T> constexpr float_t& GlobalNamespace::DisappearingArrowControllerBase_1<T>::__get__prevArrowTransparency() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevArrowTransparency;
}
template <typename T> constexpr float_t const& GlobalNamespace::DisappearingArrowControllerBase_1<T>::__get__prevArrowTransparency() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevArrowTransparency;
}
template <typename T> constexpr void GlobalNamespace::DisappearingArrowControllerBase_1<T>::__set__prevArrowTransparency(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevArrowTransparency = value;
}
template <typename T> constexpr float_t& GlobalNamespace::DisappearingArrowControllerBase_1<T>::__get__minDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minDistance;
}
template <typename T> constexpr float_t const& GlobalNamespace::DisappearingArrowControllerBase_1<T>::__get__minDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minDistance;
}
template <typename T> constexpr void GlobalNamespace::DisappearingArrowControllerBase_1<T>::__set__minDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minDistance = value;
}
template <typename T> constexpr float_t& GlobalNamespace::DisappearingArrowControllerBase_1<T>::__get__maxDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxDistance;
}
template <typename T> constexpr float_t const& GlobalNamespace::DisappearingArrowControllerBase_1<T>::__get__maxDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxDistance;
}
template <typename T> constexpr void GlobalNamespace::DisappearingArrowControllerBase_1<T>::__set__maxDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxDistance = value;
}
template <typename T> constexpr bool& GlobalNamespace::DisappearingArrowControllerBase_1<T>::__get__hideMesh() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideMesh;
}
template <typename T> constexpr bool const& GlobalNamespace::DisappearingArrowControllerBase_1<T>::__get__hideMesh() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideMesh;
}
template <typename T> constexpr void GlobalNamespace::DisappearingArrowControllerBase_1<T>::__set__hideMesh(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hideMesh = value;
}
template <typename T> constexpr bool& GlobalNamespace::DisappearingArrowControllerBase_1<T>::__get__fadeArrow() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeArrow;
}
template <typename T> constexpr bool const& GlobalNamespace::DisappearingArrowControllerBase_1<T>::__get__fadeArrow() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fadeArrow;
}
template <typename T> constexpr void GlobalNamespace::DisappearingArrowControllerBase_1<T>::__set__fadeArrow(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fadeArrow = value;
}
template <typename T> inline void GlobalNamespace::DisappearingArrowControllerBase_1<T>::setStaticF__colorId(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "_colorId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisappearingArrowControllerBase_1<T>*>::get>(
      std::forward<int32_t>(value));
}
template <typename T> inline int32_t GlobalNamespace::DisappearingArrowControllerBase_1<T>::getStaticF__colorId() {
  return ::cordl_internals::getStaticField<int32_t, "_colorId", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisappearingArrowControllerBase_1<T>*>::get>();
}
template <typename T> inline T GlobalNamespace::DisappearingArrowControllerBase_1<T>::get_gameNoteController() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisappearingArrowControllerBase_1<T>*>::get(),
                                                                             "get_gameNoteController", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::DisappearingArrowControllerBase_1<T>::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisappearingArrowControllerBase_1<T>*>::get(),
                                                                             "Awake", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::DisappearingArrowControllerBase_1<T>::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisappearingArrowControllerBase_1<T>*>::get(),
                                                                             "OnDestroy", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::DisappearingArrowControllerBase_1<T>::CalculateMinMaxDistance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisappearingArrowControllerBase_1<T>*>::get(),
                                                                             "CalculateMinMaxDistance", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::DisappearingArrowControllerBase_1<T>::HandleNoteMovementNoteDidMoveInJumpPhase() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisappearingArrowControllerBase_1<T>*>::get(),
                                                                             "HandleNoteMovementNoteDidMoveInJumpPhase", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::DisappearingArrowControllerBase_1<T>::HandleCubeNoteControllerDidInit(T gameNoteController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisappearingArrowControllerBase_1<T>*>::get(), "HandleCubeNoteControllerDidInit",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, gameNoteController);
}
template <typename T> inline void GlobalNamespace::DisappearingArrowControllerBase_1<T>::SetArrowTransparency(float_t arrowTransparency) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisappearingArrowControllerBase_1<T>*>::get(), "SetArrowTransparency",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, arrowTransparency);
}
template <typename T> inline ::GlobalNamespace::DisappearingArrowControllerBase_1<T>* GlobalNamespace::DisappearingArrowControllerBase_1<T>::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::DisappearingArrowControllerBase_1<T>*>());
}
template <typename T> inline void GlobalNamespace::DisappearingArrowControllerBase_1<T>::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DisappearingArrowControllerBase_1<T>*>::get(),
                                                                             ".ctor", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::DisappearingArrowControllerBase_1<T>::DisappearingArrowControllerBase_1() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
