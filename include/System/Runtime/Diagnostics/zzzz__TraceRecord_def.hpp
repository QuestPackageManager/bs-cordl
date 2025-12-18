#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/TraceRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TraceRecord)
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Runtime::Diagnostics {
class TraceRecord;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Diagnostics::TraceRecord);
// Dependencies System.Object
namespace System::Runtime::Diagnostics {
// Is value type: false
// CS Name: System.Runtime.Diagnostics.TraceRecord
class CORDL_TYPE TraceRecord : public ::System::Object {
public:
  // Declarations
  static inline ::System::Runtime::Diagnostics::TraceRecord* New_ctor();

  /// @brief Method WriteTo, addr 0x5fdd0a8, size 0x4, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* writer);

  /// @brief Method .ctor, addr 0x5fd8238, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TraceRecord();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TraceRecord", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TraceRecord(TraceRecord&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TraceRecord", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TraceRecord(TraceRecord const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21138 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Diagnostics::TraceRecord, 0x10>, "Size mismatch!");

} // namespace System::Runtime::Diagnostics
NEED_NO_BOX(::System::Runtime::Diagnostics::TraceRecord);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Diagnostics::TraceRecord*, "System.Runtime.Diagnostics", "TraceRecord");
