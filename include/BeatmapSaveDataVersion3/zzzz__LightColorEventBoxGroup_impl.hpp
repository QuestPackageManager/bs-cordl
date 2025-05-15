#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/LightColorEventBoxGroup.hpp"
#include "BeatmapSaveDataVersion3/zzzz__EventBoxGroup_1_impl.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightColorEventBoxGroup_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__LightColorEventBox_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightColorEventBoxGroup._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatmapSaveDataVersion3::LightColorEventBoxGroup::*)(
    float_t, int32_t, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBox*>*)>(&::BeatmapSaveDataVersion3::LightColorEventBoxGroup::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x2709b0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBox*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapSaveDataVersion3::LightColorEventBoxGroup.CopyWith
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatmapSaveDataVersion3::LightColorEventBoxGroup* (
    ::BeatmapSaveDataVersion3::LightColorEventBoxGroup::*)(::System::Nullable_1<float_t>, ::System::Nullable_1<int32_t>)>(&::BeatmapSaveDataVersion3::LightColorEventBoxGroup::CopyWith)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x2709b7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>::get(), "CopyWith", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
    return ___internal_method;
  }
};
inline void BeatmapSaveDataVersion3::LightColorEventBoxGroup::_ctor(float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBox*>* eventBoxes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBox*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, groupId, eventBoxes);
}
inline ::BeatmapSaveDataVersion3::LightColorEventBoxGroup* BeatmapSaveDataVersion3::LightColorEventBoxGroup::CopyWith(::System::Nullable_1<float_t> newBeat, ::System::Nullable_1<int32_t> newGroupId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>::get(), "CopyWith", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<float_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Nullable_1<int32_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*, false>(this, ___internal_method, newBeat, newGroupId);
}
inline ::BeatmapSaveDataVersion3::LightColorEventBoxGroup*
BeatmapSaveDataVersion3::LightColorEventBoxGroup::New_ctor(float_t beat, int32_t groupId, ::System::Collections::Generic::List_1<::BeatmapSaveDataVersion3::LightColorEventBox*>* eventBoxes) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatmapSaveDataVersion3::LightColorEventBoxGroup*>(beat, groupId, eventBoxes));
}
// Ctor Parameters []
constexpr ::BeatmapSaveDataVersion3::LightColorEventBoxGroup::LightColorEventBoxGroup() {}
