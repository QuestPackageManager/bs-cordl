#pragma once
// IWYU pragma private; include "System/Xml/XmlNameTable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlNameTable)
// Forward declare root types
namespace System::Xml {
class XmlNameTable;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlNameTable);
// Type: System.Xml::XmlNameTable
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlNameTable*
class CORDL_TYPE XmlNameTable : public ::System::Object {
public:
  // Declarations
  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW Add(::ArrayW<char16_t, ::Array<char16_t>*> array, int32_t offset, int32_t length);

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW Add(::StringW array);

  /// @brief Method Get, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW Get(::StringW array);

  static inline ::System::Xml::XmlNameTable* New_ctor();

  /// @brief Method .ctor, addr 0x2eed088, size 0x8, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlNameTable, 0x10>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlNameTable);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNameTable*, "System.Xml", "XmlNameTable");
