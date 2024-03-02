#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IDtdParserAdapter)
namespace System::Text {
class StringBuilder;
}
namespace System::Xml {
class IDtdEntityInfo;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
struct LineInfo;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System {
class Exception;
}
namespace System {
class Uri;
}
// Forward declare root types
namespace System::Xml {
class IDtdParserAdapter;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::IDtdParserAdapter);
// Type: System.Xml::IDtdParserAdapter
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::IDtdParserAdapter*
class CORDL_TYPE IDtdParserAdapter {
public:
  // Declarations
  __declspec(property(get = get_BaseUri))::System::Uri* BaseUri;

  __declspec(property(get = get_CurrentPosition, put = set_CurrentPosition)) int32_t CurrentPosition;

  __declspec(property(get = get_EntityStackLength)) int32_t EntityStackLength;

  __declspec(property(get = get_IsEntityEolNormalized)) bool IsEntityEolNormalized;

  __declspec(property(get = get_IsEof)) bool IsEof;

  __declspec(property(get = get_LineNo)) int32_t LineNo;

  __declspec(property(get = get_LineStartPosition)) int32_t LineStartPosition;

  __declspec(property(get = get_NameTable))::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = get_NamespaceResolver))::System::Xml::IXmlNamespaceResolver* NamespaceResolver;

  __declspec(property(get = get_ParsingBuffer))::ArrayW<char16_t, ::Array<char16_t>*> ParsingBuffer;

  __declspec(property(get = get_ParsingBufferLength)) int32_t ParsingBufferLength;

  /// @brief Method OnNewLine, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnNewLine(int32_t pos);

  /// @brief Method OnPublicId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnPublicId(::StringW publicId, ::System::Xml::LineInfo keywordLineInfo, ::System::Xml::LineInfo publicLiteralLineInfo);

  /// @brief Method OnSystemId, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void OnSystemId(::StringW systemId, ::System::Xml::LineInfo keywordLineInfo, ::System::Xml::LineInfo systemLiteralLineInfo);

  /// @brief Method ParseComment, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ParseComment(::System::Text::StringBuilder* sb);

  /// @brief Method ParseNamedCharRef, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t ParseNamedCharRef(bool expand, ::System::Text::StringBuilder* internalSubsetBuilder);

  /// @brief Method ParseNumericCharRef, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t ParseNumericCharRef(::System::Text::StringBuilder* internalSubsetBuilder);

  /// @brief Method ParsePI, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void ParsePI(::System::Text::StringBuilder* sb);

  /// @brief Method PopEntity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool PopEntity(ByRef<::System::Xml::IDtdEntityInfo*> oldEntity, ByRef<int32_t> newEntityId);

  /// @brief Method PushEntity, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool PushEntity(::System::Xml::IDtdEntityInfo* entity, ByRef<int32_t> entityId);

  /// @brief Method PushExternalSubset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool PushExternalSubset(::StringW systemId, ::StringW publicId);

  /// @brief Method PushInternalDtd, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void PushInternalDtd(::StringW baseUri, ::StringW internalDtd);

  /// @brief Method ReadData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t ReadData();

  /// @brief Method Throw, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Throw(::System::Exception* e);

  /// @brief Method get_BaseUri, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Uri* get_BaseUri();

  /// @brief Method get_CurrentPosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_CurrentPosition();

  /// @brief Method get_EntityStackLength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_EntityStackLength();

  /// @brief Method get_IsEntityEolNormalized, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsEntityEolNormalized();

  /// @brief Method get_IsEof, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_IsEof();

  /// @brief Method get_LineNo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_LineNo();

  /// @brief Method get_LineStartPosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_LineStartPosition();

  /// @brief Method get_NameTable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method get_NamespaceResolver, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::IXmlNamespaceResolver* get_NamespaceResolver();

  /// @brief Method get_ParsingBuffer, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::ArrayW<char16_t, ::Array<char16_t>*> get_ParsingBuffer();

  /// @brief Method get_ParsingBufferLength, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_ParsingBufferLength();

  /// @brief Method set_CurrentPosition, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void set_CurrentPosition(int32_t value);

  // Ctor Parameters [CppParam { name: "", ty: "IDtdParserAdapter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDtdParserAdapter(IDtdParserAdapter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDtdParserAdapter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDtdParserAdapter(IDtdParserAdapter const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace System::Xml
NEED_NO_BOX(::System::Xml::IDtdParserAdapter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::IDtdParserAdapter*, "System.Xml", "IDtdParserAdapter");
