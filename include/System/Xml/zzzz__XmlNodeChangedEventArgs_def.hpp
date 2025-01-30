#pragma once
// IWYU pragma private; include "System/Xml/XmlNodeChangedEventArgs.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlNodeChangedAction_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlNodeChangedEventArgs)
namespace System::Xml {
struct XmlNodeChangedAction;
}
namespace System::Xml {
class XmlNode;
}
// Forward declare root types
namespace System::Xml {
class XmlNodeChangedEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlNodeChangedEventArgs);
// Dependencies System.EventArgs, System.Xml.XmlNodeChangedAction
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlNodeChangedEventArgs
class CORDL_TYPE XmlNodeChangedEventArgs : public ::System::EventArgs {
public:
  // Declarations
  __declspec(property(get = get_Action)) ::System::Xml::XmlNodeChangedAction Action;

  /// @brief Field action, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_action, put = __cordl_internal_set_action)) ::System::Xml::XmlNodeChangedAction action;

  /// @brief Field newParent, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_newParent, put = __cordl_internal_set_newParent)) ::System::Xml::XmlNode* newParent;

  /// @brief Field newValue, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_newValue, put = __cordl_internal_set_newValue)) ::StringW newValue;

  /// @brief Field node, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_node, put = __cordl_internal_set_node)) ::System::Xml::XmlNode* node;

  /// @brief Field oldParent, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_oldParent, put = __cordl_internal_set_oldParent)) ::System::Xml::XmlNode* oldParent;

  /// @brief Field oldValue, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_oldValue, put = __cordl_internal_set_oldValue)) ::StringW oldValue;

  static inline ::System::Xml::XmlNodeChangedEventArgs* New_ctor(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* oldParent, ::System::Xml::XmlNode* newParent, ::StringW oldValue,
                                                                 ::StringW newValue, ::System::Xml::XmlNodeChangedAction action);

  constexpr ::System::Xml::XmlNodeChangedAction const& __cordl_internal_get_action() const;

  constexpr ::System::Xml::XmlNodeChangedAction& __cordl_internal_get_action();

  constexpr ::System::Xml::XmlNode* const& __cordl_internal_get_newParent() const;

  constexpr ::System::Xml::XmlNode*& __cordl_internal_get_newParent();

  constexpr ::StringW const& __cordl_internal_get_newValue() const;

  constexpr ::StringW& __cordl_internal_get_newValue();

  constexpr ::System::Xml::XmlNode* const& __cordl_internal_get_node() const;

  constexpr ::System::Xml::XmlNode*& __cordl_internal_get_node();

  constexpr ::System::Xml::XmlNode* const& __cordl_internal_get_oldParent() const;

  constexpr ::System::Xml::XmlNode*& __cordl_internal_get_oldParent();

  constexpr ::StringW const& __cordl_internal_get_oldValue() const;

  constexpr ::StringW& __cordl_internal_get_oldValue();

  constexpr void __cordl_internal_set_action(::System::Xml::XmlNodeChangedAction value);

  constexpr void __cordl_internal_set_newParent(::System::Xml::XmlNode* value);

  constexpr void __cordl_internal_set_newValue(::StringW value);

  constexpr void __cordl_internal_set_node(::System::Xml::XmlNode* value);

  constexpr void __cordl_internal_set_oldParent(::System::Xml::XmlNode* value);

  constexpr void __cordl_internal_set_oldValue(::StringW value);

  /// @brief Method .ctor, addr 0x4347150, size 0x9c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* oldParent, ::System::Xml::XmlNode* newParent, ::StringW oldValue, ::StringW newValue,
                    ::System::Xml::XmlNodeChangedAction action);

  /// @brief Method get_Action, addr 0x43471ec, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::XmlNodeChangedAction get_Action();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNodeChangedEventArgs();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlNodeChangedEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlNodeChangedEventArgs(XmlNodeChangedEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlNodeChangedEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlNodeChangedEventArgs(XmlNodeChangedEventArgs const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7309 };

  /// @brief Field action, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::XmlNodeChangedAction ___action;

  /// @brief Field node, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlNode* ___node;

  /// @brief Field oldParent, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::XmlNode* ___oldParent;

  /// @brief Field newParent, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::XmlNode* ___newParent;

  /// @brief Field oldValue, offset: 0x30, size: 0x8, def value: None
  ::StringW ___oldValue;

  /// @brief Field newValue, offset: 0x38, size: 0x8, def value: None
  ::StringW ___newValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlNodeChangedEventArgs, ___action) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeChangedEventArgs, ___node) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeChangedEventArgs, ___oldParent) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeChangedEventArgs, ___newParent) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeChangedEventArgs, ___oldValue) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlNodeChangedEventArgs, ___newValue) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlNodeChangedEventArgs, 0x40>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlNodeChangedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNodeChangedEventArgs*, "System.Xml", "XmlNodeChangedEventArgs");
