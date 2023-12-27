#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConsoleCommandBase)
namespace System {
template <typename T> class IComparable_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace GlobalNamespace {
class ArgumentBase;
}
namespace GlobalNamespace {
class __ConsoleCommandBase____c__DisplayClass14_0;
}
namespace GlobalNamespace {
struct __DebugConsoleController__ConsoleMessage;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
class __ConsoleCommandBase____c;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace GlobalNamespace {
class ConsoleCommandBase;
}
namespace GlobalNamespace {
class __ConsoleCommandBase____c;
}
namespace GlobalNamespace {
class __ConsoleCommandBase____c__DisplayClass14_0;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::ConsoleCommandBase);
MARK_REF_PTR_T(::GlobalNamespace::__ConsoleCommandBase____c);
MARK_REF_PTR_T(::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0);
// Type: ::<>c__DisplayClass14_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5981))
// CS Name: ::ConsoleCommandBase::<>c__DisplayClass14_0*
class CORDL_TYPE __ConsoleCommandBase____c__DisplayClass14_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field matchedArguments, offset 0x10, size 0x8
  __declspec(property(get = __get_matchedArguments, put = __set_matchedArguments))::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* matchedArguments;

  constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*& __get_matchedArguments();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*> const& __get_matchedArguments() const;

  constexpr void __set_matchedArguments(::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* value);

  static inline ::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0* New_ctor();

  /// @brief Method .ctor addr 0x230f0e0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetUnmatchedArguments>b__1 addr 0x230f1b4 size 0x84 virtual false final false
  inline bool _GetUnmatchedArguments_b__1(::GlobalNamespace::ArgumentBase* arg);

  // Ctor Parameters [CppParam { name: "", ty: "__ConsoleCommandBase____c__DisplayClass14_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConsoleCommandBase____c__DisplayClass14_0(__ConsoleCommandBase____c__DisplayClass14_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConsoleCommandBase____c__DisplayClass14_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConsoleCommandBase____c__DisplayClass14_0(__ConsoleCommandBase____c__DisplayClass14_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConsoleCommandBase____c__DisplayClass14_0();

public:
  /// @brief Field matchedArguments, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* ___matchedArguments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5982))
// CS Name: ::ConsoleCommandBase::<>c*
class CORDL_TYPE __ConsoleCommandBase____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::GlobalNamespace::__ConsoleCommandBase____c* __9;

  /// @brief Field <>9__14_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__14_0, put = setStaticF___9__14_0))::System::Func_2<::StringW, bool>* __9__14_0;

  static inline void setStaticF___9(::GlobalNamespace::__ConsoleCommandBase____c* value);

  static inline ::GlobalNamespace::__ConsoleCommandBase____c* getStaticF___9();

  static inline void setStaticF___9__14_0(::System::Func_2<::StringW, bool>* value);

  static inline ::System::Func_2<::StringW, bool>* getStaticF___9__14_0();

  static inline ::GlobalNamespace::__ConsoleCommandBase____c* New_ctor();

  /// @brief Method .ctor addr 0x230f29c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetUnmatchedArguments>b__14_0 addr 0x230f2a4 size 0x54 virtual false final false
  inline bool _GetUnmatchedArguments_b__14_0(::StringW x);

  // Ctor Parameters [CppParam { name: "", ty: "__ConsoleCommandBase____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConsoleCommandBase____c(__ConsoleCommandBase____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConsoleCommandBase____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConsoleCommandBase____c(__ConsoleCommandBase____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConsoleCommandBase____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__ConsoleCommandBase____c, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
// Type: ::ConsoleCommandBase
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5983))
// CS Name: ::ConsoleCommandBase*
class CORDL_TYPE ConsoleCommandBase : public ::System::Object {
public:
  // Declarations
  using __c = ::GlobalNamespace::__ConsoleCommandBase____c;

  using __c__DisplayClass14_0 = ::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0;

  /// @brief Field _arguments, offset 0x10, size 0x8
  __declspec(property(get = __get__arguments, put = __set__arguments))::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> _arguments;

  __declspec(property(get = get_isAsyncCommand)) bool isAsyncCommand;

  /// @brief Convert operator to "::System::IComparable_1<::GlobalNamespace::ConsoleCommandBase*>"
  constexpr operator ::System::IComparable_1<::GlobalNamespace::ConsoleCommandBase*>*() noexcept;

  constexpr ::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*>& __get__arguments();

  constexpr ::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> const& __get__arguments() const;

  constexpr void __set__arguments(::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> value);

  /// @brief Method get_isAsyncCommand addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_isAsyncCommand();

  /// @brief Method Initialize addr 0x230dd00 size 0x20 virtual false final false
  inline void Initialize();

  /// @brief Method GetArguments addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> GetArguments();

  /// @brief Method GetArgumentsText addr 0x230dd20 size 0x25c virtual false final false
  inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage GetArgumentsText();

  /// @brief Method GetShortHelpText addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage GetShortHelpText();

  /// @brief Method GetLongUsageHelp addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::__DebugConsoleController__ConsoleMessage GetLongUsageHelp();

  /// @brief Method GetCommandName addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::StringW GetCommandName();

  /// @brief Method Execute addr 0x230df84 size 0x40 virtual false final false
  inline void Execute(::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages);

  /// @brief Method ExecuteAsync addr 0x230e07c size 0xd0 virtual false final false
  inline ::System::Threading::Tasks::Task* ExecuteAsync(::ArrayW<::StringW, ::Array<::StringW>*> args,
                                                        ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages);

  /// @brief Method Execute addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void Execute(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages);

  /// @brief Method ExecuteAsync addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::System::Threading::Tasks::Task* ExecuteAsync(::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages);

  /// @brief Method AreArgumentsValid addr 0x230dfc4 size 0xb8 virtual false final false
  inline bool AreArgumentsValid(::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages);

  /// @brief Method GetUnmatchedArguments addr 0x230e6a8 size 0x45c virtual false final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*
  GetUnmatchedArguments(::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>* matchedArguments,
                        ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages);

  /// @brief Method GetMatchedArguments addr 0x230e14c size 0x55c virtual false final false
  inline ::System::Collections::Generic::List_1<::GlobalNamespace::ArgumentBase*>*
  GetMatchedArguments(::ArrayW<::StringW, ::Array<::StringW>*> args, ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages);

  /// @brief Method Reset addr 0x230f0f4 size 0x64 virtual true final false
  inline void Reset();

  /// @brief Method GetInvalidArgumentMessage addr 0x230eb04 size 0x5dc virtual false final false
  inline void GetInvalidArgumentMessage(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::ArgumentBase*>* missingArguments,
                                        ::System::Collections::Generic::List_1<::GlobalNamespace::__DebugConsoleController__ConsoleMessage>* messages);

  /// @brief Method CompareTo addr 0x230f158 size 0x54 virtual true final true
  inline int32_t CompareTo(::GlobalNamespace::ConsoleCommandBase* other);

  static inline ::GlobalNamespace::ConsoleCommandBase* New_ctor();

  /// @brief Method .ctor addr 0x230f1ac size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ConsoleCommandBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConsoleCommandBase(ConsoleCommandBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConsoleCommandBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConsoleCommandBase(ConsoleCommandBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConsoleCommandBase();

public:
  /// @brief Field _arguments, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::ArgumentBase*, ::Array<::GlobalNamespace::ArgumentBase*>*> ____arguments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::ConsoleCommandBase, 0x18>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::ConsoleCommandBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ConsoleCommandBase*, "", "ConsoleCommandBase");
NEED_NO_BOX(::GlobalNamespace::__ConsoleCommandBase____c);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ConsoleCommandBase____c*, "", "ConsoleCommandBase/<>c");
NEED_NO_BOX(::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__ConsoleCommandBase____c__DisplayClass14_0*, "", "ConsoleCommandBase/<>c__DisplayClass14_0");
