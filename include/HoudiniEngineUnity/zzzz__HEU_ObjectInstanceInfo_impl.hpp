#pragma once
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_ObjectInstanceInfo_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InstancedInput_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_PartData_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ObjectInstanceInfo.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_ObjectInstanceInfo::*)(::HoudiniEngineUnity::HEU_ObjectInstanceInfo*)>(
    &::HoudiniEngineUnity::HEU_ObjectInstanceInfo::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x217268c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_ObjectInstanceInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_ObjectInstanceInfo::*)()>(&::HoudiniEngineUnity::HEU_ObjectInstanceInfo::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x21727d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>"
constexpr HoudiniEngineUnity::HEU_ObjectInstanceInfo::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InstancedInput*>*& HoudiniEngineUnity::HEU_ObjectInstanceInfo::__get__instancedInputs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instancedInputs;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InstancedInput*>*> const&
HoudiniEngineUnity::HEU_ObjectInstanceInfo::__get__instancedInputs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instancedInputs;
}
constexpr void HoudiniEngineUnity::HEU_ObjectInstanceInfo::__set__instancedInputs(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_InstancedInput*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instancedInputs)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HoudiniEngineUnity::HEU_PartData*& HoudiniEngineUnity::HEU_ObjectInstanceInfo::__get__partTarget() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partTarget;
}
constexpr ::cordl_internals::to_const_pointer<::HoudiniEngineUnity::HEU_PartData*> const& HoudiniEngineUnity::HEU_ObjectInstanceInfo::__get__partTarget() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partTarget;
}
constexpr void HoudiniEngineUnity::HEU_ObjectInstanceInfo::__set__partTarget(::HoudiniEngineUnity::HEU_PartData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____partTarget)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_ObjectInstanceInfo::__get__instancedObjectNodeID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instancedObjectNodeID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_ObjectInstanceInfo::__get__instancedObjectNodeID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instancedObjectNodeID;
}
constexpr void HoudiniEngineUnity::HEU_ObjectInstanceInfo::__set__instancedObjectNodeID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____instancedObjectNodeID = value;
}
constexpr ::StringW& HoudiniEngineUnity::HEU_ObjectInstanceInfo::__get__instancedObjectPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instancedObjectPath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_ObjectInstanceInfo::__get__instancedObjectPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instancedObjectPath;
}
constexpr void HoudiniEngineUnity::HEU_ObjectInstanceInfo::__set__instancedObjectPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instancedObjectPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*& HoudiniEngineUnity::HEU_ObjectInstanceInfo::__get__instances() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instances;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*> const& HoudiniEngineUnity::HEU_ObjectInstanceInfo::__get__instances() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____instances;
}
constexpr void HoudiniEngineUnity::HEU_ObjectInstanceInfo::__set__instances(::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____instances)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool HoudiniEngineUnity::HEU_ObjectInstanceInfo::IsEquivalentTo(::HoudiniEngineUnity::HEU_ObjectInstanceInfo* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_ObjectInstanceInfo* HoudiniEngineUnity::HEU_ObjectInstanceInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>());
}
inline void HoudiniEngineUnity::HEU_ObjectInstanceInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_ObjectInstanceInfo*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_ObjectInstanceInfo::HEU_ObjectInstanceInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
