#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_AssetEventData_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_BakedEventData_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_HoudiniAsset_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_BakedEventData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_BakedEventData::*)(
    ::HoudiniEngineUnity::HEU_HoudiniAsset*, bool, ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*, bool)>(&::HoudiniEngineUnity::HEU_BakedEventData::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x214e31c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BakedEventData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr bool& HoudiniEngineUnity::HEU_BakedEventData::__get_IsNewBake() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsNewBake;
}
constexpr bool const& HoudiniEngineUnity::HEU_BakedEventData::__get_IsNewBake() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___IsNewBake;
}
constexpr void HoudiniEngineUnity::HEU_BakedEventData::__set_IsNewBake(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___IsNewBake = value;
}
inline ::HoudiniEngineUnity::HEU_BakedEventData* HoudiniEngineUnity::HEU_BakedEventData::New_ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool successful,
                                                                                                  ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputObjects, bool isNewBake) {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_BakedEventData*>(asset, successful, outputObjects, isNewBake));
}
inline void HoudiniEngineUnity::HEU_BakedEventData::_ctor(::HoudiniEngineUnity::HEU_HoudiniAsset* asset, bool successful,
                                                          ::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* outputObjects, bool isNewBake) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_BakedEventData*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HEU_HoudiniAsset*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asset, successful, outputObjects, isNewBake);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_BakedEventData::HEU_BakedEventData() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
