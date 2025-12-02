#pragma once
// IWYU pragma private; include "TMPro/KerningPairKey.hpp"
#include "TMPro/zzzz__KerningPairKey_def.hpp"
//  Writing Method size for method: ::TMPro::KerningPairKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::TMPro::KerningPairKey::*)(uint32_t, uint32_t)>(&::TMPro::KerningPairKey::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x673ca40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::KerningPairKey>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
inline void TMPro::KerningPairKey::_ctor(uint32_t ascii_left, uint32_t ascii_right) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::TMPro::KerningPairKey>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ascii_left, ascii_right);
}
// Ctor Parameters [CppParam { name: "ascii_Left", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ascii_Right", ty: "uint32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "key", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::TMPro::KerningPairKey::KerningPairKey(uint32_t ascii_Left, uint32_t ascii_Right, uint32_t key) noexcept {
  this->ascii_Left = ascii_Left;
  this->ascii_Right = ascii_Right;
  this->key = key;
}
// Ctor Parameters []
constexpr ::TMPro::KerningPairKey::KerningPairKey() {}
