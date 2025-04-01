#pragma once
// IWYU pragma private; include "GlobalNamespace/DefaultEnvironmentEventsFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DefaultEnvironmentEventsFactory_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEventsFactory.InsertDefaultEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::BeatmapData*)>(
    &::GlobalNamespace::DefaultEnvironmentEventsFactory::InsertDefaultEvents)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x26b6f48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEventsFactory*>::get(), "InsertDefaultEvents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DefaultEnvironmentEventsFactory::InsertDefaultEvents(::GlobalNamespace::BeatmapData* beatmapData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEventsFactory*>::get(), "InsertDefaultEvents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, beatmapData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DefaultEnvironmentEventsFactory::DefaultEnvironmentEventsFactory() {}
