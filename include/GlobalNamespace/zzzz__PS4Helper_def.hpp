#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(PS4Helper)
namespace Zenject {
class ITickable;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class PS4Helper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PS4Helper);
// Type: ::PS4Helper
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4638))
// CS Name: ::PS4Helper*
class CORDL_TYPE PS4Helper : public ::System::Object {
public:
  // Declarations
  /// @brief Field didGoToBackgroundExecutionEvent, offset 0x10, size 0x8
  __declspec(property(get = __get_didGoToBackgroundExecutionEvent, put = __set_didGoToBackgroundExecutionEvent))::System::Action* didGoToBackgroundExecutionEvent;

  /// @brief Field didGoToForegroundExecutionEvent, offset 0x18, size 0x8
  __declspec(property(get = __get_didGoToForegroundExecutionEvent, put = __set_didGoToForegroundExecutionEvent))::System::Action* didGoToForegroundExecutionEvent;

  /// @brief Field _backgroundExecution, offset 0x20, size 0x1
  __declspec(property(get = __get__backgroundExecution, put = __set__backgroundExecution)) bool _backgroundExecution;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  constexpr ::System::Action*& __get_didGoToBackgroundExecutionEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didGoToBackgroundExecutionEvent() const;

  constexpr void __set_didGoToBackgroundExecutionEvent(::System::Action* value);

  constexpr ::System::Action*& __get_didGoToForegroundExecutionEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __get_didGoToForegroundExecutionEvent() const;

  constexpr void __set_didGoToForegroundExecutionEvent(::System::Action* value);

  constexpr bool& __get__backgroundExecution();

  constexpr bool const& __get__backgroundExecution() const;

  constexpr void __set__backgroundExecution(bool value);

  /// @brief Method add_didGoToBackgroundExecutionEvent addr 0x222dd0c size 0x9c virtual false final false
  inline void add_didGoToBackgroundExecutionEvent(::System::Action* value);

  /// @brief Method remove_didGoToBackgroundExecutionEvent addr 0x222dda8 size 0x9c virtual false final false
  inline void remove_didGoToBackgroundExecutionEvent(::System::Action* value);

  /// @brief Method add_didGoToForegroundExecutionEvent addr 0x222de44 size 0x9c virtual false final false
  inline void add_didGoToForegroundExecutionEvent(::System::Action* value);

  /// @brief Method remove_didGoToForegroundExecutionEvent addr 0x222dee0 size 0x9c virtual false final false
  inline void remove_didGoToForegroundExecutionEvent(::System::Action* value);

  /// @brief Method Tick addr 0x222df7c size 0x28 virtual true final true
  inline void Tick();

  static inline ::GlobalNamespace::PS4Helper* New_ctor();

  /// @brief Method .ctor addr 0x222dfa4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PS4Helper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PS4Helper(PS4Helper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PS4Helper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PS4Helper(PS4Helper const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PS4Helper();

public:
  /// @brief Field didGoToBackgroundExecutionEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___didGoToBackgroundExecutionEvent;

  /// @brief Field didGoToForegroundExecutionEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___didGoToForegroundExecutionEvent;

  /// @brief Field _backgroundExecution, offset: 0x20, size: 0x1, def value: None
  bool ____backgroundExecution;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PS4Helper, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4Helper, ___didGoToBackgroundExecutionEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4Helper, ___didGoToForegroundExecutionEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PS4Helper, ____backgroundExecution) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PS4Helper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PS4Helper*, "", "PS4Helper");
