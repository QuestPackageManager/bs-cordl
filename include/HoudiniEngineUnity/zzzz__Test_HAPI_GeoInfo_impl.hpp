#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_GeoInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__Test_HAPI_GeoInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_GeoInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_GeoInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::Test_HAPI_GeoInfo::*)(::HoudiniEngineUnity::HAPI_GeoInfo)>(
    &::HoudiniEngineUnity::Test_HAPI_GeoInfo::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x21e3170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_GeoInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_GeoInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_GeoInfo.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_HAPI_GeoInfo::*)(::HoudiniEngineUnity::Test_HAPI_GeoInfo*)>(
    &::HoudiniEngineUnity::Test_HAPI_GeoInfo::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x21e31a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_GeoInfo*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_HAPI_GeoInfo*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_GeoInfo*>"
constexpr HoudiniEngineUnity::Test_HAPI_GeoInfo::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_GeoInfo*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_GeoInfo*>*>(static_cast<void*>(this));
}
constexpr ::HoudiniEngineUnity::HAPI_GeoInfo& HoudiniEngineUnity::Test_HAPI_GeoInfo::__get_self() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___self;
}
constexpr ::HoudiniEngineUnity::HAPI_GeoInfo const& HoudiniEngineUnity::Test_HAPI_GeoInfo::__get_self() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___self;
}
constexpr void HoudiniEngineUnity::Test_HAPI_GeoInfo::__set_self(::HoudiniEngineUnity::HAPI_GeoInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___self = value;
}
inline ::HoudiniEngineUnity::Test_HAPI_GeoInfo* HoudiniEngineUnity::Test_HAPI_GeoInfo::New_ctor(::HoudiniEngineUnity::HAPI_GeoInfo self) {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::Test_HAPI_GeoInfo*>(self));
}
inline void HoudiniEngineUnity::Test_HAPI_GeoInfo::_ctor(::HoudiniEngineUnity::HAPI_GeoInfo self) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_GeoInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_GeoInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, self);
}
inline bool HoudiniEngineUnity::Test_HAPI_GeoInfo::IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_GeoInfo* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_GeoInfo*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_HAPI_GeoInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::Test_HAPI_GeoInfo::Test_HAPI_GeoInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
