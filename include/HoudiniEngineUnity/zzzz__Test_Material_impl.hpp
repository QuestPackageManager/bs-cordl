#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__Test_Material_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivableWrapperClass_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_Material._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::Test_Material::*)(::UnityEngine::Material*)>(
    &::HoudiniEngineUnity::Test_Material::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x227a6cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_Material*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_Material.IsNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_Material::*)()>(&::HoudiniEngineUnity::Test_Material::IsNull)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x227a6f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_Material*>::get(), "IsNull",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_Material.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_Material::*)(::HoudiniEngineUnity::Test_Material*)>(
    &::HoudiniEngineUnity::Test_Material::IsEquivalentTo)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x227a754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_Material*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_Material*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Material*>"
constexpr HoudiniEngineUnity::Test_Material::operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Material*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Material*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Material*>"
constexpr ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Material*>*
HoudiniEngineUnity::Test_Material::i___HoudiniEngineUnity__IEquivableWrapperClass_1___HoudiniEngineUnity__Test_Material__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Material*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Material*>"
constexpr HoudiniEngineUnity::Test_Material::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Material*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Material*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Material*>"
constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Material*>*
HoudiniEngineUnity::Test_Material::i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__Test_Material__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Material*>*>(static_cast<void*>(this));
}
constexpr ::UnityW<::UnityEngine::Material>& HoudiniEngineUnity::Test_Material::__cordl_internal_get_self() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___self;
}
constexpr ::UnityW<::UnityEngine::Material> const& HoudiniEngineUnity::Test_Material::__cordl_internal_get_self() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___self;
}
constexpr void HoudiniEngineUnity::Test_Material::__cordl_internal_set_self(::UnityW<::UnityEngine::Material> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___self)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::Test_Material* HoudiniEngineUnity::Test_Material::New_ctor(::UnityEngine::Material* self) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::Test_Material*>(self));
}
inline void HoudiniEngineUnity::Test_Material::_ctor(::UnityEngine::Material* self) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_Material*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, self);
}
inline bool HoudiniEngineUnity::Test_Material::IsNull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_Material*>::get(), "IsNull",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::Test_Material::IsEquivalentTo(::HoudiniEngineUnity::Test_Material* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_Material*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_Material*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::Test_Material::Test_Material() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
