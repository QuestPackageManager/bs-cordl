#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlAttributeEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlAttributeEventArgs)
namespace System::Xml {
class XmlAttribute;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlAttributeEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlAttributeEventArgs);
// Dependencies System.EventArgs
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlAttributeEventArgs
class CORDL_TYPE XmlAttributeEventArgs : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field attr, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_attr, put = __cordl_internal_set_attr)) ::System::Xml::XmlAttribute* attr;

  /// @brief Field lineNumber, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_lineNumber, put = __cordl_internal_set_lineNumber)) int32_t lineNumber;

  /// @brief Field linePosition, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_linePosition, put = __cordl_internal_set_linePosition)) int32_t linePosition;

  /// @brief Field o, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_o, put = __cordl_internal_set_o)) ::System::Object* o;

  /// @brief Field qnames, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_qnames, put = __cordl_internal_set_qnames)) ::StringW qnames;

  static inline ::System::Xml::Serialization::XmlAttributeEventArgs* New_ctor(::System::Xml::XmlAttribute* attr, int32_t lineNumber, int32_t linePosition, ::System::Object* o, ::StringW qnames);

  constexpr ::System::Xml::XmlAttribute* const& __cordl_internal_get_attr() const;

  constexpr ::System::Xml::XmlAttribute*& __cordl_internal_get_attr();

  constexpr int32_t const& __cordl_internal_get_lineNumber() const;

  constexpr int32_t& __cordl_internal_get_lineNumber();

  constexpr int32_t const& __cordl_internal_get_linePosition() const;

  constexpr int32_t& __cordl_internal_get_linePosition();

  constexpr ::System::Object* const& __cordl_internal_get_o() const;

  constexpr ::System::Object*& __cordl_internal_get_o();

  constexpr ::StringW const& __cordl_internal_get_qnames() const;

  constexpr ::StringW& __cordl_internal_get_qnames();

  constexpr void __cordl_internal_set_attr(::System::Xml::XmlAttribute* value);

  constexpr void __cordl_internal_set_lineNumber(int32_t value);

  constexpr void __cordl_internal_set_linePosition(int32_t value);

  constexpr void __cordl_internal_set_o(::System::Object* value);

  constexpr void __cordl_internal_set_qnames(::StringW value);

  /// @brief Method .ctor, addr 0x43660b8, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlAttribute* attr, int32_t lineNumber, int32_t linePosition, ::System::Object* o, ::StringW qnames);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlAttributeEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlAttributeEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlAttributeEventArgs(XmlAttributeEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlAttributeEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlAttributeEventArgs(XmlAttributeEventArgs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7383 };

  /// @brief Field o, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___o;

  /// @brief Field attr, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlAttribute* ___attr;

  /// @brief Field qnames, offset: 0x20, size: 0x8, def value: None
  ::StringW ___qnames;

  /// @brief Field lineNumber, offset: 0x28, size: 0x4, def value: None
  int32_t ___lineNumber;

  /// @brief Field linePosition, offset: 0x2c, size: 0x4, def value: None
  int32_t ___linePosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlAttributeEventArgs, ___o) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlAttributeEventArgs, ___attr) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlAttributeEventArgs, ___qnames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlAttributeEventArgs, ___lineNumber) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlAttributeEventArgs, ___linePosition) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlAttributeEventArgs, 0x30>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlAttributeEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlAttributeEventArgs*, "System.Xml.Serialization", "XmlAttributeEventArgs");
