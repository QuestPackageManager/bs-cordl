#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaContentType_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ContentValidator)
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
// Forward declare root types
namespace System::Xml::Schema {
class ContentValidator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::ContentValidator);
// Type: System.Xml.Schema::ContentValidator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 22, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11722))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11610))
// CS Name: ::System.Xml.Schema::ContentValidator*
class CORDL_TYPE ContentValidator : public ::System::Object {
public:
  // Declarations
  /// @brief Field contentType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_contentType, put = __cordl_internal_set_contentType))::System::Xml::Schema::XmlSchemaContentType contentType;

  /// @brief Field isOpen, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_isOpen, put = __cordl_internal_set_isOpen)) bool isOpen;

  /// @brief Field isEmptiable, offset 0x15, size 0x1
  __declspec(property(get = __cordl_internal_get_isEmptiable, put = __cordl_internal_set_isEmptiable)) bool isEmptiable;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty))::System::Xml::Schema::ContentValidator* Empty;

  /// @brief Field TextOnly, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_TextOnly, put = setStaticF_TextOnly))::System::Xml::Schema::ContentValidator* TextOnly;

  /// @brief Field Mixed, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Mixed, put = setStaticF_Mixed))::System::Xml::Schema::ContentValidator* Mixed;

  /// @brief Field Any, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Any, put = setStaticF_Any))::System::Xml::Schema::ContentValidator* Any;

  __declspec(property(get = get_ContentType))::System::Xml::Schema::XmlSchemaContentType ContentType;

  __declspec(property(get = get_IsOpen)) bool IsOpen;

  constexpr ::System::Xml::Schema::XmlSchemaContentType& __cordl_internal_get_contentType();

  constexpr ::System::Xml::Schema::XmlSchemaContentType const& __cordl_internal_get_contentType() const;

  constexpr void __cordl_internal_set_contentType(::System::Xml::Schema::XmlSchemaContentType value);

  constexpr bool& __cordl_internal_get_isOpen();

  constexpr bool const& __cordl_internal_get_isOpen() const;

  constexpr void __cordl_internal_set_isOpen(bool value);

  constexpr bool& __cordl_internal_get_isEmptiable();

  constexpr bool const& __cordl_internal_get_isEmptiable() const;

  constexpr void __cordl_internal_set_isEmptiable(bool value);

  static inline void setStaticF_Empty(::System::Xml::Schema::ContentValidator* value);

  static inline ::System::Xml::Schema::ContentValidator* getStaticF_Empty();

  static inline void setStaticF_TextOnly(::System::Xml::Schema::ContentValidator* value);

  static inline ::System::Xml::Schema::ContentValidator* getStaticF_TextOnly();

  static inline void setStaticF_Mixed(::System::Xml::Schema::ContentValidator* value);

  static inline ::System::Xml::Schema::ContentValidator* getStaticF_Mixed();

  static inline void setStaticF_Any(::System::Xml::Schema::ContentValidator* value);

  static inline ::System::Xml::Schema::ContentValidator* getStaticF_Any();

  static inline ::System::Xml::Schema::ContentValidator* New_ctor(::System::Xml::Schema::XmlSchemaContentType contentType);

  /// @brief Method .ctor, addr 0x28aed28, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaContentType contentType);

  static inline ::System::Xml::Schema::ContentValidator* New_ctor(::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable);

  /// @brief Method .ctor, addr 0x28aed58, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaContentType contentType, bool isOpen, bool isEmptiable);

  /// @brief Method get_ContentType, addr 0x28aed98, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaContentType get_ContentType();

  /// @brief Method get_IsOpen, addr 0x28aeda0, size 0x24, virtual false, abstract: false, final false
  inline bool get_IsOpen();

  // Ctor Parameters [CppParam { name: "", ty: "ContentValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContentValidator(ContentValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContentValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContentValidator(ContentValidator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContentValidator();

public:
  /// @brief Field contentType, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaContentType ___contentType;

  /// @brief Field isOpen, offset: 0x14, size: 0x1, def value: None
  bool ___isOpen;

  /// @brief Field isEmptiable, offset: 0x15, size: 0x1, def value: None
  bool ___isEmptiable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::ContentValidator, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::ContentValidator, ___contentType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ContentValidator, ___isOpen) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ContentValidator, ___isEmptiable) == 0x15, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::ContentValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ContentValidator*, "System.Xml.Schema", "ContentValidator");
