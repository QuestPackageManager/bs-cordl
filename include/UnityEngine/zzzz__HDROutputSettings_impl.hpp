#pragma once
// IWYU pragma private; include "UnityEngine/HDROutputSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__HDROutputSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::HDROutputSettings._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::HDROutputSettings::*)()>(&::UnityEngine::HDROutputSettings::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x4878088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::HDROutputSettings*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::HDROutputSettings::__cordl_internal_get_m_DisplayIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayIndex;
}
constexpr int32_t const& UnityEngine::HDROutputSettings::__cordl_internal_get_m_DisplayIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_DisplayIndex;
}
constexpr void UnityEngine::HDROutputSettings::__cordl_internal_set_m_DisplayIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_DisplayIndex = value;
}
inline void UnityEngine::HDROutputSettings::setStaticF_displays(::ArrayW<::UnityEngine::HDROutputSettings*, ::Array<::UnityEngine::HDROutputSettings*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::UnityEngine::HDROutputSettings*, ::Array<::UnityEngine::HDROutputSettings*>*>, "displays",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::HDROutputSettings*>::get>(
      std::forward<::ArrayW<::UnityEngine::HDROutputSettings*, ::Array<::UnityEngine::HDROutputSettings*>*>>(value));
}
inline ::ArrayW<::UnityEngine::HDROutputSettings*, ::Array<::UnityEngine::HDROutputSettings*>*> UnityEngine::HDROutputSettings::getStaticF_displays() {
  return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::HDROutputSettings*, ::Array<::UnityEngine::HDROutputSettings*>*>, "displays",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::HDROutputSettings*>::get>();
}
inline void UnityEngine::HDROutputSettings::setStaticF__mainDisplay(::UnityEngine::HDROutputSettings* value) {
  ::cordl_internals::setStaticField<::UnityEngine::HDROutputSettings*, "_mainDisplay", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::HDROutputSettings*>::get>(
      std::forward<::UnityEngine::HDROutputSettings*>(value));
}
inline ::UnityEngine::HDROutputSettings* UnityEngine::HDROutputSettings::getStaticF__mainDisplay() {
  return ::cordl_internals::getStaticField<::UnityEngine::HDROutputSettings*, "_mainDisplay", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::HDROutputSettings*>::get>();
}
inline void UnityEngine::HDROutputSettings::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::HDROutputSettings*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::HDROutputSettings* UnityEngine::HDROutputSettings::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::HDROutputSettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::HDROutputSettings::HDROutputSettings() {}
