#pragma once
// IWYU pragma private; include "System/Net/Mail/DomainLiteralReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DomainLiteralReader)
// Forward declare root types
namespace System::Net::Mail {
class DomainLiteralReader;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Mail::DomainLiteralReader);
// Type: System.Net.Mail::DomainLiteralReader
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Mail {
// Is value type: false
// CS Name: ::System.Net.Mail::DomainLiteralReader*
class CORDL_TYPE DomainLiteralReader : public ::System::Object {
public:
  // Declarations
  /// @brief Method ReadReverse, addr 0x43a0df8, size 0x220, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9854 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Mail::DomainLiteralReader, 0x10>, "Size mismatch!");

} // namespace System::Net::Mail
NEED_NO_BOX(::System::Net::Mail::DomainLiteralReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Mail::DomainLiteralReader*, "System.Net.Mail", "DomainLiteralReader");
