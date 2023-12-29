#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__ContentValidator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DfaContentValidator)
namespace System::Xml::Schema {
class SymbolsDictionary;
}
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
// Forward declare root types
namespace System::Xml::Schema {
class DfaContentValidator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::DfaContentValidator);
// Type: System.Xml.Schema::DfaContentValidator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11538))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11540))
// CS Name: ::System.Xml.Schema::DfaContentValidator*
class CORDL_TYPE DfaContentValidator : public ::System::Xml::Schema::ContentValidator {
public:
  // Declarations
  /// @brief Field transitionTable, offset 0x18, size 0x8
  __declspec(property(get = __get_transitionTable, put = __set_transitionTable))::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> transitionTable;

  /// @brief Field symbols, offset 0x20, size 0x8
  __declspec(property(get = __get_symbols, put = __set_symbols))::System::Xml::Schema::SymbolsDictionary* symbols;

  constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*>& __get_transitionTable();

  constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> const& __get_transitionTable() const;

  constexpr void __set_transitionTable(::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> value);

  constexpr ::System::Xml::Schema::SymbolsDictionary*& __get_symbols();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SymbolsDictionary*> const& __get_symbols() const;

  constexpr void __set_symbols(::System::Xml::Schema::SymbolsDictionary* value);

  static inline ::System::Xml::Schema::DfaContentValidator* New_ctor(::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> transitionTable,
                                                                     ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen,
                                                                     bool isEmptiable);

  /// @brief Method .ctor addr 0x27339ec size 0xa0 virtual false final false
  inline void _ctor(::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> transitionTable, ::System::Xml::Schema::SymbolsDictionary* symbols,
                    ::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable);

  // Ctor Parameters [CppParam { name: "", ty: "DfaContentValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DfaContentValidator(DfaContentValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DfaContentValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DfaContentValidator(DfaContentValidator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DfaContentValidator();

public:
  /// @brief Field transitionTable, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> ___transitionTable;

  /// @brief Field symbols, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Schema::SymbolsDictionary* ___symbols;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::DfaContentValidator, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::DfaContentValidator, ___transitionTable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::DfaContentValidator, ___symbols) == 0x20, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::DfaContentValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::DfaContentValidator*, "System.Xml.Schema", "DfaContentValidator");
