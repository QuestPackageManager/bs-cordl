#pragma once
// IWYU pragma private; include "BGNet/Core/DefaultTaskUtility.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultTaskUtility)
namespace BGNet::Core {
class ITaskUtility;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
class Action;
}
namespace System {
template <typename TResult> class Func_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace BGNet::Core {
class DefaultTaskUtility;
}
// Write type traits
MARK_REF_PTR_T(::BGNet::Core::DefaultTaskUtility);
// Dependencies System.Object
namespace BGNet::Core {
// Is value type: false
// CS Name: BGNet.Core.DefaultTaskUtility
class CORDL_TYPE DefaultTaskUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Field instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_instance, put = setStaticF_instance)) ::BGNet::Core::DefaultTaskUtility* instance;

  /// @brief Convert operator to "::BGNet::Core::ITaskUtility"
  constexpr operator ::BGNet::Core::ITaskUtility*() noexcept;

  /// @brief Method CancellationTokenWithDelay, addr 0x321d54c, size 0x70, virtual true, abstract: false, final true
  inline ::System::Threading::CancellationToken CancellationTokenWithDelay(::System::TimeSpan timeSpan);

  /// @brief Method ContinueWith, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T1, typename T2>
  inline ::System::Threading::Tasks::Task_1<T2>* ContinueWith(::System::Threading::Tasks::Task_1<T1>* task,
                                                              ::System::Func_2<::System::Threading::Tasks::Task_1<T1>*, ::System::Threading::Tasks::Task_1<T2>*>* continuation);

  /// @brief Method Delay, addr 0x321d4e0, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* Delay(::System::TimeSpan timeSpan, ::System::Threading::CancellationToken cancellationToken);

  static inline ::BGNet::Core::DefaultTaskUtility* New_ctor();

  /// @brief Method Run, addr 0x321d5d8, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* Run(::System::Action* action, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Run, addr 0x321d644, size 0x6c, virtual true, abstract: false, final true
  inline ::System::Threading::Tasks::Task* Run(::System::Func_1<::System::Threading::Tasks::Task*>* func, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline ::System::Threading::Tasks::Task_1<T>* Run(::System::Func_1<T>* func, ::System::Threading::CancellationToken cancellationToken);

  /// @brief Method Wait, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  template <typename T> inline T Wait(::System::Threading::Tasks::Task_1<T>* task);

  /// @brief Method Wait, addr 0x321d5bc, size 0x1c, virtual true, abstract: false, final true
  inline void Wait(::System::Threading::Tasks::Task* task);

  /// @brief Method .ctor, addr 0x321d6b0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::BGNet::Core::DefaultTaskUtility* getStaticF_instance();

  /// @brief Convert to "::BGNet::Core::ITaskUtility"
  constexpr ::BGNet::Core::ITaskUtility* i___BGNet__Core__ITaskUtility() noexcept;

  static inline void setStaticF_instance(::BGNet::Core::DefaultTaskUtility* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultTaskUtility();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultTaskUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultTaskUtility(DefaultTaskUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultTaskUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultTaskUtility(DefaultTaskUtility const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18262 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BGNet::Core::DefaultTaskUtility, 0x10>, "Size mismatch!");

} // namespace BGNet::Core
NEED_NO_BOX(::BGNet::Core::DefaultTaskUtility);
DEFINE_IL2CPP_ARG_TYPE(::BGNet::Core::DefaultTaskUtility*, "BGNet.Core", "DefaultTaskUtility");
