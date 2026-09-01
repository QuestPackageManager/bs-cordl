#pragma once
// IWYU pragma private; include "System\Net\Mail\DomainLiteralReader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DomainLiteralReader)
// Forward declare root types
namespace System::Net::Mail {
class DomainLiteralReader;
}
// Write type traits
MARK_REF_T(::System::Net::Mail::DomainLiteralReader*);
DEFINE_IL2CPP_CLASS(::System::Net::Mail::DomainLiteralReader*, "System.Net.Mail", "DomainLiteralReader");
// Dependencies System.Object
namespace System::Net::Mail {
// Is value type: false
// CS Name: System.Net.Mail.DomainLiteralReader
class CORDL_TYPE DomainLiteralReader : public ::System::Object {
public:
  // Declarations
  /// @brief Method ReadReverse, addr 0x636e1b0, size 0x214, virtual false, abstract: false, final false
  static inline int32_t ReadReverse(::StringW data, int32_t index);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DomainLiteralReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DomainLiteralReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DomainLiteralReader(DomainLiteralReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DomainLiteralReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DomainLiteralReader(DomainLiteralReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11790 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Net::Mail::DomainLiteralReader) == 0x10, "Size mismatch!");

} // namespace System::Net::Mail
