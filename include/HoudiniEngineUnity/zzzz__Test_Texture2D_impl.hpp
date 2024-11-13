#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/Test_Texture2D.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HoudiniEngineUnity/zzzz__Test_Texture2D_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivableWrapperClass_1_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_Texture2D._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::Test_Texture2D::*)(::UnityEngine::Texture2D*)>(
    &::HoudiniEngineUnity::Test_Texture2D::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x3a4537c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_Texture2D.IsNull
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_Texture2D::*)()>(&::HoudiniEngineUnity::Test_Texture2D::IsNull)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3a453a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_Texture2D*>::get(), "IsNull",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_Texture2D.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_Texture2D::*)(::HoudiniEngineUnity::Test_Texture2D*)>(
    &::HoudiniEngineUnity::Test_Texture2D::IsEquivalentTo)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x3a45404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_Texture2D*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_Texture2D*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Texture2D*>"
constexpr HoudiniEngineUnity::Test_Texture2D::operator ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Texture2D*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Texture2D*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Texture2D*>"
constexpr ::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Texture2D*>*
HoudiniEngineUnity::Test_Texture2D::i___HoudiniEngineUnity__IEquivableWrapperClass_1___HoudiniEngineUnity__Test_Texture2D__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivableWrapperClass_1<::HoudiniEngineUnity::Test_Texture2D*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Texture2D*>"
constexpr HoudiniEngineUnity::Test_Texture2D::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Texture2D*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Texture2D*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Texture2D*>"
constexpr ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Texture2D*>*
HoudiniEngineUnity::Test_Texture2D::i___HoudiniEngineUnity__IEquivable_1___HoudiniEngineUnity__Test_Texture2D__() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_Texture2D*>*>(static_cast<void*>(this));
}
constexpr ::UnityW<::UnityEngine::Texture2D>& HoudiniEngineUnity::Test_Texture2D::__cordl_internal_get_self() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___self;
}
constexpr ::UnityW<::UnityEngine::Texture2D> const& HoudiniEngineUnity::Test_Texture2D::__cordl_internal_get_self() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___self;
}
constexpr void HoudiniEngineUnity::Test_Texture2D::__cordl_internal_set_self(::UnityW<::UnityEngine::Texture2D> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___self)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HoudiniEngineUnity::Test_Texture2D* HoudiniEngineUnity::Test_Texture2D::New_ctor(::UnityEngine::Texture2D* self) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HoudiniEngineUnity::Test_Texture2D*>(self));
}
inline void HoudiniEngineUnity::Test_Texture2D::_ctor(::UnityEngine::Texture2D* self) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_Texture2D*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Texture2D*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, self);
}
inline bool HoudiniEngineUnity::Test_Texture2D::IsNull() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_Texture2D*>::get(), "IsNull",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HoudiniEngineUnity::Test_Texture2D::IsEquivalentTo(::HoudiniEngineUnity::Test_Texture2D* other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_Texture2D*>::get(), "IsEquivalentTo", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_Texture2D*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::Test_Texture2D::Test_Texture2D() {}
