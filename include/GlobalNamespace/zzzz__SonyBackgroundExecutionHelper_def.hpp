#pragma once
// IWYU pragma private; include "GlobalNamespace/SonyBackgroundExecutionHelper.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SonyBackgroundExecutionHelper)
namespace System {
class Action;
}
namespace Zenject {
class ITickable;
}
// Forward declare root types
namespace GlobalNamespace {
class SonyBackgroundExecutionHelper;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SonyBackgroundExecutionHelper);
// Type: ::SonyBackgroundExecutionHelper
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 33, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::SonyBackgroundExecutionHelper*
class CORDL_TYPE SonyBackgroundExecutionHelper : public ::System::Object {
public:
  // Declarations
  /// @brief Field _isInBackgroundExecution, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get__isInBackgroundExecution, put = __cordl_internal_set__isInBackgroundExecution)) bool _isInBackgroundExecution;

  /// @brief Field didGoToBackgroundExecutionEvent, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_didGoToBackgroundExecutionEvent, put = __cordl_internal_set_didGoToBackgroundExecutionEvent)) ::System::Action* didGoToBackgroundExecutionEvent;

  /// @brief Field didGoToForegroundExecutionEvent, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_didGoToForegroundExecutionEvent, put = __cordl_internal_set_didGoToForegroundExecutionEvent)) ::System::Action* didGoToForegroundExecutionEvent;

  __declspec(property(get = get_isInBackgroundExecution)) bool isInBackgroundExecution;

  /// @brief Convert operator to "::Zenject::ITickable"
  constexpr operator ::Zenject::ITickable*() noexcept;

  static inline ::GlobalNamespace::SonyBackgroundExecutionHelper* New_ctor();

  /// @brief Method Tick, addr 0x26a7758, size 0x28, virtual true, abstract: false, final true
  inline void Tick();

  constexpr bool const& __cordl_internal_get__isInBackgroundExecution() const;

  constexpr bool& __cordl_internal_get__isInBackgroundExecution();

  constexpr ::System::Action*& __cordl_internal_get_didGoToBackgroundExecutionEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didGoToBackgroundExecutionEvent() const;

  constexpr ::System::Action*& __cordl_internal_get_didGoToForegroundExecutionEvent();

  constexpr ::cordl_internals::to_const_pointer<::System::Action*> const& __cordl_internal_get_didGoToForegroundExecutionEvent() const;

  constexpr void __cordl_internal_set__isInBackgroundExecution(bool value);

  constexpr void __cordl_internal_set_didGoToBackgroundExecutionEvent(::System::Action* value);

  constexpr void __cordl_internal_set_didGoToForegroundExecutionEvent(::System::Action* value);

  /// @brief Method .ctor, addr 0x26a7780, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_didGoToBackgroundExecutionEvent, addr 0x26a74e0, size 0x9c, virtual false, abstract: false, final false
  inline void add_didGoToBackgroundExecutionEvent(::System::Action* value);

  /// @brief Method add_didGoToForegroundExecutionEvent, addr 0x26a7618, size 0x9c, virtual false, abstract: false, final false
  inline void add_didGoToForegroundExecutionEvent(::System::Action* value);

  /// @brief Method get_isInBackgroundExecution, addr 0x26a7750, size 0x8, virtual false, abstract: false, final false
  inline bool get_isInBackgroundExecution();

  /// @brief Convert to "::Zenject::ITickable"
  constexpr ::Zenject::ITickable* i___Zenject__ITickable() noexcept;

  /// @brief Method remove_didGoToBackgroundExecutionEvent, addr 0x26a757c, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didGoToBackgroundExecutionEvent(::System::Action* value);

  /// @brief Method remove_didGoToForegroundExecutionEvent, addr 0x26a76b4, size 0x9c, virtual false, abstract: false, final false
  inline void remove_didGoToForegroundExecutionEvent(::System::Action* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SonyBackgroundExecutionHelper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SonyBackgroundExecutionHelper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SonyBackgroundExecutionHelper(SonyBackgroundExecutionHelper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SonyBackgroundExecutionHelper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SonyBackgroundExecutionHelper(SonyBackgroundExecutionHelper const&) = delete;

  /// @brief Field didGoToBackgroundExecutionEvent, offset: 0x10, size: 0x8, def value: None
  ::System::Action* ___didGoToBackgroundExecutionEvent;

  /// @brief Field didGoToForegroundExecutionEvent, offset: 0x18, size: 0x8, def value: None
  ::System::Action* ___didGoToForegroundExecutionEvent;

  /// @brief Field _isInBackgroundExecution, offset: 0x20, size: 0x1, def value: None
  bool ____isInBackgroundExecution;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13136 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SonyBackgroundExecutionHelper, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyBackgroundExecutionHelper, ___didGoToBackgroundExecutionEvent) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyBackgroundExecutionHelper, ___didGoToForegroundExecutionEvent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SonyBackgroundExecutionHelper, ____isInBackgroundExecution) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SonyBackgroundExecutionHelper);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SonyBackgroundExecutionHelper*, "", "SonyBackgroundExecutionHelper");
