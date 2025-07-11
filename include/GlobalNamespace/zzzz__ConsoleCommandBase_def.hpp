#pragma once
// IWYU pragma private; include "GlobalNamespace/ConsoleCommandBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConsoleCommandBase)
namespace GlobalNamespace {
class ArgumentBase;
}
namespace GlobalNamespace {
class ConsoleCommandBase___c;
}
namespace GlobalNamespace {
class ConsoleCommandBase___c__DisplayClass11_0;
}
namespace GlobalNamespace {
struct DebugConsoleController_ConsoleMessage;
}
namespace GlobalNamespace {
class DebugConsoleController;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class ConsoleCommandBase;
}
namespace GlobalNamespace {
class ConsoleCommandBase___c;
}
namespace GlobalNamespace {
class ConsoleCommandBase___c__DisplayClass11_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ConsoleCommandBase);
MARK_REF_PTR_T(::GlobalNamespace::ConsoleCommandBase___c);
MARK_REF_PTR_T(::GlobalNamespace::ConsoleCommandBase___c__DisplayClass11_0);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConsoleCommandBase/<>c
class CORDL_TYPE ConsoleCommandBase___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::GlobalNamespace::ConsoleCommandBase___c* __9;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0)) ::System::Func_2<::StringW, bool>* __9__11_0;

  static inline ::GlobalNamespace::ConsoleCommandBase___c* New_ctor();

  /// @brief Method <ParseUnmatchedArguments>b__11_0, addr 0x3b0aed0, size 0x54, virtual false, abstract: false, final false
  inline bool _ParseUnmatchedArguments_b__11_0(::StringW x);

  /// @brief Method .ctor, addr 0x3b0aec8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::ConsoleCommandBase___c* getStaticF___9();

  static inline ::System::Func_2<::StringW, bool>* getStaticF___9__11_0();

  static inline void setStaticF___9(::GlobalNamespace::ConsoleCommandBase___c* value);

  static inline void setStaticF___9__11_0(::System::Func_2<::StringW, bool>* value);

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5024 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConsoleCommandBase___c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConsoleCommandBase/<>c__DisplayClass11_0
class CORDL_TYPE ConsoleCommandBase___c__DisplayClass11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field matchedArguments, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_matchedArguments,
                      put = __cordl_internal_set_matchedArguments)) ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* matchedArguments;

  static inline ::GlobalNamespace::ConsoleCommandBase___c__DisplayClass11_0* New_ctor();

  /// @brief Method <ParseUnmatchedArguments>b__1, addr 0x3b0af24, size 0x84, virtual false, abstract: false, final false
  inline bool _ParseUnmatchedArguments_b__1(::GlobalNamespace::ArgumentBase* arg);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* const& __cordl_internal_get_matchedArguments() const;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*& __cordl_internal_get_matchedArguments();

  constexpr void __cordl_internal_set_matchedArguments(::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* value);

  /// @brief Method .ctor, addr 0x3b0ace8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConsoleCommandBase___c__DisplayClass11_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConsoleCommandBase___c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConsoleCommandBase___c__DisplayClass11_0(ConsoleCommandBase___c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConsoleCommandBase___c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConsoleCommandBase___c__DisplayClass11_0(ConsoleCommandBase___c__DisplayClass11_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5025 };

  /// @brief Field matchedArguments, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* ___matchedArguments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConsoleCommandBase___c__DisplayClass11_0, ___matchedArguments) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConsoleCommandBase___c__DisplayClass11_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies System.IComparable`1<T>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ConsoleCommandBase
class CORDL_TYPE ConsoleCommandBase : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::ConsoleCommandBase___c;

  using __c__DisplayClass11_0 = ::GlobalNamespace::ConsoleCommandBase___c__DisplayClass11_0;

  /// @brief Field _arguments, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__arguments, put = __cordl_internal_set__arguments)) ::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> _arguments;

  /// @brief Field _console, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__console, put = __cordl_internal_set__console)) ::GlobalNamespace::DebugConsoleController* _console;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::ConsoleCommandBase*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::ConsoleCommandBase*>*() noexcept;

  /// @brief Method AreArgumentsValid, addr 0x3b09da8, size 0xb8, virtual false, abstract: false, final false
  inline bool AreArgumentsValid(::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Collections::Generic::List_1<::GlobalNamespace::DebugConsoleController_ConsoleMessage>* messages);

  /// @brief Method CompareTo, addr 0x3b0ae10, size 0x54, virtual true, abstract: false, final true
  inline int32_t CompareTo(::GlobalNamespace::ConsoleCommandBase* other);

  /// @brief Method ExecuteAsync, addr 0x3b09cd8, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ExecuteAsync(::ArrayW<::StringW, ::Array<::StringW>*> args,
                                                        ::System::Collections::Generic::List_1<::GlobalNamespace::DebugConsoleController_ConsoleMessage>* messages);

  /// @brief Method ExecuteAsync, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::DebugConsoleController_ConsoleMessage>* messages);

  /// @brief Method GetArguments, addr 0x3b09810, size 0x264, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> GetArguments();

  /// @brief Method GetArgumentsText, addr 0x3b09a74, size 0x25c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::DebugConsoleController_ConsoleMessage GetArgumentsText();

  /// @brief Method GetCommandName, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW GetCommandName();

  /// @brief Method GetInvalidArgumentMessage, addr 0x3b0a80c, size 0x4dc, virtual false, abstract: false, final false
  inline void GetInvalidArgumentMessage(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ArgumentBase*>* missingArguments,
                                        ::System::Collections::Generic::List_1<::GlobalNamespace::DebugConsoleController_ConsoleMessage>* messages);

  /// @brief Method GetLongUsageHelp, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::DebugConsoleController_ConsoleMessage GetLongUsageHelp();

  /// @brief Method GetShortHelpText, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::GlobalNamespace::DebugConsoleController_ConsoleMessage GetShortHelpText();

  /// @brief Method Initialize, addr 0x3b097f8, size 0x18, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::ConsoleCommandBase* New_ctor();

  /// @brief Method ParseMatchedArguments, addr 0x3b09e60, size 0x554, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*
  ParseMatchedArguments(::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Collections::Generic::List_1<::GlobalNamespace::DebugConsoleController_ConsoleMessage>* messages);

  /// @brief Method ParseUnmatchedArguments, addr 0x3b0a3b4, size 0x458, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*
  ParseUnmatchedArguments(::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* matchedArguments,
                          ::System::Collections::Generic::List_1<::GlobalNamespace::DebugConsoleController_ConsoleMessage>* messages);

  /// @brief Method Reset, addr 0x3b0adac, size 0x64, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> const& __cordl_internal_get__arguments() const;

  constexpr ::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*>& __cordl_internal_get__arguments();

  constexpr ::GlobalNamespace::DebugConsoleController* const& __cordl_internal_get__console() const;

  constexpr ::GlobalNamespace::DebugConsoleController*& __cordl_internal_get__console();

  constexpr void __cordl_internal_set__arguments(::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> value);

  constexpr void __cordl_internal_set__console(::GlobalNamespace::DebugConsoleController* value);

  /// @brief Method .ctor, addr 0x3b0ae64, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5026 };

  /// @brief Field _console, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::DebugConsoleController* ____console;

  /// @brief Field _arguments, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> ____arguments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ConsoleCommandBase, ____console) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsoleCommandBase, ____arguments) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConsoleCommandBase, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConsoleCommandBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConsoleCommandBase*, "", "ConsoleCommandBase");
NEED_NO_BOX(::GlobalNamespace::ConsoleCommandBase___c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConsoleCommandBase___c*, "", "ConsoleCommandBase/<>c");
NEED_NO_BOX(::GlobalNamespace::ConsoleCommandBase___c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConsoleCommandBase___c__DisplayClass11_0*, "", "ConsoleCommandBase/<>c__DisplayClass11_0");
