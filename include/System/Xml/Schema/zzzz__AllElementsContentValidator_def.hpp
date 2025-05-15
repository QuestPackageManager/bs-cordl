#pragma once
// IWYU pragma private; include "System/Xml/Schema/AllElementsContentValidator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__ContentValidator_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AllElementsContentValidator)
namespace System::Collections {
class ArrayList;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Xml::Schema {
class BitSet;
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
class AllElementsContentValidator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::AllElementsContentValidator);
// Dependencies System.Xml.Schema.ContentValidator
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.AllElementsContentValidator
class CORDL_TYPE AllElementsContentValidator : public ::System::Xml::Schema::ContentValidator {
public:
  // Declarations
  __declspec(property(get = get_IsEmptiable)) bool IsEmptiable;

  /// @brief Field countRequired, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_countRequired, put = __cordl_internal_set_countRequired)) int32_t countRequired;

  /// @brief Field elements, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_elements, put = __cordl_internal_set_elements)) ::System::Collections::Hashtable* elements;

  /// @brief Field isRequired, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_isRequired, put = __cordl_internal_set_isRequired)) ::System::Xml::Schema::BitSet* isRequired;

  /// @brief Field particles, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_particles, put = __cordl_internal_set_particles)) ::ArrayW<::System::Object*, ::Array<::System::Object*>*> particles;

  /// @brief Method AddElement, addr 0x43a1010, size 0x148, virtual false, abstract: false, final false
  inline bool AddElement(::System::Xml::XmlQualifiedName* name, ::System::Object* particle, bool isEmptiable);

  /// @brief Method CompleteValidation, addr 0x43a1350, size 0x50, virtual true, abstract: false, final false
  inline bool CompleteValidation(::System::Xml::Schema::ValidationState* context);

  /// @brief Method ExpectedElements, addr 0x43a13a0, size 0x430, virtual true, abstract: false, final false
  inline ::System::Collections::ArrayList* ExpectedElements(::System::Xml::Schema::ValidationState* context, bool isRequiredOnly);

  /// @brief Method ExpectedParticles, addr 0x43a17d0, size 0x4d8, virtual true, abstract: false, final false
  inline ::System::Collections::ArrayList* ExpectedParticles(::System::Xml::Schema::ValidationState* context, bool isRequiredOnly, ::System::Xml::Schema::XmlSchemaSet* schemaSet);

  /// @brief Method InitValidation, addr 0x43a1178, size 0x90, virtual true, abstract: false, final false
  inline void InitValidation(::System::Xml::Schema::ValidationState* context);

  static inline ::System::Xml::Schema::AllElementsContentValidator* New_ctor(::System::Xml::Schema::XmlSchemaContentType contentType, int32_t size, bool isEmptiable);

  /// @brief Method ValidateElement, addr 0x43a1208, size 0x148, virtual true, abstract: false, final false
  inline ::System::Object* ValidateElement(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::ValidationState* context, ::ByRef<int32_t> errorCode);

  constexpr int32_t const& __cordl_internal_get_countRequired() const;

  constexpr int32_t& __cordl_internal_get_countRequired();

  constexpr ::System::Collections::Hashtable* const& __cordl_internal_get_elements() const;

  constexpr ::System::Collections::Hashtable*& __cordl_internal_get_elements();

  constexpr ::System::Xml::Schema::BitSet* const& __cordl_internal_get_isRequired() const;

  constexpr ::System::Xml::Schema::BitSet*& __cordl_internal_get_isRequired();

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*> const& __cordl_internal_get_particles() const;

  constexpr ::ArrayW<::System::Object*, ::Array<::System::Object*>*>& __cordl_internal_get_particles();

  constexpr void __cordl_internal_set_countRequired(int32_t value);

  constexpr void __cordl_internal_set_elements(::System::Collections::Hashtable* value);

  constexpr void __cordl_internal_set_isRequired(::System::Xml::Schema::BitSet* value);

  constexpr void __cordl_internal_set_particles(::ArrayW<::System::Object*, ::Array<::System::Object*>*> value);

  /// @brief Method .ctor, addr 0x43a0f08, size 0x108, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaContentType contentType, int32_t size, bool isEmptiable);

  /// @brief Method get_IsEmptiable, addr 0x43a1158, size 0x20, virtual true, abstract: false, final false
  inline bool get_IsEmptiable();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AllElementsContentValidator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AllElementsContentValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AllElementsContentValidator(AllElementsContentValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AllElementsContentValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AllElementsContentValidator(AllElementsContentValidator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7516 };

  /// @brief Field elements, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Hashtable* ___elements;

  /// @brief Field particles, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::System::Object*, ::Array<::System::Object*>*> ___particles;

  /// @brief Field isRequired, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::BitSet* ___isRequired;

  /// @brief Field countRequired, offset: 0x30, size: 0x4, def value: None
  int32_t ___countRequired;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::AllElementsContentValidator, ___elements) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::AllElementsContentValidator, ___particles) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::AllElementsContentValidator, ___isRequired) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::AllElementsContentValidator, ___countRequired) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::AllElementsContentValidator, 0x38>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::AllElementsContentValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::AllElementsContentValidator*, "System.Xml.Schema", "AllElementsContentValidator");
