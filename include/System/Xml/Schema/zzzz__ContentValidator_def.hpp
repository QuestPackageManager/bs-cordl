#pragma once
// IWYU pragma private; include "System/Xml/Schema/ContentValidator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ContentValidator)
namespace System::Collections {
class ArrayList;
}
namespace System::Xml::Schema {
class ValidationState;
}
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
namespace System::Xml::Schema {
class XmlSchemaParticle;
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
class ContentValidator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::ContentValidator);
// Dependencies System.Object, System.Xml.Schema.XmlSchemaContentType
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.ContentValidator
class CORDL_TYPE ContentValidator : public ::System::Object {
public:
  // Declarations
  /// @brief Field Any, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Any, put = setStaticF_Any)) ::System::Xml::Schema::ContentValidator* Any;

  __declspec(property(get = get_ContentType)) ::System::Xml::Schema::XmlSchemaContentType ContentType;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty)) ::System::Xml::Schema::ContentValidator* Empty;

  __declspec(property(get = get_IsEmptiable)) bool IsEmptiable;

  __declspec(property(get = get_IsOpen, put = set_IsOpen)) bool IsOpen;

  /// @brief Field Mixed, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Mixed, put = setStaticF_Mixed)) ::System::Xml::Schema::ContentValidator* Mixed;

  __declspec(property(get = get_PreserveWhitespace)) bool PreserveWhitespace;

  /// @brief Field TextOnly, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_TextOnly, put = setStaticF_TextOnly)) ::System::Xml::Schema::ContentValidator* TextOnly;

  /// @brief Field contentType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_contentType, put = __cordl_internal_set_contentType)) ::System::Xml::Schema::XmlSchemaContentType contentType;

  /// @brief Field isEmptiable, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get_isEmptiable, put = __cordl_internal_set_isEmptiable)) bool isEmptiable;

  /// @brief Field isOpen, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_isOpen, put = __cordl_internal_set_isOpen)) bool isOpen;

  /// @brief Method AddParticleToExpected, addr 0x439eaec, size 0x70, virtual false, abstract: false, final false
  static inline void AddParticleToExpected(::System::Xml::Schema::XmlSchemaParticle* p, ::System::Xml::Schema::XmlSchemaSet* schemaSet, ::System::Collections::ArrayList* particles);

  /// @brief Method AddParticleToExpected, addr 0x439eb5c, size 0x228, virtual false, abstract: false, final false
  static inline void AddParticleToExpected(::System::Xml::Schema::XmlSchemaParticle* p, ::System::Xml::Schema::XmlSchemaSet* schemaSet, ::System::Collections::ArrayList* particles, bool global);

  /// @brief Method CompleteValidation, addr 0x439ead4, size 0x8, virtual true, abstract: false, final false
  inline bool CompleteValidation(::System::Xml::Schema::ValidationState* context);

  /// @brief Method ExpectedElements, addr 0x439eadc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::ArrayList* ExpectedElements(::System::Xml::Schema::ValidationState* context, bool isRequiredOnly);

  /// @brief Method ExpectedParticles, addr 0x439eae4, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::ArrayList* ExpectedParticles(::System::Xml::Schema::ValidationState* context, bool isRequiredOnly, ::System::Xml::Schema::XmlSchemaSet* schemaSet);

  /// @brief Method InitValidation, addr 0x439eaa0, size 0x4, virtual true, abstract: false, final false
  inline void InitValidation(::System::Xml::Schema::ValidationState* context);

  static inline ::System::Xml::Schema::ContentValidator* New_ctor(::System::Xml::Schema::XmlSchemaContentType contentType);

  static inline ::System::Xml::Schema::ContentValidator* New_ctor(::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable);

  /// @brief Method ValidateElement, addr 0x439eaa4, size 0x30, virtual true, abstract: false, final false
  inline ::System::Object* ValidateElement(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::ValidationState* context, ::ByRef<int32_t> errorCode);

  constexpr ::System::Xml::Schema::XmlSchemaContentType const& __cordl_internal_get_contentType() const;

  constexpr ::System::Xml::Schema::XmlSchemaContentType& __cordl_internal_get_contentType();

  constexpr bool const& __cordl_internal_get_isEmptiable() const;

  constexpr bool& __cordl_internal_get_isEmptiable();

  constexpr bool const& __cordl_internal_get_isOpen() const;

  constexpr bool& __cordl_internal_get_isOpen();

  constexpr void __cordl_internal_set_contentType(::System::Xml::Schema::XmlSchemaContentType value);

  constexpr void __cordl_internal_set_isEmptiable(bool value);

  constexpr void __cordl_internal_set_isOpen(bool value);

  /// @brief Method .ctor, addr 0x439e9d4, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaContentType contentType);

  /// @brief Method .ctor, addr 0x439ea04, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable);

  static inline ::System::Xml::Schema::ContentValidator* getStaticF_Any();

  static inline ::System::Xml::Schema::ContentValidator* getStaticF_Empty();

  static inline ::System::Xml::Schema::ContentValidator* getStaticF_Mixed();

  static inline ::System::Xml::Schema::ContentValidator* getStaticF_TextOnly();

  /// @brief Method get_ContentType, addr 0x439ea44, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaContentType get_ContentType();

  /// @brief Method get_IsEmptiable, addr 0x439ea68, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsEmptiable();

  /// @brief Method get_IsOpen, addr 0x439ea70, size 0x24, virtual false, abstract: false, final false
  inline bool get_IsOpen();

  /// @brief Method get_PreserveWhitespace, addr 0x439ea4c, size 0x1c, virtual false, abstract: false, final false
  inline bool get_PreserveWhitespace();

  static inline void setStaticF_Any(::System::Xml::Schema::ContentValidator* value);

  static inline void setStaticF_Empty(::System::Xml::Schema::ContentValidator* value);

  static inline void setStaticF_Mixed(::System::Xml::Schema::ContentValidator* value);

  static inline void setStaticF_TextOnly(::System::Xml::Schema::ContentValidator* value);

  /// @brief Method set_IsOpen, addr 0x439ea94, size 0xc, virtual false, abstract: false, final false
  inline void set_IsOpen(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentValidator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContentValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentValidator(ContentValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentValidator(ContentValidator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7508 };

  /// @brief Field contentType, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaContentType ___contentType;

  /// @brief Field isOpen, offset: 0x14, size: 0x1, def value: None
  bool ___isOpen;

  /// @brief Field isEmptiable, offset: 0x15, size: 0x1, def value: None
  bool ___isEmptiable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::ContentValidator, ___contentType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ContentValidator, ___isOpen) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ContentValidator, ___isEmptiable) == 0x15, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::ContentValidator, 0x18>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::ContentValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ContentValidator*, "System.Xml.Schema", "ContentValidator");
