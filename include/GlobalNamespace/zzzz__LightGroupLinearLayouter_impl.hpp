#pragma once
#include "GlobalNamespace/zzzz__LightGroupSubsystem_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__LightGroupLinearLayouter_def.hpp"
#include "GlobalNamespace/zzzz__IEditTimeValidated_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightGroupLinearLayouter._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LightGroupLinearLayouter::*)()>(&::GlobalNamespace::LightGroupLinearLayouter::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x243799c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightGroupLinearLayouter*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IEditTimeValidated"
constexpr GlobalNamespace::LightGroupLinearLayouter::operator ::GlobalNamespace::IEditTimeValidated*() noexcept {
  return static_cast<::GlobalNamespace::IEditTimeValidated*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IEditTimeValidated"
constexpr ::GlobalNamespace::IEditTimeValidated* GlobalNamespace::LightGroupLinearLayouter::i___GlobalNamespace__IEditTimeValidated() noexcept {
  return static_cast<::GlobalNamespace::IEditTimeValidated*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LightGroupLinearLayouter::__cordl_internal_get__movementStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementStep;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LightGroupLinearLayouter::__cordl_internal_get__movementStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementStep;
}
constexpr void GlobalNamespace::LightGroupLinearLayouter::__cordl_internal_set__movementStep(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____movementStep = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::LightGroupLinearLayouter::__cordl_internal_get__defaultRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultRotation;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::LightGroupLinearLayouter::__cordl_internal_get__defaultRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultRotation;
}
constexpr void GlobalNamespace::LightGroupLinearLayouter::__cordl_internal_set__defaultRotation(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultRotation = value;
}
constexpr bool& GlobalNamespace::LightGroupLinearLayouter::__cordl_internal_get__startFromCenter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startFromCenter;
}
constexpr bool const& GlobalNamespace::LightGroupLinearLayouter::__cordl_internal_get__startFromCenter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startFromCenter;
}
constexpr void GlobalNamespace::LightGroupLinearLayouter::__cordl_internal_set__startFromCenter(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startFromCenter = value;
}
inline ::GlobalNamespace::LightGroupLinearLayouter* GlobalNamespace::LightGroupLinearLayouter::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LightGroupLinearLayouter*>());
}
inline void GlobalNamespace::LightGroupLinearLayouter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LightGroupLinearLayouter*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightGroupLinearLayouter::LightGroupLinearLayouter() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
