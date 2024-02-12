#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskCache_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncTaskCache.CreateInt32Tasks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::ArrayW<::System::Threading::Tasks::Task_1<int32_t>*, ::Array<::System::Threading::Tasks::Task_1<int32_t>*>*> (*)()>(
    &::System::Runtime::CompilerServices::AsyncTaskCache::CreateInt32Tasks)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x24fcca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskCache*>::get(),
                                                                               "CreateInt32Tasks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::AsyncTaskCache::setStaticF_TrueTask(::System::Threading::Tasks::Task_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<bool>*, "TrueTask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskCache*>::get>(
      std::forward<::System::Threading::Tasks::Task_1<bool>*>(value));
}
inline ::System::Threading::Tasks::Task_1<bool>* System::Runtime::CompilerServices::AsyncTaskCache::getStaticF_TrueTask() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<bool>*, "TrueTask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskCache*>::get>();
}
inline void System::Runtime::CompilerServices::AsyncTaskCache::setStaticF_FalseTask(::System::Threading::Tasks::Task_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<bool>*, "FalseTask",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskCache*>::get>(
      std::forward<::System::Threading::Tasks::Task_1<bool>*>(value));
}
inline ::System::Threading::Tasks::Task_1<bool>* System::Runtime::CompilerServices::AsyncTaskCache::getStaticF_FalseTask() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<bool>*, "FalseTask",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskCache*>::get>();
}
inline void
System::Runtime::CompilerServices::AsyncTaskCache::setStaticF_Int32Tasks(::ArrayW<::System::Threading::Tasks::Task_1<int32_t>*, ::Array<::System::Threading::Tasks::Task_1<int32_t>*>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Threading::Tasks::Task_1<int32_t>*, ::Array<::System::Threading::Tasks::Task_1<int32_t>*>*>, "Int32Tasks",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskCache*>::get>(
      std::forward<::ArrayW<::System::Threading::Tasks::Task_1<int32_t>*, ::Array<::System::Threading::Tasks::Task_1<int32_t>*>*>>(value));
}
inline ::ArrayW<::System::Threading::Tasks::Task_1<int32_t>*, ::Array<::System::Threading::Tasks::Task_1<int32_t>*>*> System::Runtime::CompilerServices::AsyncTaskCache::getStaticF_Int32Tasks() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Threading::Tasks::Task_1<int32_t>*, ::Array<::System::Threading::Tasks::Task_1<int32_t>*>*>, "Int32Tasks",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskCache*>::get>();
}
inline ::ArrayW<::System::Threading::Tasks::Task_1<int32_t>*, ::Array<::System::Threading::Tasks::Task_1<int32_t>*>*> System::Runtime::CompilerServices::AsyncTaskCache::CreateInt32Tasks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskCache*>::get(),
                                                                             "CreateInt32Tasks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Threading::Tasks::Task_1<int32_t>*, ::Array<::System::Threading::Tasks::Task_1<int32_t>*>*>, false>(nullptr, ___internal_method);
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Runtime::CompilerServices::AsyncTaskCache::CreateCacheableTask(TResult result) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::CompilerServices::AsyncTaskCache*>::get(), "CreateCacheableTask",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<TResult>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TResult>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*, false>(nullptr, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::AsyncTaskCache::AsyncTaskCache() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif
