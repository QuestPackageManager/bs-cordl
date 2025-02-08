#pragma once
// IWYU pragma private; include "System/Threading/Tasks/Task_DelayPromise.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__VoidTaskResult_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
CORDL_MODULE_EXPORT(Task_DelayPromise)
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
class Timer;
}
// Forward declare root types
namespace GlobalNamespace {
class Task_DelayPromise;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Task_DelayPromise);
// Dependencies System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration, System.Threading.Tasks.Task`1<TResult>, System.Threading.Tasks.VoidTaskResult
namespace GlobalNamespace {
// Is value type: false
// CS Name: System.Threading.Tasks.Task/DelayPromise
class CORDL_TYPE Task_DelayPromise : public ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> {
public:
  // Declarations
  /// @brief Field Registration, offset 0x60, size 0x18
  __declspec(property(get = __cordl_internal_get_Registration, put = __cordl_internal_set_Registration)) ::System::Threading::CancellationTokenRegistration Registration;

  /// @brief Field Timer, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_Timer, put = __cordl_internal_set_Timer)) ::System::Threading::Timer* Timer;

  /// @brief Field Token, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_Token, put = __cordl_internal_set_Token)) ::System::Threading::CancellationToken Token;

  /// @brief Method Complete, addr 0x3e6d6d8, size 0x160, virtual false, abstract: false, final false
  inline void Complete();

  static inline ::GlobalNamespace::Task_DelayPromise* New_ctor(::System::Threading::CancellationToken token);

  constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_Registration() const;

  constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_Registration();

  constexpr ::System::Threading::Timer* const& __cordl_internal_get_Timer() const;

  constexpr ::System::Threading::Timer*& __cordl_internal_get_Timer();

  constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_Token() const;

  constexpr ::System::Threading::CancellationToken& __cordl_internal_get_Token();

  constexpr void __cordl_internal_set_Registration(::System::Threading::CancellationTokenRegistration value);

  constexpr void __cordl_internal_set_Timer(::System::Threading::Timer* value);

  constexpr void __cordl_internal_set_Token(::System::Threading::CancellationToken value);

  /// @brief Method .ctor, addr 0x3e6bb64, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::CancellationToken token);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Task_DelayPromise();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Task_DelayPromise", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Task_DelayPromise(Task_DelayPromise&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Task_DelayPromise", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Task_DelayPromise(Task_DelayPromise const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2786 };

  /// @brief Field Token, offset: 0x58, size: 0x8, def value: None
  ::System::Threading::CancellationToken ___Token;

  /// @brief Field Registration, offset: 0x60, size: 0x18, def value: None
  ::System::Threading::CancellationTokenRegistration ___Registration;

  /// @brief Field Timer, offset: 0x78, size: 0x8, def value: None
  ::System::Threading::Timer* ___Timer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Task_DelayPromise, ___Token) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Task_DelayPromise, ___Registration) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::Task_DelayPromise, ___Timer) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Task_DelayPromise, 0x80>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Task_DelayPromise);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Task_DelayPromise*, "System.Threading.Tasks", "Task/DelayPromise");
