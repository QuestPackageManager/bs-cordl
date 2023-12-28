#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "HoudiniEngineUnity/zzzz__Test_LayerMask_def.hpp"
#include "HoudiniEngineUnity/zzzz__IEquivable_1_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
//  Writing Method size for method: ::HoudiniEngineUnity::Test_LayerMask._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HoudiniEngineUnity::Test_LayerMask::*)(::UnityEngine::LayerMask)>(
    &::HoudiniEngineUnity::Test_LayerMask::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x21e6950;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_LayerMask*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HoudiniEngineUnity::Test_LayerMask.IsEquivalentTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HoudiniEngineUnity::Test_LayerMask::*)(::HoudiniEngineUnity::Test_LayerMask*)>(
    &::HoudiniEngineUnity::Test_LayerMask::IsEquivalentTo)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x21e6978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_LayerMask*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_LayerMask*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_LayerMask*>"
constexpr HoudiniEngineUnity::Test_LayerMask::operator ::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_LayerMask*>*() noexcept {
  return static_cast<::HoudiniEngineUnity::IEquivable_1<::HoudiniEngineUnity::Test_LayerMask*>*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::LayerMask& HoudiniEngineUnity::Test_LayerMask::__get_self() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___self;
}
constexpr ::UnityEngine::LayerMask const& HoudiniEngineUnity::Test_LayerMask::__get_self() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___self;
}
constexpr void HoudiniEngineUnity::Test_LayerMask::__set_self(::UnityEngine::LayerMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___self = value;
}
inline ::HoudiniEngineUnity::Test_LayerMask* HoudiniEngineUnity::Test_LayerMask::New_ctor(::UnityEngine::LayerMask self) {
  return THROW_UNLESS(::il2cpp_utils::New<::HoudiniEngineUnity::Test_LayerMask*>(self));
}
inline void HoudiniEngineUnity::Test_LayerMask::_ctor(::UnityEngine::LayerMask self) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_LayerMask*>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::LayerMask>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, self);
}
inline bool HoudiniEngineUnity::Test_LayerMask::IsEquivalentTo(::HoudiniEngineUnity::Test_LayerMask* other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HoudiniEngineUnity::Test_LayerMask*>::get(), "IsEquivalentTo", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HoudiniEngineUnity::Test_LayerMask*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::Test_LayerMask::Test_LayerMask() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
