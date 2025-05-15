#pragma once
// IWYU pragma private; include "System/Xml/Schema/ParticleContentValidator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__ContentValidator_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParticleContentValidator)
namespace System::Collections {
class Stack;
}
namespace System::Xml::Schema {
class BitSet;
}
namespace System::Xml::Schema {
class ContentValidator;
}
namespace System::Xml::Schema {
class InteriorNode;
}
namespace System::Xml::Schema {
class NamespaceList;
}
namespace System::Xml::Schema {
class Positions;
}
namespace System::Xml::Schema {
class SymbolsDictionary;
}
namespace System::Xml::Schema {
class SyntaxTreeNode;
}
namespace System::Xml::Schema {
class ValidationState;
}
namespace System::Xml::Schema {
struct XmlSchemaContentType;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System {
struct Decimal;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class ParticleContentValidator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::ParticleContentValidator);
// Dependencies System.Xml.Schema.ContentValidator
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.ParticleContentValidator
class CORDL_TYPE ParticleContentValidator : public ::System::Xml::Schema::ContentValidator {
public:
  // Declarations
  /// @brief Field contentNode, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_contentNode, put = __cordl_internal_set_contentNode)) ::System::Xml::Schema::SyntaxTreeNode* contentNode;

  /// @brief Field enableUpaCheck, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_enableUpaCheck, put = __cordl_internal_set_enableUpaCheck)) bool enableUpaCheck;

  /// @brief Field isPartial, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_isPartial, put = __cordl_internal_set_isPartial)) bool isPartial;

  /// @brief Field minMaxNodesCount, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_minMaxNodesCount, put = __cordl_internal_set_minMaxNodesCount)) int32_t minMaxNodesCount;

  /// @brief Field positions, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_positions, put = __cordl_internal_set_positions)) ::System::Xml::Schema::Positions* positions;

  /// @brief Field stack, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_stack, put = __cordl_internal_set_stack)) ::System::Collections::Stack* stack;

  /// @brief Field symbols, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_symbols, put = __cordl_internal_set_symbols)) ::System::Xml::Schema::SymbolsDictionary* symbols;

  /// @brief Method AddChoice, addr 0x439dbc8, size 0xe0, virtual false, abstract: false, final false
  inline void AddChoice();

  /// @brief Method AddLeafNode, addr 0x439da60, size 0xdc, virtual false, abstract: false, final false
  inline void AddLeafNode(::System::Xml::Schema::SyntaxTreeNode* node);

  /// @brief Method AddLeafRange, addr 0x439dfec, size 0xe8, virtual false, abstract: false, final false
  inline void AddLeafRange(::System::Decimal min, ::System::Decimal max);

  /// @brief Method AddName, addr 0x439d9b8, size 0xa8, virtual false, abstract: false, final false
  inline void AddName(::System::Xml::XmlQualifiedName* name, ::System::Object* particle);

  /// @brief Method AddNamespaceList, addr 0x439db3c, size 0x8c, virtual false, abstract: false, final false
  inline void AddNamespaceList(::System::Xml::Schema::NamespaceList* namespaceList, ::System::Object* particle);

  /// @brief Method AddPlus, addr 0x439df34, size 0x5c, virtual false, abstract: false, final false
  inline void AddPlus();

  /// @brief Method AddQMark, addr 0x439df90, size 0x5c, virtual false, abstract: false, final false
  inline void AddQMark();

  /// @brief Method AddSequence, addr 0x439dca8, size 0xe0, virtual false, abstract: false, final false
  inline void AddSequence();

  /// @brief Method AddStar, addr 0x439dd88, size 0x5c, virtual false, abstract: false, final false
  inline void AddStar();

  /// @brief Method BuildTransitionTable, addr 0x439ec28, size 0x59c, virtual false, abstract: false, final false
  inline ::ArrayW<::ArrayW<int32_t, ::Array<int32_t>*>, ::Array<::ArrayW<int32_t, ::Array<int32_t>*>>*>
  BuildTransitionTable(::System::Xml::Schema::BitSet* firstpos, ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos, int32_t endMarkerPos);

  /// @brief Method CalculateTotalFollowposForRangeNodes, addr 0x439e628, size 0x2a8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*>
  CalculateTotalFollowposForRangeNodes(::System::Xml::Schema::BitSet* firstpos, ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos,
                                       ::ByRef<::System::Xml::Schema::BitSet*> posWithRangeTerminals);

  /// @brief Method CheckCMUPAWithLeafRangeNodes, addr 0x439ea40, size 0x160, virtual false, abstract: false, final false
  inline void CheckCMUPAWithLeafRangeNodes(::System::Xml::Schema::BitSet* curpos);

  /// @brief Method CheckUniqueParticleAttribution, addr 0x439f264, size 0x1b4, virtual false, abstract: false, final false
  inline void CheckUniqueParticleAttribution(::System::Xml::Schema::BitSet* curpos);

  /// @brief Method CheckUniqueParticleAttribution, addr 0x439eba0, size 0x88, virtual false, abstract: false, final false
  inline void CheckUniqueParticleAttribution(::System::Xml::Schema::BitSet* firstpos, ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos);

  /// @brief Method CloseGroup, addr 0x439d830, size 0x150, virtual false, abstract: false, final false
  inline void CloseGroup();

  /// @brief Method Closure, addr 0x439dde4, size 0x150, virtual false, abstract: false, final false
  inline void Closure(::System::Xml::Schema::InteriorNode* node);

  /// @brief Method CompleteValidation, addr 0x439d720, size 0x38, virtual true, abstract: false, final false
  inline bool CompleteValidation(::System::Xml::Schema::ValidationState* context);

  /// @brief Method Exists, addr 0x439d980, size 0x38, virtual false, abstract: false, final false
  inline bool Exists(::System::Xml::XmlQualifiedName* name);

  /// @brief Method Finish, addr 0x439e0d4, size 0x554, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::ContentValidator* Finish(bool useDFA);

  /// @brief Method GetApplicableMinMaxFollowPos, addr 0x439e8d0, size 0x170, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::BitSet* GetApplicableMinMaxFollowPos(::System::Xml::Schema::BitSet* curpos, ::System::Xml::Schema::BitSet* posWithRangeTerminals,
                                                                     ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> minmaxFollowPos);

  /// @brief Method InitValidation, addr 0x439d6b0, size 0x38, virtual true, abstract: false, final false
  inline void InitValidation(::System::Xml::Schema::ValidationState* context);

  static inline ::System::Xml::Schema::ParticleContentValidator* New_ctor(::System::Xml::Schema::XmlSchemaContentType contentType);

  static inline ::System::Xml::Schema::ParticleContentValidator* New_ctor(::System::Xml::Schema::XmlSchemaContentType contentType, bool enableUpaCheck);

  /// @brief Method OpenGroup, addr 0x439d808, size 0x28, virtual false, abstract: false, final false
  inline void OpenGroup();

  /// @brief Method Start, addr 0x439d758, size 0xb0, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method ValidateElement, addr 0x439d6e8, size 0x38, virtual true, abstract: false, final false
  inline ::System::Object* ValidateElement(::System::Xml::XmlQualifiedName* name, ::System::Xml::Schema::ValidationState* context, ::ByRef<int32_t> errorCode);

  constexpr ::System::Xml::Schema::SyntaxTreeNode* const& __cordl_internal_get_contentNode() const;

  constexpr ::System::Xml::Schema::SyntaxTreeNode*& __cordl_internal_get_contentNode();

  constexpr bool const& __cordl_internal_get_enableUpaCheck() const;

  constexpr bool& __cordl_internal_get_enableUpaCheck();

  constexpr bool const& __cordl_internal_get_isPartial() const;

  constexpr bool& __cordl_internal_get_isPartial();

  constexpr int32_t const& __cordl_internal_get_minMaxNodesCount() const;

  constexpr int32_t& __cordl_internal_get_minMaxNodesCount();

  constexpr ::System::Xml::Schema::Positions* const& __cordl_internal_get_positions() const;

  constexpr ::System::Xml::Schema::Positions*& __cordl_internal_get_positions();

  constexpr ::System::Collections::Stack* const& __cordl_internal_get_stack() const;

  constexpr ::System::Collections::Stack*& __cordl_internal_get_stack();

  constexpr ::System::Xml::Schema::SymbolsDictionary* const& __cordl_internal_get_symbols() const;

  constexpr ::System::Xml::Schema::SymbolsDictionary*& __cordl_internal_get_symbols();

  constexpr void __cordl_internal_set_contentNode(::System::Xml::Schema::SyntaxTreeNode* value);

  constexpr void __cordl_internal_set_enableUpaCheck(bool value);

  constexpr void __cordl_internal_set_isPartial(bool value);

  constexpr void __cordl_internal_set_minMaxNodesCount(int32_t value);

  constexpr void __cordl_internal_set_positions(::System::Xml::Schema::Positions* value);

  constexpr void __cordl_internal_set_stack(::System::Collections::Stack* value);

  constexpr void __cordl_internal_set_symbols(::System::Xml::Schema::SymbolsDictionary* value);

  /// @brief Method .ctor, addr 0x439d628, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaContentType contentType);

  /// @brief Method .ctor, addr 0x439d630, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::XmlSchemaContentType contentType, bool enableUpaCheck);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParticleContentValidator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ParticleContentValidator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParticleContentValidator(ParticleContentValidator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParticleContentValidator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParticleContentValidator(ParticleContentValidator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7511 };

  /// @brief Field symbols, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::SymbolsDictionary* ___symbols;

  /// @brief Field positions, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Schema::Positions* ___positions;

  /// @brief Field stack, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Stack* ___stack;

  /// @brief Field contentNode, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::Schema::SyntaxTreeNode* ___contentNode;

  /// @brief Field isPartial, offset: 0x38, size: 0x1, def value: None
  bool ___isPartial;

  /// @brief Field minMaxNodesCount, offset: 0x3c, size: 0x4, def value: None
  int32_t ___minMaxNodesCount;

  /// @brief Field enableUpaCheck, offset: 0x40, size: 0x1, def value: None
  bool ___enableUpaCheck;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::ParticleContentValidator, ___symbols) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ParticleContentValidator, ___positions) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ParticleContentValidator, ___stack) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ParticleContentValidator, ___contentNode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ParticleContentValidator, ___isPartial) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ParticleContentValidator, ___minMaxNodesCount) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::ParticleContentValidator, ___enableUpaCheck) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::ParticleContentValidator, 0x48>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::ParticleContentValidator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ParticleContentValidator*, "System.Xml.Schema", "ParticleContentValidator");
