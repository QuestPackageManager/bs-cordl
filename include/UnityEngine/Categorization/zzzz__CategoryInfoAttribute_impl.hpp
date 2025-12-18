#pragma once
// IWYU pragma private; include "UnityEngine/Categorization/CategoryInfoAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Categorization/zzzz__CategoryInfoAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Categorization::CategoryInfoAttribute.set_Order
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Categorization::CategoryInfoAttribute::*)(int32_t)>(
    &::UnityEngine::Categorization::CategoryInfoAttribute::set_Order)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6933e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Categorization::CategoryInfoAttribute*>::get(), "set_Order",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Categorization::CategoryInfoAttribute.set_Name
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Categorization::CategoryInfoAttribute::*)(::StringW)>(
    &::UnityEngine::Categorization::CategoryInfoAttribute::set_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6933e7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Categorization::CategoryInfoAttribute*>::get(), "set_Name",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Categorization::CategoryInfoAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Categorization::CategoryInfoAttribute::*)()>(
    &::UnityEngine::Categorization::CategoryInfoAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6933e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Categorization::CategoryInfoAttribute*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Categorization::CategoryInfoAttribute::__cordl_internal_get__Order_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Order_k__BackingField;
}
constexpr int32_t const& UnityEngine::Categorization::CategoryInfoAttribute::__cordl_internal_get__Order_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Order_k__BackingField;
}
constexpr void UnityEngine::Categorization::CategoryInfoAttribute::__cordl_internal_set__Order_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Order_k__BackingField = value;
}
constexpr ::StringW& UnityEngine::Categorization::CategoryInfoAttribute::__cordl_internal_get__Name_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Categorization::CategoryInfoAttribute::__cordl_internal_get__Name_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Name_k__BackingField;
}
constexpr void UnityEngine::Categorization::CategoryInfoAttribute::__cordl_internal_set__Name_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____Name_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void UnityEngine::Categorization::CategoryInfoAttribute::set_Order(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Categorization::CategoryInfoAttribute*>::get(), "set_Order",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Categorization::CategoryInfoAttribute::set_Name(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Categorization::CategoryInfoAttribute*>::get(), "set_Name",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Categorization::CategoryInfoAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Categorization::CategoryInfoAttribute*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Categorization::CategoryInfoAttribute* UnityEngine::Categorization::CategoryInfoAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Categorization::CategoryInfoAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Categorization::CategoryInfoAttribute::CategoryInfoAttribute() {}
