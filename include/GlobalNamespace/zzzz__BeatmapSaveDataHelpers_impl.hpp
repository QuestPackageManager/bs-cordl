#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapSaveDataHelpers_def.hpp"
#include "System/zzzz__Version_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapSaveDataHelpers.GetVersion
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Version* (*)(::StringW)>(&::GlobalNamespace::BeatmapSaveDataHelpers::GetVersion)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xd9f668;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapSaveDataHelpers*>::get(), "GetVersion", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::BeatmapSaveDataHelpers::setStaticF_version2_6_0(::System::Version* value) {
  ::cordl_internals::setStaticField<::System::Version*, "version2_6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapSaveDataHelpers*>::get>(
      std::forward<::System::Version*>(value));
}
inline ::System::Version* GlobalNamespace::BeatmapSaveDataHelpers::getStaticF_version2_6_0() {
  return ::cordl_internals::getStaticField<::System::Version*, "version2_6_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapSaveDataHelpers*>::get>();
}
inline ::System::Version* GlobalNamespace::BeatmapSaveDataHelpers::GetVersion(::StringW data) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapSaveDataHelpers*>::get(), "GetVersion", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Version*, false>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapSaveDataHelpers::BeatmapSaveDataHelpers() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
