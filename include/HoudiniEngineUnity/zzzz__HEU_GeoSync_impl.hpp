#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_GeoSync.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_BaseSync_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_GeoSync_def.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::HEU_GeoSync.SetupLoadTask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::HEU_GeoSync::*)(::HoudiniEngineUnity::HEU_SessionBase*)>(
    &::HoudiniEngineUnity::HEU_GeoSync::SetupLoadTask)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x3a65af4;

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
  constexpr static std::size_t addrs = 0x3a65ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoSync*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& HoudiniEngineUnity::HEU_GeoSync::__cordl_internal_get__filePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr ::StringW const& HoudiniEngineUnity::HEU_GeoSync::__cordl_internal_get__filePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr void HoudiniEngineUnity::HEU_GeoSync::__cordl_internal_set__filePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____filePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HoudiniEngineUnity::HEU_GeoSync::SetupLoadTask(::HoudiniEngineUnity::HEU_SessionBase* session) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoSync*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, session);
}
inline void HoudiniEngineUnity::HEU_GeoSync::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::HEU_GeoSync*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HoudiniEngineUnity::HEU_GeoSync* HoudiniEngineUnity::HEU_GeoSync::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::HEU_GeoSync*>());
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HEU_GeoSync::HEU_GeoSync() {}
