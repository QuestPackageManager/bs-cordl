#pragma once
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapBasicData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentName_def.hpp"
#include "GlobalNamespace/zzzz__IPreviewMediaData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyDictionary_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0::*)()>(
    &::GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12824a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0._GetDifficulties_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0::*)(::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>)>(
        &::GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0::_GetDifficulties_b__0)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x1282918;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0*>::get(), "<GetDifficulties>b__0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0::__cordl_internal_get_characteristic() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristic;
}
constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0::__cordl_internal_get_characteristic() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristic;
}
constexpr void GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0::__cordl_internal_set_characteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___characteristic)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0* GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0*>());
}
inline void GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0::_GetDifficulties_b__0(
    ::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty> entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0*>::get(), "<GetDifficulties>b__0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entry);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevel____c__DisplayClass19_0::__BeatmapLevel____c__DisplayClass19_0() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevel____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevel____c::*)()>(&::GlobalNamespace::__BeatmapLevel____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12829e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevel____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevel____c._GetDifficulties_b__19_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapDifficulty (::GlobalNamespace::__BeatmapLevel____c::*)(
    ::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>)>(&::GlobalNamespace::__BeatmapLevel____c::_GetDifficulties_b__19_1)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12829f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevel____c*>::get(), "<GetDifficulties>b__19_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevel____c._GetCharacteristics_b__20_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> (::GlobalNamespace::__BeatmapLevel____c::*)(
    ::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>)>(&::GlobalNamespace::__BeatmapLevel____c::_GetCharacteristics_b__20_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12829f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevel____c*>::get(), "<GetCharacteristics>b__20_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__BeatmapLevel____c::setStaticF___9(::GlobalNamespace::__BeatmapLevel____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__BeatmapLevel____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevel____c*>::get>(
      std::forward<::GlobalNamespace::__BeatmapLevel____c*>(value));
}
inline ::GlobalNamespace::__BeatmapLevel____c* GlobalNamespace::__BeatmapLevel____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__BeatmapLevel____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevel____c*>::get>();
}
inline void GlobalNamespace::__BeatmapLevel____c::setStaticF___9__19_1(
    ::System::Func_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapDifficulty>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapDifficulty>*, "<>9__19_1",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevel____c*>::get>(
      std::forward<::System::Func_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapDifficulty>*>(value));
}
inline ::System::Func_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapDifficulty>*
GlobalNamespace::__BeatmapLevel____c::getStaticF___9__19_1() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapDifficulty>*, "<>9__19_1",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevel____c*>::get>();
}
inline void GlobalNamespace::__BeatmapLevel____c::setStaticF___9__20_0(
    ::System::Func_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* value) {
  ::cordl_internals::setStaticField<
      ::System::Func_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*,
      "<>9__20_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevel____c*>::get>(
      std::forward<
          ::System::Func_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>(
          value));
}
inline ::System::Func_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*
GlobalNamespace::__BeatmapLevel____c::getStaticF___9__20_0() {
  return ::cordl_internals::getStaticField<
      ::System::Func_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*,
      "<>9__20_0", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevel____c*>::get>();
}
inline ::GlobalNamespace::__BeatmapLevel____c* GlobalNamespace::__BeatmapLevel____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BeatmapLevel____c*>());
}
inline void GlobalNamespace::__BeatmapLevel____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevel____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDifficulty
GlobalNamespace::__BeatmapLevel____c::_GetDifficulties_b__19_1(::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty> entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevel____c*>::get(), "<GetDifficulties>b__19_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDifficulty, false>(this, ___internal_method, entry);
}
inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>
GlobalNamespace::__BeatmapLevel____c::_GetCharacteristics_b__20_0(::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty> entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevel____c*>::get(), "<GetCharacteristics>b__20_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, false>(this, ___internal_method, entry);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevel____c::__BeatmapLevel____c() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevel::*)(
    bool, ::StringW, ::StringW, ::StringW, ::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>, ::ArrayW<::StringW, ::Array<::StringW>*>, float_t, float_t, float_t, float_t, float_t, float_t,
    ::GlobalNamespace::PlayerSensitivityFlag, ::GlobalNamespace::IPreviewMediaData*,
    ::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                          ::GlobalNamespace::BeatmapBasicData*>*)>(&::GlobalNamespace::BeatmapLevel::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x12821cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 16>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSensitivityFlag>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewMediaData*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyDictionary_2<
                ::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapBasicData*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.GetDifficulties
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapDifficulty>* (
    ::GlobalNamespace::BeatmapLevel::*)(::GlobalNamespace::BeatmapCharacteristicSO*)>(&::GlobalNamespace::BeatmapLevel::GetDifficulties)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x1282284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevel*>::get(), "GetDifficulties", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.GetCharacteristics
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* (
    ::GlobalNamespace::BeatmapLevel::*)()>(&::GlobalNamespace::BeatmapLevel::GetCharacteristics)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x12824b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevel*>::get(), "GetCharacteristics",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.GetBeatmapKeys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapKey>* (::GlobalNamespace::BeatmapLevel::*)()>(
    &::GlobalNamespace::BeatmapLevel::GetBeatmapKeys)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x1282678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevel*>::get(), "GetBeatmapKeys",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.GetDifficultyBeatmapData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapBasicData* (
    ::GlobalNamespace::BeatmapLevel::*)(::GlobalNamespace::BeatmapCharacteristicSO*, ::GlobalNamespace::BeatmapDifficulty)>(&::GlobalNamespace::BeatmapLevel::GetDifficultyBeatmapData)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x12827c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevel*>::get(), "GetDifficultyBeatmapData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.GetEnvironmentName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::EnvironmentName (::GlobalNamespace::BeatmapLevel::*)(
    ::GlobalNamespace::BeatmapCharacteristicSO*, ::GlobalNamespace::BeatmapDifficulty)>(&::GlobalNamespace::BeatmapLevel::GetEnvironmentName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x12828cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevel*>::get(), "GetEnvironmentName", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel.GetColorScheme
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::ColorScheme* (
    ::GlobalNamespace::BeatmapLevel::*)(::GlobalNamespace::BeatmapCharacteristicSO*, ::GlobalNamespace::BeatmapDifficulty)>(&::GlobalNamespace::BeatmapLevel::GetColorScheme)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x12828e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevel*>::get(), "GetColorScheme", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevel._GetBeatmapKeys_b__21_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapKey (::GlobalNamespace::BeatmapLevel::*)(
    ::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>)>(&::GlobalNamespace::BeatmapLevel::_GetBeatmapKeys_b__21_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x1282904;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevel*>::get(), "<GetBeatmapKeys>b__21_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::BeatmapLevel::__cordl_internal_get_hasPrecalculatedData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasPrecalculatedData;
}
constexpr bool const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_hasPrecalculatedData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasPrecalculatedData;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_hasPrecalculatedData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasPrecalculatedData = value;
}
constexpr ::StringW& GlobalNamespace::BeatmapLevel::__cordl_internal_get_levelID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelID;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_levelID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelID;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_levelID(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelID)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::BeatmapLevel::__cordl_internal_get_songName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songName;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_songName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songName;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_songName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___songName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::BeatmapLevel::__cordl_internal_get_songSubName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSubName;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_songSubName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songSubName;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_songSubName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___songSubName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::BeatmapLevel::__cordl_internal_get_songAuthorName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songAuthorName;
}
constexpr ::StringW const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_songAuthorName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songAuthorName;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_songAuthorName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___songAuthorName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::BeatmapLevel::__cordl_internal_get_allMappers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allMappers;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_allMappers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allMappers;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_allMappers(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___allMappers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*>& GlobalNamespace::BeatmapLevel::__cordl_internal_get_allLighters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allLighters;
}
constexpr ::ArrayW<::StringW, ::Array<::StringW>*> const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_allLighters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allLighters;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_allLighters(::ArrayW<::StringW, ::Array<::StringW>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___allLighters)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::BeatmapLevel::__cordl_internal_get_beatsPerMinute() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatsPerMinute;
}
constexpr float_t const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_beatsPerMinute() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatsPerMinute;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_beatsPerMinute(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatsPerMinute = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevel::__cordl_internal_get_integratedLufs() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___integratedLufs;
}
constexpr float_t const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_integratedLufs() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___integratedLufs;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_integratedLufs(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___integratedLufs = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevel::__cordl_internal_get_songTimeOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songTimeOffset;
}
constexpr float_t const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_songTimeOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songTimeOffset;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_songTimeOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songTimeOffset = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevel::__cordl_internal_get_previewStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewStartTime;
}
constexpr float_t const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_previewStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewStartTime;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_previewStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___previewStartTime = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevel::__cordl_internal_get_previewDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewDuration;
}
constexpr float_t const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_previewDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewDuration;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_previewDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___previewDuration = value;
}
constexpr float_t& GlobalNamespace::BeatmapLevel::__cordl_internal_get_songDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songDuration;
}
constexpr float_t const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_songDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___songDuration;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_songDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___songDuration = value;
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag& GlobalNamespace::BeatmapLevel::__cordl_internal_get_contentRating() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentRating;
}
constexpr ::GlobalNamespace::PlayerSensitivityFlag const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_contentRating() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___contentRating;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_contentRating(::GlobalNamespace::PlayerSensitivityFlag value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___contentRating = value;
}
constexpr ::GlobalNamespace::IPreviewMediaData*& GlobalNamespace::BeatmapLevel::__cordl_internal_get_previewMediaData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewMediaData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewMediaData*> const& GlobalNamespace::BeatmapLevel::__cordl_internal_get_previewMediaData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previewMediaData;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_previewMediaData(::GlobalNamespace::IPreviewMediaData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___previewMediaData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                                ::GlobalNamespace::BeatmapBasicData*>*&
GlobalNamespace::BeatmapLevel::__cordl_internal_get_beatmapBasicData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapBasicData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyDictionary_2<
    ::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapBasicData*>*> const&
GlobalNamespace::BeatmapLevel::__cordl_internal_get_beatmapBasicData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapBasicData;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set_beatmapBasicData(
    ::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                          ::GlobalNamespace::BeatmapBasicData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___beatmapBasicData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*>&
GlobalNamespace::BeatmapLevel::__cordl_internal_get__characteristicsCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characteristicsCache;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> const&
GlobalNamespace::BeatmapLevel::__cordl_internal_get__characteristicsCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____characteristicsCache;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set__characteristicsCache(
    ::ArrayW<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::Array<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____characteristicsCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapKey, ::Array<::GlobalNamespace::BeatmapKey>*>& GlobalNamespace::BeatmapLevel::__cordl_internal_get__beatmapKeysCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKeysCache;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapKey, ::Array<::GlobalNamespace::BeatmapKey>*> const& GlobalNamespace::BeatmapLevel::__cordl_internal_get__beatmapKeysCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKeysCache;
}
constexpr void GlobalNamespace::BeatmapLevel::__cordl_internal_set__beatmapKeysCache(::ArrayW<::GlobalNamespace::BeatmapKey, ::Array<::GlobalNamespace::BeatmapKey>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapKeysCache)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::BeatmapLevel* GlobalNamespace::BeatmapLevel::New_ctor(
    bool hasPrecalculatedData, ::StringW levelID, ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::ArrayW<::StringW, ::Array<::StringW>*> allMappers,
    ::ArrayW<::StringW, ::Array<::StringW>*> allLighters, float_t beatsPerMinute, float_t integratedLufs, float_t songTimeOffset, float_t previewStartTime, float_t previewDuration,
    float_t songDuration, ::GlobalNamespace::PlayerSensitivityFlag contentRating, ::GlobalNamespace::IPreviewMediaData* previewMediaData,
    ::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                          ::GlobalNamespace::BeatmapBasicData*>* beatmapBasicData) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapLevel*>(hasPrecalculatedData, levelID, songName, songSubName, songAuthorName, allMappers, allLighters, beatsPerMinute,
                                                                                    integratedLufs, songTimeOffset, previewStartTime, previewDuration, songDuration, contentRating, previewMediaData,
                                                                                    beatmapBasicData));
}
inline void GlobalNamespace::BeatmapLevel::_ctor(
    bool hasPrecalculatedData, ::StringW levelID, ::StringW songName, ::StringW songSubName, ::StringW songAuthorName, ::ArrayW<::StringW, ::Array<::StringW>*> allMappers,
    ::ArrayW<::StringW, ::Array<::StringW>*> allLighters, float_t beatsPerMinute, float_t integratedLufs, float_t songTimeOffset, float_t previewStartTime, float_t previewDuration,
    float_t songDuration, ::GlobalNamespace::PlayerSensitivityFlag contentRating, ::GlobalNamespace::IPreviewMediaData* previewMediaData,
    ::System::Collections::Generic::IReadOnlyDictionary_2<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>,
                                                          ::GlobalNamespace::BeatmapBasicData*>* beatmapBasicData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 16>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerSensitivityFlag>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IPreviewMediaData*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IReadOnlyDictionary_2<
              ::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>, ::GlobalNamespace::BeatmapBasicData*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, hasPrecalculatedData, levelID, songName, songSubName, songAuthorName, allMappers, allLighters, beatsPerMinute,
                                                          integratedLufs, songTimeOffset, previewStartTime, previewDuration, songDuration, contentRating, previewMediaData, beatmapBasicData);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapDifficulty>* GlobalNamespace::BeatmapLevel::GetDifficulties(::GlobalNamespace::BeatmapCharacteristicSO* characteristic) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevel*>::get(), "GetDifficulties", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapDifficulty>*, false>(this, ___internal_method, characteristic);
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>* GlobalNamespace::BeatmapLevel::GetCharacteristics() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevel*>::get(), "GetCharacteristics",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>>*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapKey>* GlobalNamespace::BeatmapLevel::GetBeatmapKeys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevel*>::get(), "GetBeatmapKeys",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapKey>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapBasicData* GlobalNamespace::BeatmapLevel::GetDifficultyBeatmapData(::GlobalNamespace::BeatmapCharacteristicSO* characteristic,
                                                                                                    ::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevel*>::get(), "GetDifficultyBeatmapData", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapBasicData*, false>(this, ___internal_method, characteristic, difficulty);
}
inline ::GlobalNamespace::EnvironmentName GlobalNamespace::BeatmapLevel::GetEnvironmentName(::GlobalNamespace::BeatmapCharacteristicSO* characteristic,
                                                                                            ::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevel*>::get(), "GetEnvironmentName", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentName, false>(this, ___internal_method, characteristic, difficulty);
}
inline ::GlobalNamespace::ColorScheme* GlobalNamespace::BeatmapLevel::GetColorScheme(::GlobalNamespace::BeatmapCharacteristicSO* characteristic, ::GlobalNamespace::BeatmapDifficulty difficulty) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevel*>::get(), "GetColorScheme", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficulty>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorScheme*, false>(this, ___internal_method, characteristic, difficulty);
}
inline ::GlobalNamespace::BeatmapKey
GlobalNamespace::BeatmapLevel::_GetBeatmapKeys_b__21_0(::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty> entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevel*>::get(), "<GetBeatmapKeys>b__21_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKey, false>(this, ___internal_method, entry);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevel::BeatmapLevel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
