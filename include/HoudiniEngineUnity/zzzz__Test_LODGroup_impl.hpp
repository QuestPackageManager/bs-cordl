#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/Test_LODGroup.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivableWrapperClass_1_impl.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__Test_LODGroup_def.hpp"
#include "UnityEngine/zzzz__LODGroup_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_LODGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::Test_LODGroup::*)(::UnityEngine::LODGroup*)>(
    &::HoudiniEngineUnity::Test_LODGroup::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3a92f20;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_LODGroup*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LODGroup*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_LODGroup.IsNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_LODGroup::*)()>(&::HoudiniEngineUnity::Test_LODGroup::IsNull)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3a92f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_LODGroup*>::get(), "IsNull",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_LODGroup.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_LODGroup::*)(::HoudiniEngineUnity::Test_LODGroup*)>(
    &::HoudiniEngineUnity::Test_LODGroup::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x3a92fa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_LODGroup*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_LODGroup*>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::LODGroup>& HoudiniEngineUnity::Test_LODGroup::__cordl_internal_get_self() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___self;
}
constexpr ::UnityW<::UnityEngine::LODGroup> const& HoudiniEngineUnity::Test_LODGroup::__cordl_internal_get_self() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___self;
}
constexpr void HoudiniEngineUnity::Test_LODGroup::__cordl_internal_set_self(::UnityW<::UnityEngine::LODGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___self)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HoudiniEngineUnity::Test_LODGroup::_ctor(::UnityEngine::LODGroup* self) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_LODGroup*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LODGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, self);
}
inline bool HoudiniEngineUnity::Test_LODGroup::IsNull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_LODGroup*>::get(), "IsNull",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::Test_LODGroup::IsEquivalentTo(::HoudiniEngineUnity::Test_LODGroup* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_LODGroup*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_LODGroup*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline ::HoudiniEngineUnity::Test_LODGroup* HoudiniEngineUnity::Test_LODGroup::New_ctor(::UnityEngine::LODGroup* self) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::Test_LODGroup*>(self));
}
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_LODGroup*>"
constexpr HoudiniEngineUnity::Test_LODGroup::operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_LODGroup*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_LODGroup*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_LODGroup*>"
constexpr ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_LODGroup*>*
HoudiniEngineUnity::Test_LODGroup::i___HoudiniEngineUnity__IEquivableWrapperClass_1___HoudiniEngineUnity__Test_LODGroup__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_LODGroup*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_LODGroup*>"
constexpr HoudiniEngineUnity::Test_LODGroup::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_LODGroup*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_LODGroup*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_LODGroup*>"
constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_LODGroup*>*
HoudiniEngineUnity::Test_LODGroup::i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__Test_LODGroup__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_LODGroup*>*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::Test_LODGroup::Test_LODGroup() {}
