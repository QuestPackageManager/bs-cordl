#pragma once
// IWYU pragma private; include "GlobalNamespace/MockMultiplayerStatusModel.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerStatusModel_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockMultiplayerStatusModel_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockMultiplayerStatusModel.GetMultiplayerStatusAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* (
    ::GlobalNamespace::MockMultiplayerStatusModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::MockMultiplayerStatusModel::GetMultiplayerStatusAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3bc2eb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockMultiplayerStatusModel*>::get(), "GetMultiplayerStatusAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockMultiplayerStatusModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockMultiplayerStatusModel::*)()>(&::GlobalNamespace::MockMultiplayerStatusModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3bc2f28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockMultiplayerStatusModel*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MultiplayerStatusData*& GlobalNamespace::MockMultiplayerStatusModel::__cordl_internal_get__multiplayerStatusData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerStatusData;
}
constexpr ::GlobalNamespace::MultiplayerStatusData* const& GlobalNamespace::MockMultiplayerStatusModel::__cordl_internal_get__multiplayerStatusData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerStatusData;
}
constexpr void GlobalNamespace::MockMultiplayerStatusModel::__cordl_internal_set__multiplayerStatusData(::GlobalNamespace::MultiplayerStatusData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerStatusData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*
GlobalNamespace::MockMultiplayerStatusModel::GetMultiplayerStatusAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockMultiplayerStatusModel*>::get(), "GetMultiplayerStatusAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*, false>(this, ___internal_method, cancellationToken);
}
inline void GlobalNamespace::MockMultiplayerStatusModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockMultiplayerStatusModel*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::MockMultiplayerStatusModel* GlobalNamespace::MockMultiplayerStatusModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MockMultiplayerStatusModel*>());
}
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerStatusModel"
constexpr GlobalNamespace::MockMultiplayerStatusModel::operator ::GlobalNamespace::IMultiplayerStatusModel*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerStatusModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IMultiplayerStatusModel"
constexpr ::GlobalNamespace::IMultiplayerStatusModel* GlobalNamespace::MockMultiplayerStatusModel::i___GlobalNamespace__IMultiplayerStatusModel() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerStatusModel*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockMultiplayerStatusModel::MockMultiplayerStatusModel() {}
