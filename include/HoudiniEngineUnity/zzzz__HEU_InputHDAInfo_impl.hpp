#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_InputHDAInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputHDAInfo.CopyTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputHDAInfo::*)(::HoudiniEngineUnity::HEU_InputHDAInfo*)>(
    &::HoudiniEngineUnity::HEU_InputHDAInfo::CopyTo)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x2170b94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputHDAInfo*>::get(), "CopyTo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputHDAInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputHDAInfo.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::HEU_InputHDAInfo::*)(::HoudiniEngineUnity::HEU_InputHDAInfo*)>(
    &::HoudiniEngineUnity::HEU_InputHDAInfo::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x217226c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputHDAInfo*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputHDAInfo*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_InputHDAInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_InputHDAInfo::*)()>(&::HoudiniEngineUnity::HEU_InputHDAInfo::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2170094;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputHDAInfo*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>"
constexpr HoudiniEngineUnity::HEU_InputHDAInfo::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>"
constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*
HoudiniEngineUnity::HEU_InputHDAInfo::i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__HEU_InputHDAInfo__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::HEU_InputHDAInfo*>*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::GameObject*& HoudiniEngineUnity::HEU_InputHDAInfo::__get__pendingGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingGO;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& HoudiniEngineUnity::HEU_InputHDAInfo::__get__pendingGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pendingGO;
}
constexpr void HoudiniEngineUnity::HEU_InputHDAInfo::__set__pendingGO(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____pendingGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::GameObject*& HoudiniEngineUnity::HEU_InputHDAInfo::__get__connectedGO() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedGO;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& HoudiniEngineUnity::HEU_InputHDAInfo::__get__connectedGO() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedGO;
}
constexpr void HoudiniEngineUnity::HEU_InputHDAInfo::__set__connectedGO(::UnityEngine::GameObject* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____connectedGO)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& HoudiniEngineUnity::HEU_InputHDAInfo::__get__connectedInputNodeID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedInputNodeID;
}
constexpr int32_t const& HoudiniEngineUnity::HEU_InputHDAInfo::__get__connectedInputNodeID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedInputNodeID;
}
constexpr void HoudiniEngineUnity::HEU_InputHDAInfo::__set__connectedInputNodeID(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectedInputNodeID = value;
}
inline void HoudiniEngineUnity::HEU_InputHDAInfo::CopyTo(::HoudiniEngineUnity::HEU_InputHDAInfo* destInfo) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputHDAInfo*>::get(), "CopyTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputHDAInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, destInfo);
}
inline bool HoudiniEngineUnity::HEU_InputHDAInfo::IsEquivalentTo(::HoudiniEngineUnity::HEU_InputHDAInfo* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputHDAInfo*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_InputHDAInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::HEU_InputHDAInfo* HoudiniEngineUnity::HEU_InputHDAInfo::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_InputHDAInfo*>());
}
inline void HoudiniEngineUnity::HEU_InputHDAInfo::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_InputHDAInfo*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_InputHDAInfo::HEU_InputHDAInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
