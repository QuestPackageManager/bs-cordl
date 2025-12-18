#pragma once
// IWYU pragma private; include "System/Xml/XmlBaseWriter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__WriteState_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryWriter_def.hpp"
#include "System/Xml/zzzz__XmlSpace_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlBaseWriter)
namespace System::IO {
class Stream;
}
namespace System::Text {
class BinHexEncoding;
}
namespace System::Xml {
class NamespaceManager_XmlBaseWriter_Namespace;
}
namespace System::Xml {
class NamespaceManager_XmlBaseWriter_XmlAttribute;
}
namespace System::Xml {
struct WriteState;
}
namespace System::Xml {
struct XmlBaseWriter_DocumentState;
}
namespace System::Xml {
class XmlBaseWriter_Element;
}
namespace System::Xml {
class XmlBaseWriter_NamespaceManager;
}
namespace System::Xml {
class XmlDictionaryString;
}
namespace System::Xml {
class XmlNodeWriter;
}
namespace System::Xml {
class XmlSigningNodeWriter;
}
namespace System::Xml {
struct XmlSpace;
}
namespace System::Xml {
class XmlStreamNodeWriter;
}
namespace System::Xml {
class XmlUTF8NodeWriter;
}
namespace System {
struct DateTime;
}
namespace System {
struct Decimal;
}
namespace System {
struct Guid;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Xml {
struct XmlBaseWriter_DocumentState;
}
namespace System::Xml {
class NamespaceManager_XmlBaseWriter_Namespace;
}
namespace System::Xml {
class NamespaceManager_XmlBaseWriter_XmlAttribute;
}
namespace System::Xml {
class XmlBaseWriter;
}
namespace System::Xml {
class XmlBaseWriter_Element;
}
namespace System::Xml {
class XmlBaseWriter_NamespaceManager;
}
// Write type traits
MARK_VAL_T(::System::Xml::XmlBaseWriter_DocumentState);
MARK_REF_PTR_T(::System::Xml::NamespaceManager_XmlBaseWriter_Namespace);
MARK_REF_PTR_T(::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute);
MARK_REF_PTR_T(::System::Xml::XmlBaseWriter);
MARK_REF_PTR_T(::System::Xml::XmlBaseWriter_Element);
MARK_REF_PTR_T(::System::Xml::XmlBaseWriter_NamespaceManager);
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseWriter/Element
class CORDL_TYPE XmlBaseWriter_Element : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_LocalName, put = set_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_Prefix, put = set_Prefix)) ::StringW Prefix;

  __declspec(property(get = get_PrefixId, put = set_PrefixId)) int32_t PrefixId;

  /// @brief Field localName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_localName, put = __cordl_internal_set_localName)) ::StringW localName;

  /// @brief Field prefix, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_prefix, put = __cordl_internal_set_prefix)) ::StringW prefix;

  /// @brief Field prefixId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_prefixId, put = __cordl_internal_set_prefixId)) int32_t prefixId;

  /// @brief Method Clear, addr 0x5f5ff24, size 0xc, virtual false, abstract: false, final false
  inline void Clear();

  static inline ::System::Xml::XmlBaseWriter_Element* New_ctor();

  constexpr ::StringW const& __cordl_internal_get_localName() const;

  constexpr ::StringW& __cordl_internal_get_localName();

  constexpr ::StringW const& __cordl_internal_get_prefix() const;

  constexpr ::StringW& __cordl_internal_get_prefix();

  constexpr int32_t const& __cordl_internal_get_prefixId() const;

  constexpr int32_t& __cordl_internal_get_prefixId();

  constexpr void __cordl_internal_set_localName(::StringW value);

  constexpr void __cordl_internal_set_prefix(::StringW value);

  constexpr void __cordl_internal_set_prefixId(int32_t value);

  /// @brief Method .ctor, addr 0x5f5ff30, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LocalName, addr 0x5f5ff04, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Prefix, addr 0x5f5fef4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_PrefixId, addr 0x5f5ff14, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_PrefixId();

  /// @brief Method set_LocalName, addr 0x5f5ff0c, size 0x8, virtual false, abstract: false, final false
  inline void set_LocalName(::StringW value);

  /// @brief Method set_Prefix, addr 0x5f5fefc, size 0x8, virtual false, abstract: false, final false
  inline void set_Prefix(::StringW value);

  /// @brief Method set_PrefixId, addr 0x5f5ff1c, size 0x8, virtual false, abstract: false, final false
  inline void set_PrefixId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseWriter_Element();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseWriter_Element", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBaseWriter_Element(XmlBaseWriter_Element&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseWriter_Element", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBaseWriter_Element(XmlBaseWriter_Element const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16932 };

  /// @brief Field prefix, offset: 0x10, size: 0x8, def value: None
  ::StringW ___prefix;

  /// @brief Field localName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___localName;

  /// @brief Field prefixId, offset: 0x20, size: 0x4, def value: None
  int32_t ___prefixId;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlBaseWriter_Element, ___prefix) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter_Element, ___localName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter_Element, ___prefixId) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseWriter_Element, 0x28>, "Size mismatch!");

} // namespace System::Xml
// Dependencies
namespace System::Xml {
// Is value type: true
// CS Name: System.Xml.XmlBaseWriter/DocumentState
struct CORDL_TYPE XmlBaseWriter_DocumentState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __XmlBaseWriter_DocumentState_Unwrapped
  enum struct __XmlBaseWriter_DocumentState_Unwrapped : uint8_t {
    __E_None = static_cast<uint8_t>(0x0u),
    __E_Document = static_cast<uint8_t>(0x1u),
    __E_Epilog = static_cast<uint8_t>(0x2u),
    __E_End = static_cast<uint8_t>(0x3u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __XmlBaseWriter_DocumentState_Unwrapped() const noexcept {
    return static_cast<__XmlBaseWriter_DocumentState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseWriter_DocumentState();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr XmlBaseWriter_DocumentState(uint8_t value__) noexcept;

  /// @brief Field Document value: U8(1)
  static ::System::Xml::XmlBaseWriter_DocumentState const Document;

  /// @brief Field End value: U8(3)
  static ::System::Xml::XmlBaseWriter_DocumentState const End;

  /// @brief Field Epilog value: U8(2)
  static ::System::Xml::XmlBaseWriter_DocumentState const Epilog;

  /// @brief Field None value: U8(0)
  static ::System::Xml::XmlBaseWriter_DocumentState const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16933 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlBaseWriter_DocumentState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseWriter_DocumentState, 0x1>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Object, System.Xml.XmlSpace
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseWriter/NamespaceManager/XmlAttribute
class CORDL_TYPE NamespaceManager_XmlBaseWriter_XmlAttribute : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Depth, put = set_Depth)) int32_t Depth;

  __declspec(property(get = get_XmlLang, put = set_XmlLang)) ::StringW XmlLang;

  __declspec(property(get = get_XmlSpace, put = set_XmlSpace)) ::System::Xml::XmlSpace XmlSpace;

  /// @brief Field depth, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) int32_t depth;

  /// @brief Field lang, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_lang, put = __cordl_internal_set_lang)) ::StringW lang;

  /// @brief Field space, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_space, put = __cordl_internal_set_space)) ::System::Xml::XmlSpace space;

  /// @brief Method Clear, addr 0x5f60338, size 0x8, virtual false, abstract: false, final false
  inline void Clear();

  static inline ::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute* New_ctor();

  constexpr int32_t const& __cordl_internal_get_depth() const;

  constexpr int32_t& __cordl_internal_get_depth();

  constexpr ::StringW const& __cordl_internal_get_lang() const;

  constexpr ::StringW& __cordl_internal_get_lang();

  constexpr ::System::Xml::XmlSpace const& __cordl_internal_get_space() const;

  constexpr ::System::Xml::XmlSpace& __cordl_internal_get_space();

  constexpr void __cordl_internal_set_depth(int32_t value);

  constexpr void __cordl_internal_set_lang(::StringW value);

  constexpr void __cordl_internal_set_space(::System::Xml::XmlSpace value);

  /// @brief Method .ctor, addr 0x5f604fc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Depth, addr 0x5f6127c, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Depth();

  /// @brief Method get_XmlLang, addr 0x5f6128c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_XmlLang();

  /// @brief Method get_XmlSpace, addr 0x5f6129c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlSpace get_XmlSpace();

  /// @brief Method set_Depth, addr 0x5f61284, size 0x8, virtual false, abstract: false, final false
  inline void set_Depth(int32_t value);

  /// @brief Method set_XmlLang, addr 0x5f61294, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlLang(::StringW value);

  /// @brief Method set_XmlSpace, addr 0x5f612a4, size 0x8, virtual false, abstract: false, final false
  inline void set_XmlSpace(::System::Xml::XmlSpace value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NamespaceManager_XmlBaseWriter_XmlAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NamespaceManager_XmlBaseWriter_XmlAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NamespaceManager_XmlBaseWriter_XmlAttribute(NamespaceManager_XmlBaseWriter_XmlAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NamespaceManager_XmlBaseWriter_XmlAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NamespaceManager_XmlBaseWriter_XmlAttribute(NamespaceManager_XmlBaseWriter_XmlAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16934 };

  /// @brief Field space, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::XmlSpace ___space;

  /// @brief Field lang, offset: 0x18, size: 0x8, def value: None
  ::StringW ___lang;

  /// @brief Field depth, offset: 0x20, size: 0x4, def value: None
  int32_t ___depth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute, ___space) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute, ___lang) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute, ___depth) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute, 0x28>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseWriter/NamespaceManager/Namespace
class CORDL_TYPE NamespaceManager_XmlBaseWriter_Namespace : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Depth, put = set_Depth)) int32_t Depth;

  __declspec(property(get = get_Prefix, put = set_Prefix)) ::StringW Prefix;

  __declspec(property(get = get_PrefixChar)) char16_t PrefixChar;

  __declspec(property(get = get_Uri, put = set_Uri)) ::StringW Uri;

  __declspec(property(get = get_UriDictionaryString, put = set_UriDictionaryString)) ::System::Xml::XmlDictionaryString* UriDictionaryString;

  /// @brief Field depth, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) int32_t depth;

  /// @brief Field ns, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_ns, put = __cordl_internal_set_ns)) ::StringW ns;

  /// @brief Field prefix, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_prefix, put = __cordl_internal_set_prefix)) ::StringW prefix;

  /// @brief Field prefixChar, offset 0x2c, size 0x2
  __declspec(property(get = __cordl_internal_get_prefixChar, put = __cordl_internal_set_prefixChar)) char16_t prefixChar;

  /// @brief Field xNs, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_xNs, put = __cordl_internal_set_xNs)) ::System::Xml::XmlDictionaryString* xNs;

  /// @brief Method Clear, addr 0x5f60328, size 0x10, virtual false, abstract: false, final false
  inline void Clear();

  static inline ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace* New_ctor();

  constexpr int32_t const& __cordl_internal_get_depth() const;

  constexpr int32_t& __cordl_internal_get_depth();

  constexpr ::StringW const& __cordl_internal_get_ns() const;

  constexpr ::StringW& __cordl_internal_get_ns();

  constexpr ::StringW const& __cordl_internal_get_prefix() const;

  constexpr ::StringW& __cordl_internal_get_prefix();

  constexpr char16_t const& __cordl_internal_get_prefixChar() const;

  constexpr char16_t& __cordl_internal_get_prefixChar();

  constexpr ::System::Xml::XmlDictionaryString* const& __cordl_internal_get_xNs() const;

  constexpr ::System::Xml::XmlDictionaryString*& __cordl_internal_get_xNs();

  constexpr void __cordl_internal_set_depth(int32_t value);

  constexpr void __cordl_internal_set_ns(::StringW value);

  constexpr void __cordl_internal_set_prefix(::StringW value);

  constexpr void __cordl_internal_set_prefixChar(char16_t value);

  constexpr void __cordl_internal_set_xNs(::System::Xml::XmlDictionaryString* value);

  /// @brief Method .ctor, addr 0x5f5ffdc, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Depth, addr 0x5f612ac, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Depth();

  /// @brief Method get_Prefix, addr 0x5f612c4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Prefix();

  /// @brief Method get_PrefixChar, addr 0x5f612bc, size 0x8, virtual false, abstract: false, final false
  inline char16_t get_PrefixChar();

  /// @brief Method get_Uri, addr 0x5f612cc, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Uri();

  /// @brief Method get_UriDictionaryString, addr 0x5f612dc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlDictionaryString* get_UriDictionaryString();

  /// @brief Method set_Depth, addr 0x5f612b4, size 0x8, virtual false, abstract: false, final false
  inline void set_Depth(int32_t value);

  /// @brief Method set_Prefix, addr 0x5f5ffe0, size 0x30, virtual false, abstract: false, final false
  inline void set_Prefix(::StringW value);

  /// @brief Method set_Uri, addr 0x5f612d4, size 0x8, virtual false, abstract: false, final false
  inline void set_Uri(::StringW value);

  /// @brief Method set_UriDictionaryString, addr 0x5f612e4, size 0x8, virtual false, abstract: false, final false
  inline void set_UriDictionaryString(::System::Xml::XmlDictionaryString* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NamespaceManager_XmlBaseWriter_Namespace();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NamespaceManager_XmlBaseWriter_Namespace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NamespaceManager_XmlBaseWriter_Namespace(NamespaceManager_XmlBaseWriter_Namespace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NamespaceManager_XmlBaseWriter_Namespace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NamespaceManager_XmlBaseWriter_Namespace(NamespaceManager_XmlBaseWriter_Namespace const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16935 };

  /// @brief Field prefix, offset: 0x10, size: 0x8, def value: None
  ::StringW ___prefix;

  /// @brief Field ns, offset: 0x18, size: 0x8, def value: None
  ::StringW ___ns;

  /// @brief Field xNs, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlDictionaryString* ___xNs;

  /// @brief Field depth, offset: 0x28, size: 0x4, def value: None
  int32_t ___depth;

  /// @brief Field prefixChar, offset: 0x2c, size: 0x2, def value: None
  char16_t ___prefixChar;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::NamespaceManager_XmlBaseWriter_Namespace, ___prefix) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::NamespaceManager_XmlBaseWriter_Namespace, ___ns) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::NamespaceManager_XmlBaseWriter_Namespace, ___xNs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::NamespaceManager_XmlBaseWriter_Namespace, ___depth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::NamespaceManager_XmlBaseWriter_Namespace, ___prefixChar) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace, 0x30>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Object, System.Xml.XmlSpace
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseWriter/NamespaceManager
class CORDL_TYPE XmlBaseWriter_NamespaceManager : public ::System::Object {
public:
  // Declarations
  using Namespace = ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace;

  using XmlAttribute = ::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute;

  __declspec(property(get = get_XmlLang)) ::StringW XmlLang;

  __declspec(property(get = get_XmlSpace)) ::System::Xml::XmlSpace XmlSpace;

  /// @brief Field attributeCount, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_attributeCount, put = __cordl_internal_set_attributeCount)) int32_t attributeCount;

  /// @brief Field attributes, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_attributes,
                      put =
                          __cordl_internal_set_attributes)) ::ArrayW<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*, ::Array<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*>*>
      attributes;

  /// @brief Field defaultNamespace, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_defaultNamespace, put = __cordl_internal_set_defaultNamespace)) ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace* defaultNamespace;

  /// @brief Field depth, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) int32_t depth;

  /// @brief Field lang, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_lang, put = __cordl_internal_set_lang)) ::StringW lang;

  /// @brief Field lastNameSpace, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_lastNameSpace, put = __cordl_internal_set_lastNameSpace)) ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace* lastNameSpace;

  /// @brief Field namespaceBoundary, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_namespaceBoundary, put = __cordl_internal_set_namespaceBoundary)) int32_t namespaceBoundary;

  /// @brief Field namespaces, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_namespaces,
                      put = __cordl_internal_set_namespaces)) ::ArrayW<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*, ::Array<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>*>
      namespaces;

  /// @brief Field nsCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_nsCount, put = __cordl_internal_set_nsCount)) int32_t nsCount;

  /// @brief Field nsTop, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_nsTop, put = __cordl_internal_set_nsTop)) int32_t nsTop;

  /// @brief Field space, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get_space, put = __cordl_internal_set_space)) ::System::Xml::XmlSpace space;

  /// @brief Method AddAttribute, addr 0x5f60364, size 0x174, virtual false, abstract: false, final false
  inline void AddAttribute();

  /// @brief Method AddLangAttribute, addr 0x5f60340, size 0x24, virtual false, abstract: false, final false
  inline void AddLangAttribute(::StringW lang);

  /// @brief Method AddNamespace, addr 0x5f60500, size 0x170, virtual false, abstract: false, final false
  inline ::StringW AddNamespace(::StringW uri, ::System::Xml::XmlDictionaryString* uriDictionaryString);

  /// @brief Method AddNamespace, addr 0x5f606cc, size 0x514, virtual false, abstract: false, final false
  inline void AddNamespace(::StringW prefix, ::StringW uri, ::System::Xml::XmlDictionaryString* uriDictionaryString);

  /// @brief Method AddNamespaceIfNotDeclared, addr 0x5f60670, size 0x5c, virtual false, abstract: false, final false
  inline void AddNamespaceIfNotDeclared(::StringW prefix, ::StringW uri, ::System::Xml::XmlDictionaryString* uriDictionaryString);

  /// @brief Method AddSpaceAttribute, addr 0x5f604d8, size 0x24, virtual false, abstract: false, final false
  inline void AddSpaceAttribute(::System::Xml::XmlSpace space);

  /// @brief Method Clear, addr 0x5f60020, size 0xb8, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method Close, addr 0x5f600d8, size 0x50, virtual false, abstract: false, final false
  inline void Close();

  /// @brief Method DeclareNamespaces, addr 0x5f60128, size 0xf0, virtual false, abstract: false, final false
  inline void DeclareNamespaces(::System::Xml::XmlNodeWriter* writer);

  /// @brief Method EnterScope, addr 0x5f60218, size 0x10, virtual false, abstract: false, final false
  inline void EnterScope();

  /// @brief Method ExitScope, addr 0x5f60228, size 0x100, virtual false, abstract: false, final false
  inline void ExitScope();

  /// @brief Method LookupAttributePrefix, addr 0x5f61080, size 0x1fc, virtual false, abstract: false, final false
  inline ::StringW LookupAttributePrefix(::StringW ns);

  /// @brief Method LookupNamespace, addr 0x5f60be0, size 0x1e8, virtual false, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method LookupPrefix, addr 0x5f60dc8, size 0x2b8, virtual false, abstract: false, final false
  inline ::StringW LookupPrefix(::StringW ns);

  static inline ::System::Xml::XmlBaseWriter_NamespaceManager* New_ctor();

  constexpr int32_t const& __cordl_internal_get_attributeCount() const;

  constexpr int32_t& __cordl_internal_get_attributeCount();

  constexpr ::ArrayW<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*, ::Array<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*>*> const& __cordl_internal_get_attributes() const;

  constexpr ::ArrayW<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*, ::Array<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*>*>& __cordl_internal_get_attributes();

  constexpr ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace* const& __cordl_internal_get_defaultNamespace() const;

  constexpr ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*& __cordl_internal_get_defaultNamespace();

  constexpr int32_t const& __cordl_internal_get_depth() const;

  constexpr int32_t& __cordl_internal_get_depth();

  constexpr ::StringW const& __cordl_internal_get_lang() const;

  constexpr ::StringW& __cordl_internal_get_lang();

  constexpr ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace* const& __cordl_internal_get_lastNameSpace() const;

  constexpr ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*& __cordl_internal_get_lastNameSpace();

  constexpr int32_t const& __cordl_internal_get_namespaceBoundary() const;

  constexpr int32_t& __cordl_internal_get_namespaceBoundary();

  constexpr ::ArrayW<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*, ::Array<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>*> const& __cordl_internal_get_namespaces() const;

  constexpr ::ArrayW<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*, ::Array<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>*>& __cordl_internal_get_namespaces();

  constexpr int32_t const& __cordl_internal_get_nsCount() const;

  constexpr int32_t& __cordl_internal_get_nsCount();

  constexpr int32_t const& __cordl_internal_get_nsTop() const;

  constexpr int32_t& __cordl_internal_get_nsTop();

  constexpr ::System::Xml::XmlSpace const& __cordl_internal_get_space() const;

  constexpr ::System::Xml::XmlSpace& __cordl_internal_get_space();

  constexpr void __cordl_internal_set_attributeCount(int32_t value);

  constexpr void __cordl_internal_set_attributes(::ArrayW<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*, ::Array<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*>*> value);

  constexpr void __cordl_internal_set_defaultNamespace(::System::Xml::NamespaceManager_XmlBaseWriter_Namespace* value);

  constexpr void __cordl_internal_set_depth(int32_t value);

  constexpr void __cordl_internal_set_lang(::StringW value);

  constexpr void __cordl_internal_set_lastNameSpace(::System::Xml::NamespaceManager_XmlBaseWriter_Namespace* value);

  constexpr void __cordl_internal_set_namespaceBoundary(int32_t value);

  constexpr void __cordl_internal_set_namespaces(::ArrayW<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*, ::Array<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>*> value);

  constexpr void __cordl_internal_set_nsCount(int32_t value);

  constexpr void __cordl_internal_set_nsTop(int32_t value);

  constexpr void __cordl_internal_set_space(::System::Xml::XmlSpace value);

  /// @brief Method .ctor, addr 0x5f5ff34, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_XmlLang, addr 0x5f60010, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_XmlLang();

  /// @brief Method get_XmlSpace, addr 0x5f60018, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlSpace get_XmlSpace();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseWriter_NamespaceManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseWriter_NamespaceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBaseWriter_NamespaceManager(XmlBaseWriter_NamespaceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseWriter_NamespaceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBaseWriter_NamespaceManager(XmlBaseWriter_NamespaceManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16936 };

  /// @brief Field namespaces, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*, ::Array<::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*>*> ___namespaces;

  /// @brief Field lastNameSpace, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace* ___lastNameSpace;

  /// @brief Field nsCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___nsCount;

  /// @brief Field depth, offset: 0x24, size: 0x4, def value: None
  int32_t ___depth;

  /// @brief Field attributes, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*, ::Array<::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*>*> ___attributes;

  /// @brief Field attributeCount, offset: 0x30, size: 0x4, def value: None
  int32_t ___attributeCount;

  /// @brief Field space, offset: 0x34, size: 0x4, def value: None
  ::System::Xml::XmlSpace ___space;

  /// @brief Field lang, offset: 0x38, size: 0x8, def value: None
  ::StringW ___lang;

  /// @brief Field namespaceBoundary, offset: 0x40, size: 0x4, def value: None
  int32_t ___namespaceBoundary;

  /// @brief Field nsTop, offset: 0x44, size: 0x4, def value: None
  int32_t ___nsTop;

  /// @brief Field defaultNamespace, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::NamespaceManager_XmlBaseWriter_Namespace* ___defaultNamespace;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlBaseWriter_NamespaceManager, ___namespaces) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter_NamespaceManager, ___lastNameSpace) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter_NamespaceManager, ___nsCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter_NamespaceManager, ___depth) == 0x24, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter_NamespaceManager, ___attributes) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter_NamespaceManager, ___attributeCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter_NamespaceManager, ___space) == 0x34, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter_NamespaceManager, ___lang) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter_NamespaceManager, ___namespaceBoundary) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter_NamespaceManager, ___nsTop) == 0x44, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter_NamespaceManager, ___defaultNamespace) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseWriter_NamespaceManager, 0x50>, "Size mismatch!");

} // namespace System::Xml
// Dependencies System.Xml.WriteState, System.Xml.XmlBaseWriter::DocumentState, System.Xml.XmlDictionaryWriter
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlBaseWriter
class CORDL_TYPE XmlBaseWriter : public ::System::Xml::XmlDictionaryWriter {
public:
  // Declarations
  using DocumentState = ::System::Xml::XmlBaseWriter_DocumentState;

  using Element = ::System::Xml::XmlBaseWriter_Element;

  using NamespaceManager = ::System::Xml::XmlBaseWriter_NamespaceManager;

  __declspec(property(get = get_IsClosed)) bool IsClosed;

  __declspec(property(get = get_WriteState)) ::System::Xml::WriteState WriteState;

  __declspec(property(get = get_XmlLang)) ::StringW XmlLang;

  __declspec(property(get = get_XmlSpace)) ::System::Xml::XmlSpace XmlSpace;

  /// @brief Field attributeLocalName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeLocalName, put = __cordl_internal_set_attributeLocalName)) ::StringW attributeLocalName;

  /// @brief Field attributeValue, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_attributeValue, put = __cordl_internal_set_attributeValue)) ::StringW attributeValue;

  /// @brief Field binhexEncoding, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_binhexEncoding, put = setStaticF_binhexEncoding)) ::System::Text::BinHexEncoding* binhexEncoding;

  /// @brief Field depth, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_depth, put = __cordl_internal_set_depth)) int32_t depth;

  /// @brief Field documentState, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get_documentState, put = __cordl_internal_set_documentState)) ::System::Xml::XmlBaseWriter_DocumentState documentState;

  /// @brief Field elements, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_elements, put = __cordl_internal_set_elements)) ::ArrayW<::System::Xml::XmlBaseWriter_Element*, ::Array<::System::Xml::XmlBaseWriter_Element*>*>
      elements;

  /// @brief Field inList, offset 0x90, size 0x1
  __declspec(property(get = __cordl_internal_get_inList, put = __cordl_internal_set_inList)) bool inList;

  /// @brief Field isXmlAttribute, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get_isXmlAttribute, put = __cordl_internal_set_isXmlAttribute)) bool isXmlAttribute;

  /// @brief Field isXmlnsAttribute, offset 0x49, size 0x1
  __declspec(property(get = __cordl_internal_get_isXmlnsAttribute, put = __cordl_internal_set_isXmlnsAttribute)) bool isXmlnsAttribute;

  /// @brief Field nodeWriter, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_nodeWriter, put = __cordl_internal_set_nodeWriter)) ::System::Xml::XmlStreamNodeWriter* nodeWriter;

  /// @brief Field nsMgr, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_nsMgr, put = __cordl_internal_set_nsMgr)) ::System::Xml::XmlBaseWriter_NamespaceManager* nsMgr;

  /// @brief Field oldStream, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_oldStream, put = __cordl_internal_set_oldStream)) ::System::IO::Stream* oldStream;

  /// @brief Field oldWriter, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_oldWriter, put = __cordl_internal_set_oldWriter)) ::System::Xml::XmlNodeWriter* oldWriter;

  /// @brief Field prefixes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_prefixes, put = setStaticF_prefixes)) ::ArrayW<::StringW, ::Array<::StringW>*> prefixes;

  /// @brief Field signingWriter, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_signingWriter, put = __cordl_internal_set_signingWriter)) ::System::Xml::XmlSigningNodeWriter* signingWriter;

  /// @brief Field textFragmentWriter, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_textFragmentWriter, put = __cordl_internal_set_textFragmentWriter)) ::System::Xml::XmlUTF8NodeWriter* textFragmentWriter;

  /// @brief Field trailByteCount, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get_trailByteCount, put = __cordl_internal_set_trailByteCount)) int32_t trailByteCount;

  /// @brief Field trailBytes, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_trailBytes, put = __cordl_internal_set_trailBytes)) ::ArrayW<uint8_t, ::Array<uint8_t>*> trailBytes;

  /// @brief Field writeState, offset 0x4c, size 0x4
  __declspec(property(get = __cordl_internal_get_writeState, put = __cordl_internal_set_writeState)) ::System::Xml::WriteState writeState;

  /// @brief Field writer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_writer, put = __cordl_internal_set_writer)) ::System::Xml::XmlNodeWriter* writer;

  /// @brief Method AutoComplete, addr 0x5f5b418, size 0x34, virtual false, abstract: false, final false
  inline void AutoComplete(::System::Xml::WriteState writeState);

  /// @brief Method Close, addr 0x5f5b308, size 0xb8, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method EndComment, addr 0x5f5c9e4, size 0x4, virtual false, abstract: false, final false
  inline void EndComment();

  /// @brief Method EndContent, addr 0x5f5cd8c, size 0x4, virtual false, abstract: false, final false
  inline void EndContent();

  /// @brief Method EndStartElement, addr 0x5f5d96c, size 0x3c, virtual false, abstract: false, final false
  inline void EndStartElement();

  /// @brief Method EnsureBufferBounds, addr 0x5f5f754, size 0x174, virtual false, abstract: false, final false
  inline void EnsureBufferBounds(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method EnterScope, addr 0x5f5d1b4, size 0x150, virtual false, abstract: false, final false
  inline ::System::Xml::XmlBaseWriter_Element* EnterScope();

  /// @brief Method ExitScope, addr 0x5f5d59c, size 0x70, virtual false, abstract: false, final false
  inline void ExitScope();

  /// @brief Method FinishDocument, addr 0x5f5b3c0, size 0x58, virtual false, abstract: false, final false
  inline void FinishDocument();

  /// @brief Method Flush, addr 0x5f5b278, size 0x30, virtual true, abstract: false, final false
  inline void Flush();

  /// @brief Method FlushBase64, addr 0x5f5c758, size 0x14, virtual false, abstract: false, final false
  inline void FlushBase64();

  /// @brief Method FlushElement, addr 0x5f5d60c, size 0x28, virtual false, abstract: false, final false
  inline void FlushElement();

  /// @brief Method FlushTrailBytes, addr 0x5f5f994, size 0xd4, virtual false, abstract: false, final false
  inline void FlushTrailBytes();

  /// @brief Method GeneratePrefix, addr 0x5f5b724, size 0x270, virtual false, abstract: false, final false
  inline ::StringW GeneratePrefix(::StringW ns, ::System::Xml::XmlDictionaryString* xNs);

  /// @brief Method GetQualifiedNamePrefix, addr 0x5f5da20, size 0xfc, virtual false, abstract: false, final false
  inline ::StringW GetQualifiedNamePrefix(::StringW namespaceUri, ::System::Xml::XmlDictionaryString* xNs);

  /// @brief Method IsWhitespace, addr 0x5f5d930, size 0x3c, virtual false, abstract: false, final false
  inline bool IsWhitespace(char16_t ch);

  /// @brief Method LookupPrefix, addr 0x5f5d9a8, size 0x78, virtual true, abstract: false, final false
  inline ::StringW LookupPrefix(::StringW ns);

  static inline ::System::Xml::XmlBaseWriter* New_ctor();

  /// @brief Method SetOutput, addr 0x5f5b228, size 0x50, virtual false, abstract: false, final false
  inline void SetOutput(::System::Xml::XmlStreamNodeWriter* writer);

  /// @brief Method StartAttribute, addr 0x5f5bb60, size 0x714, virtual false, abstract: false, final false
  inline void StartAttribute(::ByRef<::StringW> prefix, ::StringW localName, ::StringW ns, ::System::Xml::XmlDictionaryString* xNs);

  /// @brief Method StartComment, addr 0x5f5c9bc, size 0x28, virtual false, abstract: false, final false
  inline void StartComment();

  /// @brief Method StartContent, addr 0x5f5cd08, size 0x84, virtual false, abstract: false, final false
  inline void StartContent();

  /// @brief Method StartContent, addr 0x5f5d634, size 0x50, virtual false, abstract: false, final false
  inline void StartContent(char16_t ch);

  /// @brief Method StartContent, addr 0x5f5d800, size 0x6c, virtual false, abstract: false, final false
  inline void StartContent(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t offset, int32_t count);

  /// @brief Method StartContent, addr 0x5f5d708, size 0x50, virtual false, abstract: false, final false
  inline void StartContent(::StringW s);

  /// @brief Method StartElement, addr 0x5f5ce3c, size 0x378, virtual false, abstract: false, final false
  inline void StartElement(::ByRef<::StringW> prefix, ::StringW localName, ::StringW ns, ::System::Xml::XmlDictionaryString* xNs);

  /// @brief Method ThrowClosed, addr 0x5f5b2b8, size 0x50, virtual false, abstract: false, final false
  inline void ThrowClosed();

  /// @brief Method VerifyWhitespace, addr 0x5f5d684, size 0x84, virtual false, abstract: false, final false
  inline void VerifyWhitespace(char16_t ch);

  /// @brief Method VerifyWhitespace, addr 0x5f5d86c, size 0xc4, virtual false, abstract: false, final false
  inline void VerifyWhitespace(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t offset, int32_t count);

  /// @brief Method VerifyWhitespace, addr 0x5f5d758, size 0xa8, virtual false, abstract: false, final false
  inline void VerifyWhitespace(::StringW s);

  /// @brief Method WriteAttributeText, addr 0x5f5de90, size 0x34, virtual false, abstract: false, final false
  inline void WriteAttributeText(::StringW value);

  /// @brief Method WriteBase64, addr 0x5f5f4a8, size 0x2ac, virtual true, abstract: false, final false
  inline void WriteBase64(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteBinHex, addr 0x5f5f8c8, size 0xcc, virtual true, abstract: false, final false
  inline void WriteBinHex(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteCData, addr 0x5f5cb64, size 0x1a4, virtual true, abstract: false, final false
  inline void WriteCData(::StringW text);

  /// @brief Method WriteCharEntity, addr 0x5f5ea2c, size 0x120, virtual true, abstract: false, final false
  inline void WriteCharEntity(char16_t ch);

  /// @brief Method WriteChars, addr 0x5f5e518, size 0x230, virtual true, abstract: false, final false
  inline void WriteChars(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t offset, int32_t count);

  /// @brief Method WriteComment, addr 0x5f5c76c, size 0x250, virtual true, abstract: false, final false
  inline void WriteComment(::StringW text);

  /// @brief Method WriteDocType, addr 0x5f5cd90, size 0xac, virtual true, abstract: false, final false
  inline void WriteDocType(::StringW name, ::StringW pubid, ::StringW sysid, ::StringW subset);

  /// @brief Method WriteEndAttribute, addr 0x5f5c358, size 0x400, virtual true, abstract: false, final false
  inline void WriteEndAttribute();

  /// @brief Method WriteEndDocument, addr 0x5f5e154, size 0x88, virtual true, abstract: false, final false
  inline void WriteEndDocument();

  /// @brief Method WriteEndElement, addr 0x5f5d3b8, size 0x1e4, virtual true, abstract: false, final false
  inline void WriteEndElement();

  /// @brief Method WriteEntityRef, addr 0x5f5e1dc, size 0xac, virtual true, abstract: false, final false
  inline void WriteEntityRef(::StringW name);

  /// @brief Method WriteFullEndElement, addr 0x5f5c9e8, size 0x17c, virtual true, abstract: false, final false
  inline void WriteFullEndElement();

  /// @brief Method WriteProcessingInstruction, addr 0x5f5e038, size 0x11c, virtual true, abstract: false, final false
  inline void WriteProcessingInstruction(::StringW name, ::StringW text);

  /// @brief Method WriteQualifiedName, addr 0x5f5db1c, size 0x18c, virtual true, abstract: false, final false
  inline void WriteQualifiedName(::StringW localName, ::StringW namespaceUri);

  /// @brief Method WriteQualifiedName, addr 0x5f5dca8, size 0x1e8, virtual true, abstract: false, final false
  inline void WriteQualifiedName(::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri);

  /// @brief Method WriteRaw, addr 0x5f5e7fc, size 0x230, virtual true, abstract: false, final false
  inline void WriteRaw(::ArrayW<char16_t, ::Array<char16_t>*> chars, int32_t offset, int32_t count);

  /// @brief Method WriteRaw, addr 0x5f5e748, size 0xb4, virtual true, abstract: false, final false
  inline void WriteRaw(::StringW value);

  /// @brief Method WriteStartAttribute, addr 0x5f5c274, size 0x60, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::StringW localName, ::StringW namespaceUri);

  /// @brief Method WriteStartAttribute, addr 0x5f5c2d4, size 0x84, virtual true, abstract: false, final false
  inline void WriteStartAttribute(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri);

  /// @brief Method WriteStartDocument, addr 0x5f5dec4, size 0x154, virtual true, abstract: false, final false
  inline void WriteStartDocument();

  /// @brief Method WriteStartDocument, addr 0x5f5e018, size 0x20, virtual true, abstract: false, final false
  inline void WriteStartDocument(bool standalone);

  /// @brief Method WriteStartElement, addr 0x5f5d304, size 0x48, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::StringW localName, ::StringW namespaceUri);

  /// @brief Method WriteStartElement, addr 0x5f5d34c, size 0x6c, virtual true, abstract: false, final false
  inline void WriteStartElement(::StringW prefix, ::System::Xml::XmlDictionaryString* localName, ::System::Xml::XmlDictionaryString* namespaceUri);

  /// @brief Method WriteString, addr 0x5f5e384, size 0xbc, virtual true, abstract: false, final false
  inline void WriteString(::StringW value);

  /// @brief Method WriteString, addr 0x5f5e440, size 0xd8, virtual true, abstract: false, final false
  inline void WriteString(::System::Xml::XmlDictionaryString* value);

  /// @brief Method WriteSurrogateCharEntity, addr 0x5f5eb4c, size 0x134, virtual true, abstract: false, final false
  inline void WriteSurrogateCharEntity(char16_t lowChar, char16_t highChar);

  /// @brief Method WriteValue, addr 0x5f5ec80, size 0x24, virtual true, abstract: false, final false
  inline void WriteValue(::StringW value);

  /// @brief Method WriteValue, addr 0x5f5f1f0, size 0xe0, virtual true, abstract: false, final false
  inline void WriteValue(::System::DateTime value);

  /// @brief Method WriteValue, addr 0x5f5ef44, size 0xec, virtual true, abstract: false, final false
  inline void WriteValue(::System::Decimal value);

  /// @brief Method WriteValue, addr 0x5f5f2d0, size 0xf8, virtual true, abstract: false, final false
  inline void WriteValue(::System::Guid value);

  /// @brief Method WriteValue, addr 0x5f5f3c8, size 0xe0, virtual true, abstract: false, final false
  inline void WriteValue(::System::TimeSpan value);

  /// @brief Method WriteValue, addr 0x5f5ee64, size 0xe0, virtual true, abstract: false, final false
  inline void WriteValue(bool value);

  /// @brief Method WriteValue, addr 0x5f5f110, size 0xe0, virtual true, abstract: false, final false
  inline void WriteValue(double_t value);

  /// @brief Method WriteValue, addr 0x5f5f030, size 0xe0, virtual true, abstract: false, final false
  inline void WriteValue(float_t value);

  /// @brief Method WriteValue, addr 0x5f5eca4, size 0xe0, virtual true, abstract: false, final false
  inline void WriteValue(int32_t value);

  /// @brief Method WriteValue, addr 0x5f5ed84, size 0xe0, virtual true, abstract: false, final false
  inline void WriteValue(int64_t value);

  /// @brief Method WriteWhitespace, addr 0x5f5e288, size 0xfc, virtual true, abstract: false, final false
  inline void WriteWhitespace(::StringW whitespace);

  /// @brief Method WriteXmlnsAttribute, addr 0x5f5b558, size 0x1cc, virtual true, abstract: false, final false
  inline void WriteXmlnsAttribute(::StringW prefix, ::StringW ns);

  /// @brief Method WriteXmlnsAttribute, addr 0x5f5b994, size 0x1cc, virtual true, abstract: false, final false
  inline void WriteXmlnsAttribute(::StringW prefix, ::System::Xml::XmlDictionaryString* ns);

  constexpr ::StringW const& __cordl_internal_get_attributeLocalName() const;

  constexpr ::StringW& __cordl_internal_get_attributeLocalName();

  constexpr ::StringW const& __cordl_internal_get_attributeValue() const;

  constexpr ::StringW& __cordl_internal_get_attributeValue();

  constexpr int32_t const& __cordl_internal_get_depth() const;

  constexpr int32_t& __cordl_internal_get_depth();

  constexpr ::System::Xml::XmlBaseWriter_DocumentState const& __cordl_internal_get_documentState() const;

  constexpr ::System::Xml::XmlBaseWriter_DocumentState& __cordl_internal_get_documentState();

  constexpr ::ArrayW<::System::Xml::XmlBaseWriter_Element*, ::Array<::System::Xml::XmlBaseWriter_Element*>*> const& __cordl_internal_get_elements() const;

  constexpr ::ArrayW<::System::Xml::XmlBaseWriter_Element*, ::Array<::System::Xml::XmlBaseWriter_Element*>*>& __cordl_internal_get_elements();

  constexpr bool const& __cordl_internal_get_inList() const;

  constexpr bool& __cordl_internal_get_inList();

  constexpr bool const& __cordl_internal_get_isXmlAttribute() const;

  constexpr bool& __cordl_internal_get_isXmlAttribute();

  constexpr bool const& __cordl_internal_get_isXmlnsAttribute() const;

  constexpr bool& __cordl_internal_get_isXmlnsAttribute();

  constexpr ::System::Xml::XmlStreamNodeWriter* const& __cordl_internal_get_nodeWriter() const;

  constexpr ::System::Xml::XmlStreamNodeWriter*& __cordl_internal_get_nodeWriter();

  constexpr ::System::Xml::XmlBaseWriter_NamespaceManager* const& __cordl_internal_get_nsMgr() const;

  constexpr ::System::Xml::XmlBaseWriter_NamespaceManager*& __cordl_internal_get_nsMgr();

  constexpr ::System::IO::Stream* const& __cordl_internal_get_oldStream() const;

  constexpr ::System::IO::Stream*& __cordl_internal_get_oldStream();

  constexpr ::System::Xml::XmlNodeWriter* const& __cordl_internal_get_oldWriter() const;

  constexpr ::System::Xml::XmlNodeWriter*& __cordl_internal_get_oldWriter();

  constexpr ::System::Xml::XmlSigningNodeWriter* const& __cordl_internal_get_signingWriter() const;

  constexpr ::System::Xml::XmlSigningNodeWriter*& __cordl_internal_get_signingWriter();

  constexpr ::System::Xml::XmlUTF8NodeWriter* const& __cordl_internal_get_textFragmentWriter() const;

  constexpr ::System::Xml::XmlUTF8NodeWriter*& __cordl_internal_get_textFragmentWriter();

  constexpr int32_t const& __cordl_internal_get_trailByteCount() const;

  constexpr int32_t& __cordl_internal_get_trailByteCount();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_trailBytes() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_trailBytes();

  constexpr ::System::Xml::WriteState const& __cordl_internal_get_writeState() const;

  constexpr ::System::Xml::WriteState& __cordl_internal_get_writeState();

  constexpr ::System::Xml::XmlNodeWriter* const& __cordl_internal_get_writer() const;

  constexpr ::System::Xml::XmlNodeWriter*& __cordl_internal_get_writer();

  constexpr void __cordl_internal_set_attributeLocalName(::StringW value);

  constexpr void __cordl_internal_set_attributeValue(::StringW value);

  constexpr void __cordl_internal_set_depth(int32_t value);

  constexpr void __cordl_internal_set_documentState(::System::Xml::XmlBaseWriter_DocumentState value);

  constexpr void __cordl_internal_set_elements(::ArrayW<::System::Xml::XmlBaseWriter_Element*, ::Array<::System::Xml::XmlBaseWriter_Element*>*> value);

  constexpr void __cordl_internal_set_inList(bool value);

  constexpr void __cordl_internal_set_isXmlAttribute(bool value);

  constexpr void __cordl_internal_set_isXmlnsAttribute(bool value);

  constexpr void __cordl_internal_set_nodeWriter(::System::Xml::XmlStreamNodeWriter* value);

  constexpr void __cordl_internal_set_nsMgr(::System::Xml::XmlBaseWriter_NamespaceManager* value);

  constexpr void __cordl_internal_set_oldStream(::System::IO::Stream* value);

  constexpr void __cordl_internal_set_oldWriter(::System::Xml::XmlNodeWriter* value);

  constexpr void __cordl_internal_set_signingWriter(::System::Xml::XmlSigningNodeWriter* value);

  constexpr void __cordl_internal_set_textFragmentWriter(::System::Xml::XmlUTF8NodeWriter* value);

  constexpr void __cordl_internal_set_trailByteCount(int32_t value);

  constexpr void __cordl_internal_set_trailBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_writeState(::System::Xml::WriteState value);

  constexpr void __cordl_internal_set_writer(::System::Xml::XmlNodeWriter* value);

  /// @brief Method .ctor, addr 0x5f5b1c4, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Text::BinHexEncoding* getStaticF_binhexEncoding();

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_prefixes();

  /// @brief Method get_BinHexEncoding, addr 0x5f5b44c, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Text::BinHexEncoding* get_BinHexEncoding();

  /// @brief Method get_IsClosed, addr 0x5f5b2a8, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsClosed();

  /// @brief Method get_WriteState, addr 0x5f5b550, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::WriteState get_WriteState();

  /// @brief Method get_XmlLang, addr 0x5f5b520, size 0x18, virtual true, abstract: false, final false
  inline ::StringW get_XmlLang();

  /// @brief Method get_XmlSpace, addr 0x5f5b538, size 0x18, virtual true, abstract: false, final false
  inline ::System::Xml::XmlSpace get_XmlSpace();

  static inline void setStaticF_binhexEncoding(::System::Text::BinHexEncoding* value);

  static inline void setStaticF_prefixes(::ArrayW<::StringW, ::Array<::StringW>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlBaseWriter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseWriter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlBaseWriter(XmlBaseWriter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlBaseWriter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlBaseWriter(XmlBaseWriter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16937 };

  /// @brief Field writer, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlNodeWriter* ___writer;

  /// @brief Field nsMgr, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlBaseWriter_NamespaceManager* ___nsMgr;

  /// @brief Field elements, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::System::Xml::XmlBaseWriter_Element*, ::Array<::System::Xml::XmlBaseWriter_Element*>*> ___elements;

  /// @brief Field depth, offset: 0x30, size: 0x4, def value: None
  int32_t ___depth;

  /// @brief Field attributeLocalName, offset: 0x38, size: 0x8, def value: None
  ::StringW ___attributeLocalName;

  /// @brief Field attributeValue, offset: 0x40, size: 0x8, def value: None
  ::StringW ___attributeValue;

  /// @brief Field isXmlAttribute, offset: 0x48, size: 0x1, def value: None
  bool ___isXmlAttribute;

  /// @brief Field isXmlnsAttribute, offset: 0x49, size: 0x1, def value: None
  bool ___isXmlnsAttribute;

  /// @brief Field writeState, offset: 0x4c, size: 0x4, def value: None
  ::System::Xml::WriteState ___writeState;

  /// @brief Field documentState, offset: 0x50, size: 0x1, def value: None
  ::System::Xml::XmlBaseWriter_DocumentState ___documentState;

  /// @brief Field trailBytes, offset: 0x58, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___trailBytes;

  /// @brief Field trailByteCount, offset: 0x60, size: 0x4, def value: None
  int32_t ___trailByteCount;

  /// @brief Field nodeWriter, offset: 0x68, size: 0x8, def value: None
  ::System::Xml::XmlStreamNodeWriter* ___nodeWriter;

  /// @brief Field signingWriter, offset: 0x70, size: 0x8, def value: None
  ::System::Xml::XmlSigningNodeWriter* ___signingWriter;

  /// @brief Field textFragmentWriter, offset: 0x78, size: 0x8, def value: None
  ::System::Xml::XmlUTF8NodeWriter* ___textFragmentWriter;

  /// @brief Field oldWriter, offset: 0x80, size: 0x8, def value: None
  ::System::Xml::XmlNodeWriter* ___oldWriter;

  /// @brief Field oldStream, offset: 0x88, size: 0x8, def value: None
  ::System::IO::Stream* ___oldStream;

  /// @brief Field inList, offset: 0x90, size: 0x1, def value: None
  bool ___inList;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlBaseWriter, ___writer) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter, ___nsMgr) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter, ___elements) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter, ___depth) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter, ___attributeLocalName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter, ___attributeValue) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter, ___isXmlAttribute) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter, ___isXmlnsAttribute) == 0x49, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter, ___writeState) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter, ___documentState) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter, ___trailBytes) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter, ___trailByteCount) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter, ___nodeWriter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter, ___signingWriter) == 0x70, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter, ___textFragmentWriter) == 0x78, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter, ___oldWriter) == 0x80, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter, ___oldStream) == 0x88, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlBaseWriter, ___inList) == 0x90, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlBaseWriter, 0x98>, "Size mismatch!");

} // namespace System::Xml
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseWriter_DocumentState, "System.Xml", "XmlBaseWriter/DocumentState");
NEED_NO_BOX(::System::Xml::NamespaceManager_XmlBaseWriter_Namespace);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::NamespaceManager_XmlBaseWriter_Namespace*, "System.Xml", "XmlBaseWriter/NamespaceManager/Namespace");
NEED_NO_BOX(::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::NamespaceManager_XmlBaseWriter_XmlAttribute*, "System.Xml", "XmlBaseWriter/NamespaceManager/XmlAttribute");
NEED_NO_BOX(::System::Xml::XmlBaseWriter);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseWriter*, "System.Xml", "XmlBaseWriter");
NEED_NO_BOX(::System::Xml::XmlBaseWriter_Element);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseWriter_Element*, "System.Xml", "XmlBaseWriter/Element");
NEED_NO_BOX(::System::Xml::XmlBaseWriter_NamespaceManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlBaseWriter_NamespaceManager*, "System.Xml", "XmlBaseWriter/NamespaceManager");
