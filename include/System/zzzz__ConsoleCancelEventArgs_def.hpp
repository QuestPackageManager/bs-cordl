#pragma once
// IWYU pragma private; include "System/ConsoleCancelEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ConsoleSpecialKey_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
CORDL_MODULE_EXPORT(ConsoleCancelEventArgs)
namespace System {
struct ConsoleSpecialKey;
}
// Forward declare root types
namespace System {
class ConsoleCancelEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::ConsoleCancelEventArgs);
// Dependencies System.ConsoleSpecialKey, System.EventArgs
namespace System {
// Is value type: false
// CS Name: System.ConsoleCancelEventArgs
class CORDL_TYPE ConsoleCancelEventArgs : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_Cancel)) bool Cancel;

  /// @brief Field <Cancel>k__BackingField, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get__Cancel_k__BackingField, put = __cordl_internal_set__Cancel_k__BackingField)) bool _Cancel_k__BackingField;

  /// @brief Field _type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get__type, put = __cordl_internal_set__type)) ::System::ConsoleSpecialKey _type;

  static inline ::System::ConsoleCancelEventArgs* New_ctor();

  static inline ::System::ConsoleCancelEventArgs* New_ctor(::System::ConsoleSpecialKey type);

  constexpr bool const& __cordl_internal_get__Cancel_k__BackingField() const;

  constexpr bool& __cordl_internal_get__Cancel_k__BackingField();

  constexpr ::System::ConsoleSpecialKey const& __cordl_internal_get__type() const;

  constexpr ::System::ConsoleSpecialKey& __cordl_internal_get__type();

  constexpr void __cordl_internal_set__Cancel_k__BackingField(bool value);

  constexpr void __cordl_internal_set__type(::System::ConsoleSpecialKey value);

  /// @brief Method .ctor, addr 0x3e1049c, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x3e10428, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::ConsoleSpecialKey type);

  /// @brief Method get_Cancel, addr 0x3e10494, size 0x8, virtual false, abstract: false, final false
  inline bool get_Cancel();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConsoleCancelEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConsoleCancelEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConsoleCancelEventArgs(ConsoleCancelEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConsoleCancelEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConsoleCancelEventArgs(ConsoleCancelEventArgs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2516 };

  /// @brief Field _type, offset: 0x10, size: 0x4, def value: None
  ::System::ConsoleSpecialKey ____type;

  /// @brief Field <Cancel>k__BackingField, offset: 0x14, size: 0x1, def value: None
  bool ____Cancel_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::ConsoleCancelEventArgs, ____type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::ConsoleCancelEventArgs, ____Cancel_k__BackingField) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::ConsoleCancelEventArgs, 0x18>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::ConsoleCancelEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ConsoleCancelEventArgs*, "System", "ConsoleCancelEventArgs");
