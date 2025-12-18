#pragma once
// IWYU pragma private; include "System/Runtime/Diagnostics/StringTraceRecord.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Diagnostics/zzzz__TraceRecord_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(StringTraceRecord)
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Runtime::Diagnostics {
class StringTraceRecord;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::Diagnostics::StringTraceRecord);
// Dependencies System.Runtime.Diagnostics.TraceRecord
namespace System::Runtime::Diagnostics {
// Is value type: false
// CS Name: System.Runtime.Diagnostics.StringTraceRecord
class CORDL_TYPE StringTraceRecord : public ::System::Runtime::Diagnostics::TraceRecord {
public:
  // Declarations
  /// @brief Field content, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content)) ::StringW content;

  /// @brief Field elementName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_elementName, put = __cordl_internal_set_elementName)) ::StringW elementName;

  static inline ::System::Runtime::Diagnostics::StringTraceRecord* New_ctor(::StringW elementName, ::StringW content);

  /// @brief Method WriteTo, addr 0x5fdd088, size 0x20, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* writer);

  constexpr ::StringW const& __cordl_internal_get_content() const;

  constexpr ::StringW& __cordl_internal_get_content();

  constexpr ::StringW const& __cordl_internal_get_elementName() const;

  constexpr ::StringW& __cordl_internal_get_elementName();

  constexpr void __cordl_internal_set_content(::StringW value);

  constexpr void __cordl_internal_set_elementName(::StringW value);

  /// @brief Method .ctor, addr 0x5fdd080, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW elementName, ::StringW content);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StringTraceRecord();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StringTraceRecord", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StringTraceRecord(StringTraceRecord&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StringTraceRecord", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StringTraceRecord(StringTraceRecord const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21137 };

  /// @brief Field elementName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___elementName;

  /// @brief Field content, offset: 0x18, size: 0x8, def value: None
  ::StringW ___content;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Diagnostics::StringTraceRecord, ___elementName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Runtime::Diagnostics::StringTraceRecord, ___content) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Diagnostics::StringTraceRecord, 0x20>, "Size mismatch!");

} // namespace System::Runtime::Diagnostics
NEED_NO_BOX(::System::Runtime::Diagnostics::StringTraceRecord);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Diagnostics::StringTraceRecord*, "System.Runtime.Diagnostics", "StringTraceRecord");
