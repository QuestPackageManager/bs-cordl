#pragma once
// IWYU pragma private; include "System/Xml/XmlChildEnumerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XmlChildEnumerator)
namespace System::Xml {
class XmlNode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml {
class XmlChildEnumerator;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlChildEnumerator);
// Dependencies System.Collections.IEnumerator, System.Object
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlChildEnumerator
class CORDL_TYPE XmlChildEnumerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::System::Xml::XmlNode* Current;

  __declspec(property(get = System_Collections_IEnumerator_get_Current)) ::System::Object* System_Collections_IEnumerator_Current;

  /// @brief Field child, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_child, put = __cordl_internal_set_child)) ::System::Xml::XmlNode* child;

  /// @brief Field container, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_container, put = __cordl_internal_set_container)) ::System::Xml::XmlNode* container;

  /// @brief Field isFirst, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_isFirst, put = __cordl_internal_set_isFirst)) bool isFirst;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Method MoveNext, addr 0x4339fa8, size 0x64, virtual false, abstract: false, final false
  inline bool MoveNext();

  static inline ::System::Xml::XmlChildEnumerator* New_ctor(::System::Xml::XmlNode* container);

  /// @brief Method System.Collections.IEnumerator.MoveNext, addr 0x4339fa4, size 0x4, virtual true, abstract: false, final true
  inline bool System_Collections_IEnumerator_MoveNext();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x433a00c, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x433a044, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  constexpr ::System::Xml::XmlNode* const& __cordl_internal_get_child() const;

  constexpr ::System::Xml::XmlNode*& __cordl_internal_get_child();

  constexpr ::System::Xml::XmlNode* const& __cordl_internal_get_container() const;

  constexpr ::System::Xml::XmlNode*& __cordl_internal_get_container();

  constexpr bool const& __cordl_internal_get_isFirst() const;

  constexpr bool& __cordl_internal_get_isFirst();

  constexpr void __cordl_internal_set_child(::System::Xml::XmlNode* value);

  constexpr void __cordl_internal_set_container(::System::Xml::XmlNode* value);

  constexpr void __cordl_internal_set_isFirst(bool value);

  /// @brief Method .ctor, addr 0x4339f54, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNode* container);

  /// @brief Method get_Current, addr 0x433a048, size 0x74, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNode* get_Current();

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlChildEnumerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlChildEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlChildEnumerator(XmlChildEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlChildEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlChildEnumerator(XmlChildEnumerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7290 };

  /// @brief Field container, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlNode* ___container;

  /// @brief Field child, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlNode* ___child;

  /// @brief Field isFirst, offset: 0x20, size: 0x1, def value: None
  bool ___isFirst;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlChildEnumerator, ___container) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlChildEnumerator, ___child) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlChildEnumerator, ___isFirst) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlChildEnumerator, 0x28>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlChildEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlChildEnumerator*, "System.Xml", "XmlChildEnumerator");
