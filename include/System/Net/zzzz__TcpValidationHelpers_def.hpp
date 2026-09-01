#pragma once
// IWYU pragma private; include "System\Net\TcpValidationHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TcpValidationHelpers)
// Forward declare root types
namespace System::Net {
class TcpValidationHelpers;
}
// Write type traits
MARK_REF_T(::System::Net::TcpValidationHelpers*);
DEFINE_IL2CPP_CLASS(::System::Net::TcpValidationHelpers*, "System.Net", "TcpValidationHelpers");
// Dependencies System.Object
namespace System::Net {
// Is value type: false
// CS Name: System.Net.TcpValidationHelpers
class CORDL_TYPE TcpValidationHelpers : public ::System::Object {
public:
  // Declarations
  /// @brief Method ValidatePortNumber, addr 0x63f987c, size 0xc, virtual false, abstract: false, final false
  static inline bool ValidatePortNumber(int32_t port);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TcpValidationHelpers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TcpValidationHelpers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TcpValidationHelpers(TcpValidationHelpers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TcpValidationHelpers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TcpValidationHelpers(TcpValidationHelpers const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11449 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::TcpValidationHelpers) == 0x10, "Size mismatch!");

} // namespace System::Net
