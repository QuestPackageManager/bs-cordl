#pragma once
// IWYU pragma private; include "System/Xml/Schema/XmlSchemaParticle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaAnnotated_def.hpp"
#include "System/zzzz__Decimal_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlSchemaParticle)
namespace GlobalNamespace {
class XmlSchemaParticle_EmptyParticle;
}
namespace System::Xml::Schema {
struct XmlSchemaParticle_Occurs;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
struct Decimal;
}
// Forward declare root types
namespace System::Xml::Schema {
struct XmlSchemaParticle_Occurs;
}
namespace System::Xml::Schema {
class XmlSchemaParticle;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::XmlSchemaParticle_Occurs);
MARK_REF_PTR_T(::System::Xml::Schema::XmlSchemaParticle);
// Dependencies
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.XmlSchemaParticle/Occurs
struct CORDL_TYPE XmlSchemaParticle_Occurs {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __XmlSchemaParticle_Occurs_Unwrapped
  enum struct __XmlSchemaParticle_Occurs_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Min = static_cast<int32_t>(0x1),
    __E_Max = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlSchemaParticle_Occurs_Unwrapped() const noexcept {
    return static_cast<__XmlSchemaParticle_Occurs_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaParticle_Occurs();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr XmlSchemaParticle_Occurs(int32_t value__) noexcept;

  /// @brief Field Max value: I32(2)
  static ::System::Xml::Schema::XmlSchemaParticle_Occurs const Max;

  /// @brief Field Min value: I32(1)
  static ::System::Xml::Schema::XmlSchemaParticle_Occurs const Min;

  /// @brief Field None value: I32(0)
  static ::System::Xml::Schema::XmlSchemaParticle_Occurs const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7710 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaParticle_Occurs, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaParticle_Occurs, 0x4>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.Decimal, System.Xml.Schema.XmlSchemaAnnotated, System.Xml.Schema.XmlSchemaParticle::Occurs
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.XmlSchemaParticle
class CORDL_TYPE XmlSchemaParticle : public ::System::Xml::Schema::XmlSchemaAnnotated {
public:
  // Declarations
  using EmptyParticle = ::GlobalNamespace::XmlSchemaParticle_EmptyParticle;

  using Occurs = ::System::Xml::Schema::XmlSchemaParticle_Occurs;

  /// @brief Field Empty, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty)) ::System::Xml::Schema::XmlSchemaParticle* Empty;

  __declspec(property(get = get_IsEmpty)) bool IsEmpty;

  __declspec(property(get = get_MaxOccurs, put = set_MaxOccurs)) ::System::Decimal MaxOccurs;

  __declspec(property(get = get_MaxOccursString, put = set_MaxOccursString)) ::StringW MaxOccursString;

  __declspec(property(get = get_MinOccurs, put = set_MinOccurs)) ::System::Decimal MinOccurs;

  __declspec(property(get = get_MinOccursString, put = set_MinOccursString)) ::StringW MinOccursString;

  __declspec(property(get = get_NameString)) ::StringW NameString;

  /// @brief Field flags, offset 0x70, size 0x4
  __declspec(property(get = __cordl_internal_get_flags, put = __cordl_internal_set_flags)) ::System::Xml::Schema::XmlSchemaParticle_Occurs flags;

  /// @brief Field maxOccurs, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get_maxOccurs, put = __cordl_internal_set_maxOccurs)) ::System::Decimal maxOccurs;

  /// @brief Field minOccurs, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get_minOccurs, put = __cordl_internal_set_minOccurs)) ::System::Decimal minOccurs;

  /// @brief Method GetQualifiedName, addr 0x42c0034, size 0x180, virtual false, abstract: false, final false
  inline ::System::Xml::XmlQualifiedName* GetQualifiedName();

  static inline ::System::Xml::Schema::XmlSchemaParticle* New_ctor();

  constexpr ::System::Xml::Schema::XmlSchemaParticle_Occurs const& __cordl_internal_get_flags() const;

  constexpr ::System::Xml::Schema::XmlSchemaParticle_Occurs& __cordl_internal_get_flags();

  constexpr ::System::Decimal const& __cordl_internal_get_maxOccurs() const;

  constexpr ::System::Decimal& __cordl_internal_get_maxOccurs();

  constexpr ::System::Decimal const& __cordl_internal_get_minOccurs() const;

  constexpr ::System::Decimal& __cordl_internal_get_minOccurs();

  constexpr void __cordl_internal_set_flags(::System::Xml::Schema::XmlSchemaParticle_Occurs value);

  constexpr void __cordl_internal_set_maxOccurs(::System::Decimal value);

  constexpr void __cordl_internal_set_minOccurs(::System::Decimal value);

  /// @brief Method .ctor, addr 0x42c01b4, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::Schema::XmlSchemaParticle* getStaticF_Empty();

  /// @brief Method get_IsEmpty, addr 0x42bff80, size 0x6c, virtual true, abstract: false, final false
  inline bool get_IsEmpty();

  /// @brief Method get_MaxOccurs, addr 0x42bfe10, size 0xc, virtual false, abstract: false, final false
  inline ::System::Decimal get_MaxOccurs();

  /// @brief Method get_MaxOccursString, addr 0x42bf998, size 0x124, virtual false, abstract: false, final false
  inline ::StringW get_MaxOccursString();

  /// @brief Method get_MinOccurs, addr 0x42bfcd8, size 0xc, virtual false, abstract: false, final false
  inline ::System::Decimal get_MinOccurs();

  /// @brief Method get_MinOccursString, addr 0x42bf7cc, size 0x78, virtual false, abstract: false, final false
  inline ::StringW get_MinOccursString();

  /// @brief Method get_NameString, addr 0x42bffec, size 0x48, virtual true, abstract: false, final false
  inline ::StringW get_NameString();

  static inline void setStaticF_Empty(::System::Xml::Schema::XmlSchemaParticle* value);

  /// @brief Method set_MaxOccurs, addr 0x42bfe1c, size 0x164, virtual false, abstract: false, final false
  inline void set_MaxOccurs(::System::Decimal value);

  /// @brief Method set_MaxOccursString, addr 0x42bfabc, size 0x21c, virtual false, abstract: false, final false
  inline void set_MaxOccursString(::StringW value);

  /// @brief Method set_MinOccurs, addr 0x42bfce4, size 0x12c, virtual false, abstract: false, final false
  inline void set_MinOccurs(::System::Decimal value);

  /// @brief Method set_MinOccursString, addr 0x42bf844, size 0x154, virtual false, abstract: false, final false
  inline void set_MinOccursString(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlSchemaParticle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaParticle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlSchemaParticle(XmlSchemaParticle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlSchemaParticle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlSchemaParticle(XmlSchemaParticle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7712 };

  /// @brief Field minOccurs, offset: 0x50, size: 0x10, def value: None
  ::System::Decimal ___minOccurs;

  /// @brief Field maxOccurs, offset: 0x60, size: 0x10, def value: None
  ::System::Decimal ___maxOccurs;

  /// @brief Field flags, offset: 0x70, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaParticle_Occurs ___flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::XmlSchemaParticle, ___minOccurs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaParticle, ___maxOccurs) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::XmlSchemaParticle, ___flags) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XmlSchemaParticle, 0x78>, "Size mismatch!");

} // namespace System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaParticle_Occurs, "System.Xml.Schema", "XmlSchemaParticle/Occurs");
NEED_NO_BOX(::System::Xml::Schema::XmlSchemaParticle);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XmlSchemaParticle*, "System.Xml.Schema", "XmlSchemaParticle");
