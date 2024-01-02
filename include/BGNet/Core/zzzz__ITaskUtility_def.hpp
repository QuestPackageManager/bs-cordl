#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(ITaskUtility)
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Action;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
struct TimeSpan;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace BGNet::Core {
class ITaskUtility;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::ITaskUtility);
// Type: BGNet.Core::ITaskUtility
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGNet::Core {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13003))
// CS Name: ::BGNet.Core::ITaskUtility*
class CORDL_TYPE ITaskUtility {
public:
  // Declarations
  /// @brief Method Delay, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  /// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
  inline ::System::Threading::Tasks::Task* Delay(::System::TimeSpan timeSpan, ::System::Threading::CancellationToken cancellationToken = {});

  /// @brief Method Wait, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Wait(::System::Threading::Tasks::Task* task);

  /// @brief Method Wait, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T> inline T Wait(::System::Threading::Tasks::Task_1<T>* task);

  /// @brief Method ContinueWith, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  template <typename T1, typename T2>
  inline ::System::Threading::Tasks::Task_1<T2>* ContinueWith(::System::Threading::Tasks::Task_1<T1>* task,
                                                              ::System::Func_2<::System::Threading::Tasks::Task_1<T1>*, ::System::Threading::Tasks::Task_1<T2>*>* continuation);

  /// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  /// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
  inline ::System::Threading::Tasks::Task* Run(::System::Action* action, ::System::Threading::CancellationToken cancellationToken = {});

  /// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  /// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
  inline ::System::Threading::Tasks::Task* Run(::System::Func_1<::System::Threading::Tasks::Task*>* func, ::System::Threading::CancellationToken cancellationToken = {});

  /// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  /// @param cancellationToken: ::System::Threading::CancellationToken (default: {})
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* Run(::System::Func_1<T>* func, ::System::Threading::CancellationToken cancellationToken = {});

  /// @brief Method CancellationTokenWithDelay, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::CancellationToken CancellationTokenWithDelay(::System::TimeSpan timeSpan);

  // Ctor Parameters [CppParam { name: "", ty: "ITaskUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ITaskUtility(ITaskUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ITaskUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ITaskUtility(ITaskUtility const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace BGNet::Core
NEED_NO_BOX(::BGNet::Core::ITaskUtility);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::ITaskUtility*, "BGNet.Core", "ITaskUtility");
