#pragma once
// IWYU pragma private; include "System/Net/Mail/WhitespaceReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WhitespaceReader)
// Forward declare root types
namespace System::Net::Mail {
class WhitespaceReader;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Mail::WhitespaceReader);
// Dependencies System.Object
namespace System::Net::Mail {
// Is value type: false
// CS Name: System.Net.Mail.WhitespaceReader
class CORDL_TYPE WhitespaceReader : public ::System::Object {
public:
  // Declarations
  /// @brief Method ReadCfwsReverse, addr 0x6152cb4, size 0x2bc, virtual false, abstract: false, final false
  static inline int32_t ReadCfwsReverse(::StringW data, int32_t index);

  /// @brief Method ReadFwsReverse, addr 0x6151ce0, size 0x200, virtual false, abstract: false, final false
  static inline int32_t ReadFwsReverse(::StringW data, int32_t index);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WhitespaceReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WhitespaceReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WhitespaceReader(WhitespaceReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WhitespaceReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WhitespaceReader(WhitespaceReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11766 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Mail::WhitespaceReader, 0x10>, "Size mismatch!");

} // namespace System::Net::Mail
NEED_NO_BOX(::System::Net::Mail::WhitespaceReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Mail::WhitespaceReader*, "System.Net.Mail", "WhitespaceReader");
