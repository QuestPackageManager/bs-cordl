#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__ContentValidator_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NfaContentValidator)
namespace System::Xml::Schema {
class BitSet;
}
namespace System::Xml::Schema {
class Positions;
}
namespace System::Xml::Schema {
class SymbolsDictionary;
}
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
// Forward declare root types
namespace System::Xml::Schema {
class NfaContentValidator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::NfaContentValidator);
// Type: System.Xml.Schema::NfaContentValidator
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11613))
// CS Name: ::System.Xml.Schema::NfaContentValidator*
class CORDL_TYPE NfaContentValidator : public ::System::Xml::Schema::ContentValidator {
public:
  // Declarations
  /// @brief Field firstpos, offset 0x18, size 0x8
  __declspec(property(get = __get_firstpos, put = __set_firstpos))::System::Xml::Schema::BitSet* firstpos;

  /// @brief Field followpos, offset 0x20, size 0x8
  __declspec(property(get = __get_followpos, put = __set_followpos))::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos;

  /// @brief Field symbols, offset 0x28, size 0x8
  __declspec(property(get = __get_symbols, put = __set_symbols))::System::Xml::Schema::SymbolsDictionary* symbols;

  /// @brief Field positions, offset 0x30, size 0x8
  __declspec(property(get = __get_positions, put = __set_positions))::System::Xml::Schema::Positions* positions;

  /// @brief Field endMarkerPos, offset 0x38, size 0x4
  __declspec(property(get = __get_endMarkerPos, put = __set_endMarkerPos)) int32_t endMarkerPos;

  constexpr ::System::Xml::Schema::BitSet*& __get_firstpos();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::BitSet*> const& __get_firstpos() const;

  constexpr void __set_firstpos(::System::Xml::Schema::BitSet* value);

  constexpr ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*>& __get_followpos();

  constexpr ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> const& __get_followpos() const;

  constexpr void __set_followpos(::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> value);

  constexpr ::System::Xml::Schema::SymbolsDictionary*& __get_symbols();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SymbolsDictionary*> const& __get_symbols() const;

  constexpr void __set_symbols(::System::Xml::Schema::SymbolsDictionary* value);

  constexpr ::System::Xml::Schema::Positions*& __get_positions();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::Positions*> const& __get_positions() const;

  constexpr void __set_positions(::System::Xml::Schema::Positions* value);

  constexpr int32_t& __get_endMarkerPos();

  constexpr int32_t const& __get_endMarkerPos() const;

  constexpr void __set_endMarkerPos(int32_t value);

  static inline ::System::Xml::Schema::NfaContentValidator* New_ctor(::System::Xml::Schema::BitSet* firstpos,
                                                                     ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos,
                                                                     ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions, int32_t endMarkerPos,
                                                                     ::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable);

  /// @brief Method .ctor, addr 0x28b0ab0, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::BitSet* firstpos, ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos,
                    ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions, int32_t endMarkerPos, ::System::Xml::Schema::XmlSchemaContentType contentType,
                    bool isOpen, bool isEmptiable);

  // Ctor Parameters [CppParam { name: "", ty: "NfaContentValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NfaContentValidator(NfaContentValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NfaContentValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NfaContentValidator(NfaContentValidator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NfaContentValidator();

public:
  /// @brief Field firstpos, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::BitSet* ___firstpos;

  /// @brief Field followpos, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> ___followpos;

  /// @brief Field symbols, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::SymbolsDictionary* ___symbols;

  /// @brief Field positions, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::Schema::Positions* ___positions;

  /// @brief Field endMarkerPos, offset: 0x38, size: 0x4, def value: None
  int32_t ___endMarkerPos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::NfaContentValidator, 0x40>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::NfaContentValidator, ___firstpos) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::NfaContentValidator, ___followpos) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::NfaContentValidator, ___symbols) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::NfaContentValidator, ___positions) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::NfaContentValidator, ___endMarkerPos) == 0x38, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::NfaContentValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::NfaContentValidator*, "System.Xml.Schema", "NfaContentValidator");
