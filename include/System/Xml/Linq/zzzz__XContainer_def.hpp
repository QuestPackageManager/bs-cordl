#pragma once
// IWYU pragma private; include "System/Xml/Linq/XContainer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Xml/Linq/zzzz__NamespaceCache_def.hpp"
#include "System/Xml/Linq/zzzz__XNode_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XContainer)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Linq {
struct LoadOptions;
}
namespace System::Xml::Linq {
class XAttribute;
}
namespace System::Xml::Linq {
class XContainer_ContentReader;
}
namespace System::Xml::Linq {
class XContainer__Nodes_d__18;
}
namespace System::Xml::Linq {
class XNode;
}
namespace System::Xml {
class IXmlLineInfo;
}
namespace System::Xml {
class XmlReader;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Linq {
class XContainer;
}
namespace System::Xml::Linq {
class XContainer_ContentReader;
}
namespace System::Xml::Linq {
class XContainer__Nodes_d__18;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XContainer);
MARK_REF_PTR_T(::System::Xml::Linq::XContainer_ContentReader);
MARK_REF_PTR_T(::System::Xml::Linq::XContainer__Nodes_d__18);
// Dependencies System.Object, System.Xml.Linq.NamespaceCache
namespace System::Xml::Linq {
// Is value type: false
// CS Name: System.Xml.Linq.XContainer/ContentReader
class CORDL_TYPE XContainer_ContentReader : public ::System::Object {
public:
  // Declarations
  /// @brief Field _aCache, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__aCache, put = __cordl_internal_set__aCache)) ::System::Xml::Linq::NamespaceCache _aCache;

  /// @brief Field _baseUri, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__baseUri, put = __cordl_internal_set__baseUri)) ::StringW _baseUri;

  /// @brief Field _currentContainer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__currentContainer, put = __cordl_internal_set__currentContainer)) ::System::Xml::Linq::XContainer* _currentContainer;

  /// @brief Field _eCache, offset 0x10, size 0x10
  __declspec(property(get = __cordl_internal_get__eCache, put = __cordl_internal_set__eCache)) ::System::Xml::Linq::NamespaceCache _eCache;

  /// @brief Field _lineInfo, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__lineInfo, put = __cordl_internal_set__lineInfo)) ::System::Xml::IXmlLineInfo* _lineInfo;

  static inline ::System::Xml::Linq::XContainer_ContentReader* New_ctor(::System::Xml::Linq::XContainer* rootContainer);

  static inline ::System::Xml::Linq::XContainer_ContentReader* New_ctor(::System::Xml::Linq::XContainer* rootContainer, ::System::Xml::XmlReader* r, ::System::Xml::Linq::LoadOptions o);

  /// @brief Method ReadContentFrom, addr 0x4243af8, size 0x5dc, virtual false, abstract: false, final false
  inline bool ReadContentFrom(::System::Xml::Linq::XContainer* rootContainer, ::System::Xml::XmlReader* r);

  /// @brief Method ReadContentFrom, addr 0x42442a4, size 0xca4, virtual false, abstract: false, final false
  inline bool ReadContentFrom(::System::Xml::Linq::XContainer* rootContainer, ::System::Xml::XmlReader* r, ::System::Xml::Linq::LoadOptions o);

  constexpr ::System::Xml::Linq::NamespaceCache const& __cordl_internal_get__aCache() const;

  constexpr ::System::Xml::Linq::NamespaceCache& __cordl_internal_get__aCache();

  constexpr ::StringW const& __cordl_internal_get__baseUri() const;

  constexpr ::StringW& __cordl_internal_get__baseUri();

  constexpr ::System::Xml::Linq::XContainer* const& __cordl_internal_get__currentContainer() const;

  constexpr ::System::Xml::Linq::XContainer*& __cordl_internal_get__currentContainer();

  constexpr ::System::Xml::Linq::NamespaceCache const& __cordl_internal_get__eCache() const;

  constexpr ::System::Xml::Linq::NamespaceCache& __cordl_internal_get__eCache();

  constexpr ::System::Xml::IXmlLineInfo* const& __cordl_internal_get__lineInfo() const;

  constexpr ::System::Xml::IXmlLineInfo*& __cordl_internal_get__lineInfo();

  constexpr void __cordl_internal_set__aCache(::System::Xml::Linq::NamespaceCache value);

  constexpr void __cordl_internal_set__baseUri(::StringW value);

  constexpr void __cordl_internal_set__currentContainer(::System::Xml::Linq::XContainer* value);

  constexpr void __cordl_internal_set__eCache(::System::Xml::Linq::NamespaceCache value);

  constexpr void __cordl_internal_set__lineInfo(::System::Xml::IXmlLineInfo* value);

  /// @brief Method .ctor, addr 0x4243ad0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XContainer* rootContainer);

  /// @brief Method .ctor, addr 0x42441fc, size 0xa8, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XContainer* rootContainer, ::System::Xml::XmlReader* r, ::System::Xml::Linq::LoadOptions o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XContainer_ContentReader();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XContainer_ContentReader", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XContainer_ContentReader(XContainer_ContentReader&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XContainer_ContentReader", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XContainer_ContentReader(XContainer_ContentReader const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17960 };

  /// @brief Field _eCache, offset: 0x10, size: 0x10, def value: None
  ::System::Xml::Linq::NamespaceCache ____eCache;

  /// @brief Field _aCache, offset: 0x20, size: 0x10, def value: None
  ::System::Xml::Linq::NamespaceCache ____aCache;

  /// @brief Field _lineInfo, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::IXmlLineInfo* ____lineInfo;

  /// @brief Field _currentContainer, offset: 0x38, size: 0x8, def value: None
  ::System::Xml::Linq::XContainer* ____currentContainer;

  /// @brief Field _baseUri, offset: 0x40, size: 0x8, def value: None
  ::StringW ____baseUri;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Linq::XContainer_ContentReader, ____eCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XContainer_ContentReader, ____aCache) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XContainer_ContentReader, ____lineInfo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XContainer_ContentReader, ____currentContainer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XContainer_ContentReader, ____baseUri) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XContainer_ContentReader, 0x48>, "Size mismatch!");

} // namespace System::Xml::Linq
// Dependencies System.Collections.Generic.IEnumerable`1<T>, System.Collections.Generic.IEnumerator`1<T>, System.Collections.IEnumerable, System.Collections.IEnumerator, System.IDisposable,
// System.Object
namespace System::Xml::Linq {
// Is value type: false
// CS Name: System.Xml.Linq.XContainer/<Nodes>d__18
class CORDL_TYPE XContainer__Nodes_d__18 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get =
                          System_Collections_Generic_IEnumerator_System_Xml_Linq_XNode__get_Current)) ::System::Xml::Linq::XNode* System_Collections_Generic_IEnumerator_System_Xml_Linq_XNode__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current)) ::System::Xml::Linq::XNode* __2__current;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::System::Xml::Linq::XContainer* __4__this;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <n>5__2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__n_5__2, put = __cordl_internal_set__n_5__2)) ::System::Xml::Linq::XNode* _n_5__2;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XNode*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XNode*>*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Method MoveNext, addr 0x42456b4, size 0x90, virtual true, abstract: false, final true
  inline bool MoveNext();

  static inline ::System::Xml::Linq::XContainer__Nodes_d__18* New_ctor(int32_t __1__state);

  /// @brief Method System.Collections.Generic.IEnumerable<System.Xml.Linq.XNode>.GetEnumerator, addr 0x424578c, size 0x9c, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XNode*>* System_Collections_Generic_IEnumerable_System_Xml_Linq_XNode__GetEnumerator();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Xml.Linq.XNode>.get_Current, addr 0x4245744, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Linq::XNode* System_Collections_Generic_IEnumerator_System_Xml_Linq_XNode__get_Current();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x4245828, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x424574c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x4245784, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.IDisposable.Dispose, addr 0x42456b0, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr ::System::Xml::Linq::XNode* const& __cordl_internal_get___2__current() const;

  constexpr ::System::Xml::Linq::XNode*& __cordl_internal_get___2__current();

  constexpr ::System::Xml::Linq::XContainer* const& __cordl_internal_get___4__this() const;

  constexpr ::System::Xml::Linq::XContainer*& __cordl_internal_get___4__this();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr ::System::Xml::Linq::XNode* const& __cordl_internal_get__n_5__2() const;

  constexpr ::System::Xml::Linq::XNode*& __cordl_internal_get__n_5__2();

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr void __cordl_internal_set___2__current(::System::Xml::Linq::XNode* value);

  constexpr void __cordl_internal_set___4__this(::System::Xml::Linq::XContainer* value);

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr void __cordl_internal_set__n_5__2(::System::Xml::Linq::XNode* value);

  /// @brief Method .ctor, addr 0x4243104, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>* i___System__Collections__Generic__IEnumerable_1___System__Xml__Linq__XNode__() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XNode*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XNode*>* i___System__Collections__Generic__IEnumerator_1___System__Xml__Linq__XNode__() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XContainer__Nodes_d__18();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XContainer__Nodes_d__18", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XContainer__Nodes_d__18(XContainer__Nodes_d__18&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XContainer__Nodes_d__18", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XContainer__Nodes_d__18(XContainer__Nodes_d__18 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17961 };

  /// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
  int32_t _____1__state;

  /// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Linq::XNode* _____2__current;

  /// @brief Field <>l__initialThreadId, offset: 0x20, size: 0x4, def value: None
  int32_t _____l__initialThreadId;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Linq::XContainer* _____4__this;

  /// @brief Field <n>5__2, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::Linq::XNode* ____n_5__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Linq::XContainer__Nodes_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XContainer__Nodes_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XContainer__Nodes_d__18, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XContainer__Nodes_d__18, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XContainer__Nodes_d__18, ____n_5__2) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XContainer__Nodes_d__18, 0x38>, "Size mismatch!");

} // namespace System::Xml::Linq
// Dependencies System.Xml.Linq.XNode
namespace System::Xml::Linq {
// Is value type: false
// CS Name: System.Xml.Linq.XContainer
class CORDL_TYPE XContainer : public ::System::Xml::Linq::XNode {
public:
  // Declarations
  using ContentReader = ::System::Xml::Linq::XContainer_ContentReader;

  using _Nodes_d__18 = ::System::Xml::Linq::XContainer__Nodes_d__18;

  __declspec(property(get = get_LastNode)) ::System::Xml::Linq::XNode* LastNode;

  /// @brief Field content, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content)) ::System::Object* content;

  /// @brief Method Add, addr 0x4242324, size 0x4f0, virtual false, abstract: false, final false
  inline void Add(::System::Object* content);

  /// @brief Method AddAttribute, addr 0x4243518, size 0x4, virtual true, abstract: false, final false
  inline void AddAttribute(::System::Xml::Linq::XAttribute* a);

  /// @brief Method AddAttributeSkipNotify, addr 0x424351c, size 0x4, virtual true, abstract: false, final false
  inline void AddAttributeSkipNotify(::System::Xml::Linq::XAttribute* a);

  /// @brief Method AddContentSkipNotify, addr 0x4242884, size 0x4cc, virtual false, abstract: false, final false
  inline void AddContentSkipNotify(::System::Object* content);

  /// @brief Method AddNode, addr 0x4242d50, size 0x80, virtual false, abstract: false, final false
  inline void AddNode(::System::Xml::Linq::XNode* n);

  /// @brief Method AddNodeSkipNotify, addr 0x4243520, size 0x80, virtual false, abstract: false, final false
  inline void AddNodeSkipNotify(::System::Xml::Linq::XNode* n);

  /// @brief Method AddString, addr 0x4242dd0, size 0x244, virtual false, abstract: false, final false
  inline void AddString(::StringW s);

  /// @brief Method AddStringSkipNotify, addr 0x42435a0, size 0x150, virtual false, abstract: false, final false
  inline void AddStringSkipNotify(::StringW s);

  /// @brief Method AppendNode, addr 0x42436f0, size 0x114, virtual false, abstract: false, final false
  inline void AppendNode(::System::Xml::Linq::XNode* n);

  /// @brief Method AppendNodeSkipNotify, addr 0x4242128, size 0xc0, virtual false, abstract: false, final false
  inline void AppendNodeSkipNotify(::System::Xml::Linq::XNode* n);

  /// @brief Method AppendText, addr 0x42438f4, size 0xe8, virtual true, abstract: false, final false
  inline void AppendText(::System::Text::StringBuilder* sb);

  /// @brief Method ConvertTextToNode, addr 0x424346c, size 0xac, virtual false, abstract: false, final false
  inline void ConvertTextToNode();

  /// @brief Method GetStringValue, addr 0x4240a50, size 0x428, virtual false, abstract: false, final false
  static inline ::StringW GetStringValue(::System::Object* value);

  static inline ::System::Xml::Linq::XContainer* New_ctor();

  static inline ::System::Xml::Linq::XContainer* New_ctor(::System::Xml::Linq::XContainer* other);

  /// @brief Method Nodes, addr 0x4243094, size 0x70, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>* Nodes();

  /// @brief Method ReadContentFrom, addr 0x42439dc, size 0xf4, virtual false, abstract: false, final false
  inline void ReadContentFrom(::System::Xml::XmlReader* r);

  /// @brief Method ReadContentFrom, addr 0x42440d4, size 0x128, virtual false, abstract: false, final false
  inline void ReadContentFrom(::System::Xml::XmlReader* r, ::System::Xml::Linq::LoadOptions o);

  /// @brief Method RemoveNode, addr 0x4244f48, size 0x19c, virtual false, abstract: false, final false
  inline void RemoveNode(::System::Xml::Linq::XNode* n);

  /// @brief Method RemoveNodes, addr 0x4243138, size 0x298, virtual false, abstract: false, final false
  inline void RemoveNodes();

  /// @brief Method RemoveNodesSkipNotify, addr 0x42433d0, size 0x9c, virtual false, abstract: false, final false
  inline void RemoveNodesSkipNotify();

  /// @brief Method ValidateNode, addr 0x42450e4, size 0x4, virtual true, abstract: false, final false
  inline void ValidateNode(::System::Xml::Linq::XNode* node, ::System::Xml::Linq::XNode* previous);

  /// @brief Method ValidateString, addr 0x42450e8, size 0x4, virtual true, abstract: false, final false
  inline void ValidateString(::StringW s);

  /// @brief Method WriteContentTo, addr 0x42450ec, size 0x148, virtual false, abstract: false, final false
  inline void WriteContentTo(::System::Xml::XmlWriter* writer);

  constexpr ::System::Object* const& __cordl_internal_get_content() const;

  constexpr ::System::Object*& __cordl_internal_get_content();

  constexpr void __cordl_internal_set_content(::System::Object* value);

  /// @brief Method .ctor, addr 0x4241fec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x4241ff4, size 0x134, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XContainer* other);

  /// @brief Method get_LastNode, addr 0x42421e8, size 0x13c, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::XNode* get_LastNode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XContainer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XContainer(XContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XContainer(XContainer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17962 };

  /// @brief Field content, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ___content;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Linq::XContainer, ___content) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XContainer, 0x30>, "Size mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XContainer);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XContainer*, "System.Xml.Linq", "XContainer");
NEED_NO_BOX(::System::Xml::Linq::XContainer_ContentReader);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XContainer_ContentReader*, "System.Xml.Linq", "XContainer/ContentReader");
NEED_NO_BOX(::System::Xml::Linq::XContainer__Nodes_d__18);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XContainer__Nodes_d__18*, "System.Xml.Linq", "XContainer/<Nodes>d__18");
