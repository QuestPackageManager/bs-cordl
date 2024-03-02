#pragma once
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
// Type: System::LazyState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System {
// Is value type: true
// CS Name: ::System::LazyState
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

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ExecutionAndPublicationException value: static_cast<int32_t>(0x9)
  static ::System::LazyState const ExecutionAndPublicationException;

  /// @brief Field ExecutionAndPublicationViaConstructor value: static_cast<int32_t>(0x7)
  static ::System::LazyState const ExecutionAndPublicationViaConstructor;

  /// @brief Field ExecutionAndPublicationViaFactory value: static_cast<int32_t>(0x8)
  static ::System::LazyState const ExecutionAndPublicationViaFactory;

  /// @brief Field NoneException value: static_cast<int32_t>(0x2)
  static ::System::LazyState const NoneException;

  /// @brief Field NoneViaConstructor value: static_cast<int32_t>(0x0)
  static ::System::LazyState const NoneViaConstructor;

  /// @brief Field NoneViaFactory value: static_cast<int32_t>(0x1)
  static ::System::LazyState const NoneViaFactory;

  /// @brief Field PublicationOnlyException value: static_cast<int32_t>(0x6)
  static ::System::LazyState const PublicationOnlyException;

  /// @brief Field PublicationOnlyViaConstructor value: static_cast<int32_t>(0x3)
  static ::System::LazyState const PublicationOnlyViaConstructor;

  /// @brief Field PublicationOnlyViaFactory value: static_cast<int32_t>(0x4)
  static ::System::LazyState const PublicationOnlyViaFactory;

  /// @brief Field PublicationOnlyWait value: static_cast<int32_t>(0x5)
  static ::System::LazyState const PublicationOnlyWait;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::LazyState, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::LazyState, value__) == 0x0, "Offset mismatch!");

} // namespace System
DEFINE_IL2CPP_ARG_TYPE(::System::LazyState, "System", "LazyState");
