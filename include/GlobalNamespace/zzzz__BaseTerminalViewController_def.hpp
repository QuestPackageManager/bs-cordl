#pragma once
// IWYU pragma private; include "GlobalNamespace/BaseTerminalViewController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__AutocompleteResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseTerminalViewController)
namespace GlobalNamespace {
struct ConsoleMessage;
}
namespace GlobalNamespace {
class TerminalController;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
struct LogType;
}
namespace Zenject {
class IInitializable;
}
// Forward declare root types
namespace GlobalNamespace {
class BaseTerminalViewController;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::BaseTerminalViewController*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BaseTerminalViewController*, "", "BaseTerminalViewController");
// Dependencies AutocompleteResult, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: BaseTerminalViewController
class CORDL_TYPE BaseTerminalViewController : public ::System::Object {
public:
  // Declarations
  /// @brief Field _autocompleteIndex, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__autocompleteIndex, put = __cordl_internal_set__autocompleteIndex)) int32_t _autocompleteIndex;

  /// @brief Field _autocompleteResult, offset 0x28, size 0x18
  __declspec(property(get = __cordl_internal_get__autocompleteResult, put = __cordl_internal_set__autocompleteResult)) ::GlobalNamespace::AutocompleteResult _autocompleteResult;

  /// @brief Field _commandHistory, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__commandHistory, put = __cordl_internal_set__commandHistory)) ::System::Collections::Generic::List_1<::StringW>* _commandHistory;

  /// @brief Field _commandHistoryIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__commandHistoryIndex, put = __cordl_internal_set__commandHistoryIndex)) int32_t _commandHistoryIndex;

  /// @brief Field _console, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__console, put = __cordl_internal_set__console)) ::GlobalNamespace::TerminalController* _console;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*() noexcept;

  /// @brief Convert operator to "::Zenject::IInitializable"
  constexpr operator ::Zenject::IInitializable*() noexcept;

  /// @brief Method Dispose, addr 0x32ea0a4, size 0xe0, virtual true, abstract: false, final false
  inline void Dispose();

  /// @brief Method ExecuteCommand, addr 0x32ea1a4, size 0x124, virtual false, abstract: false, final false
  inline void ExecuteCommand(::StringW command);

  /// @brief Method GetNextHistory, addr 0x32ea4e0, size 0xac, virtual false, abstract: false, final false
  inline ::StringW GetNextHistory();

  /// @brief Method GetPrevHistory, addr 0x32ea42c, size 0xb4, virtual false, abstract: false, final false
  inline ::StringW GetPrevHistory();

  /// @brief Method HandleOnNewMessageToOutput, addr 0x32ea194, size 0x10, virtual false, abstract: false, final false
  inline void HandleOnNewMessageToOutput(::StringW message, ::UnityEngine::LogType type);

  /// @brief Method Initialize, addr 0x32e9fc4, size 0xe0, virtual true, abstract: false, final false
  inline void Initialize();

  static inline ::GlobalNamespace::BaseTerminalViewController* New_ctor();

  /// @brief Method PrintMessage, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void PrintMessage(::GlobalNamespace::ConsoleMessage message);

  /// @brief Method PrintMessage, addr 0x32ea184, size 0x10, virtual false, abstract: false, final false
  inline void PrintMessage(::StringW message, ::UnityEngine::LogType type);

  /// @brief Method ResetAutocompleteResult, addr 0x32ea2c8, size 0x10, virtual false, abstract: false, final false
  inline void ResetAutocompleteResult();

  /// @brief Method TryAutocomplete, addr 0x32ea2d8, size 0x154, virtual false, abstract: false, final false
  inline void TryAutocomplete(::StringW input, ::by_ref<::StringW> newInput, ::by_ref<::StringW> newAutocompleteInput);

  constexpr int32_t const& __cordl_internal_get__autocompleteIndex() const;

  constexpr int32_t& __cordl_internal_get__autocompleteIndex();

  constexpr ::GlobalNamespace::AutocompleteResult const& __cordl_internal_get__autocompleteResult() const;

  constexpr ::GlobalNamespace::AutocompleteResult& __cordl_internal_get__autocompleteResult();

  constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get__commandHistory() const;

  constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get__commandHistory();

  constexpr int32_t const& __cordl_internal_get__commandHistoryIndex() const;

  constexpr int32_t& __cordl_internal_get__commandHistoryIndex();

  constexpr ::GlobalNamespace::TerminalController* const& __cordl_internal_get__console() const;

  constexpr ::GlobalNamespace::TerminalController*& __cordl_internal_get__console();

  constexpr void __cordl_internal_set__autocompleteIndex(int32_t value);

  constexpr void __cordl_internal_set__autocompleteResult(::GlobalNamespace::AutocompleteResult value);

  constexpr void __cordl_internal_set__commandHistory(::System::Collections::Generic::List_1<::StringW>* value);

  constexpr void __cordl_internal_set__commandHistoryIndex(int32_t value);

  constexpr void __cordl_internal_set__console(::GlobalNamespace::TerminalController* value);

  /// @brief Method .ctor, addr 0x32ea58c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

  /// @brief Convert to "::Zenject::IInitializable"
  constexpr ::Zenject::IInitializable* i___Zenject__IInitializable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseTerminalViewController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseTerminalViewController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseTerminalViewController(BaseTerminalViewController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseTerminalViewController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseTerminalViewController(BaseTerminalViewController const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19397 };

  /// @brief Field _console, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::TerminalController* ____console;

  /// @brief Field _commandHistory, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::StringW>* ____commandHistory;

  /// @brief Field _commandHistoryIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ____commandHistoryIndex;

  /// @brief Field _autocompleteResult, offset: 0x28, size: 0x18, def value: None
  ::GlobalNamespace::AutocompleteResult ____autocompleteResult;

  /// @brief Field _autocompleteIndex, offset: 0x40, size: 0x4, def value: None
  int32_t ____autocompleteIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BaseTerminalViewController, ____console) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseTerminalViewController, ____commandHistory) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseTerminalViewController, ____commandHistoryIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseTerminalViewController, ____autocompleteResult) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BaseTerminalViewController, ____autocompleteIndex) == 0x40, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BaseTerminalViewController) == 0x48, "Size mismatch!");

} // namespace GlobalNamespace
