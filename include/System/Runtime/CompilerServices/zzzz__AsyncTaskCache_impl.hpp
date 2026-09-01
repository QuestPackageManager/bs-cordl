#pragma once
// IWYU pragma private; include "System\Runtime\CompilerServices\AsyncTaskCache.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskCache_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::System::Runtime::CompilerServices::AsyncTaskCache.CreateInt32Tasks
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Threading::Tasks::Task_1<int32_t>*> (*)()>(&::System::Runtime::CompilerServices::AsyncTaskCache::CreateInt32Tasks)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5b71db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskCache*>(), { "CreateInt32Tasks", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::CompilerServices::AsyncTaskCache::setStaticF_TrueTask(::System::Threading::Tasks::Task_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<bool>*, "TrueTask", ::System::Runtime::CompilerServices::AsyncTaskCache*>(
      std::forward<::System::Threading::Tasks::Task_1<bool>*>(value));
}
inline ::System::Threading::Tasks::Task_1<bool>* System::Runtime::CompilerServices::AsyncTaskCache::getStaticF_TrueTask() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<bool>*, "TrueTask", ::System::Runtime::CompilerServices::AsyncTaskCache*>();
}
inline void System::Runtime::CompilerServices::AsyncTaskCache::setStaticF_FalseTask(::System::Threading::Tasks::Task_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Threading::Tasks::Task_1<bool>*, "FalseTask", ::System::Runtime::CompilerServices::AsyncTaskCache*>(
      std::forward<::System::Threading::Tasks::Task_1<bool>*>(value));
}
inline ::System::Threading::Tasks::Task_1<bool>* System::Runtime::CompilerServices::AsyncTaskCache::getStaticF_FalseTask() {
  return ::cordl_internals::getStaticField<::System::Threading::Tasks::Task_1<bool>*, "FalseTask", ::System::Runtime::CompilerServices::AsyncTaskCache*>();
}
inline void System::Runtime::CompilerServices::AsyncTaskCache::setStaticF_Int32Tasks(::ArrayW<::System::Threading::Tasks::Task_1<int32_t>*> value) {
  ::cordl_internals::setStaticField<::ArrayW<::System::Threading::Tasks::Task_1<int32_t>*>, "Int32Tasks", ::System::Runtime::CompilerServices::AsyncTaskCache*>(
      std::forward<::ArrayW<::System::Threading::Tasks::Task_1<int32_t>*>>(value));
}
inline ::ArrayW<::System::Threading::Tasks::Task_1<int32_t>*> System::Runtime::CompilerServices::AsyncTaskCache::getStaticF_Int32Tasks() {
  return ::cordl_internals::getStaticField<::ArrayW<::System::Threading::Tasks::Task_1<int32_t>*>, "Int32Tasks", ::System::Runtime::CompilerServices::AsyncTaskCache*>();
}
inline ::ArrayW<::System::Threading::Tasks::Task_1<int32_t>*> System::Runtime::CompilerServices::AsyncTaskCache::CreateInt32Tasks() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskCache*>(), { "CreateInt32Tasks", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Threading::Tasks::Task_1<int32_t>*>>(nullptr, ___internal_method);
}
template <typename TResult> inline ::System::Threading::Tasks::Task_1<TResult>* System::Runtime::CompilerServices::AsyncTaskCache::CreateCacheableTask(TResult result) {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::CompilerServices::AsyncTaskCache*>(),
                                                                                              { "CreateCacheableTask", { ::i2c::class_of<TResult>() }, { ::i2c::type_of<TResult>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<TResult>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<TResult>*>(nullptr, ___internal_method, result);
}
// Ctor Parameters []
constexpr ::System::Runtime::CompilerServices::AsyncTaskCache::AsyncTaskCache() {}
