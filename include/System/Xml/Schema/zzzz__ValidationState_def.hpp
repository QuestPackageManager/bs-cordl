#pragma once
// IWYU pragma private; include "System/Xml/Schema/ValidationState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__StateUnion_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaContentProcessing_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaValidity_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ValidationState)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Xml::Schema {
class BitSet;
}
namespace System::Xml::Schema {
class ConstraintStruct;
}
namespace System::Xml::Schema {
struct RangePositionInfo;
}
namespace System::Xml::Schema {
class SchemaElementDecl;
}
// Forward declare root types
namespace System::Xml::Schema {
class ValidationState;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::ValidationState);
// Dependencies System.Object, System.Xml.Schema.StateUnion, System.Xml.Schema.XmlSchemaContentProcessing, System.Xml.Schema.XmlSchemaValidity
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.ValidationState
class CORDL_TYPE ValidationState : public ::System::Object {
public:
  // Declarations
  /// @brief Field AllElementsSet, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_AllElementsSet, put = __cordl_internal_set_AllElementsSet)) ::System::Xml::Schema::BitSet* AllElementsSet;

  /// @brief Field CheckRequiredAttribute, offset 0x13, size 0x1
  __declspec(property(get = __cordl_internal_get_CheckRequiredAttribute, put = __cordl_internal_set_CheckRequiredAttribute)) bool CheckRequiredAttribute;

  /// @brief Field Constr, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_Constr, put = __cordl_internal_set_Constr)) ::ArrayW<::System::Xml::Schema::ConstraintStruct*, ::Array<::System::Xml::Schema::ConstraintStruct*>*>
      Constr;

  /// @brief Field CurPos, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_CurPos, put = __cordl_internal_set_CurPos)) ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> CurPos;

  /// @brief Field CurrentState, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_CurrentState, put = __cordl_internal_set_CurrentState)) ::System::Xml::Schema::StateUnion CurrentState;

  /// @brief Field ElementDecl, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_ElementDecl, put = __cordl_internal_set_ElementDecl)) ::System::Xml::Schema::SchemaElementDecl* ElementDecl;

  /// @brief Field ElementDeclBeforeXsi, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_ElementDeclBeforeXsi, put = __cordl_internal_set_ElementDeclBeforeXsi)) ::System::Xml::Schema::SchemaElementDecl* ElementDeclBeforeXsi;

  /// @brief Field HasMatched, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_HasMatched, put = __cordl_internal_set_HasMatched)) bool HasMatched;

  /// @brief Field IsDefault, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_IsDefault, put = __cordl_internal_set_IsDefault)) bool IsDefault;

  /// @brief Field IsNill, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_IsNill, put = __cordl_internal_set_IsNill)) bool IsNill;

  /// @brief Field LocalName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_LocalName, put = __cordl_internal_set_LocalName)) ::StringW LocalName;

  /// @brief Field Namespace, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Namespace, put = __cordl_internal_set_Namespace)) ::StringW Namespace;

  /// @brief Field NeedValidateChildren, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_NeedValidateChildren, put = __cordl_internal_set_NeedValidateChildren)) bool NeedValidateChildren;

  /// @brief Field ProcessContents, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_ProcessContents, put = __cordl_internal_set_ProcessContents)) ::System::Xml::Schema::XmlSchemaContentProcessing ProcessContents;

  /// @brief Field RunningPositions, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_RunningPositions,
                      put = __cordl_internal_set_RunningPositions)) ::System::Collections::Generic::List_1<::System::Xml::Schema::RangePositionInfo>* RunningPositions;

  /// @brief Field TooComplex, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_TooComplex, put = __cordl_internal_set_TooComplex)) bool TooComplex;

  /// @brief Field ValidationSkipped, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_ValidationSkipped, put = __cordl_internal_set_ValidationSkipped)) bool ValidationSkipped;

  /// @brief Field Validity, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_Validity, put = __cordl_internal_set_Validity)) ::System::Xml::Schema::XmlSchemaValidity Validity;

  static inline ::System::Xml::Schema::ValidationState* New_ctor();

  constexpr ::System::Xml::Schema::BitSet* const& __cordl_internal_get_AllElementsSet() const;

  constexpr ::System::Xml::Schema::BitSet*& __cordl_internal_get_AllElementsSet();

  constexpr bool const& __cordl_internal_get_CheckRequiredAttribute() const;

  constexpr bool& __cordl_internal_get_CheckRequiredAttribute();

  constexpr ::ArrayW<::System::Xml::Schema::ConstraintStruct*, ::Array<::System::Xml::Schema::ConstraintStruct*>*> const& __cordl_internal_get_Constr() const;

  constexpr ::ArrayW<::System::Xml::Schema::ConstraintStruct*, ::Array<::System::Xml::Schema::ConstraintStruct*>*>& __cordl_internal_get_Constr();

  constexpr ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> const& __cordl_internal_get_CurPos() const;

  constexpr ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*>& __cordl_internal_get_CurPos();

  constexpr ::System::Xml::Schema::StateUnion const& __cordl_internal_get_CurrentState() const;

  constexpr ::System::Xml::Schema::StateUnion& __cordl_internal_get_CurrentState();

  constexpr ::System::Xml::Schema::SchemaElementDecl* const& __cordl_internal_get_ElementDecl() const;

  constexpr ::System::Xml::Schema::SchemaElementDecl*& __cordl_internal_get_ElementDecl();

  constexpr ::System::Xml::Schema::SchemaElementDecl* const& __cordl_internal_get_ElementDeclBeforeXsi() const;

  constexpr ::System::Xml::Schema::SchemaElementDecl*& __cordl_internal_get_ElementDeclBeforeXsi();

  constexpr bool const& __cordl_internal_get_HasMatched() const;

  constexpr bool& __cordl_internal_get_HasMatched();

  constexpr bool const& __cordl_internal_get_IsDefault() const;

  constexpr bool& __cordl_internal_get_IsDefault();

  constexpr bool const& __cordl_internal_get_IsNill() const;

  constexpr bool& __cordl_internal_get_IsNill();

  constexpr ::StringW const& __cordl_internal_get_LocalName() const;

  constexpr ::StringW& __cordl_internal_get_LocalName();

  constexpr ::StringW const& __cordl_internal_get_Namespace() const;

  constexpr ::StringW& __cordl_internal_get_Namespace();

  constexpr bool const& __cordl_internal_get_NeedValidateChildren() const;

  constexpr bool& __cordl_internal_get_NeedValidateChildren();

  constexpr ::System::Xml::Schema::XmlSchemaContentProcessing const& __cordl_internal_get_ProcessContents() const;

  constexpr ::System::Xml::Schema::XmlSchemaContentProcessing& __cordl_internal_get_ProcessContents();

  constexpr ::System::Collections::Generic::List_1<::System::Xml::Schema::RangePositionInfo>* const& __cordl_internal_get_RunningPositions() const;

  constexpr ::System::Collections::Generic::List_1<::System::Xml::Schema::RangePositionInfo>*& __cordl_internal_get_RunningPositions();

  constexpr bool const& __cordl_internal_get_TooComplex() const;

  constexpr bool& __cordl_internal_get_TooComplex();

  constexpr bool const& __cordl_internal_get_ValidationSkipped() const;

  constexpr bool& __cordl_internal_get_ValidationSkipped();

  constexpr ::System::Xml::Schema::XmlSchemaValidity const& __cordl_internal_get_Validity() const;

  constexpr ::System::Xml::Schema::XmlSchemaValidity& __cordl_internal_get_Validity();

  constexpr void __cordl_internal_set_AllElementsSet(::System::Xml::Schema::BitSet* value);

  constexpr void __cordl_internal_set_CheckRequiredAttribute(bool value);

  constexpr void __cordl_internal_set_Constr(::ArrayW<::System::Xml::Schema::ConstraintStruct*, ::Array<::System::Xml::Schema::ConstraintStruct*>*> value);

  constexpr void __cordl_internal_set_CurPos(::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> value);

  constexpr void __cordl_internal_set_CurrentState(::System::Xml::Schema::StateUnion value);

  constexpr void __cordl_internal_set_ElementDecl(::System::Xml::Schema::SchemaElementDecl* value);

  constexpr void __cordl_internal_set_ElementDeclBeforeXsi(::System::Xml::Schema::SchemaElementDecl* value);

  constexpr void __cordl_internal_set_HasMatched(bool value);

  constexpr void __cordl_internal_set_IsDefault(bool value);

  constexpr void __cordl_internal_set_IsNill(bool value);

  constexpr void __cordl_internal_set_LocalName(::StringW value);

  constexpr void __cordl_internal_set_Namespace(::StringW value);

  constexpr void __cordl_internal_set_NeedValidateChildren(bool value);

  constexpr void __cordl_internal_set_ProcessContents(::System::Xml::Schema::XmlSchemaContentProcessing value);

  constexpr void __cordl_internal_set_RunningPositions(::System::Collections::Generic::List_1<::System::Xml::Schema::RangePositionInfo>* value);

  constexpr void __cordl_internal_set_TooComplex(bool value);

  constexpr void __cordl_internal_set_ValidationSkipped(bool value);

  constexpr void __cordl_internal_set_Validity(::System::Xml::Schema::XmlSchemaValidity value);

  /// @brief Method .ctor, addr 0x42acb64, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValidationState();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValidationState", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValidationState(ValidationState&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValidationState", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValidationState(ValidationState const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7633 };

  /// @brief Field IsNill, offset: 0x10, size: 0x1, def value: None
  bool ___IsNill;

  /// @brief Field IsDefault, offset: 0x11, size: 0x1, def value: None
  bool ___IsDefault;

  /// @brief Field NeedValidateChildren, offset: 0x12, size: 0x1, def value: None
  bool ___NeedValidateChildren;

  /// @brief Field CheckRequiredAttribute, offset: 0x13, size: 0x1, def value: None
  bool ___CheckRequiredAttribute;

  /// @brief Field ValidationSkipped, offset: 0x14, size: 0x1, def value: None
  bool ___ValidationSkipped;

  /// @brief Field ProcessContents, offset: 0x18, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaContentProcessing ___ProcessContents;

  /// @brief Field Validity, offset: 0x1c, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaValidity ___Validity;

  /// @brief Field ElementDecl, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaElementDecl* ___ElementDecl;

  /// @brief Field ElementDeclBeforeXsi, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::SchemaElementDecl* ___ElementDeclBeforeXsi;

  /// @brief Field LocalName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___LocalName;

  /// @brief Field Namespace, offset: 0x38, size: 0x8, def value: None
  ::StringW ___Namespace;

  /// @brief Field Constr, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::System::Xml::Schema::ConstraintStruct*, ::Array<::System::Xml::Schema::ConstraintStruct*>*> ___Constr;

  /// @brief Field CurrentState, offset: 0x48, size: 0x4, def value: None
  ::System::Xml::Schema::StateUnion ___CurrentState;

  /// @brief Field HasMatched, offset: 0x4c, size: 0x1, def value: None
  bool ___HasMatched;

  /// @brief Field CurPos, offset: 0x50, size: 0x8, def value: None
  ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> ___CurPos;

  /// @brief Field AllElementsSet, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::Schema::BitSet* ___AllElementsSet;

  /// @brief Field RunningPositions, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Xml::Schema::RangePositionInfo>* ___RunningPositions;

  /// @brief Field TooComplex, offset: 0x68, size: 0x1, def value: None
  bool ___TooComplex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::ValidationState, ___IsNill) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ValidationState, ___IsDefault) == 0x11, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ValidationState, ___NeedValidateChildren) == 0x12, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ValidationState, ___CheckRequiredAttribute) == 0x13, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ValidationState, ___ValidationSkipped) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ValidationState, ___ProcessContents) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ValidationState, ___Validity) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ValidationState, ___ElementDecl) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ValidationState, ___ElementDeclBeforeXsi) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ValidationState, ___LocalName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ValidationState, ___Namespace) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ValidationState, ___Constr) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ValidationState, ___CurrentState) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ValidationState, ___HasMatched) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ValidationState, ___CurPos) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ValidationState, ___AllElementsSet) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ValidationState, ___RunningPositions) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ValidationState, ___TooComplex) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::ValidationState, 0x70>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::ValidationState);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ValidationState*, "System.Xml.Schema", "ValidationState");
