#pragma once
// IWYU pragma private; include "GlobalNamespace\CommandNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(CommandNode)
namespace GlobalNamespace {
class ArgumentBase;
}
namespace GlobalNamespace {
class CommandNode___c__DisplayClass6_0;
}
namespace GlobalNamespace {
class CommandNode___c__DisplayClass7_0;
}
namespace GlobalNamespace {
class CommandNode___c__DisplayClass8_0;
}
namespace GlobalNamespace {
class CommandNode___c__DisplayClass9_0;
}
namespace GlobalNamespace {
class ConsoleCommandBase;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CommandNode;
}
namespace GlobalNamespace {
class CommandNode___c__DisplayClass6_0;
}
namespace GlobalNamespace {
class CommandNode___c__DisplayClass7_0;
}
namespace GlobalNamespace {
class CommandNode___c__DisplayClass8_0;
}
namespace GlobalNamespace {
class CommandNode___c__DisplayClass9_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::CommandNode*);
MARK_REF_T(::GlobalNamespace::CommandNode___c__DisplayClass6_0*);
MARK_REF_T(::GlobalNamespace::CommandNode___c__DisplayClass7_0*);
MARK_REF_T(::GlobalNamespace::CommandNode___c__DisplayClass8_0*);
MARK_REF_T(::GlobalNamespace::CommandNode___c__DisplayClass9_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommandNode*, "", "CommandNode");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommandNode___c__DisplayClass6_0*, "", "CommandNode/<>c__DisplayClass6_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommandNode___c__DisplayClass7_0*, "", "CommandNode/<>c__DisplayClass7_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommandNode___c__DisplayClass8_0*, "", "CommandNode/<>c__DisplayClass8_0");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CommandNode___c__DisplayClass9_0*, "", "CommandNode/<>c__DisplayClass9_0");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CommandNode/<>c__DisplayClass6_0
class CORDL_TYPE CommandNode___c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field commandNameSubstring, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_commandNameSubstring, put = __cordl_internal_set_commandNameSubstring)) ::StringW commandNameSubstring;

  static inline ::GlobalNamespace::CommandNode___c__DisplayClass6_0* New_ctor();

  /// @brief Method <IntegrateCommand>b__0, addr 0x32cc328, size 0x28, virtual false, abstract: false, final false
  inline bool _IntegrateCommand_b__0(::GlobalNamespace::CommandNode* node);

  constexpr ::StringW const& __cordl_internal_get_commandNameSubstring() const;

  constexpr ::StringW& __cordl_internal_get_commandNameSubstring();

  constexpr void __cordl_internal_set_commandNameSubstring(::StringW value);

  /// @brief Method .ctor, addr 0x32cbb08, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandNode___c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandNode___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandNode___c__DisplayClass6_0(CommandNode___c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandNode___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandNode___c__DisplayClass6_0(CommandNode___c__DisplayClass6_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19365 };

  /// @brief Field commandNameSubstring, offset: 0x10, size: 0x8, def value: None
  ::StringW ___commandNameSubstring;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandNode___c__DisplayClass6_0, ___commandNameSubstring) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CommandNode___c__DisplayClass6_0) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CommandNode/<>c__DisplayClass7_0
class CORDL_TYPE CommandNode___c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field inputArgumentName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_inputArgumentName, put = __cordl_internal_set_inputArgumentName)) ::StringW inputArgumentName;

  static inline ::GlobalNamespace::CommandNode___c__DisplayClass7_0* New_ctor();

  /// @brief Method <FindAutocompleteArgumentNames>b__0, addr 0x32cc350, size 0x20, virtual false, abstract: false, final false
  inline bool _FindAutocompleteArgumentNames_b__0(::StringW arg);

  constexpr ::StringW const& __cordl_internal_get_inputArgumentName() const;

  constexpr ::StringW& __cordl_internal_get_inputArgumentName();

  constexpr void __cordl_internal_set_inputArgumentName(::StringW value);

  /// @brief Method .ctor, addr 0x32cbcb8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandNode___c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandNode___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandNode___c__DisplayClass7_0(CommandNode___c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandNode___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandNode___c__DisplayClass7_0(CommandNode___c__DisplayClass7_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19366 };

  /// @brief Field inputArgumentName, offset: 0x10, size: 0x8, def value: None
  ::StringW ___inputArgumentName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandNode___c__DisplayClass7_0, ___inputArgumentName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CommandNode___c__DisplayClass7_0) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CommandNode/<>c__DisplayClass8_0
class CORDL_TYPE CommandNode___c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field inputArgumentValue, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_inputArgumentValue, put = __cordl_internal_set_inputArgumentValue)) ::StringW inputArgumentValue;

  static inline ::GlobalNamespace::CommandNode___c__DisplayClass8_0* New_ctor();

  /// @brief Method <FindAutocompleteArgumentValues>b__0, addr 0x32cc370, size 0x88, virtual false, abstract: false, final false
  inline bool _FindAutocompleteArgumentValues_b__0(::StringW autocompleteValue);

  constexpr ::StringW const& __cordl_internal_get_inputArgumentValue() const;

  constexpr ::StringW& __cordl_internal_get_inputArgumentValue();

  constexpr void __cordl_internal_set_inputArgumentValue(::StringW value);

  /// @brief Method .ctor, addr 0x32cbeb8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandNode___c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandNode___c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandNode___c__DisplayClass8_0(CommandNode___c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandNode___c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandNode___c__DisplayClass8_0(CommandNode___c__DisplayClass8_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19367 };

  /// @brief Field inputArgumentValue, offset: 0x10, size: 0x8, def value: None
  ::StringW ___inputArgumentValue;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandNode___c__DisplayClass8_0, ___inputArgumentValue) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CommandNode___c__DisplayClass8_0) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CommandNode/<>c__DisplayClass9_0
class CORDL_TYPE CommandNode___c__DisplayClass9_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field input, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_input, put = __cordl_internal_set_input)) ::StringW input;

  static inline ::GlobalNamespace::CommandNode___c__DisplayClass9_0* New_ctor();

  /// @brief Method <FindAutocompleteNodes>b__0, addr 0x32cc3f8, size 0x64, virtual false, abstract: false, final false
  inline bool _FindAutocompleteNodes_b__0(::GlobalNamespace::CommandNode* node);

  /// @brief Method <FindAutocompleteNodes>b__1, addr 0x32cc45c, size 0x24, virtual false, abstract: false, final false
  inline bool _FindAutocompleteNodes_b__1(::GlobalNamespace::CommandNode* node);

  constexpr ::StringW const& __cordl_internal_get_input() const;

  constexpr ::StringW& __cordl_internal_get_input();

  constexpr void __cordl_internal_set_input(::StringW value);

  /// @brief Method .ctor, addr 0x32cc1e4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandNode___c__DisplayClass9_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandNode___c__DisplayClass9_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandNode___c__DisplayClass9_0(CommandNode___c__DisplayClass9_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandNode___c__DisplayClass9_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandNode___c__DisplayClass9_0(CommandNode___c__DisplayClass9_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19368 };

  /// @brief Field input, offset: 0x10, size: 0x8, def value: None
  ::StringW ___input;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandNode___c__DisplayClass9_0, ___input) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CommandNode___c__DisplayClass9_0) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CommandNode
class CORDL_TYPE CommandNode : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass6_0 = ::GlobalNamespace::CommandNode___c__DisplayClass6_0;

  using __c__DisplayClass7_0 = ::GlobalNamespace::CommandNode___c__DisplayClass7_0;

  using __c__DisplayClass8_0 = ::GlobalNamespace::CommandNode___c__DisplayClass8_0;

  using __c__DisplayClass9_0 = ::GlobalNamespace::CommandNode___c__DisplayClass9_0;

  /// @brief Field arguments, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_arguments, put = __cordl_internal_set_arguments)) ::System::Collections::Generic::List_1<::StringW>* arguments;

  /// @brief Field argumentsMap, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_argumentsMap,
                      put = __cordl_internal_set_argumentsMap)) ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ArgumentBase*>* argumentsMap;

  /// @brief Field isCommand, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get_isCommand, put = __cordl_internal_set_isCommand)) bool isCommand;

  /// @brief Field nodes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_nodes, put = __cordl_internal_set_nodes)) ::System::Collections::Generic::List_1<::GlobalNamespace::CommandNode*>* nodes;

  /// @brief Field text, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_text, put = __cordl_internal_set_text)) ::StringW text;

  /// @brief Method FindAutocompleteArgumentNames, addr 0x32cbb0c, size 0x1ac, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> FindAutocompleteArgumentNames(::StringW inputArgumentName);

  /// @brief Method FindAutocompleteArgumentValues, addr 0x32cbcbc, size 0x1fc, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> FindAutocompleteArgumentValues(::StringW inputArgumentName, ::StringW inputArgumentValue);

  /// @brief Method FindAutocompleteNodes, addr 0x32cbedc, size 0x308, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::CommandNode*> FindAutocompleteNodes(::StringW input, bool exact);

  /// @brief Method IntegrateCommand, addr 0x32cb758, size 0x3b0, virtual false, abstract: false, final false
  inline void IntegrateCommand(::GlobalNamespace::ConsoleCommandBase* newCommand);

  static inline ::GlobalNamespace::CommandNode* New_ctor();

  /// @brief Method ToString, addr 0x32cb750, size 0x8, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_arguments() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_arguments();

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ArgumentBase*>* const& __cordl_internal_get_argumentsMap() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ArgumentBase*>*& __cordl_internal_get_argumentsMap();

  constexpr bool const& __cordl_internal_get_isCommand() const;

  constexpr bool& __cordl_internal_get_isCommand();

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CommandNode*>* const& __cordl_internal_get_nodes() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::CommandNode*>*& __cordl_internal_get_nodes();

  constexpr ::StringW const& __cordl_internal_get_text() const;

  constexpr ::StringW& __cordl_internal_get_text();

  constexpr void __cordl_internal_set_arguments(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set_argumentsMap(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ArgumentBase*>* value);

  constexpr void __cordl_internal_set_isCommand(bool value);

  constexpr void __cordl_internal_set_nodes(::System::Collections::Generic::List_1<::GlobalNamespace::CommandNode*>* value);

  constexpr void __cordl_internal_set_text(::StringW value);

  /// @brief Method .ctor, addr 0x32cc1e8, size 0x140, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandNode(CommandNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandNode(CommandNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19369 };

  /// @brief Field argumentsMap, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::ArgumentBase*>* ___argumentsMap;

  /// @brief Field arguments, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ___arguments;

  /// @brief Field nodes, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::CommandNode*>* ___nodes;

  /// @brief Field text, offset: 0x28, size: 0x8, def value: None
  ::StringW ___text;

  /// @brief Field isCommand, offset: 0x30, size: 0x1, def value: None
  bool ___isCommand;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandNode, ___argumentsMap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandNode, ___arguments) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandNode, ___nodes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandNode, ___text) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandNode, ___isCommand) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CommandNode) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
