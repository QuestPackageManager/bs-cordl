#pragma once
// IWYU pragma private; include "System/Buffers/ArrayPoolEventSource.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Diagnostics/Tracing/zzzz__EventSource_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ArrayPoolEventSource)
namespace System::Buffers {
struct ArrayPoolEventSource_BufferAllocatedReason;
}
// Forward declare root types
namespace System::Buffers {
struct ArrayPoolEventSource_BufferAllocatedReason;
}
namespace System::Buffers {
class ArrayPoolEventSource;
}
// Write type traits
MARK_VAL_T(::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason);
MARK_REF_PTR_T(::System::Buffers::ArrayPoolEventSource);
// Dependencies
namespace System::Buffers {
// Is value type: true
// CS Name: System.Buffers.ArrayPoolEventSource/BufferAllocatedReason
struct CORDL_TYPE ArrayPoolEventSource_BufferAllocatedReason {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ArrayPoolEventSource_BufferAllocatedReason_Unwrapped
  enum struct __ArrayPoolEventSource_BufferAllocatedReason_Unwrapped : int32_t {
    __E_Pooled = static_cast<int32_t>(0x0),
    __E_OverMaximumSize = static_cast<int32_t>(0x1),
    __E_PoolExhausted = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ArrayPoolEventSource_BufferAllocatedReason_Unwrapped() const noexcept {
    return static_cast<__ArrayPoolEventSource_BufferAllocatedReason_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayPoolEventSource_BufferAllocatedReason();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ArrayPoolEventSource_BufferAllocatedReason(int32_t value__) noexcept;

  /// @brief Field OverMaximumSize value: I32(1)
  static ::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason const OverMaximumSize;

  /// @brief Field PoolExhausted value: I32(2)
  static ::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason const PoolExhausted;

  /// @brief Field Pooled value: I32(0)
  static ::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason const Pooled;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3896 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason, 0x4>, "Size mismatch!");

} // namespace System::Buffers
// Dependencies System.Diagnostics.Tracing.EventSource
namespace System::Buffers {
// Is value type: false
// CS Name: System.Buffers.ArrayPoolEventSource
class CORDL_TYPE ArrayPoolEventSource : public ::System::Diagnostics::Tracing::EventSource {
public:
  // Declarations
  using BufferAllocatedReason = ::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason;

  /// @brief Field Log, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Log, put = setStaticF_Log)) ::System::Buffers::ArrayPoolEventSource* Log;

  /// @brief Method BufferAllocated, addr 0x3dc9cfc, size 0x10c, virtual false, abstract: false, final false
  inline void BufferAllocated(int32_t bufferId, int32_t bufferSize, int32_t poolId, int32_t bucketId, ::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason reason);

  /// @brief Method BufferRented, addr 0x3dc9c10, size 0xec, virtual false, abstract: false, final false
  inline void BufferRented(int32_t bufferId, int32_t bufferSize, int32_t poolId, int32_t bucketId);

  /// @brief Method BufferReturned, addr 0x3dc9e08, size 0x10, virtual false, abstract: false, final false
  inline void BufferReturned(int32_t bufferId, int32_t bufferSize, int32_t poolId);

  /// @brief Method BufferTrimPoll, addr 0x3dc9e28, size 0xc, virtual false, abstract: false, final false
  inline void BufferTrimPoll(int32_t milliseconds, int32_t pressure);

  /// @brief Method BufferTrimmed, addr 0x3dc9e18, size 0x10, virtual false, abstract: false, final false
  inline void BufferTrimmed(int32_t bufferId, int32_t bufferSize, int32_t poolId);

  static inline ::System::Buffers::ArrayPoolEventSource* New_ctor();

  /// @brief Method .ctor, addr 0x3dc9b64, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Buffers::ArrayPoolEventSource* getStaticF_Log();

  static inline void setStaticF_Log(::System::Buffers::ArrayPoolEventSource* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ArrayPoolEventSource();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ArrayPoolEventSource", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ArrayPoolEventSource(ArrayPoolEventSource&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ArrayPoolEventSource", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ArrayPoolEventSource(ArrayPoolEventSource const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3897 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Buffers::ArrayPoolEventSource, 0x18>, "Size mismatch!");

} // namespace System::Buffers
DEFINE_IL2CPP_ARG_TYPE(::System::Buffers::ArrayPoolEventSource_BufferAllocatedReason, "System.Buffers", "ArrayPoolEventSource/BufferAllocatedReason");
NEED_NO_BOX(::System::Buffers::ArrayPoolEventSource);
DEFINE_IL2CPP_ARG_TYPE(::System::Buffers::ArrayPoolEventSource*, "System.Buffers", "ArrayPoolEventSource");
