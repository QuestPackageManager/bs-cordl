#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__DtdProcessing_def.hpp"
#include "System/Xml/zzzz__EntityHandling_def.hpp"
#include "System/Xml/zzzz__LineInfo_def.hpp"
#include "System/Xml/zzzz__ReadState_def.hpp"
#include "System/Xml/zzzz__WhitespaceHandling_def.hpp"
#include "System/Xml/zzzz__XmlCharType_def.hpp"
#include "System/Xml/zzzz__XmlNamespaceManager_def.hpp"
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/Xml/zzzz__XmlReader_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/Xml/zzzz__XmlTextReaderImpl_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlTextReaderImpl)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IComparer_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::IO {
class Stream;
}
namespace System::IO {
class TextReader;
}
namespace System::Text {
class Decoder;
}
namespace System::Text {
class Encoding;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System::Xml::Schema {
class XmlSchemaException;
}
namespace System::Xml::Schema {
struct XmlSeverityType;
}
namespace System::Xml {
struct EntityHandling;
}
namespace System::Xml {
class IDtdDefaultAttributeInfo;
}
namespace System::Xml {
class IDtdEntityInfo;
}
namespace System::Xml {
class IDtdInfo;
}
namespace System::Xml {
class IDtdParserAdapterV1;
}
namespace System::Xml {
class IDtdParserAdapterWithValidation;
}
namespace System::Xml {
class IDtdParserAdapter;
}
namespace System::Xml {
class IValidationEventHandling;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class IncrementalReadDecoder;
}
namespace System::Xml {
struct LineInfo;
}
namespace System::Xml {
struct ReadState;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlNamespaceManager;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlParserContext;
}
namespace System::Xml {
class XmlReaderSettings;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlResolver;
}
namespace System::Xml {
class __XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer;
}
namespace System::Xml {
class __XmlTextReaderImpl__DtdParserProxy;
}
namespace System::Xml {
struct __XmlTextReaderImpl__EntityExpandType;
}
namespace System::Xml {
struct __XmlTextReaderImpl__EntityType;
}
namespace System::Xml {
struct __XmlTextReaderImpl__IncrementalReadState;
}
namespace System::Xml {
struct __XmlTextReaderImpl__InitInputType;
}
namespace System::Xml {
class __XmlTextReaderImpl__LaterInitParam;
}
namespace System::Xml {
class __XmlTextReaderImpl__NoNamespaceManager;
}
namespace System::Xml {
class __XmlTextReaderImpl__NodeData;
}
namespace System::Xml {
class __XmlTextReaderImpl__OnDefaultAttributeUseDelegate;
}
namespace System::Xml {
struct __XmlTextReaderImpl__ParsingFunction;
}
namespace System::Xml {
struct __XmlTextReaderImpl__ParsingMode;
}
namespace System::Xml {
struct __XmlTextReaderImpl__ParsingState;
}
namespace System::Xml {
class __XmlTextReaderImpl__XmlContext;
}
namespace System {
class Exception;
}
namespace System {
class IComparable;
}
namespace System {
class Object;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Tuple_4;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Xml {
struct __XmlTextReaderImpl__EntityExpandType;
}
namespace System::Xml {
struct __XmlTextReaderImpl__EntityType;
}
namespace System::Xml {
struct __XmlTextReaderImpl__IncrementalReadState;
}
namespace System::Xml {
struct __XmlTextReaderImpl__InitInputType;
}
namespace System::Xml {
struct __XmlTextReaderImpl__ParsingFunction;
}
namespace System::Xml {
struct __XmlTextReaderImpl__ParsingMode;
}
namespace System::Xml {
class XmlTextReaderImpl;
}
namespace System::Xml {
class __XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer;
}
namespace System::Xml {
class __XmlTextReaderImpl__DtdParserProxy;
}
namespace System::Xml {
class __XmlTextReaderImpl__LaterInitParam;
}
namespace System::Xml {
class __XmlTextReaderImpl__NoNamespaceManager;
}
namespace System::Xml {
class __XmlTextReaderImpl__NodeData;
}
namespace System::Xml {
class __XmlTextReaderImpl__OnDefaultAttributeUseDelegate;
}
namespace System::Xml {
class __XmlTextReaderImpl__XmlContext;
}
namespace System::Xml {
struct __XmlTextReaderImpl__ParsingState;
}
// Write type traits
MARK_VAL_T(::System::Xml::__XmlTextReaderImpl__EntityExpandType);
MARK_VAL_T(::System::Xml::__XmlTextReaderImpl__EntityType);
MARK_VAL_T(::System::Xml::__XmlTextReaderImpl__IncrementalReadState);
MARK_VAL_T(::System::Xml::__XmlTextReaderImpl__InitInputType);
MARK_VAL_T(::System::Xml::__XmlTextReaderImpl__ParsingFunction);
MARK_VAL_T(::System::Xml::__XmlTextReaderImpl__ParsingMode);
MARK_REF_PTR_T(::System::Xml::XmlTextReaderImpl);
MARK_REF_PTR_T(::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer);
MARK_REF_PTR_T(::System::Xml::__XmlTextReaderImpl__DtdParserProxy);
MARK_REF_PTR_T(::System::Xml::__XmlTextReaderImpl__LaterInitParam);
MARK_REF_PTR_T(::System::Xml::__XmlTextReaderImpl__NoNamespaceManager);
MARK_REF_PTR_T(::System::Xml::__XmlTextReaderImpl__NodeData);
MARK_REF_PTR_T(::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate);
MARK_REF_PTR_T(::System::Xml::__XmlTextReaderImpl__XmlContext);
MARK_VAL_T(::System::Xml::__XmlTextReaderImpl__ParsingState);
// Type: ::ParsingFunction
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11460))
// CS Name: ::XmlTextReaderImpl::ParsingFunction
struct CORDL_TYPE __XmlTextReaderImpl__ParsingFunction {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XmlTextReaderImpl__ParsingFunction_Unwrapped
  enum struct ____XmlTextReaderImpl__ParsingFunction_Unwrapped : int32_t {
    __E_ElementContent = static_cast<int32_t>(0x0),
    __E_NoData = static_cast<int32_t>(0x1),
    __E_OpenUrl = static_cast<int32_t>(0x2),
    __E_SwitchToInteractive = static_cast<int32_t>(0x3),
    __E_SwitchToInteractiveXmlDecl = static_cast<int32_t>(0x4),
    __E_DocumentContent = static_cast<int32_t>(0x5),
    __E_MoveToElementContent = static_cast<int32_t>(0x6),
    __E_PopElementContext = static_cast<int32_t>(0x7),
    __E_PopEmptyElementContext = static_cast<int32_t>(0x8),
    __E_ResetAttributesRootLevel = static_cast<int32_t>(0x9),
    __E_Error = static_cast<int32_t>(0xa),
    __E_Eof = static_cast<int32_t>(0xb),
    __E_ReaderClosed = static_cast<int32_t>(0xc),
    __E_EntityReference = static_cast<int32_t>(0xd),
    __E_InIncrementalRead = static_cast<int32_t>(0xe),
    __E_FragmentAttribute = static_cast<int32_t>(0xf),
    __E_ReportEndEntity = static_cast<int32_t>(0x10),
    __E_AfterResolveEntityInContent = static_cast<int32_t>(0x11),
    __E_AfterResolveEmptyEntityInContent = static_cast<int32_t>(0x12),
    __E_XmlDeclarationFragment = static_cast<int32_t>(0x13),
    __E_GoToEof = static_cast<int32_t>(0x14),
    __E_PartialTextValue = static_cast<int32_t>(0x15),
    __E_InReadAttributeValue = static_cast<int32_t>(0x16),
    __E_InReadValueChunk = static_cast<int32_t>(0x17),
    __E_InReadContentAsBinary = static_cast<int32_t>(0x18),
    __E_InReadElementContentAsBinary = static_cast<int32_t>(0x19),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XmlTextReaderImpl__ParsingFunction_Unwrapped() const noexcept {
    return static_cast<____XmlTextReaderImpl__ParsingFunction_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlTextReaderImpl__ParsingFunction(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__ParsingFunction();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field ElementContent value: static_cast<int32_t>(0x0)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const ElementContent;

  /// @brief Field NoData value: static_cast<int32_t>(0x1)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const NoData;

  /// @brief Field OpenUrl value: static_cast<int32_t>(0x2)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const OpenUrl;

  /// @brief Field SwitchToInteractive value: static_cast<int32_t>(0x3)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const SwitchToInteractive;

  /// @brief Field SwitchToInteractiveXmlDecl value: static_cast<int32_t>(0x4)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const SwitchToInteractiveXmlDecl;

  /// @brief Field DocumentContent value: static_cast<int32_t>(0x5)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const DocumentContent;

  /// @brief Field MoveToElementContent value: static_cast<int32_t>(0x6)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const MoveToElementContent;

  /// @brief Field PopElementContext value: static_cast<int32_t>(0x7)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const PopElementContext;

  /// @brief Field PopEmptyElementContext value: static_cast<int32_t>(0x8)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const PopEmptyElementContext;

  /// @brief Field ResetAttributesRootLevel value: static_cast<int32_t>(0x9)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const ResetAttributesRootLevel;

  /// @brief Field Error value: static_cast<int32_t>(0xa)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const Error;

  /// @brief Field Eof value: static_cast<int32_t>(0xb)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const Eof;

  /// @brief Field ReaderClosed value: static_cast<int32_t>(0xc)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const ReaderClosed;

  /// @brief Field EntityReference value: static_cast<int32_t>(0xd)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const EntityReference;

  /// @brief Field InIncrementalRead value: static_cast<int32_t>(0xe)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const InIncrementalRead;

  /// @brief Field FragmentAttribute value: static_cast<int32_t>(0xf)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const FragmentAttribute;

  /// @brief Field ReportEndEntity value: static_cast<int32_t>(0x10)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const ReportEndEntity;

  /// @brief Field AfterResolveEntityInContent value: static_cast<int32_t>(0x11)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const AfterResolveEntityInContent;

  /// @brief Field AfterResolveEmptyEntityInContent value: static_cast<int32_t>(0x12)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const AfterResolveEmptyEntityInContent;

  /// @brief Field XmlDeclarationFragment value: static_cast<int32_t>(0x13)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const XmlDeclarationFragment;

  /// @brief Field GoToEof value: static_cast<int32_t>(0x14)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const GoToEof;

  /// @brief Field PartialTextValue value: static_cast<int32_t>(0x15)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const PartialTextValue;

  /// @brief Field InReadAttributeValue value: static_cast<int32_t>(0x16)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const InReadAttributeValue;

  /// @brief Field InReadValueChunk value: static_cast<int32_t>(0x17)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const InReadValueChunk;

  /// @brief Field InReadContentAsBinary value: static_cast<int32_t>(0x18)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const InReadContentAsBinary;

  /// @brief Field InReadElementContentAsBinary value: static_cast<int32_t>(0x19)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const InReadElementContentAsBinary;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlTextReaderImpl__ParsingFunction, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__ParsingFunction, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml
// Type: ::ParsingMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11461))
// CS Name: ::XmlTextReaderImpl::ParsingMode
struct CORDL_TYPE __XmlTextReaderImpl__ParsingMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XmlTextReaderImpl__ParsingMode_Unwrapped
  enum struct ____XmlTextReaderImpl__ParsingMode_Unwrapped : int32_t {
    __E_Full = static_cast<int32_t>(0x0),
    __E_SkipNode = static_cast<int32_t>(0x1),
    __E_SkipContent = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XmlTextReaderImpl__ParsingMode_Unwrapped() const noexcept {
    return static_cast<____XmlTextReaderImpl__ParsingMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlTextReaderImpl__ParsingMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__ParsingMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Full value: static_cast<int32_t>(0x0)
  static ::System::Xml::__XmlTextReaderImpl__ParsingMode const Full;

  /// @brief Field SkipNode value: static_cast<int32_t>(0x1)
  static ::System::Xml::__XmlTextReaderImpl__ParsingMode const SkipNode;

  /// @brief Field SkipContent value: static_cast<int32_t>(0x2)
  static ::System::Xml::__XmlTextReaderImpl__ParsingMode const SkipContent;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlTextReaderImpl__ParsingMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__ParsingMode, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml
// Type: ::EntityType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11462))
// CS Name: ::XmlTextReaderImpl::EntityType
struct CORDL_TYPE __XmlTextReaderImpl__EntityType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XmlTextReaderImpl__EntityType_Unwrapped
  enum struct ____XmlTextReaderImpl__EntityType_Unwrapped : int32_t {
    __E_CharacterDec = static_cast<int32_t>(0x0),
    __E_CharacterHex = static_cast<int32_t>(0x1),
    __E_CharacterNamed = static_cast<int32_t>(0x2),
    __E_Expanded = static_cast<int32_t>(0x3),
    __E_Skipped = static_cast<int32_t>(0x4),
    __E_FakeExpanded = static_cast<int32_t>(0x5),
    __E_Unexpanded = static_cast<int32_t>(0x6),
    __E_ExpandedInAttribute = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XmlTextReaderImpl__EntityType_Unwrapped() const noexcept {
    return static_cast<____XmlTextReaderImpl__EntityType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlTextReaderImpl__EntityType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__EntityType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field CharacterDec value: static_cast<int32_t>(0x0)
  static ::System::Xml::__XmlTextReaderImpl__EntityType const CharacterDec;

  /// @brief Field CharacterHex value: static_cast<int32_t>(0x1)
  static ::System::Xml::__XmlTextReaderImpl__EntityType const CharacterHex;

  /// @brief Field CharacterNamed value: static_cast<int32_t>(0x2)
  static ::System::Xml::__XmlTextReaderImpl__EntityType const CharacterNamed;

  /// @brief Field Expanded value: static_cast<int32_t>(0x3)
  static ::System::Xml::__XmlTextReaderImpl__EntityType const Expanded;

  /// @brief Field Skipped value: static_cast<int32_t>(0x4)
  static ::System::Xml::__XmlTextReaderImpl__EntityType const Skipped;

  /// @brief Field FakeExpanded value: static_cast<int32_t>(0x5)
  static ::System::Xml::__XmlTextReaderImpl__EntityType const FakeExpanded;

  /// @brief Field Unexpanded value: static_cast<int32_t>(0x6)
  static ::System::Xml::__XmlTextReaderImpl__EntityType const Unexpanded;

  /// @brief Field ExpandedInAttribute value: static_cast<int32_t>(0x7)
  static ::System::Xml::__XmlTextReaderImpl__EntityType const ExpandedInAttribute;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlTextReaderImpl__EntityType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__EntityType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml
// Type: ::EntityExpandType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11463))
// CS Name: ::XmlTextReaderImpl::EntityExpandType
struct CORDL_TYPE __XmlTextReaderImpl__EntityExpandType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XmlTextReaderImpl__EntityExpandType_Unwrapped
  enum struct ____XmlTextReaderImpl__EntityExpandType_Unwrapped : int32_t {
    __E_All = static_cast<int32_t>(0x0),
    __E_OnlyGeneral = static_cast<int32_t>(0x1),
    __E_OnlyCharacter = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XmlTextReaderImpl__EntityExpandType_Unwrapped() const noexcept {
    return static_cast<____XmlTextReaderImpl__EntityExpandType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlTextReaderImpl__EntityExpandType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__EntityExpandType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field All value: static_cast<int32_t>(0x0)
  static ::System::Xml::__XmlTextReaderImpl__EntityExpandType const All;

  /// @brief Field OnlyGeneral value: static_cast<int32_t>(0x1)
  static ::System::Xml::__XmlTextReaderImpl__EntityExpandType const OnlyGeneral;

  /// @brief Field OnlyCharacter value: static_cast<int32_t>(0x2)
  static ::System::Xml::__XmlTextReaderImpl__EntityExpandType const OnlyCharacter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlTextReaderImpl__EntityExpandType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__EntityExpandType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml
// Type: ::IncrementalReadState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11464))
// CS Name: ::XmlTextReaderImpl::IncrementalReadState
struct CORDL_TYPE __XmlTextReaderImpl__IncrementalReadState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XmlTextReaderImpl__IncrementalReadState_Unwrapped
  enum struct ____XmlTextReaderImpl__IncrementalReadState_Unwrapped : int32_t {
    __E_Text = static_cast<int32_t>(0x0),
    __E_StartTag = static_cast<int32_t>(0x1),
    __E_PI = static_cast<int32_t>(0x2),
    __E_CDATA = static_cast<int32_t>(0x3),
    __E_Comment = static_cast<int32_t>(0x4),
    __E_Attributes = static_cast<int32_t>(0x5),
    __E_AttributeValue = static_cast<int32_t>(0x6),
    __E_ReadData = static_cast<int32_t>(0x7),
    __E_EndElement = static_cast<int32_t>(0x8),
    __E_End = static_cast<int32_t>(0x9),
    __E_ReadValueChunk_OnCachedValue = static_cast<int32_t>(0xa),
    __E_ReadValueChunk_OnPartialValue = static_cast<int32_t>(0xb),
    __E_ReadContentAsBinary_OnCachedValue = static_cast<int32_t>(0xc),
    __E_ReadContentAsBinary_OnPartialValue = static_cast<int32_t>(0xd),
    __E_ReadContentAsBinary_End = static_cast<int32_t>(0xe),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XmlTextReaderImpl__IncrementalReadState_Unwrapped() const noexcept {
    return static_cast<____XmlTextReaderImpl__IncrementalReadState_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlTextReaderImpl__IncrementalReadState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__IncrementalReadState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Text value: static_cast<int32_t>(0x0)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const Text;

  /// @brief Field StartTag value: static_cast<int32_t>(0x1)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const StartTag;

  /// @brief Field PI value: static_cast<int32_t>(0x2)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const PI;

  /// @brief Field CDATA value: static_cast<int32_t>(0x3)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const CDATA;

  /// @brief Field Comment value: static_cast<int32_t>(0x4)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const Comment;

  /// @brief Field Attributes value: static_cast<int32_t>(0x5)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const Attributes;

  /// @brief Field AttributeValue value: static_cast<int32_t>(0x6)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const AttributeValue;

  /// @brief Field ReadData value: static_cast<int32_t>(0x7)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const ReadData;

  /// @brief Field EndElement value: static_cast<int32_t>(0x8)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const EndElement;

  /// @brief Field End value: static_cast<int32_t>(0x9)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const End;

  /// @brief Field ReadValueChunk_OnCachedValue value: static_cast<int32_t>(0xa)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const ReadValueChunk_OnCachedValue;

  /// @brief Field ReadValueChunk_OnPartialValue value: static_cast<int32_t>(0xb)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const ReadValueChunk_OnPartialValue;

  /// @brief Field ReadContentAsBinary_OnCachedValue value: static_cast<int32_t>(0xc)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const ReadContentAsBinary_OnCachedValue;

  /// @brief Field ReadContentAsBinary_OnPartialValue value: static_cast<int32_t>(0xd)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const ReadContentAsBinary_OnPartialValue;

  /// @brief Field ReadContentAsBinary_End value: static_cast<int32_t>(0xe)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const ReadContentAsBinary_End;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlTextReaderImpl__IncrementalReadState, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__IncrementalReadState, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml
// Type: ::InitInputType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11466))
// CS Name: ::XmlTextReaderImpl::InitInputType
struct CORDL_TYPE __XmlTextReaderImpl__InitInputType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____XmlTextReaderImpl__InitInputType_Unwrapped
  enum struct ____XmlTextReaderImpl__InitInputType_Unwrapped : int32_t {
    __E_UriString = static_cast<int32_t>(0x0),
    __E_Stream = static_cast<int32_t>(0x1),
    __E_TextReader = static_cast<int32_t>(0x2),
    __E_Invalid = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____XmlTextReaderImpl__InitInputType_Unwrapped() const noexcept {
    return static_cast<____XmlTextReaderImpl__InitInputType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlTextReaderImpl__InitInputType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__InitInputType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field UriString value: static_cast<int32_t>(0x0)
  static ::System::Xml::__XmlTextReaderImpl__InitInputType const UriString;

  /// @brief Field Stream value: static_cast<int32_t>(0x1)
  static ::System::Xml::__XmlTextReaderImpl__InitInputType const Stream;

  /// @brief Field TextReader value: static_cast<int32_t>(0x2)
  static ::System::Xml::__XmlTextReaderImpl__InitInputType const TextReader;

  /// @brief Field Invalid value: static_cast<int32_t>(0x3)
  static ::System::Xml::__XmlTextReaderImpl__InitInputType const Invalid;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlTextReaderImpl__InitInputType, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__InitInputType, value__) == 0x0, "Offset mismatch!");

} // namespace System::Xml
// Type: ::LaterInitParam
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 92, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11466))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11465))
// CS Name: ::XmlTextReaderImpl::LaterInitParam*
class CORDL_TYPE __XmlTextReaderImpl__LaterInitParam : public ::System::Object {
public:
  // Declarations
  /// @brief Field useAsync, offset 0x10, size 0x1
  __declspec(property(get = __get_useAsync, put = __set_useAsync)) bool useAsync;

  /// @brief Field inputStream, offset 0x18, size 0x8
  __declspec(property(get = __get_inputStream, put = __set_inputStream))::System::IO::Stream* inputStream;

  /// @brief Field inputBytes, offset 0x20, size 0x8
  __declspec(property(get = __get_inputBytes, put = __set_inputBytes))::ArrayW<uint8_t, ::Array<uint8_t>*> inputBytes;

  /// @brief Field inputByteCount, offset 0x28, size 0x4
  __declspec(property(get = __get_inputByteCount, put = __set_inputByteCount)) int32_t inputByteCount;

  /// @brief Field inputbaseUri, offset 0x30, size 0x8
  __declspec(property(get = __get_inputbaseUri, put = __set_inputbaseUri))::System::Uri* inputbaseUri;

  /// @brief Field inputUriStr, offset 0x38, size 0x8
  __declspec(property(get = __get_inputUriStr, put = __set_inputUriStr))::StringW inputUriStr;

  /// @brief Field inputUriResolver, offset 0x40, size 0x8
  __declspec(property(get = __get_inputUriResolver, put = __set_inputUriResolver))::System::Xml::XmlResolver* inputUriResolver;

  /// @brief Field inputContext, offset 0x48, size 0x8
  __declspec(property(get = __get_inputContext, put = __set_inputContext))::System::Xml::XmlParserContext* inputContext;

  /// @brief Field inputTextReader, offset 0x50, size 0x8
  __declspec(property(get = __get_inputTextReader, put = __set_inputTextReader))::System::IO::TextReader* inputTextReader;

  /// @brief Field initType, offset 0x58, size 0x4
  __declspec(property(get = __get_initType, put = __set_initType))::System::Xml::__XmlTextReaderImpl__InitInputType initType;

  constexpr bool& __get_useAsync();

  constexpr bool const& __get_useAsync() const;

  constexpr void __set_useAsync(bool value);

  constexpr ::System::IO::Stream*& __get_inputStream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_inputStream() const;

  constexpr void __set_inputStream(::System::IO::Stream* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_inputBytes();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_inputBytes() const;

  constexpr void __set_inputBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_inputByteCount();

  constexpr int32_t const& __get_inputByteCount() const;

  constexpr void __set_inputByteCount(int32_t value);

  constexpr ::System::Uri*& __get_inputbaseUri();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __get_inputbaseUri() const;

  constexpr void __set_inputbaseUri(::System::Uri* value);

  constexpr ::StringW& __get_inputUriStr();

  constexpr ::StringW const& __get_inputUriStr() const;

  constexpr void __set_inputUriStr(::StringW value);

  constexpr ::System::Xml::XmlResolver*& __get_inputUriResolver();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlResolver*> const& __get_inputUriResolver() const;

  constexpr void __set_inputUriResolver(::System::Xml::XmlResolver* value);

  constexpr ::System::Xml::XmlParserContext*& __get_inputContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlParserContext*> const& __get_inputContext() const;

  constexpr void __set_inputContext(::System::Xml::XmlParserContext* value);

  constexpr ::System::IO::TextReader*& __get_inputTextReader();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::TextReader*> const& __get_inputTextReader() const;

  constexpr void __set_inputTextReader(::System::IO::TextReader* value);

  constexpr ::System::Xml::__XmlTextReaderImpl__InitInputType& __get_initType();

  constexpr ::System::Xml::__XmlTextReaderImpl__InitInputType const& __get_initType() const;

  constexpr void __set_initType(::System::Xml::__XmlTextReaderImpl__InitInputType value);

  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__LaterInitParam", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlTextReaderImpl__LaterInitParam(__XmlTextReaderImpl__LaterInitParam&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__LaterInitParam", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlTextReaderImpl__LaterInitParam(__XmlTextReaderImpl__LaterInitParam const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__LaterInitParam();

public:
  /// @brief Field useAsync, offset: 0x10, size: 0x1, def value: None
  bool ___useAsync;

  /// @brief Field inputStream, offset: 0x18, size: 0x8, def value: None
  ::System::IO::Stream* ___inputStream;

  /// @brief Field inputBytes, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___inputBytes;

  /// @brief Field inputByteCount, offset: 0x28, size: 0x4, def value: None
  int32_t ___inputByteCount;

  /// @brief Field inputbaseUri, offset: 0x30, size: 0x8, def value: None
  ::System::Uri* ___inputbaseUri;

  /// @brief Field inputUriStr, offset: 0x38, size: 0x8, def value: None
  ::StringW ___inputUriStr;

  /// @brief Field inputUriResolver, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::XmlResolver* ___inputUriResolver;

  /// @brief Field inputContext, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::XmlParserContext* ___inputContext;

  /// @brief Field inputTextReader, offset: 0x50, size: 0x8, def value: None
  ::System::IO::TextReader* ___inputTextReader;

  /// @brief Field initType, offset: 0x58, size: 0x4, def value: None
  ::System::Xml::__XmlTextReaderImpl__InitInputType ___initType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlTextReaderImpl__LaterInitParam, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__LaterInitParam, ___useAsync) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__LaterInitParam, ___inputStream) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__LaterInitParam, ___inputBytes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__LaterInitParam, ___inputByteCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__LaterInitParam, ___inputbaseUri) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__LaterInitParam, ___inputUriStr) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__LaterInitParam, ___inputUriResolver) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__LaterInitParam, ___inputContext) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__LaterInitParam, ___inputTextReader) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__LaterInitParam, ___initType) == 0x58, "Offset mismatch!");

} // namespace System::Xml
// Type: ::ParsingState
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 134, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11467))
// CS Name: ::XmlTextReaderImpl::ParsingState
struct CORDL_TYPE __XmlTextReaderImpl__ParsingState {
public:
  // Declarations
  __declspec(property(get = get_LineNo)) int32_t LineNo;

  __declspec(property(get = get_LinePos)) int32_t LinePos;

  /// @brief Method Clear, addr 0x28741e8, size 0x7c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Close, addr 0x2874264, size 0x38, virtual false, abstract: false, final false
  inline void Close(bool closeInput);

  /// @brief Method get_LineNo, addr 0x287429c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LineNo();

  /// @brief Method get_LinePos, addr 0x28742a4, size 0x10, virtual false, abstract: false, final false
  inline int32_t get_LinePos();

  // Ctor Parameters [CppParam { name: "chars", ty: "::ArrayW<char16_t,::Array<char16_t>*>", modifiers: "", def_value: None }, CppParam { name: "charPos", ty: "int32_t", modifiers: "", def_value: None
  // }, CppParam { name: "charsUsed", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "encoding", ty: "::System::Text::Encoding*", modifiers: "", def_value: None }, CppParam { name:
  // "appendMode", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "stream", ty: "::System::IO::Stream*", modifiers: "", def_value: None }, CppParam { name: "decoder", ty:
  // "::System::Text::Decoder*", modifiers: "", def_value: None }, CppParam { name: "bytes", ty: "::ArrayW<uint8_t,::Array<uint8_t>*>", modifiers: "", def_value: None }, CppParam { name: "bytePos",
  // ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "bytesUsed", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "textReader", ty: "::System::IO::TextReader*",
  // modifiers: "", def_value: None }, CppParam { name: "lineNo", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "lineStartPos", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "baseUriStr", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "baseUri", ty: "::System::Uri*", modifiers: "", def_value: None }, CppParam { name: "isEof", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "isStreamEof", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "entity", ty: "::System::Xml::IDtdEntityInfo*", modifiers:
  // "", def_value: None }, CppParam { name: "entityId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "eolNormalized", ty: "bool", modifiers: "", def_value: None }, CppParam {
  // name: "entityResolvedManually", ty: "bool", modifiers: "", def_value: None }]
  constexpr __XmlTextReaderImpl__ParsingState(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t charPos, int32_t charsUsed, ::System::Text::Encoding* encoding, bool appendMode,
                                              ::System::IO::Stream* stream, ::System::Text::Decoder* decoder, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t bytePos, int32_t bytesUsed,
                                              ::System::IO::TextReader* textReader, int32_t lineNo, int32_t lineStartPos, ::StringW baseUriStr, ::System::Uri* baseUri, bool isEof, bool isStreamEof,
                                              ::System::Xml::IDtdEntityInfo* entity, int32_t entityId, bool eolNormalized, bool entityResolvedManually) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__ParsingState();

  /// @brief Field chars, offset: 0x0, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> chars;

  /// @brief Field charPos, offset: 0x8, size: 0x4, def value: None
  int32_t charPos;

  /// @brief Field charsUsed, offset: 0xc, size: 0x4, def value: None
  int32_t charsUsed;

  /// @brief Field encoding, offset: 0x10, size: 0x8, def value: None
  ::System::Text::Encoding* encoding;

  /// @brief Field appendMode, offset: 0x18, size: 0x1, def value: None
  bool appendMode;

  /// @brief Field stream, offset: 0x20, size: 0x8, def value: None
  ::System::IO::Stream* stream;

  /// @brief Field decoder, offset: 0x28, size: 0x8, def value: None
  ::System::Text::Decoder* decoder;

  /// @brief Field bytes, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes;

  /// @brief Field bytePos, offset: 0x38, size: 0x4, def value: None
  int32_t bytePos;

  /// @brief Field bytesUsed, offset: 0x3c, size: 0x4, def value: None
  int32_t bytesUsed;

  /// @brief Field textReader, offset: 0x40, size: 0x8, def value: None
  ::System::IO::TextReader* textReader;

  /// @brief Field lineNo, offset: 0x48, size: 0x4, def value: None
  int32_t lineNo;

  /// @brief Field lineStartPos, offset: 0x4c, size: 0x4, def value: None
  int32_t lineStartPos;

  /// @brief Field baseUriStr, offset: 0x50, size: 0x8, def value: None
  ::StringW baseUriStr;

  /// @brief Field baseUri, offset: 0x58, size: 0x8, def value: None
  ::System::Uri* baseUri;

  /// @brief Field isEof, offset: 0x60, size: 0x1, def value: None
  bool isEof;

  /// @brief Field isStreamEof, offset: 0x61, size: 0x1, def value: None
  bool isStreamEof;

  /// @brief Field entity, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::IDtdEntityInfo* entity;

  /// @brief Field entityId, offset: 0x70, size: 0x4, def value: None
  int32_t entityId;

  /// @brief Field eolNormalized, offset: 0x74, size: 0x1, def value: None
  bool eolNormalized;

  /// @brief Field entityResolvedManually, offset: 0x75, size: 0x1, def value: None
  bool entityResolvedManually;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x78 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlTextReaderImpl__ParsingState, 0x78>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__ParsingState, chars) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__ParsingState, charPos) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__ParsingState, charsUsed) == 0xc, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__ParsingState, encoding) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__ParsingState, appendMode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__ParsingState, stream) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__ParsingState, decoder) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__ParsingState, bytes) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__ParsingState, bytePos) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__ParsingState, bytesUsed) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__ParsingState, textReader) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__ParsingState, lineNo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__ParsingState, lineStartPos) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__ParsingState, baseUriStr) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__ParsingState, baseUri) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__ParsingState, isEof) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__ParsingState, isStreamEof) == 0x61, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__ParsingState, entity) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__ParsingState, entityId) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__ParsingState, eolNormalized) == 0x74, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__ParsingState, entityResolvedManually) == 0x75, "Offset mismatch!");

} // namespace System::Xml
// Type: ::XmlContext
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11458))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11468))
// CS Name: ::XmlTextReaderImpl::XmlContext*
class CORDL_TYPE __XmlTextReaderImpl__XmlContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field xmlSpace, offset 0x10, size 0x4
  __declspec(property(get = __get_xmlSpace, put = __set_xmlSpace))::System::Xml::XmlSpace xmlSpace;

  /// @brief Field xmlLang, offset 0x18, size 0x8
  __declspec(property(get = __get_xmlLang, put = __set_xmlLang))::StringW xmlLang;

  /// @brief Field defaultNamespace, offset 0x20, size 0x8
  __declspec(property(get = __get_defaultNamespace, put = __set_defaultNamespace))::StringW defaultNamespace;

  /// @brief Field previousContext, offset 0x28, size 0x8
  __declspec(property(get = __get_previousContext, put = __set_previousContext))::System::Xml::__XmlTextReaderImpl__XmlContext* previousContext;

  constexpr ::System::Xml::XmlSpace& __get_xmlSpace();

  constexpr ::System::Xml::XmlSpace const& __get_xmlSpace() const;

  constexpr void __set_xmlSpace(::System::Xml::XmlSpace value);

  constexpr ::StringW& __get_xmlLang();

  constexpr ::StringW const& __get_xmlLang() const;

  constexpr void __set_xmlLang(::StringW value);

  constexpr ::StringW& __get_defaultNamespace();

  constexpr ::StringW const& __get_defaultNamespace() const;

  constexpr void __set_defaultNamespace(::StringW value);

  constexpr ::System::Xml::__XmlTextReaderImpl__XmlContext*& __get_previousContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::__XmlTextReaderImpl__XmlContext*> const& __get_previousContext() const;

  constexpr void __set_previousContext(::System::Xml::__XmlTextReaderImpl__XmlContext* value);

  static inline ::System::Xml::__XmlTextReaderImpl__XmlContext* New_ctor();

  /// @brief Method .ctor, addr 0x28742b4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::__XmlTextReaderImpl__XmlContext* New_ctor(::System::Xml::__XmlTextReaderImpl__XmlContext* previousContext);

  /// @brief Method .ctor, addr 0x2874318, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::__XmlTextReaderImpl__XmlContext* previousContext);

  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__XmlContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlTextReaderImpl__XmlContext(__XmlTextReaderImpl__XmlContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__XmlContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlTextReaderImpl__XmlContext(__XmlTextReaderImpl__XmlContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__XmlContext();

public:
  /// @brief Field xmlSpace, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::XmlSpace ___xmlSpace;

  /// @brief Field xmlLang, offset: 0x18, size: 0x8, def value: None
  ::StringW ___xmlLang;

  /// @brief Field defaultNamespace, offset: 0x20, size: 0x8, def value: None
  ::StringW ___defaultNamespace;

  /// @brief Field previousContext, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::__XmlTextReaderImpl__XmlContext* ___previousContext;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlTextReaderImpl__XmlContext, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__XmlContext, ___xmlSpace) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__XmlContext, ___xmlLang) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__XmlContext, ___defaultNamespace) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__XmlContext, ___previousContext) == 0x28, "Offset mismatch!");

} // namespace System::Xml
// Type: ::NoNamespaceManager
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11570))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11469))
// CS Name: ::XmlTextReaderImpl::NoNamespaceManager*
class CORDL_TYPE __XmlTextReaderImpl__NoNamespaceManager : public ::System::Xml::XmlNamespaceManager {
public:
  // Declarations
  __declspec(property(get = get_DefaultNamespace))::StringW DefaultNamespace;

  static inline ::System::Xml::__XmlTextReaderImpl__NoNamespaceManager* New_ctor();

  /// @brief Method .ctor, addr 0x2874358, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DefaultNamespace, addr 0x2874360, size 0x48, virtual true, abstract: false, final false
  inline ::StringW get_DefaultNamespace();

  /// @brief Method PushScope, addr 0x28743a8, size 0x4, virtual true, abstract: false, final false
  inline void PushScope();

  /// @brief Method PopScope, addr 0x28743ac, size 0x8, virtual true, abstract: false, final false
  inline bool PopScope();

  /// @brief Method AddNamespace, addr 0x28743b4, size 0x4, virtual true, abstract: false, final false
  inline void AddNamespace(::StringW prefix, ::StringW uri);

  /// @brief Method RemoveNamespace, addr 0x28743b8, size 0x4, virtual true, abstract: false, final false
  inline void RemoveNamespace(::StringW prefix, ::StringW uri);

  /// @brief Method GetEnumerator, addr 0x28743bc, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method LookupNamespace, addr 0x28743c4, size 0x48, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method LookupPrefix, addr 0x287440c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW LookupPrefix(::StringW uri);

  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__NoNamespaceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlTextReaderImpl__NoNamespaceManager(__XmlTextReaderImpl__NoNamespaceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__NoNamespaceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlTextReaderImpl__NoNamespaceManager(__XmlTextReaderImpl__NoNamespaceManager const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__NoNamespaceManager();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager, 0x50>, "Size mismatch!");

} // namespace System::Xml
// Type: ::DtdParserProxy
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11470))
// CS Name: ::XmlTextReaderImpl::DtdParserProxy*
class CORDL_TYPE __XmlTextReaderImpl__DtdParserProxy : public ::System::Object {
public:
  // Declarations
  /// @brief Field reader, offset 0x10, size 0x8
  __declspec(property(get = __get_reader, put = __set_reader))::System::Xml::XmlTextReaderImpl* reader;

  __declspec(property(get = System_Xml_IDtdParserAdapter_get_NameTable))::System::Xml::XmlNameTable* System_Xml_IDtdParserAdapter_NameTable;

  __declspec(property(get = System_Xml_IDtdParserAdapter_get_NamespaceResolver))::System::Xml::IXmlNamespaceResolver* System_Xml_IDtdParserAdapter_NamespaceResolver;

  __declspec(property(get = System_Xml_IDtdParserAdapter_get_BaseUri))::System::Uri* System_Xml_IDtdParserAdapter_BaseUri;

  __declspec(property(get = System_Xml_IDtdParserAdapter_get_IsEof)) bool System_Xml_IDtdParserAdapter_IsEof;

  __declspec(property(get = System_Xml_IDtdParserAdapter_get_ParsingBuffer))::ArrayW<char16_t, ::Array<char16_t>*> System_Xml_IDtdParserAdapter_ParsingBuffer;

  __declspec(property(get = System_Xml_IDtdParserAdapter_get_ParsingBufferLength)) int32_t System_Xml_IDtdParserAdapter_ParsingBufferLength;

  __declspec(property(get = System_Xml_IDtdParserAdapter_get_CurrentPosition, put = System_Xml_IDtdParserAdapter_set_CurrentPosition)) int32_t System_Xml_IDtdParserAdapter_CurrentPosition;

  __declspec(property(get = System_Xml_IDtdParserAdapter_get_EntityStackLength)) int32_t System_Xml_IDtdParserAdapter_EntityStackLength;

  __declspec(property(get = System_Xml_IDtdParserAdapter_get_IsEntityEolNormalized)) bool System_Xml_IDtdParserAdapter_IsEntityEolNormalized;

  __declspec(property(get = System_Xml_IDtdParserAdapter_get_LineNo)) int32_t System_Xml_IDtdParserAdapter_LineNo;

  __declspec(property(get = System_Xml_IDtdParserAdapter_get_LineStartPosition)) int32_t System_Xml_IDtdParserAdapter_LineStartPosition;

  __declspec(property(get = System_Xml_IDtdParserAdapterWithValidation_get_DtdValidation)) bool System_Xml_IDtdParserAdapterWithValidation_DtdValidation;

  __declspec(property(
      get = System_Xml_IDtdParserAdapterWithValidation_get_ValidationEventHandling))::System::Xml::IValidationEventHandling* System_Xml_IDtdParserAdapterWithValidation_ValidationEventHandling;

  __declspec(property(get = System_Xml_IDtdParserAdapterV1_get_Normalization)) bool System_Xml_IDtdParserAdapterV1_Normalization;

  __declspec(property(get = System_Xml_IDtdParserAdapterV1_get_Namespaces)) bool System_Xml_IDtdParserAdapterV1_Namespaces;

  __declspec(property(get = System_Xml_IDtdParserAdapterV1_get_V1CompatibilityMode)) bool System_Xml_IDtdParserAdapterV1_V1CompatibilityMode;

  /// @brief Convert operator to "::System::Xml::IDtdParserAdapterV1"
  constexpr operator ::System::Xml::IDtdParserAdapterV1*() noexcept;

  /// @brief Convert to "::System::Xml::IDtdParserAdapterV1"
  constexpr ::System::Xml::IDtdParserAdapterV1* i___System__Xml__IDtdParserAdapterV1() noexcept;

  /// @brief Convert operator to "::System::Xml::IDtdParserAdapterWithValidation"
  constexpr operator ::System::Xml::IDtdParserAdapterWithValidation*() noexcept;

  /// @brief Convert to "::System::Xml::IDtdParserAdapterWithValidation"
  constexpr ::System::Xml::IDtdParserAdapterWithValidation* i___System__Xml__IDtdParserAdapterWithValidation() noexcept;

  /// @brief Convert operator to "::System::Xml::IDtdParserAdapter"
  constexpr operator ::System::Xml::IDtdParserAdapter*() noexcept;

  /// @brief Convert to "::System::Xml::IDtdParserAdapter"
  constexpr ::System::Xml::IDtdParserAdapter* i___System__Xml__IDtdParserAdapter() noexcept;

  constexpr ::System::Xml::XmlTextReaderImpl*& __get_reader();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlTextReaderImpl*> const& __get_reader() const;

  constexpr void __set_reader(::System::Xml::XmlTextReaderImpl* value);

  static inline ::System::Xml::__XmlTextReaderImpl__DtdParserProxy* New_ctor(::System::Xml::XmlTextReaderImpl* reader);

  /// @brief Method .ctor, addr 0x2874414, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlTextReaderImpl* reader);

  /// @brief Method System.Xml.IDtdParserAdapter.get_NameTable, addr 0x287443c, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Xml::XmlNameTable* System_Xml_IDtdParserAdapter_get_NameTable();

  /// @brief Method System.Xml.IDtdParserAdapter.get_NamespaceResolver, addr 0x2874458, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Xml::IXmlNamespaceResolver* System_Xml_IDtdParserAdapter_get_NamespaceResolver();

  /// @brief Method System.Xml.IDtdParserAdapter.get_BaseUri, addr 0x2874474, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Uri* System_Xml_IDtdParserAdapter_get_BaseUri();

  /// @brief Method System.Xml.IDtdParserAdapter.get_IsEof, addr 0x2874490, size 0x1c, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdParserAdapter_get_IsEof();

  /// @brief Method System.Xml.IDtdParserAdapter.get_ParsingBuffer, addr 0x28744ac, size 0x1c, virtual true, abstract: false, final true
  inline ::ArrayW<char16_t, ::Array<char16_t>*> System_Xml_IDtdParserAdapter_get_ParsingBuffer();

  /// @brief Method System.Xml.IDtdParserAdapter.get_ParsingBufferLength, addr 0x28744c8, size 0x1c, virtual true, abstract: false, final true
  inline int32_t System_Xml_IDtdParserAdapter_get_ParsingBufferLength();

  /// @brief Method System.Xml.IDtdParserAdapter.get_CurrentPosition, addr 0x28744e4, size 0x1c, virtual true, abstract: false, final true
  inline int32_t System_Xml_IDtdParserAdapter_get_CurrentPosition();

  /// @brief Method System.Xml.IDtdParserAdapter.set_CurrentPosition, addr 0x2874500, size 0x1c, virtual true, abstract: false, final true
  inline void System_Xml_IDtdParserAdapter_set_CurrentPosition(int32_t value);

  /// @brief Method System.Xml.IDtdParserAdapter.get_EntityStackLength, addr 0x287451c, size 0x1c, virtual true, abstract: false, final true
  inline int32_t System_Xml_IDtdParserAdapter_get_EntityStackLength();

  /// @brief Method System.Xml.IDtdParserAdapter.get_IsEntityEolNormalized, addr 0x2874538, size 0x1c, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdParserAdapter_get_IsEntityEolNormalized();

  /// @brief Method System.Xml.IDtdParserAdapter.OnNewLine, addr 0x2874554, size 0x1c, virtual true, abstract: false, final true
  inline void System_Xml_IDtdParserAdapter_OnNewLine(int32_t pos);

  /// @brief Method System.Xml.IDtdParserAdapter.get_LineNo, addr 0x2874570, size 0x1c, virtual true, abstract: false, final true
  inline int32_t System_Xml_IDtdParserAdapter_get_LineNo();

  /// @brief Method System.Xml.IDtdParserAdapter.get_LineStartPosition, addr 0x287458c, size 0x1c, virtual true, abstract: false, final true
  inline int32_t System_Xml_IDtdParserAdapter_get_LineStartPosition();

  /// @brief Method System.Xml.IDtdParserAdapter.ReadData, addr 0x28745a8, size 0x1c, virtual true, abstract: false, final true
  inline int32_t System_Xml_IDtdParserAdapter_ReadData();

  /// @brief Method System.Xml.IDtdParserAdapter.ParseNumericCharRef, addr 0x28745c4, size 0x1c, virtual true, abstract: false, final true
  inline int32_t System_Xml_IDtdParserAdapter_ParseNumericCharRef(::System::Text::StringBuilder* internalSubsetBuilder);

  /// @brief Method System.Xml.IDtdParserAdapter.ParseNamedCharRef, addr 0x28745e0, size 0x20, virtual true, abstract: false, final true
  inline int32_t System_Xml_IDtdParserAdapter_ParseNamedCharRef(bool expand, ::System::Text::StringBuilder* internalSubsetBuilder);

  /// @brief Method System.Xml.IDtdParserAdapter.ParsePI, addr 0x2874600, size 0x1c, virtual true, abstract: false, final true
  inline void System_Xml_IDtdParserAdapter_ParsePI(::System::Text::StringBuilder* sb);

  /// @brief Method System.Xml.IDtdParserAdapter.ParseComment, addr 0x287461c, size 0x1c, virtual true, abstract: false, final true
  inline void System_Xml_IDtdParserAdapter_ParseComment(::System::Text::StringBuilder* sb);

  /// @brief Method System.Xml.IDtdParserAdapter.PushEntity, addr 0x2874638, size 0x1c, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdParserAdapter_PushEntity(::System::Xml::IDtdEntityInfo* entity, ByRef<int32_t> entityId);

  /// @brief Method System.Xml.IDtdParserAdapter.PopEntity, addr 0x2874654, size 0x1c, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdParserAdapter_PopEntity(ByRef<::System::Xml::IDtdEntityInfo*> oldEntity, ByRef<int32_t> newEntityId);

  /// @brief Method System.Xml.IDtdParserAdapter.PushExternalSubset, addr 0x2874670, size 0x1c, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdParserAdapter_PushExternalSubset(::StringW systemId, ::StringW publicId);

  /// @brief Method System.Xml.IDtdParserAdapter.PushInternalDtd, addr 0x287468c, size 0x1c, virtual true, abstract: false, final true
  inline void System_Xml_IDtdParserAdapter_PushInternalDtd(::StringW baseUri, ::StringW internalDtd);

  /// @brief Method System.Xml.IDtdParserAdapter.Throw, addr 0x28746a8, size 0x1c, virtual true, abstract: false, final true
  inline void System_Xml_IDtdParserAdapter_Throw(::System::Exception* e);

  /// @brief Method System.Xml.IDtdParserAdapter.OnSystemId, addr 0x28746c4, size 0x1c, virtual true, abstract: false, final true
  inline void System_Xml_IDtdParserAdapter_OnSystemId(::StringW systemId, ::System::Xml::LineInfo keywordLineInfo, ::System::Xml::LineInfo systemLiteralLineInfo);

  /// @brief Method System.Xml.IDtdParserAdapter.OnPublicId, addr 0x28746e0, size 0x1c, virtual true, abstract: false, final true
  inline void System_Xml_IDtdParserAdapter_OnPublicId(::StringW publicId, ::System::Xml::LineInfo keywordLineInfo, ::System::Xml::LineInfo publicLiteralLineInfo);

  /// @brief Method System.Xml.IDtdParserAdapterWithValidation.get_DtdValidation, addr 0x28746fc, size 0x1c, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdParserAdapterWithValidation_get_DtdValidation();

  /// @brief Method System.Xml.IDtdParserAdapterWithValidation.get_ValidationEventHandling, addr 0x2874718, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Xml::IValidationEventHandling* System_Xml_IDtdParserAdapterWithValidation_get_ValidationEventHandling();

  /// @brief Method System.Xml.IDtdParserAdapterV1.get_Normalization, addr 0x2874734, size 0x1c, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdParserAdapterV1_get_Normalization();

  /// @brief Method System.Xml.IDtdParserAdapterV1.get_Namespaces, addr 0x2874750, size 0x1c, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdParserAdapterV1_get_Namespaces();

  /// @brief Method System.Xml.IDtdParserAdapterV1.get_V1CompatibilityMode, addr 0x287476c, size 0x1c, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdParserAdapterV1_get_V1CompatibilityMode();

  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__DtdParserProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlTextReaderImpl__DtdParserProxy(__XmlTextReaderImpl__DtdParserProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__DtdParserProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlTextReaderImpl__DtdParserProxy(__XmlTextReaderImpl__DtdParserProxy const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__DtdParserProxy();

public:
  /// @brief Field reader, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlTextReaderImpl* ___reader;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlTextReaderImpl__DtdParserProxy, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__DtdParserProxy, ___reader) == 0x10, "Offset mismatch!");

} // namespace System::Xml
// Type: ::NodeData
// SizeInfo { instance_size: 144, native_size: -1, calculated_instance_size: 144, calculated_native_size: 144, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11532)), TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11571))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11471))
// CS Name: ::XmlTextReaderImpl::NodeData*
class CORDL_TYPE __XmlTextReaderImpl__NodeData : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x4
  __declspec(property(get = __get_type, put = __set_type))::System::Xml::XmlNodeType type;

  /// @brief Field localName, offset 0x18, size 0x8
  __declspec(property(get = __get_localName, put = __set_localName))::StringW localName;

  /// @brief Field prefix, offset 0x20, size 0x8
  __declspec(property(get = __get_prefix, put = __set_prefix))::StringW prefix;

  /// @brief Field ns, offset 0x28, size 0x8
  __declspec(property(get = __get_ns, put = __set_ns))::StringW ns;

  /// @brief Field nameWPrefix, offset 0x30, size 0x8
  __declspec(property(get = __get_nameWPrefix, put = __set_nameWPrefix))::StringW nameWPrefix;

  /// @brief Field value, offset 0x38, size 0x8
  __declspec(property(get = __get_value, put = __set_value))::StringW value;

  /// @brief Field chars, offset 0x40, size 0x8
  __declspec(property(get = __get_chars, put = __set_chars))::ArrayW<char16_t, ::Array<char16_t>*> chars;

  /// @brief Field valueStartPos, offset 0x48, size 0x4
  __declspec(property(get = __get_valueStartPos, put = __set_valueStartPos)) int32_t valueStartPos;

  /// @brief Field valueLength, offset 0x4c, size 0x4
  __declspec(property(get = __get_valueLength, put = __set_valueLength)) int32_t valueLength;

  /// @brief Field lineInfo, offset 0x50, size 0x8
  __declspec(property(get = __get_lineInfo, put = __set_lineInfo))::System::Xml::LineInfo lineInfo;

  /// @brief Field lineInfo2, offset 0x58, size 0x8
  __declspec(property(get = __get_lineInfo2, put = __set_lineInfo2))::System::Xml::LineInfo lineInfo2;

  /// @brief Field quoteChar, offset 0x60, size 0x2
  __declspec(property(get = __get_quoteChar, put = __set_quoteChar)) char16_t quoteChar;

  /// @brief Field depth, offset 0x64, size 0x4
  __declspec(property(get = __get_depth, put = __set_depth)) int32_t depth;

  /// @brief Field isEmptyOrDefault, offset 0x68, size 0x1
  __declspec(property(get = __get_isEmptyOrDefault, put = __set_isEmptyOrDefault)) bool isEmptyOrDefault;

  /// @brief Field entityId, offset 0x6c, size 0x4
  __declspec(property(get = __get_entityId, put = __set_entityId)) int32_t entityId;

  /// @brief Field xmlContextPushed, offset 0x70, size 0x1
  __declspec(property(get = __get_xmlContextPushed, put = __set_xmlContextPushed)) bool xmlContextPushed;

  /// @brief Field nextAttrValueChunk, offset 0x78, size 0x8
  __declspec(property(get = __get_nextAttrValueChunk, put = __set_nextAttrValueChunk))::System::Xml::__XmlTextReaderImpl__NodeData* nextAttrValueChunk;

  /// @brief Field schemaType, offset 0x80, size 0x8
  __declspec(property(get = __get_schemaType, put = __set_schemaType))::System::Object* schemaType;

  /// @brief Field typedValue, offset 0x88, size 0x8
  __declspec(property(get = __get_typedValue, put = __set_typedValue))::System::Object* typedValue;

  /// @brief Field s_None, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_None, put = setStaticF_s_None))::System::Xml::__XmlTextReaderImpl__NodeData* s_None;

  __declspec(property(get = get_LineNo)) int32_t LineNo;

  __declspec(property(get = get_LinePos)) int32_t LinePos;

  __declspec(property(get = get_IsEmptyElement, put = set_IsEmptyElement)) bool IsEmptyElement;

  __declspec(property(get = get_IsDefaultAttribute, put = set_IsDefaultAttribute)) bool IsDefaultAttribute;

  __declspec(property(get = get_ValueBuffered)) bool ValueBuffered;

  __declspec(property(get = get_StringValue))::StringW StringValue;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable() noexcept;

  constexpr ::System::Xml::XmlNodeType& __get_type();

  constexpr ::System::Xml::XmlNodeType const& __get_type() const;

  constexpr void __set_type(::System::Xml::XmlNodeType value);

  constexpr ::StringW& __get_localName();

  constexpr ::StringW const& __get_localName() const;

  constexpr void __set_localName(::StringW value);

  constexpr ::StringW& __get_prefix();

  constexpr ::StringW const& __get_prefix() const;

  constexpr void __set_prefix(::StringW value);

  constexpr ::StringW& __get_ns();

  constexpr ::StringW const& __get_ns() const;

  constexpr void __set_ns(::StringW value);

  constexpr ::StringW& __get_nameWPrefix();

  constexpr ::StringW const& __get_nameWPrefix() const;

  constexpr void __set_nameWPrefix(::StringW value);

  constexpr ::StringW& __get_value();

  constexpr ::StringW const& __get_value() const;

  constexpr void __set_value(::StringW value);

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __get_chars();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __get_chars() const;

  constexpr void __set_chars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr int32_t& __get_valueStartPos();

  constexpr int32_t const& __get_valueStartPos() const;

  constexpr void __set_valueStartPos(int32_t value);

  constexpr int32_t& __get_valueLength();

  constexpr int32_t const& __get_valueLength() const;

  constexpr void __set_valueLength(int32_t value);

  constexpr ::System::Xml::LineInfo& __get_lineInfo();

  constexpr ::System::Xml::LineInfo const& __get_lineInfo() const;

  constexpr void __set_lineInfo(::System::Xml::LineInfo value);

  constexpr ::System::Xml::LineInfo& __get_lineInfo2();

  constexpr ::System::Xml::LineInfo const& __get_lineInfo2() const;

  constexpr void __set_lineInfo2(::System::Xml::LineInfo value);

  constexpr char16_t& __get_quoteChar();

  constexpr char16_t const& __get_quoteChar() const;

  constexpr void __set_quoteChar(char16_t value);

  constexpr int32_t& __get_depth();

  constexpr int32_t const& __get_depth() const;

  constexpr void __set_depth(int32_t value);

  constexpr bool& __get_isEmptyOrDefault();

  constexpr bool const& __get_isEmptyOrDefault() const;

  constexpr void __set_isEmptyOrDefault(bool value);

  constexpr int32_t& __get_entityId();

  constexpr int32_t const& __get_entityId() const;

  constexpr void __set_entityId(int32_t value);

  constexpr bool& __get_xmlContextPushed();

  constexpr bool const& __get_xmlContextPushed() const;

  constexpr void __set_xmlContextPushed(bool value);

  constexpr ::System::Xml::__XmlTextReaderImpl__NodeData*& __get_nextAttrValueChunk();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::__XmlTextReaderImpl__NodeData*> const& __get_nextAttrValueChunk() const;

  constexpr void __set_nextAttrValueChunk(::System::Xml::__XmlTextReaderImpl__NodeData* value);

  constexpr ::System::Object*& __get_schemaType();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_schemaType() const;

  constexpr void __set_schemaType(::System::Object* value);

  constexpr ::System::Object*& __get_typedValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_typedValue() const;

  constexpr void __set_typedValue(::System::Object* value);

  static inline void setStaticF_s_None(::System::Xml::__XmlTextReaderImpl__NodeData* value);

  static inline ::System::Xml::__XmlTextReaderImpl__NodeData* getStaticF_s_None();

  /// @brief Method get_None, addr 0x2874788, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Xml::__XmlTextReaderImpl__NodeData* get_None();

  static inline ::System::Xml::__XmlTextReaderImpl__NodeData* New_ctor();

  /// @brief Method .ctor, addr 0x2874828, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LineNo, addr 0x28748dc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LineNo();

  /// @brief Method get_LinePos, addr 0x28748e4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LinePos();

  /// @brief Method get_IsEmptyElement, addr 0x28748ec, size 0x24, virtual false, abstract: false, final false
  inline bool get_IsEmptyElement();

  /// @brief Method set_IsEmptyElement, addr 0x2874910, size 0xc, virtual false, abstract: false, final false
  inline void set_IsEmptyElement(bool value);

  /// @brief Method get_IsDefaultAttribute, addr 0x287491c, size 0x24, virtual false, abstract: false, final false
  inline bool get_IsDefaultAttribute();

  /// @brief Method set_IsDefaultAttribute, addr 0x2874940, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDefaultAttribute(bool value);

  /// @brief Method get_ValueBuffered, addr 0x287494c, size 0x10, virtual false, abstract: false, final false
  inline bool get_ValueBuffered();

  /// @brief Method get_StringValue, addr 0x287495c, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_StringValue();

  /// @brief Method TrimSpacesInValue, addr 0x2874988, size 0x3c, virtual false, abstract: false, final false
  inline void TrimSpacesInValue();

  /// @brief Method Clear, addr 0x2874850, size 0x8c, virtual false, abstract: false, final false
  inline void Clear(::System::Xml::XmlNodeType type);

  /// @brief Method ClearName, addr 0x28749c4, size 0x54, virtual false, abstract: false, final false
  inline void ClearName();

  /// @brief Method SetLineInfo, addr 0x2874a18, size 0xc, virtual false, abstract: false, final false
  inline void SetLineInfo(int32_t lineNo, int32_t linePos);

  /// @brief Method SetLineInfo2, addr 0x2874a24, size 0xc, virtual false, abstract: false, final false
  inline void SetLineInfo2(int32_t lineNo, int32_t linePos);

  /// @brief Method SetValueNode, addr 0x2874a30, size 0x70, virtual false, abstract: false, final false
  inline void SetValueNode(::System::Xml::XmlNodeType type, ::StringW value);

  /// @brief Method SetValueNode, addr 0x2874aa0, size 0x7c, virtual false, abstract: false, final false
  inline void SetValueNode(::System::Xml::XmlNodeType type, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t startPos, int32_t len);

  /// @brief Method SetNamedNode, addr 0x2874b1c, size 0xa8, virtual false, abstract: false, final false
  inline void SetNamedNode(::System::Xml::XmlNodeType type, ::StringW localName);

  /// @brief Method SetNamedNode, addr 0x2874bc4, size 0x88, virtual false, abstract: false, final false
  inline void SetNamedNode(::System::Xml::XmlNodeType type, ::StringW localName, ::StringW prefix, ::StringW nameWPrefix);

  /// @brief Method SetValue, addr 0x2874c4c, size 0x10, virtual false, abstract: false, final false
  inline void SetValue(::StringW value);

  /// @brief Method SetValue, addr 0x2874c5c, size 0xc, virtual false, abstract: false, final false
  inline void SetValue(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t startPos, int32_t len);

  /// @brief Method OnBufferInvalidated, addr 0x2874c68, size 0x38, virtual false, abstract: false, final false
  inline void OnBufferInvalidated();

  /// @brief Method CopyTo, addr 0x2874ca0, size 0x80, virtual false, abstract: false, final false
  inline void CopyTo(int32_t valueOffset, ::System::Text::StringBuilder* sb);

  /// @brief Method GetNameWPrefix, addr 0x2874d20, size 0x14, virtual false, abstract: false, final false
  inline ::StringW GetNameWPrefix(::System::Xml::XmlNameTable* nt);

  /// @brief Method CreateNameWPrefix, addr 0x2874d34, size 0x8c, virtual false, abstract: false, final false
  inline ::StringW CreateNameWPrefix(::System::Xml::XmlNameTable* nt);

  /// @brief Method System.IComparable.CompareTo, addr 0x2874dc0, size 0xd8, virtual true, abstract: false, final true
  inline int32_t System_IComparable_CompareTo(::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__NodeData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlTextReaderImpl__NodeData(__XmlTextReaderImpl__NodeData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__NodeData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlTextReaderImpl__NodeData(__XmlTextReaderImpl__NodeData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__NodeData();

public:
  /// @brief Field type, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::XmlNodeType ___type;

  /// @brief Field localName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___localName;

  /// @brief Field prefix, offset: 0x20, size: 0x8, def value: None
  ::StringW ___prefix;

  /// @brief Field ns, offset: 0x28, size: 0x8, def value: None
  ::StringW ___ns;

  /// @brief Field nameWPrefix, offset: 0x30, size: 0x8, def value: None
  ::StringW ___nameWPrefix;

  /// @brief Field value, offset: 0x38, size: 0x8, def value: None
  ::StringW ___value;

  /// @brief Field chars, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<char16_t, ::Array<char16_t>*> ___chars;

  /// @brief Field valueStartPos, offset: 0x48, size: 0x4, def value: None
  int32_t ___valueStartPos;

  /// @brief Field valueLength, offset: 0x4c, size: 0x4, def value: None
  int32_t ___valueLength;

  /// @brief Field lineInfo, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::LineInfo ___lineInfo;

  /// @brief Field lineInfo2, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::LineInfo ___lineInfo2;

  /// @brief Field quoteChar, offset: 0x60, size: 0x2, def value: None
  char16_t ___quoteChar;

  /// @brief Field depth, offset: 0x64, size: 0x4, def value: None
  int32_t ___depth;

  /// @brief Field isEmptyOrDefault, offset: 0x68, size: 0x1, def value: None
  bool ___isEmptyOrDefault;

  /// @brief Field entityId, offset: 0x6c, size: 0x4, def value: None
  int32_t ___entityId;

  /// @brief Field xmlContextPushed, offset: 0x70, size: 0x1, def value: None
  bool ___xmlContextPushed;

  /// @brief Field nextAttrValueChunk, offset: 0x78, size: 0x8, def value: None
  ::System::Xml::__XmlTextReaderImpl__NodeData* ___nextAttrValueChunk;

  /// @brief Field schemaType, offset: 0x80, size: 0x8, def value: None
  ::System::Object* ___schemaType;

  /// @brief Field typedValue, offset: 0x88, size: 0x8, def value: None
  ::System::Object* ___typedValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlTextReaderImpl__NodeData, 0x90>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__NodeData, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__NodeData, ___localName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__NodeData, ___prefix) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__NodeData, ___ns) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__NodeData, ___nameWPrefix) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__NodeData, ___value) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__NodeData, ___chars) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__NodeData, ___valueStartPos) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__NodeData, ___valueLength) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__NodeData, ___lineInfo) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__NodeData, ___lineInfo2) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__NodeData, ___quoteChar) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__NodeData, ___depth) == 0x64, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__NodeData, ___isEmptyOrDefault) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__NodeData, ___entityId) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__NodeData, ___xmlContextPushed) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__NodeData, ___nextAttrValueChunk) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__NodeData, ___schemaType) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlTextReaderImpl__NodeData, ___typedValue) == 0x88, "Offset mismatch!");

} // namespace System::Xml
// Type: ::DtdDefaultAttributeInfoToNodeDataComparer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11472))
// CS Name: ::XmlTextReaderImpl::DtdDefaultAttributeInfoToNodeDataComparer*
class CORDL_TYPE __XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_instance, put = setStaticF_s_instance))::System::Collections::Generic::IComparer_1<::System::Object*>* s_instance;

  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::System::Object*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IComparer_1<::System::Object*>* i___System__Collections__Generic__IComparer_1___System__Object__() noexcept;

  static inline void setStaticF_s_instance(::System::Collections::Generic::IComparer_1<::System::Object*>* value);

  static inline ::System::Collections::Generic::IComparer_1<::System::Object*>* getStaticF_s_instance();

  /// @brief Method get_Instance, addr 0x2874e98, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IComparer_1<::System::Object*>* get_Instance();

  /// @brief Method Compare, addr 0x2874ef0, size 0x348, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* x, ::System::Object* y);

  static inline ::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer* New_ctor();

  /// @brief Method .ctor, addr 0x2875238, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer(__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer(__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer, 0x10>, "Size mismatch!");

} // namespace System::Xml
// Type: ::OnDefaultAttributeUseDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11473))
// CS Name: ::XmlTextReaderImpl::OnDefaultAttributeUseDelegate*
class CORDL_TYPE __XmlTextReaderImpl__OnDefaultAttributeUseDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x28752a4, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke, addr 0x28753d4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Xml::IDtdDefaultAttributeInfo* defaultAttribute, ::System::Xml::XmlTextReaderImpl* coreReader);

  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__OnDefaultAttributeUseDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlTextReaderImpl__OnDefaultAttributeUseDelegate(__XmlTextReaderImpl__OnDefaultAttributeUseDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__OnDefaultAttributeUseDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlTextReaderImpl__OnDefaultAttributeUseDelegate(__XmlTextReaderImpl__OnDefaultAttributeUseDelegate const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__OnDefaultAttributeUseDelegate();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate, 0x80>, "Size mismatch!");

} // namespace System::Xml
// Type: System.Xml::XmlTextReaderImpl
// SizeInfo { instance_size: 576, native_size: -1, calculated_instance_size: 576, calculated_native_size: 576, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11446)), TypeDefinitionIndex(TypeDefinitionIndex(11571)), TypeDefinitionIndex(TypeDefinitionIndex(11544)),
// TypeDefinitionIndex(TypeDefinitionIndex(11456)), TypeDefinitionIndex(TypeDefinitionIndex(11467)), TypeDefinitionIndex(TypeDefinitionIndex(11414)), TypeDefinitionIndex(TypeDefinitionIndex(11415)),
// TypeDefinitionIndex(TypeDefinitionIndex(11461)), TypeDefinitionIndex(TypeDefinitionIndex(11440)), TypeDefinitionIndex(TypeDefinitionIndex(11464)), TypeDefinitionIndex(TypeDefinitionIndex(11460)),
// TypeDefinitionIndex(TypeDefinitionIndex(11532))} Self: TypeDefinitionIndex(TypeDefinitionIndex(11474)) CS Name: ::System.Xml::XmlTextReaderImpl*
class CORDL_TYPE XmlTextReaderImpl : public ::System::Xml::XmlReader {
public:
  // Declarations
  using OnDefaultAttributeUseDelegate = ::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate;

  using DtdDefaultAttributeInfoToNodeDataComparer = ::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer;

  using NodeData = ::System::Xml::__XmlTextReaderImpl__NodeData;

  using DtdParserProxy = ::System::Xml::__XmlTextReaderImpl__DtdParserProxy;

  using NoNamespaceManager = ::System::Xml::__XmlTextReaderImpl__NoNamespaceManager;

  using XmlContext = ::System::Xml::__XmlTextReaderImpl__XmlContext;

  using ParsingState = ::System::Xml::__XmlTextReaderImpl__ParsingState;

  using InitInputType = ::System::Xml::__XmlTextReaderImpl__InitInputType;

  using LaterInitParam = ::System::Xml::__XmlTextReaderImpl__LaterInitParam;

  using IncrementalReadState = ::System::Xml::__XmlTextReaderImpl__IncrementalReadState;

  using EntityExpandType = ::System::Xml::__XmlTextReaderImpl__EntityExpandType;

  using EntityType = ::System::Xml::__XmlTextReaderImpl__EntityType;

  using ParsingMode = ::System::Xml::__XmlTextReaderImpl__ParsingMode;

  using ParsingFunction = ::System::Xml::__XmlTextReaderImpl__ParsingFunction;

  /// @brief Field laterInitParam, offset 0x10, size 0x8
  __declspec(property(get = __get_laterInitParam, put = __set_laterInitParam))::System::Xml::__XmlTextReaderImpl__LaterInitParam* laterInitParam;

  /// @brief Field xmlCharType, offset 0x18, size 0x8
  __declspec(property(get = __get_xmlCharType, put = __set_xmlCharType))::System::Xml::XmlCharType xmlCharType;

  /// @brief Field ps, offset 0x20, size 0x78
  __declspec(property(get = __get_ps, put = __set_ps))::System::Xml::__XmlTextReaderImpl__ParsingState ps;

  /// @brief Field parsingFunction, offset 0x98, size 0x4
  __declspec(property(get = __get_parsingFunction, put = __set_parsingFunction))::System::Xml::__XmlTextReaderImpl__ParsingFunction parsingFunction;

  /// @brief Field nextParsingFunction, offset 0x9c, size 0x4
  __declspec(property(get = __get_nextParsingFunction, put = __set_nextParsingFunction))::System::Xml::__XmlTextReaderImpl__ParsingFunction nextParsingFunction;

  /// @brief Field nextNextParsingFunction, offset 0xa0, size 0x4
  __declspec(property(get = __get_nextNextParsingFunction, put = __set_nextNextParsingFunction))::System::Xml::__XmlTextReaderImpl__ParsingFunction nextNextParsingFunction;

  /// @brief Field nodes, offset 0xa8, size 0x8
  __declspec(property(get = __get_nodes, put = __set_nodes))::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*> nodes;

  /// @brief Field curNode, offset 0xb0, size 0x8
  __declspec(property(get = __get_curNode, put = __set_curNode))::System::Xml::__XmlTextReaderImpl__NodeData* curNode;

  /// @brief Field index, offset 0xb8, size 0x4
  __declspec(property(get = __get_index, put = __set_index)) int32_t index;

  /// @brief Field curAttrIndex, offset 0xbc, size 0x4
  __declspec(property(get = __get_curAttrIndex, put = __set_curAttrIndex)) int32_t curAttrIndex;

  /// @brief Field attrCount, offset 0xc0, size 0x4
  __declspec(property(get = __get_attrCount, put = __set_attrCount)) int32_t attrCount;

  /// @brief Field attrHashtable, offset 0xc4, size 0x4
  __declspec(property(get = __get_attrHashtable, put = __set_attrHashtable)) int32_t attrHashtable;

  /// @brief Field attrDuplWalkCount, offset 0xc8, size 0x4
  __declspec(property(get = __get_attrDuplWalkCount, put = __set_attrDuplWalkCount)) int32_t attrDuplWalkCount;

  /// @brief Field attrNeedNamespaceLookup, offset 0xcc, size 0x1
  __declspec(property(get = __get_attrNeedNamespaceLookup, put = __set_attrNeedNamespaceLookup)) bool attrNeedNamespaceLookup;

  /// @brief Field fullAttrCleanup, offset 0xcd, size 0x1
  __declspec(property(get = __get_fullAttrCleanup, put = __set_fullAttrCleanup)) bool fullAttrCleanup;

  /// @brief Field attrDuplSortingArray, offset 0xd0, size 0x8
  __declspec(property(get = __get_attrDuplSortingArray,
                      put = __set_attrDuplSortingArray))::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*> attrDuplSortingArray;

  /// @brief Field nameTable, offset 0xd8, size 0x8
  __declspec(property(get = __get_nameTable, put = __set_nameTable))::System::Xml::XmlNameTable* nameTable;

  /// @brief Field nameTableFromSettings, offset 0xe0, size 0x1
  __declspec(property(get = __get_nameTableFromSettings, put = __set_nameTableFromSettings)) bool nameTableFromSettings;

  /// @brief Field xmlResolver, offset 0xe8, size 0x8
  __declspec(property(get = __get_xmlResolver, put = __set_xmlResolver))::System::Xml::XmlResolver* xmlResolver;

  /// @brief Field url, offset 0xf0, size 0x8
  __declspec(property(get = __get_url, put = __set_url))::StringW url;

  /// @brief Field normalize, offset 0xf8, size 0x1
  __declspec(property(get = __get_normalize, put = __set_normalize)) bool normalize;

  /// @brief Field supportNamespaces, offset 0xf9, size 0x1
  __declspec(property(get = __get_supportNamespaces, put = __set_supportNamespaces)) bool supportNamespaces;

  /// @brief Field whitespaceHandling, offset 0xfc, size 0x4
  __declspec(property(get = __get_whitespaceHandling, put = __set_whitespaceHandling))::System::Xml::WhitespaceHandling whitespaceHandling;

  /// @brief Field dtdProcessing, offset 0x100, size 0x4
  __declspec(property(get = __get_dtdProcessing, put = __set_dtdProcessing))::System::Xml::DtdProcessing dtdProcessing;

  /// @brief Field entityHandling, offset 0x104, size 0x4
  __declspec(property(get = __get_entityHandling, put = __set_entityHandling))::System::Xml::EntityHandling entityHandling;

  /// @brief Field ignorePIs, offset 0x108, size 0x1
  __declspec(property(get = __get_ignorePIs, put = __set_ignorePIs)) bool ignorePIs;

  /// @brief Field ignoreComments, offset 0x109, size 0x1
  __declspec(property(get = __get_ignoreComments, put = __set_ignoreComments)) bool ignoreComments;

  /// @brief Field checkCharacters, offset 0x10a, size 0x1
  __declspec(property(get = __get_checkCharacters, put = __set_checkCharacters)) bool checkCharacters;

  /// @brief Field lineNumberOffset, offset 0x10c, size 0x4
  __declspec(property(get = __get_lineNumberOffset, put = __set_lineNumberOffset)) int32_t lineNumberOffset;

  /// @brief Field linePositionOffset, offset 0x110, size 0x4
  __declspec(property(get = __get_linePositionOffset, put = __set_linePositionOffset)) int32_t linePositionOffset;

  /// @brief Field closeInput, offset 0x114, size 0x1
  __declspec(property(get = __get_closeInput, put = __set_closeInput)) bool closeInput;

  /// @brief Field maxCharactersInDocument, offset 0x118, size 0x8
  __declspec(property(get = __get_maxCharactersInDocument, put = __set_maxCharactersInDocument)) int64_t maxCharactersInDocument;

  /// @brief Field maxCharactersFromEntities, offset 0x120, size 0x8
  __declspec(property(get = __get_maxCharactersFromEntities, put = __set_maxCharactersFromEntities)) int64_t maxCharactersFromEntities;

  /// @brief Field v1Compat, offset 0x128, size 0x1
  __declspec(property(get = __get_v1Compat, put = __set_v1Compat)) bool v1Compat;

  /// @brief Field namespaceManager, offset 0x130, size 0x8
  __declspec(property(get = __get_namespaceManager, put = __set_namespaceManager))::System::Xml::XmlNamespaceManager* namespaceManager;

  /// @brief Field lastPrefix, offset 0x138, size 0x8
  __declspec(property(get = __get_lastPrefix, put = __set_lastPrefix))::StringW lastPrefix;

  /// @brief Field xmlContext, offset 0x140, size 0x8
  __declspec(property(get = __get_xmlContext, put = __set_xmlContext))::System::Xml::__XmlTextReaderImpl__XmlContext* xmlContext;

  /// @brief Field parsingStatesStack, offset 0x148, size 0x8
  __declspec(property(get = __get_parsingStatesStack,
                      put = __set_parsingStatesStack))::ArrayW<::System::Xml::__XmlTextReaderImpl__ParsingState, ::Array<::System::Xml::__XmlTextReaderImpl__ParsingState>*> parsingStatesStack;

  /// @brief Field parsingStatesStackTop, offset 0x150, size 0x4
  __declspec(property(get = __get_parsingStatesStackTop, put = __set_parsingStatesStackTop)) int32_t parsingStatesStackTop;

  /// @brief Field reportedBaseUri, offset 0x158, size 0x8
  __declspec(property(get = __get_reportedBaseUri, put = __set_reportedBaseUri))::StringW reportedBaseUri;

  /// @brief Field reportedEncoding, offset 0x160, size 0x8
  __declspec(property(get = __get_reportedEncoding, put = __set_reportedEncoding))::System::Text::Encoding* reportedEncoding;

  /// @brief Field dtdInfo, offset 0x168, size 0x8
  __declspec(property(get = __get_dtdInfo, put = __set_dtdInfo))::System::Xml::IDtdInfo* dtdInfo;

  /// @brief Field fragmentType, offset 0x170, size 0x4
  __declspec(property(get = __get_fragmentType, put = __set_fragmentType))::System::Xml::XmlNodeType fragmentType;

  /// @brief Field fragmentParserContext, offset 0x178, size 0x8
  __declspec(property(get = __get_fragmentParserContext, put = __set_fragmentParserContext))::System::Xml::XmlParserContext* fragmentParserContext;

  /// @brief Field fragment, offset 0x180, size 0x1
  __declspec(property(get = __get_fragment, put = __set_fragment)) bool fragment;

  /// @brief Field incReadDecoder, offset 0x188, size 0x8
  __declspec(property(get = __get_incReadDecoder, put = __set_incReadDecoder))::System::Xml::IncrementalReadDecoder* incReadDecoder;

  /// @brief Field incReadState, offset 0x190, size 0x4
  __declspec(property(get = __get_incReadState, put = __set_incReadState))::System::Xml::__XmlTextReaderImpl__IncrementalReadState incReadState;

  /// @brief Field incReadLineInfo, offset 0x194, size 0x8
  __declspec(property(get = __get_incReadLineInfo, put = __set_incReadLineInfo))::System::Xml::LineInfo incReadLineInfo;

  /// @brief Field incReadDepth, offset 0x19c, size 0x4
  __declspec(property(get = __get_incReadDepth, put = __set_incReadDepth)) int32_t incReadDepth;

  /// @brief Field incReadLeftStartPos, offset 0x1a0, size 0x4
  __declspec(property(get = __get_incReadLeftStartPos, put = __set_incReadLeftStartPos)) int32_t incReadLeftStartPos;

  /// @brief Field incReadLeftEndPos, offset 0x1a4, size 0x4
  __declspec(property(get = __get_incReadLeftEndPos, put = __set_incReadLeftEndPos)) int32_t incReadLeftEndPos;

  /// @brief Field attributeValueBaseEntityId, offset 0x1a8, size 0x4
  __declspec(property(get = __get_attributeValueBaseEntityId, put = __set_attributeValueBaseEntityId)) int32_t attributeValueBaseEntityId;

  /// @brief Field emptyEntityInAttributeResolved, offset 0x1ac, size 0x1
  __declspec(property(get = __get_emptyEntityInAttributeResolved, put = __set_emptyEntityInAttributeResolved)) bool emptyEntityInAttributeResolved;

  /// @brief Field validationEventHandling, offset 0x1b0, size 0x8
  __declspec(property(get = __get_validationEventHandling, put = __set_validationEventHandling))::System::Xml::IValidationEventHandling* validationEventHandling;

  /// @brief Field onDefaultAttributeUse, offset 0x1b8, size 0x8
  __declspec(property(get = __get_onDefaultAttributeUse, put = __set_onDefaultAttributeUse))::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate* onDefaultAttributeUse;

  /// @brief Field validatingReaderCompatFlag, offset 0x1c0, size 0x1
  __declspec(property(get = __get_validatingReaderCompatFlag, put = __set_validatingReaderCompatFlag)) bool validatingReaderCompatFlag;

  /// @brief Field addDefaultAttributesAndNormalize, offset 0x1c1, size 0x1
  __declspec(property(get = __get_addDefaultAttributesAndNormalize, put = __set_addDefaultAttributesAndNormalize)) bool addDefaultAttributesAndNormalize;

  /// @brief Field stringBuilder, offset 0x1c8, size 0x8
  __declspec(property(get = __get_stringBuilder, put = __set_stringBuilder))::System::Text::StringBuilder* stringBuilder;

  /// @brief Field rootElementParsed, offset 0x1d0, size 0x1
  __declspec(property(get = __get_rootElementParsed, put = __set_rootElementParsed)) bool rootElementParsed;

  /// @brief Field standalone, offset 0x1d1, size 0x1
  __declspec(property(get = __get_standalone, put = __set_standalone)) bool standalone;

  /// @brief Field nextEntityId, offset 0x1d4, size 0x4
  __declspec(property(get = __get_nextEntityId, put = __set_nextEntityId)) int32_t nextEntityId;

  /// @brief Field parsingMode, offset 0x1d8, size 0x4
  __declspec(property(get = __get_parsingMode, put = __set_parsingMode))::System::Xml::__XmlTextReaderImpl__ParsingMode parsingMode;

  /// @brief Field readState, offset 0x1dc, size 0x4
  __declspec(property(get = __get_readState, put = __set_readState))::System::Xml::ReadState readState;

  /// @brief Field lastEntity, offset 0x1e0, size 0x8
  __declspec(property(get = __get_lastEntity, put = __set_lastEntity))::System::Xml::IDtdEntityInfo* lastEntity;

  /// @brief Field afterResetState, offset 0x1e8, size 0x1
  __declspec(property(get = __get_afterResetState, put = __set_afterResetState)) bool afterResetState;

  /// @brief Field documentStartBytePos, offset 0x1ec, size 0x4
  __declspec(property(get = __get_documentStartBytePos, put = __set_documentStartBytePos)) int32_t documentStartBytePos;

  /// @brief Field readValueOffset, offset 0x1f0, size 0x4
  __declspec(property(get = __get_readValueOffset, put = __set_readValueOffset)) int32_t readValueOffset;

  /// @brief Field charactersInDocument, offset 0x1f8, size 0x8
  __declspec(property(get = __get_charactersInDocument, put = __set_charactersInDocument)) int64_t charactersInDocument;

  /// @brief Field charactersFromEntities, offset 0x200, size 0x8
  __declspec(property(get = __get_charactersFromEntities, put = __set_charactersFromEntities)) int64_t charactersFromEntities;

  /// @brief Field currentEntities, offset 0x208, size 0x8
  __declspec(property(get = __get_currentEntities,
                      put = __set_currentEntities))::System::Collections::Generic::Dictionary_2<::System::Xml::IDtdEntityInfo*, ::System::Xml::IDtdEntityInfo*>* currentEntities;

  /// @brief Field disableUndeclaredEntityCheck, offset 0x210, size 0x1
  __declspec(property(get = __get_disableUndeclaredEntityCheck, put = __set_disableUndeclaredEntityCheck)) bool disableUndeclaredEntityCheck;

  /// @brief Field outerReader, offset 0x218, size 0x8
  __declspec(property(get = __get_outerReader, put = __set_outerReader))::System::Xml::XmlReader* outerReader;

  /// @brief Field xmlResolverIsSet, offset 0x220, size 0x1
  __declspec(property(get = __get_xmlResolverIsSet, put = __set_xmlResolverIsSet)) bool xmlResolverIsSet;

  /// @brief Field Xml, offset 0x228, size 0x8
  __declspec(property(get = __get_Xml, put = __set_Xml))::StringW Xml;

  /// @brief Field XmlNs, offset 0x230, size 0x8
  __declspec(property(get = __get_XmlNs, put = __set_XmlNs))::StringW XmlNs;

  /// @brief Field parseText_dummyTask, offset 0x238, size 0x8
  __declspec(property(get = __get_parseText_dummyTask, put = __set_parseText_dummyTask))::System::Threading::Tasks::Task_1<::System::Tuple_4<int32_t, int32_t, int32_t, bool>*>* parseText_dummyTask;

  __declspec(property(get = get_Settings))::System::Xml::XmlReaderSettings* Settings;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_NamespaceURI))::StringW NamespaceURI;

  __declspec(property(get = get_Prefix))::StringW Prefix;

  __declspec(property(get = get_Value))::StringW Value;

  __declspec(property(get = get_BaseURI))::StringW BaseURI;

  __declspec(property(get = get_IsEmptyElement)) bool IsEmptyElement;

  __declspec(property(get = get_IsDefault)) bool IsDefault;

  __declspec(property(get = get_ReadState))::System::Xml::ReadState ReadState;

  __declspec(property(get = get_NameTable))::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = get_CanResolveEntity)) bool CanResolveEntity;

  __declspec(property(put = set_OuterReader))::System::Xml::XmlReader* OuterReader;

  __declspec(property(put = set_Namespaces)) bool Namespaces;

  __declspec(property(put = set_EntityHandling))::System::Xml::EntityHandling EntityHandling;

  __declspec(property(put = set_XmlResolver))::System::Xml::XmlResolver* XmlResolver;

  __declspec(property(get = get_DtdParserProxy_NameTable))::System::Xml::XmlNameTable* DtdParserProxy_NameTable;

  __declspec(property(get = get_DtdParserProxy_NamespaceResolver))::System::Xml::IXmlNamespaceResolver* DtdParserProxy_NamespaceResolver;

  __declspec(property(get = get_DtdParserProxy_DtdValidation)) bool DtdParserProxy_DtdValidation;

  __declspec(property(get = get_DtdParserProxy_Normalization)) bool DtdParserProxy_Normalization;

  __declspec(property(get = get_DtdParserProxy_Namespaces)) bool DtdParserProxy_Namespaces;

  __declspec(property(get = get_DtdParserProxy_V1CompatibilityMode)) bool DtdParserProxy_V1CompatibilityMode;

  __declspec(property(get = get_DtdParserProxy_BaseUri))::System::Uri* DtdParserProxy_BaseUri;

  __declspec(property(get = get_DtdParserProxy_IsEof)) bool DtdParserProxy_IsEof;

  __declspec(property(get = get_DtdParserProxy_ParsingBuffer))::ArrayW<char16_t, ::Array<char16_t>*> DtdParserProxy_ParsingBuffer;

  __declspec(property(get = get_DtdParserProxy_ParsingBufferLength)) int32_t DtdParserProxy_ParsingBufferLength;

  __declspec(property(get = get_DtdParserProxy_CurrentPosition, put = set_DtdParserProxy_CurrentPosition)) int32_t DtdParserProxy_CurrentPosition;

  __declspec(property(get = get_DtdParserProxy_EntityStackLength)) int32_t DtdParserProxy_EntityStackLength;

  __declspec(property(get = get_DtdParserProxy_IsEntityEolNormalized)) bool DtdParserProxy_IsEntityEolNormalized;

  __declspec(property(get = get_DtdParserProxy_ValidationEventHandling))::System::Xml::IValidationEventHandling* DtdParserProxy_ValidationEventHandling;

  __declspec(property(get = get_DtdParserProxy_LineNo)) int32_t DtdParserProxy_LineNo;

  __declspec(property(get = get_DtdParserProxy_LineStartPosition)) int32_t DtdParserProxy_LineStartPosition;

  __declspec(property(get = get_IsResolverNull)) bool IsResolverNull;

  __declspec(property(get = get_InAttributeValueIterator)) bool InAttributeValueIterator;

  __declspec(property(get = get_DtdValidation)) bool DtdValidation;

  __declspec(property(get = get_InEntity)) bool InEntity;

  __declspec(property(get = get_DtdInfo))::System::Xml::IDtdInfo* DtdInfo;

  __declspec(property(put = set_XmlValidatingReaderCompatibilityMode)) bool XmlValidatingReaderCompatibilityMode;

  __declspec(property(put = set_DisableUndeclaredEntityCheck)) bool DisableUndeclaredEntityCheck;

  /// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
  constexpr operator ::System::Xml::IXmlNamespaceResolver*() noexcept;

  /// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
  constexpr ::System::Xml::IXmlNamespaceResolver* i___System__Xml__IXmlNamespaceResolver() noexcept;

  constexpr ::System::Xml::__XmlTextReaderImpl__LaterInitParam*& __get_laterInitParam();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::__XmlTextReaderImpl__LaterInitParam*> const& __get_laterInitParam() const;

  constexpr void __set_laterInitParam(::System::Xml::__XmlTextReaderImpl__LaterInitParam* value);

  constexpr ::System::Xml::XmlCharType& __get_xmlCharType();

  constexpr ::System::Xml::XmlCharType const& __get_xmlCharType() const;

  constexpr void __set_xmlCharType(::System::Xml::XmlCharType value);

  constexpr ::System::Xml::__XmlTextReaderImpl__ParsingState& __get_ps();

  constexpr ::System::Xml::__XmlTextReaderImpl__ParsingState const& __get_ps() const;

  constexpr void __set_ps(::System::Xml::__XmlTextReaderImpl__ParsingState value);

  constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction& __get_parsingFunction();

  constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction const& __get_parsingFunction() const;

  constexpr void __set_parsingFunction(::System::Xml::__XmlTextReaderImpl__ParsingFunction value);

  constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction& __get_nextParsingFunction();

  constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction const& __get_nextParsingFunction() const;

  constexpr void __set_nextParsingFunction(::System::Xml::__XmlTextReaderImpl__ParsingFunction value);

  constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction& __get_nextNextParsingFunction();

  constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction const& __get_nextNextParsingFunction() const;

  constexpr void __set_nextNextParsingFunction(::System::Xml::__XmlTextReaderImpl__ParsingFunction value);

  constexpr ::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*>& __get_nodes();

  constexpr ::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*> const& __get_nodes() const;

  constexpr void __set_nodes(::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*> value);

  constexpr ::System::Xml::__XmlTextReaderImpl__NodeData*& __get_curNode();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::__XmlTextReaderImpl__NodeData*> const& __get_curNode() const;

  constexpr void __set_curNode(::System::Xml::__XmlTextReaderImpl__NodeData* value);

  constexpr int32_t& __get_index();

  constexpr int32_t const& __get_index() const;

  constexpr void __set_index(int32_t value);

  constexpr int32_t& __get_curAttrIndex();

  constexpr int32_t const& __get_curAttrIndex() const;

  constexpr void __set_curAttrIndex(int32_t value);

  constexpr int32_t& __get_attrCount();

  constexpr int32_t const& __get_attrCount() const;

  constexpr void __set_attrCount(int32_t value);

  constexpr int32_t& __get_attrHashtable();

  constexpr int32_t const& __get_attrHashtable() const;

  constexpr void __set_attrHashtable(int32_t value);

  constexpr int32_t& __get_attrDuplWalkCount();

  constexpr int32_t const& __get_attrDuplWalkCount() const;

  constexpr void __set_attrDuplWalkCount(int32_t value);

  constexpr bool& __get_attrNeedNamespaceLookup();

  constexpr bool const& __get_attrNeedNamespaceLookup() const;

  constexpr void __set_attrNeedNamespaceLookup(bool value);

  constexpr bool& __get_fullAttrCleanup();

  constexpr bool const& __get_fullAttrCleanup() const;

  constexpr void __set_fullAttrCleanup(bool value);

  constexpr ::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*>& __get_attrDuplSortingArray();

  constexpr ::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*> const& __get_attrDuplSortingArray() const;

  constexpr void __set_attrDuplSortingArray(::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*> value);

  constexpr ::System::Xml::XmlNameTable*& __get_nameTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& __get_nameTable() const;

  constexpr void __set_nameTable(::System::Xml::XmlNameTable* value);

  constexpr bool& __get_nameTableFromSettings();

  constexpr bool const& __get_nameTableFromSettings() const;

  constexpr void __set_nameTableFromSettings(bool value);

  constexpr ::System::Xml::XmlResolver*& __get_xmlResolver();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlResolver*> const& __get_xmlResolver() const;

  constexpr void __set_xmlResolver(::System::Xml::XmlResolver* value);

  constexpr ::StringW& __get_url();

  constexpr ::StringW const& __get_url() const;

  constexpr void __set_url(::StringW value);

  constexpr bool& __get_normalize();

  constexpr bool const& __get_normalize() const;

  constexpr void __set_normalize(bool value);

  constexpr bool& __get_supportNamespaces();

  constexpr bool const& __get_supportNamespaces() const;

  constexpr void __set_supportNamespaces(bool value);

  constexpr ::System::Xml::WhitespaceHandling& __get_whitespaceHandling();

  constexpr ::System::Xml::WhitespaceHandling const& __get_whitespaceHandling() const;

  constexpr void __set_whitespaceHandling(::System::Xml::WhitespaceHandling value);

  constexpr ::System::Xml::DtdProcessing& __get_dtdProcessing();

  constexpr ::System::Xml::DtdProcessing const& __get_dtdProcessing() const;

  constexpr void __set_dtdProcessing(::System::Xml::DtdProcessing value);

  constexpr ::System::Xml::EntityHandling& __get_entityHandling();

  constexpr ::System::Xml::EntityHandling const& __get_entityHandling() const;

  constexpr void __set_entityHandling(::System::Xml::EntityHandling value);

  constexpr bool& __get_ignorePIs();

  constexpr bool const& __get_ignorePIs() const;

  constexpr void __set_ignorePIs(bool value);

  constexpr bool& __get_ignoreComments();

  constexpr bool const& __get_ignoreComments() const;

  constexpr void __set_ignoreComments(bool value);

  constexpr bool& __get_checkCharacters();

  constexpr bool const& __get_checkCharacters() const;

  constexpr void __set_checkCharacters(bool value);

  constexpr int32_t& __get_lineNumberOffset();

  constexpr int32_t const& __get_lineNumberOffset() const;

  constexpr void __set_lineNumberOffset(int32_t value);

  constexpr int32_t& __get_linePositionOffset();

  constexpr int32_t const& __get_linePositionOffset() const;

  constexpr void __set_linePositionOffset(int32_t value);

  constexpr bool& __get_closeInput();

  constexpr bool const& __get_closeInput() const;

  constexpr void __set_closeInput(bool value);

  constexpr int64_t& __get_maxCharactersInDocument();

  constexpr int64_t const& __get_maxCharactersInDocument() const;

  constexpr void __set_maxCharactersInDocument(int64_t value);

  constexpr int64_t& __get_maxCharactersFromEntities();

  constexpr int64_t const& __get_maxCharactersFromEntities() const;

  constexpr void __set_maxCharactersFromEntities(int64_t value);

  constexpr bool& __get_v1Compat();

  constexpr bool const& __get_v1Compat() const;

  constexpr void __set_v1Compat(bool value);

  constexpr ::System::Xml::XmlNamespaceManager*& __get_namespaceManager();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNamespaceManager*> const& __get_namespaceManager() const;

  constexpr void __set_namespaceManager(::System::Xml::XmlNamespaceManager* value);

  constexpr ::StringW& __get_lastPrefix();

  constexpr ::StringW const& __get_lastPrefix() const;

  constexpr void __set_lastPrefix(::StringW value);

  constexpr ::System::Xml::__XmlTextReaderImpl__XmlContext*& __get_xmlContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::__XmlTextReaderImpl__XmlContext*> const& __get_xmlContext() const;

  constexpr void __set_xmlContext(::System::Xml::__XmlTextReaderImpl__XmlContext* value);

  constexpr ::ArrayW<::System::Xml::__XmlTextReaderImpl__ParsingState, ::Array<::System::Xml::__XmlTextReaderImpl__ParsingState>*>& __get_parsingStatesStack();

  constexpr ::ArrayW<::System::Xml::__XmlTextReaderImpl__ParsingState, ::Array<::System::Xml::__XmlTextReaderImpl__ParsingState>*> const& __get_parsingStatesStack() const;

  constexpr void __set_parsingStatesStack(::ArrayW<::System::Xml::__XmlTextReaderImpl__ParsingState, ::Array<::System::Xml::__XmlTextReaderImpl__ParsingState>*> value);

  constexpr int32_t& __get_parsingStatesStackTop();

  constexpr int32_t const& __get_parsingStatesStackTop() const;

  constexpr void __set_parsingStatesStackTop(int32_t value);

  constexpr ::StringW& __get_reportedBaseUri();

  constexpr ::StringW const& __get_reportedBaseUri() const;

  constexpr void __set_reportedBaseUri(::StringW value);

  constexpr ::System::Text::Encoding*& __get_reportedEncoding();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __get_reportedEncoding() const;

  constexpr void __set_reportedEncoding(::System::Text::Encoding* value);

  constexpr ::System::Xml::IDtdInfo*& __get_dtdInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::IDtdInfo*> const& __get_dtdInfo() const;

  constexpr void __set_dtdInfo(::System::Xml::IDtdInfo* value);

  constexpr ::System::Xml::XmlNodeType& __get_fragmentType();

  constexpr ::System::Xml::XmlNodeType const& __get_fragmentType() const;

  constexpr void __set_fragmentType(::System::Xml::XmlNodeType value);

  constexpr ::System::Xml::XmlParserContext*& __get_fragmentParserContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlParserContext*> const& __get_fragmentParserContext() const;

  constexpr void __set_fragmentParserContext(::System::Xml::XmlParserContext* value);

  constexpr bool& __get_fragment();

  constexpr bool const& __get_fragment() const;

  constexpr void __set_fragment(bool value);

  constexpr ::System::Xml::IncrementalReadDecoder*& __get_incReadDecoder();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::IncrementalReadDecoder*> const& __get_incReadDecoder() const;

  constexpr void __set_incReadDecoder(::System::Xml::IncrementalReadDecoder* value);

  constexpr ::System::Xml::__XmlTextReaderImpl__IncrementalReadState& __get_incReadState();

  constexpr ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const& __get_incReadState() const;

  constexpr void __set_incReadState(::System::Xml::__XmlTextReaderImpl__IncrementalReadState value);

  constexpr ::System::Xml::LineInfo& __get_incReadLineInfo();

  constexpr ::System::Xml::LineInfo const& __get_incReadLineInfo() const;

  constexpr void __set_incReadLineInfo(::System::Xml::LineInfo value);

  constexpr int32_t& __get_incReadDepth();

  constexpr int32_t const& __get_incReadDepth() const;

  constexpr void __set_incReadDepth(int32_t value);

  constexpr int32_t& __get_incReadLeftStartPos();

  constexpr int32_t const& __get_incReadLeftStartPos() const;

  constexpr void __set_incReadLeftStartPos(int32_t value);

  constexpr int32_t& __get_incReadLeftEndPos();

  constexpr int32_t const& __get_incReadLeftEndPos() const;

  constexpr void __set_incReadLeftEndPos(int32_t value);

  constexpr int32_t& __get_attributeValueBaseEntityId();

  constexpr int32_t const& __get_attributeValueBaseEntityId() const;

  constexpr void __set_attributeValueBaseEntityId(int32_t value);

  constexpr bool& __get_emptyEntityInAttributeResolved();

  constexpr bool const& __get_emptyEntityInAttributeResolved() const;

  constexpr void __set_emptyEntityInAttributeResolved(bool value);

  constexpr ::System::Xml::IValidationEventHandling*& __get_validationEventHandling();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::IValidationEventHandling*> const& __get_validationEventHandling() const;

  constexpr void __set_validationEventHandling(::System::Xml::IValidationEventHandling* value);

  constexpr ::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate*& __get_onDefaultAttributeUse();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate*> const& __get_onDefaultAttributeUse() const;

  constexpr void __set_onDefaultAttributeUse(::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate* value);

  constexpr bool& __get_validatingReaderCompatFlag();

  constexpr bool const& __get_validatingReaderCompatFlag() const;

  constexpr void __set_validatingReaderCompatFlag(bool value);

  constexpr bool& __get_addDefaultAttributesAndNormalize();

  constexpr bool const& __get_addDefaultAttributesAndNormalize() const;

  constexpr void __set_addDefaultAttributesAndNormalize(bool value);

  constexpr ::System::Text::StringBuilder*& __get_stringBuilder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __get_stringBuilder() const;

  constexpr void __set_stringBuilder(::System::Text::StringBuilder* value);

  constexpr bool& __get_rootElementParsed();

  constexpr bool const& __get_rootElementParsed() const;

  constexpr void __set_rootElementParsed(bool value);

  constexpr bool& __get_standalone();

  constexpr bool const& __get_standalone() const;

  constexpr void __set_standalone(bool value);

  constexpr int32_t& __get_nextEntityId();

  constexpr int32_t const& __get_nextEntityId() const;

  constexpr void __set_nextEntityId(int32_t value);

  constexpr ::System::Xml::__XmlTextReaderImpl__ParsingMode& __get_parsingMode();

  constexpr ::System::Xml::__XmlTextReaderImpl__ParsingMode const& __get_parsingMode() const;

  constexpr void __set_parsingMode(::System::Xml::__XmlTextReaderImpl__ParsingMode value);

  constexpr ::System::Xml::ReadState& __get_readState();

  constexpr ::System::Xml::ReadState const& __get_readState() const;

  constexpr void __set_readState(::System::Xml::ReadState value);

  constexpr ::System::Xml::IDtdEntityInfo*& __get_lastEntity();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::IDtdEntityInfo*> const& __get_lastEntity() const;

  constexpr void __set_lastEntity(::System::Xml::IDtdEntityInfo* value);

  constexpr bool& __get_afterResetState();

  constexpr bool const& __get_afterResetState() const;

  constexpr void __set_afterResetState(bool value);

  constexpr int32_t& __get_documentStartBytePos();

  constexpr int32_t const& __get_documentStartBytePos() const;

  constexpr void __set_documentStartBytePos(int32_t value);

  constexpr int32_t& __get_readValueOffset();

  constexpr int32_t const& __get_readValueOffset() const;

  constexpr void __set_readValueOffset(int32_t value);

  constexpr int64_t& __get_charactersInDocument();

  constexpr int64_t const& __get_charactersInDocument() const;

  constexpr void __set_charactersInDocument(int64_t value);

  constexpr int64_t& __get_charactersFromEntities();

  constexpr int64_t const& __get_charactersFromEntities() const;

  constexpr void __set_charactersFromEntities(int64_t value);

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::IDtdEntityInfo*, ::System::Xml::IDtdEntityInfo*>*& __get_currentEntities();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::IDtdEntityInfo*, ::System::Xml::IDtdEntityInfo*>*> const& __get_currentEntities() const;

  constexpr void __set_currentEntities(::System::Collections::Generic::Dictionary_2<::System::Xml::IDtdEntityInfo*, ::System::Xml::IDtdEntityInfo*>* value);

  constexpr bool& __get_disableUndeclaredEntityCheck();

  constexpr bool const& __get_disableUndeclaredEntityCheck() const;

  constexpr void __set_disableUndeclaredEntityCheck(bool value);

  constexpr ::System::Xml::XmlReader*& __get_outerReader();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlReader*> const& __get_outerReader() const;

  constexpr void __set_outerReader(::System::Xml::XmlReader* value);

  constexpr bool& __get_xmlResolverIsSet();

  constexpr bool const& __get_xmlResolverIsSet() const;

  constexpr void __set_xmlResolverIsSet(bool value);

  constexpr ::StringW& __get_Xml();

  constexpr ::StringW const& __get_Xml() const;

  constexpr void __set_Xml(::StringW value);

  constexpr ::StringW& __get_XmlNs();

  constexpr ::StringW const& __get_XmlNs() const;

  constexpr void __set_XmlNs(::StringW value);

  constexpr ::System::Threading::Tasks::Task_1<::System::Tuple_4<int32_t, int32_t, int32_t, bool>*>*& __get_parseText_dummyTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::Tuple_4<int32_t, int32_t, int32_t, bool>*>*> const& __get_parseText_dummyTask() const;

  constexpr void __set_parseText_dummyTask(::System::Threading::Tasks::Task_1<::System::Tuple_4<int32_t, int32_t, int32_t, bool>*>* value);

  static inline ::System::Xml::XmlTextReaderImpl* New_ctor(::System::Xml::XmlNameTable* nt);

  /// @brief Method .ctor, addr 0x2861aa8, size 0x374, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNameTable* nt);

  static inline ::System::Xml::XmlTextReaderImpl* New_ctor(::System::IO::TextReader* input, ::System::Xml::XmlNameTable* nt);

  /// @brief Method .ctor, addr 0x2861e1c, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextReader* input, ::System::Xml::XmlNameTable* nt);

  static inline ::System::Xml::XmlTextReaderImpl* New_ctor(::StringW url, ::System::IO::TextReader* input, ::System::Xml::XmlNameTable* nt);

  /// @brief Method .ctor, addr 0x2861e84, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::StringW url, ::System::IO::TextReader* input, ::System::Xml::XmlNameTable* nt);

  static inline ::System::Xml::XmlTextReaderImpl* New_ctor(::StringW xmlFragment, ::System::Xml::XmlNodeType fragType, ::System::Xml::XmlParserContext* context);

  /// @brief Method .ctor, addr 0x2861f60, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::StringW xmlFragment, ::System::Xml::XmlNodeType fragType, ::System::Xml::XmlParserContext* context);

  static inline ::System::Xml::XmlTextReaderImpl* New_ctor(::StringW xmlFragment, ::System::Xml::XmlParserContext* context);

  /// @brief Method .ctor, addr 0x2862324, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(::StringW xmlFragment, ::System::Xml::XmlParserContext* context);

  /// @brief Method FinishInitUriString, addr 0x286245c, size 0x2ec, virtual false, abstract: false, final false
  inline void FinishInitUriString();

  /// @brief Method FinishInitStream, addr 0x2862a20, size 0x80, virtual false, abstract: false, final false
  inline void FinishInitStream();

  /// @brief Method FinishInitTextReader, addr 0x2862aa0, size 0x64, virtual false, abstract: false, final false
  inline void FinishInitTextReader();

  /// @brief Method get_Settings, addr 0x2862b04, size 0x158, virtual true, abstract: false, final false
  inline ::System::Xml::XmlReaderSettings* get_Settings();

  /// @brief Method get_NodeType, addr 0x2862c5c, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Name, addr 0x2862c78, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_LocalName, addr 0x2862c9c, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NamespaceURI, addr 0x2862cb8, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_Prefix, addr 0x2862cd4, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_Value, addr 0x2862cf0, size 0x48, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method get_BaseURI, addr 0x2862f04, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_BaseURI();

  /// @brief Method get_IsEmptyElement, addr 0x2862f0c, size 0x1c, virtual true, abstract: false, final false
  inline bool get_IsEmptyElement();

  /// @brief Method get_IsDefault, addr 0x2862f28, size 0x1c, virtual true, abstract: false, final false
  inline bool get_IsDefault();

  /// @brief Method get_ReadState, addr 0x2862f44, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::ReadState get_ReadState();

  /// @brief Method get_NameTable, addr 0x2862f4c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method get_CanResolveEntity, addr 0x2862f54, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanResolveEntity();

  /// @brief Method MoveToAttribute, addr 0x2862f5c, size 0xc0, virtual true, abstract: false, final false
  inline bool MoveToAttribute(::StringW name);

  /// @brief Method MoveToFirstAttribute, addr 0x2863280, size 0x74, virtual true, abstract: false, final false
  inline bool MoveToFirstAttribute();

  /// @brief Method MoveToNextAttribute, addr 0x28632f4, size 0x88, virtual true, abstract: false, final false
  inline bool MoveToNextAttribute();

  /// @brief Method MoveToElement, addr 0x286337c, size 0x88, virtual true, abstract: false, final false
  inline bool MoveToElement();

  /// @brief Method FinishInit, addr 0x2863404, size 0x48, virtual false, abstract: false, final false
  inline void FinishInit();

  /// @brief Method Read, addr 0x286344c, size 0x3ac, virtual true, abstract: false, final false
  inline bool Read();

  /// @brief Method Close, addr 0x28655cc, size 0x8, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method LookupNamespace, addr 0x2865690, size 0x38, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method ReadAttributeValue, addr 0x28656c8, size 0x24c, virtual true, abstract: false, final false
  inline bool ReadAttributeValue();

  /// @brief Method ResolveEntity, addr 0x2865da8, size 0x254, virtual true, abstract: false, final false
  inline void ResolveEntity();

  /// @brief Method set_OuterReader, addr 0x28664a0, size 0x8, virtual false, abstract: false, final false
  inline void set_OuterReader(::System::Xml::XmlReader* value);

  /// @brief Method System.Xml.IXmlNamespaceResolver.LookupNamespace, addr 0x28664a8, size 0x10, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix);

  /// @brief Method System.Xml.IXmlNamespaceResolver.LookupPrefix, addr 0x28664b8, size 0x24, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName);

  /// @brief Method LookupPrefix, addr 0x28664dc, size 0x24, virtual false, abstract: false, final false
  inline ::StringW LookupPrefix(::StringW namespaceName);

  /// @brief Method set_Namespaces, addr 0x2866500, size 0x1d0, virtual false, abstract: false, final false
  inline void set_Namespaces(bool value);

  /// @brief Method set_EntityHandling, addr 0x28666d0, size 0x88, virtual false, abstract: false, final false
  inline void set_EntityHandling(::System::Xml::EntityHandling value);

  /// @brief Method set_XmlResolver, addr 0x2866758, size 0x5c, virtual false, abstract: false, final false
  inline void set_XmlResolver(::System::Xml::XmlResolver* value);

  /// @brief Method get_DtdParserProxy_NameTable, addr 0x28667b4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_DtdParserProxy_NameTable();

  /// @brief Method get_DtdParserProxy_NamespaceResolver, addr 0x28667bc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::IXmlNamespaceResolver* get_DtdParserProxy_NamespaceResolver();

  /// @brief Method get_DtdParserProxy_DtdValidation, addr 0x28667c4, size 0x10, virtual false, abstract: false, final false
  inline bool get_DtdParserProxy_DtdValidation();

  /// @brief Method get_DtdParserProxy_Normalization, addr 0x28667e4, size 0x8, virtual false, abstract: false, final false
  inline bool get_DtdParserProxy_Normalization();

  /// @brief Method get_DtdParserProxy_Namespaces, addr 0x28667ec, size 0x8, virtual false, abstract: false, final false
  inline bool get_DtdParserProxy_Namespaces();

  /// @brief Method get_DtdParserProxy_V1CompatibilityMode, addr 0x28667f4, size 0x8, virtual false, abstract: false, final false
  inline bool get_DtdParserProxy_V1CompatibilityMode();

  /// @brief Method get_DtdParserProxy_BaseUri, addr 0x28667fc, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Uri* get_DtdParserProxy_BaseUri();

  /// @brief Method get_DtdParserProxy_IsEof, addr 0x28668a0, size 0x8, virtual false, abstract: false, final false
  inline bool get_DtdParserProxy_IsEof();

  /// @brief Method get_DtdParserProxy_ParsingBuffer, addr 0x28668a8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> get_DtdParserProxy_ParsingBuffer();

  /// @brief Method get_DtdParserProxy_ParsingBufferLength, addr 0x28668b0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_DtdParserProxy_ParsingBufferLength();

  /// @brief Method get_DtdParserProxy_CurrentPosition, addr 0x28668b8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_DtdParserProxy_CurrentPosition();

  /// @brief Method set_DtdParserProxy_CurrentPosition, addr 0x28668c0, size 0x8, virtual false, abstract: false, final false
  inline void set_DtdParserProxy_CurrentPosition(int32_t value);

  /// @brief Method get_DtdParserProxy_EntityStackLength, addr 0x28668c8, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_DtdParserProxy_EntityStackLength();

  /// @brief Method get_DtdParserProxy_IsEntityEolNormalized, addr 0x28668d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_DtdParserProxy_IsEntityEolNormalized();

  /// @brief Method get_DtdParserProxy_ValidationEventHandling, addr 0x28668dc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::IValidationEventHandling* get_DtdParserProxy_ValidationEventHandling();

  /// @brief Method DtdParserProxy_OnNewLine, addr 0x28668e4, size 0x14, virtual false, abstract: false, final false
  inline void DtdParserProxy_OnNewLine(int32_t pos);

  /// @brief Method get_DtdParserProxy_LineNo, addr 0x286690c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_DtdParserProxy_LineNo();

  /// @brief Method get_DtdParserProxy_LineStartPosition, addr 0x2866914, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_DtdParserProxy_LineStartPosition();

  /// @brief Method DtdParserProxy_ReadData, addr 0x286691c, size 0x4, virtual false, abstract: false, final false
  inline int32_t DtdParserProxy_ReadData();

  /// @brief Method DtdParserProxy_ParseNumericCharRef, addr 0x2866d50, size 0x20, virtual false, abstract: false, final false
  inline int32_t DtdParserProxy_ParseNumericCharRef(::System::Text::StringBuilder* internalSubsetBuilder);

  /// @brief Method DtdParserProxy_ParseNamedCharRef, addr 0x2866e1c, size 0x8, virtual false, abstract: false, final false
  inline int32_t DtdParserProxy_ParseNamedCharRef(bool expand, ::System::Text::StringBuilder* internalSubsetBuilder);

  /// @brief Method DtdParserProxy_ParsePI, addr 0x2866e88, size 0x44, virtual false, abstract: false, final false
  inline void DtdParserProxy_ParsePI(::System::Text::StringBuilder* sb);

  /// @brief Method DtdParserProxy_ParseComment, addr 0x286723c, size 0x184, virtual false, abstract: false, final false
  inline void DtdParserProxy_ParseComment(::System::Text::StringBuilder* sb);

  /// @brief Method get_IsResolverNull, addr 0x28675c4, size 0x40, virtual false, abstract: false, final false
  inline bool get_IsResolverNull();

  /// @brief Method GetTempResolver, addr 0x2867604, size 0x68, virtual false, abstract: false, final false
  inline ::System::Xml::XmlResolver* GetTempResolver();

  /// @brief Method DtdParserProxy_PushEntity, addr 0x286766c, size 0x10c, virtual false, abstract: false, final false
  inline bool DtdParserProxy_PushEntity(::System::Xml::IDtdEntityInfo* entity, ByRef<int32_t> entityId);

  /// @brief Method DtdParserProxy_PopEntity, addr 0x2867e28, size 0x4c, virtual false, abstract: false, final false
  inline bool DtdParserProxy_PopEntity(ByRef<::System::Xml::IDtdEntityInfo*> oldEntity, ByRef<int32_t> newEntityId);

  /// @brief Method DtdParserProxy_PushExternalSubset, addr 0x2867ec0, size 0x128, virtual false, abstract: false, final false
  inline bool DtdParserProxy_PushExternalSubset(::StringW systemId, ::StringW publicId);

  /// @brief Method DtdParserProxy_PushInternalDtd, addr 0x2868608, size 0x64, virtual false, abstract: false, final false
  inline void DtdParserProxy_PushInternalDtd(::StringW baseUri, ::StringW internalDtd);

  /// @brief Method DtdParserProxy_Throw, addr 0x2868868, size 0x8, virtual false, abstract: false, final false
  inline void DtdParserProxy_Throw(::System::Exception* e);

  /// @brief Method DtdParserProxy_OnSystemId, addr 0x2868900, size 0x8c, virtual false, abstract: false, final false
  inline void DtdParserProxy_OnSystemId(::StringW systemId, ::System::Xml::LineInfo keywordLineInfo, ::System::Xml::LineInfo systemLiteralLineInfo);

  /// @brief Method DtdParserProxy_OnPublicId, addr 0x2868a08, size 0x8c, virtual false, abstract: false, final false
  inline void DtdParserProxy_OnPublicId(::StringW publicId, ::System::Xml::LineInfo keywordLineInfo, ::System::Xml::LineInfo publicLiteralLineInfo);

  /// @brief Method Throw, addr 0x2868a94, size 0x14, virtual false, abstract: false, final false
  inline void Throw(int32_t pos, ::StringW res, ::StringW arg);

  /// @brief Method Throw, addr 0x2868b44, size 0x14, virtual false, abstract: false, final false
  inline void Throw(int32_t pos, ::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args);

  /// @brief Method Throw, addr 0x2868bf4, size 0x5c, virtual false, abstract: false, final false
  inline void Throw(int32_t pos, ::StringW res);

  /// @brief Method Throw, addr 0x2868c50, size 0x54, virtual false, abstract: false, final false
  inline void Throw(::StringW res);

  /// @brief Method Throw, addr 0x2868ca4, size 0xa8, virtual false, abstract: false, final false
  inline void Throw(::StringW res, int32_t lineNo, int32_t linePos);

  /// @brief Method Throw, addr 0x2868aa8, size 0x9c, virtual false, abstract: false, final false
  inline void Throw(::StringW res, ::StringW arg);

  /// @brief Method Throw, addr 0x2868d4c, size 0x8c, virtual false, abstract: false, final false
  inline void Throw(::StringW res, ::StringW arg, int32_t lineNo, int32_t linePos);

  /// @brief Method Throw, addr 0x2868b58, size 0x9c, virtual false, abstract: false, final false
  inline void Throw(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args);

  /// @brief Method Throw, addr 0x2868dd8, size 0x8c, virtual false, abstract: false, final false
  inline void Throw(::StringW res, ::StringW arg, ::System::Exception* innerException);

  /// @brief Method Throw, addr 0x2868e64, size 0xa8, virtual false, abstract: false, final false
  inline void Throw(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Exception* innerException);

  /// @brief Method Throw, addr 0x2868870, size 0x90, virtual false, abstract: false, final false
  inline void Throw(::System::Exception* e);

  /// @brief Method ReThrow, addr 0x2868f20, size 0xa8, virtual false, abstract: false, final false
  inline void ReThrow(::System::Exception* e, int32_t lineNo, int32_t linePos);

  /// @brief Method ThrowWithoutLineInfo, addr 0x28653b8, size 0x94, virtual false, abstract: false, final false
  inline void ThrowWithoutLineInfo(::StringW res);

  /// @brief Method ThrowWithoutLineInfo, addr 0x2868fc8, size 0x78, virtual false, abstract: false, final false
  inline void ThrowWithoutLineInfo(::StringW res, ::StringW arg);

  /// @brief Method ThrowWithoutLineInfo, addr 0x2869040, size 0x8c, virtual false, abstract: false, final false
  inline void ThrowWithoutLineInfo(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Exception* innerException);

  /// @brief Method ThrowInvalidChar, addr 0x28690cc, size 0x70, virtual false, abstract: false, final false
  inline void ThrowInvalidChar(::ArrayW<char16_t, ::Array<char16_t>*> data, int32_t length, int32_t invCharPos);

  /// @brief Method SetErrorState, addr 0x2868f0c, size 0x14, virtual false, abstract: false, final false
  inline void SetErrorState();

  /// @brief Method SendValidationEvent, addr 0x2867518, size 0xac, virtual false, abstract: false, final false
  inline void SendValidationEvent(::System::Xml::Schema::XmlSeverityType severity, ::StringW code, ::StringW arg, int32_t lineNo, int32_t linePos);

  /// @brief Method SendValidationEvent, addr 0x286913c, size 0xc4, virtual false, abstract: false, final false
  inline void SendValidationEvent(::System::Xml::Schema::XmlSeverityType severity, ::System::Xml::Schema::XmlSchemaException* exception);

  /// @brief Method get_InAttributeValueIterator, addr 0x28631b8, size 0x24, virtual false, abstract: false, final false
  inline bool get_InAttributeValueIterator();

  /// @brief Method FinishAttributeValueIterator, addr 0x28631dc, size 0xa4, virtual false, abstract: false, final false
  inline void FinishAttributeValueIterator();

  /// @brief Method get_DtdValidation, addr 0x28667d4, size 0x10, virtual false, abstract: false, final false
  inline bool get_DtdValidation();

  /// @brief Method InitStreamInput, addr 0x2869328, size 0x60, virtual false, abstract: false, final false
  inline void InitStreamInput(::System::Uri* baseUri, ::System::IO::Stream* stream, ::System::Text::Encoding* encoding);

  /// @brief Method InitStreamInput, addr 0x2869388, size 0x10, virtual false, abstract: false, final false
  inline void InitStreamInput(::System::Uri* baseUri, ::StringW baseUriStr, ::System::IO::Stream* stream, ::System::Text::Encoding* encoding);

  /// @brief Method InitStreamInput, addr 0x2862748, size 0x26c, virtual false, abstract: false, final false
  inline void InitStreamInput(::System::Uri* baseUri, ::StringW baseUriStr, ::System::IO::Stream* stream, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteCount,
                              ::System::Text::Encoding* encoding);

  /// @brief Method InitTextReaderInput, addr 0x2861f54, size 0xc, virtual false, abstract: false, final false
  inline void InitTextReaderInput(::StringW baseUriStr, ::System::IO::TextReader* input);

  /// @brief Method InitTextReaderInput, addr 0x286970c, size 0xb0, virtual false, abstract: false, final false
  inline void InitTextReaderInput(::StringW baseUriStr, ::System::Uri* baseUri, ::System::IO::TextReader* input);

  /// @brief Method InitStringInput, addr 0x286206c, size 0xcc, virtual false, abstract: false, final false
  inline void InitStringInput(::StringW baseUriStr, ::System::Text::Encoding* originalEncoding, ::StringW str);

  /// @brief Method InitFragmentReader, addr 0x2862138, size 0x1ec, virtual false, abstract: false, final false
  inline void InitFragmentReader(::System::Xml::XmlNodeType fragmentType, ::System::Xml::XmlParserContext* parserContext, bool allowXmlDeclFragment);

  /// @brief Method ProcessDtdFromParserContext, addr 0x28629b4, size 0x6c, virtual false, abstract: false, final false
  inline void ProcessDtdFromParserContext(::System::Xml::XmlParserContext* context);

  /// @brief Method OpenUrl, addr 0x2864020, size 0x18c, virtual false, abstract: false, final false
  inline void OpenUrl();

  /// @brief Method OpenUrlDelegate, addr 0x28699e4, size 0x124, virtual false, abstract: false, final false
  inline void OpenUrlDelegate(::System::Object* xmlResolver);

  /// @brief Method DetectEncoding, addr 0x2869398, size 0x22c, virtual false, abstract: false, final false
  inline ::System::Text::Encoding* DetectEncoding();

  /// @brief Method SetupEncoding, addr 0x28695c4, size 0x148, virtual false, abstract: false, final false
  inline void SetupEncoding(::System::Text::Encoding* encoding);

  /// @brief Method SwitchEncoding, addr 0x2869b08, size 0xf0, virtual false, abstract: false, final false
  inline void SwitchEncoding(::System::Text::Encoding* newEncoding);

  /// @brief Method CheckEncoding, addr 0x2869ca0, size 0x330, virtual false, abstract: false, final false
  inline ::System::Text::Encoding* CheckEncoding(::StringW newEncodingName);

  /// @brief Method UnDecodeChars, addr 0x2869bf8, size 0xa8, virtual false, abstract: false, final false
  inline void UnDecodeChars();

  /// @brief Method SwitchEncodingToUTF8, addr 0x2869fe0, size 0x6c, virtual false, abstract: false, final false
  inline void SwitchEncodingToUTF8();

  /// @brief Method ReadData, addr 0x2866920, size 0x430, virtual false, abstract: false, final false
  inline int32_t ReadData();

  /// @brief Method GetChars, addr 0x286a068, size 0x118, virtual false, abstract: false, final false
  inline int32_t GetChars(int32_t maxCharsCount);

  /// @brief Method InvalidCharRecovery, addr 0x286a180, size 0x17c, virtual false, abstract: false, final false
  inline void InvalidCharRecovery(ByRef<int32_t> bytesCount, ByRef<int32_t> charsCount);

  /// @brief Method Close, addr 0x28655d4, size 0xbc, virtual false, abstract: false, final false
  inline void Close(bool closeInput);

  /// @brief Method ShiftBuffer, addr 0x286a368, size 0x20, virtual false, abstract: false, final false
  inline void ShiftBuffer(int32_t sourcePos, int32_t destPos, int32_t count);

  /// @brief Method ParseXmlDeclaration, addr 0x28641ac, size 0xd7c, virtual false, abstract: false, final false
  inline bool ParseXmlDeclaration(bool isTextDecl);

  /// @brief Method ParseDocumentContent, addr 0x2863b30, size 0x4f0, virtual false, abstract: false, final false
  inline bool ParseDocumentContent();

  /// @brief Method ParseElementContent, addr 0x28637f8, size 0x338, virtual false, abstract: false, final false
  inline bool ParseElementContent();

  /// @brief Method ThrowUnclosedElements, addr 0x286b8f4, size 0x19c, virtual false, abstract: false, final false
  inline void ThrowUnclosedElements();

  /// @brief Method ParseElement, addr 0x286a84c, size 0x4a0, virtual false, abstract: false, final false
  inline void ParseElement();

  /// @brief Method AddDefaultAttributesAndNormalize, addr 0x286c0dc, size 0xa14, virtual false, abstract: false, final false
  inline void AddDefaultAttributesAndNormalize();

  /// @brief Method ParseEndElement, addr 0x286b508, size 0x3ec, virtual false, abstract: false, final false
  inline void ParseEndElement();

  /// @brief Method ThrowTagMismatch, addr 0x286d248, size 0x1fc, virtual false, abstract: false, final false
  inline void ThrowTagMismatch(::System::Xml::__XmlTextReaderImpl__NodeData* startTag);

  /// @brief Method ParseAttributes, addr 0x286baa0, size 0x63c, virtual false, abstract: false, final false
  inline void ParseAttributes();

  /// @brief Method ElementNamespaceLookup, addr 0x286caf0, size 0x48, virtual false, abstract: false, final false
  inline void ElementNamespaceLookup();

  /// @brief Method AttributeNamespaceLookup, addr 0x286d1a4, size 0xa4, virtual false, abstract: false, final false
  inline void AttributeNamespaceLookup();

  /// @brief Method AttributeDuplCheck, addr 0x286e374, size 0x374, virtual false, abstract: false, final false
  inline void AttributeDuplCheck();

  /// @brief Method OnDefaultNamespaceDecl, addr 0x286dfb0, size 0xfc, virtual false, abstract: false, final false
  inline void OnDefaultNamespaceDecl(::System::Xml::__XmlTextReaderImpl__NodeData* attr);

  /// @brief Method OnNamespaceDecl, addr 0x286e0ac, size 0xdc, virtual false, abstract: false, final false
  inline void OnNamespaceDecl(::System::Xml::__XmlTextReaderImpl__NodeData* attr);

  /// @brief Method OnXmlReservedAttribute, addr 0x286e188, size 0x1ec, virtual false, abstract: false, final false
  inline void OnXmlReservedAttribute(::System::Xml::__XmlTextReaderImpl__NodeData* attr);

  /// @brief Method ParseAttributeValueSlow, addr 0x286d668, size 0x948, virtual false, abstract: false, final false
  inline void ParseAttributeValueSlow(int32_t curPos, char16_t quoteChar, ::System::Xml::__XmlTextReaderImpl__NodeData* attr);

  /// @brief Method AddAttributeChunkToList, addr 0x286ea80, size 0x30, virtual false, abstract: false, final false
  inline void AddAttributeChunkToList(::System::Xml::__XmlTextReaderImpl__NodeData* attr, ::System::Xml::__XmlTextReaderImpl__NodeData* chunk,
                                      ByRef<::System::Xml::__XmlTextReaderImpl__NodeData*> lastChunk);

  /// @brief Method ParseText, addr 0x286af98, size 0x374, virtual false, abstract: false, final false
  inline bool ParseText();

  /// @brief Method ParseText, addr 0x286ebec, size 0x6cc, virtual false, abstract: false, final false
  inline bool ParseText(ByRef<int32_t> startPos, ByRef<int32_t> endPos, ByRef<int32_t> outOrChars);

  /// @brief Method FinishPartialValue, addr 0x2862d38, size 0xbc, virtual false, abstract: false, final false
  inline void FinishPartialValue();

  /// @brief Method FinishOtherValueIterator, addr 0x2862df4, size 0x110, virtual false, abstract: false, final false
  inline void FinishOtherValueIterator();

  /// @brief Method SkipPartialTextValue, addr 0x286544c, size 0x40, virtual false, abstract: false, final false
  inline void SkipPartialTextValue();

  /// @brief Method FinishReadValueChunk, addr 0x286548c, size 0x20, virtual false, abstract: false, final false
  inline void FinishReadValueChunk();

  /// @brief Method FinishReadContentAsBinary, addr 0x28654ac, size 0x50, virtual false, abstract: false, final false
  inline void FinishReadContentAsBinary();

  /// @brief Method FinishReadElementContentAsBinary, addr 0x28654fc, size 0xd0, virtual false, abstract: false, final false
  inline void FinishReadElementContentAsBinary();

  /// @brief Method ParseRootLevelWhitespace, addr 0x286b30c, size 0x1fc, virtual false, abstract: false, final false
  inline bool ParseRootLevelWhitespace();

  /// @brief Method ParseEntityReference, addr 0x2864fdc, size 0x74, virtual false, abstract: false, final false
  inline void ParseEntityReference();

  /// @brief Method HandleEntityReference, addr 0x286acec, size 0x2ac, virtual false, abstract: false, final false
  inline ::System::Xml::__XmlTextReaderImpl__EntityType HandleEntityReference(bool isInAttributeValue, ::System::Xml::__XmlTextReaderImpl__EntityExpandType expandType, ByRef<int32_t> charRefEndPos);

  /// @brief Method HandleGeneralEntityReference, addr 0x2865ffc, size 0x4a4, virtual false, abstract: false, final false
  inline ::System::Xml::__XmlTextReaderImpl__EntityType HandleGeneralEntityReference(::StringW name, bool isInAttributeValue, bool pushFakeEntityIfNullResolver, int32_t entityStartLinePos);

  /// @brief Method get_InEntity, addr 0x2869fd0, size 0x10, virtual false, abstract: false, final false
  inline bool get_InEntity();

  /// @brief Method HandleEntityEnd, addr 0x2869200, size 0x128, virtual false, abstract: false, final false
  inline bool HandleEntityEnd(bool checkEntityNesting);

  /// @brief Method SetupEndEntityNodeInContent, addr 0x2865050, size 0x138, virtual false, abstract: false, final false
  inline void SetupEndEntityNodeInContent();

  /// @brief Method SetupEndEntityNodeInAttribute, addr 0x286f4e8, size 0x68, virtual false, abstract: false, final false
  inline void SetupEndEntityNodeInAttribute();

  /// @brief Method ParsePI, addr 0x286a538, size 0x8, virtual false, abstract: false, final false
  inline bool ParsePI();

  /// @brief Method ParsePI, addr 0x2866ecc, size 0x370, virtual false, abstract: false, final false
  inline bool ParsePI(::System::Text::StringBuilder* piInDtdStringBuilder);

  /// @brief Method ParsePIValue, addr 0x286f550, size 0x394, virtual false, abstract: false, final false
  inline bool ParsePIValue(ByRef<int32_t> outStartPos, ByRef<int32_t> outEndPos);

  /// @brief Method ParseComment, addr 0x286a540, size 0x54, virtual false, abstract: false, final false
  inline bool ParseComment();

  /// @brief Method ParseCData, addr 0x286a5a4, size 0x8, virtual false, abstract: false, final false
  inline void ParseCData();

  /// @brief Method ParseCDataOrComment, addr 0x28673c0, size 0x158, virtual false, abstract: false, final false
  inline void ParseCDataOrComment(::System::Xml::XmlNodeType type);

  /// @brief Method ParseCDataOrComment, addr 0x286f8e4, size 0x43c, virtual false, abstract: false, final false
  inline bool ParseCDataOrComment(::System::Xml::XmlNodeType type, ByRef<int32_t> outStartPos, ByRef<int32_t> outEndPos);

  /// @brief Method ParseDoctypeDecl, addr 0x286a5ac, size 0x288, virtual false, abstract: false, final false
  inline bool ParseDoctypeDecl();

  /// @brief Method ParseDtd, addr 0x286fd20, size 0x31c, virtual false, abstract: false, final false
  inline void ParseDtd();

  /// @brief Method SkipDtd, addr 0x287003c, size 0x358, virtual false, abstract: false, final false
  inline void SkipDtd();

  /// @brief Method SkipPublicOrSystemIdLiteral, addr 0x2870394, size 0xb8, virtual false, abstract: false, final false
  inline void SkipPublicOrSystemIdLiteral();

  /// @brief Method SkipUntil, addr 0x287044c, size 0x43c, virtual false, abstract: false, final false
  inline void SkipUntil(char16_t stopChar, bool recognizeLiterals);

  /// @brief Method EatWhitespaces, addr 0x28683b4, size 0x254, virtual false, abstract: false, final false
  inline int32_t EatWhitespaces(::System::Text::StringBuilder* sb);

  /// @brief Method ParseCharRefInline, addr 0x286f310, size 0x6c, virtual false, abstract: false, final false
  inline int32_t ParseCharRefInline(int32_t startPos, ByRef<int32_t> charCount, ByRef<::System::Xml::__XmlTextReaderImpl__EntityType> entityType);

  /// @brief Method ParseNumericCharRef, addr 0x2866d70, size 0xac, virtual false, abstract: false, final false
  inline int32_t ParseNumericCharRef(bool expand, ::System::Text::StringBuilder* internalSubsetBuilder, ByRef<::System::Xml::__XmlTextReaderImpl__EntityType> entityType);

  /// @brief Method ParseNumericCharRefInline, addr 0x2870888, size 0x660, virtual false, abstract: false, final false
  inline int32_t ParseNumericCharRefInline(int32_t startPos, bool expand, ::System::Text::StringBuilder* internalSubsetBuilder, ByRef<int32_t> charCount,
                                           ByRef<::System::Xml::__XmlTextReaderImpl__EntityType> entityType);

  /// @brief Method ParseNamedCharRef, addr 0x2866e24, size 0x64, virtual false, abstract: false, final false
  inline int32_t ParseNamedCharRef(bool expand, ::System::Text::StringBuilder* internalSubsetBuilder);

  /// @brief Method ParseNamedCharRefInline, addr 0x2870ee8, size 0x2dc, virtual false, abstract: false, final false
  inline int32_t ParseNamedCharRefInline(int32_t startPos, bool expand, ::System::Text::StringBuilder* internalSubsetBuilder);

  /// @brief Method ParseName, addr 0x286a390, size 0x20, virtual false, abstract: false, final false
  inline int32_t ParseName();

  /// @brief Method ParseQName, addr 0x286ba90, size 0x10, virtual false, abstract: false, final false
  inline int32_t ParseQName(ByRef<int32_t> colonPos);

  /// @brief Method ParseQName, addr 0x28711c4, size 0x288, virtual false, abstract: false, final false
  inline int32_t ParseQName(bool isQName, int32_t startOffset, ByRef<int32_t> colonPos);

  /// @brief Method ReadDataInName, addr 0x287144c, size 0x40, virtual false, abstract: false, final false
  inline bool ReadDataInName(ByRef<int32_t> pos);

  /// @brief Method ParseEntityName, addr 0x286eab0, size 0x13c, virtual false, abstract: false, final false
  inline ::StringW ParseEntityName();

  /// @brief Method AddNode, addr 0x2864f54, size 0x44, virtual false, abstract: false, final false
  inline ::System::Xml::__XmlTextReaderImpl__NodeData* AddNode(int32_t nodeIndex, int32_t nodeDepth);

  /// @brief Method AllocNode, addr 0x287148c, size 0x138, virtual false, abstract: false, final false
  inline ::System::Xml::__XmlTextReaderImpl__NodeData* AllocNode(int32_t nodeIndex, int32_t nodeDepth);

  /// @brief Method AddAttributeNoChecks, addr 0x286898c, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Xml::__XmlTextReaderImpl__NodeData* AddAttributeNoChecks(::StringW name, int32_t attrDepth);

  /// @brief Method AddAttribute, addr 0x286d4c4, size 0x1a4, virtual false, abstract: false, final false
  inline ::System::Xml::__XmlTextReaderImpl__NodeData* AddAttribute(int32_t endNamePos, int32_t colonPos);

  /// @brief Method AddAttribute, addr 0x28715c4, size 0x134, virtual false, abstract: false, final false
  inline ::System::Xml::__XmlTextReaderImpl__NodeData* AddAttribute(::StringW localName, ::StringW prefix, ::StringW nameWPrefix);

  /// @brief Method PopElementContext, addr 0x2864f98, size 0x44, virtual false, abstract: false, final false
  inline void PopElementContext();

  /// @brief Method OnNewLine, addr 0x28668f8, size 0x14, virtual false, abstract: false, final false
  inline void OnNewLine(int32_t pos);

  /// @brief Method OnEof, addr 0x2865330, size 0x88, virtual false, abstract: false, final false
  inline void OnEof();

  /// @brief Method LookupNamespace, addr 0x286e6e8, size 0xc4, virtual false, abstract: false, final false
  inline ::StringW LookupNamespace(::System::Xml::__XmlTextReaderImpl__NodeData* node);

  /// @brief Method AddNamespace, addr 0x286e824, size 0x25c, virtual false, abstract: false, final false
  inline void AddNamespace(::StringW prefix, ::StringW uri, ::System::Xml::__XmlTextReaderImpl__NodeData* attr);

  /// @brief Method ResetAttributes, addr 0x2864f28, size 0x2c, virtual false, abstract: false, final false
  inline void ResetAttributes();

  /// @brief Method FullAttributeCleanup, addr 0x2871724, size 0x64, virtual false, abstract: false, final false
  inline void FullAttributeCleanup();

  /// @brief Method PushXmlContext, addr 0x286e7ac, size 0x78, virtual false, abstract: false, final false
  inline void PushXmlContext();

  /// @brief Method PopXmlContext, addr 0x28716f8, size 0x2c, virtual false, abstract: false, final false
  inline void PopXmlContext();

  /// @brief Method GetWhitespaceType, addr 0x286f4a0, size 0x48, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNodeType GetWhitespaceType();

  /// @brief Method GetTextNodeType, addr 0x286f2b8, size 0x58, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNodeType GetTextNodeType(int32_t orChars);

  /// @brief Method PushExternalEntityOrSubset, addr 0x2867fe8, size 0x3cc, virtual false, abstract: false, final false
  inline void PushExternalEntityOrSubset(::StringW publicId, ::StringW systemId, ::System::Uri* baseUri, ::StringW entityName);

  /// @brief Method OpenAndPush, addr 0x2871788, size 0x234, virtual false, abstract: false, final false
  inline bool OpenAndPush(::System::Uri* uri);

  /// @brief Method PushExternalEntity, addr 0x2867778, size 0x390, virtual false, abstract: false, final false
  inline bool PushExternalEntity(::System::Xml::IDtdEntityInfo* entity);

  /// @brief Method PushInternalEntity, addr 0x2867b08, size 0x320, virtual false, abstract: false, final false
  inline void PushInternalEntity(::System::Xml::IDtdEntityInfo* entity);

  /// @brief Method PopEntity, addr 0x2867e74, size 0x4c, virtual false, abstract: false, final false
  inline void PopEntity();

  /// @brief Method RegisterEntity, addr 0x28719bc, size 0x1f0, virtual false, abstract: false, final false
  inline void RegisterEntity(::System::Xml::IDtdEntityInfo* entity);

  /// @brief Method UnregisterEntity, addr 0x2871bac, size 0x64, virtual false, abstract: false, final false
  inline void UnregisterEntity();

  /// @brief Method PushParsingState, addr 0x286866c, size 0x120, virtual false, abstract: false, final false
  inline void PushParsingState();

  /// @brief Method PopParsingState, addr 0x286a2fc, size 0x6c, virtual false, abstract: false, final false
  inline void PopParsingState();

  /// @brief Method IncrementalRead, addr 0x2871c10, size 0x934, virtual false, abstract: false, final false
  inline int32_t IncrementalRead();

  /// @brief Method FinishIncrementalRead, addr 0x2865188, size 0x6c, virtual false, abstract: false, final false
  inline void FinishIncrementalRead();

  /// @brief Method ParseFragmentAttribute, addr 0x28651f4, size 0x80, virtual false, abstract: false, final false
  inline bool ParseFragmentAttribute();

  /// @brief Method ParseAttributeValueChunk, addr 0x2865914, size 0x494, virtual false, abstract: false, final false
  inline bool ParseAttributeValueChunk();

  /// @brief Method ParseXmlDeclarationFragment, addr 0x2865274, size 0xbc, virtual false, abstract: false, final false
  inline void ParseXmlDeclarationFragment();

  /// @brief Method ThrowUnexpectedToken, addr 0x286a594, size 0x10, virtual false, abstract: false, final false
  inline void ThrowUnexpectedToken(int32_t pos, ::StringW expectedToken);

  /// @brief Method ThrowUnexpectedToken, addr 0x286a388, size 0x8, virtual false, abstract: false, final false
  inline void ThrowUnexpectedToken(::StringW expectedToken1);

  /// @brief Method ThrowUnexpectedToken, addr 0x286a83c, size 0x10, virtual false, abstract: false, final false
  inline void ThrowUnexpectedToken(int32_t pos, ::StringW expectedToken1, ::StringW expectedToken2);

  /// @brief Method ThrowUnexpectedToken, addr 0x286a3b0, size 0x188, virtual false, abstract: false, final false
  inline void ThrowUnexpectedToken(::StringW expectedToken1, ::StringW expectedToken2);

  /// @brief Method ParseUnexpectedToken, addr 0x286a834, size 0x8, virtual false, abstract: false, final false
  inline ::StringW ParseUnexpectedToken(int32_t pos);

  /// @brief Method ParseUnexpectedToken, addr 0x2872544, size 0xc8, virtual false, abstract: false, final false
  inline ::StringW ParseUnexpectedToken();

  /// @brief Method ThrowExpectingWhitespace, addr 0x286d444, size 0x80, virtual false, abstract: false, final false
  inline void ThrowExpectingWhitespace(int32_t pos);

  /// @brief Method GetIndexOfAttributeWithoutPrefix, addr 0x286301c, size 0xe8, virtual false, abstract: false, final false
  inline int32_t GetIndexOfAttributeWithoutPrefix(::StringW name);

  /// @brief Method GetIndexOfAttributeWithPrefix, addr 0x2863104, size 0xb4, virtual false, abstract: false, final false
  inline int32_t GetIndexOfAttributeWithPrefix(::StringW name);

  /// @brief Method ZeroEndingStream, addr 0x286f37c, size 0x7c, virtual false, abstract: false, final false
  inline bool ZeroEndingStream(int32_t pos);

  /// @brief Method ParseDtdFromParserContext, addr 0x28697bc, size 0x228, virtual false, abstract: false, final false
  inline void ParseDtdFromParserContext();

  /// @brief Method MoveToNextContentNode, addr 0x286f3f8, size 0xa8, virtual false, abstract: false, final false
  inline bool MoveToNextContentNode(bool moveIfOnContentNode);

  /// @brief Method get_DtdInfo, addr 0x287260c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::IDtdInfo* get_DtdInfo();

  /// @brief Method SetDtdInfo, addr 0x2872614, size 0x134, virtual false, abstract: false, final false
  inline void SetDtdInfo(::System::Xml::IDtdInfo* newDtdInfo);

  /// @brief Method set_XmlValidatingReaderCompatibilityMode, addr 0x2872748, size 0xd8, virtual false, abstract: false, final false
  inline void set_XmlValidatingReaderCompatibilityMode(bool value);

  /// @brief Method AddDefaultAttributeDtd, addr 0x286cb38, size 0x66c, virtual false, abstract: false, final false
  inline bool AddDefaultAttributeDtd(::System::Xml::IDtdDefaultAttributeInfo* defAttrInfo, bool definedInDtd,
                                     ::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*> nameSortedNodeData);

  /// @brief Method AddDefaultAttributeInternal, addr 0x2872820, size 0x244, virtual false, abstract: false, final false
  inline ::System::Xml::__XmlTextReaderImpl__NodeData* AddDefaultAttributeInternal(::StringW localName, ::StringW ns, ::StringW prefix, ::StringW value, int32_t lineNo, int32_t linePos,
                                                                                   int32_t valueLineNo, int32_t valueLinePos, bool isXmlAttribute);

  /// @brief Method set_DisableUndeclaredEntityCheck, addr 0x2872a64, size 0xc, virtual false, abstract: false, final false
  inline void set_DisableUndeclaredEntityCheck(bool value);

  /// @brief Method RegisterConsumedCharacters, addr 0x286878c, size 0xdc, virtual false, abstract: false, final false
  inline void RegisterConsumedCharacters(int64_t characters, bool inEntityReference);

  /// @brief Method StripSpaces, addr 0x2872a70, size 0x228, virtual false, abstract: false, final false
  static inline ::StringW StripSpaces(::StringW value);

  /// @brief Method StripSpaces, addr 0x2872c98, size 0x1110, virtual false, abstract: false, final false
  static inline void StripSpaces(::ArrayW<char16_t, ::Array<char16_t>*> value, int32_t index, ByRef<int32_t> len);

  /// @brief Method BlockCopyChars, addr 0x286a04c, size 0x14, virtual false, abstract: false, final false
  static inline void BlockCopyChars(::ArrayW<char16_t, ::Array<char16_t>*> src, int32_t srcOffset, ::ArrayW<char16_t, ::Array<char16_t>*> dst, int32_t dstOffset, int32_t count);

  /// @brief Method BlockCopy, addr 0x286a060, size 0x8, virtual false, abstract: false, final false
  static inline void BlockCopy(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t srcOffset, ::ArrayW<uint8_t, ::Array<uint8_t>*> dst, int32_t dstOffset, int32_t count);

  // Ctor Parameters [CppParam { name: "", ty: "XmlTextReaderImpl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlTextReaderImpl(XmlTextReaderImpl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlTextReaderImpl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlTextReaderImpl(XmlTextReaderImpl const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTextReaderImpl();

public:
  /// @brief Field laterInitParam, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::__XmlTextReaderImpl__LaterInitParam* ___laterInitParam;

  /// @brief Field xmlCharType, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlCharType ___xmlCharType;

  /// @brief Field ps, offset: 0x20, size: 0x78, def value: None
  ::System::Xml::__XmlTextReaderImpl__ParsingState ___ps;

  /// @brief Field parsingFunction, offset: 0x98, size: 0x4, def value: None
  ::System::Xml::__XmlTextReaderImpl__ParsingFunction ___parsingFunction;

  /// @brief Field nextParsingFunction, offset: 0x9c, size: 0x4, def value: None
  ::System::Xml::__XmlTextReaderImpl__ParsingFunction ___nextParsingFunction;

  /// @brief Field nextNextParsingFunction, offset: 0xa0, size: 0x4, def value: None
  ::System::Xml::__XmlTextReaderImpl__ParsingFunction ___nextNextParsingFunction;

  /// @brief Field nodes, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*> ___nodes;

  /// @brief Field curNode, offset: 0xb0, size: 0x8, def value: None
  ::System::Xml::__XmlTextReaderImpl__NodeData* ___curNode;

  /// @brief Field index, offset: 0xb8, size: 0x4, def value: None
  int32_t ___index;

  /// @brief Field curAttrIndex, offset: 0xbc, size: 0x4, def value: None
  int32_t ___curAttrIndex;

  /// @brief Field attrCount, offset: 0xc0, size: 0x4, def value: None
  int32_t ___attrCount;

  /// @brief Field attrHashtable, offset: 0xc4, size: 0x4, def value: None
  int32_t ___attrHashtable;

  /// @brief Field attrDuplWalkCount, offset: 0xc8, size: 0x4, def value: None
  int32_t ___attrDuplWalkCount;

  /// @brief Field attrNeedNamespaceLookup, offset: 0xcc, size: 0x1, def value: None
  bool ___attrNeedNamespaceLookup;

  /// @brief Field fullAttrCleanup, offset: 0xcd, size: 0x1, def value: None
  bool ___fullAttrCleanup;

  /// @brief Field attrDuplSortingArray, offset: 0xd0, size: 0x8, def value: None
  ::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*> ___attrDuplSortingArray;

  /// @brief Field nameTable, offset: 0xd8, size: 0x8, def value: None
  ::System::Xml::XmlNameTable* ___nameTable;

  /// @brief Field nameTableFromSettings, offset: 0xe0, size: 0x1, def value: None
  bool ___nameTableFromSettings;

  /// @brief Field xmlResolver, offset: 0xe8, size: 0x8, def value: None
  ::System::Xml::XmlResolver* ___xmlResolver;

  /// @brief Field url, offset: 0xf0, size: 0x8, def value: None
  ::StringW ___url;

  /// @brief Field normalize, offset: 0xf8, size: 0x1, def value: None
  bool ___normalize;

  /// @brief Field supportNamespaces, offset: 0xf9, size: 0x1, def value: None
  bool ___supportNamespaces;

  /// @brief Field whitespaceHandling, offset: 0xfc, size: 0x4, def value: None
  ::System::Xml::WhitespaceHandling ___whitespaceHandling;

  /// @brief Field dtdProcessing, offset: 0x100, size: 0x4, def value: None
  ::System::Xml::DtdProcessing ___dtdProcessing;

  /// @brief Field entityHandling, offset: 0x104, size: 0x4, def value: None
  ::System::Xml::EntityHandling ___entityHandling;

  /// @brief Field ignorePIs, offset: 0x108, size: 0x1, def value: None
  bool ___ignorePIs;

  /// @brief Field ignoreComments, offset: 0x109, size: 0x1, def value: None
  bool ___ignoreComments;

  /// @brief Field checkCharacters, offset: 0x10a, size: 0x1, def value: None
  bool ___checkCharacters;

  /// @brief Field lineNumberOffset, offset: 0x10c, size: 0x4, def value: None
  int32_t ___lineNumberOffset;

  /// @brief Field linePositionOffset, offset: 0x110, size: 0x4, def value: None
  int32_t ___linePositionOffset;

  /// @brief Field closeInput, offset: 0x114, size: 0x1, def value: None
  bool ___closeInput;

  /// @brief Field maxCharactersInDocument, offset: 0x118, size: 0x8, def value: None
  int64_t ___maxCharactersInDocument;

  /// @brief Field maxCharactersFromEntities, offset: 0x120, size: 0x8, def value: None
  int64_t ___maxCharactersFromEntities;

  /// @brief Field v1Compat, offset: 0x128, size: 0x1, def value: None
  bool ___v1Compat;

  /// @brief Field namespaceManager, offset: 0x130, size: 0x8, def value: None
  ::System::Xml::XmlNamespaceManager* ___namespaceManager;

  /// @brief Field lastPrefix, offset: 0x138, size: 0x8, def value: None
  ::StringW ___lastPrefix;

  /// @brief Field xmlContext, offset: 0x140, size: 0x8, def value: None
  ::System::Xml::__XmlTextReaderImpl__XmlContext* ___xmlContext;

  /// @brief Field parsingStatesStack, offset: 0x148, size: 0x8, def value: None
  ::ArrayW<::System::Xml::__XmlTextReaderImpl__ParsingState, ::Array<::System::Xml::__XmlTextReaderImpl__ParsingState>*> ___parsingStatesStack;

  /// @brief Field parsingStatesStackTop, offset: 0x150, size: 0x4, def value: None
  int32_t ___parsingStatesStackTop;

  /// @brief Field reportedBaseUri, offset: 0x158, size: 0x8, def value: None
  ::StringW ___reportedBaseUri;

  /// @brief Field reportedEncoding, offset: 0x160, size: 0x8, def value: None
  ::System::Text::Encoding* ___reportedEncoding;

  /// @brief Field dtdInfo, offset: 0x168, size: 0x8, def value: None
  ::System::Xml::IDtdInfo* ___dtdInfo;

  /// @brief Field fragmentType, offset: 0x170, size: 0x4, def value: None
  ::System::Xml::XmlNodeType ___fragmentType;

  /// @brief Field fragmentParserContext, offset: 0x178, size: 0x8, def value: None
  ::System::Xml::XmlParserContext* ___fragmentParserContext;

  /// @brief Field fragment, offset: 0x180, size: 0x1, def value: None
  bool ___fragment;

  /// @brief Field incReadDecoder, offset: 0x188, size: 0x8, def value: None
  ::System::Xml::IncrementalReadDecoder* ___incReadDecoder;

  /// @brief Field incReadState, offset: 0x190, size: 0x4, def value: None
  ::System::Xml::__XmlTextReaderImpl__IncrementalReadState ___incReadState;

  /// @brief Field incReadLineInfo, offset: 0x194, size: 0x8, def value: None
  ::System::Xml::LineInfo ___incReadLineInfo;

  /// @brief Field incReadDepth, offset: 0x19c, size: 0x4, def value: None
  int32_t ___incReadDepth;

  /// @brief Field incReadLeftStartPos, offset: 0x1a0, size: 0x4, def value: None
  int32_t ___incReadLeftStartPos;

  /// @brief Field incReadLeftEndPos, offset: 0x1a4, size: 0x4, def value: None
  int32_t ___incReadLeftEndPos;

  /// @brief Field attributeValueBaseEntityId, offset: 0x1a8, size: 0x4, def value: None
  int32_t ___attributeValueBaseEntityId;

  /// @brief Field emptyEntityInAttributeResolved, offset: 0x1ac, size: 0x1, def value: None
  bool ___emptyEntityInAttributeResolved;

  /// @brief Field validationEventHandling, offset: 0x1b0, size: 0x8, def value: None
  ::System::Xml::IValidationEventHandling* ___validationEventHandling;

  /// @brief Field onDefaultAttributeUse, offset: 0x1b8, size: 0x8, def value: None
  ::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate* ___onDefaultAttributeUse;

  /// @brief Field validatingReaderCompatFlag, offset: 0x1c0, size: 0x1, def value: None
  bool ___validatingReaderCompatFlag;

  /// @brief Field addDefaultAttributesAndNormalize, offset: 0x1c1, size: 0x1, def value: None
  bool ___addDefaultAttributesAndNormalize;

  /// @brief Field stringBuilder, offset: 0x1c8, size: 0x8, def value: None
  ::System::Text::StringBuilder* ___stringBuilder;

  /// @brief Field rootElementParsed, offset: 0x1d0, size: 0x1, def value: None
  bool ___rootElementParsed;

  /// @brief Field standalone, offset: 0x1d1, size: 0x1, def value: None
  bool ___standalone;

  /// @brief Field nextEntityId, offset: 0x1d4, size: 0x4, def value: None
  int32_t ___nextEntityId;

  /// @brief Field parsingMode, offset: 0x1d8, size: 0x4, def value: None
  ::System::Xml::__XmlTextReaderImpl__ParsingMode ___parsingMode;

  /// @brief Field readState, offset: 0x1dc, size: 0x4, def value: None
  ::System::Xml::ReadState ___readState;

  /// @brief Field lastEntity, offset: 0x1e0, size: 0x8, def value: None
  ::System::Xml::IDtdEntityInfo* ___lastEntity;

  /// @brief Field afterResetState, offset: 0x1e8, size: 0x1, def value: None
  bool ___afterResetState;

  /// @brief Field documentStartBytePos, offset: 0x1ec, size: 0x4, def value: None
  int32_t ___documentStartBytePos;

  /// @brief Field readValueOffset, offset: 0x1f0, size: 0x4, def value: None
  int32_t ___readValueOffset;

  /// @brief Field charactersInDocument, offset: 0x1f8, size: 0x8, def value: None
  int64_t ___charactersInDocument;

  /// @brief Field charactersFromEntities, offset: 0x200, size: 0x8, def value: None
  int64_t ___charactersFromEntities;

  /// @brief Field currentEntities, offset: 0x208, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Xml::IDtdEntityInfo*, ::System::Xml::IDtdEntityInfo*>* ___currentEntities;

  /// @brief Field disableUndeclaredEntityCheck, offset: 0x210, size: 0x1, def value: None
  bool ___disableUndeclaredEntityCheck;

  /// @brief Field outerReader, offset: 0x218, size: 0x8, def value: None
  ::System::Xml::XmlReader* ___outerReader;

  /// @brief Field xmlResolverIsSet, offset: 0x220, size: 0x1, def value: None
  bool ___xmlResolverIsSet;

  /// @brief Field Xml, offset: 0x228, size: 0x8, def value: None
  ::StringW ___Xml;

  /// @brief Field XmlNs, offset: 0x230, size: 0x8, def value: None
  ::StringW ___XmlNs;

  /// @brief Field parseText_dummyTask, offset: 0x238, size: 0x8, def value: None
  ::System::Threading::Tasks::Task_1<::System::Tuple_4<int32_t, int32_t, int32_t, bool>*>* ___parseText_dummyTask;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlTextReaderImpl, 0x240>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___laterInitParam) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___xmlCharType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___ps) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___parsingFunction) == 0x98, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___nextParsingFunction) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___nextNextParsingFunction) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___nodes) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___curNode) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___index) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___curAttrIndex) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___attrCount) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___attrHashtable) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___attrDuplWalkCount) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___attrNeedNamespaceLookup) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___fullAttrCleanup) == 0xcd, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___attrDuplSortingArray) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___nameTable) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___nameTableFromSettings) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___xmlResolver) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___url) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___normalize) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___supportNamespaces) == 0xf9, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___whitespaceHandling) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___dtdProcessing) == 0x100, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___entityHandling) == 0x104, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___ignorePIs) == 0x108, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___ignoreComments) == 0x109, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___checkCharacters) == 0x10a, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___lineNumberOffset) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___linePositionOffset) == 0x110, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___closeInput) == 0x114, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___maxCharactersInDocument) == 0x118, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___maxCharactersFromEntities) == 0x120, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___v1Compat) == 0x128, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___namespaceManager) == 0x130, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___lastPrefix) == 0x138, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___xmlContext) == 0x140, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___parsingStatesStack) == 0x148, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___parsingStatesStackTop) == 0x150, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___reportedBaseUri) == 0x158, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___reportedEncoding) == 0x160, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___dtdInfo) == 0x168, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___fragmentType) == 0x170, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___fragmentParserContext) == 0x178, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___fragment) == 0x180, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___incReadDecoder) == 0x188, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___incReadState) == 0x190, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___incReadLineInfo) == 0x194, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___incReadDepth) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___incReadLeftStartPos) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___incReadLeftEndPos) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___attributeValueBaseEntityId) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___emptyEntityInAttributeResolved) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___validationEventHandling) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___onDefaultAttributeUse) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___validatingReaderCompatFlag) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___addDefaultAttributesAndNormalize) == 0x1c1, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___stringBuilder) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___rootElementParsed) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___standalone) == 0x1d1, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___nextEntityId) == 0x1d4, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___parsingMode) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___readState) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___lastEntity) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___afterResetState) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___documentStartBytePos) == 0x1ec, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___readValueOffset) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___charactersInDocument) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___charactersFromEntities) == 0x200, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___currentEntities) == 0x208, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___disableUndeclaredEntityCheck) == 0x210, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___outerReader) == 0x218, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___xmlResolverIsSet) == 0x220, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___Xml) == 0x228, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___XmlNs) == 0x230, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlTextReaderImpl, ___parseText_dummyTask) == 0x238, "Offset mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlTextReaderImpl__EntityExpandType, "System.Xml", "XmlTextReaderImpl/EntityExpandType");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlTextReaderImpl__EntityType, "System.Xml", "XmlTextReaderImpl/EntityType");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlTextReaderImpl__IncrementalReadState, "System.Xml", "XmlTextReaderImpl/IncrementalReadState");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlTextReaderImpl__InitInputType, "System.Xml", "XmlTextReaderImpl/InitInputType");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlTextReaderImpl__ParsingFunction, "System.Xml", "XmlTextReaderImpl/ParsingFunction");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlTextReaderImpl__ParsingMode, "System.Xml", "XmlTextReaderImpl/ParsingMode");
NEED_NO_BOX(::System::Xml::XmlTextReaderImpl);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlTextReaderImpl*, "System.Xml", "XmlTextReaderImpl");
NEED_NO_BOX(::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer*, "System.Xml", "XmlTextReaderImpl/DtdDefaultAttributeInfoToNodeDataComparer");
NEED_NO_BOX(::System::Xml::__XmlTextReaderImpl__DtdParserProxy);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlTextReaderImpl__DtdParserProxy*, "System.Xml", "XmlTextReaderImpl/DtdParserProxy");
NEED_NO_BOX(::System::Xml::__XmlTextReaderImpl__LaterInitParam);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlTextReaderImpl__LaterInitParam*, "System.Xml", "XmlTextReaderImpl/LaterInitParam");
NEED_NO_BOX(::System::Xml::__XmlTextReaderImpl__NoNamespaceManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlTextReaderImpl__NoNamespaceManager*, "System.Xml", "XmlTextReaderImpl/NoNamespaceManager");
NEED_NO_BOX(::System::Xml::__XmlTextReaderImpl__NodeData);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlTextReaderImpl__NodeData*, "System.Xml", "XmlTextReaderImpl/NodeData");
NEED_NO_BOX(::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate*, "System.Xml", "XmlTextReaderImpl/OnDefaultAttributeUseDelegate");
NEED_NO_BOX(::System::Xml::__XmlTextReaderImpl__XmlContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlTextReaderImpl__XmlContext*, "System.Xml", "XmlTextReaderImpl/XmlContext");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlTextReaderImpl__ParsingState, "System.Xml", "XmlTextReaderImpl/ParsingState");
