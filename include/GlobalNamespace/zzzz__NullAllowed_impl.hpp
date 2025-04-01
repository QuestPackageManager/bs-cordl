#pragma once
// IWYU pragma private; include "GlobalNamespace/NullAllowed.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__NullAllowed_def.hpp"
#include "GlobalNamespace/zzzz__NullAllowed_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::NullAllowed_Context::NullAllowed_Context(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NullAllowed_Context::NullAllowed_Context() {}
constexpr ::GlobalNamespace::NullAllowed_Context GlobalNamespace::NullAllowed_Context::Everywhere{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::NullAllowed_Context GlobalNamespace::NullAllowed_Context::Prefab{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::NullAllowed._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NullAllowed::*)(::GlobalNamespace::NullAllowed_Context)>(
    &::GlobalNamespace::NullAllowed::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x229a6a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullAllowed*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NullAllowed_Context>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NullAllowed.IsNullAllowedFor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::NullAllowed::*)(::GlobalNamespace::NullAllowed_Context)>(
    &::GlobalNamespace::NullAllowed::IsNullAllowedFor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x229a6cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullAllowed*>::get(), "IsNullAllowedFor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NullAllowed_Context>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::NullAllowed_Context& GlobalNamespace::NullAllowed::__cordl_internal_get__context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr ::GlobalNamespace::NullAllowed_Context const& GlobalNamespace::NullAllowed::__cordl_internal_get__context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____context;
}
constexpr void GlobalNamespace::NullAllowed::__cordl_internal_set__context(::GlobalNamespace::NullAllowed_Context value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____context = value;
}
inline void GlobalNamespace::NullAllowed::_ctor(::GlobalNamespace::NullAllowed_Context context) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullAllowed*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NullAllowed_Context>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, context);
}
inline bool GlobalNamespace::NullAllowed::IsNullAllowedFor(::GlobalNamespace::NullAllowed_Context context) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NullAllowed*>::get(), "IsNullAllowedFor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NullAllowed_Context>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, context);
}
inline ::GlobalNamespace::NullAllowed* GlobalNamespace::NullAllowed::New_ctor(::GlobalNamespace::NullAllowed_Context context) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NullAllowed*>(context));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NullAllowed::NullAllowed() {}
