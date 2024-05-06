#pragma once
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__MultilineAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::MultilineAttribute._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::MultilineAttribute::*)()>(&::UnityEngine::MultilineAttribute::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x340a260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::MultilineAttribute*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::MultilineAttribute::__cordl_internal_get_lines() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lines;
}
constexpr int32_t const& UnityEngine::MultilineAttribute::__cordl_internal_get_lines() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lines;
}
constexpr void UnityEngine::MultilineAttribute::__cordl_internal_set_lines(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lines = value;
}
inline ::UnityEngine::MultilineAttribute* UnityEngine::MultilineAttribute::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::MultilineAttribute*>());
}
inline void UnityEngine::MultilineAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::MultilineAttribute*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::MultilineAttribute::MultilineAttribute() {}
