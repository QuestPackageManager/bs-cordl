#pragma once
// IWYU pragma private; include "System/UnhandledExceptionEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(UnhandledExceptionEventArgs)
namespace System {
class Object;
}
// Forward declare root types
namespace System {
class UnhandledExceptionEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::UnhandledExceptionEventArgs);
// Dependencies System.EventArgs
namespace System {
// Is value type: false
// CS Name: System.UnhandledExceptionEventArgs
class CORDL_TYPE UnhandledExceptionEventArgs : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_ExceptionObject)) ::System::Object* ExceptionObject;

  __declspec(property(get = get_IsTerminating)) bool IsTerminating;

  /// @brief Field _exception, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__exception, put = __cordl_internal_set__exception)) ::System::Object* _exception;

  /// @brief Field _isTerminating, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__isTerminating, put = __cordl_internal_set__isTerminating)) bool _isTerminating;

  static inline ::System::UnhandledExceptionEventArgs* New_ctor(::System::Object* exception, bool isTerminating);

  constexpr ::System::Object* const& __cordl_internal_get__exception() const;

  constexpr ::System::Object*& __cordl_internal_get__exception();

  constexpr bool const& __cordl_internal_get__isTerminating() const;

  constexpr bool& __cordl_internal_get__isTerminating();

  constexpr void __cordl_internal_set__exception(::System::Object* value);

  constexpr void __cordl_internal_set__isTerminating(bool value);

  /// @brief Method .ctor, addr 0x3e09d3c, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* exception, bool isTerminating);

  /// @brief Method get_ExceptionObject, addr 0x3e09db4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Object* get_ExceptionObject();

  /// @brief Method get_IsTerminating, addr 0x3e09dbc, size 0x8, virtual false, abstract: false, final false
  inline bool get_IsTerminating();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnhandledExceptionEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnhandledExceptionEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnhandledExceptionEventArgs(UnhandledExceptionEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnhandledExceptionEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnhandledExceptionEventArgs(UnhandledExceptionEventArgs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2501 };

  /// @brief Field _exception, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ____exception;

  /// @brief Field _isTerminating, offset: 0x18, size: 0x1, def value: None
  bool ____isTerminating;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::UnhandledExceptionEventArgs, ____exception) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::UnhandledExceptionEventArgs, ____isTerminating) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::UnhandledExceptionEventArgs, 0x20>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::UnhandledExceptionEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::UnhandledExceptionEventArgs*, "System", "UnhandledExceptionEventArgs");
