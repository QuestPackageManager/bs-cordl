#pragma once
#include "GlobalNamespace/zzzz__IBeatmapLevelCollection_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IBeatmapLevelCollection.get_beatmapLevels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* (
    ::GlobalNamespace::IBeatmapLevelCollection::*)()>(&::GlobalNamespace::IBeatmapLevelCollection::get_beatmapLevels)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatmapLevelCollection*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatmapLevelCollection*>::get(), 0));
    return ___internal_method;
  }
};
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* GlobalNamespace::IBeatmapLevelCollection::get_beatmapLevels() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::IBeatmapLevelCollection*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*, false>(this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
