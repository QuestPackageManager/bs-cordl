#pragma once
// IWYU pragma private; include "GlobalNamespace\ConsoleCommandBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ArgumentBase_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConsoleCommandBase)
namespace GlobalNamespace {
class ArgumentBase;
}
namespace GlobalNamespace {
class ConsoleCommandBase___c;
}
namespace GlobalNamespace {
class ConsoleCommandBase___c__DisplayClass23_0;
}
namespace GlobalNamespace {
struct ConsoleMessage;
}
namespace GlobalNamespace {
class TerminalController;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
template <typename T> class IComparable_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace GlobalNamespace {
class ConsoleCommandBase;
}
namespace GlobalNamespace {
class ConsoleCommandBase___c;
}
namespace GlobalNamespace {
class ConsoleCommandBase___c__DisplayClass23_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ConsoleCommandBase*);
MARK_REF_T(::GlobalNamespace::ConsoleCommandBase___c*);
MARK_REF_T(::GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConsoleCommandBase*, "", "ConsoleCommandBase");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConsoleCommandBase___c*, "", "ConsoleCommandBase/<>c");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0*, "", "ConsoleCommandBase/<>c__DisplayClass23_0");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConsoleCommandBase/<>c
class CORDL_TYPE ConsoleCommandBase___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::ConsoleCommandBase___c* __9;

  /// @brief Field <>9__23_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__23_0, put = setStaticF___9__23_0)) ::System::Func_2<::StringW, bool>* __9__23_0;

  static inline ::GlobalNamespace::ConsoleCommandBase___c* New_ctor();

  /// @brief Method <AreArgumentsValid>b__23_0, addr 0x32cdfdc, size 0x30, virtual false, abstract: false, final false
  inline bool _AreArgumentsValid_b__23_0(::StringW x);

  /// @brief Method .ctor, addr 0x32cdfd8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::ConsoleCommandBase___c* getStaticF___9();

  static inline ::System::Func_2<::StringW, bool>* getStaticF___9__23_0();

  static inline void setStaticF___9(::GlobalNamespace::ConsoleCommandBase___c* value);

  static inline void setStaticF___9__23_0(::System::Func_2<::StringW, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConsoleCommandBase___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConsoleCommandBase___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConsoleCommandBase___c(ConsoleCommandBase___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConsoleCommandBase___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConsoleCommandBase___c(ConsoleCommandBase___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19374 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ConsoleCommandBase___c) == 0x10, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConsoleCommandBase/<>c__DisplayClass23_0
class CORDL_TYPE ConsoleCommandBase___c__DisplayClass23_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field matchedArguments, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_matchedArguments,
                      put = __cordl_internal_set_matchedArguments)) ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* matchedArguments;

  static inline ::GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0* New_ctor();

  /// @brief Method <AreArgumentsValid>b__1, addr 0x32ce00c, size 0x90, virtual false, abstract: false, final false
  inline bool _AreArgumentsValid_b__1(::GlobalNamespace::ArgumentBase* arg);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* const& __cordl_internal_get_matchedArguments() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*& __cordl_internal_get_matchedArguments();

  constexpr void __cordl_internal_set_matchedArguments(::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* value);

  /// @brief Method .ctor, addr 0x32cd1a4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConsoleCommandBase___c__DisplayClass23_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConsoleCommandBase___c__DisplayClass23_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConsoleCommandBase___c__DisplayClass23_0(ConsoleCommandBase___c__DisplayClass23_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConsoleCommandBase___c__DisplayClass23_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConsoleCommandBase___c__DisplayClass23_0(ConsoleCommandBase___c__DisplayClass23_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19375 };

  /// @brief Field matchedArguments, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* ___matchedArguments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0, ___matchedArguments) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0) == 0x18, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies ArgumentBase, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConsoleCommandBase
class CORDL_TYPE ConsoleCommandBase : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::ConsoleCommandBase___c;

  using __c__DisplayClass23_0 = ::GlobalNamespace::ConsoleCommandBase___c__DisplayClass23_0;

  __declspec(property(get = get_AllowsUnknownArguments)) bool AllowsUnknownArguments;

  /// @brief Field _arguments, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__arguments, put = __cordl_internal_set__arguments)) ::ArrayW<::GlobalNamespace::ArgumentBase*> _arguments;

  /// @brief Field _argumentsText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__argumentsText, put = __cordl_internal_set__argumentsText)) ::StringW _argumentsText;

  /// @brief Field _console, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__console, put = __cordl_internal_set__console)) ::GlobalNamespace::TerminalController* _console;

  /// @brief Field _fullDescriptionText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__fullDescriptionText, put = __cordl_internal_set__fullDescriptionText)) ::StringW _fullDescriptionText;

  /// @brief Field _unknownArguments, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__unknownArguments, put = __cordl_internal_set__unknownArguments)) ::ArrayW<::StringW> _unknownArguments;

  __declspec(property(get = get_arguments)) ::ArrayW<::GlobalNamespace::ArgumentBase*> arguments;

  __declspec(property(get = get_commandName)) ::StringW commandName;

  __declspec(property(get = get_description)) ::StringW description;

  __declspec(property(get = get_unknownArguments)) ::ArrayW<::StringW> unknownArguments;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::ConsoleCommandBase*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::ConsoleCommandBase*>*() noexcept;

  /// @brief Method AreArgumentsValid, addr 0x32ccf1c, size 0x288, virtual false, abstract: false, final false
  inline bool AreArgumentsValid(::ArrayW<::StringW> args, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  /// @brief Method CompareTo, addr 0x32cdf2c, size 0x54, virtual true, abstract: false, final true
  inline int32_t CompareTo(::GlobalNamespace::ConsoleCommandBase* other);

  /// @brief Method ExecuteAsync, addr 0x32cce64, size 0xb8, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ExecuteAsync(::ArrayW<::StringW> args, ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  /// @brief Method ExecuteAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task_1<bool>* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  /// @brief Method GenerateDescriptions, addr 0x32cca04, size 0x328, virtual false, abstract: false, final false
  inline void GenerateDescriptions();

  /// @brief Method GetAllArgumentFields, addr 0x32ccd34, size 0x128, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Reflection::FieldInfo*> GetAllArgumentFields(::System::Type* type);

  /// @brief Method GetArguments, addr 0x32cc7ac, size 0x258, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::ArgumentBase*> GetArguments();

  /// @brief Method GetArgumentsText, addr 0x32cce5c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetArgumentsText();

  /// @brief Method GetFullDescription, addr 0x32ccd2c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW GetFullDescription();

  /// @brief Method GetInvalidArgumentMessage, addr 0x32cda98, size 0x43c, virtual false, abstract: false, final false
  inline void GetInvalidArgumentMessage(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ArgumentBase*>* missingArguments,
                                        ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  /// @brief Method Initialize, addr 0x32cc78c, size 0x20, virtual true, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::ConsoleCommandBase* New_ctor();

  /// @brief Method ParseMatchedArguments, addr 0x32cd1a8, size 0x554, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* ParseMatchedArguments(::ArrayW<::StringW> args,
                                                                                                         ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages);

  /// @brief Method ParseUnmatchedArguments, addr 0x32cd6fc, size 0x39c, virtual false, abstract: false, final false
  inline bool ParseUnmatchedArguments(::ArrayW<::StringW> args, ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* matchedArguments,
                                      ::System::Collections::Generic::List_1<::GlobalNamespace::ConsoleMessage>* messages, bool parseOnlyRequired);

  /// @brief Method Reset, addr 0x32cded4, size 0x58, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::ArrayW<::GlobalNamespace::ArgumentBase*> const& __cordl_internal_get__arguments() const;

  constexpr ::ArrayW<::GlobalNamespace::ArgumentBase*>& __cordl_internal_get__arguments();

  constexpr ::StringW const& __cordl_internal_get__argumentsText() const;

  constexpr ::StringW& __cordl_internal_get__argumentsText();

  constexpr ::GlobalNamespace::TerminalController* const& __cordl_internal_get__console() const;

  constexpr ::GlobalNamespace::TerminalController*& __cordl_internal_get__console();

  constexpr ::StringW const& __cordl_internal_get__fullDescriptionText() const;

  constexpr ::StringW& __cordl_internal_get__fullDescriptionText();

  constexpr ::ArrayW<::StringW> const& __cordl_internal_get__unknownArguments() const;

  constexpr ::ArrayW<::StringW>& __cordl_internal_get__unknownArguments();

  constexpr void __cordl_internal_set__arguments(::ArrayW<::GlobalNamespace::ArgumentBase*> value);

  constexpr void __cordl_internal_set__argumentsText(::StringW value);

  constexpr void __cordl_internal_set__console(::GlobalNamespace::TerminalController* value);

  constexpr void __cordl_internal_set__fullDescriptionText(::StringW value);

  constexpr void __cordl_internal_set__unknownArguments(::ArrayW<::StringW> value);

  /// @brief Method .ctor, addr 0x32cdf80, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AllowsUnknownArguments, addr 0x32cc784, size 0x8, virtual true, abstract: false, final false
  inline bool get_AllowsUnknownArguments();

  /// @brief Method get_arguments, addr 0x32cc774, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::ArgumentBase*> get_arguments();

  /// @brief Method get_commandName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_commandName();

  /// @brief Method get_description, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW get_description();

  /// @brief Method get_unknownArguments, addr 0x32cc77c, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::StringW> get_unknownArguments();

  /// @brief Convert to "::System::IComparable_1<::GlobalNamespace::ConsoleCommandBase*>"
  constexpr ::System::IComparable_1<::GlobalNamespace::ConsoleCommandBase*>* i___System__IComparable_1___GlobalNamespace__ConsoleCommandBase__() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConsoleCommandBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConsoleCommandBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConsoleCommandBase(ConsoleCommandBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConsoleCommandBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConsoleCommandBase(ConsoleCommandBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19376 };

  /// @brief Field _console, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::TerminalController* ____console;

  /// @brief Field _argumentsText, offset: 0x18, size: 0x8, def value: None
  ::StringW ____argumentsText;

  /// @brief Field _fullDescriptionText, offset: 0x20, size: 0x8, def value: None
  ::StringW ____fullDescriptionText;

  /// @brief Field _arguments, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::ArgumentBase*> ____arguments;

  /// @brief Field _unknownArguments, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::StringW> ____unknownArguments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConsoleCommandBase, ____console) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsoleCommandBase, ____argumentsText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsoleCommandBase, ____fullDescriptionText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsoleCommandBase, ____arguments) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsoleCommandBase, ____unknownArguments) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ConsoleCommandBase) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace
