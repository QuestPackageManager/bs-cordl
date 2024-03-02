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

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__ParsingFunction();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlTextReaderImpl__ParsingFunction(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AfterResolveEmptyEntityInContent value: static_cast<int32_t>(0x12)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const AfterResolveEmptyEntityInContent;

  /// @brief Field AfterResolveEntityInContent value: static_cast<int32_t>(0x11)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const AfterResolveEntityInContent;

  /// @brief Field DocumentContent value: static_cast<int32_t>(0x5)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const DocumentContent;

  /// @brief Field ElementContent value: static_cast<int32_t>(0x0)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const ElementContent;

  /// @brief Field EntityReference value: static_cast<int32_t>(0xd)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const EntityReference;

  /// @brief Field Eof value: static_cast<int32_t>(0xb)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const Eof;

  /// @brief Field Error value: static_cast<int32_t>(0xa)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const Error;

  /// @brief Field FragmentAttribute value: static_cast<int32_t>(0xf)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const FragmentAttribute;

  /// @brief Field GoToEof value: static_cast<int32_t>(0x14)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const GoToEof;

  /// @brief Field InIncrementalRead value: static_cast<int32_t>(0xe)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const InIncrementalRead;

  /// @brief Field InReadAttributeValue value: static_cast<int32_t>(0x16)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const InReadAttributeValue;

  /// @brief Field InReadContentAsBinary value: static_cast<int32_t>(0x18)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const InReadContentAsBinary;

  /// @brief Field InReadElementContentAsBinary value: static_cast<int32_t>(0x19)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const InReadElementContentAsBinary;

  /// @brief Field InReadValueChunk value: static_cast<int32_t>(0x17)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const InReadValueChunk;

  /// @brief Field MoveToElementContent value: static_cast<int32_t>(0x6)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const MoveToElementContent;

  /// @brief Field NoData value: static_cast<int32_t>(0x1)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const NoData;

  /// @brief Field OpenUrl value: static_cast<int32_t>(0x2)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const OpenUrl;

  /// @brief Field PartialTextValue value: static_cast<int32_t>(0x15)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const PartialTextValue;

  /// @brief Field PopElementContext value: static_cast<int32_t>(0x7)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const PopElementContext;

  /// @brief Field PopEmptyElementContext value: static_cast<int32_t>(0x8)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const PopEmptyElementContext;

  /// @brief Field ReaderClosed value: static_cast<int32_t>(0xc)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const ReaderClosed;

  /// @brief Field ReportEndEntity value: static_cast<int32_t>(0x10)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const ReportEndEntity;

  /// @brief Field ResetAttributesRootLevel value: static_cast<int32_t>(0x9)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const ResetAttributesRootLevel;

  /// @brief Field SwitchToInteractive value: static_cast<int32_t>(0x3)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const SwitchToInteractive;

  /// @brief Field SwitchToInteractiveXmlDecl value: static_cast<int32_t>(0x4)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const SwitchToInteractiveXmlDecl;

  /// @brief Field XmlDeclarationFragment value: static_cast<int32_t>(0x13)
  static ::System::Xml::__XmlTextReaderImpl__ParsingFunction const XmlDeclarationFragment;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

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

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__ParsingMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlTextReaderImpl__ParsingMode(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Full value: static_cast<int32_t>(0x0)
  static ::System::Xml::__XmlTextReaderImpl__ParsingMode const Full;

  /// @brief Field SkipContent value: static_cast<int32_t>(0x2)
  static ::System::Xml::__XmlTextReaderImpl__ParsingMode const SkipContent;

  /// @brief Field SkipNode value: static_cast<int32_t>(0x1)
  static ::System::Xml::__XmlTextReaderImpl__ParsingMode const SkipNode;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

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

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__EntityType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlTextReaderImpl__EntityType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field CharacterDec value: static_cast<int32_t>(0x0)
  static ::System::Xml::__XmlTextReaderImpl__EntityType const CharacterDec;

  /// @brief Field CharacterHex value: static_cast<int32_t>(0x1)
  static ::System::Xml::__XmlTextReaderImpl__EntityType const CharacterHex;

  /// @brief Field CharacterNamed value: static_cast<int32_t>(0x2)
  static ::System::Xml::__XmlTextReaderImpl__EntityType const CharacterNamed;

  /// @brief Field Expanded value: static_cast<int32_t>(0x3)
  static ::System::Xml::__XmlTextReaderImpl__EntityType const Expanded;

  /// @brief Field ExpandedInAttribute value: static_cast<int32_t>(0x7)
  static ::System::Xml::__XmlTextReaderImpl__EntityType const ExpandedInAttribute;

  /// @brief Field FakeExpanded value: static_cast<int32_t>(0x5)
  static ::System::Xml::__XmlTextReaderImpl__EntityType const FakeExpanded;

  /// @brief Field Skipped value: static_cast<int32_t>(0x4)
  static ::System::Xml::__XmlTextReaderImpl__EntityType const Skipped;

  /// @brief Field Unexpanded value: static_cast<int32_t>(0x6)
  static ::System::Xml::__XmlTextReaderImpl__EntityType const Unexpanded;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

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

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__EntityExpandType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlTextReaderImpl__EntityExpandType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field All value: static_cast<int32_t>(0x0)
  static ::System::Xml::__XmlTextReaderImpl__EntityExpandType const All;

  /// @brief Field OnlyCharacter value: static_cast<int32_t>(0x2)
  static ::System::Xml::__XmlTextReaderImpl__EntityExpandType const OnlyCharacter;

  /// @brief Field OnlyGeneral value: static_cast<int32_t>(0x1)
  static ::System::Xml::__XmlTextReaderImpl__EntityExpandType const OnlyGeneral;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

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

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__IncrementalReadState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlTextReaderImpl__IncrementalReadState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field AttributeValue value: static_cast<int32_t>(0x6)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const AttributeValue;

  /// @brief Field Attributes value: static_cast<int32_t>(0x5)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const Attributes;

  /// @brief Field CDATA value: static_cast<int32_t>(0x3)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const CDATA;

  /// @brief Field Comment value: static_cast<int32_t>(0x4)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const Comment;

  /// @brief Field End value: static_cast<int32_t>(0x9)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const End;

  /// @brief Field EndElement value: static_cast<int32_t>(0x8)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const EndElement;

  /// @brief Field PI value: static_cast<int32_t>(0x2)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const PI;

  /// @brief Field ReadContentAsBinary_End value: static_cast<int32_t>(0xe)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const ReadContentAsBinary_End;

  /// @brief Field ReadContentAsBinary_OnCachedValue value: static_cast<int32_t>(0xc)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const ReadContentAsBinary_OnCachedValue;

  /// @brief Field ReadContentAsBinary_OnPartialValue value: static_cast<int32_t>(0xd)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const ReadContentAsBinary_OnPartialValue;

  /// @brief Field ReadData value: static_cast<int32_t>(0x7)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const ReadData;

  /// @brief Field ReadValueChunk_OnCachedValue value: static_cast<int32_t>(0xa)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const ReadValueChunk_OnCachedValue;

  /// @brief Field ReadValueChunk_OnPartialValue value: static_cast<int32_t>(0xb)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const ReadValueChunk_OnPartialValue;

  /// @brief Field StartTag value: static_cast<int32_t>(0x1)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const StartTag;

  /// @brief Field Text value: static_cast<int32_t>(0x0)
  static ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const Text;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

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

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__InitInputType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlTextReaderImpl__InitInputType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Invalid value: static_cast<int32_t>(0x3)
  static ::System::Xml::__XmlTextReaderImpl__InitInputType const Invalid;

  /// @brief Field Stream value: static_cast<int32_t>(0x1)
  static ::System::Xml::__XmlTextReaderImpl__InitInputType const Stream;

  /// @brief Field TextReader value: static_cast<int32_t>(0x2)
  static ::System::Xml::__XmlTextReaderImpl__InitInputType const TextReader;

  /// @brief Field UriString value: static_cast<int32_t>(0x0)
  static ::System::Xml::__XmlTextReaderImpl__InitInputType const UriString;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

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
// CS Name: ::XmlTextReaderImpl::LaterInitParam*
class CORDL_TYPE __XmlTextReaderImpl__LaterInitParam : public ::System::Object {
public:
  // Declarations
  /// @brief Field initType, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_initType, put = __cordl_internal_set_initType))::System::Xml::__XmlTextReaderImpl__InitInputType initType;

  /// @brief Field inputByteCount, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_inputByteCount, put = __cordl_internal_set_inputByteCount)) int32_t inputByteCount;

  /// @brief Field inputBytes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_inputBytes, put = __cordl_internal_set_inputBytes))::ArrayW<uint8_t, ::Array<uint8_t>*> inputBytes;

  /// @brief Field inputContext, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_inputContext, put = __cordl_internal_set_inputContext))::System::Xml::XmlParserContext* inputContext;

  /// @brief Field inputStream, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_inputStream, put = __cordl_internal_set_inputStream))::System::IO::Stream* inputStream;

  /// @brief Field inputTextReader, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_inputTextReader, put = __cordl_internal_set_inputTextReader))::System::IO::TextReader* inputTextReader;

  /// @brief Field inputUriResolver, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_inputUriResolver, put = __cordl_internal_set_inputUriResolver))::System::Xml::XmlResolver* inputUriResolver;

  /// @brief Field inputUriStr, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_inputUriStr, put = __cordl_internal_set_inputUriStr))::StringW inputUriStr;

  /// @brief Field inputbaseUri, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_inputbaseUri, put = __cordl_internal_set_inputbaseUri))::System::Uri* inputbaseUri;

  /// @brief Field useAsync, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_useAsync, put = __cordl_internal_set_useAsync)) bool useAsync;

  constexpr ::System::Xml::__XmlTextReaderImpl__InitInputType const& __cordl_internal_get_initType() const;

  constexpr ::System::Xml::__XmlTextReaderImpl__InitInputType& __cordl_internal_get_initType();

  constexpr int32_t const& __cordl_internal_get_inputByteCount() const;

  constexpr int32_t& __cordl_internal_get_inputByteCount();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_inputBytes() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_inputBytes();

  constexpr ::System::Xml::XmlParserContext*& __cordl_internal_get_inputContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlParserContext*> const& __cordl_internal_get_inputContext() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_inputStream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __cordl_internal_get_inputStream() const;

  constexpr ::System::IO::TextReader*& __cordl_internal_get_inputTextReader();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::TextReader*> const& __cordl_internal_get_inputTextReader() const;

  constexpr ::System::Xml::XmlResolver*& __cordl_internal_get_inputUriResolver();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlResolver*> const& __cordl_internal_get_inputUriResolver() const;

  constexpr ::StringW const& __cordl_internal_get_inputUriStr() const;

  constexpr ::StringW& __cordl_internal_get_inputUriStr();

  constexpr ::System::Uri*& __cordl_internal_get_inputbaseUri();

  constexpr ::cordl_internals::to_const_pointer<::System::Uri*> const& __cordl_internal_get_inputbaseUri() const;

  constexpr bool const& __cordl_internal_get_useAsync() const;

  constexpr bool& __cordl_internal_get_useAsync();

  constexpr void __cordl_internal_set_initType(::System::Xml::__XmlTextReaderImpl__InitInputType value);

  constexpr void __cordl_internal_set_inputByteCount(int32_t value);

  constexpr void __cordl_internal_set_inputBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_inputContext(::System::Xml::XmlParserContext* value);

  constexpr void __cordl_internal_set_inputStream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_inputTextReader(::System::IO::TextReader* value);

  constexpr void __cordl_internal_set_inputUriResolver(::System::Xml::XmlResolver* value);

  constexpr void __cordl_internal_set_inputUriStr(::StringW value);

  constexpr void __cordl_internal_set_inputbaseUri(::System::Uri* value);

  constexpr void __cordl_internal_set_useAsync(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__LaterInitParam();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__LaterInitParam", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlTextReaderImpl__LaterInitParam(__XmlTextReaderImpl__LaterInitParam&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__LaterInitParam", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlTextReaderImpl__LaterInitParam(__XmlTextReaderImpl__LaterInitParam const&) = delete;

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
// CS Name: ::XmlTextReaderImpl::ParsingState
struct CORDL_TYPE __XmlTextReaderImpl__ParsingState {
public:
  // Declarations
  __declspec(property(get = get_LineNo)) int32_t LineNo;

  __declspec(property(get = get_LinePos)) int32_t LinePos;

  /// @brief Method Clear, addr 0x295cccc, size 0x7c, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Close, addr 0x295cd48, size 0x38, virtual false, abstract: false, final false
  inline void Close(bool closeInput);

  /// @brief Method get_LineNo, addr 0x295cd80, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LineNo();

  /// @brief Method get_LinePos, addr 0x295cd88, size 0x10, virtual false, abstract: false, final false
  inline int32_t get_LinePos();

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__ParsingState();

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
// CS Name: ::XmlTextReaderImpl::XmlContext*
class CORDL_TYPE __XmlTextReaderImpl__XmlContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field defaultNamespace, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultNamespace, put = __cordl_internal_set_defaultNamespace))::StringW defaultNamespace;

  /// @brief Field previousContext, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_previousContext, put = __cordl_internal_set_previousContext))::System::Xml::__XmlTextReaderImpl__XmlContext* previousContext;

  /// @brief Field xmlLang, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlLang, put = __cordl_internal_set_xmlLang))::StringW xmlLang;

  /// @brief Field xmlSpace, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_xmlSpace, put = __cordl_internal_set_xmlSpace))::System::Xml::XmlSpace xmlSpace;

  static inline ::System::Xml::__XmlTextReaderImpl__XmlContext* New_ctor();

  static inline ::System::Xml::__XmlTextReaderImpl__XmlContext* New_ctor(::System::Xml::__XmlTextReaderImpl__XmlContext* previousContext);

  constexpr ::StringW const& __cordl_internal_get_defaultNamespace() const;

  constexpr ::StringW& __cordl_internal_get_defaultNamespace();

  constexpr ::System::Xml::__XmlTextReaderImpl__XmlContext*& __cordl_internal_get_previousContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::__XmlTextReaderImpl__XmlContext*> const& __cordl_internal_get_previousContext() const;

  constexpr ::StringW const& __cordl_internal_get_xmlLang() const;

  constexpr ::StringW& __cordl_internal_get_xmlLang();

  constexpr ::System::Xml::XmlSpace const& __cordl_internal_get_xmlSpace() const;

  constexpr ::System::Xml::XmlSpace& __cordl_internal_get_xmlSpace();

  constexpr void __cordl_internal_set_defaultNamespace(::StringW value);

  constexpr void __cordl_internal_set_previousContext(::System::Xml::__XmlTextReaderImpl__XmlContext* value);

  constexpr void __cordl_internal_set_xmlLang(::StringW value);

  constexpr void __cordl_internal_set_xmlSpace(::System::Xml::XmlSpace value);

  /// @brief Method .ctor, addr 0x295cd98, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x295cdfc, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::__XmlTextReaderImpl__XmlContext* previousContext);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__XmlContext();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__XmlContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlTextReaderImpl__XmlContext(__XmlTextReaderImpl__XmlContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__XmlContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlTextReaderImpl__XmlContext(__XmlTextReaderImpl__XmlContext const&) = delete;

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
// CS Name: ::XmlTextReaderImpl::NoNamespaceManager*
class CORDL_TYPE __XmlTextReaderImpl__NoNamespaceManager : public ::System::Xml::XmlNamespaceManager {
public:
  // Declarations
  __declspec(property(get = get_DefaultNamespace))::StringW DefaultNamespace;

  /// @brief Method AddNamespace, addr 0x295ce98, size 0x4, virtual true, abstract: false, final false
  inline void AddNamespace(::StringW prefix, ::StringW uri);

  /// @brief Method GetEnumerator, addr 0x295cea0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method LookupNamespace, addr 0x295cea8, size 0x48, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method LookupPrefix, addr 0x295cef0, size 0x8, virtual true, abstract: false, final false
  inline ::StringW LookupPrefix(::StringW uri);

  static inline ::System::Xml::__XmlTextReaderImpl__NoNamespaceManager* New_ctor();

  /// @brief Method PopScope, addr 0x295ce90, size 0x8, virtual true, abstract: false, final false
  inline bool PopScope();

  /// @brief Method PushScope, addr 0x295ce8c, size 0x4, virtual true, abstract: false, final false
  inline void PushScope();

  /// @brief Method RemoveNamespace, addr 0x295ce9c, size 0x4, virtual true, abstract: false, final false
  inline void RemoveNamespace(::StringW prefix, ::StringW uri);

  /// @brief Method .ctor, addr 0x295ce3c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_DefaultNamespace, addr 0x295ce44, size 0x48, virtual true, abstract: false, final false
  inline ::StringW get_DefaultNamespace();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__NoNamespaceManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__NoNamespaceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlTextReaderImpl__NoNamespaceManager(__XmlTextReaderImpl__NoNamespaceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__NoNamespaceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlTextReaderImpl__NoNamespaceManager(__XmlTextReaderImpl__NoNamespaceManager const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlTextReaderImpl__NoNamespaceManager, 0x50>, "Size mismatch!");

} // namespace System::Xml
// Type: ::DtdParserProxy
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::XmlTextReaderImpl::DtdParserProxy*
class CORDL_TYPE __XmlTextReaderImpl__DtdParserProxy : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = System_Xml_IDtdParserAdapterV1_get_Namespaces)) bool System_Xml_IDtdParserAdapterV1_Namespaces;

  __declspec(property(get = System_Xml_IDtdParserAdapterV1_get_Normalization)) bool System_Xml_IDtdParserAdapterV1_Normalization;

  __declspec(property(get = System_Xml_IDtdParserAdapterV1_get_V1CompatibilityMode)) bool System_Xml_IDtdParserAdapterV1_V1CompatibilityMode;

  __declspec(property(get = System_Xml_IDtdParserAdapterWithValidation_get_DtdValidation)) bool System_Xml_IDtdParserAdapterWithValidation_DtdValidation;

  __declspec(property(
      get = System_Xml_IDtdParserAdapterWithValidation_get_ValidationEventHandling))::System::Xml::IValidationEventHandling* System_Xml_IDtdParserAdapterWithValidation_ValidationEventHandling;

  __declspec(property(get = System_Xml_IDtdParserAdapter_get_BaseUri))::System::Uri* System_Xml_IDtdParserAdapter_BaseUri;

  __declspec(property(get = System_Xml_IDtdParserAdapter_get_CurrentPosition, put = System_Xml_IDtdParserAdapter_set_CurrentPosition)) int32_t System_Xml_IDtdParserAdapter_CurrentPosition;

  __declspec(property(get = System_Xml_IDtdParserAdapter_get_EntityStackLength)) int32_t System_Xml_IDtdParserAdapter_EntityStackLength;

  __declspec(property(get = System_Xml_IDtdParserAdapter_get_IsEntityEolNormalized)) bool System_Xml_IDtdParserAdapter_IsEntityEolNormalized;

  __declspec(property(get = System_Xml_IDtdParserAdapter_get_IsEof)) bool System_Xml_IDtdParserAdapter_IsEof;

  __declspec(property(get = System_Xml_IDtdParserAdapter_get_LineNo)) int32_t System_Xml_IDtdParserAdapter_LineNo;

  __declspec(property(get = System_Xml_IDtdParserAdapter_get_LineStartPosition)) int32_t System_Xml_IDtdParserAdapter_LineStartPosition;

  __declspec(property(get = System_Xml_IDtdParserAdapter_get_NameTable))::System::Xml::XmlNameTable* System_Xml_IDtdParserAdapter_NameTable;

  __declspec(property(get = System_Xml_IDtdParserAdapter_get_NamespaceResolver))::System::Xml::IXmlNamespaceResolver* System_Xml_IDtdParserAdapter_NamespaceResolver;

  __declspec(property(get = System_Xml_IDtdParserAdapter_get_ParsingBuffer))::ArrayW<char16_t, ::Array<char16_t>*> System_Xml_IDtdParserAdapter_ParsingBuffer;

  __declspec(property(get = System_Xml_IDtdParserAdapter_get_ParsingBufferLength)) int32_t System_Xml_IDtdParserAdapter_ParsingBufferLength;

  /// @brief Field reader, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_reader, put = __cordl_internal_set_reader))::System::Xml::XmlTextReaderImpl* reader;

  /// @brief Convert operator to "::System::Xml::IDtdParserAdapter"
  constexpr operator ::System::Xml::IDtdParserAdapter*() noexcept;

  /// @brief Convert operator to "::System::Xml::IDtdParserAdapterV1"
  constexpr operator ::System::Xml::IDtdParserAdapterV1*() noexcept;

  /// @brief Convert operator to "::System::Xml::IDtdParserAdapterWithValidation"
  constexpr operator ::System::Xml::IDtdParserAdapterWithValidation*() noexcept;

  static inline ::System::Xml::__XmlTextReaderImpl__DtdParserProxy* New_ctor(::System::Xml::XmlTextReaderImpl* reader);

  /// @brief Method System.Xml.IDtdParserAdapterV1.get_Namespaces, addr 0x295d234, size 0x1c, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdParserAdapterV1_get_Namespaces();

  /// @brief Method System.Xml.IDtdParserAdapterV1.get_Normalization, addr 0x295d218, size 0x1c, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdParserAdapterV1_get_Normalization();

  /// @brief Method System.Xml.IDtdParserAdapterV1.get_V1CompatibilityMode, addr 0x295d250, size 0x1c, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdParserAdapterV1_get_V1CompatibilityMode();

  /// @brief Method System.Xml.IDtdParserAdapterWithValidation.get_DtdValidation, addr 0x295d1e0, size 0x1c, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdParserAdapterWithValidation_get_DtdValidation();

  /// @brief Method System.Xml.IDtdParserAdapterWithValidation.get_ValidationEventHandling, addr 0x295d1fc, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Xml::IValidationEventHandling* System_Xml_IDtdParserAdapterWithValidation_get_ValidationEventHandling();

  /// @brief Method System.Xml.IDtdParserAdapter.OnNewLine, addr 0x295d038, size 0x1c, virtual true, abstract: false, final true
  inline void System_Xml_IDtdParserAdapter_OnNewLine(int32_t pos);

  /// @brief Method System.Xml.IDtdParserAdapter.OnPublicId, addr 0x295d1c4, size 0x1c, virtual true, abstract: false, final true
  inline void System_Xml_IDtdParserAdapter_OnPublicId(::StringW publicId, ::System::Xml::LineInfo keywordLineInfo, ::System::Xml::LineInfo publicLiteralLineInfo);

  /// @brief Method System.Xml.IDtdParserAdapter.OnSystemId, addr 0x295d1a8, size 0x1c, virtual true, abstract: false, final true
  inline void System_Xml_IDtdParserAdapter_OnSystemId(::StringW systemId, ::System::Xml::LineInfo keywordLineInfo, ::System::Xml::LineInfo systemLiteralLineInfo);

  /// @brief Method System.Xml.IDtdParserAdapter.ParseComment, addr 0x295d100, size 0x1c, virtual true, abstract: false, final true
  inline void System_Xml_IDtdParserAdapter_ParseComment(::System::Text::StringBuilder* sb);

  /// @brief Method System.Xml.IDtdParserAdapter.ParseNamedCharRef, addr 0x295d0c4, size 0x20, virtual true, abstract: false, final true
  inline int32_t System_Xml_IDtdParserAdapter_ParseNamedCharRef(bool expand, ::System::Text::StringBuilder* internalSubsetBuilder);

  /// @brief Method System.Xml.IDtdParserAdapter.ParseNumericCharRef, addr 0x295d0a8, size 0x1c, virtual true, abstract: false, final true
  inline int32_t System_Xml_IDtdParserAdapter_ParseNumericCharRef(::System::Text::StringBuilder* internalSubsetBuilder);

  /// @brief Method System.Xml.IDtdParserAdapter.ParsePI, addr 0x295d0e4, size 0x1c, virtual true, abstract: false, final true
  inline void System_Xml_IDtdParserAdapter_ParsePI(::System::Text::StringBuilder* sb);

  /// @brief Method System.Xml.IDtdParserAdapter.PopEntity, addr 0x295d138, size 0x1c, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdParserAdapter_PopEntity(ByRef<::System::Xml::IDtdEntityInfo*> oldEntity, ByRef<int32_t> newEntityId);

  /// @brief Method System.Xml.IDtdParserAdapter.PushEntity, addr 0x295d11c, size 0x1c, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdParserAdapter_PushEntity(::System::Xml::IDtdEntityInfo* entity, ByRef<int32_t> entityId);

  /// @brief Method System.Xml.IDtdParserAdapter.PushExternalSubset, addr 0x295d154, size 0x1c, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdParserAdapter_PushExternalSubset(::StringW systemId, ::StringW publicId);

  /// @brief Method System.Xml.IDtdParserAdapter.PushInternalDtd, addr 0x295d170, size 0x1c, virtual true, abstract: false, final true
  inline void System_Xml_IDtdParserAdapter_PushInternalDtd(::StringW baseUri, ::StringW internalDtd);

  /// @brief Method System.Xml.IDtdParserAdapter.ReadData, addr 0x295d08c, size 0x1c, virtual true, abstract: false, final true
  inline int32_t System_Xml_IDtdParserAdapter_ReadData();

  /// @brief Method System.Xml.IDtdParserAdapter.Throw, addr 0x295d18c, size 0x1c, virtual true, abstract: false, final true
  inline void System_Xml_IDtdParserAdapter_Throw(::System::Exception* e);

  /// @brief Method System.Xml.IDtdParserAdapter.get_BaseUri, addr 0x295cf58, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Uri* System_Xml_IDtdParserAdapter_get_BaseUri();

  /// @brief Method System.Xml.IDtdParserAdapter.get_CurrentPosition, addr 0x295cfc8, size 0x1c, virtual true, abstract: false, final true
  inline int32_t System_Xml_IDtdParserAdapter_get_CurrentPosition();

  /// @brief Method System.Xml.IDtdParserAdapter.get_EntityStackLength, addr 0x295d000, size 0x1c, virtual true, abstract: false, final true
  inline int32_t System_Xml_IDtdParserAdapter_get_EntityStackLength();

  /// @brief Method System.Xml.IDtdParserAdapter.get_IsEntityEolNormalized, addr 0x295d01c, size 0x1c, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdParserAdapter_get_IsEntityEolNormalized();

  /// @brief Method System.Xml.IDtdParserAdapter.get_IsEof, addr 0x295cf74, size 0x1c, virtual true, abstract: false, final true
  inline bool System_Xml_IDtdParserAdapter_get_IsEof();

  /// @brief Method System.Xml.IDtdParserAdapter.get_LineNo, addr 0x295d054, size 0x1c, virtual true, abstract: false, final true
  inline int32_t System_Xml_IDtdParserAdapter_get_LineNo();

  /// @brief Method System.Xml.IDtdParserAdapter.get_LineStartPosition, addr 0x295d070, size 0x1c, virtual true, abstract: false, final true
  inline int32_t System_Xml_IDtdParserAdapter_get_LineStartPosition();

  /// @brief Method System.Xml.IDtdParserAdapter.get_NameTable, addr 0x295cf20, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Xml::XmlNameTable* System_Xml_IDtdParserAdapter_get_NameTable();

  /// @brief Method System.Xml.IDtdParserAdapter.get_NamespaceResolver, addr 0x295cf3c, size 0x1c, virtual true, abstract: false, final true
  inline ::System::Xml::IXmlNamespaceResolver* System_Xml_IDtdParserAdapter_get_NamespaceResolver();

  /// @brief Method System.Xml.IDtdParserAdapter.get_ParsingBuffer, addr 0x295cf90, size 0x1c, virtual true, abstract: false, final true
  inline ::ArrayW<char16_t, ::Array<char16_t>*> System_Xml_IDtdParserAdapter_get_ParsingBuffer();

  /// @brief Method System.Xml.IDtdParserAdapter.get_ParsingBufferLength, addr 0x295cfac, size 0x1c, virtual true, abstract: false, final true
  inline int32_t System_Xml_IDtdParserAdapter_get_ParsingBufferLength();

  /// @brief Method System.Xml.IDtdParserAdapter.set_CurrentPosition, addr 0x295cfe4, size 0x1c, virtual true, abstract: false, final true
  inline void System_Xml_IDtdParserAdapter_set_CurrentPosition(int32_t value);

  constexpr ::System::Xml::XmlTextReaderImpl*& __cordl_internal_get_reader();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlTextReaderImpl*> const& __cordl_internal_get_reader() const;

  constexpr void __cordl_internal_set_reader(::System::Xml::XmlTextReaderImpl* value);

  /// @brief Method .ctor, addr 0x295cef8, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlTextReaderImpl* reader);

  /// @brief Convert to "::System::Xml::IDtdParserAdapter"
  constexpr ::System::Xml::IDtdParserAdapter* i___System__Xml__IDtdParserAdapter() noexcept;

  /// @brief Convert to "::System::Xml::IDtdParserAdapterV1"
  constexpr ::System::Xml::IDtdParserAdapterV1* i___System__Xml__IDtdParserAdapterV1() noexcept;

  /// @brief Convert to "::System::Xml::IDtdParserAdapterWithValidation"
  constexpr ::System::Xml::IDtdParserAdapterWithValidation* i___System__Xml__IDtdParserAdapterWithValidation() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__DtdParserProxy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__DtdParserProxy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlTextReaderImpl__DtdParserProxy(__XmlTextReaderImpl__DtdParserProxy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__DtdParserProxy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlTextReaderImpl__DtdParserProxy(__XmlTextReaderImpl__DtdParserProxy const&) = delete;

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
// CS Name: ::XmlTextReaderImpl::NodeData*
class CORDL_TYPE __XmlTextReaderImpl__NodeData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsDefaultAttribute, put = set_IsDefaultAttribute)) bool IsDefaultAttribute;

  __declspec(property(get = get_IsEmptyElement, put = set_IsEmptyElement)) bool IsEmptyElement;

  __declspec(property(get = get_LineNo)) int32_t LineNo;

  __declspec(property(get = get_LinePos)) int32_t LinePos;

  __declspec(property(get = get_StringValue))::StringW StringValue;

  __declspec(property(get = get_ValueBuffered)) bool ValueBuffered;

  /// @brief Field chars, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_chars, put = __cordl_internal_set_chars))::ArrayW<char16_t, ::Array<char16_t>*> chars;

  /// @brief Field depth, offset 0x64, size 0x4
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) int32_t depth;

  /// @brief Field entityId, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_entityId, put = __cordl_internal_set_entityId)) int32_t entityId;

  /// @brief Field isEmptyOrDefault, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_isEmptyOrDefault, put = __cordl_internal_set_isEmptyOrDefault)) bool isEmptyOrDefault;

  /// @brief Field lineInfo, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_lineInfo, put = __cordl_internal_set_lineInfo))::System::Xml::LineInfo lineInfo;

  /// @brief Field lineInfo2, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_lineInfo2, put = __cordl_internal_set_lineInfo2))::System::Xml::LineInfo lineInfo2;

  /// @brief Field localName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_localName, put = __cordl_internal_set_localName))::StringW localName;

  /// @brief Field nameWPrefix, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_nameWPrefix, put = __cordl_internal_set_nameWPrefix))::StringW nameWPrefix;

  /// @brief Field nextAttrValueChunk, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_nextAttrValueChunk, put = __cordl_internal_set_nextAttrValueChunk))::System::Xml::__XmlTextReaderImpl__NodeData* nextAttrValueChunk;

  /// @brief Field ns, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns))::StringW ns;

  /// @brief Field prefix, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_prefix, put = __cordl_internal_set_prefix))::StringW prefix;

  /// @brief Field quoteChar, offset 0x60, size 0x2
  __declspec(property(get = __cordl_internal_get_quoteChar, put = __cordl_internal_set_quoteChar)) char16_t quoteChar;

  /// @brief Field s_None, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_None, put = setStaticF_s_None))::System::Xml::__XmlTextReaderImpl__NodeData* s_None;

  /// @brief Field schemaType, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_schemaType, put = __cordl_internal_set_schemaType))::System::Object* schemaType;

  /// @brief Field type, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::System::Xml::XmlNodeType type;

  /// @brief Field typedValue, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_typedValue, put = __cordl_internal_set_typedValue))::System::Object* typedValue;

  /// @brief Field value, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value))::StringW value;

  /// @brief Field valueLength, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_valueLength, put = __cordl_internal_set_valueLength)) int32_t valueLength;

  /// @brief Field valueStartPos, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_valueStartPos, put = __cordl_internal_set_valueStartPos)) int32_t valueStartPos;

  /// @brief Field xmlContextPushed, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_xmlContextPushed, put = __cordl_internal_set_xmlContextPushed)) bool xmlContextPushed;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  /// @brief Method Clear, addr 0x295d334, size 0x8c, virtual false, abstract: false, final false
  inline void Clear(::System::Xml::XmlNodeType type);

  /// @brief Method ClearName, addr 0x295d4a8, size 0x54, virtual false, abstract: false, final false
  inline void ClearName();

  /// @brief Method CopyTo, addr 0x295d784, size 0x80, virtual false, abstract: false, final false
  inline void CopyTo(int32_t valueOffset, ::System::Text::StringBuilder* sb);

  /// @brief Method CreateNameWPrefix, addr 0x295d818, size 0x8c, virtual false, abstract: false, final false
  inline ::StringW CreateNameWPrefix(::System::Xml::XmlNameTable* nt);

  /// @brief Method GetNameWPrefix, addr 0x295d804, size 0x14, virtual false, abstract: false, final false
  inline ::StringW GetNameWPrefix(::System::Xml::XmlNameTable* nt);

  static inline ::System::Xml::__XmlTextReaderImpl__NodeData* New_ctor();

  /// @brief Method OnBufferInvalidated, addr 0x295d74c, size 0x38, virtual false, abstract: false, final false
  inline void OnBufferInvalidated();

  /// @brief Method SetLineInfo, addr 0x295d4fc, size 0xc, virtual false, abstract: false, final false
  inline void SetLineInfo(int32_t lineNo, int32_t linePos);

  /// @brief Method SetLineInfo2, addr 0x295d508, size 0xc, virtual false, abstract: false, final false
  inline void SetLineInfo2(int32_t lineNo, int32_t linePos);

  /// @brief Method SetNamedNode, addr 0x295d600, size 0xa8, virtual false, abstract: false, final false
  inline void SetNamedNode(::System::Xml::XmlNodeType type, ::StringW localName);

  /// @brief Method SetNamedNode, addr 0x295d6a8, size 0x88, virtual false, abstract: false, final false
  inline void SetNamedNode(::System::Xml::XmlNodeType type, ::StringW localName, ::StringW prefix, ::StringW nameWPrefix);

  /// @brief Method SetValue, addr 0x295d740, size 0xc, virtual false, abstract: false, final false
  inline void SetValue(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t startPos, int32_t len);

  /// @brief Method SetValue, addr 0x295d730, size 0x10, virtual false, abstract: false, final false
  inline void SetValue(::StringW value);

  /// @brief Method SetValueNode, addr 0x295d584, size 0x7c, virtual false, abstract: false, final false
  inline void SetValueNode(::System::Xml::XmlNodeType type, ::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t startPos, int32_t len);

  /// @brief Method SetValueNode, addr 0x295d514, size 0x70, virtual false, abstract: false, final false
  inline void SetValueNode(::System::Xml::XmlNodeType type, ::StringW value);

  /// @brief Method System.IComparable.CompareTo, addr 0x295d8a4, size 0xd8, virtual true, abstract: false, final true
  inline int32_t System_IComparable_CompareTo(::System::Object* obj);

  /// @brief Method TrimSpacesInValue, addr 0x295d46c, size 0x3c, virtual false, abstract: false, final false
  inline void TrimSpacesInValue();

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*> const& __cordl_internal_get_chars() const;

  constexpr ::ArrayW<char16_t, ::Array<char16_t>*>& __cordl_internal_get_chars();

  constexpr int32_t const& __cordl_internal_get_depth() const;

  constexpr int32_t& __cordl_internal_get_depth();

  constexpr int32_t const& __cordl_internal_get_entityId() const;

  constexpr int32_t& __cordl_internal_get_entityId();

  constexpr bool const& __cordl_internal_get_isEmptyOrDefault() const;

  constexpr bool& __cordl_internal_get_isEmptyOrDefault();

  constexpr ::System::Xml::LineInfo const& __cordl_internal_get_lineInfo() const;

  constexpr ::System::Xml::LineInfo& __cordl_internal_get_lineInfo();

  constexpr ::System::Xml::LineInfo const& __cordl_internal_get_lineInfo2() const;

  constexpr ::System::Xml::LineInfo& __cordl_internal_get_lineInfo2();

  constexpr ::StringW const& __cordl_internal_get_localName() const;

  constexpr ::StringW& __cordl_internal_get_localName();

  constexpr ::StringW const& __cordl_internal_get_nameWPrefix() const;

  constexpr ::StringW& __cordl_internal_get_nameWPrefix();

  constexpr ::System::Xml::__XmlTextReaderImpl__NodeData*& __cordl_internal_get_nextAttrValueChunk();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::__XmlTextReaderImpl__NodeData*> const& __cordl_internal_get_nextAttrValueChunk() const;

  constexpr ::StringW const& __cordl_internal_get_ns() const;

  constexpr ::StringW& __cordl_internal_get_ns();

  constexpr ::StringW const& __cordl_internal_get_prefix() const;

  constexpr ::StringW& __cordl_internal_get_prefix();

  constexpr char16_t const& __cordl_internal_get_quoteChar() const;

  constexpr char16_t& __cordl_internal_get_quoteChar();

  constexpr ::System::Object*& __cordl_internal_get_schemaType();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_schemaType() const;

  constexpr ::System::Xml::XmlNodeType const& __cordl_internal_get_type() const;

  constexpr ::System::Xml::XmlNodeType& __cordl_internal_get_type();

  constexpr ::System::Object*& __cordl_internal_get_typedValue();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_typedValue() const;

  constexpr ::StringW const& __cordl_internal_get_value() const;

  constexpr ::StringW& __cordl_internal_get_value();

  constexpr int32_t const& __cordl_internal_get_valueLength() const;

  constexpr int32_t& __cordl_internal_get_valueLength();

  constexpr int32_t const& __cordl_internal_get_valueStartPos() const;

  constexpr int32_t& __cordl_internal_get_valueStartPos();

  constexpr bool const& __cordl_internal_get_xmlContextPushed() const;

  constexpr bool& __cordl_internal_get_xmlContextPushed();

  constexpr void __cordl_internal_set_chars(::ArrayW<char16_t, ::Array<char16_t>*> value);

  constexpr void __cordl_internal_set_depth(int32_t value);

  constexpr void __cordl_internal_set_entityId(int32_t value);

  constexpr void __cordl_internal_set_isEmptyOrDefault(bool value);

  constexpr void __cordl_internal_set_lineInfo(::System::Xml::LineInfo value);

  constexpr void __cordl_internal_set_lineInfo2(::System::Xml::LineInfo value);

  constexpr void __cordl_internal_set_localName(::StringW value);

  constexpr void __cordl_internal_set_nameWPrefix(::StringW value);

  constexpr void __cordl_internal_set_nextAttrValueChunk(::System::Xml::__XmlTextReaderImpl__NodeData* value);

  constexpr void __cordl_internal_set_ns(::StringW value);

  constexpr void __cordl_internal_set_prefix(::StringW value);

  constexpr void __cordl_internal_set_quoteChar(char16_t value);

  constexpr void __cordl_internal_set_schemaType(::System::Object* value);

  constexpr void __cordl_internal_set_type(::System::Xml::XmlNodeType value);

  constexpr void __cordl_internal_set_typedValue(::System::Object* value);

  constexpr void __cordl_internal_set_value(::StringW value);

  constexpr void __cordl_internal_set_valueLength(int32_t value);

  constexpr void __cordl_internal_set_valueStartPos(int32_t value);

  constexpr void __cordl_internal_set_xmlContextPushed(bool value);

  /// @brief Method .ctor, addr 0x295d30c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::__XmlTextReaderImpl__NodeData* getStaticF_s_None();

  /// @brief Method get_IsDefaultAttribute, addr 0x295d400, size 0x24, virtual false, abstract: false, final false
  inline bool get_IsDefaultAttribute();

  /// @brief Method get_IsEmptyElement, addr 0x295d3d0, size 0x24, virtual false, abstract: false, final false
  inline bool get_IsEmptyElement();

  /// @brief Method get_LineNo, addr 0x295d3c0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LineNo();

  /// @brief Method get_LinePos, addr 0x295d3c8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LinePos();

  /// @brief Method get_None, addr 0x295d26c, size 0xa0, virtual false, abstract: false, final false
  static inline ::System::Xml::__XmlTextReaderImpl__NodeData* get_None();

  /// @brief Method get_StringValue, addr 0x295d440, size 0x2c, virtual false, abstract: false, final false
  inline ::StringW get_StringValue();

  /// @brief Method get_ValueBuffered, addr 0x295d430, size 0x10, virtual false, abstract: false, final false
  inline bool get_ValueBuffered();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable() noexcept;

  static inline void setStaticF_s_None(::System::Xml::__XmlTextReaderImpl__NodeData* value);

  /// @brief Method set_IsDefaultAttribute, addr 0x295d424, size 0xc, virtual false, abstract: false, final false
  inline void set_IsDefaultAttribute(bool value);

  /// @brief Method set_IsEmptyElement, addr 0x295d3f4, size 0xc, virtual false, abstract: false, final false
  inline void set_IsEmptyElement(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__NodeData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__NodeData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlTextReaderImpl__NodeData(__XmlTextReaderImpl__NodeData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__NodeData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlTextReaderImpl__NodeData(__XmlTextReaderImpl__NodeData const&) = delete;

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
// CS Name: ::XmlTextReaderImpl::DtdDefaultAttributeInfoToNodeDataComparer*
class CORDL_TYPE __XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer : public ::System::Object {
public:
  // Declarations
  /// @brief Field s_instance, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_instance, put = setStaticF_s_instance))::System::Collections::Generic::IComparer_1<::System::Object*>* s_instance;

  /// @brief Convert operator to "::System::Collections::Generic::IComparer_1<::System::Object*>"
  constexpr operator ::System::Collections::Generic::IComparer_1<::System::Object*>*() noexcept;

  /// @brief Method Compare, addr 0x295d9d4, size 0x348, virtual true, abstract: false, final true
  inline int32_t Compare(::System::Object* x, ::System::Object* y);

  static inline ::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer* New_ctor();

  /// @brief Method .ctor, addr 0x295dd1c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::IComparer_1<::System::Object*>* getStaticF_s_instance();

  /// @brief Method get_Instance, addr 0x295d97c, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IComparer_1<::System::Object*>* get_Instance();

  /// @brief Convert to "::System::Collections::Generic::IComparer_1<::System::Object*>"
  constexpr ::System::Collections::Generic::IComparer_1<::System::Object*>* i___System__Collections__Generic__IComparer_1___System__Object__() noexcept;

  static inline void setStaticF_s_instance(::System::Collections::Generic::IComparer_1<::System::Object*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer(__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer(__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer, 0x10>, "Size mismatch!");

} // namespace System::Xml
// Type: ::OnDefaultAttributeUseDelegate
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::XmlTextReaderImpl::OnDefaultAttributeUseDelegate*
class CORDL_TYPE __XmlTextReaderImpl__OnDefaultAttributeUseDelegate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x295deb8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::Xml::IDtdDefaultAttributeInfo* defaultAttribute, ::System::Xml::XmlTextReaderImpl* coreReader);

  static inline ::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor, addr 0x295dd88, size 0x130, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, void* method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlTextReaderImpl__OnDefaultAttributeUseDelegate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__OnDefaultAttributeUseDelegate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XmlTextReaderImpl__OnDefaultAttributeUseDelegate(__XmlTextReaderImpl__OnDefaultAttributeUseDelegate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XmlTextReaderImpl__OnDefaultAttributeUseDelegate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XmlTextReaderImpl__OnDefaultAttributeUseDelegate(__XmlTextReaderImpl__OnDefaultAttributeUseDelegate const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate, 0x80>, "Size mismatch!");

} // namespace System::Xml
// Type: System.Xml::XmlTextReaderImpl
// SizeInfo { instance_size: 576, native_size: -1, calculated_instance_size: 576, calculated_native_size: 576, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlTextReaderImpl*
class CORDL_TYPE XmlTextReaderImpl : public ::System::Xml::XmlReader {
public:
  // Declarations
  using DtdDefaultAttributeInfoToNodeDataComparer = ::System::Xml::__XmlTextReaderImpl__DtdDefaultAttributeInfoToNodeDataComparer;

  using DtdParserProxy = ::System::Xml::__XmlTextReaderImpl__DtdParserProxy;

  using EntityExpandType = ::System::Xml::__XmlTextReaderImpl__EntityExpandType;

  using EntityType = ::System::Xml::__XmlTextReaderImpl__EntityType;

  using IncrementalReadState = ::System::Xml::__XmlTextReaderImpl__IncrementalReadState;

  using InitInputType = ::System::Xml::__XmlTextReaderImpl__InitInputType;

  using LaterInitParam = ::System::Xml::__XmlTextReaderImpl__LaterInitParam;

  using NoNamespaceManager = ::System::Xml::__XmlTextReaderImpl__NoNamespaceManager;

  using NodeData = ::System::Xml::__XmlTextReaderImpl__NodeData;

  using OnDefaultAttributeUseDelegate = ::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate;

  using ParsingFunction = ::System::Xml::__XmlTextReaderImpl__ParsingFunction;

  using ParsingMode = ::System::Xml::__XmlTextReaderImpl__ParsingMode;

  using ParsingState = ::System::Xml::__XmlTextReaderImpl__ParsingState;

  using XmlContext = ::System::Xml::__XmlTextReaderImpl__XmlContext;

  __declspec(property(get = get_BaseURI))::StringW BaseURI;

  __declspec(property(get = get_CanResolveEntity)) bool CanResolveEntity;

  __declspec(property(put = set_DisableUndeclaredEntityCheck)) bool DisableUndeclaredEntityCheck;

  __declspec(property(get = get_DtdInfo))::System::Xml::IDtdInfo* DtdInfo;

  __declspec(property(get = get_DtdParserProxy_BaseUri))::System::Uri* DtdParserProxy_BaseUri;

  __declspec(property(get = get_DtdParserProxy_CurrentPosition, put = set_DtdParserProxy_CurrentPosition)) int32_t DtdParserProxy_CurrentPosition;

  __declspec(property(get = get_DtdParserProxy_DtdValidation)) bool DtdParserProxy_DtdValidation;

  __declspec(property(get = get_DtdParserProxy_EntityStackLength)) int32_t DtdParserProxy_EntityStackLength;

  __declspec(property(get = get_DtdParserProxy_IsEntityEolNormalized)) bool DtdParserProxy_IsEntityEolNormalized;

  __declspec(property(get = get_DtdParserProxy_IsEof)) bool DtdParserProxy_IsEof;

  __declspec(property(get = get_DtdParserProxy_LineNo)) int32_t DtdParserProxy_LineNo;

  __declspec(property(get = get_DtdParserProxy_LineStartPosition)) int32_t DtdParserProxy_LineStartPosition;

  __declspec(property(get = get_DtdParserProxy_NameTable))::System::Xml::XmlNameTable* DtdParserProxy_NameTable;

  __declspec(property(get = get_DtdParserProxy_NamespaceResolver))::System::Xml::IXmlNamespaceResolver* DtdParserProxy_NamespaceResolver;

  __declspec(property(get = get_DtdParserProxy_Namespaces)) bool DtdParserProxy_Namespaces;

  __declspec(property(get = get_DtdParserProxy_Normalization)) bool DtdParserProxy_Normalization;

  __declspec(property(get = get_DtdParserProxy_ParsingBuffer))::ArrayW<char16_t, ::Array<char16_t>*> DtdParserProxy_ParsingBuffer;

  __declspec(property(get = get_DtdParserProxy_ParsingBufferLength)) int32_t DtdParserProxy_ParsingBufferLength;

  __declspec(property(get = get_DtdParserProxy_V1CompatibilityMode)) bool DtdParserProxy_V1CompatibilityMode;

  __declspec(property(get = get_DtdParserProxy_ValidationEventHandling))::System::Xml::IValidationEventHandling* DtdParserProxy_ValidationEventHandling;

  __declspec(property(get = get_DtdValidation)) bool DtdValidation;

  __declspec(property(put = set_EntityHandling))::System::Xml::EntityHandling EntityHandling;

  __declspec(property(get = get_InAttributeValueIterator)) bool InAttributeValueIterator;

  __declspec(property(get = get_InEntity)) bool InEntity;

  __declspec(property(get = get_IsDefault)) bool IsDefault;

  __declspec(property(get = get_IsEmptyElement)) bool IsEmptyElement;

  __declspec(property(get = get_IsResolverNull)) bool IsResolverNull;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_NameTable))::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = get_NamespaceURI))::StringW NamespaceURI;

  __declspec(property(put = set_Namespaces)) bool Namespaces;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(put = set_OuterReader))::System::Xml::XmlReader* OuterReader;

  __declspec(property(get = get_Prefix))::StringW Prefix;

  __declspec(property(get = get_ReadState))::System::Xml::ReadState ReadState;

  __declspec(property(get = get_Settings))::System::Xml::XmlReaderSettings* Settings;

  __declspec(property(get = get_Value))::StringW Value;

  /// @brief Field Xml, offset 0x228, size 0x8
  __declspec(property(get = __cordl_internal_get_Xml, put = __cordl_internal_set_Xml))::StringW Xml;

  /// @brief Field XmlNs, offset 0x230, size 0x8
  __declspec(property(get = __cordl_internal_get_XmlNs, put = __cordl_internal_set_XmlNs))::StringW XmlNs;

  __declspec(property(put = set_XmlResolver))::System::Xml::XmlResolver* XmlResolver;

  __declspec(property(put = set_XmlValidatingReaderCompatibilityMode)) bool XmlValidatingReaderCompatibilityMode;

  /// @brief Field addDefaultAttributesAndNormalize, offset 0x1c1, size 0x1
  __declspec(property(get = __cordl_internal_get_addDefaultAttributesAndNormalize, put = __cordl_internal_set_addDefaultAttributesAndNormalize)) bool addDefaultAttributesAndNormalize;

  /// @brief Field afterResetState, offset 0x1e8, size 0x1
  __declspec(property(get = __cordl_internal_get_afterResetState, put = __cordl_internal_set_afterResetState)) bool afterResetState;

  /// @brief Field attrCount, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_attrCount, put = __cordl_internal_set_attrCount)) int32_t attrCount;

  /// @brief Field attrDuplSortingArray, offset 0xd0, size 0x8
  __declspec(
      property(get = __cordl_internal_get_attrDuplSortingArray,
               put = __cordl_internal_set_attrDuplSortingArray))::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*> attrDuplSortingArray;

  /// @brief Field attrDuplWalkCount, offset 0xc8, size 0x4
  __declspec(property(get = __cordl_internal_get_attrDuplWalkCount, put = __cordl_internal_set_attrDuplWalkCount)) int32_t attrDuplWalkCount;

  /// @brief Field attrHashtable, offset 0xc4, size 0x4
  __declspec(property(get = __cordl_internal_get_attrHashtable, put = __cordl_internal_set_attrHashtable)) int32_t attrHashtable;

  /// @brief Field attrNeedNamespaceLookup, offset 0xcc, size 0x1
  __declspec(property(get = __cordl_internal_get_attrNeedNamespaceLookup, put = __cordl_internal_set_attrNeedNamespaceLookup)) bool attrNeedNamespaceLookup;

  /// @brief Field attributeValueBaseEntityId, offset 0x1a8, size 0x4
  __declspec(property(get = __cordl_internal_get_attributeValueBaseEntityId, put = __cordl_internal_set_attributeValueBaseEntityId)) int32_t attributeValueBaseEntityId;

  /// @brief Field charactersFromEntities, offset 0x200, size 0x8
  __declspec(property(get = __cordl_internal_get_charactersFromEntities, put = __cordl_internal_set_charactersFromEntities)) int64_t charactersFromEntities;

  /// @brief Field charactersInDocument, offset 0x1f8, size 0x8
  __declspec(property(get = __cordl_internal_get_charactersInDocument, put = __cordl_internal_set_charactersInDocument)) int64_t charactersInDocument;

  /// @brief Field checkCharacters, offset 0x10a, size 0x1
  __declspec(property(get = __cordl_internal_get_checkCharacters, put = __cordl_internal_set_checkCharacters)) bool checkCharacters;

  /// @brief Field closeInput, offset 0x114, size 0x1
  __declspec(property(get = __cordl_internal_get_closeInput, put = __cordl_internal_set_closeInput)) bool closeInput;

  /// @brief Field curAttrIndex, offset 0xbc, size 0x4
  __declspec(property(get = __cordl_internal_get_curAttrIndex, put = __cordl_internal_set_curAttrIndex)) int32_t curAttrIndex;

  /// @brief Field curNode, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_curNode, put = __cordl_internal_set_curNode))::System::Xml::__XmlTextReaderImpl__NodeData* curNode;

  /// @brief Field currentEntities, offset 0x208, size 0x8
  __declspec(property(get = __cordl_internal_get_currentEntities,
                      put = __cordl_internal_set_currentEntities))::System::Collections::Generic::Dictionary_2<::System::Xml::IDtdEntityInfo*, ::System::Xml::IDtdEntityInfo*>* currentEntities;

  /// @brief Field disableUndeclaredEntityCheck, offset 0x210, size 0x1
  __declspec(property(get = __cordl_internal_get_disableUndeclaredEntityCheck, put = __cordl_internal_set_disableUndeclaredEntityCheck)) bool disableUndeclaredEntityCheck;

  /// @brief Field documentStartBytePos, offset 0x1ec, size 0x4
  __declspec(property(get = __cordl_internal_get_documentStartBytePos, put = __cordl_internal_set_documentStartBytePos)) int32_t documentStartBytePos;

  /// @brief Field dtdInfo, offset 0x168, size 0x8
  __declspec(property(get = __cordl_internal_get_dtdInfo, put = __cordl_internal_set_dtdInfo))::System::Xml::IDtdInfo* dtdInfo;

  /// @brief Field dtdProcessing, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_dtdProcessing, put = __cordl_internal_set_dtdProcessing))::System::Xml::DtdProcessing dtdProcessing;

  /// @brief Field emptyEntityInAttributeResolved, offset 0x1ac, size 0x1
  __declspec(property(get = __cordl_internal_get_emptyEntityInAttributeResolved, put = __cordl_internal_set_emptyEntityInAttributeResolved)) bool emptyEntityInAttributeResolved;

  /// @brief Field entityHandling, offset 0x104, size 0x4
  __declspec(property(get = __cordl_internal_get_entityHandling, put = __cordl_internal_set_entityHandling))::System::Xml::EntityHandling entityHandling;

  /// @brief Field fragment, offset 0x180, size 0x1
  __declspec(property(get = __cordl_internal_get_fragment, put = __cordl_internal_set_fragment)) bool fragment;

  /// @brief Field fragmentParserContext, offset 0x178, size 0x8
  __declspec(property(get = __cordl_internal_get_fragmentParserContext, put = __cordl_internal_set_fragmentParserContext))::System::Xml::XmlParserContext* fragmentParserContext;

  /// @brief Field fragmentType, offset 0x170, size 0x4
  __declspec(property(get = __cordl_internal_get_fragmentType, put = __cordl_internal_set_fragmentType))::System::Xml::XmlNodeType fragmentType;

  /// @brief Field fullAttrCleanup, offset 0xcd, size 0x1
  __declspec(property(get = __cordl_internal_get_fullAttrCleanup, put = __cordl_internal_set_fullAttrCleanup)) bool fullAttrCleanup;

  /// @brief Field ignoreComments, offset 0x109, size 0x1
  __declspec(property(get = __cordl_internal_get_ignoreComments, put = __cordl_internal_set_ignoreComments)) bool ignoreComments;

  /// @brief Field ignorePIs, offset 0x108, size 0x1
  __declspec(property(get = __cordl_internal_get_ignorePIs, put = __cordl_internal_set_ignorePIs)) bool ignorePIs;

  /// @brief Field incReadDecoder, offset 0x188, size 0x8
  __declspec(property(get = __cordl_internal_get_incReadDecoder, put = __cordl_internal_set_incReadDecoder))::System::Xml::IncrementalReadDecoder* incReadDecoder;

  /// @brief Field incReadDepth, offset 0x19c, size 0x4
  __declspec(property(get = __cordl_internal_get_incReadDepth, put = __cordl_internal_set_incReadDepth)) int32_t incReadDepth;

  /// @brief Field incReadLeftEndPos, offset 0x1a4, size 0x4
  __declspec(property(get = __cordl_internal_get_incReadLeftEndPos, put = __cordl_internal_set_incReadLeftEndPos)) int32_t incReadLeftEndPos;

  /// @brief Field incReadLeftStartPos, offset 0x1a0, size 0x4
  __declspec(property(get = __cordl_internal_get_incReadLeftStartPos, put = __cordl_internal_set_incReadLeftStartPos)) int32_t incReadLeftStartPos;

  /// @brief Field incReadLineInfo, offset 0x194, size 0x8
  __declspec(property(get = __cordl_internal_get_incReadLineInfo, put = __cordl_internal_set_incReadLineInfo))::System::Xml::LineInfo incReadLineInfo;

  /// @brief Field incReadState, offset 0x190, size 0x4
  __declspec(property(get = __cordl_internal_get_incReadState, put = __cordl_internal_set_incReadState))::System::Xml::__XmlTextReaderImpl__IncrementalReadState incReadState;

  /// @brief Field index, offset 0xb8, size 0x4
  __declspec(property(get = __cordl_internal_get_index, put = __cordl_internal_set_index)) int32_t index;

  /// @brief Field lastEntity, offset 0x1e0, size 0x8
  __declspec(property(get = __cordl_internal_get_lastEntity, put = __cordl_internal_set_lastEntity))::System::Xml::IDtdEntityInfo* lastEntity;

  /// @brief Field lastPrefix, offset 0x138, size 0x8
  __declspec(property(get = __cordl_internal_get_lastPrefix, put = __cordl_internal_set_lastPrefix))::StringW lastPrefix;

  /// @brief Field laterInitParam, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_laterInitParam, put = __cordl_internal_set_laterInitParam))::System::Xml::__XmlTextReaderImpl__LaterInitParam* laterInitParam;

  /// @brief Field lineNumberOffset, offset 0x10c, size 0x4
  __declspec(property(get = __cordl_internal_get_lineNumberOffset, put = __cordl_internal_set_lineNumberOffset)) int32_t lineNumberOffset;

  /// @brief Field linePositionOffset, offset 0x110, size 0x4
  __declspec(property(get = __cordl_internal_get_linePositionOffset, put = __cordl_internal_set_linePositionOffset)) int32_t linePositionOffset;

  /// @brief Field maxCharactersFromEntities, offset 0x120, size 0x8
  __declspec(property(get = __cordl_internal_get_maxCharactersFromEntities, put = __cordl_internal_set_maxCharactersFromEntities)) int64_t maxCharactersFromEntities;

  /// @brief Field maxCharactersInDocument, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_maxCharactersInDocument, put = __cordl_internal_set_maxCharactersInDocument)) int64_t maxCharactersInDocument;

  /// @brief Field nameTable, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_nameTable, put = __cordl_internal_set_nameTable))::System::Xml::XmlNameTable* nameTable;

  /// @brief Field nameTableFromSettings, offset 0xe0, size 0x1
  __declspec(property(get = __cordl_internal_get_nameTableFromSettings, put = __cordl_internal_set_nameTableFromSettings)) bool nameTableFromSettings;

  /// @brief Field namespaceManager, offset 0x130, size 0x8
  __declspec(property(get = __cordl_internal_get_namespaceManager, put = __cordl_internal_set_namespaceManager))::System::Xml::XmlNamespaceManager* namespaceManager;

  /// @brief Field nextEntityId, offset 0x1d4, size 0x4
  __declspec(property(get = __cordl_internal_get_nextEntityId, put = __cordl_internal_set_nextEntityId)) int32_t nextEntityId;

  /// @brief Field nextNextParsingFunction, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get_nextNextParsingFunction,
                      put = __cordl_internal_set_nextNextParsingFunction))::System::Xml::__XmlTextReaderImpl__ParsingFunction nextNextParsingFunction;

  /// @brief Field nextParsingFunction, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get_nextParsingFunction, put = __cordl_internal_set_nextParsingFunction))::System::Xml::__XmlTextReaderImpl__ParsingFunction nextParsingFunction;

  /// @brief Field nodes, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_nodes,
                      put = __cordl_internal_set_nodes))::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*> nodes;

  /// @brief Field normalize, offset 0xf8, size 0x1
  __declspec(property(get = __cordl_internal_get_normalize, put = __cordl_internal_set_normalize)) bool normalize;

  /// @brief Field onDefaultAttributeUse, offset 0x1b8, size 0x8
  __declspec(property(get = __cordl_internal_get_onDefaultAttributeUse,
                      put = __cordl_internal_set_onDefaultAttributeUse))::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate* onDefaultAttributeUse;

  /// @brief Field outerReader, offset 0x218, size 0x8
  __declspec(property(get = __cordl_internal_get_outerReader, put = __cordl_internal_set_outerReader))::System::Xml::XmlReader* outerReader;

  /// @brief Field parseText_dummyTask, offset 0x238, size 0x8
  __declspec(property(get = __cordl_internal_get_parseText_dummyTask,
                      put = __cordl_internal_set_parseText_dummyTask))::System::Threading::Tasks::Task_1<::System::Tuple_4<int32_t, int32_t, int32_t, bool>*>* parseText_dummyTask;

  /// @brief Field parsingFunction, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get_parsingFunction, put = __cordl_internal_set_parsingFunction))::System::Xml::__XmlTextReaderImpl__ParsingFunction parsingFunction;

  /// @brief Field parsingMode, offset 0x1d8, size 0x4
  __declspec(property(get = __cordl_internal_get_parsingMode, put = __cordl_internal_set_parsingMode))::System::Xml::__XmlTextReaderImpl__ParsingMode parsingMode;

  /// @brief Field parsingStatesStack, offset 0x148, size 0x8
  __declspec(
      property(get = __cordl_internal_get_parsingStatesStack,
               put = __cordl_internal_set_parsingStatesStack))::ArrayW<::System::Xml::__XmlTextReaderImpl__ParsingState, ::Array<::System::Xml::__XmlTextReaderImpl__ParsingState>*> parsingStatesStack;

  /// @brief Field parsingStatesStackTop, offset 0x150, size 0x4
  __declspec(property(get = __cordl_internal_get_parsingStatesStackTop, put = __cordl_internal_set_parsingStatesStackTop)) int32_t parsingStatesStackTop;

  /// @brief Field ps, offset 0x20, size 0x78
  __declspec(property(get = __cordl_internal_get_ps, put = __cordl_internal_set_ps))::System::Xml::__XmlTextReaderImpl__ParsingState ps;

  /// @brief Field readState, offset 0x1dc, size 0x4
  __declspec(property(get = __cordl_internal_get_readState, put = __cordl_internal_set_readState))::System::Xml::ReadState readState;

  /// @brief Field readValueOffset, offset 0x1f0, size 0x4
  __declspec(property(get = __cordl_internal_get_readValueOffset, put = __cordl_internal_set_readValueOffset)) int32_t readValueOffset;

  /// @brief Field reportedBaseUri, offset 0x158, size 0x8
  __declspec(property(get = __cordl_internal_get_reportedBaseUri, put = __cordl_internal_set_reportedBaseUri))::StringW reportedBaseUri;

  /// @brief Field reportedEncoding, offset 0x160, size 0x8
  __declspec(property(get = __cordl_internal_get_reportedEncoding, put = __cordl_internal_set_reportedEncoding))::System::Text::Encoding* reportedEncoding;

  /// @brief Field rootElementParsed, offset 0x1d0, size 0x1
  __declspec(property(get = __cordl_internal_get_rootElementParsed, put = __cordl_internal_set_rootElementParsed)) bool rootElementParsed;

  /// @brief Field standalone, offset 0x1d1, size 0x1
  __declspec(property(get = __cordl_internal_get_standalone, put = __cordl_internal_set_standalone)) bool standalone;

  /// @brief Field stringBuilder, offset 0x1c8, size 0x8
  __declspec(property(get = __cordl_internal_get_stringBuilder, put = __cordl_internal_set_stringBuilder))::System::Text::StringBuilder* stringBuilder;

  /// @brief Field supportNamespaces, offset 0xf9, size 0x1
  __declspec(property(get = __cordl_internal_get_supportNamespaces, put = __cordl_internal_set_supportNamespaces)) bool supportNamespaces;

  /// @brief Field url, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_url, put = __cordl_internal_set_url))::StringW url;

  /// @brief Field v1Compat, offset 0x128, size 0x1
  __declspec(property(get = __cordl_internal_get_v1Compat, put = __cordl_internal_set_v1Compat)) bool v1Compat;

  /// @brief Field validatingReaderCompatFlag, offset 0x1c0, size 0x1
  __declspec(property(get = __cordl_internal_get_validatingReaderCompatFlag, put = __cordl_internal_set_validatingReaderCompatFlag)) bool validatingReaderCompatFlag;

  /// @brief Field validationEventHandling, offset 0x1b0, size 0x8
  __declspec(property(get = __cordl_internal_get_validationEventHandling, put = __cordl_internal_set_validationEventHandling))::System::Xml::IValidationEventHandling* validationEventHandling;

  /// @brief Field whitespaceHandling, offset 0xfc, size 0x4
  __declspec(property(get = __cordl_internal_get_whitespaceHandling, put = __cordl_internal_set_whitespaceHandling))::System::Xml::WhitespaceHandling whitespaceHandling;

  /// @brief Field xmlCharType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlCharType, put = __cordl_internal_set_xmlCharType))::System::Xml::XmlCharType xmlCharType;

  /// @brief Field xmlContext, offset 0x140, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlContext, put = __cordl_internal_set_xmlContext))::System::Xml::__XmlTextReaderImpl__XmlContext* xmlContext;

  /// @brief Field xmlResolver, offset 0xe8, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlResolver, put = __cordl_internal_set_xmlResolver))::System::Xml::XmlResolver* xmlResolver;

  /// @brief Field xmlResolverIsSet, offset 0x220, size 0x1
  __declspec(property(get = __cordl_internal_get_xmlResolverIsSet, put = __cordl_internal_set_xmlResolverIsSet)) bool xmlResolverIsSet;

  /// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
  constexpr operator ::System::Xml::IXmlNamespaceResolver*() noexcept;

  /// @brief Method AddAttribute, addr 0x2956fa8, size 0x1a4, virtual false, abstract: false, final false
  inline ::System::Xml::__XmlTextReaderImpl__NodeData* AddAttribute(int32_t endNamePos, int32_t colonPos);

  /// @brief Method AddAttribute, addr 0x295b0a8, size 0x134, virtual false, abstract: false, final false
  inline ::System::Xml::__XmlTextReaderImpl__NodeData* AddAttribute(::StringW localName, ::StringW prefix, ::StringW nameWPrefix);

  /// @brief Method AddAttributeChunkToList, addr 0x2958564, size 0x30, virtual false, abstract: false, final false
  inline void AddAttributeChunkToList(::System::Xml::__XmlTextReaderImpl__NodeData* attr, ::System::Xml::__XmlTextReaderImpl__NodeData* chunk,
                                      ByRef<::System::Xml::__XmlTextReaderImpl__NodeData*> lastChunk);

  /// @brief Method AddAttributeNoChecks, addr 0x2952470, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Xml::__XmlTextReaderImpl__NodeData* AddAttributeNoChecks(::StringW name, int32_t attrDepth);

  /// @brief Method AddDefaultAttributeDtd, addr 0x295661c, size 0x66c, virtual false, abstract: false, final false
  inline bool AddDefaultAttributeDtd(::System::Xml::IDtdDefaultAttributeInfo* defAttrInfo, bool definedInDtd,
                                     ::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*> nameSortedNodeData);

  /// @brief Method AddDefaultAttributeInternal, addr 0x295c304, size 0x244, virtual false, abstract: false, final false
  inline ::System::Xml::__XmlTextReaderImpl__NodeData* AddDefaultAttributeInternal(::StringW localName, ::StringW ns, ::StringW prefix, ::StringW value, int32_t lineNo, int32_t linePos,
                                                                                   int32_t valueLineNo, int32_t valueLinePos, bool isXmlAttribute);

  /// @brief Method AddDefaultAttributesAndNormalize, addr 0x2955bc0, size 0xa14, virtual false, abstract: false, final false
  inline void AddDefaultAttributesAndNormalize();

  /// @brief Method AddNamespace, addr 0x2958308, size 0x25c, virtual false, abstract: false, final false
  inline void AddNamespace(::StringW prefix, ::StringW uri, ::System::Xml::__XmlTextReaderImpl__NodeData* attr);

  /// @brief Method AddNode, addr 0x294ea38, size 0x44, virtual false, abstract: false, final false
  inline ::System::Xml::__XmlTextReaderImpl__NodeData* AddNode(int32_t nodeIndex, int32_t nodeDepth);

  /// @brief Method AllocNode, addr 0x295af70, size 0x138, virtual false, abstract: false, final false
  inline ::System::Xml::__XmlTextReaderImpl__NodeData* AllocNode(int32_t nodeIndex, int32_t nodeDepth);

  /// @brief Method AttributeDuplCheck, addr 0x2957e58, size 0x374, virtual false, abstract: false, final false
  inline void AttributeDuplCheck();

  /// @brief Method AttributeNamespaceLookup, addr 0x2956c88, size 0xa4, virtual false, abstract: false, final false
  inline void AttributeNamespaceLookup();

  /// @brief Method BlockCopy, addr 0x2953b44, size 0x8, virtual false, abstract: false, final false
  static inline void BlockCopy(::ArrayW<uint8_t, ::Array<uint8_t>*> src, int32_t srcOffset, ::ArrayW<uint8_t, ::Array<uint8_t>*> dst, int32_t dstOffset, int32_t count);

  /// @brief Method BlockCopyChars, addr 0x2953b30, size 0x14, virtual false, abstract: false, final false
  static inline void BlockCopyChars(::ArrayW<char16_t, ::Array<char16_t>*> src, int32_t srcOffset, ::ArrayW<char16_t, ::Array<char16_t>*> dst, int32_t dstOffset, int32_t count);

  /// @brief Method CheckEncoding, addr 0x2953784, size 0x330, virtual false, abstract: false, final false
  inline ::System::Text::Encoding* CheckEncoding(::StringW newEncodingName);

  /// @brief Method Close, addr 0x294f0b0, size 0x8, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Close, addr 0x294f0b8, size 0xbc, virtual false, abstract: false, final false
  inline void Close(bool closeInput);

  /// @brief Method DetectEncoding, addr 0x2952e7c, size 0x22c, virtual false, abstract: false, final false
  inline ::System::Text::Encoding* DetectEncoding();

  /// @brief Method DtdParserProxy_OnNewLine, addr 0x29503c8, size 0x14, virtual false, abstract: false, final false
  inline void DtdParserProxy_OnNewLine(int32_t pos);

  /// @brief Method DtdParserProxy_OnPublicId, addr 0x29524ec, size 0x8c, virtual false, abstract: false, final false
  inline void DtdParserProxy_OnPublicId(::StringW publicId, ::System::Xml::LineInfo keywordLineInfo, ::System::Xml::LineInfo publicLiteralLineInfo);

  /// @brief Method DtdParserProxy_OnSystemId, addr 0x29523e4, size 0x8c, virtual false, abstract: false, final false
  inline void DtdParserProxy_OnSystemId(::StringW systemId, ::System::Xml::LineInfo keywordLineInfo, ::System::Xml::LineInfo systemLiteralLineInfo);

  /// @brief Method DtdParserProxy_ParseComment, addr 0x2950d20, size 0x184, virtual false, abstract: false, final false
  inline void DtdParserProxy_ParseComment(::System::Text::StringBuilder* sb);

  /// @brief Method DtdParserProxy_ParseNamedCharRef, addr 0x2950900, size 0x8, virtual false, abstract: false, final false
  inline int32_t DtdParserProxy_ParseNamedCharRef(bool expand, ::System::Text::StringBuilder* internalSubsetBuilder);

  /// @brief Method DtdParserProxy_ParseNumericCharRef, addr 0x2950834, size 0x20, virtual false, abstract: false, final false
  inline int32_t DtdParserProxy_ParseNumericCharRef(::System::Text::StringBuilder* internalSubsetBuilder);

  /// @brief Method DtdParserProxy_ParsePI, addr 0x295096c, size 0x44, virtual false, abstract: false, final false
  inline void DtdParserProxy_ParsePI(::System::Text::StringBuilder* sb);

  /// @brief Method DtdParserProxy_PopEntity, addr 0x295190c, size 0x4c, virtual false, abstract: false, final false
  inline bool DtdParserProxy_PopEntity(ByRef<::System::Xml::IDtdEntityInfo*> oldEntity, ByRef<int32_t> newEntityId);

  /// @brief Method DtdParserProxy_PushEntity, addr 0x2951150, size 0x10c, virtual false, abstract: false, final false
  inline bool DtdParserProxy_PushEntity(::System::Xml::IDtdEntityInfo* entity, ByRef<int32_t> entityId);

  /// @brief Method DtdParserProxy_PushExternalSubset, addr 0x29519a4, size 0x128, virtual false, abstract: false, final false
  inline bool DtdParserProxy_PushExternalSubset(::StringW systemId, ::StringW publicId);

  /// @brief Method DtdParserProxy_PushInternalDtd, addr 0x29520ec, size 0x64, virtual false, abstract: false, final false
  inline void DtdParserProxy_PushInternalDtd(::StringW baseUri, ::StringW internalDtd);

  /// @brief Method DtdParserProxy_ReadData, addr 0x2950400, size 0x4, virtual false, abstract: false, final false
  inline int32_t DtdParserProxy_ReadData();

  /// @brief Method DtdParserProxy_Throw, addr 0x295234c, size 0x8, virtual false, abstract: false, final false
  inline void DtdParserProxy_Throw(::System::Exception* e);

  /// @brief Method EatWhitespaces, addr 0x2951e98, size 0x254, virtual false, abstract: false, final false
  inline int32_t EatWhitespaces(::System::Text::StringBuilder* sb);

  /// @brief Method ElementNamespaceLookup, addr 0x29565d4, size 0x48, virtual false, abstract: false, final false
  inline void ElementNamespaceLookup();

  /// @brief Method FinishAttributeValueIterator, addr 0x294ccc0, size 0xa4, virtual false, abstract: false, final false
  inline void FinishAttributeValueIterator();

  /// @brief Method FinishIncrementalRead, addr 0x294ec6c, size 0x6c, virtual false, abstract: false, final false
  inline void FinishIncrementalRead();

  /// @brief Method FinishInit, addr 0x294cee8, size 0x48, virtual false, abstract: false, final false
  inline void FinishInit();

  /// @brief Method FinishInitStream, addr 0x294c504, size 0x80, virtual false, abstract: false, final false
  inline void FinishInitStream();

  /// @brief Method FinishInitTextReader, addr 0x294c584, size 0x64, virtual false, abstract: false, final false
  inline void FinishInitTextReader();

  /// @brief Method FinishInitUriString, addr 0x294bf40, size 0x2ec, virtual false, abstract: false, final false
  inline void FinishInitUriString();

  /// @brief Method FinishOtherValueIterator, addr 0x294c8d8, size 0x110, virtual false, abstract: false, final false
  inline void FinishOtherValueIterator();

  /// @brief Method FinishPartialValue, addr 0x294c81c, size 0xbc, virtual false, abstract: false, final false
  inline void FinishPartialValue();

  /// @brief Method FinishReadContentAsBinary, addr 0x294ef90, size 0x50, virtual false, abstract: false, final false
  inline void FinishReadContentAsBinary();

  /// @brief Method FinishReadElementContentAsBinary, addr 0x294efe0, size 0xd0, virtual false, abstract: false, final false
  inline void FinishReadElementContentAsBinary();

  /// @brief Method FinishReadValueChunk, addr 0x294ef70, size 0x20, virtual false, abstract: false, final false
  inline void FinishReadValueChunk();

  /// @brief Method FullAttributeCleanup, addr 0x295b208, size 0x64, virtual false, abstract: false, final false
  inline void FullAttributeCleanup();

  /// @brief Method GetChars, addr 0x2953b4c, size 0x118, virtual false, abstract: false, final false
  inline int32_t GetChars(int32_t maxCharsCount);

  /// @brief Method GetIndexOfAttributeWithPrefix, addr 0x294cbe8, size 0xb4, virtual false, abstract: false, final false
  inline int32_t GetIndexOfAttributeWithPrefix(::StringW name);

  /// @brief Method GetIndexOfAttributeWithoutPrefix, addr 0x294cb00, size 0xe8, virtual false, abstract: false, final false
  inline int32_t GetIndexOfAttributeWithoutPrefix(::StringW name);

  /// @brief Method GetTempResolver, addr 0x29510e8, size 0x68, virtual false, abstract: false, final false
  inline ::System::Xml::XmlResolver* GetTempResolver();

  /// @brief Method GetTextNodeType, addr 0x2958d9c, size 0x58, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNodeType GetTextNodeType(int32_t orChars);

  /// @brief Method GetWhitespaceType, addr 0x2958f84, size 0x48, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNodeType GetWhitespaceType();

  /// @brief Method HandleEntityEnd, addr 0x2952ce4, size 0x128, virtual false, abstract: false, final false
  inline bool HandleEntityEnd(bool checkEntityNesting);

  /// @brief Method HandleEntityReference, addr 0x29547d0, size 0x2ac, virtual false, abstract: false, final false
  inline ::System::Xml::__XmlTextReaderImpl__EntityType HandleEntityReference(bool isInAttributeValue, ::System::Xml::__XmlTextReaderImpl__EntityExpandType expandType, ByRef<int32_t> charRefEndPos);

  /// @brief Method HandleGeneralEntityReference, addr 0x294fae0, size 0x4a4, virtual false, abstract: false, final false
  inline ::System::Xml::__XmlTextReaderImpl__EntityType HandleGeneralEntityReference(::StringW name, bool isInAttributeValue, bool pushFakeEntityIfNullResolver, int32_t entityStartLinePos);

  /// @brief Method IncrementalRead, addr 0x295b6f4, size 0x934, virtual false, abstract: false, final false
  inline int32_t IncrementalRead();

  /// @brief Method InitFragmentReader, addr 0x294bc1c, size 0x1ec, virtual false, abstract: false, final false
  inline void InitFragmentReader(::System::Xml::XmlNodeType fragmentType, ::System::Xml::XmlParserContext* parserContext, bool allowXmlDeclFragment);

  /// @brief Method InitStreamInput, addr 0x294c22c, size 0x26c, virtual false, abstract: false, final false
  inline void InitStreamInput(::System::Uri* baseUri, ::StringW baseUriStr, ::System::IO::Stream* stream, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, int32_t byteCount,
                              ::System::Text::Encoding* encoding);

  /// @brief Method InitStreamInput, addr 0x2952e6c, size 0x10, virtual false, abstract: false, final false
  inline void InitStreamInput(::System::Uri* baseUri, ::StringW baseUriStr, ::System::IO::Stream* stream, ::System::Text::Encoding* encoding);

  /// @brief Method InitStreamInput, addr 0x2952e0c, size 0x60, virtual false, abstract: false, final false
  inline void InitStreamInput(::System::Uri* baseUri, ::System::IO::Stream* stream, ::System::Text::Encoding* encoding);

  /// @brief Method InitStringInput, addr 0x294bb50, size 0xcc, virtual false, abstract: false, final false
  inline void InitStringInput(::StringW baseUriStr, ::System::Text::Encoding* originalEncoding, ::StringW str);

  /// @brief Method InitTextReaderInput, addr 0x29531f0, size 0xb0, virtual false, abstract: false, final false
  inline void InitTextReaderInput(::StringW baseUriStr, ::System::Uri* baseUri, ::System::IO::TextReader* input);

  /// @brief Method InitTextReaderInput, addr 0x294ba38, size 0xc, virtual false, abstract: false, final false
  inline void InitTextReaderInput(::StringW baseUriStr, ::System::IO::TextReader* input);

  /// @brief Method InvalidCharRecovery, addr 0x2953c64, size 0x17c, virtual false, abstract: false, final false
  inline void InvalidCharRecovery(ByRef<int32_t> bytesCount, ByRef<int32_t> charsCount);

  /// @brief Method LookupNamespace, addr 0x29581cc, size 0xc4, virtual false, abstract: false, final false
  inline ::StringW LookupNamespace(::System::Xml::__XmlTextReaderImpl__NodeData* node);

  /// @brief Method LookupNamespace, addr 0x294f174, size 0x38, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method LookupPrefix, addr 0x294ffc0, size 0x24, virtual false, abstract: false, final false
  inline ::StringW LookupPrefix(::StringW namespaceName);

  /// @brief Method MoveToAttribute, addr 0x294ca40, size 0xc0, virtual true, abstract: false, final false
  inline bool MoveToAttribute(::StringW name);

  /// @brief Method MoveToElement, addr 0x294ce60, size 0x88, virtual true, abstract: false, final false
  inline bool MoveToElement();

  /// @brief Method MoveToFirstAttribute, addr 0x294cd64, size 0x74, virtual true, abstract: false, final false
  inline bool MoveToFirstAttribute();

  /// @brief Method MoveToNextAttribute, addr 0x294cdd8, size 0x88, virtual true, abstract: false, final false
  inline bool MoveToNextAttribute();

  /// @brief Method MoveToNextContentNode, addr 0x2958edc, size 0xa8, virtual false, abstract: false, final false
  inline bool MoveToNextContentNode(bool moveIfOnContentNode);

  static inline ::System::Xml::XmlTextReaderImpl* New_ctor(::System::IO::TextReader* input, ::System::Xml::XmlNameTable* nt);

  static inline ::System::Xml::XmlTextReaderImpl* New_ctor(::System::Xml::XmlNameTable* nt);

  static inline ::System::Xml::XmlTextReaderImpl* New_ctor(::StringW url, ::System::IO::TextReader* input, ::System::Xml::XmlNameTable* nt);

  static inline ::System::Xml::XmlTextReaderImpl* New_ctor(::StringW xmlFragment, ::System::Xml::XmlParserContext* context);

  static inline ::System::Xml::XmlTextReaderImpl* New_ctor(::StringW xmlFragment, ::System::Xml::XmlNodeType fragType, ::System::Xml::XmlParserContext* context);

  /// @brief Method OnDefaultNamespaceDecl, addr 0x2957a94, size 0xfc, virtual false, abstract: false, final false
  inline void OnDefaultNamespaceDecl(::System::Xml::__XmlTextReaderImpl__NodeData* attr);

  /// @brief Method OnEof, addr 0x294ee14, size 0x88, virtual false, abstract: false, final false
  inline void OnEof();

  /// @brief Method OnNamespaceDecl, addr 0x2957b90, size 0xdc, virtual false, abstract: false, final false
  inline void OnNamespaceDecl(::System::Xml::__XmlTextReaderImpl__NodeData* attr);

  /// @brief Method OnNewLine, addr 0x29503dc, size 0x14, virtual false, abstract: false, final false
  inline void OnNewLine(int32_t pos);

  /// @brief Method OnXmlReservedAttribute, addr 0x2957c6c, size 0x1ec, virtual false, abstract: false, final false
  inline void OnXmlReservedAttribute(::System::Xml::__XmlTextReaderImpl__NodeData* attr);

  /// @brief Method OpenAndPush, addr 0x295b26c, size 0x234, virtual false, abstract: false, final false
  inline bool OpenAndPush(::System::Uri* uri);

  /// @brief Method OpenUrl, addr 0x294db04, size 0x18c, virtual false, abstract: false, final false
  inline void OpenUrl();

  /// @brief Method OpenUrlDelegate, addr 0x29534c8, size 0x124, virtual false, abstract: false, final false
  inline void OpenUrlDelegate(::System::Object* xmlResolver);

  /// @brief Method ParseAttributeValueChunk, addr 0x294f3f8, size 0x494, virtual false, abstract: false, final false
  inline bool ParseAttributeValueChunk();

  /// @brief Method ParseAttributeValueSlow, addr 0x295714c, size 0x948, virtual false, abstract: false, final false
  inline void ParseAttributeValueSlow(int32_t curPos, char16_t quoteChar, ::System::Xml::__XmlTextReaderImpl__NodeData* attr);

  /// @brief Method ParseAttributes, addr 0x2955584, size 0x63c, virtual false, abstract: false, final false
  inline void ParseAttributes();

  /// @brief Method ParseCData, addr 0x2954088, size 0x8, virtual false, abstract: false, final false
  inline void ParseCData();

  /// @brief Method ParseCDataOrComment, addr 0x29593c8, size 0x43c, virtual false, abstract: false, final false
  inline bool ParseCDataOrComment(::System::Xml::XmlNodeType type, ByRef<int32_t> outStartPos, ByRef<int32_t> outEndPos);

  /// @brief Method ParseCDataOrComment, addr 0x2950ea4, size 0x158, virtual false, abstract: false, final false
  inline void ParseCDataOrComment(::System::Xml::XmlNodeType type);

  /// @brief Method ParseCharRefInline, addr 0x2958df4, size 0x6c, virtual false, abstract: false, final false
  inline int32_t ParseCharRefInline(int32_t startPos, ByRef<int32_t> charCount, ByRef<::System::Xml::__XmlTextReaderImpl__EntityType> entityType);

  /// @brief Method ParseComment, addr 0x2954024, size 0x54, virtual false, abstract: false, final false
  inline bool ParseComment();

  /// @brief Method ParseDoctypeDecl, addr 0x2954090, size 0x288, virtual false, abstract: false, final false
  inline bool ParseDoctypeDecl();

  /// @brief Method ParseDocumentContent, addr 0x294d614, size 0x4f0, virtual false, abstract: false, final false
  inline bool ParseDocumentContent();

  /// @brief Method ParseDtd, addr 0x2959804, size 0x31c, virtual false, abstract: false, final false
  inline void ParseDtd();

  /// @brief Method ParseDtdFromParserContext, addr 0x29532a0, size 0x228, virtual false, abstract: false, final false
  inline void ParseDtdFromParserContext();

  /// @brief Method ParseElement, addr 0x2954330, size 0x4a0, virtual false, abstract: false, final false
  inline void ParseElement();

  /// @brief Method ParseElementContent, addr 0x294d2dc, size 0x338, virtual false, abstract: false, final false
  inline bool ParseElementContent();

  /// @brief Method ParseEndElement, addr 0x2954fec, size 0x3ec, virtual false, abstract: false, final false
  inline void ParseEndElement();

  /// @brief Method ParseEntityName, addr 0x2958594, size 0x13c, virtual false, abstract: false, final false
  inline ::StringW ParseEntityName();

  /// @brief Method ParseEntityReference, addr 0x294eac0, size 0x74, virtual false, abstract: false, final false
  inline void ParseEntityReference();

  /// @brief Method ParseFragmentAttribute, addr 0x294ecd8, size 0x80, virtual false, abstract: false, final false
  inline bool ParseFragmentAttribute();

  /// @brief Method ParseName, addr 0x2953e74, size 0x20, virtual false, abstract: false, final false
  inline int32_t ParseName();

  /// @brief Method ParseNamedCharRef, addr 0x2950908, size 0x64, virtual false, abstract: false, final false
  inline int32_t ParseNamedCharRef(bool expand, ::System::Text::StringBuilder* internalSubsetBuilder);

  /// @brief Method ParseNamedCharRefInline, addr 0x295a9cc, size 0x2dc, virtual false, abstract: false, final false
  inline int32_t ParseNamedCharRefInline(int32_t startPos, bool expand, ::System::Text::StringBuilder* internalSubsetBuilder);

  /// @brief Method ParseNumericCharRef, addr 0x2950854, size 0xac, virtual false, abstract: false, final false
  inline int32_t ParseNumericCharRef(bool expand, ::System::Text::StringBuilder* internalSubsetBuilder, ByRef<::System::Xml::__XmlTextReaderImpl__EntityType> entityType);

  /// @brief Method ParseNumericCharRefInline, addr 0x295a36c, size 0x660, virtual false, abstract: false, final false
  inline int32_t ParseNumericCharRefInline(int32_t startPos, bool expand, ::System::Text::StringBuilder* internalSubsetBuilder, ByRef<int32_t> charCount,
                                           ByRef<::System::Xml::__XmlTextReaderImpl__EntityType> entityType);

  /// @brief Method ParsePI, addr 0x295401c, size 0x8, virtual false, abstract: false, final false
  inline bool ParsePI();

  /// @brief Method ParsePI, addr 0x29509b0, size 0x370, virtual false, abstract: false, final false
  inline bool ParsePI(::System::Text::StringBuilder* piInDtdStringBuilder);

  /// @brief Method ParsePIValue, addr 0x2959034, size 0x394, virtual false, abstract: false, final false
  inline bool ParsePIValue(ByRef<int32_t> outStartPos, ByRef<int32_t> outEndPos);

  /// @brief Method ParseQName, addr 0x2955574, size 0x10, virtual false, abstract: false, final false
  inline int32_t ParseQName(ByRef<int32_t> colonPos);

  /// @brief Method ParseQName, addr 0x295aca8, size 0x288, virtual false, abstract: false, final false
  inline int32_t ParseQName(bool isQName, int32_t startOffset, ByRef<int32_t> colonPos);

  /// @brief Method ParseRootLevelWhitespace, addr 0x2954df0, size 0x1fc, virtual false, abstract: false, final false
  inline bool ParseRootLevelWhitespace();

  /// @brief Method ParseText, addr 0x2954a7c, size 0x374, virtual false, abstract: false, final false
  inline bool ParseText();

  /// @brief Method ParseText, addr 0x29586d0, size 0x6cc, virtual false, abstract: false, final false
  inline bool ParseText(ByRef<int32_t> startPos, ByRef<int32_t> endPos, ByRef<int32_t> outOrChars);

  /// @brief Method ParseUnexpectedToken, addr 0x295c028, size 0xc8, virtual false, abstract: false, final false
  inline ::StringW ParseUnexpectedToken();

  /// @brief Method ParseUnexpectedToken, addr 0x2954318, size 0x8, virtual false, abstract: false, final false
  inline ::StringW ParseUnexpectedToken(int32_t pos);

  /// @brief Method ParseXmlDeclaration, addr 0x294dc90, size 0xd7c, virtual false, abstract: false, final false
  inline bool ParseXmlDeclaration(bool isTextDecl);

  /// @brief Method ParseXmlDeclarationFragment, addr 0x294ed58, size 0xbc, virtual false, abstract: false, final false
  inline void ParseXmlDeclarationFragment();

  /// @brief Method PopElementContext, addr 0x294ea7c, size 0x44, virtual false, abstract: false, final false
  inline void PopElementContext();

  /// @brief Method PopEntity, addr 0x2951958, size 0x4c, virtual false, abstract: false, final false
  inline void PopEntity();

  /// @brief Method PopParsingState, addr 0x2953de0, size 0x6c, virtual false, abstract: false, final false
  inline void PopParsingState();

  /// @brief Method PopXmlContext, addr 0x295b1dc, size 0x2c, virtual false, abstract: false, final false
  inline void PopXmlContext();

  /// @brief Method ProcessDtdFromParserContext, addr 0x294c498, size 0x6c, virtual false, abstract: false, final false
  inline void ProcessDtdFromParserContext(::System::Xml::XmlParserContext* context);

  /// @brief Method PushExternalEntity, addr 0x295125c, size 0x390, virtual false, abstract: false, final false
  inline bool PushExternalEntity(::System::Xml::IDtdEntityInfo* entity);

  /// @brief Method PushExternalEntityOrSubset, addr 0x2951acc, size 0x3cc, virtual false, abstract: false, final false
  inline void PushExternalEntityOrSubset(::StringW publicId, ::StringW systemId, ::System::Uri* baseUri, ::StringW entityName);

  /// @brief Method PushInternalEntity, addr 0x29515ec, size 0x320, virtual false, abstract: false, final false
  inline void PushInternalEntity(::System::Xml::IDtdEntityInfo* entity);

  /// @brief Method PushParsingState, addr 0x2952150, size 0x120, virtual false, abstract: false, final false
  inline void PushParsingState();

  /// @brief Method PushXmlContext, addr 0x2958290, size 0x78, virtual false, abstract: false, final false
  inline void PushXmlContext();

  /// @brief Method ReThrow, addr 0x2952a04, size 0xa8, virtual false, abstract: false, final false
  inline void ReThrow(::System::Exception* e, int32_t lineNo, int32_t linePos);

  /// @brief Method Read, addr 0x294cf30, size 0x3ac, virtual true, abstract: false, final false
  inline bool Read();

  /// @brief Method ReadAttributeValue, addr 0x294f1ac, size 0x24c, virtual true, abstract: false, final false
  inline bool ReadAttributeValue();

  /// @brief Method ReadData, addr 0x2950404, size 0x430, virtual false, abstract: false, final false
  inline int32_t ReadData();

  /// @brief Method ReadDataInName, addr 0x295af30, size 0x40, virtual false, abstract: false, final false
  inline bool ReadDataInName(ByRef<int32_t> pos);

  /// @brief Method RegisterConsumedCharacters, addr 0x2952270, size 0xdc, virtual false, abstract: false, final false
  inline void RegisterConsumedCharacters(int64_t characters, bool inEntityReference);

  /// @brief Method RegisterEntity, addr 0x295b4a0, size 0x1f0, virtual false, abstract: false, final false
  inline void RegisterEntity(::System::Xml::IDtdEntityInfo* entity);

  /// @brief Method ResetAttributes, addr 0x294ea0c, size 0x2c, virtual false, abstract: false, final false
  inline void ResetAttributes();

  /// @brief Method ResolveEntity, addr 0x294f88c, size 0x254, virtual true, abstract: false, final false
  inline void ResolveEntity();

  /// @brief Method SendValidationEvent, addr 0x2950ffc, size 0xac, virtual false, abstract: false, final false
  inline void SendValidationEvent(::System::Xml::Schema::XmlSeverityType severity, ::StringW code, ::StringW arg, int32_t lineNo, int32_t linePos);

  /// @brief Method SendValidationEvent, addr 0x2952c20, size 0xc4, virtual false, abstract: false, final false
  inline void SendValidationEvent(::System::Xml::Schema::XmlSeverityType severity, ::System::Xml::Schema::XmlSchemaException* exception);

  /// @brief Method SetDtdInfo, addr 0x295c0f8, size 0x134, virtual false, abstract: false, final false
  inline void SetDtdInfo(::System::Xml::IDtdInfo* newDtdInfo);

  /// @brief Method SetErrorState, addr 0x29529f0, size 0x14, virtual false, abstract: false, final false
  inline void SetErrorState();

  /// @brief Method SetupEncoding, addr 0x29530a8, size 0x148, virtual false, abstract: false, final false
  inline void SetupEncoding(::System::Text::Encoding* encoding);

  /// @brief Method SetupEndEntityNodeInAttribute, addr 0x2958fcc, size 0x68, virtual false, abstract: false, final false
  inline void SetupEndEntityNodeInAttribute();

  /// @brief Method SetupEndEntityNodeInContent, addr 0x294eb34, size 0x138, virtual false, abstract: false, final false
  inline void SetupEndEntityNodeInContent();

  /// @brief Method ShiftBuffer, addr 0x2953e4c, size 0x20, virtual false, abstract: false, final false
  inline void ShiftBuffer(int32_t sourcePos, int32_t destPos, int32_t count);

  /// @brief Method SkipDtd, addr 0x2959b20, size 0x358, virtual false, abstract: false, final false
  inline void SkipDtd();

  /// @brief Method SkipPartialTextValue, addr 0x294ef30, size 0x40, virtual false, abstract: false, final false
  inline void SkipPartialTextValue();

  /// @brief Method SkipPublicOrSystemIdLiteral, addr 0x2959e78, size 0xb8, virtual false, abstract: false, final false
  inline void SkipPublicOrSystemIdLiteral();

  /// @brief Method SkipUntil, addr 0x2959f30, size 0x43c, virtual false, abstract: false, final false
  inline void SkipUntil(char16_t stopChar, bool recognizeLiterals);

  /// @brief Method StripSpaces, addr 0x295c554, size 0x228, virtual false, abstract: false, final false
  static inline ::StringW StripSpaces(::StringW value);

  /// @brief Method StripSpaces, addr 0x295c77c, size 0x110, virtual false, abstract: false, final false
  static inline void StripSpaces(::ArrayW<char16_t, ::Array<char16_t>*> value, int32_t index, ByRef<int32_t> len);

  /// @brief Method SwitchEncoding, addr 0x29535ec, size 0xf0, virtual false, abstract: false, final false
  inline void SwitchEncoding(::System::Text::Encoding* newEncoding);

  /// @brief Method SwitchEncodingToUTF8, addr 0x2953ac4, size 0x6c, virtual false, abstract: false, final false
  inline void SwitchEncodingToUTF8();

  /// @brief Method System.Xml.IXmlNamespaceResolver.LookupNamespace, addr 0x294ff8c, size 0x10, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IXmlNamespaceResolver_LookupNamespace(::StringW prefix);

  /// @brief Method System.Xml.IXmlNamespaceResolver.LookupPrefix, addr 0x294ff9c, size 0x24, virtual true, abstract: false, final true
  inline ::StringW System_Xml_IXmlNamespaceResolver_LookupPrefix(::StringW namespaceName);

  /// @brief Method Throw, addr 0x2952354, size 0x90, virtual false, abstract: false, final false
  inline void Throw(::System::Exception* e);

  /// @brief Method Throw, addr 0x29526d8, size 0x5c, virtual false, abstract: false, final false
  inline void Throw(int32_t pos, ::StringW res);

  /// @brief Method Throw, addr 0x2952578, size 0x14, virtual false, abstract: false, final false
  inline void Throw(int32_t pos, ::StringW res, ::StringW arg);

  /// @brief Method Throw, addr 0x2952628, size 0x14, virtual false, abstract: false, final false
  inline void Throw(int32_t pos, ::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args);

  /// @brief Method Throw, addr 0x2952734, size 0x54, virtual false, abstract: false, final false
  inline void Throw(::StringW res);

  /// @brief Method Throw, addr 0x295258c, size 0x9c, virtual false, abstract: false, final false
  inline void Throw(::StringW res, ::StringW arg);

  /// @brief Method Throw, addr 0x29528bc, size 0x8c, virtual false, abstract: false, final false
  inline void Throw(::StringW res, ::StringW arg, ::System::Exception* innerException);

  /// @brief Method Throw, addr 0x2952830, size 0x8c, virtual false, abstract: false, final false
  inline void Throw(::StringW res, ::StringW arg, int32_t lineNo, int32_t linePos);

  /// @brief Method Throw, addr 0x295263c, size 0x9c, virtual false, abstract: false, final false
  inline void Throw(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args);

  /// @brief Method Throw, addr 0x2952948, size 0xa8, virtual false, abstract: false, final false
  inline void Throw(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Exception* innerException);

  /// @brief Method Throw, addr 0x2952788, size 0xa8, virtual false, abstract: false, final false
  inline void Throw(::StringW res, int32_t lineNo, int32_t linePos);

  /// @brief Method ThrowExpectingWhitespace, addr 0x2956f28, size 0x80, virtual false, abstract: false, final false
  inline void ThrowExpectingWhitespace(int32_t pos);

  /// @brief Method ThrowInvalidChar, addr 0x2952bb0, size 0x70, virtual false, abstract: false, final false
  inline void ThrowInvalidChar(::ArrayW<char16_t, ::Array<char16_t>*> data, int32_t length, int32_t invCharPos);

  /// @brief Method ThrowTagMismatch, addr 0x2956d2c, size 0x1fc, virtual false, abstract: false, final false
  inline void ThrowTagMismatch(::System::Xml::__XmlTextReaderImpl__NodeData* startTag);

  /// @brief Method ThrowUnclosedElements, addr 0x29553d8, size 0x19c, virtual false, abstract: false, final false
  inline void ThrowUnclosedElements();

  /// @brief Method ThrowUnexpectedToken, addr 0x2953e6c, size 0x8, virtual false, abstract: false, final false
  inline void ThrowUnexpectedToken(::StringW expectedToken1);

  /// @brief Method ThrowUnexpectedToken, addr 0x2953e94, size 0x188, virtual false, abstract: false, final false
  inline void ThrowUnexpectedToken(::StringW expectedToken1, ::StringW expectedToken2);

  /// @brief Method ThrowUnexpectedToken, addr 0x2954078, size 0x10, virtual false, abstract: false, final false
  inline void ThrowUnexpectedToken(int32_t pos, ::StringW expectedToken);

  /// @brief Method ThrowUnexpectedToken, addr 0x2954320, size 0x10, virtual false, abstract: false, final false
  inline void ThrowUnexpectedToken(int32_t pos, ::StringW expectedToken1, ::StringW expectedToken2);

  /// @brief Method ThrowWithoutLineInfo, addr 0x294ee9c, size 0x94, virtual false, abstract: false, final false
  inline void ThrowWithoutLineInfo(::StringW res);

  /// @brief Method ThrowWithoutLineInfo, addr 0x2952aac, size 0x78, virtual false, abstract: false, final false
  inline void ThrowWithoutLineInfo(::StringW res, ::StringW arg);

  /// @brief Method ThrowWithoutLineInfo, addr 0x2952b24, size 0x8c, virtual false, abstract: false, final false
  inline void ThrowWithoutLineInfo(::StringW res, ::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Exception* innerException);

  /// @brief Method UnDecodeChars, addr 0x29536dc, size 0xa8, virtual false, abstract: false, final false
  inline void UnDecodeChars();

  /// @brief Method UnregisterEntity, addr 0x295b690, size 0x64, virtual false, abstract: false, final false
  inline void UnregisterEntity();

  /// @brief Method ZeroEndingStream, addr 0x2958e60, size 0x7c, virtual false, abstract: false, final false
  inline bool ZeroEndingStream(int32_t pos);

  constexpr ::StringW const& __cordl_internal_get_Xml() const;

  constexpr ::StringW& __cordl_internal_get_Xml();

  constexpr ::StringW const& __cordl_internal_get_XmlNs() const;

  constexpr ::StringW& __cordl_internal_get_XmlNs();

  constexpr bool const& __cordl_internal_get_addDefaultAttributesAndNormalize() const;

  constexpr bool& __cordl_internal_get_addDefaultAttributesAndNormalize();

  constexpr bool const& __cordl_internal_get_afterResetState() const;

  constexpr bool& __cordl_internal_get_afterResetState();

  constexpr int32_t const& __cordl_internal_get_attrCount() const;

  constexpr int32_t& __cordl_internal_get_attrCount();

  constexpr ::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*> const& __cordl_internal_get_attrDuplSortingArray() const;

  constexpr ::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*>& __cordl_internal_get_attrDuplSortingArray();

  constexpr int32_t const& __cordl_internal_get_attrDuplWalkCount() const;

  constexpr int32_t& __cordl_internal_get_attrDuplWalkCount();

  constexpr int32_t const& __cordl_internal_get_attrHashtable() const;

  constexpr int32_t& __cordl_internal_get_attrHashtable();

  constexpr bool const& __cordl_internal_get_attrNeedNamespaceLookup() const;

  constexpr bool& __cordl_internal_get_attrNeedNamespaceLookup();

  constexpr int32_t const& __cordl_internal_get_attributeValueBaseEntityId() const;

  constexpr int32_t& __cordl_internal_get_attributeValueBaseEntityId();

  constexpr int64_t const& __cordl_internal_get_charactersFromEntities() const;

  constexpr int64_t& __cordl_internal_get_charactersFromEntities();

  constexpr int64_t const& __cordl_internal_get_charactersInDocument() const;

  constexpr int64_t& __cordl_internal_get_charactersInDocument();

  constexpr bool const& __cordl_internal_get_checkCharacters() const;

  constexpr bool& __cordl_internal_get_checkCharacters();

  constexpr bool const& __cordl_internal_get_closeInput() const;

  constexpr bool& __cordl_internal_get_closeInput();

  constexpr int32_t const& __cordl_internal_get_curAttrIndex() const;

  constexpr int32_t& __cordl_internal_get_curAttrIndex();

  constexpr ::System::Xml::__XmlTextReaderImpl__NodeData*& __cordl_internal_get_curNode();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::__XmlTextReaderImpl__NodeData*> const& __cordl_internal_get_curNode() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::IDtdEntityInfo*, ::System::Xml::IDtdEntityInfo*>*& __cordl_internal_get_currentEntities();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::System::Xml::IDtdEntityInfo*, ::System::Xml::IDtdEntityInfo*>*> const&
  __cordl_internal_get_currentEntities() const;

  constexpr bool const& __cordl_internal_get_disableUndeclaredEntityCheck() const;

  constexpr bool& __cordl_internal_get_disableUndeclaredEntityCheck();

  constexpr int32_t const& __cordl_internal_get_documentStartBytePos() const;

  constexpr int32_t& __cordl_internal_get_documentStartBytePos();

  constexpr ::System::Xml::IDtdInfo*& __cordl_internal_get_dtdInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::IDtdInfo*> const& __cordl_internal_get_dtdInfo() const;

  constexpr ::System::Xml::DtdProcessing const& __cordl_internal_get_dtdProcessing() const;

  constexpr ::System::Xml::DtdProcessing& __cordl_internal_get_dtdProcessing();

  constexpr bool const& __cordl_internal_get_emptyEntityInAttributeResolved() const;

  constexpr bool& __cordl_internal_get_emptyEntityInAttributeResolved();

  constexpr ::System::Xml::EntityHandling const& __cordl_internal_get_entityHandling() const;

  constexpr ::System::Xml::EntityHandling& __cordl_internal_get_entityHandling();

  constexpr bool const& __cordl_internal_get_fragment() const;

  constexpr bool& __cordl_internal_get_fragment();

  constexpr ::System::Xml::XmlParserContext*& __cordl_internal_get_fragmentParserContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlParserContext*> const& __cordl_internal_get_fragmentParserContext() const;

  constexpr ::System::Xml::XmlNodeType const& __cordl_internal_get_fragmentType() const;

  constexpr ::System::Xml::XmlNodeType& __cordl_internal_get_fragmentType();

  constexpr bool const& __cordl_internal_get_fullAttrCleanup() const;

  constexpr bool& __cordl_internal_get_fullAttrCleanup();

  constexpr bool const& __cordl_internal_get_ignoreComments() const;

  constexpr bool& __cordl_internal_get_ignoreComments();

  constexpr bool const& __cordl_internal_get_ignorePIs() const;

  constexpr bool& __cordl_internal_get_ignorePIs();

  constexpr ::System::Xml::IncrementalReadDecoder*& __cordl_internal_get_incReadDecoder();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::IncrementalReadDecoder*> const& __cordl_internal_get_incReadDecoder() const;

  constexpr int32_t const& __cordl_internal_get_incReadDepth() const;

  constexpr int32_t& __cordl_internal_get_incReadDepth();

  constexpr int32_t const& __cordl_internal_get_incReadLeftEndPos() const;

  constexpr int32_t& __cordl_internal_get_incReadLeftEndPos();

  constexpr int32_t const& __cordl_internal_get_incReadLeftStartPos() const;

  constexpr int32_t& __cordl_internal_get_incReadLeftStartPos();

  constexpr ::System::Xml::LineInfo const& __cordl_internal_get_incReadLineInfo() const;

  constexpr ::System::Xml::LineInfo& __cordl_internal_get_incReadLineInfo();

  constexpr ::System::Xml::__XmlTextReaderImpl__IncrementalReadState const& __cordl_internal_get_incReadState() const;

  constexpr ::System::Xml::__XmlTextReaderImpl__IncrementalReadState& __cordl_internal_get_incReadState();

  constexpr int32_t const& __cordl_internal_get_index() const;

  constexpr int32_t& __cordl_internal_get_index();

  constexpr ::System::Xml::IDtdEntityInfo*& __cordl_internal_get_lastEntity();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::IDtdEntityInfo*> const& __cordl_internal_get_lastEntity() const;

  constexpr ::StringW const& __cordl_internal_get_lastPrefix() const;

  constexpr ::StringW& __cordl_internal_get_lastPrefix();

  constexpr ::System::Xml::__XmlTextReaderImpl__LaterInitParam*& __cordl_internal_get_laterInitParam();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::__XmlTextReaderImpl__LaterInitParam*> const& __cordl_internal_get_laterInitParam() const;

  constexpr int32_t const& __cordl_internal_get_lineNumberOffset() const;

  constexpr int32_t& __cordl_internal_get_lineNumberOffset();

  constexpr int32_t const& __cordl_internal_get_linePositionOffset() const;

  constexpr int32_t& __cordl_internal_get_linePositionOffset();

  constexpr int64_t const& __cordl_internal_get_maxCharactersFromEntities() const;

  constexpr int64_t& __cordl_internal_get_maxCharactersFromEntities();

  constexpr int64_t const& __cordl_internal_get_maxCharactersInDocument() const;

  constexpr int64_t& __cordl_internal_get_maxCharactersInDocument();

  constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get_nameTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& __cordl_internal_get_nameTable() const;

  constexpr bool const& __cordl_internal_get_nameTableFromSettings() const;

  constexpr bool& __cordl_internal_get_nameTableFromSettings();

  constexpr ::System::Xml::XmlNamespaceManager*& __cordl_internal_get_namespaceManager();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNamespaceManager*> const& __cordl_internal_get_namespaceManager() const;

  constexpr int32_t const& __cordl_internal_get_nextEntityId() const;

  constexpr int32_t& __cordl_internal_get_nextEntityId();

  constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction const& __cordl_internal_get_nextNextParsingFunction() const;

  constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction& __cordl_internal_get_nextNextParsingFunction();

  constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction const& __cordl_internal_get_nextParsingFunction() const;

  constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction& __cordl_internal_get_nextParsingFunction();

  constexpr ::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*> const& __cordl_internal_get_nodes() const;

  constexpr ::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*>& __cordl_internal_get_nodes();

  constexpr bool const& __cordl_internal_get_normalize() const;

  constexpr bool& __cordl_internal_get_normalize();

  constexpr ::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate*& __cordl_internal_get_onDefaultAttributeUse();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate*> const& __cordl_internal_get_onDefaultAttributeUse() const;

  constexpr ::System::Xml::XmlReader*& __cordl_internal_get_outerReader();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlReader*> const& __cordl_internal_get_outerReader() const;

  constexpr ::System::Threading::Tasks::Task_1<::System::Tuple_4<int32_t, int32_t, int32_t, bool>*>*& __cordl_internal_get_parseText_dummyTask();

  constexpr ::cordl_internals::to_const_pointer<::System::Threading::Tasks::Task_1<::System::Tuple_4<int32_t, int32_t, int32_t, bool>*>*> const& __cordl_internal_get_parseText_dummyTask() const;

  constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction const& __cordl_internal_get_parsingFunction() const;

  constexpr ::System::Xml::__XmlTextReaderImpl__ParsingFunction& __cordl_internal_get_parsingFunction();

  constexpr ::System::Xml::__XmlTextReaderImpl__ParsingMode const& __cordl_internal_get_parsingMode() const;

  constexpr ::System::Xml::__XmlTextReaderImpl__ParsingMode& __cordl_internal_get_parsingMode();

  constexpr ::ArrayW<::System::Xml::__XmlTextReaderImpl__ParsingState, ::Array<::System::Xml::__XmlTextReaderImpl__ParsingState>*> const& __cordl_internal_get_parsingStatesStack() const;

  constexpr ::ArrayW<::System::Xml::__XmlTextReaderImpl__ParsingState, ::Array<::System::Xml::__XmlTextReaderImpl__ParsingState>*>& __cordl_internal_get_parsingStatesStack();

  constexpr int32_t const& __cordl_internal_get_parsingStatesStackTop() const;

  constexpr int32_t& __cordl_internal_get_parsingStatesStackTop();

  constexpr ::System::Xml::__XmlTextReaderImpl__ParsingState const& __cordl_internal_get_ps() const;

  constexpr ::System::Xml::__XmlTextReaderImpl__ParsingState& __cordl_internal_get_ps();

  constexpr ::System::Xml::ReadState const& __cordl_internal_get_readState() const;

  constexpr ::System::Xml::ReadState& __cordl_internal_get_readState();

  constexpr int32_t const& __cordl_internal_get_readValueOffset() const;

  constexpr int32_t& __cordl_internal_get_readValueOffset();

  constexpr ::StringW const& __cordl_internal_get_reportedBaseUri() const;

  constexpr ::StringW& __cordl_internal_get_reportedBaseUri();

  constexpr ::System::Text::Encoding*& __cordl_internal_get_reportedEncoding();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __cordl_internal_get_reportedEncoding() const;

  constexpr bool const& __cordl_internal_get_rootElementParsed() const;

  constexpr bool& __cordl_internal_get_rootElementParsed();

  constexpr bool const& __cordl_internal_get_standalone() const;

  constexpr bool& __cordl_internal_get_standalone();

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get_stringBuilder();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::StringBuilder*> const& __cordl_internal_get_stringBuilder() const;

  constexpr bool const& __cordl_internal_get_supportNamespaces() const;

  constexpr bool& __cordl_internal_get_supportNamespaces();

  constexpr ::StringW const& __cordl_internal_get_url() const;

  constexpr ::StringW& __cordl_internal_get_url();

  constexpr bool const& __cordl_internal_get_v1Compat() const;

  constexpr bool& __cordl_internal_get_v1Compat();

  constexpr bool const& __cordl_internal_get_validatingReaderCompatFlag() const;

  constexpr bool& __cordl_internal_get_validatingReaderCompatFlag();

  constexpr ::System::Xml::IValidationEventHandling*& __cordl_internal_get_validationEventHandling();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::IValidationEventHandling*> const& __cordl_internal_get_validationEventHandling() const;

  constexpr ::System::Xml::WhitespaceHandling const& __cordl_internal_get_whitespaceHandling() const;

  constexpr ::System::Xml::WhitespaceHandling& __cordl_internal_get_whitespaceHandling();

  constexpr ::System::Xml::XmlCharType const& __cordl_internal_get_xmlCharType() const;

  constexpr ::System::Xml::XmlCharType& __cordl_internal_get_xmlCharType();

  constexpr ::System::Xml::__XmlTextReaderImpl__XmlContext*& __cordl_internal_get_xmlContext();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::__XmlTextReaderImpl__XmlContext*> const& __cordl_internal_get_xmlContext() const;

  constexpr ::System::Xml::XmlResolver*& __cordl_internal_get_xmlResolver();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlResolver*> const& __cordl_internal_get_xmlResolver() const;

  constexpr bool const& __cordl_internal_get_xmlResolverIsSet() const;

  constexpr bool& __cordl_internal_get_xmlResolverIsSet();

  constexpr void __cordl_internal_set_Xml(::StringW value);

  constexpr void __cordl_internal_set_XmlNs(::StringW value);

  constexpr void __cordl_internal_set_addDefaultAttributesAndNormalize(bool value);

  constexpr void __cordl_internal_set_afterResetState(bool value);

  constexpr void __cordl_internal_set_attrCount(int32_t value);

  constexpr void __cordl_internal_set_attrDuplSortingArray(::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*> value);

  constexpr void __cordl_internal_set_attrDuplWalkCount(int32_t value);

  constexpr void __cordl_internal_set_attrHashtable(int32_t value);

  constexpr void __cordl_internal_set_attrNeedNamespaceLookup(bool value);

  constexpr void __cordl_internal_set_attributeValueBaseEntityId(int32_t value);

  constexpr void __cordl_internal_set_charactersFromEntities(int64_t value);

  constexpr void __cordl_internal_set_charactersInDocument(int64_t value);

  constexpr void __cordl_internal_set_checkCharacters(bool value);

  constexpr void __cordl_internal_set_closeInput(bool value);

  constexpr void __cordl_internal_set_curAttrIndex(int32_t value);

  constexpr void __cordl_internal_set_curNode(::System::Xml::__XmlTextReaderImpl__NodeData* value);

  constexpr void __cordl_internal_set_currentEntities(::System::Collections::Generic::Dictionary_2<::System::Xml::IDtdEntityInfo*, ::System::Xml::IDtdEntityInfo*>* value);

  constexpr void __cordl_internal_set_disableUndeclaredEntityCheck(bool value);

  constexpr void __cordl_internal_set_documentStartBytePos(int32_t value);

  constexpr void __cordl_internal_set_dtdInfo(::System::Xml::IDtdInfo* value);

  constexpr void __cordl_internal_set_dtdProcessing(::System::Xml::DtdProcessing value);

  constexpr void __cordl_internal_set_emptyEntityInAttributeResolved(bool value);

  constexpr void __cordl_internal_set_entityHandling(::System::Xml::EntityHandling value);

  constexpr void __cordl_internal_set_fragment(bool value);

  constexpr void __cordl_internal_set_fragmentParserContext(::System::Xml::XmlParserContext* value);

  constexpr void __cordl_internal_set_fragmentType(::System::Xml::XmlNodeType value);

  constexpr void __cordl_internal_set_fullAttrCleanup(bool value);

  constexpr void __cordl_internal_set_ignoreComments(bool value);

  constexpr void __cordl_internal_set_ignorePIs(bool value);

  constexpr void __cordl_internal_set_incReadDecoder(::System::Xml::IncrementalReadDecoder* value);

  constexpr void __cordl_internal_set_incReadDepth(int32_t value);

  constexpr void __cordl_internal_set_incReadLeftEndPos(int32_t value);

  constexpr void __cordl_internal_set_incReadLeftStartPos(int32_t value);

  constexpr void __cordl_internal_set_incReadLineInfo(::System::Xml::LineInfo value);

  constexpr void __cordl_internal_set_incReadState(::System::Xml::__XmlTextReaderImpl__IncrementalReadState value);

  constexpr void __cordl_internal_set_index(int32_t value);

  constexpr void __cordl_internal_set_lastEntity(::System::Xml::IDtdEntityInfo* value);

  constexpr void __cordl_internal_set_lastPrefix(::StringW value);

  constexpr void __cordl_internal_set_laterInitParam(::System::Xml::__XmlTextReaderImpl__LaterInitParam* value);

  constexpr void __cordl_internal_set_lineNumberOffset(int32_t value);

  constexpr void __cordl_internal_set_linePositionOffset(int32_t value);

  constexpr void __cordl_internal_set_maxCharactersFromEntities(int64_t value);

  constexpr void __cordl_internal_set_maxCharactersInDocument(int64_t value);

  constexpr void __cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value);

  constexpr void __cordl_internal_set_nameTableFromSettings(bool value);

  constexpr void __cordl_internal_set_namespaceManager(::System::Xml::XmlNamespaceManager* value);

  constexpr void __cordl_internal_set_nextEntityId(int32_t value);

  constexpr void __cordl_internal_set_nextNextParsingFunction(::System::Xml::__XmlTextReaderImpl__ParsingFunction value);

  constexpr void __cordl_internal_set_nextParsingFunction(::System::Xml::__XmlTextReaderImpl__ParsingFunction value);

  constexpr void __cordl_internal_set_nodes(::ArrayW<::System::Xml::__XmlTextReaderImpl__NodeData*, ::Array<::System::Xml::__XmlTextReaderImpl__NodeData*>*> value);

  constexpr void __cordl_internal_set_normalize(bool value);

  constexpr void __cordl_internal_set_onDefaultAttributeUse(::System::Xml::__XmlTextReaderImpl__OnDefaultAttributeUseDelegate* value);

  constexpr void __cordl_internal_set_outerReader(::System::Xml::XmlReader* value);

  constexpr void __cordl_internal_set_parseText_dummyTask(::System::Threading::Tasks::Task_1<::System::Tuple_4<int32_t, int32_t, int32_t, bool>*>* value);

  constexpr void __cordl_internal_set_parsingFunction(::System::Xml::__XmlTextReaderImpl__ParsingFunction value);

  constexpr void __cordl_internal_set_parsingMode(::System::Xml::__XmlTextReaderImpl__ParsingMode value);

  constexpr void __cordl_internal_set_parsingStatesStack(::ArrayW<::System::Xml::__XmlTextReaderImpl__ParsingState, ::Array<::System::Xml::__XmlTextReaderImpl__ParsingState>*> value);

  constexpr void __cordl_internal_set_parsingStatesStackTop(int32_t value);

  constexpr void __cordl_internal_set_ps(::System::Xml::__XmlTextReaderImpl__ParsingState value);

  constexpr void __cordl_internal_set_readState(::System::Xml::ReadState value);

  constexpr void __cordl_internal_set_readValueOffset(int32_t value);

  constexpr void __cordl_internal_set_reportedBaseUri(::StringW value);

  constexpr void __cordl_internal_set_reportedEncoding(::System::Text::Encoding* value);

  constexpr void __cordl_internal_set_rootElementParsed(bool value);

  constexpr void __cordl_internal_set_standalone(bool value);

  constexpr void __cordl_internal_set_stringBuilder(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set_supportNamespaces(bool value);

  constexpr void __cordl_internal_set_url(::StringW value);

  constexpr void __cordl_internal_set_v1Compat(bool value);

  constexpr void __cordl_internal_set_validatingReaderCompatFlag(bool value);

  constexpr void __cordl_internal_set_validationEventHandling(::System::Xml::IValidationEventHandling* value);

  constexpr void __cordl_internal_set_whitespaceHandling(::System::Xml::WhitespaceHandling value);

  constexpr void __cordl_internal_set_xmlCharType(::System::Xml::XmlCharType value);

  constexpr void __cordl_internal_set_xmlContext(::System::Xml::__XmlTextReaderImpl__XmlContext* value);

  constexpr void __cordl_internal_set_xmlResolver(::System::Xml::XmlResolver* value);

  constexpr void __cordl_internal_set_xmlResolverIsSet(bool value);

  /// @brief Method .ctor, addr 0x294b900, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::IO::TextReader* input, ::System::Xml::XmlNameTable* nt);

  /// @brief Method .ctor, addr 0x294b58c, size 0x374, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNameTable* nt);

  /// @brief Method .ctor, addr 0x294b968, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::StringW url, ::System::IO::TextReader* input, ::System::Xml::XmlNameTable* nt);

  /// @brief Method .ctor, addr 0x294be08, size 0x138, virtual false, abstract: false, final false
  inline void _ctor(::StringW xmlFragment, ::System::Xml::XmlParserContext* context);

  /// @brief Method .ctor, addr 0x294ba44, size 0x10c, virtual false, abstract: false, final false
  inline void _ctor(::StringW xmlFragment, ::System::Xml::XmlNodeType fragType, ::System::Xml::XmlParserContext* context);

  /// @brief Method get_BaseURI, addr 0x294c9e8, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_BaseURI();

  /// @brief Method get_CanResolveEntity, addr 0x294ca38, size 0x8, virtual true, abstract: false, final false
  inline bool get_CanResolveEntity();

  /// @brief Method get_DtdInfo, addr 0x295c0f0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::IDtdInfo* get_DtdInfo();

  /// @brief Method get_DtdParserProxy_BaseUri, addr 0x29502e0, size 0xa4, virtual false, abstract: false, final false
  inline ::System::Uri* get_DtdParserProxy_BaseUri();

  /// @brief Method get_DtdParserProxy_CurrentPosition, addr 0x295039c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_DtdParserProxy_CurrentPosition();

  /// @brief Method get_DtdParserProxy_DtdValidation, addr 0x29502a8, size 0x10, virtual false, abstract: false, final false
  inline bool get_DtdParserProxy_DtdValidation();

  /// @brief Method get_DtdParserProxy_EntityStackLength, addr 0x29503ac, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_DtdParserProxy_EntityStackLength();

  /// @brief Method get_DtdParserProxy_IsEntityEolNormalized, addr 0x29503b8, size 0x8, virtual false, abstract: false, final false
  inline bool get_DtdParserProxy_IsEntityEolNormalized();

  /// @brief Method get_DtdParserProxy_IsEof, addr 0x2950384, size 0x8, virtual false, abstract: false, final false
  inline bool get_DtdParserProxy_IsEof();

  /// @brief Method get_DtdParserProxy_LineNo, addr 0x29503f0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_DtdParserProxy_LineNo();

  /// @brief Method get_DtdParserProxy_LineStartPosition, addr 0x29503f8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_DtdParserProxy_LineStartPosition();

  /// @brief Method get_DtdParserProxy_NameTable, addr 0x2950298, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_DtdParserProxy_NameTable();

  /// @brief Method get_DtdParserProxy_NamespaceResolver, addr 0x29502a0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::IXmlNamespaceResolver* get_DtdParserProxy_NamespaceResolver();

  /// @brief Method get_DtdParserProxy_Namespaces, addr 0x29502d0, size 0x8, virtual false, abstract: false, final false
  inline bool get_DtdParserProxy_Namespaces();

  /// @brief Method get_DtdParserProxy_Normalization, addr 0x29502c8, size 0x8, virtual false, abstract: false, final false
  inline bool get_DtdParserProxy_Normalization();

  /// @brief Method get_DtdParserProxy_ParsingBuffer, addr 0x295038c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> get_DtdParserProxy_ParsingBuffer();

  /// @brief Method get_DtdParserProxy_ParsingBufferLength, addr 0x2950394, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_DtdParserProxy_ParsingBufferLength();

  /// @brief Method get_DtdParserProxy_V1CompatibilityMode, addr 0x29502d8, size 0x8, virtual false, abstract: false, final false
  inline bool get_DtdParserProxy_V1CompatibilityMode();

  /// @brief Method get_DtdParserProxy_ValidationEventHandling, addr 0x29503c0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::IValidationEventHandling* get_DtdParserProxy_ValidationEventHandling();

  /// @brief Method get_DtdValidation, addr 0x29502b8, size 0x10, virtual false, abstract: false, final false
  inline bool get_DtdValidation();

  /// @brief Method get_InAttributeValueIterator, addr 0x294cc9c, size 0x24, virtual false, abstract: false, final false
  inline bool get_InAttributeValueIterator();

  /// @brief Method get_InEntity, addr 0x2953ab4, size 0x10, virtual false, abstract: false, final false
  inline bool get_InEntity();

  /// @brief Method get_IsDefault, addr 0x294ca0c, size 0x1c, virtual true, abstract: false, final false
  inline bool get_IsDefault();

  /// @brief Method get_IsEmptyElement, addr 0x294c9f0, size 0x1c, virtual true, abstract: false, final false
  inline bool get_IsEmptyElement();

  /// @brief Method get_IsResolverNull, addr 0x29510a8, size 0x40, virtual false, abstract: false, final false
  inline bool get_IsResolverNull();

  /// @brief Method get_LocalName, addr 0x294c780, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0x294c75c, size 0x24, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NameTable, addr 0x294ca30, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method get_NamespaceURI, addr 0x294c79c, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_NamespaceURI();

  /// @brief Method get_NodeType, addr 0x294c740, size 0x1c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Prefix, addr 0x294c7b8, size 0x1c, virtual true, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_ReadState, addr 0x294ca28, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::ReadState get_ReadState();

  /// @brief Method get_Settings, addr 0x294c5e8, size 0x158, virtual true, abstract: false, final false
  inline ::System::Xml::XmlReaderSettings* get_Settings();

  /// @brief Method get_Value, addr 0x294c7d4, size 0x48, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
  constexpr ::System::Xml::IXmlNamespaceResolver* i___System__Xml__IXmlNamespaceResolver() noexcept;

  /// @brief Method set_DisableUndeclaredEntityCheck, addr 0x295c548, size 0xc, virtual false, abstract: false, final false
  inline void set_DisableUndeclaredEntityCheck(bool value);

  /// @brief Method set_DtdParserProxy_CurrentPosition, addr 0x29503a4, size 0x8, virtual false, abstract: false, final false
  inline void set_DtdParserProxy_CurrentPosition(int32_t value);

  /// @brief Method set_EntityHandling, addr 0x29501b4, size 0x88, virtual false, abstract: false, final false
  inline void set_EntityHandling(::System::Xml::EntityHandling value);

  /// @brief Method set_Namespaces, addr 0x294ffe4, size 0x1d0, virtual false, abstract: false, final false
  inline void set_Namespaces(bool value);

  /// @brief Method set_OuterReader, addr 0x294ff84, size 0x8, virtual false, abstract: false, final false
  inline void set_OuterReader(::System::Xml::XmlReader* value);

  /// @brief Method set_XmlResolver, addr 0x295023c, size 0x5c, virtual false, abstract: false, final false
  inline void set_XmlResolver(::System::Xml::XmlResolver* value);

  /// @brief Method set_XmlValidatingReaderCompatibilityMode, addr 0x295c22c, size 0xd8, virtual false, abstract: false, final false
  inline void set_XmlValidatingReaderCompatibilityMode(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlTextReaderImpl();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlTextReaderImpl", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlTextReaderImpl(XmlTextReaderImpl&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlTextReaderImpl", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlTextReaderImpl(XmlTextReaderImpl const&) = delete;

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
