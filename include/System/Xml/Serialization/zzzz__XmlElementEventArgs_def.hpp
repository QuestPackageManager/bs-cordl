#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlElementEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlElementEventArgs)
namespace System::Xml {
class XmlElement;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Serialization {
class XmlElementEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::XmlElementEventArgs);
// Dependencies System.EventArgs
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: System.Xml.Serialization.XmlElementEventArgs
class CORDL_TYPE XmlElementEventArgs : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field elem, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_elem, put = __cordl_internal_set_elem)) ::System::Xml::XmlElement* elem;

  /// @brief Field lineNumber, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_lineNumber, put = __cordl_internal_set_lineNumber)) int32_t lineNumber;

  /// @brief Field linePosition, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_linePosition, put = __cordl_internal_set_linePosition)) int32_t linePosition;

  /// @brief Field o, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_o, put = __cordl_internal_set_o)) ::System::Object* o;

  /// @brief Field qnames, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_qnames, put = __cordl_internal_set_qnames)) ::StringW qnames;

  static inline ::System::Xml::Serialization::XmlElementEventArgs* New_ctor(::System::Xml::XmlElement* elem, int32_t lineNumber, int32_t linePosition, ::System::Object* o, ::StringW qnames);

  constexpr ::System::Xml::XmlElement* const& __cordl_internal_get_elem() const;

  constexpr ::System::Xml::XmlElement*& __cordl_internal_get_elem();

  constexpr int32_t const& __cordl_internal_get_lineNumber() const;

  constexpr int32_t& __cordl_internal_get_lineNumber();

  constexpr int32_t const& __cordl_internal_get_linePosition() const;

  constexpr int32_t& __cordl_internal_get_linePosition();

  constexpr ::System::Object* const& __cordl_internal_get_o() const;

  constexpr ::System::Object*& __cordl_internal_get_o();

  constexpr ::StringW const& __cordl_internal_get_qnames() const;

  constexpr ::StringW& __cordl_internal_get_qnames();

  constexpr void __cordl_internal_set_elem(::System::Xml::XmlElement* value);

  constexpr void __cordl_internal_set_lineNumber(int32_t value);

  constexpr void __cordl_internal_set_linePosition(int32_t value);

  constexpr void __cordl_internal_set_o(::System::Object* value);

  constexpr void __cordl_internal_set_qnames(::StringW value);

  /// @brief Method .ctor, addr 0x4366264, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlElement* elem, int32_t lineNumber, int32_t linePosition, ::System::Object* o, ::StringW qnames);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlElementEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlElementEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlElementEventArgs(XmlElementEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlElementEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlElementEventArgs(XmlElementEventArgs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7385 };

  /// @brief Field o, offset: 0x10, size: 0x8, def value: None
  ::System::Object* ___o;

  /// @brief Field elem, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlElement* ___elem;

  /// @brief Field qnames, offset: 0x20, size: 0x8, def value: None
  ::StringW ___qnames;

  /// @brief Field lineNumber, offset: 0x28, size: 0x4, def value: None
  int32_t ___lineNumber;

  /// @brief Field linePosition, offset: 0x2c, size: 0x4, def value: None
  int32_t ___linePosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Serialization::XmlElementEventArgs, ___o) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlElementEventArgs, ___elem) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlElementEventArgs, ___qnames) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlElementEventArgs, ___lineNumber) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::XmlElementEventArgs, ___linePosition) == 0x2c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::XmlElementEventArgs, 0x30>, "Size mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::XmlElementEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::XmlElementEventArgs*, "System.Xml.Serialization", "XmlElementEventArgs");
