#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_AssetInfo_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__Test_HAPI_AssetInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AssetInfo_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_AssetInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::Test_HAPI_AssetInfo::*)(::HoudiniEngineUnity::HAPI_AssetInfo)>(
    &::HoudiniEngineUnity::Test_HAPI_AssetInfo::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x21e24c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_AssetInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_AssetInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_AssetInfo.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_HAPI_AssetInfo::*)(::HoudiniEngineUnity::Test_HAPI_AssetInfo*)>(
    &::HoudiniEngineUnity::Test_HAPI_AssetInfo::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x21e24f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_AssetInfo*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_HAPI_AssetInfo*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AssetInfo*>"
constexpr HoudiniEngineUnity::Test_HAPI_AssetInfo::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AssetInfo*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AssetInfo*>*>(static_cast<void*>(this));
}
constexpr ::HoudiniEngineUnity::HAPI_AssetInfo& HoudiniEngineUnity::Test_HAPI_AssetInfo::__get_self() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___self;
}
constexpr ::HoudiniEngineUnity::HAPI_AssetInfo const& HoudiniEngineUnity::Test_HAPI_AssetInfo::__get_self() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___self;
}
constexpr void HoudiniEngineUnity::Test_HAPI_AssetInfo::__set_self(::HoudiniEngineUnity::HAPI_AssetInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___self = value;
}
inline ::HoudiniEngineUnity::Test_HAPI_AssetInfo* HoudiniEngineUnity::Test_HAPI_AssetInfo::New_ctor(::HoudiniEngineUnity::HAPI_AssetInfo self) {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::Test_HAPI_AssetInfo*>(self));
}
inline void HoudiniEngineUnity::Test_HAPI_AssetInfo::_ctor(::HoudiniEngineUnity::HAPI_AssetInfo self) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_AssetInfo*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_AssetInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, self);
}
inline bool HoudiniEngineUnity::Test_HAPI_AssetInfo::IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_AssetInfo* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_AssetInfo*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_HAPI_AssetInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::Test_HAPI_AssetInfo::Test_HAPI_AssetInfo() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
