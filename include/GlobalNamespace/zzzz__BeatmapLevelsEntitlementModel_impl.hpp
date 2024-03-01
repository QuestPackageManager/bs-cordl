#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__IAdditionalContentEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionSO_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsEntitlementModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelsEntitlementModel::*)(::GlobalNamespace::IAdditionalContentEntitlementModel*)>(
    &::GlobalNamespace::BeatmapLevelsEntitlementModel::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x12c94b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsEntitlementModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAdditionalContentEntitlementModel*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsEntitlementModel.AddPack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelsEntitlementModel::*)(::GlobalNamespace::PackDefinitionSO*)>(
    &::GlobalNamespace::BeatmapLevelsEntitlementModel::AddPack)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x12c955c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsEntitlementModel*>::get(), "AddPack", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PackDefinitionSO*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsEntitlementModel.GetLevelEntitlementStatusAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (
    ::GlobalNamespace::BeatmapLevelsEntitlementModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::BeatmapLevelsEntitlementModel::GetLevelEntitlementStatusAsync)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x12c989c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsEntitlementModel*>::get(), "GetLevelEntitlementStatusAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsEntitlementModel.GetLevelPackEntitlementStatusAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>* (
    ::GlobalNamespace::BeatmapLevelsEntitlementModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::BeatmapLevelsEntitlementModel::GetLevelPackEntitlementStatusAsync)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x12c99d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsEntitlementModel*>::get(), "GetLevelPackEntitlementStatusAsync",
                                                 std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IAdditionalContentEntitlementModel*& GlobalNamespace::BeatmapLevelsEntitlementModel::__cordl_internal_get__additionalContentEntitlementModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalContentEntitlementModel;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IAdditionalContentEntitlementModel*> const&
GlobalNamespace::BeatmapLevelsEntitlementModel::__cordl_internal_get__additionalContentEntitlementModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____additionalContentEntitlementModel;
}
constexpr void GlobalNamespace::BeatmapLevelsEntitlementModel::__cordl_internal_set__additionalContentEntitlementModel(::GlobalNamespace::IAdditionalContentEntitlementModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____additionalContentEntitlementModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::BeatmapLevelsEntitlementModel::__cordl_internal_get__alwaysOwnedBeatmapLevelIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alwaysOwnedBeatmapLevelIds;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const&
GlobalNamespace::BeatmapLevelsEntitlementModel::__cordl_internal_get__alwaysOwnedBeatmapLevelIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alwaysOwnedBeatmapLevelIds;
}
constexpr void GlobalNamespace::BeatmapLevelsEntitlementModel::__cordl_internal_set__alwaysOwnedBeatmapLevelIds(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____alwaysOwnedBeatmapLevelIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::StringW>*& GlobalNamespace::BeatmapLevelsEntitlementModel::__cordl_internal_get__alwaysOwnedPacksIds() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alwaysOwnedPacksIds;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::StringW>*> const&
GlobalNamespace::BeatmapLevelsEntitlementModel::__cordl_internal_get__alwaysOwnedPacksIds() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____alwaysOwnedPacksIds;
}
constexpr void GlobalNamespace::BeatmapLevelsEntitlementModel::__cordl_internal_set__alwaysOwnedPacksIds(::System::Collections::Generic::HashSet_1<::StringW>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____alwaysOwnedPacksIds)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::BeatmapLevelsEntitlementModel*
GlobalNamespace::BeatmapLevelsEntitlementModel::New_ctor(::GlobalNamespace::IAdditionalContentEntitlementModel* additionalContentEntitlementModel) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapLevelsEntitlementModel*>(additionalContentEntitlementModel));
}
inline void GlobalNamespace::BeatmapLevelsEntitlementModel::_ctor(::GlobalNamespace::IAdditionalContentEntitlementModel* additionalContentEntitlementModel) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsEntitlementModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IAdditionalContentEntitlementModel*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, additionalContentEntitlementModel);
}
inline void GlobalNamespace::BeatmapLevelsEntitlementModel::AddPack(::GlobalNamespace::PackDefinitionSO* pack) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsEntitlementModel*>::get(), "AddPack", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PackDefinitionSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pack);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*
GlobalNamespace::BeatmapLevelsEntitlementModel::GetLevelEntitlementStatusAsync(::StringW levelId, ::System::Threading::CancellationToken token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsEntitlementModel*>::get(), "GetLevelEntitlementStatusAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*, false>(this, ___internal_method, levelId, token);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*
GlobalNamespace::BeatmapLevelsEntitlementModel::GetLevelPackEntitlementStatusAsync(::StringW levelPackId, ::System::Threading::CancellationToken token) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsEntitlementModel*>::get(), "GetLevelPackEntitlementStatusAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::EntitlementStatus>*, false>(this, ___internal_method, levelPackId, token);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel::BeatmapLevelsEntitlementModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
