#pragma once
#include "GlobalNamespace/zzzz__FxBeatmapEventDataBox_2_impl.hpp"
#include "GlobalNamespace/zzzz__FloatFxBeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxBaseData_def.hpp"
#include "GlobalNamespace/zzzz__FloatFxBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FloatFxBeatmapEventDataBox.get_subtypeIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::FloatFxBeatmapEventDataBox::*)()>(
    &::GlobalNamespace::FloatFxBeatmapEventDataBox::get_subtypeIdentifier)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14b35bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxBeatmapEventDataBox*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxBeatmapEventDataBox*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxBeatmapEventDataBox.get_beatStep
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::FloatFxBeatmapEventDataBox::*)()>(
    &::GlobalNamespace::FloatFxBeatmapEventDataBox::get_beatStep)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x14b35c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxBeatmapEventDataBox*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxBeatmapEventDataBox*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxBeatmapEventDataBox._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FloatFxBeatmapEventDataBox::*)(
    ::GlobalNamespace::IndexFilter*, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType, float_t, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType, float_t, bool,
    ::GlobalNamespace::EaseType, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>*)>(&::GlobalNamespace::FloatFxBeatmapEventDataBox::_ctor)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x14b35cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxBeatmapEventDataBox*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IndexFilter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FloatFxBeatmapEventDataBox.CreateVfxBeatmapEventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::FloatFxBeatmapEventData* (::GlobalNamespace::FloatFxBeatmapEventDataBox::*)(::GlobalNamespace::FloatFxBaseData*, float_t, int32_t, int32_t, float_t)>(
        &::GlobalNamespace::FloatFxBeatmapEventDataBox::CreateVfxBeatmapEventData)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x14b3674;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxBeatmapEventDataBox*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxBeatmapEventDataBox*>::get(), 7));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>*& GlobalNamespace::FloatFxBeatmapEventDataBox::__cordl_internal_get__vfxBaseDataList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vfxBaseDataList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>*> const&
GlobalNamespace::FloatFxBeatmapEventDataBox::__cordl_internal_get__vfxBaseDataList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vfxBaseDataList;
}
constexpr void GlobalNamespace::FloatFxBeatmapEventDataBox::__cordl_internal_set__vfxBaseDataList(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vfxBaseDataList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::FloatFxBeatmapEventDataBox::__cordl_internal_get__beatStep() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatStep;
}
constexpr float_t const& GlobalNamespace::FloatFxBeatmapEventDataBox::__cordl_internal_get__beatStep() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatStep;
}
constexpr void GlobalNamespace::FloatFxBeatmapEventDataBox::__cordl_internal_set__beatStep(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatStep = value;
}
inline int32_t GlobalNamespace::FloatFxBeatmapEventDataBox::get_subtypeIdentifier() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxBeatmapEventDataBox*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::FloatFxBeatmapEventDataBox::get_beatStep() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxBeatmapEventDataBox*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FloatFxBeatmapEventDataBox*
GlobalNamespace::FloatFxBeatmapEventDataBox::New_ctor(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType beatDistributionParamType,
                                                      float_t beatDistributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType eventDistributionParamType,
                                                      float_t eventDistributionParam, bool eventDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType eventDistributionEaseType,
                                                      ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>* fxBaseDataList) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FloatFxBeatmapEventDataBox*>(indexFilter, beatDistributionParamType, beatDistributionParam, eventDistributionParamType,
                                                                                                  eventDistributionParam, eventDistributionShouldAffectFirstBaseEvent, eventDistributionEaseType,
                                                                                                  fxBaseDataList));
}
inline void GlobalNamespace::FloatFxBeatmapEventDataBox::_ctor(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType beatDistributionParamType,
                                                               float_t beatDistributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType eventDistributionParamType,
                                                               float_t eventDistributionParam, bool eventDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType eventDistributionEaseType,
                                                               ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>* fxBaseDataList) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxBeatmapEventDataBox*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 8>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IndexFilter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::FloatFxBaseData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexFilter, beatDistributionParamType, beatDistributionParam, eventDistributionParamType, eventDistributionParam,
                                                          eventDistributionShouldAffectFirstBaseEvent, eventDistributionEaseType, fxBaseDataList);
}
inline ::GlobalNamespace::FloatFxBeatmapEventData* GlobalNamespace::FloatFxBeatmapEventDataBox::CreateVfxBeatmapEventData(::GlobalNamespace::FloatFxBaseData* data, float_t time, int32_t groupId,
                                                                                                                          int32_t elementId, float_t distributionOffset) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FloatFxBeatmapEventDataBox*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::FloatFxBeatmapEventData*, false>(this, ___internal_method, data, time, groupId, elementId, distributionOffset);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FloatFxBeatmapEventDataBox::FloatFxBeatmapEventDataBox() {}
