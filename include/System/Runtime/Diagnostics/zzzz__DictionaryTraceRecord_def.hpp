#pragma once
// IWYU pragma private; include "System\Runtime\Diagnostics\DictionaryTraceRecord.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/Diagnostics/zzzz__TraceRecord_def.hpp"
CORDL_MODULE_EXPORT(DictionaryTraceRecord)
namespace System::Collections {
class IDictionary;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Runtime::Diagnostics {
class DictionaryTraceRecord;
}
// Write type traits
MARK_REF_T(::System::Runtime::Diagnostics::DictionaryTraceRecord*);
DEFINE_IL2CPP_CLASS(::System::Runtime::Diagnostics::DictionaryTraceRecord*, "System.Runtime.Diagnostics", "DictionaryTraceRecord");
// Dependencies System.Runtime.Diagnostics.TraceRecord
namespace System::Runtime::Diagnostics {
// Is value type: false
// CS Name: System.Runtime.Diagnostics.DictionaryTraceRecord
class CORDL_TYPE DictionaryTraceRecord : public ::System::Runtime::Diagnostics::TraceRecord {
public:
  // Declarations
  /// @brief Field dictionary, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_dictionary, put = __cordl_internal_set_dictionary)) ::System::Collections::IDictionary* dictionary;

  static inline ::System::Runtime::Diagnostics::DictionaryTraceRecord* New_ctor(::System::Collections::IDictionary* dictionary);

  /// @brief Method WriteTo, addr 0x618cd94, size 0x420, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* xml);

  constexpr ::System::Collections::IDictionary* const& __cordl_internal_get_dictionary() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_dictionary();

  constexpr void __cordl_internal_set_dictionary(::System::Collections::IDictionary* value);

  /// @brief Method .ctor, addr 0x618cd88, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* dictionary);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DictionaryTraceRecord();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DictionaryTraceRecord", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DictionaryTraceRecord(DictionaryTraceRecord&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DictionaryTraceRecord", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DictionaryTraceRecord(DictionaryTraceRecord const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21323 };

  /// @brief Field dictionary, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___dictionary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Diagnostics::DictionaryTraceRecord, ___dictionary) == 0x10, "Offset mismatch!");

static_assert(sizeof(::System::Runtime::Diagnostics::DictionaryTraceRecord) == 0x18, "Size mismatch!");

} // namespace System::Runtime::Diagnostics
