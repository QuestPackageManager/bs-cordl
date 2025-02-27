#pragma once
// IWYU pragma private; include "LufsMetering/LoudnessData.hpp"
#include "LufsMetering/zzzz__LoudnessData_def.hpp"
//  Writing Method size for method: ::LufsMetering::LoudnessData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::LufsMetering::LoudnessData::*)(float_t, ::ArrayW<float_t, ::Array<float_t>*>, float_t)>(
    &::LufsMetering::LoudnessData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x270f558;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::LoudnessData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void LufsMetering::LoudnessData::_ctor(float_t lufs, ::ArrayW<float_t, ::Array<float_t>*> momentaryValues, float_t blockDuration) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::LoudnessData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<float_t, ::Array<float_t>*>>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lufs, momentaryValues, blockDuration);
}
// Ctor Parameters [CppParam { name: "lufs", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "blockDuration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "momentaryValues", ty: "::ArrayW<float_t,::Array<float_t>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::LufsMetering::LoudnessData::LoudnessData(float_t lufs, float_t blockDuration, ::ArrayW<float_t, ::Array<float_t>*> momentaryValues) noexcept {
  this->lufs = lufs;
  this->blockDuration = blockDuration;
  this->momentaryValues = momentaryValues;
}
// Ctor Parameters []
constexpr ::LufsMetering::LoudnessData::LoudnessData() {}
