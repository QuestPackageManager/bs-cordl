#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlNodeChangedAction_def.hpp"
#include "System/zzzz__EventArgs_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlNodeChangedEventArgs)
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
struct XmlNodeChangedAction;
}
// Forward declare root types
namespace System::Xml {
class XmlNodeChangedEventArgs;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlNodeChangedEventArgs);
// Type: System.Xml::XmlNodeChangedEventArgs
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2376)), TypeDefinitionIndex(TypeDefinitionIndex(11511))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11521))
// CS Name: ::System.Xml::XmlNodeChangedEventArgs*
class CORDL_TYPE XmlNodeChangedEventArgs : public ::System::EventArgs {
public:
  // Declarations
  /// @brief Field action, offset 0x10, size 0x4
  __declspec(property(get = __get_action, put = __set_action))::System::Xml::XmlNodeChangedAction action;

  /// @brief Field node, offset 0x18, size 0x8
  __declspec(property(get = __get_node, put = __set_node))::System::Xml::XmlNode* node;

  /// @brief Field oldParent, offset 0x20, size 0x8
  __declspec(property(get = __get_oldParent, put = __set_oldParent))::System::Xml::XmlNode* oldParent;

  /// @brief Field newParent, offset 0x28, size 0x8
  __declspec(property(get = __get_newParent, put = __set_newParent))::System::Xml::XmlNode* newParent;

  /// @brief Field oldValue, offset 0x30, size 0x8
  __declspec(property(get = __get_oldValue, put = __set_oldValue))::StringW oldValue;

  /// @brief Field newValue, offset 0x38, size 0x8
  __declspec(property(get = __get_newValue, put = __set_newValue))::StringW newValue;

  __declspec(property(get = get_Action))::System::Xml::XmlNodeChangedAction Action;

  constexpr ::System::Xml::XmlNodeChangedAction& __get_action();

  constexpr ::System::Xml::XmlNodeChangedAction const& __get_action() const;

  constexpr void __set_action(::System::Xml::XmlNodeChangedAction value);

  constexpr ::System::Xml::XmlNode*& __get_node();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNode*> const& __get_node() const;

  constexpr void __set_node(::System::Xml::XmlNode* value);

  constexpr ::System::Xml::XmlNode*& __get_oldParent();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNode*> const& __get_oldParent() const;

  constexpr void __set_oldParent(::System::Xml::XmlNode* value);

  constexpr ::System::Xml::XmlNode*& __get_newParent();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlNode*> const& __get_newParent() const;

  constexpr void __set_newParent(::System::Xml::XmlNode* value);

  constexpr ::StringW& __get_oldValue();

  constexpr ::StringW const& __get_oldValue() const;

  constexpr void __set_oldValue(::StringW value);

  constexpr ::StringW& __get_newValue();

  constexpr ::StringW const& __get_newValue() const;

  constexpr void __set_newValue(::StringW value);

  static inline ::System::Xml::XmlNodeChangedEventArgs* New_ctor(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* oldParent, ::System::Xml::XmlNode* newParent, ::StringW oldValue,
                                                                 ::StringW newValue, ::System::Xml::XmlNodeChangedAction action);

  /// @brief Method .ctor addr 0x2891780 size 0x9c virtual false final false
  inline void _ctor(::System::Xml::XmlNode* node, ::System::Xml::XmlNode* oldParent, ::System::Xml::XmlNode* newParent, ::StringW oldValue, ::StringW newValue,
                    ::System::Xml::XmlNodeChangedAction action);

  /// @brief Method get_Action addr 0x289181c size 0x8 virtual false final false
  inline ::System::Xml::XmlNodeChangedAction get_Action();

  // Ctor Parameters [CppParam { name: "", ty: "XmlNodeChangedEventArgs", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlNodeChangedEventArgs(XmlNodeChangedEventArgs&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlNodeChangedEventArgs", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlNodeChangedEventArgs(XmlNodeChangedEventArgs const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNodeChangedEventArgs();

public:
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
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlNodeChangedEventArgs, 0x40>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlNodeChangedEventArgs);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNodeChangedEventArgs*, "System.Xml", "XmlNodeChangedEventArgs");
