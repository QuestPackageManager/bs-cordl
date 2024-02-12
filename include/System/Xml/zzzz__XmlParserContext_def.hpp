#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlParserContext)
namespace System::Text {
class Encoding;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlNamespaceManager;
}
namespace System::Xml {
struct XmlSpace;
}
// Forward declare root types
namespace System::Xml {
class XmlParserContext;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlParserContext);
// Type: System.Xml::XmlParserContext
// SizeInfo { instance_size: 96, native_size: -1, calculated_instance_size: 96, calculated_native_size: 96, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(11356))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11352))
// CS Name: ::System.Xml::XmlParserContext*
class CORDL_TYPE XmlParserContext : public ::System::Object {
public:
  // Declarations
  /// @brief Field _nt, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__nt, put = __cordl_internal_set__nt))::System::Xml::XmlNameTable* _nt;

  /// @brief Field _nsMgr, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__nsMgr, put = __cordl_internal_set__nsMgr))::System::Xml::XmlNamespaceManager* _nsMgr;

  /// @brief Field _docTypeName, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__docTypeName, put = __cordl_internal_set__docTypeName))::StringW _docTypeName;

  /// @brief Field _pubId, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__pubId, put = __cordl_internal_set__pubId))::StringW _pubId;

  /// @brief Field _sysId, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__sysId, put = __cordl_internal_set__sysId))::StringW _sysId;

  /// @brief Field _internalSubset, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__internalSubset, put = __cordl_internal_set__internalSubset))::StringW _internalSubset;

  /// @brief Field _xmlLang, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__xmlLang, put = __cordl_internal_set__xmlLang))::StringW _xmlLang;

  /// @brief Field _xmlSpace, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get__xmlSpace, put = __cordl_internal_set__xmlSpace))::System::Xml::XmlSpace _xmlSpace;

  /// @brief Field _baseURI, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__baseURI, put = __cordl_internal_set__baseURI))::StringW _baseURI;

  /// @brief Field _encoding, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__encoding, put = __cordl_internal_set__encoding))::System::Text::Encoding* _encoding;

  __declspec(property(get = get_NameTable))::System::Xml::XmlNameTable* NameTable;

  __declspec(property(get = get_NamespaceManager))::System::Xml::XmlNamespaceManager* NamespaceManager;

  __declspec(property(get = get_DocTypeName))::StringW DocTypeName;

  __declspec(property(get = get_PublicId))::StringW PublicId;

  __declspec(property(get = get_SystemId))::StringW SystemId;

  __declspec(property(get = get_BaseURI))::StringW BaseURI;

  __declspec(property(get = get_InternalSubset))::StringW InternalSubset;

  __declspec(property(get = get_XmlLang))::StringW XmlLang;

  __declspec(property(get = get_XmlSpace))::System::Xml::XmlSpace XmlSpace;

  __declspec(property(get = get_Encoding))::System::Text::Encoding* Encoding;

  __declspec(property(get = get_HasDtdInfo)) bool HasDtdInfo;

  constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get__nt();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& __cordl_internal_get__nt() const;

  constexpr void __cordl_internal_set__nt(::System::Xml::XmlNameTable* value);

  constexpr ::System::Xml::XmlNamespaceManager*& __cordl_internal_get__nsMgr();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNamespaceManager*> const& __cordl_internal_get__nsMgr() const;

  constexpr void __cordl_internal_set__nsMgr(::System::Xml::XmlNamespaceManager* value);

  constexpr ::StringW& __cordl_internal_get__docTypeName();

  constexpr ::StringW const& __cordl_internal_get__docTypeName() const;

  constexpr void __cordl_internal_set__docTypeName(::StringW value);

  constexpr ::StringW& __cordl_internal_get__pubId();

  constexpr ::StringW const& __cordl_internal_get__pubId() const;

  constexpr void __cordl_internal_set__pubId(::StringW value);

  constexpr ::StringW& __cordl_internal_get__sysId();

  constexpr ::StringW const& __cordl_internal_get__sysId() const;

  constexpr void __cordl_internal_set__sysId(::StringW value);

  constexpr ::StringW& __cordl_internal_get__internalSubset();

  constexpr ::StringW const& __cordl_internal_get__internalSubset() const;

  constexpr void __cordl_internal_set__internalSubset(::StringW value);

  constexpr ::StringW& __cordl_internal_get__xmlLang();

  constexpr ::StringW const& __cordl_internal_get__xmlLang() const;

  constexpr void __cordl_internal_set__xmlLang(::StringW value);

  constexpr ::System::Xml::XmlSpace& __cordl_internal_get__xmlSpace();

  constexpr ::System::Xml::XmlSpace const& __cordl_internal_get__xmlSpace() const;

  constexpr void __cordl_internal_set__xmlSpace(::System::Xml::XmlSpace value);

  constexpr ::StringW& __cordl_internal_get__baseURI();

  constexpr ::StringW const& __cordl_internal_get__baseURI() const;

  constexpr void __cordl_internal_set__baseURI(::StringW value);

  constexpr ::System::Text::Encoding*& __cordl_internal_get__encoding();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::Encoding*> const& __cordl_internal_get__encoding() const;

  constexpr void __cordl_internal_set__encoding(::System::Text::Encoding* value);

  static inline ::System::Xml::XmlParserContext* New_ctor(::System::Xml::XmlNameTable* nt, ::System::Xml::XmlNamespaceManager* nsMgr, ::StringW docTypeName, ::StringW pubId, ::StringW sysId,
                                                          ::StringW internalSubset, ::StringW baseURI, ::StringW xmlLang, ::System::Xml::XmlSpace xmlSpace);

  /// @brief Method .ctor, addr 0x285cc58, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNameTable* nt, ::System::Xml::XmlNamespaceManager* nsMgr, ::StringW docTypeName, ::StringW pubId, ::StringW sysId, ::StringW internalSubset, ::StringW baseURI,
                    ::StringW xmlLang, ::System::Xml::XmlSpace xmlSpace);

  static inline ::System::Xml::XmlParserContext* New_ctor(::System::Xml::XmlNameTable* nt, ::System::Xml::XmlNamespaceManager* nsMgr, ::StringW docTypeName, ::StringW pubId, ::StringW sysId,
                                                          ::StringW internalSubset, ::StringW baseURI, ::StringW xmlLang, ::System::Xml::XmlSpace xmlSpace, ::System::Text::Encoding* enc);

  /// @brief Method .ctor, addr 0x285cc84, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNameTable* nt, ::System::Xml::XmlNamespaceManager* nsMgr, ::StringW docTypeName, ::StringW pubId, ::StringW sysId, ::StringW internalSubset, ::StringW baseURI,
                    ::StringW xmlLang, ::System::Xml::XmlSpace xmlSpace, ::System::Text::Encoding* enc);

  /// @brief Method get_NameTable, addr 0x285ce40, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Method get_NamespaceManager, addr 0x285ce48, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNamespaceManager* get_NamespaceManager();

  /// @brief Method get_DocTypeName, addr 0x285ce50, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_DocTypeName();

  /// @brief Method get_PublicId, addr 0x285ce58, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_PublicId();

  /// @brief Method get_SystemId, addr 0x285ce60, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_SystemId();

  /// @brief Method get_BaseURI, addr 0x285ce68, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_BaseURI();

  /// @brief Method get_InternalSubset, addr 0x285ce70, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_InternalSubset();

  /// @brief Method get_XmlLang, addr 0x285ce78, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_XmlLang();

  /// @brief Method get_XmlSpace, addr 0x285ce80, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlSpace get_XmlSpace();

  /// @brief Method get_Encoding, addr 0x285ce88, size 0x8, virtual false, abstract: false, final false
  inline ::System::Text::Encoding* get_Encoding();

  /// @brief Method get_HasDtdInfo, addr 0x285ce90, size 0x9c, virtual false, abstract: false, final false
  inline bool get_HasDtdInfo();

  // Ctor Parameters [CppParam { name: "", ty: "XmlParserContext", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlParserContext(XmlParserContext&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlParserContext", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlParserContext(XmlParserContext const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlParserContext();

public:
  /// @brief Field _nt, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlNameTable* ____nt;

  /// @brief Field _nsMgr, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlNamespaceManager* ____nsMgr;

  /// @brief Field _docTypeName, offset: 0x20, size: 0x8, def value: None
  ::StringW ____docTypeName;

  /// @brief Field _pubId, offset: 0x28, size: 0x8, def value: None
  ::StringW ____pubId;

  /// @brief Field _sysId, offset: 0x30, size: 0x8, def value: None
  ::StringW ____sysId;

  /// @brief Field _internalSubset, offset: 0x38, size: 0x8, def value: None
  ::StringW ____internalSubset;

  /// @brief Field _xmlLang, offset: 0x40, size: 0x8, def value: None
  ::StringW ____xmlLang;

  /// @brief Field _xmlSpace, offset: 0x48, size: 0x4, def value: None
  ::System::Xml::XmlSpace ____xmlSpace;

  /// @brief Field _baseURI, offset: 0x50, size: 0x8, def value: None
  ::StringW ____baseURI;

  /// @brief Field _encoding, offset: 0x58, size: 0x8, def value: None
  ::System::Text::Encoding* ____encoding;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlParserContext, 0x60>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlParserContext, ____nt) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlParserContext, ____nsMgr) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlParserContext, ____docTypeName) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlParserContext, ____pubId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlParserContext, ____sysId) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlParserContext, ____internalSubset) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlParserContext, ____xmlLang) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlParserContext, ____xmlSpace) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlParserContext, ____baseURI) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlParserContext, ____encoding) == 0x58, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlParserContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlParserContext*, "System.Xml", "XmlParserContext");
