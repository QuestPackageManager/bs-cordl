#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XmlChildEnumerator)
namespace System::Collections {
class IEnumerator;
}
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
// Type: System.Xml::XmlChildEnumerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11501))
// CS Name: ::System.Xml::XmlChildEnumerator*
class CORDL_TYPE XmlChildEnumerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field container, offset 0x10, size 0x8
  __declspec(property(get = __get_container, put = __set_container))::System::Xml::XmlNode* container;

  /// @brief Field child, offset 0x18, size 0x8
  __declspec(property(get = __get_child, put = __set_child))::System::Xml::XmlNode* child;

  /// @brief Field isFirst, offset 0x20, size 0x1
  __declspec(property(get = __get_isFirst, put = __set_isFirst)) bool isFirst;

  __declspec(property(get = System_Collections_IEnumerator_get_Current))::System::Object* System_Collections_IEnumerator_Current;

  __declspec(property(get = get_Current))::System::Xml::XmlNode* Current;

  /// @brief Convert operator to "::System::Collections::IEnumerator"
  constexpr operator ::System::Collections::IEnumerator*() noexcept;

  /// @brief Convert to "::System::Collections::IEnumerator"
  constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

  constexpr ::System::Xml::XmlNode*& __get_container();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNode*> const& __get_container() const;

  constexpr void __set_container(::System::Xml::XmlNode* value);

  constexpr ::System::Xml::XmlNode*& __get_child();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNode*> const& __get_child() const;

  constexpr void __set_child(::System::Xml::XmlNode* value);

  constexpr bool& __get_isFirst();

  constexpr bool const& __get_isFirst() const;

  constexpr void __set_isFirst(bool value);

  static inline ::System::Xml::XmlChildEnumerator* New_ctor(::System::Xml::XmlNode* container);

  /// @brief Method .ctor, addr 0x2883d70, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNode* container);

  /// @brief Method System.Collections.IEnumerator.MoveNext, addr 0x2883dc0, size 0x4, virtual true, abstract: false, final true
  inline bool System_Collections_IEnumerator_MoveNext();

  /// @brief Method MoveNext, addr 0x2883dc4, size 0x64, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method System.Collections.IEnumerator.Reset, addr 0x2883e28, size 0x38, virtual true, abstract: false, final true
  inline void System_Collections_IEnumerator_Reset();

  /// @brief Method System.Collections.IEnumerator.get_Current, addr 0x2883e60, size 0x4, virtual true, abstract: false, final true
  inline ::System::Object* System_Collections_IEnumerator_get_Current();

  /// @brief Method get_Current, addr 0x2883e64, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNode* get_Current();

  // Ctor Parameters [CppParam { name: "", ty: "XmlChildEnumerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlChildEnumerator(XmlChildEnumerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlChildEnumerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlChildEnumerator(XmlChildEnumerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlChildEnumerator();

public:
  /// @brief Field container, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::XmlNode* ___container;

  /// @brief Field child, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlNode* ___child;

  /// @brief Field isFirst, offset: 0x20, size: 0x1, def value: None
  bool ___isFirst;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlChildEnumerator, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlChildEnumerator, ___container) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlChildEnumerator, ___child) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlChildEnumerator, ___isFirst) == 0x20, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlChildEnumerator);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlChildEnumerator*, "System.Xml", "XmlChildEnumerator");
