#pragma once
// IWYU pragma private; include "GlobalNamespace/SyncBackgroundCommand_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__IBackgroundCommand_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SyncBackgroundCommand_1)
namespace System::Threading::Tasks {
template <typename TResult> class TaskCompletionSource_1;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
// Forward declare root types
namespace GlobalNamespace {
template <typename T> class SyncBackgroundCommand_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::GlobalNamespace::SyncBackgroundCommand_1);
// Dependencies IBackgroundCommand, System.Object
namespace GlobalNamespace {
// cpp template
template <typename T>
// Is value type: false
// CS Name: SyncBackgroundCommand`1<T>
class CORDL_TYPE SyncBackgroundCommand_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field _taskCompletionSource, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__taskCompletionSource, put = __cordl_internal_set__taskCompletionSource)) ::System::Threading::Tasks::TaskCompletionSource_1<T>* _taskCompletionSource;

  __declspec(property(get = get_resultTask)) ::System::Threading::Tasks::Task_1<T>* resultTask;

  /// @brief Convert operator to "::GlobalNamespace::IBackgroundCommand"
  constexpr operator ::GlobalNamespace::IBackgroundCommand*() noexcept;

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* Execute();

  /// @brief Method ExecuteInternal, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T ExecuteInternal();

  static inline ::GlobalNamespace::SyncBackgroundCommand_1<T>* New_ctor();

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>* const& __cordl_internal_get__taskCompletionSource() const;

  constexpr ::System::Threading::Tasks::TaskCompletionSource_1<T>*& __cordl_internal_get__taskCompletionSource();

  constexpr void __cordl_internal_set__taskCompletionSource(::System::Threading::Tasks::TaskCompletionSource_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_resultTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<T>* get_resultTask();

  /// @brief Convert to "::GlobalNamespace::IBackgroundCommand"
  constexpr ::GlobalNamespace::IBackgroundCommand* i___GlobalNamespace__IBackgroundCommand() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SyncBackgroundCommand_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SyncBackgroundCommand_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SyncBackgroundCommand_1(SyncBackgroundCommand_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SyncBackgroundCommand_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SyncBackgroundCommand_1(SyncBackgroundCommand_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17121 };

  /// @brief Field _taskCompletionSource, offset: 0x10, size: 0x8, def value: None
  ::System::Threading::Tasks::TaskCompletionSource_1<T>* ____taskCompletionSource;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::SyncBackgroundCommand_1, "", "SyncBackgroundCommand`1");
