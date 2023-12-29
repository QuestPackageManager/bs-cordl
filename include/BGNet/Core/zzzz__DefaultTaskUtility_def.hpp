#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultTaskUtility)
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
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
namespace System {
class Action;
}
namespace BGNet::Core {
class ITaskUtility;
}
namespace System {
template <typename TResult> class Func_1;
}
// Forward declare root types
namespace BGNet::Core {
class DefaultTaskUtility;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::DefaultTaskUtility);
// Type: BGNet.Core::DefaultTaskUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace BGNet::Core {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12930))
// CS Name: ::BGNet.Core::DefaultTaskUtility*
class CORDL_TYPE DefaultTaskUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_instance, put = setStaticF_instance))::BGNet::Core::DefaultTaskUtility* instance;

  /// @brief Convert operator to "::BGNet::Core::ITaskUtility"
  constexpr operator ::BGNet::Core::ITaskUtility*() noexcept;

  static inline void setStaticF_instance(::BGNet::Core::DefaultTaskUtility* value);

  static inline ::BGNet::Core::DefaultTaskUtility* getStaticF_instance();

  /// @brief Method Delay addr 0xdd8260 size 0x68 virtual true final true
  inline ::System::Threading::Tasks::Task* Delay(::System::TimeSpan timeSpan, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method CancellationTokenWithDelay addr 0xdd82c8 size 0x68 virtual true final true
  inline ::System::Threading::CancellationToken CancellationTokenWithDelay(::System::TimeSpan timeSpan);

  /// @brief Method Wait addr 0xdd8330 size 0x18 virtual true final true
  inline void Wait(::System::Threading::Tasks::Task* task);

  /// @brief Method Wait addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T> inline T Wait(::System::Threading::Tasks::Task_1<T>* task);

  /// @brief Method ContinueWith addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T1, typename T2>
  inline ::System::Threading::Tasks::Task_1<T2>* ContinueWith(::System::Threading::Tasks::Task_1<T1>* task,
                                                              ::System::Func_2<::System::Threading::Tasks::Task_1<T1>*, ::System::Threading::Tasks::Task_1<T2>*>* continuation);

  /// @brief Method Run addr 0xdd8348 size 0x68 virtual true final true
  inline ::System::Threading::Tasks::Task* Run(::System::Action* action, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Run addr 0xdd83b0 size 0x68 virtual true final true
  inline ::System::Threading::Tasks::Task* Run(::System::Func_1<::System::Threading::Tasks::Task*>* func, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Run addr 0x0 size 0xffffffffffffffff virtual true final true
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* Run(::System::Func_1<T>* func, ::System::Threading::CancellationToken cancellationToken);

  static inline ::BGNet::Core::DefaultTaskUtility* New_ctor();

  /// @brief Method .ctor addr 0xdd8418 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DefaultTaskUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultTaskUtility(DefaultTaskUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultTaskUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultTaskUtility(DefaultTaskUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultTaskUtility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::DefaultTaskUtility, 0x10>, "Size mismatch!");

} // namespace BGNet::Core
NEED_NO_BOX(::BGNet::Core::DefaultTaskUtility);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::DefaultTaskUtility*, "BGNet.Core", "DefaultTaskUtility");
