#pragma once
// IWYU pragma private; include "Oculus/Haptics/HapticClip.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Oculus/Haptics/zzzz__HapticClip_def.hpp"
//  Writing Method size for method: ::Oculus::Haptics::HapticClip._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Oculus::Haptics::HapticClip::*)()>(&::Oculus::Haptics::HapticClip::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2a9d710;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::HapticClip*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& Oculus::Haptics::HapticClip::__cordl_internal_get_json() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___json;
}
constexpr ::StringW const& Oculus::Haptics::HapticClip::__cordl_internal_get_json() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___json;
}
constexpr void Oculus::Haptics::HapticClip::__cordl_internal_set_json(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___json)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::Oculus::Haptics::HapticClip* Oculus::Haptics::HapticClip::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Oculus::Haptics::HapticClip*>());
}
inline void Oculus::Haptics::HapticClip::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Oculus::Haptics::HapticClip*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::Oculus::Haptics::HapticClip::HapticClip() {}
