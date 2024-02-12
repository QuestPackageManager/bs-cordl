#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Linq/zzzz__XNode_def.hpp"
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
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Text {
class StringBuilder;
}
namespace System::Xml::Linq {
class XAttribute;
}
namespace System::Xml::Linq {
class XNode;
}
namespace System::Xml::Linq {
class __XContainer___Nodes_d__18;
}
namespace System::Xml {
class XmlWriter;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Linq {
class XContainer;
}
namespace System::Xml::Linq {
class __XContainer___Nodes_d__18;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XContainer);
MARK_REF_PTR_T(::System::Xml::Linq::__XContainer___Nodes_d__18);
// Type: ::<Nodes>d__18
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15549))
// CS Name: ::XContainer::<Nodes>d__18*
class CORDL_TYPE __XContainer___Nodes_d__18 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>1__state, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get___1__state, put = __cordl_internal_set___1__state)) int32_t __1__state;

  /// @brief Field <>2__current, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___2__current, put = __cordl_internal_set___2__current))::System::Xml::Linq::XNode* __2__current;

  /// @brief Field <>l__initialThreadId, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get___l__initialThreadId, put = __cordl_internal_set___l__initialThreadId)) int32_t __l__initialThreadId;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this))::System::Xml::Linq::XContainer* __4__this;

  /// @brief Field <n>5__2, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__n_5__2, put = __cordl_internal_set__n_5__2))::System::Xml::Linq::XNode* _n_5__2;

  __declspec(
      property(get = System_Collections_Generic_IEnumerator_System_Xml_Linq_XNode__get_Current))::System::Xml::Linq::XNode* System_Collections_Generic_IEnumerator_System_Xml_Linq_XNode__Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>"
  constexpr operator ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>"
  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>* i___System__Collections__Generic__IEnumerable_1___System__Xml__Linq__XNode__() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerable"
  constexpr operator ::System::Collections::IEnumerable*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerable"
  constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

  /// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XNode*>"
  constexpr operator ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XNode*>*() noexcept;

  /// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XNode*>"
  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XNode*>* i___System__Collections__Generic__IEnumerator_1___System__Xml__Linq__XNode__() noexcept;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  constexpr int32_t& __cordl_internal_get___1__state();

  constexpr int32_t const& __cordl_internal_get___1__state() const;

  constexpr void __cordl_internal_set___1__state(int32_t value);

  constexpr ::System::Xml::Linq::XNode*& __cordl_internal_get___2__current();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XNode*> const& __cordl_internal_get___2__current() const;

  constexpr void __cordl_internal_set___2__current(::System::Xml::Linq::XNode* value);

  constexpr int32_t& __cordl_internal_get___l__initialThreadId();

  constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

  constexpr void __cordl_internal_set___l__initialThreadId(int32_t value);

  constexpr ::System::Xml::Linq::XContainer*& __cordl_internal_get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XContainer*> const& __cordl_internal_get___4__this() const;

  constexpr void __cordl_internal_set___4__this(::System::Xml::Linq::XContainer* value);

  constexpr ::System::Xml::Linq::XNode*& __cordl_internal_get__n_5__2();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XNode*> const& __cordl_internal_get__n_5__2() const;

  constexpr void __cordl_internal_set__n_5__2(::System::Xml::Linq::XNode* value);

  static inline ::System::Xml::Linq::__XContainer___Nodes_d__18* New_ctor(int32_t __1__state);

  /// @brief Method .ctor, addr 0x2860800, size 0x34, virtual false, abstract: false, final false
  inline void _ctor(int32_t __1__state);

  /// @brief Method System.IDisposable.Dispose, addr 0x28613dc, size 0x4, virtual true, abstract: false, final true
  inline void System_IDisposable_Dispose();

  /// @brief Method MoveNext, addr 0x28613e0, size 0x90, virtual true, abstract: false, final true
  inline bool MoveNext();

  /// @brief Method System.Collections.Generic.IEnumerator<System.Xml.Linq.XNode>.get_Current, addr 0x2861470, size 0x8, virtual true, abstract: false, final true
  inline ::System::Xml::Linq::XNode* System_Collections_Generic_IEnumerator_System_Xml_Linq_XNode__get_Current();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2861478, size 0x40, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x28614b8, size 0x8, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method System.Collections.Generic.IEnumerable<System.Xml.Linq.XNode>.GetEnumerator, addr 0x28614c0, size 0xa4, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IEnumerator_1<::System::Xml::Linq::XNode*>* System_Collections_Generic_IEnumerable_System_Xml_Linq_XNode__GetEnumerator();

  /// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x2861564, size 0x4, virtual true, abstract: false, final true
  inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();

  // Ctor Parameters [CppParam { name: "", ty: "__XContainer___Nodes_d__18", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __XContainer___Nodes_d__18(__XContainer___Nodes_d__18&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__XContainer___Nodes_d__18", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __XContainer___Nodes_d__18(__XContainer___Nodes_d__18 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __XContainer___Nodes_d__18();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::__XContainer___Nodes_d__18, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Linq::__XContainer___Nodes_d__18, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::__XContainer___Nodes_d__18, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::__XContainer___Nodes_d__18, _____l__initialThreadId) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::__XContainer___Nodes_d__18, _____4__this) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::__XContainer___Nodes_d__18, ____n_5__2) == 0x30, "Offset mismatch!");

} // namespace System::Xml::Linq
// Type: System.Xml.Linq::XContainer
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(15567))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15550))
// CS Name: ::System.Xml.Linq::XContainer*
class CORDL_TYPE XContainer : public ::System::Xml::Linq::XNode {
public:
  // Declarations
  using _Nodes_d__18 = ::System::Xml::Linq::__XContainer___Nodes_d__18;

  /// @brief Field content, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_content, put = __cordl_internal_set_content))::System::Object* content;

  __declspec(property(get = get_LastNode))::System::Xml::Linq::XNode* LastNode;

  constexpr ::System::Object*& __cordl_internal_get_content();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_content() const;

  constexpr void __cordl_internal_set_content(::System::Object* value);

  static inline ::System::Xml::Linq::XContainer* New_ctor();

  /// @brief Method .ctor, addr 0x285f6c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::Linq::XContainer* New_ctor(::System::Xml::Linq::XContainer* other);

  /// @brief Method .ctor, addr 0x285f6d0, size 0x13c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XContainer* other);

  /// @brief Method get_LastNode, addr 0x285f8cc, size 0x13c, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::XNode* get_LastNode();

  /// @brief Method Add, addr 0x285fa08, size 0x4f0, virtual false, abstract: false, final false
  inline void Add(::System::Object* content);

  /// @brief Method Nodes, addr 0x2860788, size 0x78, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Xml::Linq::XNode*>* Nodes();

  /// @brief Method RemoveNodes, addr 0x2860834, size 0x29c, virtual false, abstract: false, final false
  inline void RemoveNodes();

  /// @brief Method AddAttribute, addr 0x2860c18, size 0x4, virtual true, abstract: false, final false
  inline void AddAttribute(::System::Xml::Linq::XAttribute* a);

  /// @brief Method AddAttributeSkipNotify, addr 0x2860c1c, size 0x4, virtual true, abstract: false, final false
  inline void AddAttributeSkipNotify(::System::Xml::Linq::XAttribute* a);

  /// @brief Method AddContentSkipNotify, addr 0x285ff68, size 0x4cc, virtual false, abstract: false, final false
  inline void AddContentSkipNotify(::System::Object* content);

  /// @brief Method AddNode, addr 0x2860434, size 0x7c, virtual false, abstract: false, final false
  inline void AddNode(::System::Xml::Linq::XNode* n);

  /// @brief Method AddNodeSkipNotify, addr 0x2860c20, size 0x7c, virtual false, abstract: false, final false
  inline void AddNodeSkipNotify(::System::Xml::Linq::XNode* n);

  /// @brief Method AddString, addr 0x28604b0, size 0x254, virtual false, abstract: false, final false
  inline void AddString(::StringW s);

  /// @brief Method AddStringSkipNotify, addr 0x2860c9c, size 0x150, virtual false, abstract: false, final false
  inline void AddStringSkipNotify(::StringW s);

  /// @brief Method AppendNode, addr 0x2860dec, size 0x118, virtual false, abstract: false, final false
  inline void AppendNode(::System::Xml::Linq::XNode* n);

  /// @brief Method AppendNodeSkipNotify, addr 0x285f80c, size 0xc0, virtual false, abstract: false, final false
  inline void AppendNodeSkipNotify(::System::Xml::Linq::XNode* n);

  /// @brief Method AppendText, addr 0x2860ff8, size 0xec, virtual true, abstract: false, final false
  inline void AppendText(::System::Text::StringBuilder* sb);

  /// @brief Method ConvertTextToNode, addr 0x2860b6c, size 0xac, virtual false, abstract: false, final false
  inline void ConvertTextToNode();

  /// @brief Method GetStringValue, addr 0x285e120, size 0x400, virtual false, abstract: false, final false
  static inline ::StringW GetStringValue(::System::Object* value);

  /// @brief Method RemoveNode, addr 0x28610e4, size 0x1a0, virtual false, abstract: false, final false
  inline void RemoveNode(::System::Xml::Linq::XNode* n);

  /// @brief Method RemoveNodesSkipNotify, addr 0x2860ad0, size 0x9c, virtual false, abstract: false, final false
  inline void RemoveNodesSkipNotify();

  /// @brief Method ValidateNode, addr 0x2861284, size 0x4, virtual true, abstract: false, final false
  inline void ValidateNode(::System::Xml::Linq::XNode* node, ::System::Xml::Linq::XNode* previous);

  /// @brief Method ValidateString, addr 0x2861288, size 0x4, virtual true, abstract: false, final false
  inline void ValidateString(::StringW s);

  /// @brief Method WriteContentTo, addr 0x286128c, size 0x150, virtual false, abstract: false, final false
  inline void WriteContentTo(::System::Xml::XmlWriter* writer);

  // Ctor Parameters [CppParam { name: "", ty: "XContainer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XContainer(XContainer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XContainer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XContainer(XContainer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XContainer();

public:
  /// @brief Field content, offset: 0x28, size: 0x8, def value: None
  ::System::Object* ___content;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XContainer, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Linq::XContainer, ___content) == 0x28, "Offset mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XContainer);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XContainer*, "System.Xml.Linq", "XContainer");
NEED_NO_BOX(::System::Xml::Linq::__XContainer___Nodes_d__18);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::__XContainer___Nodes_d__18*, "System.Xml.Linq", "XContainer/<Nodes>d__18");
