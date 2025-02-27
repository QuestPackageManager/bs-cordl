#pragma once
// IWYU pragma private; include "GlobalNamespace/StandaloneMonobehaviorExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StandaloneMonobehaviorExtensions_def.hpp"
#include "GlobalNamespace/zzzz__IStandaloneMonobehavior_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandaloneMonobehaviorExtensions.Dispatch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::IStandaloneMonobehavior*, ::System::Action*)>(
    &::GlobalNamespace::StandaloneMonobehaviorExtensions::Dispatch)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22d3528;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehaviorExtensions*>::get(), "Dispatch", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IStandaloneMonobehavior*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandaloneMonobehaviorExtensions.DispatchAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (*)(::GlobalNamespace::IStandaloneMonobehavior*, ::System::Func_1<::System::Threading::Tasks::Task*>*)>(
        &::GlobalNamespace::StandaloneMonobehaviorExtensions::DispatchAsync)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x22d35cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehaviorExtensions*>::get(), "DispatchAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IStandaloneMonobehavior*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Threading::Tasks::Task*>*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StandaloneMonobehaviorExtensions::Dispatch(::GlobalNamespace::IStandaloneMonobehavior* standaloneMonoBehavior, ::System::Action* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehaviorExtensions*>::get(), "Dispatch", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IStandaloneMonobehavior*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, standaloneMonoBehavior, action);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::StandaloneMonobehaviorExtensions::DispatchAsync(::GlobalNamespace::IStandaloneMonobehavior* standaloneMonoBehavior,
                                                                                                          ::System::Func_1<::System::Threading::Tasks::Task*>* action) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::StandaloneMonobehaviorExtensions*>::get(), "DispatchAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IStandaloneMonobehavior*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Func_1<::System::Threading::Tasks::Task*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, standaloneMonoBehavior, action);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandaloneMonobehaviorExtensions::StandaloneMonobehaviorExtensions() {}
