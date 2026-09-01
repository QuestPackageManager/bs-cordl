#pragma once
// IWYU pragma private; include "System\Xml\XmlNameTable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlNameTable)
// Forward declare root types
namespace System::Xml {
class XmlNameTable;
}
// Write type traits
MARK_REF_T(::System::Xml::XmlNameTable*);
DEFINE_IL2CPP_CLASS(::System::Xml::XmlNameTable*, "System.Xml", "XmlNameTable");
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlNameTable
class CORDL_TYPE XmlNameTable : public ::System::Object {
public:
  // Declarations
  /// @brief Method Add, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW Add(::ArrayW<char16_t> array, int32_t offset, int32_t length);

  /// @brief Method Add, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW Add(::StringW array);

  /// @brief Method Get, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW Get(::ArrayW<char16_t> array, int32_t offset, int32_t length);

  /// @brief Method Get, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW Get(::StringW array);

  static inline ::System::Xml::XmlNameTable* New_ctor();

  /// @brief Method .ctor, addr 0x62e59d0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNameTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlNameTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlNameTable(XmlNameTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlNameTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlNameTable(XmlNameTable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9455 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Xml::XmlNameTable) == 0x10, "Size mismatch!");

} // namespace System::Xml
