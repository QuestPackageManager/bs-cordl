#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConsoleCommandBase)
namespace GlobalNamespace {
class ArgumentBase;
}
namespace GlobalNamespace {
class DebugConsoleController;
}
namespace GlobalNamespace {
class __ConsoleCommandBase____c;
}
namespace GlobalNamespace {
class __ConsoleCommandBase____c__DisplayClass15_0;
}
namespace GlobalNamespace {
struct __DebugConsoleController__ConsoleMessage;
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
namespace System {
template <typename T> class IComparable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class ConsoleCommandBase;
}
namespace GlobalNamespace {
class __ConsoleCommandBase____c;
}
namespace GlobalNamespace {
class __ConsoleCommandBase____c__DisplayClass15_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ConsoleCommandBase);
MARK_REF_PTR_T(::GlobalNamespace::__ConsoleCommandBase____c);
MARK_REF_PTR_T(::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass15_0);
// Type: ::<>c__DisplayClass15_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ConsoleCommandBase::<>c__DisplayClass15_0*
class CORDL_TYPE __ConsoleCommandBase____c__DisplayClass15_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field matchedArguments, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_matchedArguments,
                      put = __cordl_internal_set_matchedArguments))::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* matchedArguments;

  static inline ::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass15_0* New_ctor();

  /// @brief Method <ParseUnmatchedArguments>b__1, addr 0x2573fe4, size 0x84, virtual false, abstract: false, final false
  inline bool _ParseUnmatchedArguments_b__1(::GlobalNamespace::ArgumentBase* arg);

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*& __cordl_internal_get_matchedArguments();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*> const& __cordl_internal_get_matchedArguments() const;

  constexpr void __cordl_internal_set_matchedArguments(::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* value);

  /// @brief Method .ctor, addr 0x2573e60, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConsoleCommandBase____c__DisplayClass15_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConsoleCommandBase____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConsoleCommandBase____c__DisplayClass15_0(__ConsoleCommandBase____c__DisplayClass15_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConsoleCommandBase____c__DisplayClass15_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConsoleCommandBase____c__DisplayClass15_0(__ConsoleCommandBase____c__DisplayClass15_0 const&) = delete;

  /// @brief Field matchedArguments, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* ___matchedArguments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass15_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass15_0, ___matchedArguments) == 0x10, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ConsoleCommandBase::<>c*
class CORDL_TYPE __ConsoleCommandBase____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__ConsoleCommandBase____c* __9;

  /// @brief Field <>9__15_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__15_0, put = setStaticF___9__15_0))::System::Func_2<::StringW, bool>* __9__15_0;

  static inline ::GlobalNamespace::__ConsoleCommandBase____c* New_ctor();

  /// @brief Method <ParseUnmatchedArguments>b__15_0, addr 0x25740d4, size 0x54, virtual false, abstract: false, final false
  inline bool _ParseUnmatchedArguments_b__15_0(::StringW x);

  /// @brief Method .ctor, addr 0x25740cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::__ConsoleCommandBase____c* getStaticF___9();

  static inline ::System::Func_2<::StringW, bool>* getStaticF___9__15_0();

  static inline void setStaticF___9(::GlobalNamespace::__ConsoleCommandBase____c* value);

  static inline void setStaticF___9__15_0(::System::Func_2<::StringW, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConsoleCommandBase____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConsoleCommandBase____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConsoleCommandBase____c(__ConsoleCommandBase____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConsoleCommandBase____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConsoleCommandBase____c(__ConsoleCommandBase____c const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConsoleCommandBase____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ConsoleCommandBase
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::ConsoleCommandBase*
class CORDL_TYPE ConsoleCommandBase : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__ConsoleCommandBase____c;

  using __c__DisplayClass15_0 = ::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass15_0;

  /// @brief Field _arguments, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__arguments, put = __cordl_internal_set__arguments))::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> _arguments;

  /// @brief Field _console, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__console, put = __cordl_internal_set__console))::GlobalNamespace::DebugConsoleController* _console;

  __declspec(property(get = get_isAsyncCommand)) bool isAsyncCommand;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::ConsoleCommandBase*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::ConsoleCommandBase*>*() noexcept;

  /// @brief Method AreArgumentsValid, addr 0x2572cf4, size 0xb8, virtual false, abstract: false, final false
  inline bool AreArgumentsValid(::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages);

  /// @brief Method CompareTo, addr 0x2573f88, size 0x54, virtual true, abstract: false, final true
  inline int32_t CompareTo(::GlobalNamespace::ConsoleCommandBase* other);

  /// @brief Method Execute, addr 0x2572cb4, size 0x40, virtual false, abstract: false, final false
  inline void Execute(::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages);

  /// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Execute(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages);

  /// @brief Method ExecuteAsync, addr 0x2572dac, size 0xd0, virtual false, abstract: false, final false
  inline ::System::Threading::Tasks::Task* ExecuteAsync(::ArrayW<::StringW, ::Array<::StringW>*> args,
                                                        ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages);

  /// @brief Method ExecuteAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages);

  /// @brief Method GetArguments, addr 0x25727f0, size 0x260, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> GetArguments();

  /// @brief Method GetArgumentsText, addr 0x2572a50, size 0x25c, virtual false, abstract: false, final false
  inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage GetArgumentsText();

  /// @brief Method GetCommandName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::StringW GetCommandName();

  /// @brief Method GetInvalidArgumentMessage, addr 0x2573884, size 0x5dc, virtual false, abstract: false, final false
  inline void GetInvalidArgumentMessage(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ArgumentBase*>* missingArguments,
                                        ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages);

  /// @brief Method GetLongUsageHelp, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage GetLongUsageHelp();

  /// @brief Method GetShortHelpText, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage GetShortHelpText();

  /// @brief Method Initialize, addr 0x25727d8, size 0x18, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::ConsoleCommandBase* New_ctor();

  /// @brief Method ParseMatchedArguments, addr 0x2572e7c, size 0x598, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*
  ParseMatchedArguments(::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages);

  /// @brief Method ParseUnmatchedArguments, addr 0x2573414, size 0x470, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*
  ParseUnmatchedArguments(::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* matchedArguments,
                          ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages);

  /// @brief Method Reset, addr 0x2573f24, size 0x64, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> const& __cordl_internal_get__arguments() const;

  constexpr ::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*>& __cordl_internal_get__arguments();

  constexpr ::GlobalNamespace::DebugConsoleController*& __cordl_internal_get__console();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DebugConsoleController*> const& __cordl_internal_get__console() const;

  constexpr void __cordl_internal_set__arguments(::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> value);

  constexpr void __cordl_internal_set__console(::GlobalNamespace::DebugConsoleController* value);

  /// @brief Method .ctor, addr 0x2573fdc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_isAsyncCommand, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline bool get_isAsyncCommand();

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

  /// @brief Field _console, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::DebugConsoleController* ____console;

  /// @brief Field _arguments, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> ____arguments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConsoleCommandBase, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsoleCommandBase, ____console) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::ConsoleCommandBase, ____arguments) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConsoleCommandBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConsoleCommandBase*, "", "ConsoleCommandBase");
NEED_NO_BOX(::GlobalNamespace::__ConsoleCommandBase____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ConsoleCommandBase____c*, "", "ConsoleCommandBase/<>c");
NEED_NO_BOX(::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass15_0*, "", "ConsoleCommandBase/<>c__DisplayClass15_0");
