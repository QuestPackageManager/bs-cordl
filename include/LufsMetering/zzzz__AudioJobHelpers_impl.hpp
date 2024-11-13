#pragma once
// IWYU pragma private; include "LufsMetering/AudioJobHelpers.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "LufsMetering/zzzz__AudioJobHelpers_def.hpp"
#include "LufsMetering/zzzz__FilterCoefficients_def.hpp"
//  Writing Method size for method: ::LufsMetering::AudioJobHelpers.GetHighShelfDeManCoefficients
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LufsMetering::FilterCoefficients (*)(float_t, float_t, float_t, float_t)>(
    &::LufsMetering::AudioJobHelpers::GetHighShelfDeManCoefficients)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3b123c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::AudioJobHelpers*>::get(), "GetHighShelfDeManCoefficients", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::LufsMetering::AudioJobHelpers.GetHighPassDeManCoefficients
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::LufsMetering::FilterCoefficients (*)(float_t, float_t, float_t)>(
    &::LufsMetering::AudioJobHelpers::GetHighPassDeManCoefficients)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3b12490;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::AudioJobHelpers*>::get(), "GetHighPassDeManCoefficients", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline ::LufsMetering::FilterCoefficients LufsMetering::AudioJobHelpers::GetHighShelfDeManCoefficients(float_t gain, float_t quality, float_t frequency, float_t rate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::AudioJobHelpers*>::get(), "GetHighShelfDeManCoefficients", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LufsMetering::FilterCoefficients, false>(nullptr, ___internal_method, gain, quality, frequency, rate);
}
inline ::LufsMetering::FilterCoefficients LufsMetering::AudioJobHelpers::GetHighPassDeManCoefficients(float_t quality, float_t frequency, float_t rate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::LufsMetering::AudioJobHelpers*>::get(), "GetHighPassDeManCoefficients", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::LufsMetering::FilterCoefficients, false>(nullptr, ___internal_method, quality, frequency, rate);
}
// Ctor Parameters []
constexpr ::LufsMetering::AudioJobHelpers::AudioJobHelpers() {}
