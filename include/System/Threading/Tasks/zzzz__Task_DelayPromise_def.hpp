#pragma once
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
namespace System::Threading::Tasks {
class __Task__DelayPromise;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::__Task__DelayPromise);
// Type: ::DelayPromise
// SizeInfo { instance_size: 128, native_size: -1, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2794)), TypeDefinitionIndex(TypeDefinitionIndex(2773)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2773), inst: 900
// }), TypeDefinitionIndex(TypeDefinitionIndex(2677)), TypeDefinitionIndex(TypeDefinitionIndex(2683))} Self: TypeDefinitionIndex(TypeDefinitionIndex(2783)) CS Name: ::Task::DelayPromise*
class CORDL_TYPE __Task__DelayPromise : public ::System::Threading::Tasks::Task_1<::System::Threading::Tasks::VoidTaskResult> {
public:
  // Declarations
  /// @brief Field Token, offset 0x58, size 0x8
  __declspec(property(get = __get_Token, put = __set_Token))::System::Threading::CancellationToken Token;

  /// @brief Field Registration, offset 0x60, size 0x18
  __declspec(property(get = __get_Registration, put = __set_Registration))::System::Threading::CancellationTokenRegistration Registration;

  /// @brief Field Timer, offset 0x78, size 0x8
  __declspec(property(get = __get_Timer, put = __set_Timer))::System::Threading::Timer* Timer;

  constexpr ::System::Threading::CancellationToken& __get_Token();

  constexpr ::System::Threading::CancellationToken const& __get_Token() const;

  constexpr void __set_Token(::System::Threading::CancellationToken value);

  constexpr ::System::Threading::CancellationTokenRegistration& __get_Registration();

  constexpr ::System::Threading::CancellationTokenRegistration const& __get_Registration() const;

  constexpr void __set_Registration(::System::Threading::CancellationTokenRegistration value);

  constexpr ::System::Threading::Timer*& __get_Timer();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Timer*> const& __get_Timer() const;

  constexpr void __set_Timer(::System::Threading::Timer* value);

  static inline ::System::Threading::Tasks::__Task__DelayPromise* New_ctor(::System::Threading::CancellationToken token);

  /// @brief Method .ctor, addr 0x2629114, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::System::Threading::CancellationToken token);

  /// @brief Method Complete, addr 0x262acb0, size 0x138, virtual false, abstract: false, final false
  inline void Complete();

  // Ctor Parameters [CppParam { name: "", ty: "__Task__DelayPromise", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Task__DelayPromise(__Task__DelayPromise&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Task__DelayPromise", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Task__DelayPromise(__Task__DelayPromise const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Task__DelayPromise();

public:
  /// @brief Field Token, offset: 0x58, size: 0x8, def value: None
  ::System::Threading::CancellationToken ___Token;

  /// @brief Field Registration, offset: 0x60, size: 0x18, def value: None
  ::System::Threading::CancellationTokenRegistration ___Registration;

  /// @brief Field Timer, offset: 0x78, size: 0x8, def value: None
  ::System::Threading::Timer* ___Timer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::__Task__DelayPromise, 0x80>, "Size mismatch!");

static_assert(offsetof(::System::Threading::Tasks::__Task__DelayPromise, ___Token) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::__Task__DelayPromise, ___Registration) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::__Task__DelayPromise, ___Timer) == 0x78, "Offset mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::__Task__DelayPromise);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::__Task__DelayPromise*, "System.Threading.Tasks", "Task/DelayPromise");
