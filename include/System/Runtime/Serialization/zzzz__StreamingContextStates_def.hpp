#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/StreamingContextStates.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamingContextStates)
// Forward declare root types
namespace System::Runtime::Serialization {
struct StreamingContextStates;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::StreamingContextStates);
// Dependencies
namespace System::Runtime::Serialization {
// Is value type: true
// CS Name: System.Runtime.Serialization.StreamingContextStates
struct CORDL_TYPE StreamingContextStates {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __StreamingContextStates_Unwrapped
  enum struct __StreamingContextStates_Unwrapped : int32_t {
    __E_CrossProcess = static_cast<int32_t>(0x1),
    __E_CrossMachine = static_cast<int32_t>(0x2),
    __E_File = static_cast<int32_t>(0x4),
    __E_Persistence = static_cast<int32_t>(0x8),
    __E_Remoting = static_cast<int32_t>(0x10),
    __E_Other = static_cast<int32_t>(0x20),
    __E_Clone = static_cast<int32_t>(0x40),
    __E_CrossAppDomain = static_cast<int32_t>(0x80),
    __E_All = static_cast<int32_t>(0xff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __StreamingContextStates_Unwrapped() const noexcept {
    return static_cast<__StreamingContextStates_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr StreamingContextStates();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr StreamingContextStates(int32_t value__) noexcept;

  /// @brief Field All value: I32(255)
  static ::System::Runtime::Serialization::StreamingContextStates const All;

  /// @brief Field Clone value: I32(64)
  static ::System::Runtime::Serialization::StreamingContextStates const Clone;

  /// @brief Field CrossAppDomain value: I32(128)
  static ::System::Runtime::Serialization::StreamingContextStates const CrossAppDomain;

  /// @brief Field CrossMachine value: I32(2)
  static ::System::Runtime::Serialization::StreamingContextStates const CrossMachine;

  /// @brief Field CrossProcess value: I32(1)
  static ::System::Runtime::Serialization::StreamingContextStates const CrossProcess;

  /// @brief Field File value: I32(4)
  static ::System::Runtime::Serialization::StreamingContextStates const File;

  /// @brief Field Other value: I32(32)
  static ::System::Runtime::Serialization::StreamingContextStates const Other;

  /// @brief Field Persistence value: I32(8)
  static ::System::Runtime::Serialization::StreamingContextStates const Persistence;

  /// @brief Field Remoting value: I32(16)
  static ::System::Runtime::Serialization::StreamingContextStates const Remoting;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3236 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::Serialization::StreamingContextStates, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::StreamingContextStates, 0x4>, "Size mismatch!");

} // namespace System::Runtime::Serialization
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::StreamingContextStates, "System.Runtime.Serialization", "StreamingContextStates");
