#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlNodeEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlNodeEventArgs)
namespace System::Xml {
class XmlNode;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlNodeEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlNodeEventArgs);
// Dependencies System.EventArgs
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlNodeEventArgs
class CORDL_TYPE XmlNodeEventArgs : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field lineNumber, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_lineNumber, put = __cordl_internal_set_lineNumber)) int32_t lineNumber;

  /// @brief Field linePosition, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_linePosition, put = __cordl_internal_set_linePosition)) int32_t linePosition;

  /// @brief Field o, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_o, put = __cordl_internal_set_o)) ::System::Object* o;

  /// @brief Field xmlNode, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_xmlNode, put = __cordl_internal_set_xmlNode)) ::System::Xml::XmlNode* xmlNode;

  static inline ::System::Xml::Serialization::XmlNodeEventArgs* New_ctor(::System::Xml::XmlNode* xmlNode, int32_t lineNumber, int32_t linePosition, ::System::Object* o);

  constexpr int32_t const& __cordl_internal_get_lineNumber() const;

  constexpr int32_t& __cordl_internal_get_lineNumber();

  constexpr int32_t const& __cordl_internal_get_linePosition() const;

  constexpr int32_t& __cordl_internal_get_linePosition();

  constexpr ::System::Object* const& __cordl_internal_get_o() const;

  constexpr ::System::Object*& __cordl_internal_get_o();

  constexpr ::System::Xml::XmlNode* const& __cordl_internal_get_xmlNode() const;

  constexpr ::System::Xml::XmlNode*& __cordl_internal_get_xmlNode();

  constexpr void __cordl_internal_set_lineNumber(int32_t value);

  constexpr void __cordl_internal_set_linePosition(int32_t value);

  constexpr void __cordl_internal_set_o(::System::Object* value);

  constexpr void __cordl_internal_set_xmlNode(::System::Xml::XmlNode* value);

  /// @brief Method .ctor, addr 0x4367e30, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNode* xmlNode, int32_t lineNumber, int32_t linePosition, ::System::Object* o);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNodeEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlNodeEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlNodeEventArgs(XmlNodeEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlNodeEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlNodeEventArgs(XmlNodeEventArgs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7392 };

  /// @brief Field o, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___o;

  /// @brief Field xmlNode, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlNode* ___xmlNode;

  /// @brief Field lineNumber, offset: 0x20, size: 0x4, def value: None
  int32_t ___lineNumber;

  /// @brief Field linePosition, offset: 0x24, size: 0x4, def value: None
  int32_t ___linePosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlNodeEventArgs, ___o) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlNodeEventArgs, ___xmlNode) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlNodeEventArgs, ___lineNumber) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlNodeEventArgs, ___linePosition) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlNodeEventArgs, 0x28>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlNodeEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlNodeEventArgs*, "System.Xml.Serialization", "XmlNodeEventArgs");
