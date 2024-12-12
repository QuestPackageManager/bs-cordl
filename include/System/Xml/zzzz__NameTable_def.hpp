#pragma once
// IWYU pragma private; include "System/Xml/NameTable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NameTable)
namespace System::Xml {
class NameTable_Entry;
}
// Forward declare root types
namespace System::Xml {
class NameTable;
}
namespace System::Xml {
class NameTable_Entry;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::NameTable);
MARK_REF_PTR_T(::System::Xml::NameTable_Entry);
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.NameTable/Entry
class CORDL_TYPE NameTable_Entry : public ::System::Object {
public:
  // Declarations
  /// @brief Field hashCode, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_hashCode, put = __cordl_internal_set_hashCode)) int32_t hashCode;

  /// @brief Field next, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next)) ::System::Xml::NameTable_Entry* next;

  /// @brief Field str, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_str, put = __cordl_internal_set_str)) ::StringW str;

  static inline ::System::Xml::NameTable_Entry* New_ctor(::StringW str, int32_t hashCode, ::System::Xml::NameTable_Entry* next);

  constexpr int32_t const& __cordl_internal_get_hashCode() const;

  constexpr int32_t& __cordl_internal_get_hashCode();

  constexpr ::System::Xml::NameTable_Entry* const& __cordl_internal_get_next() const;

  constexpr ::System::Xml::NameTable_Entry*& __cordl_internal_get_next();

  constexpr ::StringW const& __cordl_internal_get_str() const;

  constexpr ::StringW& __cordl_internal_get_str();

  constexpr void __cordl_internal_set_hashCode(int32_t value);

  constexpr void __cordl_internal_set_next(::System::Xml::NameTable_Entry* value);

  constexpr void __cordl_internal_set_str(::StringW value);

  /// @brief Method .ctor, addr 0x4349d20, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::StringW str, int32_t hashCode, ::System::Xml::NameTable_Entry* next);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameTable_Entry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NameTable_Entry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameTable_Entry(NameTable_Entry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameTable_Entry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameTable_Entry(NameTable_Entry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7325 };

  /// @brief Field str, offset: 0x10, size: 0x8, def value: None
  ::StringW ___str;

  /// @brief Field hashCode, offset: 0x18, size: 0x4, def value: None
  int32_t ___hashCode;

  /// @brief Field next, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::NameTable_Entry* ___next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::NameTable_Entry, ___str) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::NameTable_Entry, ___hashCode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::NameTable_Entry, ___next) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::NameTable_Entry, 0x28>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.XmlNameTable
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.NameTable
class CORDL_TYPE NameTable : public ::System::Xml::XmlNameTable {
public:
  // Declarations
  using Entry = ::System::Xml::NameTable_Entry;

  /// @brief Field count, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field entries, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_entries, put = __cordl_internal_set_entries)) ::ArrayW<::System::Xml::NameTable_Entry*, ::Array<::System::Xml::NameTable_Entry*>*> entries;

  /// @brief Field hashCodeRandomizer, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_hashCodeRandomizer, put = __cordl_internal_set_hashCodeRandomizer)) int32_t hashCodeRandomizer;

  /// @brief Field mask, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_mask, put = __cordl_internal_set_mask)) int32_t mask;

  /// @brief Method Add, addr 0x4349980, size 0x180, virtual true, abstract: false, final false
  inline ::StringW Add(::ArrayW<char16_t, ::Array<char16_t>*> key, int32_t start, int32_t len);

  /// @brief Method Add, addr 0x4349704, size 0x178, virtual true, abstract: false, final false
  inline ::StringW Add(::StringW key);

  /// @brief Method AddEntry, addr 0x434987c, size 0x104, virtual false, abstract: false, final false
  inline ::StringW AddEntry(::StringW str, int32_t hashCode);

  /// @brief Method Get, addr 0x4349bbc, size 0x164, virtual true, abstract: false, final false
  inline ::StringW Get(::StringW value);

  /// @brief Method Grow, addr 0x4349d60, size 0x128, virtual false, abstract: false, final false
  inline void Grow();

  static inline ::System::Xml::NameTable* New_ctor();

  /// @brief Method TextEquals, addr 0x4349b00, size 0xbc, virtual false, abstract: false, final false
  static inline bool TextEquals(::StringW str1, ::ArrayW<char16_t, ::Array<char16_t>*> str2, int32_t str2Start, int32_t str2Length);

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr ::ArrayW<::System::Xml::NameTable_Entry*, ::Array<::System::Xml::NameTable_Entry*>*> const& __cordl_internal_get_entries() const;

  constexpr ::ArrayW<::System::Xml::NameTable_Entry*, ::Array<::System::Xml::NameTable_Entry*>*>& __cordl_internal_get_entries();

  constexpr int32_t const& __cordl_internal_get_hashCodeRandomizer() const;

  constexpr int32_t& __cordl_internal_get_hashCodeRandomizer();

  constexpr int32_t const& __cordl_internal_get_mask() const;

  constexpr int32_t& __cordl_internal_get_mask();

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_entries(::ArrayW<::System::Xml::NameTable_Entry*, ::Array<::System::Xml::NameTable_Entry*>*> value);

  constexpr void __cordl_internal_set_hashCodeRandomizer(int32_t value);

  constexpr void __cordl_internal_set_mask(int32_t value);

  /// @brief Method .ctor, addr 0x4349694, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameTable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NameTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameTable(NameTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameTable(NameTable const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7326 };

  /// @brief Field entries, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Xml::NameTable_Entry*, ::Array<::System::Xml::NameTable_Entry*>*> ___entries;

  /// @brief Field count, offset: 0x18, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field mask, offset: 0x1c, size: 0x4, def value: None
  int32_t ___mask;

  /// @brief Field hashCodeRandomizer, offset: 0x20, size: 0x4, def value: None
  int32_t ___hashCodeRandomizer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::NameTable, ___entries) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::NameTable, ___count) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::NameTable, ___mask) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::NameTable, ___hashCodeRandomizer) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::NameTable, 0x28>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::NameTable);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::NameTable*, "System.Xml", "NameTable");
NEED_NO_BOX(::System::Xml::NameTable_Entry);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::NameTable_Entry*, "System.Xml", "NameTable/Entry");
