#pragma once
// IWYU pragma private; include "System/LazyState.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LazyState)
// Forward declare root types
namespace System {
struct LazyState;
}
// Write type traits
MARK_VAL_T(::System::LazyState);
// Dependencies
namespace System {
// Is value type: true
// CS Name: System.LazyState
struct CORDL_TYPE LazyState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __LazyState_Unwrapped
  enum struct __LazyState_Unwrapped : int32_t {
    __E_NoneViaConstructor = static_cast<int32_t>(0x0),
    __E_NoneViaFactory = static_cast<int32_t>(0x1),
    __E_NoneException = static_cast<int32_t>(0x2),
    __E_PublicationOnlyViaConstructor = static_cast<int32_t>(0x3),
    __E_PublicationOnlyViaFactory = static_cast<int32_t>(0x4),
    __E_PublicationOnlyWait = static_cast<int32_t>(0x5),
    __E_PublicationOnlyException = static_cast<int32_t>(0x6),
    __E_ExecutionAndPublicationViaConstructor = static_cast<int32_t>(0x7),
    __E_ExecutionAndPublicationViaFactory = static_cast<int32_t>(0x8),
    __E_ExecutionAndPublicationException = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __LazyState_Unwrapped() const noexcept {
    return static_cast<__LazyState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr LazyState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr LazyState(int32_t value__) noexcept;

  /// @brief Field ExecutionAndPublicationException value: I32(9)
  static ::System::LazyState const ExecutionAndPublicationException;

  /// @brief Field ExecutionAndPublicationViaConstructor value: I32(7)
  static ::System::LazyState const ExecutionAndPublicationViaConstructor;

  /// @brief Field ExecutionAndPublicationViaFactory value: I32(8)
  static ::System::LazyState const ExecutionAndPublicationViaFactory;

  /// @brief Field NoneException value: I32(2)
  static ::System::LazyState const NoneException;

  /// @brief Field NoneViaConstructor value: I32(0)
  static ::System::LazyState const NoneViaConstructor;

  /// @brief Field NoneViaFactory value: I32(1)
  static ::System::LazyState const NoneViaFactory;

  /// @brief Field PublicationOnlyException value: I32(6)
  static ::System::LazyState const PublicationOnlyException;

  /// @brief Field PublicationOnlyViaConstructor value: I32(3)
  static ::System::LazyState const PublicationOnlyViaConstructor;

  /// @brief Field PublicationOnlyViaFactory value: I32(4)
  static ::System::LazyState const PublicationOnlyViaFactory;

  /// @brief Field PublicationOnlyWait value: I32(5)
  static ::System::LazyState const PublicationOnlyWait;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2434 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::LazyState, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::LazyState, 0x4>, "Size mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::LazyState, "System", "LazyState");
