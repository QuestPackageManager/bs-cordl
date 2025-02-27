#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_GeneratedOutputData.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeneratedOutputData_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeneratedOutputData.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_GeneratedOutputData::*)(::HoudiniEngineUnity::HEU_GeneratedOutputData*)>(
    &::HoudiniEngineUnity::HEU_GeneratedOutputData::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x3a1cd44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeneratedOutputData*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeneratedOutputData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeneratedOutputData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeneratedOutputData::*)()>(&::HoudiniEngineUnity::HEU_GeneratedOutputData::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3a1ccc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeneratedOutputData*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& HoudiniEngineUnity::HEU_GeneratedOutputData::__cordl_internal_get__gameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& HoudiniEngineUnity::HEU_GeneratedOutputData::__cordl_internal_get__gameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameObject;
}
constexpr void HoudiniEngineUnity::HEU_GeneratedOutputData::__cordl_internal_set__gameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*>& HoudiniEngineUnity::HEU_GeneratedOutputData::__cordl_internal_get__renderMaterials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderMaterials;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> const& HoudiniEngineUnity::HEU_GeneratedOutputData::__cordl_internal_get__renderMaterials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____renderMaterials;
}
constexpr void HoudiniEngineUnity::HEU_GeneratedOutputData::__cordl_internal_set__renderMaterials(::ArrayW<::UnityW<::UnityEngine::Material>, ::Array<::UnityW<::UnityEngine::Material>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderMaterials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& HoudiniEngineUnity::HEU_GeneratedOutputData::__cordl_internal_get__colliders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colliders;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& HoudiniEngineUnity::HEU_GeneratedOutputData::__cordl_internal_get__colliders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colliders;
}
constexpr void HoudiniEngineUnity::HEU_GeneratedOutputData::__cordl_internal_set__colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colliders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool HoudiniEngineUnity::HEU_GeneratedOutputData::IsEquivalentTo(::HoudiniEngineUnity::HEU_GeneratedOutputData* other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeneratedOutputData*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeneratedOutputData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline void HoudiniEngineUnity::HEU_GeneratedOutputData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeneratedOutputData*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_GeneratedOutputData* HoudiniEngineUnity::HEU_GeneratedOutputData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_GeneratedOutputData*>());
}
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>"
constexpr HoudiniEngineUnity::HEU_GeneratedOutputData::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>"
constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>*
HoudiniEngineUnity::HEU_GeneratedOutputData::i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__HEU_GeneratedOutputData__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_GeneratedOutputData::HEU_GeneratedOutputData() {}
