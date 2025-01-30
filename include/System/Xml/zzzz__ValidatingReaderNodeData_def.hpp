#pragma once
// IWYU pragma private; include "System/Xml/ValidatingReaderNodeData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlNodeType_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ValidatingReaderNodeData)
namespace System::Xml {
class AttributePSVIInfo;
}
namespace System::Xml {
class IXmlLineInfo;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
struct XmlNodeType;
}
// Forward declare root types
namespace System::Xml {
class ValidatingReaderNodeData;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::ValidatingReaderNodeData);
// Dependencies System.Object, System.Xml.XmlNodeType
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.ValidatingReaderNodeData
class CORDL_TYPE ValidatingReaderNodeData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AttInfo, put = set_AttInfo)) ::System::Xml::AttributePSVIInfo* AttInfo;

  __declspec(property(get = get_Depth, put = set_Depth)) int32_t Depth;

  __declspec(property(get = get_LineNumber)) int32_t LineNumber;

  __declspec(property(get = get_LinePosition)) int32_t LinePosition;

  __declspec(property(get = get_LocalName, put = set_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_Namespace, put = set_Namespace)) ::StringW Namespace;

  __declspec(property(get = get_NodeType, put = set_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_OriginalStringValue)) ::StringW OriginalStringValue;

  __declspec(property(get = get_Prefix, put = set_Prefix)) ::StringW Prefix;

  __declspec(property(get = get_RawValue, put = set_RawValue)) ::StringW RawValue;

  /// @brief Field attributePSVIInfo, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_attributePSVIInfo, put = __cordl_internal_set_attributePSVIInfo)) ::System::Xml::AttributePSVIInfo* attributePSVIInfo;

  /// @brief Field depth, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) int32_t depth;

  /// @brief Field lineNo, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_lineNo, put = __cordl_internal_set_lineNo)) int32_t lineNo;

  /// @brief Field linePos, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get_linePos, put = __cordl_internal_set_linePos)) int32_t linePos;

  /// @brief Field localName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_localName, put = __cordl_internal_set_localName)) ::StringW localName;

  /// @brief Field nameWPrefix, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_nameWPrefix, put = __cordl_internal_set_nameWPrefix)) ::StringW nameWPrefix;

  /// @brief Field namespaceUri, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_namespaceUri, put = __cordl_internal_set_namespaceUri)) ::StringW namespaceUri;

  /// @brief Field nodeType, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_nodeType, put = __cordl_internal_set_nodeType)) ::System::Xml::XmlNodeType nodeType;

  /// @brief Field originalStringValue, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_originalStringValue, put = __cordl_internal_set_originalStringValue)) ::StringW originalStringValue;

  /// @brief Field prefix, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_prefix, put = __cordl_internal_set_prefix)) ::StringW prefix;

  /// @brief Field rawValue, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_rawValue, put = __cordl_internal_set_rawValue)) ::StringW rawValue;

  /// @brief Method Clear, addr 0x430eaa0, size 0x80, virtual false, abstract: false, final false
  inline void Clear(::System::Xml::XmlNodeType nodeType);

  /// @brief Method GetAtomizedNameWPrefix, addr 0x430eb7c, size 0x94, virtual false, abstract: false, final false
  inline ::StringW GetAtomizedNameWPrefix(::System::Xml::XmlNameTable* nameTable);

  static inline ::System::Xml::ValidatingReaderNodeData* New_ctor();

  static inline ::System::Xml::ValidatingReaderNodeData* New_ctor(::System::Xml::XmlNodeType nodeType);

  /// @brief Method SetItemData, addr 0x430ed78, size 0x7c, virtual false, abstract: false, final false
  inline void SetItemData(::StringW localName, ::StringW prefix, ::StringW ns, int32_t depth);

  /// @brief Method SetItemData, addr 0x430edf4, size 0x8, virtual false, abstract: false, final false
  inline void SetItemData(::StringW value);

  /// @brief Method SetItemData, addr 0x430edfc, size 0x8, virtual false, abstract: false, final false
  inline void SetItemData(::StringW value, ::StringW originalStringValue);

  /// @brief Method SetLineInfo, addr 0x430ec70, size 0x108, virtual false, abstract: false, final false
  inline void SetLineInfo(::System::Xml::IXmlLineInfo* lineInfo);

  /// @brief Method SetLineInfo, addr 0x430ec68, size 0x8, virtual false, abstract: false, final false
  inline void SetLineInfo(int32_t lineNo, int32_t linePos);

  constexpr ::System::Xml::AttributePSVIInfo* const& __cordl_internal_get_attributePSVIInfo() const;

  constexpr ::System::Xml::AttributePSVIInfo*& __cordl_internal_get_attributePSVIInfo();

  constexpr int32_t const& __cordl_internal_get_depth() const;

  constexpr int32_t& __cordl_internal_get_depth();

  constexpr int32_t const& __cordl_internal_get_lineNo() const;

  constexpr int32_t& __cordl_internal_get_lineNo();

  constexpr int32_t const& __cordl_internal_get_linePos() const;

  constexpr int32_t& __cordl_internal_get_linePos();

  constexpr ::StringW const& __cordl_internal_get_localName() const;

  constexpr ::StringW& __cordl_internal_get_localName();

  constexpr ::StringW const& __cordl_internal_get_nameWPrefix() const;

  constexpr ::StringW& __cordl_internal_get_nameWPrefix();

  constexpr ::StringW const& __cordl_internal_get_namespaceUri() const;

  constexpr ::StringW& __cordl_internal_get_namespaceUri();

  constexpr ::System::Xml::XmlNodeType const& __cordl_internal_get_nodeType() const;

  constexpr ::System::Xml::XmlNodeType& __cordl_internal_get_nodeType();

  constexpr ::StringW const& __cordl_internal_get_originalStringValue() const;

  constexpr ::StringW& __cordl_internal_get_originalStringValue();

  constexpr ::StringW const& __cordl_internal_get_prefix() const;

  constexpr ::StringW& __cordl_internal_get_prefix();

  constexpr ::StringW const& __cordl_internal_get_rawValue() const;

  constexpr ::StringW& __cordl_internal_get_rawValue();

  constexpr void __cordl_internal_set_attributePSVIInfo(::System::Xml::AttributePSVIInfo* value);

  constexpr void __cordl_internal_set_depth(int32_t value);

  constexpr void __cordl_internal_set_lineNo(int32_t value);

  constexpr void __cordl_internal_set_linePos(int32_t value);

  constexpr void __cordl_internal_set_localName(::StringW value);

  constexpr void __cordl_internal_set_nameWPrefix(::StringW value);

  constexpr void __cordl_internal_set_namespaceUri(::StringW value);

  constexpr void __cordl_internal_set_nodeType(::System::Xml::XmlNodeType value);

  constexpr void __cordl_internal_set_originalStringValue(::StringW value);

  constexpr void __cordl_internal_set_prefix(::StringW value);

  constexpr void __cordl_internal_set_rawValue(::StringW value);

  /// @brief Method .ctor, addr 0x430ea80, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x430eb20, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNodeType nodeType);

  /// @brief Method get_AttInfo, addr 0x430ec48, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::AttributePSVIInfo* get_AttInfo();

  /// @brief Method get_Depth, addr 0x430ec10, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Depth();

  /// @brief Method get_LineNumber, addr 0x430ec58, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LineNumber();

  /// @brief Method get_LinePosition, addr 0x430ec60, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_LinePosition();

  /// @brief Method get_LocalName, addr 0x430eb4c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Namespace, addr 0x430eb5c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Namespace();

  /// @brief Method get_NodeType, addr 0x430ec38, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_OriginalStringValue, addr 0x430ec30, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_OriginalStringValue();

  /// @brief Method get_Prefix, addr 0x430eb6c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_RawValue, addr 0x430ec20, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_RawValue();

  /// @brief Method set_AttInfo, addr 0x430ec50, size 0x8, virtual false, abstract: false, final false
  inline void set_AttInfo(::System::Xml::AttributePSVIInfo* value);

  /// @brief Method set_Depth, addr 0x430ec18, size 0x8, virtual false, abstract: false, final false
  inline void set_Depth(int32_t value);

  /// @brief Method set_LocalName, addr 0x430eb54, size 0x8, virtual false, abstract: false, final false
  inline void set_LocalName(::StringW value);

  /// @brief Method set_Namespace, addr 0x430eb64, size 0x8, virtual false, abstract: false, final false
  inline void set_Namespace(::StringW value);

  /// @brief Method set_NodeType, addr 0x430ec40, size 0x8, virtual false, abstract: false, final false
  inline void set_NodeType(::System::Xml::XmlNodeType value);

  /// @brief Method set_Prefix, addr 0x430eb74, size 0x8, virtual false, abstract: false, final false
  inline void set_Prefix(::StringW value);

  /// @brief Method set_RawValue, addr 0x430ec28, size 0x8, virtual false, abstract: false, final false
  inline void set_RawValue(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValidatingReaderNodeData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValidatingReaderNodeData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValidatingReaderNodeData(ValidatingReaderNodeData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValidatingReaderNodeData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValidatingReaderNodeData(ValidatingReaderNodeData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7208 };

  /// @brief Field localName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___localName;

  /// @brief Field namespaceUri, offset: 0x18, size: 0x8, def value: None
  ::StringW ___namespaceUri;

  /// @brief Field prefix, offset: 0x20, size: 0x8, def value: None
  ::StringW ___prefix;

  /// @brief Field nameWPrefix, offset: 0x28, size: 0x8, def value: None
  ::StringW ___nameWPrefix;

  /// @brief Field rawValue, offset: 0x30, size: 0x8, def value: None
  ::StringW ___rawValue;

  /// @brief Field originalStringValue, offset: 0x38, size: 0x8, def value: None
  ::StringW ___originalStringValue;

  /// @brief Field depth, offset: 0x40, size: 0x4, def value: None
  int32_t ___depth;

  /// @brief Field attributePSVIInfo, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::AttributePSVIInfo* ___attributePSVIInfo;

  /// @brief Field nodeType, offset: 0x50, size: 0x4, def value: None
  ::System::Xml::XmlNodeType ___nodeType;

  /// @brief Field lineNo, offset: 0x54, size: 0x4, def value: None
  int32_t ___lineNo;

  /// @brief Field linePos, offset: 0x58, size: 0x4, def value: None
  int32_t ___linePos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::ValidatingReaderNodeData, ___localName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ValidatingReaderNodeData, ___namespaceUri) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ValidatingReaderNodeData, ___prefix) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ValidatingReaderNodeData, ___nameWPrefix) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ValidatingReaderNodeData, ___rawValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ValidatingReaderNodeData, ___originalStringValue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ValidatingReaderNodeData, ___depth) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ValidatingReaderNodeData, ___attributePSVIInfo) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ValidatingReaderNodeData, ___nodeType) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ValidatingReaderNodeData, ___lineNo) == 0x54, "Offset mismatch!");

static_assert(offsetof(::System::Xml::ValidatingReaderNodeData, ___linePos) == 0x58, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::ValidatingReaderNodeData, 0x60>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::ValidatingReaderNodeData);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::ValidatingReaderNodeData*, "System.Xml", "ValidatingReaderNodeData");
