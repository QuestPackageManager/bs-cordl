#pragma once
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
// Type: System::ConsoleCancelEventArgs
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 21, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2522)), TypeDefinitionIndex(TypeDefinitionIndex(2376))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2517))
// CS Name: ::System::ConsoleCancelEventArgs*
class CORDL_TYPE ConsoleCancelEventArgs : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field _type, offset 0x10, size 0x4
  __declspec(property(get = __get__type, put = __set__type))::System::ConsoleSpecialKey _type;

  /// @brief Field <Cancel>k__BackingField, offset 0x14, size 0x1
  __declspec(property(get = __get__Cancel_k__BackingField, put = __set__Cancel_k__BackingField)) bool _Cancel_k__BackingField;

  __declspec(property(get = get_Cancel)) bool Cancel;

  constexpr ::System::ConsoleSpecialKey& __get__type();

  constexpr ::System::ConsoleSpecialKey const& __get__type() const;

  constexpr void __set__type(::System::ConsoleSpecialKey value);

  constexpr bool& __get__Cancel_k__BackingField();

  constexpr bool const& __get__Cancel_k__BackingField() const;

  constexpr void __set__Cancel_k__BackingField(bool value);

  static inline ::System::ConsoleCancelEventArgs* New_ctor(::System::ConsoleSpecialKey type);

  /// @brief Method .ctor addr 0x25cfc74 size 0x6c virtual false final false
  inline void _ctor(::System::ConsoleSpecialKey type);

  /// @brief Method get_Cancel addr 0x25cfce0 size 0x8 virtual false final false
  inline bool get_Cancel();

  static inline ::System::ConsoleCancelEventArgs* New_ctor();

  /// @brief Method .ctor addr 0x25cfce8 size 0x38 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ConsoleCancelEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConsoleCancelEventArgs(ConsoleCancelEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConsoleCancelEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConsoleCancelEventArgs(ConsoleCancelEventArgs const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConsoleCancelEventArgs();

public:
  /// @brief Field _type, offset: 0x10, size: 0x4, def value: None
  ::System::ConsoleSpecialKey ____type;

  /// @brief Field <Cancel>k__BackingField, offset: 0x14, size: 0x1, def value: None
  bool ____Cancel_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ConsoleCancelEventArgs, 0x18>, "Size mismatch!");

} // namespace System
NEED_NO_BOX(::System::ConsoleCancelEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::ConsoleCancelEventArgs*, "System", "ConsoleCancelEventArgs");
