#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockMultiplayerStatusModel_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerStatusModel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerStatusData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockMultiplayerStatusModel.GetMultiplayerStatusAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>* (
    ::GlobalNamespace::MockMultiplayerStatusModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::MockMultiplayerStatusModel::GetMultiplayerStatusAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x23df8fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockMultiplayerStatusModel*>::get(), "GetMultiplayerStatusAsync", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockMultiplayerStatusModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockMultiplayerStatusModel::*)()>(&::GlobalNamespace::MockMultiplayerStatusModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x23df96c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockMultiplayerStatusModel*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IMultiplayerStatusModel"
constexpr GlobalNamespace::MockMultiplayerStatusModel::operator ::GlobalNamespace::IMultiplayerStatusModel*() noexcept {
  return static_cast<::GlobalNamespace::IMultiplayerStatusModel*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::MultiplayerStatusData*& GlobalNamespace::MockMultiplayerStatusModel::__get__multiplayerStatusData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerStatusData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerStatusData*> const& GlobalNamespace::MockMultiplayerStatusModel::__get__multiplayerStatusData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____multiplayerStatusData;
}
constexpr void GlobalNamespace::MockMultiplayerStatusModel::__set__multiplayerStatusData(::GlobalNamespace::MultiplayerStatusData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____multiplayerStatusData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*
GlobalNamespace::MockMultiplayerStatusModel::GetMultiplayerStatusAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockMultiplayerStatusModel*>::get(), "GetMultiplayerStatusAsync", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::MultiplayerStatusData*>*, false>(this, ___internal_method, cancellationToken);
}
inline ::GlobalNamespace::MockMultiplayerStatusModel* GlobalNamespace::MockMultiplayerStatusModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::MockMultiplayerStatusModel*>());
}
inline void GlobalNamespace::MockMultiplayerStatusModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockMultiplayerStatusModel*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockMultiplayerStatusModel::MockMultiplayerStatusModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
