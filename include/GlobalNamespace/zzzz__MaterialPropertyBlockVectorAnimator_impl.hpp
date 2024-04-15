#pragma once
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockVectorAnimator_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockVectorAnimator.SetProperty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockVectorAnimator::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockVectorAnimator::SetProperty)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x23ff72c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockVectorAnimator*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockVectorAnimator*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MaterialPropertyBlockVectorAnimator._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MaterialPropertyBlockVectorAnimator::*)()>(
    &::GlobalNamespace::MaterialPropertyBlockVectorAnimator::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x23ff760;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockVectorAnimator*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector4& GlobalNamespace::MaterialPropertyBlockVectorAnimator::__cordl_internal_get__vector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vector;
}
constexpr ::UnityEngine::Vector4 const& GlobalNamespace::MaterialPropertyBlockVectorAnimator::__cordl_internal_get__vector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vector;
}
constexpr void GlobalNamespace::MaterialPropertyBlockVectorAnimator::__cordl_internal_set__vector(::UnityEngine::Vector4 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vector = value;
}
inline void GlobalNamespace::MaterialPropertyBlockVectorAnimator::SetProperty() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockVectorAnimator*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MaterialPropertyBlockVectorAnimator* GlobalNamespace::MaterialPropertyBlockVectorAnimator::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MaterialPropertyBlockVectorAnimator*>());
}
inline void GlobalNamespace::MaterialPropertyBlockVectorAnimator::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MaterialPropertyBlockVectorAnimator*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MaterialPropertyBlockVectorAnimator::MaterialPropertyBlockVectorAnimator() {}
