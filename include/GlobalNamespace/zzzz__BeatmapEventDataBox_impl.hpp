#pragma once
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_impl.hpp"
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventDataBox_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__IBeatToTimeConverter_def.hpp"
#include "GlobalNamespace/zzzz__IndexFilter_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType::__BeatmapEventDataBox__DistributionParamType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType::__BeatmapEventDataBox__DistributionParamType() {}
constexpr ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType GlobalNamespace::__BeatmapEventDataBox__DistributionParamType::Wave{ static_cast<int32_t>(0x1) };
constexpr ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType GlobalNamespace::__BeatmapEventDataBox__DistributionParamType::Step{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBox.get_subtypeIdentifier
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::BeatmapEventDataBox::*)()>(
    &::GlobalNamespace::BeatmapEventDataBox::get_subtypeIdentifier)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBox*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBox*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBox.get_beatStep
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapEventDataBox::*)()>(&::GlobalNamespace::BeatmapEventDataBox::get_beatStep)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBox*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBox*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBox.get_indexFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IndexFilter* (::GlobalNamespace::BeatmapEventDataBox::*)()>(
    &::GlobalNamespace::BeatmapEventDataBox::get_indexFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12bc0e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBox*>::get(),
                                                                               "get_indexFilter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBox._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventDataBox::*)(
    ::GlobalNamespace::IndexFilter*, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType, float_t, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType, float_t, bool,
    ::GlobalNamespace::EaseType)>(&::GlobalNamespace::BeatmapEventDataBox::_ctor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x12bc0e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBox*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IndexFilter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBox.Unpack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapEventDataBox::*)(
    float_t, int32_t, int32_t, int32_t, int32_t, float_t, ::GlobalNamespace::IBeatToTimeConverter*, ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>*)>(
    &::GlobalNamespace::BeatmapEventDataBox::Unpack)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBox*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBox*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBox.GetBeatStep
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapEventDataBox::*)(float_t)>(&::GlobalNamespace::BeatmapEventDataBox::GetBeatStep)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x12bc188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBox*>::get(), "GetBeatStep", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBox.GetDistribution
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::BeatmapEventDataBox::*)(bool, int32_t)>(
    &::GlobalNamespace::BeatmapEventDataBox::GetDistribution)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x12bc1fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBox*>::get(), "GetDistribution", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBox.BeatDistributionParamToStep
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(float_t, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType, int32_t)>(
    &::GlobalNamespace::BeatmapEventDataBox::BeatDistributionParamToStep)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x12bc294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBox*>::get(), "BeatDistributionParamToStep", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBox.GetBeatStep
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::GlobalNamespace::IndexFilter*, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType, float_t,
                                                                                              float_t)>(&::GlobalNamespace::BeatmapEventDataBox::GetBeatStep)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x12bc1a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBox*>::get(), "GetBeatStep", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IndexFilter*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapEventDataBox.EventDistributionParamToStep
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(int32_t, float_t, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType, int32_t,
                                                                                              ::GlobalNamespace::EaseType)>(&::GlobalNamespace::BeatmapEventDataBox::EventDistributionParamToStep)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x12bc228;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBox*>::get(), "EventDistributionParamToStep", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IndexFilter*& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__indexFilter_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexFilter_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IndexFilter*> const& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__indexFilter_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____indexFilter_k__BackingField;
}
constexpr void GlobalNamespace::BeatmapEventDataBox::__cordl_internal_set__indexFilter_k__BackingField(::GlobalNamespace::IndexFilter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____indexFilter_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__beatDistributionParam() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatDistributionParam;
}
constexpr float_t const& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__beatDistributionParam() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatDistributionParam;
}
constexpr void GlobalNamespace::BeatmapEventDataBox::__cordl_internal_set__beatDistributionParam(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatDistributionParam = value;
}
constexpr ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__beatDistributionParamType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatDistributionParamType;
}
constexpr ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType const& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__beatDistributionParamType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatDistributionParamType;
}
constexpr void GlobalNamespace::BeatmapEventDataBox::__cordl_internal_set__beatDistributionParamType(::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatDistributionParamType = value;
}
constexpr int32_t& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__eventDistributionCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventDistributionCount;
}
constexpr int32_t const& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__eventDistributionCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventDistributionCount;
}
constexpr void GlobalNamespace::BeatmapEventDataBox::__cordl_internal_set__eventDistributionCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventDistributionCount = value;
}
constexpr ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__eventDistributionParamType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventDistributionParamType;
}
constexpr ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType const& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__eventDistributionParamType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventDistributionParamType;
}
constexpr void GlobalNamespace::BeatmapEventDataBox::__cordl_internal_set__eventDistributionParamType(::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventDistributionParamType = value;
}
constexpr float_t& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__eventDistributionParam() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventDistributionParam;
}
constexpr float_t const& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__eventDistributionParam() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventDistributionParam;
}
constexpr void GlobalNamespace::BeatmapEventDataBox::__cordl_internal_set__eventDistributionParam(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventDistributionParam = value;
}
constexpr bool& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__eventDistributionShouldAffectFirstBaseEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventDistributionShouldAffectFirstBaseEvent;
}
constexpr bool const& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__eventDistributionShouldAffectFirstBaseEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventDistributionShouldAffectFirstBaseEvent;
}
constexpr void GlobalNamespace::BeatmapEventDataBox::__cordl_internal_set__eventDistributionShouldAffectFirstBaseEvent(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventDistributionShouldAffectFirstBaseEvent = value;
}
constexpr ::GlobalNamespace::EaseType& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__eventDistributionEaseType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventDistributionEaseType;
}
constexpr ::GlobalNamespace::EaseType const& GlobalNamespace::BeatmapEventDataBox::__cordl_internal_get__eventDistributionEaseType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____eventDistributionEaseType;
}
constexpr void GlobalNamespace::BeatmapEventDataBox::__cordl_internal_set__eventDistributionEaseType(::GlobalNamespace::EaseType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____eventDistributionEaseType = value;
}
inline int32_t GlobalNamespace::BeatmapEventDataBox::get_subtypeIdentifier() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBox*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapEventDataBox::get_beatStep() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBox*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IndexFilter* GlobalNamespace::BeatmapEventDataBox::get_indexFilter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBox*>::get(), "get_indexFilter",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IndexFilter*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapEventDataBox*
GlobalNamespace::BeatmapEventDataBox::New_ctor(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType beatDistributionParamType,
                                               float_t beatDistributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType eventDistributionParamType,
                                               float_t eventDistributionParam, bool eventDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType eventDistributionEaseType) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapEventDataBox*>(indexFilter, beatDistributionParamType, beatDistributionParam, eventDistributionParamType,
                                                                                           eventDistributionParam, eventDistributionShouldAffectFirstBaseEvent, eventDistributionEaseType));
}
inline void GlobalNamespace::BeatmapEventDataBox::_ctor(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType beatDistributionParamType,
                                                        float_t beatDistributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType eventDistributionParamType,
                                                        float_t eventDistributionParam, bool eventDistributionShouldAffectFirstBaseEvent, ::GlobalNamespace::EaseType eventDistributionEaseType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBox*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IndexFilter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, indexFilter, beatDistributionParamType, beatDistributionParam, eventDistributionParamType, eventDistributionParam,
                                                          eventDistributionShouldAffectFirstBaseEvent, eventDistributionEaseType);
}
inline void GlobalNamespace::BeatmapEventDataBox::Unpack(float_t groupBoxBeat, int32_t groupId, int32_t elementId, int32_t durationOrderIndex, int32_t distributionOrderIndex, float_t maxBeat,
                                                         ::GlobalNamespace::IBeatToTimeConverter* beatToTimeConverter,
                                                         ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapEventData*>* output) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBox*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, groupBoxBeat, groupId, elementId, durationOrderIndex, distributionOrderIndex, maxBeat, beatToTimeConverter, output);
}
inline float_t GlobalNamespace::BeatmapEventDataBox::GetBeatStep(float_t lastBaseEventRelativeBeat) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBox*>::get(), "GetBeatStep",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, lastBaseEventRelativeBeat);
}
inline float_t GlobalNamespace::BeatmapEventDataBox::GetDistribution(bool isFirstBaseDataEvent, int32_t distributionOrderIndex) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBox*>::get(), "GetDistribution", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, isFirstBaseDataEvent, distributionOrderIndex);
}
inline float_t GlobalNamespace::BeatmapEventDataBox::BeatDistributionParamToStep(float_t distributionParam, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType distributionParamType,
                                                                                 int32_t count) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBox*>::get(), "BeatDistributionParamToStep", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, distributionParam, distributionParamType, count);
}
inline float_t GlobalNamespace::BeatmapEventDataBox::GetBeatStep(::GlobalNamespace::IndexFilter* indexFilter, ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType distributionParamType,
                                                                 float_t distributionParam, float_t lastBaseEventRelativeBeat) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBox*>::get(), "GetBeatStep", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IndexFilter*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, indexFilter, distributionParamType, distributionParam, lastBaseEventRelativeBeat);
}
inline float_t GlobalNamespace::BeatmapEventDataBox::EventDistributionParamToStep(int32_t index, float_t distributionParam,
                                                                                  ::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType distributionParamType, int32_t count,
                                                                                  ::GlobalNamespace::EaseType easeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapEventDataBox*>::get(), "EventDistributionParamToStep", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__BeatmapEventDataBox__DistributionParamType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, index, distributionParam, distributionParamType, count, easeType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapEventDataBox::BeatmapEventDataBox() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
