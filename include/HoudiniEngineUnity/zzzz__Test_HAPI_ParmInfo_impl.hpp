#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_ParmInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__Test_HAPI_ParmInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ParmInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_ParmInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::Test_HAPI_ParmInfo::*)(::HoudiniEngineUnity::HAPI_ParmInfo)>(
    &::HoudiniEngineUnity::Test_HAPI_ParmInfo::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x21e39e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_ParmInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_ParmInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_ParmInfo.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_HAPI_ParmInfo::*)(::HoudiniEngineUnity::Test_HAPI_ParmInfo*)>(
    &::HoudiniEngineUnity::Test_HAPI_ParmInfo::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x78c;
  constexpr static std::size_t addrs = 0x21e3a18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_ParmInfo*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_HAPI_ParmInfo*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ParmInfo*>"
constexpr HoudiniEngineUnity::Test_HAPI_ParmInfo::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ParmInfo*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_ParmInfo*>*>(static_cast<void*>(this));
}
constexpr ::HoudiniEngineUnity::HAPI_ParmInfo& HoudiniEngineUnity::Test_HAPI_ParmInfo::__get_self() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___self;
}
constexpr ::HoudiniEngineUnity::HAPI_ParmInfo const& HoudiniEngineUnity::Test_HAPI_ParmInfo::__get_self() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___self;
}
constexpr void HoudiniEngineUnity::Test_HAPI_ParmInfo::__set_self(::HoudiniEngineUnity::HAPI_ParmInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___self = value;
}
inline ::HoudiniEngineUnity::Test_HAPI_ParmInfo* HoudiniEngineUnity::Test_HAPI_ParmInfo::New_ctor(::HoudiniEngineUnity::HAPI_ParmInfo self) {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::Test_HAPI_ParmInfo*>(self));
}
inline void HoudiniEngineUnity::Test_HAPI_ParmInfo::_ctor(::HoudiniEngineUnity::HAPI_ParmInfo self) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_ParmInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_ParmInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, self);
}
inline bool HoudiniEngineUnity::Test_HAPI_ParmInfo::IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_ParmInfo* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_ParmInfo*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_HAPI_ParmInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::Test_HAPI_ParmInfo::Test_HAPI_ParmInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
