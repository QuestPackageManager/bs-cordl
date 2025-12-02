#pragma once
// IWYU pragma private; include "BeatSaber/Destinations/GameStageExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatSaber/Destinations/zzzz__GameStageExtensions_def.hpp"
#include "BeatSaber/Destinations/zzzz__DestinationTarget_def.hpp"
//  Writing Method size for method: ::BeatSaber::Destinations::GameStageExtensions.RequiresShaderWarmup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::BeatSaber::Destinations::DestinationTarget)>(
    &::BeatSaber::Destinations::GameStageExtensions::RequiresShaderWarmup)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3181bc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::GameStageExtensions*>::get(), "RequiresShaderWarmup", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::DestinationTarget>::get() })));
    return ___internal_method;
  }
};
inline bool BeatSaber::Destinations::GameStageExtensions::RequiresShaderWarmup(::BeatSaber::Destinations::DestinationTarget stage) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::Destinations::GameStageExtensions*>::get(), "RequiresShaderWarmup", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatSaber::Destinations::DestinationTarget>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, stage);
}
// Ctor Parameters []
constexpr ::BeatSaber::Destinations::GameStageExtensions::GameStageExtensions() {}
