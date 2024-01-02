#pragma once
#include "HoudiniEngineUnity/zzzz__HEU_BaseSync_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeoSync_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoSync.SetupLoadTask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoSync::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_GeoSync::SetupLoadTask)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x21a9f68;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoSync*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoSync*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoSync._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoSync::*)()>(&::HoudiniEngineUnity::HEU_GeoSync::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x21aa014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoSync*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::StringW& HoudiniEngineUnity::HEU_GeoSync::__get__filePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_GeoSync::__get__filePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr void HoudiniEngineUnity::HEU_GeoSync::__set__filePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____filePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HoudiniEngineUnity::HEU_GeoSync::SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase* session) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoSync*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline ::HoudiniEngineUnity::HEU_GeoSync* HoudiniEngineUnity::HEU_GeoSync::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::HEU_GeoSync*>());
}
inline void HoudiniEngineUnity::HEU_GeoSync::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoSync*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_GeoSync::HEU_GeoSync() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
