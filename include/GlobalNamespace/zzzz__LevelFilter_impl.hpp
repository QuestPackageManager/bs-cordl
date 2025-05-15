#pragma once
// IWYU pragma private; include "GlobalNamespace/LevelFilter.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_impl.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSensitivityFlag_impl.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__LevelFilter_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCharacteristicSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__IEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__LevelFilter_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Comparison_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LevelFilter___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilter___c::*)()>(&::GlobalNamespace::LevelFilter___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26cfe64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter___c._FilterLevelByText_b__15_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<int32_t (::GlobalNamespace::LevelFilter___c::*)(::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>, ::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>)>(
        &::GlobalNamespace::LevelFilter___c::_FilterLevelByText_b__15_0)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26cfe6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter___c*>::get(), "<FilterLevelByText>b__15_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelFilter___c::setStaticF___9(::GlobalNamespace::LevelFilter___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::LevelFilter___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter___c*>::get>(
      std::forward<::GlobalNamespace::LevelFilter___c*>(value));
}
inline ::GlobalNamespace::LevelFilter___c* GlobalNamespace::LevelFilter___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::LevelFilter___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter___c*>::get>();
}
inline void GlobalNamespace::LevelFilter___c::setStaticF___9__15_0(::System::Comparison_1<::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>>* value) {
  ::cordl_internals::setStaticField<::System::Comparison_1<::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>>*, "<>9__15_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter___c*>::get>(
      std::forward<::System::Comparison_1<::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>>*>(value));
}
inline ::System::Comparison_1<::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>>* GlobalNamespace::LevelFilter___c::getStaticF___9__15_0() {
  return ::cordl_internals::getStaticField<::System::Comparison_1<::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>>*, "<>9__15_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter___c*>::get>();
}
inline void GlobalNamespace::LevelFilter___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t GlobalNamespace::LevelFilter___c::_FilterLevelByText_b__15_0(::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*> x,
                                                                            ::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*> y) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter___c*>::get(), "<FilterLevelByText>b__15_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<int32_t, ::GlobalNamespace::BeatmapLevel*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, x, y);
}
inline ::GlobalNamespace::LevelFilter___c* GlobalNamespace::LevelFilter___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LevelFilter___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelFilter___c::LevelFilter___c() {}
//  Writing Method size for method: ::GlobalNamespace::LevelFilter___c__DisplayClass14_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilter___c__DisplayClass14_0::*)()>(
    &::GlobalNamespace::LevelFilter___c__DisplayClass14_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26cfc9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter___c__DisplayClass14_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter___c__DisplayClass14_0._FilterLevelsAsync_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::LevelFilter___c__DisplayClass14_0::*)(::GlobalNamespace::BeatmapCharacteristicSO*)>(
    &::GlobalNamespace::LevelFilter___c__DisplayClass14_0::_FilterLevelsAsync_b__3)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26cfe90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter___c__DisplayClass14_0*>::get(), "<FilterLevelsAsync>b__3", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::LevelFilter___c__DisplayClass14_0::__cordl_internal_get_characteristicFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristicFilter;
}
constexpr ::StringW const& GlobalNamespace::LevelFilter___c__DisplayClass14_0::__cordl_internal_get_characteristicFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristicFilter;
}
constexpr void GlobalNamespace::LevelFilter___c__DisplayClass14_0::__cordl_internal_set_characteristicFilter(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___characteristicFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LevelFilter___c__DisplayClass14_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter___c__DisplayClass14_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::LevelFilter___c__DisplayClass14_0::_FilterLevelsAsync_b__3(::GlobalNamespace::BeatmapCharacteristicSO* characteristic) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter___c__DisplayClass14_0*>::get(), "<FilterLevelsAsync>b__3", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCharacteristicSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, characteristic);
}
inline ::GlobalNamespace::LevelFilter___c__DisplayClass14_0* GlobalNamespace::LevelFilter___c__DisplayClass14_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LevelFilter___c__DisplayClass14_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelFilter___c__DisplayClass14_0::LevelFilter___c__DisplayClass14_0() {}
//  Writing Method size for method: ::GlobalNamespace::LevelFilter___c__DisplayClass14_1._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilter___c__DisplayClass14_1::*)()>(
    &::GlobalNamespace::LevelFilter___c__DisplayClass14_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26cfe00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter___c__DisplayClass14_1*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter___c__DisplayClass14_1._FilterLevelsAsync_b__4
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (::GlobalNamespace::LevelFilter___c__DisplayClass14_1::*)(::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>)>(
        &::GlobalNamespace::LevelFilter___c__DisplayClass14_1::_FilterLevelsAsync_b__4)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x26cfeb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter___c__DisplayClass14_1*>::get(), "<FilterLevelsAsync>b__4", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapDifficultyMask& GlobalNamespace::LevelFilter___c__DisplayClass14_1::__cordl_internal_get_difficultyFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficultyFilter;
}
constexpr ::GlobalNamespace::BeatmapDifficultyMask const& GlobalNamespace::LevelFilter___c__DisplayClass14_1::__cordl_internal_get_difficultyFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___difficultyFilter;
}
constexpr void GlobalNamespace::LevelFilter___c__DisplayClass14_1::__cordl_internal_set_difficultyFilter(::GlobalNamespace::BeatmapDifficultyMask value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___difficultyFilter = value;
}
constexpr ::StringW& GlobalNamespace::LevelFilter___c__DisplayClass14_1::__cordl_internal_get_characteristicFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristicFilter;
}
constexpr ::StringW const& GlobalNamespace::LevelFilter___c__DisplayClass14_1::__cordl_internal_get_characteristicFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___characteristicFilter;
}
constexpr void GlobalNamespace::LevelFilter___c__DisplayClass14_1::__cordl_internal_set_characteristicFilter(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___characteristicFilter)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::LevelFilter___c__DisplayClass14_1::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter___c__DisplayClass14_1*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool
GlobalNamespace::LevelFilter___c__DisplayClass14_1::_FilterLevelsAsync_b__4(::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty> entry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter___c__DisplayClass14_1*>::get(), "<FilterLevelsAsync>b__4", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ValueTuple_2<::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>, ::GlobalNamespace::BeatmapDifficulty>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, entry);
}
inline ::GlobalNamespace::LevelFilter___c__DisplayClass14_1* GlobalNamespace::LevelFilter___c__DisplayClass14_1::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::LevelFilter___c__DisplayClass14_1*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelFilter___c__DisplayClass14_1::LevelFilter___c__DisplayClass14_1() {}
//  Writing Method size for method: ::GlobalNamespace::LevelFilter.IsWithoutFilter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::GlobalNamespace::LevelFilter>, bool)>(&::GlobalNamespace::LevelFilter::IsWithoutFilter)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x26ced30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(), "IsWithoutFilter", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::LevelFilter>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter.FilterLevelsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<
    ::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>>* (*)(::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>,
                                                                                        ::GlobalNamespace::LevelFilter, ::GlobalNamespace::PlayerDataModel*, ::GlobalNamespace::IEntitlementModel*,
                                                                                        ::System::Threading::CancellationToken)>(&::GlobalNamespace::LevelFilter::FilterLevelsAsync)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x26cede0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(), "FilterLevelsAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 5>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelFilter>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEntitlementModel*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter.FilterLevelsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::ArrayW<
    ::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>>* (*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>*,
                                                                                        ::GlobalNamespace::LevelFilter, ::GlobalNamespace::PlayerDataModel*, ::GlobalNamespace::IEntitlementModel*,
                                                                                        ::System::Threading::CancellationToken)>(&::GlobalNamespace::LevelFilter::FilterLevelsAsync)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x26cefbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(), "FilterLevelsAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelFilter>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEntitlementModel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter.FilterLevelByText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* (*)(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*,
                                                                                              ::ArrayW<::StringW, ::Array<::StringW>*>)>(&::GlobalNamespace::LevelFilter::FilterLevelByText)> {
  constexpr static std::size_t size = 0x53c;
  constexpr static std::size_t addrs = 0x26cf0e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(), "FilterLevelByText", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter.CleanText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::LevelFilter::CleanText)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x26cf620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(), "CleanText", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter._FilterLevelsAsync_g__HasPlayedAnyDifficulty_14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::PlayerDataModel*)>(
    &::GlobalNamespace::LevelFilter::_FilterLevelsAsync_g__HasPlayedAnyDifficulty_14_0)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x26cf864;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(), "<FilterLevelsAsync>g__HasPlayedAnyDifficulty|14_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter._FilterLevelsAsync_g__MatchesCharacteristic_14_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::BeatmapLevel*, ::StringW)>(
    &::GlobalNamespace::LevelFilter::_FilterLevelsAsync_g__MatchesCharacteristic_14_1)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x26cfbb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(), "<FilterLevelsAsync>g__MatchesCharacteristic|14_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter._FilterLevelsAsync_g__MatchesDifficulty_14_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::BeatmapDifficultyMask, ::StringW)>(
    &::GlobalNamespace::LevelFilter::_FilterLevelsAsync_g__MatchesDifficulty_14_2)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x26cfca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(), "<FilterLevelsAsync>g__MatchesDifficulty|14_2", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter._FilterLevelByText_g__CalculateMatchScore_15_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::StringW, ::ArrayW<::StringW, ::Array<::StringW>*>)>(
    &::GlobalNamespace::LevelFilter::_FilterLevelByText_g__CalculateMatchScore_15_1)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x26cf6a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(), "<FilterLevelByText>g__CalculateMatchScore|15_1", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelFilter::setStaticF_bpmOptions(::ArrayW<float_t, ::Array<float_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<float_t, ::Array<float_t>*>, "bpmOptions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get>(
      std::forward<::ArrayW<float_t, ::Array<float_t>*>>(value));
}
inline ::ArrayW<float_t, ::Array<float_t>*> GlobalNamespace::LevelFilter::getStaticF_bpmOptions() {
  return ::cordl_internals::getStaticField<::ArrayW<float_t, ::Array<float_t>*>, "bpmOptions", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get>();
}
inline bool GlobalNamespace::LevelFilter::IsWithoutFilter(::ByRef<::GlobalNamespace::LevelFilter> filter, bool ignoreFilterBySongs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(), "IsWithoutFilter", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::LevelFilter>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, filter, ignoreFilterBySongs);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>>*
GlobalNamespace::LevelFilter::FilterLevelsAsync(::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*> packs, ::GlobalNamespace::LevelFilter filter,
                                                ::GlobalNamespace::PlayerDataModel* playerDataModel, ::GlobalNamespace::IEntitlementModel* levelsModel,
                                                ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(), "FilterLevelsAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::BeatmapLevelPack*, ::Array<::GlobalNamespace::BeatmapLevelPack*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelFilter>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEntitlementModel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>>*, false>(
      nullptr, ___internal_method, packs, filter, playerDataModel, levelsModel, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>>*
GlobalNamespace::LevelFilter::FilterLevelsAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* beatmapLevels, ::GlobalNamespace::LevelFilter filter,
                                                ::GlobalNamespace::PlayerDataModel* playerDataModel, ::GlobalNamespace::IEntitlementModel* levelsModel,
                                                ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(), "FilterLevelsAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::LevelFilter>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IEntitlementModel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>>*, false>(
      nullptr, ___internal_method, beatmapLevels, filter, playerDataModel, levelsModel, cancellationToken);
}
inline ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*
GlobalNamespace::LevelFilter::FilterLevelByText(::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* levels, ::ArrayW<::StringW, ::Array<::StringW>*> searchTerms) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(), "FilterLevelByText", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*, false>(nullptr, ___internal_method, levels, searchTerms);
}
inline ::StringW GlobalNamespace::LevelFilter::CleanText(::StringW s) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(), "CleanText", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, s);
}
inline bool GlobalNamespace::LevelFilter::_FilterLevelsAsync_g__HasPlayedAnyDifficulty_14_0(::GlobalNamespace::BeatmapLevel* level, ::GlobalNamespace::PlayerDataModel* playerDataModel) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(), "<FilterLevelsAsync>g__HasPlayedAnyDifficulty|14_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerDataModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, level, playerDataModel);
}
inline bool GlobalNamespace::LevelFilter::_FilterLevelsAsync_g__MatchesCharacteristic_14_1(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::StringW characteristicFilter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(), "<FilterLevelsAsync>g__MatchesCharacteristic|14_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, beatmapLevel, characteristicFilter);
}
inline bool GlobalNamespace::LevelFilter::_FilterLevelsAsync_g__MatchesDifficulty_14_2(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapDifficultyMask difficultyFilter,
                                                                                       ::StringW characteristicFilter) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(), "<FilterLevelsAsync>g__MatchesDifficulty|14_2", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevel*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapDifficultyMask>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, beatmapLevel, difficultyFilter, characteristicFilter);
}
inline int32_t GlobalNamespace::LevelFilter::_FilterLevelByText_g__CalculateMatchScore_15_1(::StringW levelString, ::ArrayW<::StringW, ::Array<::StringW>*> searchTerms) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter>::get(), "<FilterLevelByText>g__CalculateMatchScore|15_1", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW, ::Array<::StringW>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, levelString, searchTerms);
}
// Ctor Parameters [CppParam { name: "songOwned", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "songNotOwned", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "songUnplayed", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "difficulties", ty: "::GlobalNamespace::BeatmapDifficultyMask", modifiers: "", def_value: Some("{}") },
// CppParam { name: "songPacks", ty: "::GlobalNamespace::SongPackMask", modifiers: "", def_value: Some("{}") }, CppParam { name: "characteristicSerializedName", ty: "::StringW", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "minBpm", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxBpm", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam
// { name: "sensitivity", ty: "::GlobalNamespace::PlayerSensitivityFlag", modifiers: "", def_value: Some("{}") }, CppParam { name: "searchText", ty: "::StringW", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "limitIds", ty: "::ArrayW<::StringW,::Array<::StringW>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::LevelFilter::LevelFilter(bool songOwned, bool songNotOwned, bool songUnplayed, ::GlobalNamespace::BeatmapDifficultyMask difficulties,
                                                      ::GlobalNamespace::SongPackMask songPacks, ::StringW characteristicSerializedName, float_t minBpm, float_t maxBpm,
                                                      ::GlobalNamespace::PlayerSensitivityFlag sensitivity, ::StringW searchText, ::ArrayW<::StringW, ::Array<::StringW>*> limitIds) noexcept {
  this->songOwned = songOwned;
  this->songNotOwned = songNotOwned;
  this->songUnplayed = songUnplayed;
  this->difficulties = difficulties;
  this->songPacks = songPacks;
  this->characteristicSerializedName = characteristicSerializedName;
  this->minBpm = minBpm;
  this->maxBpm = maxBpm;
  this->sensitivity = sensitivity;
  this->searchText = searchText;
  this->limitIds = limitIds;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelFilter::LevelFilter() {}
//  Writing Method size for method: ::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14::*)()>(
    &::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14::MoveNext)> {
  constexpr static std::size_t size = 0x90c;
  constexpr static std::size_t addrs = 0x26cff14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14::SetStateMachine)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x26d0820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<::GlobalNamespace::BeatmapLevel*,::Array<::GlobalNamespace::BeatmapLevel*>*>>", modifiers: "", def_value: Some("{}") },
// CppParam { name: "beatmapLevels", ty: "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "filter", ty:
// "::GlobalNamespace::LevelFilter", modifiers: "", def_value: Some("{}") }, CppParam { name: "levelsModel", ty: "::GlobalNamespace::IEntitlementModel*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "playerDataModel", ty:
// "::UnityW<::GlobalNamespace::PlayerDataModel>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_filteredLevels_5__2", ty:
// "::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap2", ty:
// "::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevel*>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_level_5__4", ty: "::GlobalNamespace::BeatmapLevel*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14::LevelFilter__FilterLevelsAsync_d__14(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::ArrayW<::GlobalNamespace::BeatmapLevel*, ::Array<::GlobalNamespace::BeatmapLevel*>*>> __t__builder,
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::BeatmapLevel*>* beatmapLevels, ::GlobalNamespace::LevelFilter filter, ::GlobalNamespace::IEntitlementModel* levelsModel,
    ::System::Threading::CancellationToken cancellationToken, ::UnityW<::GlobalNamespace::PlayerDataModel> playerDataModel,
    ::System::Collections::Generic::List_1<::GlobalNamespace::BeatmapLevel*>* _filteredLevels_5__2, ::System::Collections::Generic::IEnumerator_1<::GlobalNamespace::BeatmapLevel*>* __7__wrap2,
    ::GlobalNamespace::BeatmapLevel* _level_5__4, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->beatmapLevels = beatmapLevels;
  this->filter = filter;
  this->levelsModel = levelsModel;
  this->cancellationToken = cancellationToken;
  this->playerDataModel = playerDataModel;
  this->_filteredLevels_5__2 = _filteredLevels_5__2;
  this->__7__wrap2 = __7__wrap2;
  this->_level_5__4 = _level_5__4;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LevelFilter__FilterLevelsAsync_d__14::LevelFilter__FilterLevelsAsync_d__14() {}
