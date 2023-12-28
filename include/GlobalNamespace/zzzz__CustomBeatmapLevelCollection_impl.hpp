#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__CustomBeatmapLevelCollection_def.hpp"
#include "GlobalNamespace/zzzz__CustomPreviewBeatmapLevel_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewBeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelCollection_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::CustomBeatmapLevelCollection.get_beatmapLevels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* (
    ::GlobalNamespace::CustomBeatmapLevelCollection::*)()>(&::GlobalNamespace::CustomBeatmapLevelCollection::get_beatmapLevels)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2346a7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevelCollection*>::get(),
                                                                               "get_beatmapLevels", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::CustomBeatmapLevelCollection._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::CustomBeatmapLevelCollection::*)(
    ::ArrayW<::GlobalNamespace::CustomPreviewBeatmapLevel*, ::Array<::GlobalNamespace::CustomPreviewBeatmapLevel*>*>)>(&::GlobalNamespace::CustomBeatmapLevelCollection::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x2346a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevelCollection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::CustomPreviewBeatmapLevel*, ::Array<::GlobalNamespace::CustomPreviewBeatmapLevel*>*>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelCollection"
constexpr GlobalNamespace::CustomBeatmapLevelCollection::operator ::GlobalNamespace::IBeatmapLevelCollection*() noexcept {
  return static_cast<::GlobalNamespace::IBeatmapLevelCollection*>(static_cast<void*>(this));
}
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomPreviewBeatmapLevel*>*& GlobalNamespace::CustomBeatmapLevelCollection::__get__customPreviewBeatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customPreviewBeatmapLevels;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomPreviewBeatmapLevel*>*> const&
GlobalNamespace::CustomBeatmapLevelCollection::__get__customPreviewBeatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____customPreviewBeatmapLevels;
}
constexpr void GlobalNamespace::CustomBeatmapLevelCollection::__set__customPreviewBeatmapLevels(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomPreviewBeatmapLevel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____customPreviewBeatmapLevels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>* GlobalNamespace::CustomBeatmapLevelCollection::get_beatmapLevels() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevelCollection*>::get(),
                                                                             "get_beatmapLevels", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IPreviewBeatmapLevel*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::CustomBeatmapLevelCollection*
GlobalNamespace::CustomBeatmapLevelCollection::New_ctor(::ArrayW<::GlobalNamespace::CustomPreviewBeatmapLevel*, ::Array<::GlobalNamespace::CustomPreviewBeatmapLevel*>*> customPreviewBeatmapLevels) {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::CustomBeatmapLevelCollection*>(customPreviewBeatmapLevels));
}
inline void
GlobalNamespace::CustomBeatmapLevelCollection::_ctor(::ArrayW<::GlobalNamespace::CustomPreviewBeatmapLevel*, ::Array<::GlobalNamespace::CustomPreviewBeatmapLevel*>*> customPreviewBeatmapLevels) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::CustomBeatmapLevelCollection*>::get(), ".ctor", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::CustomPreviewBeatmapLevel*, ::Array<::GlobalNamespace::CustomPreviewBeatmapLevel*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, customPreviewBeatmapLevels);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CustomBeatmapLevelCollection::CustomBeatmapLevelCollection() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
