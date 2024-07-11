#pragma once
// IWYU pragma private; include "UnityEngine/WaitForSeconds.hpp"
#include "UnityEngine/zzzz__YieldInstruction_impl.hpp"
#include "UnityEngine/zzzz__WaitForSeconds_def.hpp"
//  Writing Method size for method: ::UnityEngine::WaitForSeconds._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::WaitForSeconds::*)(float_t)>(&::UnityEngine::WaitForSeconds::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x34436b4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WaitForSeconds*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::WaitForSeconds::__cordl_internal_get_m_Seconds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Seconds;
}
constexpr float_t const& UnityEngine::WaitForSeconds::__cordl_internal_get_m_Seconds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Seconds;
}
constexpr void UnityEngine::WaitForSeconds::__cordl_internal_set_m_Seconds(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Seconds = value;
}
inline ::UnityEngine::WaitForSeconds* UnityEngine::WaitForSeconds::New_ctor(float_t seconds) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::WaitForSeconds*>(seconds));
}
inline void UnityEngine::WaitForSeconds::_ctor(float_t seconds) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::WaitForSeconds*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, seconds);
}
// Ctor Parameters []
constexpr ::UnityEngine::WaitForSeconds::WaitForSeconds() {}
