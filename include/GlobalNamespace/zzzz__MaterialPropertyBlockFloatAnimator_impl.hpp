#pragma once
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockFloatAnimator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockFloatAnimator.SetProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockFloatAnimator::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockFloatAnimator::SetProperty)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x23f7334;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockFloatAnimator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockFloatAnimator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockFloatAnimator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockFloatAnimator::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockFloatAnimator::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23f7364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockFloatAnimator*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::MaterialPropertyBlockFloatAnimator::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr float_t const& GlobalNamespace::MaterialPropertyBlockFloatAnimator::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void GlobalNamespace::MaterialPropertyBlockFloatAnimator::__cordl_internal_set__value(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____value = value;
}
inline void GlobalNamespace::MaterialPropertyBlockFloatAnimator::SetProperty() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockFloatAnimator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialPropertyBlockFloatAnimator* GlobalNamespace::MaterialPropertyBlockFloatAnimator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MaterialPropertyBlockFloatAnimator*>());
}
inline void GlobalNamespace::MaterialPropertyBlockFloatAnimator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockFloatAnimator*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialPropertyBlockFloatAnimator::MaterialPropertyBlockFloatAnimator() {}
