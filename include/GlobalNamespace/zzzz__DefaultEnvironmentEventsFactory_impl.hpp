#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__DefaultEnvironmentEventsFactory_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__DefaultEnvironmentEvents_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentLightGroups_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBoxGroupLists_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::DefaultEnvironmentEventsFactory.InsertDefaultEnvironmentEvents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::BeatmapData*, ::GlobalNamespace::BeatmapEventDataBoxGroupLists*,
                                                                                           ::GlobalNamespace::DefaultEnvironmentEvents*, ::GlobalNamespace::IEnvironmentLightGroups*)>(
    &::GlobalNamespace::DefaultEnvironmentEventsFactory::InsertDefaultEnvironmentEvents)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0x2333894;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEventsFactory*>::get(), "InsertDefaultEnvironmentEvents", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventDataBoxGroupLists*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DefaultEnvironmentEvents*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::DefaultEnvironmentEventsFactory::InsertDefaultEnvironmentEvents(::GlobalNamespace::BeatmapData* beatmapData,
                                                                                             ::GlobalNamespace::BeatmapEventDataBoxGroupLists* beatmapEventDataBoxGroupLists,
                                                                                             ::GlobalNamespace::DefaultEnvironmentEvents* defaultEnvironmentEvents,
                                                                                             ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::DefaultEnvironmentEventsFactory*>::get(), "InsertDefaultEnvironmentEvents", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapEventDataBoxGroupLists*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::DefaultEnvironmentEvents*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEnvironmentLightGroups*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, beatmapData, beatmapEventDataBoxGroupLists, defaultEnvironmentEvents, environmentLightGroups);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DefaultEnvironmentEventsFactory::DefaultEnvironmentEventsFactory() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
