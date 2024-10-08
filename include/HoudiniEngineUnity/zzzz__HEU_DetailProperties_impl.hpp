#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_DetailProperties.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_DetailProperties_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_DetailProperties.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_DetailProperties::*)(::HoudiniEngineUnity::HEU_DetailProperties*)>(
    &::HoudiniEngineUnity::HEU_DetailProperties::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x3a34260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_DetailProperties*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_DetailProperties*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_DetailProperties._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_DetailProperties::*)()>(&::HoudiniEngineUnity::HEU_DetailProperties::_ctor)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x3a34450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_DetailProperties*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailProperties*>"
constexpr HoudiniEngineUnity::HEU_DetailProperties::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailProperties*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailProperties*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailProperties*>"
constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailProperties*>*
HoudiniEngineUnity::HEU_DetailProperties::i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__HEU_DetailProperties__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_DetailProperties*>*>(static_cast<void*>(this));
}
constexpr float_t& HoudiniEngineUnity::HEU_DetailProperties::__cordl_internal_get__detailDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailDistance;
}
constexpr float_t const& HoudiniEngineUnity::HEU_DetailProperties::__cordl_internal_get__detailDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailDistance;
}
constexpr void HoudiniEngineUnity::HEU_DetailProperties::__cordl_internal_set__detailDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____detailDistance = value;
}
constexpr float_t& HoudiniEngineUnity::HEU_DetailProperties::__cordl_internal_get__detailDensity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailDensity;
}
constexpr float_t const& HoudiniEngineUnity::HEU_DetailProperties::__cordl_internal_get__detailDensity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailDensity;
}
constexpr void HoudiniEngineUnity::HEU_DetailProperties::__cordl_internal_set__detailDensity(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____detailDensity = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_DetailProperties::__cordl_internal_get__detailResolution() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailResolution;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_DetailProperties::__cordl_internal_get__detailResolution() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailResolution;
}
constexpr void HoudiniEngineUnity::HEU_DetailProperties::__cordl_internal_set__detailResolution(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____detailResolution = value;
}
constexpr int32_t& HoudiniEngineUnity::HEU_DetailProperties::__cordl_internal_get__detailResolutionPerPatch() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailResolutionPerPatch;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_DetailProperties::__cordl_internal_get__detailResolutionPerPatch() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____detailResolutionPerPatch;
}
constexpr void HoudiniEngineUnity::HEU_DetailProperties::__cordl_internal_set__detailResolutionPerPatch(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____detailResolutionPerPatch = value;
}
inline bool HoudiniEngineUnity::HEU_DetailProperties::IsEquivalentTo(::HoudiniEngineUnity::HEU_DetailProperties* other) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_DetailProperties*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_DetailProperties*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_DetailProperties* HoudiniEngineUnity::HEU_DetailProperties::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_DetailProperties*>());
}
inline void HoudiniEngineUnity::HEU_DetailProperties::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_DetailProperties*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_DetailProperties::HEU_DetailProperties() {}
