#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeneratedOutputData_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeneratedOutputData.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_GeneratedOutputData::*)(::HoudiniEngineUnity::HEU_GeneratedOutputData*)>(
    &::HoudiniEngineUnity::HEU_GeneratedOutputData::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x1ec;
  constexpr static std::size_t addrs = 0x2157164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeneratedOutputData*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeneratedOutputData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeneratedOutputData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeneratedOutputData::*)()>(&::HoudiniEngineUnity::HEU_GeneratedOutputData::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x21570e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeneratedOutputData*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>"
constexpr HoudiniEngineUnity::HEU_GeneratedOutputData::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_GeneratedOutputData*>*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::GameObject*& HoudiniEngineUnity::HEU_GeneratedOutputData::__get__gameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameObject;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& HoudiniEngineUnity::HEU_GeneratedOutputData::__get__gameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____gameObject;
}
constexpr void HoudiniEngineUnity::HEU_GeneratedOutputData::__set__gameObject(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameObject)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*>& HoudiniEngineUnity::HEU_GeneratedOutputData::__get__renderMaterials() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____renderMaterials;
}
constexpr ::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> const& HoudiniEngineUnity::HEU_GeneratedOutputData::__get__renderMaterials() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____renderMaterials;
}
constexpr void HoudiniEngineUnity::HEU_GeneratedOutputData::__set__renderMaterials(::ArrayW<::UnityEngine::Material*, ::Array<::UnityEngine::Material*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____renderMaterials)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Collider*>*& HoudiniEngineUnity::HEU_GeneratedOutputData::__get__colliders() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colliders;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Collider*>*> const& HoudiniEngineUnity::HEU_GeneratedOutputData::__get__colliders() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____colliders;
}
constexpr void HoudiniEngineUnity::HEU_GeneratedOutputData::__set__colliders(::System::Collections::Generic::List_1<::UnityEngine::Collider*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____colliders)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool HoudiniEngineUnity::HEU_GeneratedOutputData::IsEquivalentTo(::HoudiniEngineUnity::HEU_GeneratedOutputData* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeneratedOutputData*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_GeneratedOutputData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_GeneratedOutputData* HoudiniEngineUnity::HEU_GeneratedOutputData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_GeneratedOutputData*>());
}
inline void HoudiniEngineUnity::HEU_GeneratedOutputData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeneratedOutputData*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_GeneratedOutputData::HEU_GeneratedOutputData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
