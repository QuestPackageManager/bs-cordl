#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/Test_HAPI_AttributeInfo.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_impl.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__Test_HAPI_AttributeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_AttributeInfo_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_AttributeInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::Test_HAPI_AttributeInfo::*)(::HoudiniEngineUnity::HAPI_AttributeInfo)>(
    &::HoudiniEngineUnity::Test_HAPI_AttributeInfo::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3a99e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_AttributeInfo>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_HAPI_AttributeInfo.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_HAPI_AttributeInfo::*)(::HoudiniEngineUnity::Test_HAPI_AttributeInfo*)>(
    &::HoudiniEngineUnity::Test_HAPI_AttributeInfo::IsEquivalentTo)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x3a99e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>::get() })));
    return ___internal_method;
  }
};
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo& HoudiniEngineUnity::Test_HAPI_AttributeInfo::__cordl_internal_get_self() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___self;
}
constexpr ::HoudiniEngineUnity::HAPI_AttributeInfo const& HoudiniEngineUnity::Test_HAPI_AttributeInfo::__cordl_internal_get_self() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___self;
}
constexpr void HoudiniEngineUnity::Test_HAPI_AttributeInfo::__cordl_internal_set_self(::HoudiniEngineUnity::HAPI_AttributeInfo value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___self = value;
}
inline void HoudiniEngineUnity::Test_HAPI_AttributeInfo::_ctor(::HoudiniEngineUnity::HAPI_AttributeInfo self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::HAPI_AttributeInfo>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, self);
}
inline bool HoudiniEngineUnity::Test_HAPI_AttributeInfo::IsEquivalentTo(::HoudiniEngineUnity::Test_HAPI_AttributeInfo* other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::Test_HAPI_AttributeInfo* HoudiniEngineUnity::Test_HAPI_AttributeInfo::New_ctor(::HoudiniEngineUnity::HAPI_AttributeInfo self) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>(self));
}
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>"
constexpr HoudiniEngineUnity::Test_HAPI_AttributeInfo::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>"
constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>*
HoudiniEngineUnity::Test_HAPI_AttributeInfo::i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__Test_HAPI_AttributeInfo__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_HAPI_AttributeInfo*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::Test_HAPI_AttributeInfo::Test_HAPI_AttributeInfo() {}
