#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlNameTable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NameTable)
namespace System::Xml {
class __NameTable__Entry;
}
// Forward declare root types
namespace System::Xml {
class NameTable;
}
namespace System::Xml {
class __NameTable__Entry;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::NameTable);
MARK_REF_PTR_T(::System::Xml::__NameTable__Entry);
// Type: ::Entry
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11533))
// CS Name: ::NameTable::Entry*
class CORDL_TYPE __NameTable__Entry : public ::System::Object {
public:
  // Declarations
  /// @brief Field str, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_str, put = __cordl_internal_set_str))::StringW str;

  /// @brief Field hashCode, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_hashCode, put = __cordl_internal_set_hashCode)) int32_t hashCode;

  /// @brief Field next, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next))::System::Xml::__NameTable__Entry* next;

  constexpr ::StringW& __cordl_internal_get_str();

  constexpr ::StringW const& __cordl_internal_get_str() const;

  constexpr void __cordl_internal_set_str(::StringW value);

  constexpr int32_t& __cordl_internal_get_hashCode();

  constexpr int32_t const& __cordl_internal_get_hashCode() const;

  constexpr void __cordl_internal_set_hashCode(int32_t value);

  constexpr ::System::Xml::__NameTable__Entry*& __cordl_internal_get_next();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::__NameTable__Entry*> const& __cordl_internal_get_next() const;

  constexpr void __cordl_internal_set_next(::System::Xml::__NameTable__Entry* value);

  static inline ::System::Xml::__NameTable__Entry* New_ctor(::StringW str, int32_t hashCode, ::System::Xml::__NameTable__Entry* next);

  /// @brief Method .ctor, addr 0x28929e8, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::StringW str, int32_t hashCode, ::System::Xml::__NameTable__Entry* next);

  // Ctor Parameters [CppParam { name: "", ty: "__NameTable__Entry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NameTable__Entry(__NameTable__Entry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NameTable__Entry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NameTable__Entry(__NameTable__Entry const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NameTable__Entry();

public:
  /// @brief Field str, offset: 0x10, size: 0x8, def value: None
  ::StringW ___str;

  /// @brief Field hashCode, offset: 0x18, size: 0x4, def value: None
  int32_t ___hashCode;

  /// @brief Field next, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::__NameTable__Entry* ___next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__NameTable__Entry, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__NameTable__Entry, ___str) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__NameTable__Entry, ___hashCode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__NameTable__Entry, ___next) == 0x20, "Offset mismatch!");

} // namespace System::Xml
// Type: System.Xml::NameTable
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11568))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11534))
// CS Name: ::System.Xml::NameTable*
class CORDL_TYPE NameTable : public ::System::Xml::XmlNameTable {
public:
  // Declarations
  using Entry = ::System::Xml::__NameTable__Entry;

  /// @brief Field entries, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_entries, put = __cordl_internal_set_entries))::ArrayW<::System::Xml::__NameTable__Entry*, ::Array<::System::Xml::__NameTable__Entry*>*> entries;

  /// @brief Field count, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field mask, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_mask, put = __cordl_internal_set_mask)) int32_t mask;

  /// @brief Field hashCodeRandomizer, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_hashCodeRandomizer, put = __cordl_internal_set_hashCodeRandomizer)) int32_t hashCodeRandomizer;

  constexpr ::ArrayW<::System::Xml::__NameTable__Entry*, ::Array<::System::Xml::__NameTable__Entry*>*>& __cordl_internal_get_entries();

  constexpr ::ArrayW<::System::Xml::__NameTable__Entry*, ::Array<::System::Xml::__NameTable__Entry*>*> const& __cordl_internal_get_entries() const;

  constexpr void __cordl_internal_set_entries(::ArrayW<::System::Xml::__NameTable__Entry*, ::Array<::System::Xml::__NameTable__Entry*>*> value);

  constexpr int32_t& __cordl_internal_get_count();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr int32_t& __cordl_internal_get_mask();

  constexpr int32_t const& __cordl_internal_get_mask() const;

  constexpr void __cordl_internal_set_mask(int32_t value);

  constexpr int32_t& __cordl_internal_get_hashCodeRandomizer();

  constexpr int32_t const& __cordl_internal_get_hashCodeRandomizer() const;

  constexpr void __cordl_internal_set_hashCodeRandomizer(int32_t value);

  static inline ::System::Xml::NameTable* New_ctor();

  /// @brief Method .ctor, addr 0x288a298, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Add, addr 0x28923d4, size 0x17c, virtual true, abstract: false, final false
  inline ::StringW Add(::StringW key);

  /// @brief Method Add, addr 0x2892658, size 0x178, virtual true, abstract: false, final false
  inline ::StringW Add(::ArrayW<char16_t, ::Array<char16_t>*> key, int32_t start, int32_t len);

  /// @brief Method Get, addr 0x2892880, size 0x168, virtual true, abstract: false, final false
  inline ::StringW Get(::StringW value);

  /// @brief Method AddEntry, addr 0x2892550, size 0x108, virtual false, abstract: false, final false
  inline ::StringW AddEntry(::StringW str, int32_t hashCode);

  /// @brief Method Grow, addr 0x2892a28, size 0x124, virtual false, abstract: false, final false
  inline void Grow();

  /// @brief Method TextEquals, addr 0x28927d0, size 0xb0, virtual false, abstract: false, final false
  static inline bool TextEquals(::StringW str1, ::ArrayW<char16_t, ::Array<char16_t>*> str2, int32_t str2Start, int32_t str2Length);

  // Ctor Parameters [CppParam { name: "", ty: "NameTable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameTable(NameTable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameTable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameTable(NameTable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameTable();

public:
  /// @brief Field entries, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Xml::__NameTable__Entry*, ::Array<::System::Xml::__NameTable__Entry*>*> ___entries;

  /// @brief Field count, offset: 0x18, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field mask, offset: 0x1c, size: 0x4, def value: None
  int32_t ___mask;

  /// @brief Field hashCodeRandomizer, offset: 0x20, size: 0x4, def value: None
  int32_t ___hashCodeRandomizer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::NameTable, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::NameTable, ___entries) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::NameTable, ___count) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::NameTable, ___mask) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::NameTable, ___hashCodeRandomizer) == 0x20, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::NameTable);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::NameTable*, "System.Xml", "NameTable");
NEED_NO_BOX(::System::Xml::__NameTable__Entry);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__NameTable__Entry*, "System.Xml", "NameTable/Entry");
