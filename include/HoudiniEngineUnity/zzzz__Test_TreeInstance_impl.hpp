#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__TreeInstance_impl.hpp"
#include "HoudiniEngineUnity/zzzz__Test_TreeInstance_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__TreeInstance_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_TreeInstance._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::Test_TreeInstance::*)(::UnityEngine::TreeInstance)>(
    &::HoudiniEngineUnity::Test_TreeInstance::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x208f828;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_TreeInstance*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TreeInstance>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_TreeInstance.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_TreeInstance::*)(::HoudiniEngineUnity::Test_TreeInstance*)>(
    &::HoudiniEngineUnity::Test_TreeInstance::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0x208f85c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_TreeInstance*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_TreeInstance*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_TreeInstance*>"
constexpr HoudiniEngineUnity::Test_TreeInstance::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_TreeInstance*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_TreeInstance*>*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::TreeInstance& HoudiniEngineUnity::Test_TreeInstance::__get_self() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___self;
}
constexpr ::UnityEngine::TreeInstance const& HoudiniEngineUnity::Test_TreeInstance::__get_self() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___self;
}
constexpr void HoudiniEngineUnity::Test_TreeInstance::__set_self(::UnityEngine::TreeInstance value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___self = value;
}
inline ::HoudiniEngineUnity::Test_TreeInstance* HoudiniEngineUnity::Test_TreeInstance::New_ctor(::UnityEngine::TreeInstance self) {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::Test_TreeInstance*>(self));
}
inline void HoudiniEngineUnity::Test_TreeInstance::_ctor(::UnityEngine::TreeInstance self) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_TreeInstance*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TreeInstance>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, self);
}
inline bool HoudiniEngineUnity::Test_TreeInstance::IsEquivalentTo(::HoudiniEngineUnity::Test_TreeInstance* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_TreeInstance*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_TreeInstance*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::Test_TreeInstance::Test_TreeInstance() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
