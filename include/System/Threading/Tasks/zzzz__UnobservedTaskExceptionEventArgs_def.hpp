#pragma once
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
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 25, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading::Tasks {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2813))
// CS Name: ::System.Threading.Tasks::UnobservedTaskExceptionEventArgs*
class CORDL_TYPE UnobservedTaskExceptionEventArgs : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field m_exception, offset 0x10, size 0x8
  __declspec(property(get = __get_m_exception, put = __set_m_exception))::System::AggregateException* m_exception;

  /// @brief Field m_observed, offset 0x18, size 0x1
  __declspec(property(get = __get_m_observed, put = __set_m_observed)) bool m_observed;

  constexpr ::System::AggregateException*& __get_m_exception();

  constexpr ::cordl_internals::to_const_pointer<::System::AggregateException*> const& __get_m_exception() const;

  constexpr void __set_m_exception(::System::AggregateException* value);

  constexpr bool& __get_m_observed();

  constexpr bool const& __get_m_observed() const;

  constexpr void __set_m_observed(bool value);

  static inline ::System::Threading::Tasks::UnobservedTaskExceptionEventArgs* New_ctor(::System::AggregateException* exception);

  /// @brief Method .ctor addr 0x262c9a8 size 0x6c virtual false final false
  inline void _ctor(::System::AggregateException* exception);

  // Ctor Parameters [CppParam { name: "", ty: "UnobservedTaskExceptionEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnobservedTaskExceptionEventArgs(UnobservedTaskExceptionEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnobservedTaskExceptionEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnobservedTaskExceptionEventArgs(UnobservedTaskExceptionEventArgs const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnobservedTaskExceptionEventArgs();

public:
  /// @brief Field m_exception, offset: 0x10, size: 0x8, def value: None
  ::System::AggregateException* ___m_exception;

  /// @brief Field m_observed, offset: 0x18, size: 0x1, def value: None
  bool ___m_observed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Tasks::UnobservedTaskExceptionEventArgs, 0x20>, "Size mismatch!");

} // namespace System::Threading::Tasks
NEED_NO_BOX(::System::Threading::Tasks::UnobservedTaskExceptionEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Tasks::UnobservedTaskExceptionEventArgs*, "System.Threading.Tasks", "UnobservedTaskExceptionEventArgs");
