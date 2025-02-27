#pragma once
// IWYU pragma private; include "UnityEngineInternal/TypeInferenceRuleAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngineInternal/zzzz__TypeInferenceRuleAttribute_def.hpp"
#include "UnityEngineInternal/zzzz__TypeInferenceRules_def.hpp"
//  Writing Method size for method: ::UnityEngineInternal::TypeInferenceRuleAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngineInternal::TypeInferenceRuleAttribute::*)(::UnityEngineInternal::TypeInferenceRules)>(
    &::UnityEngineInternal::TypeInferenceRuleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x486c21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::TypeInferenceRuleAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::TypeInferenceRules>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::TypeInferenceRuleAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngineInternal::TypeInferenceRuleAttribute::*)(::StringW)>(
    &::UnityEngineInternal::TypeInferenceRuleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x486c2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::TypeInferenceRuleAttribute*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngineInternal::TypeInferenceRuleAttribute.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngineInternal::TypeInferenceRuleAttribute::*)()>(
    &::UnityEngineInternal::TypeInferenceRuleAttribute::ToString)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x486c2c8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::TypeInferenceRuleAttribute*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::TypeInferenceRuleAttribute*>::get(), 3));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngineInternal::TypeInferenceRuleAttribute::__cordl_internal_get__rule() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rule;
}
constexpr ::StringW const& UnityEngineInternal::TypeInferenceRuleAttribute::__cordl_internal_get__rule() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rule;
}
constexpr void UnityEngineInternal::TypeInferenceRuleAttribute::__cordl_internal_set__rule(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rule)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngineInternal::TypeInferenceRuleAttribute::_ctor(::UnityEngineInternal::TypeInferenceRules rule) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::TypeInferenceRuleAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngineInternal::TypeInferenceRules>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rule);
}
inline void UnityEngineInternal::TypeInferenceRuleAttribute::_ctor(::StringW rule) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::TypeInferenceRuleAttribute*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rule);
}
inline ::StringW UnityEngineInternal::TypeInferenceRuleAttribute::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngineInternal::TypeInferenceRuleAttribute*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngineInternal::TypeInferenceRuleAttribute* UnityEngineInternal::TypeInferenceRuleAttribute::New_ctor(::UnityEngineInternal::TypeInferenceRules rule) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngineInternal::TypeInferenceRuleAttribute*>(rule));
}
inline ::UnityEngineInternal::TypeInferenceRuleAttribute* UnityEngineInternal::TypeInferenceRuleAttribute::New_ctor(::StringW rule) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngineInternal::TypeInferenceRuleAttribute*>(rule));
}
// Ctor Parameters []
constexpr ::UnityEngineInternal::TypeInferenceRuleAttribute::TypeInferenceRuleAttribute() {}
