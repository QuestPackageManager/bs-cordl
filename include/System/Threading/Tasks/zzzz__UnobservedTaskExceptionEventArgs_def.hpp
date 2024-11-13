#pragma once
// IWYU pragma private; include "System/Threading/Tasks/UnobservedTaskExceptionEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(UnobservedTaskExceptionEventArgs)
namespace System {
class AggregateException;
}
// Forward declare root types
namespace System::Threading::Tasks {
class UnobservedTaskExceptionEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Tasks::UnobservedTaskExceptionEventArgs);
// Type: System.Threading.Tasks::UnobservedTaskExceptionEventArgs
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// CS Name: ::System.Threading.Tasks::UnobservedTaskExceptionEventArgs*
class CORDL_TYPE UnobservedTaskExceptionEventArgs : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field m_exception, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_exception, put = __cordl_internal_set_m_exception)) ::System::AggregateException* m_exception;

  /// @brief Field m_observed, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_observed, put = __cordl_internal_set_m_observed)) bool m_observed;

  static inline ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs* New_ctor(::System::AggregateException* exception);

  constexpr ::System::AggregateException*& __cordl_internal_get_m_exception();

  constexpr ::cordl_internals::to_const_pointer<::System::AggregateException*> const& __cordl_internal_get_m_exception() const;

  constexpr bool const& __cordl_internal_get_m_observed() const;

  constexpr bool& __cordl_internal_get_m_observed();

  constexpr void __cordl_internal_set_m_exception(::System::AggregateException* value);

  constexpr void __cordl_internal_set_m_observed(bool value);

  /// @brief Method .ctor, addr 0x3e093a4, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::AggregateException* exception);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnobservedTaskExceptionEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnobservedTaskExceptionEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnobservedTaskExceptionEventArgs(UnobservedTaskExceptionEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnobservedTaskExceptionEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnobservedTaskExceptionEventArgs(UnobservedTaskExceptionEventArgs const&) = delete;

  /// @brief Field m_exception, offset: 0x10, size: 0x8, def value: None
  ::System::AggregateException* ___m_exception;

  /// @brief Field m_observed, offset: 0x18, size: 0x1, def value: None
  bool ___m_observed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2816 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Threading::Tasks::UnobservedTaskExceptionEventArgs, ___m_exception) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::Tasks::UnobservedTaskExceptionEventArgs, ___m_observed) == 0x18, "Offset mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::UnobservedTaskExceptionEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*, "System.Threading.Tasks", "UnobservedTaskExceptionEventArgs");
