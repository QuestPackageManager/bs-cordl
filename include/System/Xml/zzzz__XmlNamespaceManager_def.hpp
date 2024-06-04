#pragma once
// IWYU pragma private; include "System/Xml/XmlNamespaceManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XmlNamespaceManager)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IDictionary_2;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
struct XmlNamespaceScope;
}
namespace System::Xml {
struct __XmlNamespaceManager__NamespaceDeclaration;
}
// Forward declare root types
namespace System::Xml {
class XmlNamespaceManager;
}
namespace System::Xml {
struct __XmlNamespaceManager__NamespaceDeclaration;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlNamespaceManager);
MARK_VAL_T(::System::Xml::__XmlNamespaceManager__NamespaceDeclaration);
// Type: ::NamespaceDeclaration
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: true
// CS Name: ::XmlNamespaceManager::NamespaceDeclaration
struct CORDL_TYPE __XmlNamespaceManager__NamespaceDeclaration {
public:
  // Declarations
  /// @brief Method Set, addr 0x2edd840, size 0xc, virtual false, abstract: false, final false
  inline void Set(::StringW prefix, ::StringW uri, int32_t scopeId, int32_t previousNsIndex);

  // Ctor Parameters []
  // @brief default ctor
  constexpr __XmlNamespaceManager__NamespaceDeclaration();

  // Ctor Parameters [CppParam { name: "prefix", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "uri", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name:
  // "scopeId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "previousNsIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __XmlNamespaceManager__NamespaceDeclaration(::StringW prefix, ::StringW uri, int32_t scopeId, int32_t previousNsIndex) noexcept;

  /// @brief Field prefix, offset: 0x0, size: 0x8, def value: None
  ::StringW prefix;

  /// @brief Field uri, offset: 0x8, size: 0x8, def value: None
  ::StringW uri;

  /// @brief Field scopeId, offset: 0x10, size: 0x4, def value: None
  int32_t scopeId;

  /// @brief Field previousNsIndex, offset: 0x14, size: 0x4, def value: None
  int32_t previousNsIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::__XmlNamespaceManager__NamespaceDeclaration, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Xml::__XmlNamespaceManager__NamespaceDeclaration, prefix) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlNamespaceManager__NamespaceDeclaration, uri) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlNamespaceManager__NamespaceDeclaration, scopeId) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::__XmlNamespaceManager__NamespaceDeclaration, previousNsIndex) == 0x14, "Offset mismatch!");

} // namespace System::Xml
// Type: System.Xml::XmlNamespaceManager
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// CS Name: ::System.Xml::XmlNamespaceManager*
class CORDL_TYPE XmlNamespaceManager : public ::System::Object {
public:
  // Declarations
  using NamespaceDeclaration = ::System::Xml::__XmlNamespaceManager__NamespaceDeclaration;

  __declspec(property(get = get_DefaultNamespace))::StringW DefaultNamespace;

  __declspec(property(get = get_NameTable))::System::Xml::XmlNameTable* NameTable;

  /// @brief Field hashTable, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_hashTable, put = __cordl_internal_set_hashTable))::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* hashTable;

  /// @brief Field lastDecl, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_lastDecl, put = __cordl_internal_set_lastDecl)) int32_t lastDecl;

  /// @brief Field nameTable, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_nameTable, put = __cordl_internal_set_nameTable))::System::Xml::XmlNameTable* nameTable;

  /// @brief Field nsdecls, offset 0x10, size 0x8
  __declspec(
      property(get = __cordl_internal_get_nsdecls,
               put = __cordl_internal_set_nsdecls))::ArrayW<::System::Xml::__XmlNamespaceManager__NamespaceDeclaration, ::Array<::System::Xml::__XmlNamespaceManager__NamespaceDeclaration>*> nsdecls;

  /// @brief Field scopeId, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_scopeId, put = __cordl_internal_set_scopeId)) int32_t scopeId;

  /// @brief Field useHashtable, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_useHashtable, put = __cordl_internal_set_useHashtable)) bool useHashtable;

  /// @brief Field xml, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_xml, put = __cordl_internal_set_xml))::StringW xml;

  /// @brief Field xmlNs, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlNs, put = __cordl_internal_set_xmlNs))::StringW xmlNs;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Xml::IXmlNamespaceResolver"
  constexpr operator ::System::Xml::IXmlNamespaceResolver*() noexcept;

  /// @brief Method AddNamespace, addr 0x2edd9ac, size 0x3a4, virtual true, abstract: false, final false
  inline void AddNamespace(::StringW prefix, ::StringW uri);

  /// @brief Method GetEnumerator, addr 0x2ede018, size 0x170, virtual true, abstract: false, final false
  inline ::System::Collections::IEnumerator* GetEnumerator();

  /// @brief Method GetNamespacesInScope, addr 0x2ede188, size 0x1b8, virtual true, abstract: false, final false
  inline ::System::Collections::Generic::IDictionary_2<::StringW, ::StringW>* GetNamespacesInScope(::System::Xml::XmlNamespaceScope scope);

  /// @brief Method LookupNamespace, addr 0x2ede340, size 0x4c, virtual true, abstract: false, final false
  inline ::StringW LookupNamespace(::StringW prefix);

  /// @brief Method LookupNamespaceDecl, addr 0x2eddd50, size 0x18c, virtual false, abstract: false, final false
  inline int32_t LookupNamespaceDecl(::StringW prefix);

  /// @brief Method LookupPrefix, addr 0x2ede38c, size 0xc4, virtual true, abstract: false, final false
  inline ::StringW LookupPrefix(::StringW uri);

  static inline ::System::Xml::XmlNamespaceManager* New_ctor();

  static inline ::System::Xml::XmlNamespaceManager* New_ctor(::System::Xml::XmlNameTable* nameTable);

  /// @brief Method PopScope, addr 0x2edd8d4, size 0xd8, virtual true, abstract: false, final false
  inline bool PopScope();

  /// @brief Method PushScope, addr 0x2edd8c4, size 0x10, virtual true, abstract: false, final false
  inline void PushScope();

  /// @brief Method RemoveNamespace, addr 0x2eddedc, size 0x13c, virtual true, abstract: false, final false
  inline void RemoveNamespace(::StringW prefix, ::StringW uri);

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*& __cordl_internal_get_hashTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, int32_t>*> const& __cordl_internal_get_hashTable() const;

  constexpr int32_t const& __cordl_internal_get_lastDecl() const;

  constexpr int32_t& __cordl_internal_get_lastDecl();

  constexpr ::System::Xml::XmlNameTable*& __cordl_internal_get_nameTable();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNameTable*> const& __cordl_internal_get_nameTable() const;

  constexpr ::ArrayW<::System::Xml::__XmlNamespaceManager__NamespaceDeclaration, ::Array<::System::Xml::__XmlNamespaceManager__NamespaceDeclaration>*> const& __cordl_internal_get_nsdecls() const;

  constexpr ::ArrayW<::System::Xml::__XmlNamespaceManager__NamespaceDeclaration, ::Array<::System::Xml::__XmlNamespaceManager__NamespaceDeclaration>*>& __cordl_internal_get_nsdecls();

  constexpr int32_t const& __cordl_internal_get_scopeId() const;

  constexpr int32_t& __cordl_internal_get_scopeId();

  constexpr bool const& __cordl_internal_get_useHashtable() const;

  constexpr bool& __cordl_internal_get_useHashtable();

  constexpr ::StringW const& __cordl_internal_get_xml() const;

  constexpr ::StringW& __cordl_internal_get_xml();

  constexpr ::StringW const& __cordl_internal_get_xmlNs() const;

  constexpr ::StringW& __cordl_internal_get_xmlNs();

  constexpr void __cordl_internal_set_hashTable(::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* value);

  constexpr void __cordl_internal_set_lastDecl(int32_t value);

  constexpr void __cordl_internal_set_nameTable(::System::Xml::XmlNameTable* value);

  constexpr void __cordl_internal_set_nsdecls(::ArrayW<::System::Xml::__XmlNamespaceManager__NamespaceDeclaration, ::Array<::System::Xml::__XmlNamespaceManager__NamespaceDeclaration>*> value);

  constexpr void __cordl_internal_set_scopeId(int32_t value);

  constexpr void __cordl_internal_set_useHashtable(bool value);

  constexpr void __cordl_internal_set_xml(::StringW value);

  constexpr void __cordl_internal_set_xmlNs(::StringW value);

  /// @brief Method .ctor, addr 0x2edd67c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x2edd684, size 0x1bc, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNameTable* nameTable);

  /// @brief Method get_DefaultNamespace, addr 0x2edd854, size 0x70, virtual true, abstract: false, final false
  inline ::StringW get_DefaultNamespace();

  /// @brief Method get_NameTable, addr 0x2edd84c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNameTable* get_NameTable();

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Xml::IXmlNamespaceResolver"
  constexpr ::System::Xml::IXmlNamespaceResolver* i___System__Xml__IXmlNamespaceResolver() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNamespaceManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlNamespaceManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlNamespaceManager(XmlNamespaceManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlNamespaceManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlNamespaceManager(XmlNamespaceManager const&) = delete;

  /// @brief Field nsdecls, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::System::Xml::__XmlNamespaceManager__NamespaceDeclaration, ::Array<::System::Xml::__XmlNamespaceManager__NamespaceDeclaration>*> ___nsdecls;

  /// @brief Field lastDecl, offset: 0x18, size: 0x4, def value: None
  int32_t ___lastDecl;

  /// @brief Field nameTable, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlNameTable* ___nameTable;

  /// @brief Field scopeId, offset: 0x28, size: 0x4, def value: None
  int32_t ___scopeId;

  /// @brief Field hashTable, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, int32_t>* ___hashTable;

  /// @brief Field useHashtable, offset: 0x38, size: 0x1, def value: None
  bool ___useHashtable;

  /// @brief Field xml, offset: 0x40, size: 0x8, def value: None
  ::StringW ___xml;

  /// @brief Field xmlNs, offset: 0x48, size: 0x8, def value: None
  ::StringW ___xmlNs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlNamespaceManager, 0x50>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlNamespaceManager, ___nsdecls) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNamespaceManager, ___lastDecl) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNamespaceManager, ___nameTable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNamespaceManager, ___scopeId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNamespaceManager, ___hashTable) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNamespaceManager, ___useHashtable) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNamespaceManager, ___xml) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNamespaceManager, ___xmlNs) == 0x48, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlNamespaceManager);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNamespaceManager*, "System.Xml", "XmlNamespaceManager");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::__XmlNamespaceManager__NamespaceDeclaration, "System.Xml", "XmlNamespaceManager/NamespaceDeclaration");
