#pragma once
// IWYU pragma private; include "Unity/Burst/SharedStatic_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SharedStatic_1)
namespace System {
class Type;
}
// Forward declare root types
namespace Unity::Burst {
template <typename T> struct SharedStatic_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Burst::SharedStatic_1);
// Dependencies
namespace Unity::Burst {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Burst.SharedStatic`1<T>
struct CORDL_TYPE SharedStatic_1 {
public:
  // Declarations
  __declspec(property(get = get_Data)) T Data;

  __declspec(property(get = get_UnsafeDataPointer)) ::cordl_internals::Ptr<void> UnsafeDataPointer;

  /// @brief Method CheckIf_T_IsUnmanagedOrThrow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline void CheckIf_T_IsUnmanagedOrThrow();

  /// @brief Method GetOrCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContext> static inline ::Unity::Burst::SharedStatic_1<T> GetOrCreate(uint32_t alignment);

  /// @brief Method GetOrCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContext, typename TSubContext> static inline ::Unity::Burst::SharedStatic_1<T> GetOrCreate(uint32_t alignment);

  /// @brief Method GetOrCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Unity::Burst::SharedStatic_1<T> GetOrCreate(::System::Type* contextType, uint32_t alignment);

  /// @brief Method GetOrCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Unity::Burst::SharedStatic_1<T> GetOrCreate(::System::Type* contextType, ::System::Type* subContextType, uint32_t alignment);

  /// @brief Method GetOrCreatePartiallyUnsafeWithHashCode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TSubContext> static inline ::Unity::Burst::SharedStatic_1<T> GetOrCreatePartiallyUnsafeWithHashCode(uint32_t alignment, int64_t hashCode);

  /// @brief Method GetOrCreatePartiallyUnsafeWithSubHashCode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename TContext> static inline ::Unity::Burst::SharedStatic_1<T> GetOrCreatePartiallyUnsafeWithSubHashCode(uint32_t alignment, int64_t subHashCode);

  /// @brief Method GetOrCreateUnsafe, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Unity::Burst::SharedStatic_1<T> GetOrCreateUnsafe(uint32_t alignment, int64_t hashCode, int64_t subHashCode);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::cordl_internals::Ptr<void> buffer);

  /// @brief Method get_Data, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ByRef<T> get_Data();

  /// @brief Method get_UnsafeDataPointer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<void> get_UnsafeDataPointer();

  // Ctor Parameters []
  // @brief default ctor
  constexpr SharedStatic_1();

  // Ctor Parameters [CppParam { name: "_buffer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }]
  constexpr SharedStatic_1(::cordl_internals::Ptr<void> _buffer) noexcept;

  /// @brief Field DefaultAlignment offset 0xffffffff size 0x4
  static constexpr uint32_t DefaultAlignment{ static_cast<uint32_t>(0x4020010u) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14631 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field _buffer, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<void> _buffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Burst
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Burst::SharedStatic_1, "Unity.Burst", "SharedStatic`1");
