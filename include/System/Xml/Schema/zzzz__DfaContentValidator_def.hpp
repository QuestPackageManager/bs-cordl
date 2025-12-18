#pragma once
// IWYU pragma private; include "System/Xml/Schema/DfaContentValidator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__ContentValidator_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DfaContentValidator)
namespace System::Collections {
class ArrayList;
}
namespace System::Xml::Schema {
class SymbolsDictionary;
}
namespace System::Xml::Schema {
class ValidationState;
}
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
namespace System::Xml::Schema {
class XmlSchemaSet;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class DfaContentValidator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::DfaContentValidator);
// Dependencies System.Xml.Schema.ContentValidator
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.DfaContentValidator
class CORDL_TYPE DfaContentValidator : public ::System::Xml::Schema::ContentValidator {
public:
  // Declarations
  /// @brief Field symbols, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_symbols, put = __cordl_internal_set_symbols)) ::System::Xml::Schema::SymbolsDictionary* symbols;

  /// @brief Field transitionTable, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_transitionTable,
                      put = __cordl_internal_set_transitionTable)) ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*>
      transitionTable;

  /// @brief Method CompleteValidation, addr 0x616d2dc, size 0x14, virtual true, abstract: false, final false
  inline bool CompleteValidation(::System::Xml::Schema::ValidationState* context);

  /// @brief Method ExpectedElements, addr 0x616d2f0, size 0x1d4, virtual true, abstract: false, final false
  inline ::System::Collections::ArrayList* ExpectedElements(::System::Xml::Schema::ValidationState* context, bool isRequiredOnly);

  /// @brief Method ExpectedParticles, addr 0x616d4c4, size 0x190, virtual true, abstract: false, final false
  inline ::System::Collections::ArrayList* ExpectedParticles(::System::Xml::Schema::ValidationState* context, bool isRequiredOnly, ::System::Xml::Schema::XmlSchemaSet* schemaSet);

  /// @brief Method InitValidation, addr 0x616d168, size 0x64, virtual true, abstract: false, final false
  inline void InitValidation(::System::Xml::Schema::ValidationState* context);

  static inline ::System::Xml::Schema::DfaContentValidator* New_ctor(::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> transitionTable,
                                                                     ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen,
                                                                     bool isEmptiable);

  /// @brief Method ValidateElement, addr 0x616d1cc, size 0x110, virtual true, abstract: false, final false
  inline ::System::Object* ValidateElement(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::ValidationState* context, ::ByRef<int32_t> errorCode);

  constexpr ::System::Xml::Schema::SymbolsDictionary* const& __cordl_internal_get_symbols() const;

  constexpr ::System::Xml::Schema::SymbolsDictionary*& __cordl_internal_get_symbols();

  constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> const& __cordl_internal_get_transitionTable() const;

  constexpr ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*>& __cordl_internal_get_transitionTable();

  constexpr void __cordl_internal_set_symbols(::System::Xml::Schema::SymbolsDictionary* value);

  constexpr void __cordl_internal_set_transitionTable(::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> value);

  /// @brief Method .ctor, addr 0x616cf20, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> transitionTable, ::System::Xml::Schema::SymbolsDictionary* symbols,
                    ::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DfaContentValidator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DfaContentValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DfaContentValidator(DfaContentValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DfaContentValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DfaContentValidator(DfaContentValidator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9580 };

  /// @brief Field transitionTable, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*> ___transitionTable;

  /// @brief Field symbols, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Schema::SymbolsDictionary* ___symbols;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::DfaContentValidator, ___transitionTable) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::DfaContentValidator, ___symbols) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::DfaContentValidator, 0x28>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::DfaContentValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::DfaContentValidator*, "System.Xml.Schema", "DfaContentValidator");
