#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MockQuickPlaySetupModel_def.hpp"
#include "GlobalNamespace/zzzz__IQuickPlaySetupModel_def.hpp"
#include "GlobalNamespace/zzzz__QuickPlaySetupData_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockQuickPlaySetupModel.GetQuickPlaySetupAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>* (
    ::GlobalNamespace::MockQuickPlaySetupModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::MockQuickPlaySetupModel::GetQuickPlaySetupAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x27050d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockQuickPlaySetupModel*>::get(), "GetQuickPlaySetupAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockQuickPlaySetupModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockQuickPlaySetupModel::*)()>(&::GlobalNamespace::MockQuickPlaySetupModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2705144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockQuickPlaySetupModel*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IQuickPlaySetupModel"
constexpr GlobalNamespace::MockQuickPlaySetupModel::operator ::GlobalNamespace::IQuickPlaySetupModel*() noexcept {
  return static_cast<::GlobalNamespace::IQuickPlaySetupModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IQuickPlaySetupModel"
constexpr ::GlobalNamespace::IQuickPlaySetupModel* GlobalNamespace::MockQuickPlaySetupModel::i___GlobalNamespace__IQuickPlaySetupModel() noexcept {
  return static_cast<::GlobalNamespace::IQuickPlaySetupModel*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::QuickPlaySetupData*& GlobalNamespace::MockQuickPlaySetupModel::__cordl_internal_get__quickPlaySetupData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quickPlaySetupData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::QuickPlaySetupData*> const& GlobalNamespace::MockQuickPlaySetupModel::__cordl_internal_get__quickPlaySetupData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____quickPlaySetupData;
}
constexpr void GlobalNamespace::MockQuickPlaySetupModel::__cordl_internal_set__quickPlaySetupData(::GlobalNamespace::QuickPlaySetupData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____quickPlaySetupData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*
GlobalNamespace::MockQuickPlaySetupModel::GetQuickPlaySetupAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockQuickPlaySetupModel*>::get(), "GetQuickPlaySetupAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::QuickPlaySetupData*>*, false>(this, ___internal_method, cancellationToken);
}
inline ::GlobalNamespace::MockQuickPlaySetupModel* GlobalNamespace::MockQuickPlaySetupModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MockQuickPlaySetupModel*>());
}
inline void GlobalNamespace::MockQuickPlaySetupModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockQuickPlaySetupModel*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockQuickPlaySetupModel::MockQuickPlaySetupModel() {}
