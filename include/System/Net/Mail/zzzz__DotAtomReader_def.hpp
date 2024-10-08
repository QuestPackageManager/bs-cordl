#pragma once
// IWYU pragma private; include "System/Net/Mail/DotAtomReader.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DotAtomReader)
// Forward declare root types
namespace System::Net::Mail {
class DotAtomReader;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Mail::DotAtomReader);
// Type: System.Net.Mail::DotAtomReader
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Net::Mail {
// Is value type: false
// CS Name: ::System.Net.Mail::DotAtomReader*
class CORDL_TYPE DotAtomReader : public ::System::Object {
public:
  // Declarations
  /// @brief Method ReadReverse, addr 0x438cc98, size 0x244, virtual false, abstract: false, final false
  static inline int32_t ReadReverse(::StringW data, int32_t index);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DotAtomReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DotAtomReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DotAtomReader(DotAtomReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DotAtomReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DotAtomReader(DotAtomReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9850 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Mail::DotAtomReader, 0x10>, "Size mismatch!");

} // namespace System::Net::Mail
NEED_NO_BOX(::System::Net::Mail::DotAtomReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Mail::DotAtomReader*, "System.Net.Mail", "DotAtomReader");
