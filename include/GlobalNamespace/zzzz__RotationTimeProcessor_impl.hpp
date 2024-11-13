#pragma once
// IWYU pragma private; include "GlobalNamespace/RotationTimeProcessor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__RotationTimeProcessor_def.hpp"
#include "BeatmapSaveDataVersion2_6_0AndEarlier/zzzz__EventData_def.hpp"
#include "BeatmapSaveDataVersion3/zzzz__RotationEventData_def.hpp"
#include "GlobalNamespace/zzzz__RotationTimeProcessor_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__RotationTimeProcessor__RotationChangeData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RotationTimeProcessor__RotationChangeData::*)(float_t, int32_t)>(
    &::GlobalNamespace::__RotationTimeProcessor__RotationChangeData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x2683e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RotationTimeProcessor__RotationChangeData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__RotationTimeProcessor__RotationChangeData::_ctor(float_t beat, int32_t rotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RotationTimeProcessor__RotationChangeData>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, beat, rotation);
}
// Ctor Parameters [CppParam { name: "beat", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__RotationTimeProcessor__RotationChangeData::__RotationTimeProcessor__RotationChangeData(float_t beat, int32_t rotation) noexcept {
  this->beat = beat;
  this->rotation = rotation;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RotationTimeProcessor__RotationChangeData::__RotationTimeProcessor__RotationChangeData() {}
//  Writing Method size for method: ::GlobalNamespace::__RotationTimeProcessor____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__RotationTimeProcessor____c::*)()>(
    &::GlobalNamespace::__RotationTimeProcessor____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2684314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RotationTimeProcessor____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__RotationTimeProcessor____c.__ctor_b__3_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__RotationTimeProcessor____c::*)(::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*)>(
    &::GlobalNamespace::__RotationTimeProcessor____c::__ctor_b__3_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x268431c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RotationTimeProcessor____c*>::get(), "<.ctor>b__3_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__RotationTimeProcessor____c::setStaticF___9(::GlobalNamespace::__RotationTimeProcessor____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__RotationTimeProcessor____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RotationTimeProcessor____c*>::get>(
      std::forward<::GlobalNamespace::__RotationTimeProcessor____c*>(value));
}
inline ::GlobalNamespace::__RotationTimeProcessor____c* GlobalNamespace::__RotationTimeProcessor____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__RotationTimeProcessor____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RotationTimeProcessor____c*>::get>();
}
inline void GlobalNamespace::__RotationTimeProcessor____c::setStaticF___9__3_0(::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>*, "<>9__3_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RotationTimeProcessor____c*>::get>(
      std::forward<::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>*>(value));
}
inline ::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>* GlobalNamespace::__RotationTimeProcessor____c::getStaticF___9__3_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*, bool>*, "<>9__3_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RotationTimeProcessor____c*>::get>();
}
inline ::GlobalNamespace::__RotationTimeProcessor____c* GlobalNamespace::__RotationTimeProcessor____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__RotationTimeProcessor____c*>());
}
inline void GlobalNamespace::__RotationTimeProcessor____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RotationTimeProcessor____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__RotationTimeProcessor____c::__ctor_b__3_0(::BeatmapSaveDataVersion2_6_0AndEarlier::EventData* e) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__RotationTimeProcessor____c*>::get(), "<.ctor>b__3_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, e);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__RotationTimeProcessor____c::__RotationTimeProcessor____c() {}
//  Writing Method size for method: ::GlobalNamespace::RotationTimeProcessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RotationTimeProcessor::*)(
    ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>*)>(&::GlobalNamespace::RotationTimeProcessor::_ctor)> {
  constexpr static std::size_t size = 0x324;
  constexpr static std::size_t addrs = 0x2683ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RotationTimeProcessor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotationTimeProcessor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RotationTimeProcessor::*)(
    ::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::RotationEventData*>*)>(&::GlobalNamespace::RotationTimeProcessor::_ctor)> {
  constexpr static std::size_t size = 0x4a0;
  constexpr static std::size_t addrs = 0x2683e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RotationTimeProcessor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::RotationEventData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotationTimeProcessor.ConvertBeatToRotation
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::RotationTimeProcessor::*)(float_t)>(
    &::GlobalNamespace::RotationTimeProcessor::ConvertBeatToRotation)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2683938;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RotationTimeProcessor*>::get(), "ConvertBeatToRotation",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RotationTimeProcessor.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RotationTimeProcessor::*)()>(&::GlobalNamespace::RotationTimeProcessor::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26842b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RotationTimeProcessor*>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::__RotationTimeProcessor__RotationChangeData>*&
GlobalNamespace::RotationTimeProcessor::__cordl_internal_get__rotationChangeDataList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationChangeDataList;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::__RotationTimeProcessor__RotationChangeData>*> const&
GlobalNamespace::RotationTimeProcessor::__cordl_internal_get__rotationChangeDataList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationChangeDataList;
}
constexpr void
GlobalNamespace::RotationTimeProcessor::__cordl_internal_set__rotationChangeDataList(::System::Collections::Generic::List_1<::GlobalNamespace::__RotationTimeProcessor__RotationChangeData>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rotationChangeDataList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::RotationTimeProcessor::__cordl_internal_get_currentBpmChangesDataIdx() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentBpmChangesDataIdx;
}
constexpr int32_t const& GlobalNamespace::RotationTimeProcessor::__cordl_internal_get_currentBpmChangesDataIdx() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___currentBpmChangesDataIdx;
}
constexpr void GlobalNamespace::RotationTimeProcessor::__cordl_internal_set_currentBpmChangesDataIdx(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___currentBpmChangesDataIdx = value;
}
inline ::GlobalNamespace::RotationTimeProcessor*
GlobalNamespace::RotationTimeProcessor::New_ctor(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* events) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RotationTimeProcessor*>(events));
}
inline void GlobalNamespace::RotationTimeProcessor::_ctor(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>* events) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RotationTimeProcessor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion2_6_0AndEarlier::EventData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, events);
}
inline ::GlobalNamespace::RotationTimeProcessor*
GlobalNamespace::RotationTimeProcessor::New_ctor(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::RotationEventData*>* rotationEventsSaveData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RotationTimeProcessor*>(rotationEventsSaveData));
}
inline void GlobalNamespace::RotationTimeProcessor::_ctor(::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::RotationEventData*>* rotationEventsSaveData) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RotationTimeProcessor*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{
                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyList_1<::BeatmapSaveDataVersion3::RotationEventData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, rotationEventsSaveData);
}
inline int32_t GlobalNamespace::RotationTimeProcessor::ConvertBeatToRotation(float_t beat) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RotationTimeProcessor*>::get(), "ConvertBeatToRotation",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, beat);
}
inline void GlobalNamespace::RotationTimeProcessor::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RotationTimeProcessor*>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RotationTimeProcessor::RotationTimeProcessor() {}
