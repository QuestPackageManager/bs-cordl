#pragma once
// IWYU pragma private; include "BGLib/DotnetExtension/CommandLine/CommandLineParserResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(CommandLineParserResult)
namespace BGLib::DotnetExtension::CommandLine {
struct ArgumentOption;
}
namespace BGLib::DotnetExtension::CommandLine {
class CommandLineParserResult___c__DisplayClass10_0;
}
namespace BGLib::DotnetExtension::CommandLine {
class CommandLineParserResult___c__DisplayClass7_0;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class IReadOnlyDictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> struct KeyValuePair_2;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
// Forward declare root types
namespace BGLib::DotnetExtension::CommandLine {
class CommandLineParserResult___c__DisplayClass10_0;
}
namespace BGLib::DotnetExtension::CommandLine {
class CommandLineParserResult___c__DisplayClass7_0;
}
namespace BGLib::DotnetExtension::CommandLine {
struct CommandLineParserResult;
}
// Write type traits
MARK_REF_PTR_T(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult___c__DisplayClass10_0);
MARK_REF_PTR_T(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult___c__DisplayClass7_0);
MARK_VAL_T(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult);
// Dependencies System.Object
namespace BGLib::DotnetExtension::CommandLine {
// Is value type: false
// CS Name: BGLib.DotnetExtension.CommandLine.CommandLineParserResult/<>c__DisplayClass10_0
class CORDL_TYPE CommandLineParserResult___c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field identifier, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_identifier, put = __cordl_internal_set_identifier)) ::StringW identifier;

  static inline ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult___c__DisplayClass10_0* New_ctor();

  /// @brief Method <Contains>b__0, addr 0x22a4d60, size 0x64, virtual false, abstract: false, final false
  inline bool _Contains_b__0(::System::Collections::Generic::KeyValuePair_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW> keyValuePair);

  constexpr ::StringW const& __cordl_internal_get_identifier() const;

  constexpr ::StringW& __cordl_internal_get_identifier();

  constexpr void __cordl_internal_set_identifier(::StringW value);

  /// @brief Method .ctor, addr 0x22a4638, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandLineParserResult___c__DisplayClass10_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandLineParserResult___c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandLineParserResult___c__DisplayClass10_0(CommandLineParserResult___c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandLineParserResult___c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandLineParserResult___c__DisplayClass10_0(CommandLineParserResult___c__DisplayClass10_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16956 };

  /// @brief Field identifier, offset: 0x10, size: 0x8, def value: None
  ::StringW ___identifier;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult___c__DisplayClass10_0, ___identifier) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::DotnetExtension::CommandLine::CommandLineParserResult___c__DisplayClass10_0, 0x18>, "Size mismatch!");

} // namespace BGLib::DotnetExtension::CommandLine
// Dependencies System.Object
namespace BGLib::DotnetExtension::CommandLine {
// Is value type: false
// CS Name: BGLib.DotnetExtension.CommandLine.CommandLineParserResult/<>c__DisplayClass7_0
class CORDL_TYPE CommandLineParserResult___c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__0, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___9__0, put = __cordl_internal_set___9__0)) ::System::Func_2<::StringW, bool>* __9__0;

  /// @brief Field identifier, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_identifier, put = __cordl_internal_set_identifier)) ::StringW identifier;

  static inline ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult___c__DisplayClass7_0* New_ctor();

  constexpr ::System::Func_2<::StringW, bool>* const& __cordl_internal_get___9__0() const;

  constexpr ::System::Func_2<::StringW, bool>*& __cordl_internal_get___9__0();

  constexpr ::StringW const& __cordl_internal_get_identifier() const;

  constexpr ::StringW& __cordl_internal_get_identifier();

  constexpr void __cordl_internal_set___9__0(::System::Func_2<::StringW, bool>* value);

  constexpr void __cordl_internal_set_identifier(::StringW value);

  /// @brief Method .ctor, addr 0x22a4418, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <get_Item>b__0, addr 0x22a4dc4, size 0x14, virtual false, abstract: false, final false
  inline bool _get_Item_b__0(::StringW optionIdentifier);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandLineParserResult___c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandLineParserResult___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandLineParserResult___c__DisplayClass7_0(CommandLineParserResult___c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandLineParserResult___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandLineParserResult___c__DisplayClass7_0(CommandLineParserResult___c__DisplayClass7_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16957 };

  /// @brief Field identifier, offset: 0x10, size: 0x8, def value: None
  ::StringW ___identifier;

  /// @brief Field <>9__0, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::StringW, bool>* _____9__0;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult___c__DisplayClass7_0, ___identifier) == 0x10, "Offset mismatch!");

static_assert(offsetof(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult___c__DisplayClass7_0, _____9__0) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::DotnetExtension::CommandLine::CommandLineParserResult___c__DisplayClass7_0, 0x20>, "Size mismatch!");

} // namespace BGLib::DotnetExtension::CommandLine
// Dependencies
namespace BGLib::DotnetExtension::CommandLine {
// Is value type: true
// CS Name: BGLib.DotnetExtension.CommandLine.CommandLineParserResult
struct CORDL_TYPE CommandLineParserResult {
public:
  // Declarations
  using __c__DisplayClass10_0 = ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult___c__DisplayClass10_0;

  using __c__DisplayClass7_0 = ::BGLib::DotnetExtension::CommandLine::CommandLineParserResult___c__DisplayClass7_0;

  __declspec(property(get = get_Item)) ::StringW Item[];

  __declspec(property(get = get_Item)) ::StringW Item[];

  /// @brief Method Contains, addr 0x22a4564, size 0xd4, virtual false, abstract: false, final false
  inline bool Contains(::StringW identifier);

  /// @brief Method Contains, addr 0x22a4490, size 0xd4, virtual false, abstract: false, final false
  inline bool Contains(::BGLib::DotnetExtension::CommandLine::ArgumentOption option);

  /// @brief Method GetValueOrDefault, addr 0x22a4420, size 0x70, virtual false, abstract: false, final false
  inline ::StringW GetValueOrDefault(::BGLib::DotnetExtension::CommandLine::ArgumentOption option);

  /// @brief Method ToString, addr 0x22a4640, size 0x720, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x22a3800, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::StringW applicationPath, ::System::Collections::Generic::IReadOnlyDictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>* parsed,
                    ::System::Collections::Generic::IReadOnlyList_1<::StringW>* unexpectedArguments);

  /// @brief Method get_Item, addr 0x22a3fd0, size 0x448, virtual false, abstract: false, final false
  inline ::StringW get_Item(::StringW identifier);

  /// @brief Method get_Item, addr 0x22a3efc, size 0xd4, virtual false, abstract: false, final false
  inline ::StringW get_Item(::BGLib::DotnetExtension::CommandLine::ArgumentOption option);

  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandLineParserResult();

  // Ctor Parameters [CppParam { name: "applicationPath", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_parsed", ty:
  // "::System::Collections::Generic::IReadOnlyDictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption,::StringW>*", modifiers: "", def_value: None }, CppParam { name:
  // "unexpectedArguments", ty: "::System::Collections::Generic::IReadOnlyList_1<::StringW>*", modifiers: "", def_value: None }]
  constexpr CommandLineParserResult(::StringW applicationPath, ::System::Collections::Generic::IReadOnlyDictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>* _parsed,
                                    ::System::Collections::Generic::IReadOnlyList_1<::StringW>* unexpectedArguments) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16958 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field applicationPath, offset: 0x0, size: 0x8, def value: None
  ::StringW applicationPath;

  /// @brief Field _parsed, offset: 0x8, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyDictionary_2<::BGLib::DotnetExtension::CommandLine::ArgumentOption, ::StringW>* _parsed;

  /// @brief Field unexpectedArguments, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::StringW>* unexpectedArguments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult, applicationPath) == 0x0, "Offset mismatch!");

static_assert(offsetof(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult, _parsed) == 0x8, "Offset mismatch!");

static_assert(offsetof(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult, unexpectedArguments) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BGLib::DotnetExtension::CommandLine::CommandLineParserResult, 0x18>, "Size mismatch!");

} // namespace BGLib::DotnetExtension::CommandLine
NEED_NO_BOX(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult___c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult___c__DisplayClass10_0*, "BGLib.DotnetExtension.CommandLine", "CommandLineParserResult/<>c__DisplayClass10_0");
NEED_NO_BOX(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult___c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult___c__DisplayClass7_0*, "BGLib.DotnetExtension.CommandLine", "CommandLineParserResult/<>c__DisplayClass7_0");
DEFINE_IL2CPP_ARG_TYPE(::BGLib::DotnetExtension::CommandLine::CommandLineParserResult, "BGLib.DotnetExtension.CommandLine", "CommandLineParserResult");
