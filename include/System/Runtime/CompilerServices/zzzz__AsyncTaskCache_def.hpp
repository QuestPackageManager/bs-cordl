#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AsyncTaskCache)
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
// Forward declare root types
namespace System::Runtime::CompilerServices {
class AsyncTaskCache;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::CompilerServices::AsyncTaskCache);
// Type: System.Runtime.CompilerServices::AsyncTaskCache
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Runtime::CompilerServices {
// Is value type: false
// CS Name: ::System.Runtime.CompilerServices::AsyncTaskCache*
class CORDL_TYPE AsyncTaskCache : public ::System::Object {
public:
  // Declarations
  /// @brief Field FalseTask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_FalseTask, put = setStaticF_FalseTask))::System::Threading::Tasks::Task_1<bool>* FalseTask;

  /// @brief Field Int32Tasks, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Int32Tasks,
                             put = setStaticF_Int32Tasks))::ArrayW<::System::Threading::Tasks::Task_1<int32_t>*, ::Array<::System::Threading::Tasks::Task_1<int32_t>*>*> Int32Tasks;

  /// @brief Field TrueTask, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TrueTask, put = setStaticF_TrueTask))::System::Threading::Tasks::Task_1<bool>* TrueTask;

  /// @brief Method CreateCacheableTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TResult> static inline ::System::Threading::Tasks::Task_1<TResult>* CreateCacheableTask(TResult result);

  /// @brief Method CreateInt32Tasks, addr 0x2758238, size 0x108, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Threading::Tasks::Task_1<int32_t>*, ::Array<::System::Threading::Tasks::Task_1<int32_t>*>*> CreateInt32Tasks();

  static inline ::System::Threading::Tasks::Task_1<bool>* getStaticF_FalseTask();

  static inline ::ArrayW<::System::Threading::Tasks::Task_1<int32_t>*, ::Array<::System::Threading::Tasks::Task_1<int32_t>*>*> getStaticF_Int32Tasks();

  static inline ::System::Threading::Tasks::Task_1<bool>* getStaticF_TrueTask();

  static inline void setStaticF_FalseTask(::System::Threading::Tasks::Task_1<bool>* value);

  static inline void setStaticF_Int32Tasks(::ArrayW<::System::Threading::Tasks::Task_1<int32_t>*, ::Array<::System::Threading::Tasks::Task_1<int32_t>*>*> value);

  static inline void setStaticF_TrueTask(::System::Threading::Tasks::Task_1<bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AsyncTaskCache();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AsyncTaskCache", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AsyncTaskCache(AsyncTaskCache&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AsyncTaskCache", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AsyncTaskCache(AsyncTaskCache const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::CompilerServices::AsyncTaskCache, 0x10>, "Size mismatch!");

} // namespace System::Runtime::CompilerServices
NEED_NO_BOX(::System::Runtime::CompilerServices::AsyncTaskCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::CompilerServices::AsyncTaskCache*, "System.Runtime.CompilerServices", "AsyncTaskCache");
