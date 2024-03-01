#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NoExperimentModel_def.hpp"
#include "GlobalNamespace/zzzz__IExperimentData_def.hpp"
#include "GlobalNamespace/zzzz__IExperimentModel_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoExperimentModel.IsEmployee
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::NoExperimentModel::*)()>(
    &::GlobalNamespace::NoExperimentModel::IsEmployee)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x12aa1cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoExperimentModel*>::get(), "IsEmployee",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoExperimentModel.IsInTest
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::NoExperimentModel::*)(::GlobalNamespace::IExperimentData*)>(&::GlobalNamespace::NoExperimentModel::IsInTest)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x12aa234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoExperimentModel*>::get(), "IsInTest", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IExperimentData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoExperimentModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoExperimentModel::*)()>(&::GlobalNamespace::NoExperimentModel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12aa29c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoExperimentModel*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IExperimentModel"
constexpr GlobalNamespace::NoExperimentModel::operator ::GlobalNamespace::IExperimentModel*() noexcept {
  return static_cast<::GlobalNamespace::IExperimentModel*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IExperimentModel"
constexpr ::GlobalNamespace::IExperimentModel* GlobalNamespace::NoExperimentModel::i___GlobalNamespace__IExperimentModel() noexcept {
  return static_cast<::GlobalNamespace::IExperimentModel*>(static_cast<void*>(this));
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::NoExperimentModel::IsEmployee() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoExperimentModel*>::get(), "IsEmployee",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::NoExperimentModel::IsInTest(::GlobalNamespace::IExperimentData* data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoExperimentModel*>::get(), "IsInTest", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IExperimentData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, data);
}
inline ::GlobalNamespace::NoExperimentModel* GlobalNamespace::NoExperimentModel::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NoExperimentModel*>());
}
inline void GlobalNamespace::NoExperimentModel::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoExperimentModel*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoExperimentModel::NoExperimentModel() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
