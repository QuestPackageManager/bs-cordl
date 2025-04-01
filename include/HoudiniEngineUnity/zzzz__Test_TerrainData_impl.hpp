#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/Test_TerrainData.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivableWrapperClass_1_impl.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__Test_TerrainData_def.hpp"
#include "UnityEngine/zzzz__TerrainData_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_TerrainData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::Test_TerrainData::*)(::UnityEngine::TerrainData*)>(
    &::HoudiniEngineUnity::Test_TerrainData::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3a97310;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_TerrainData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_TerrainData.IsNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_TerrainData::*)()>(&::HoudiniEngineUnity::Test_TerrainData::IsNull)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3a97338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_TerrainData*>::get(), "IsNull",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_TerrainData.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_TerrainData::*)(::HoudiniEngineUnity::Test_TerrainData*)>(
    &::HoudiniEngineUnity::Test_TerrainData::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x3a97398;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_TerrainData*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_TerrainData*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::TerrainData>& HoudiniEngineUnity::Test_TerrainData::__cordl_internal_get_self() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___self;
}
constexpr ::UnityW<::UnityEngine::TerrainData> const& HoudiniEngineUnity::Test_TerrainData::__cordl_internal_get_self() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___self;
}
constexpr void HoudiniEngineUnity::Test_TerrainData::__cordl_internal_set_self(::UnityW<::UnityEngine::TerrainData> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___self)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HoudiniEngineUnity::Test_TerrainData::_ctor(::UnityEngine::TerrainData* self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_TerrainData*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::TerrainData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, self);
}
inline bool HoudiniEngineUnity::Test_TerrainData::IsNull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_TerrainData*>::get(), "IsNull",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::Test_TerrainData::IsEquivalentTo(::HoudiniEngineUnity::Test_TerrainData* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_TerrainData*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_TerrainData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::Test_TerrainData* HoudiniEngineUnity::Test_TerrainData::New_ctor(::UnityEngine::TerrainData* self) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::Test_TerrainData*>(self));
}
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_TerrainData*>"
constexpr HoudiniEngineUnity::Test_TerrainData::operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_TerrainData*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_TerrainData*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_TerrainData*>"
constexpr ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_TerrainData*>*
HoudiniEngineUnity::Test_TerrainData::i___HoudiniEngineUnity__IEquivableWrapperClass_1___HoudiniEngineUnity__Test_TerrainData__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_TerrainData*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_TerrainData*>"
constexpr HoudiniEngineUnity::Test_TerrainData::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_TerrainData*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_TerrainData*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_TerrainData*>"
constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_TerrainData*>*
HoudiniEngineUnity::Test_TerrainData::i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__Test_TerrainData__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_TerrainData*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::Test_TerrainData::Test_TerrainData() {}
