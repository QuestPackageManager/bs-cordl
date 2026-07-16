#pragma once
// IWYU pragma private; include "System/Net/Sockets/MulticastOption.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(MulticastOption)
// Forward declare root types
namespace System::Net::Sockets {
class MulticastOption;
}
// Write type traits
MARK_REF_T(::System::Net::Sockets::MulticastOption*);
DEFINE_IL2CPP_CLASS(::System::Net::Sockets::MulticastOption*, "System.Net.Sockets", "MulticastOption");
// Dependencies System.Object
namespace System::Net::Sockets {
// Is value type: false
// CS Name: System.Net.Sockets.MulticastOption
class CORDL_TYPE MulticastOption : public ::System::Object {
public:
  // Declarations
protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MulticastOption();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MulticastOption", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MulticastOption(MulticastOption&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MulticastOption", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MulticastOption(MulticastOption const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11740 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Sockets::MulticastOption) == 0x10, "Size mismatch!");

} // namespace System::Net::Sockets
