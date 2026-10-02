#pragma once
// IWYU pragma private; include "System/Threading/Interlocked.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Interlocked)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class Interlocked;
}
// Write type traits
MARK_REF_T(::System::Threading::Interlocked*);
DEFINE_IL2CPP_CLASS(::System::Threading::Interlocked*, "System.Threading", "Interlocked");
// Dependencies System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.Interlocked
class CORDL_TYPE Interlocked : public ::System::Object {
public:
  // Declarations
  /// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
  /// @brief Method Add, addr 0x60d2010, size 0x24, virtual false, abstract: false, final false
  static inline int32_t Add(::by_ref<int32_t> location1, int32_t value);

  /// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
  /// @brief Method Add, addr 0x60d2034, size 0x24, virtual false, abstract: false, final false
  static inline int64_t Add(::by_ref<int64_t> location1, int64_t value);

  /// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
  /// @brief Method CompareExchange, addr 0x60d1f50, size 0x20, virtual false, abstract: false, final false
  static inline ::System::IntPtr CompareExchange(::by_ref<::System::IntPtr> location1, ::System::IntPtr value, ::System::IntPtr comparand);

  /// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
  /// @brief Method CompareExchange, addr 0x60d1dfc, size 0x28, virtual false, abstract: false, final false
  static inline ::System::Object* CompareExchange(::by_ref<::System::Object*> location1, ::System::Object* value, ::System::Object* comparand);

  /// [Intrinsic]
  /// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
  /// [ComVisible(false)]
  /// @brief Method CompareExchange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::reference_type_constraint<T>)
  static inline T CompareExchange(::by_ref<T> location1, T value, T comparand);

  /// @brief Method CompareExchange, addr 0x60d1f70, size 0x24, virtual false, abstract: false, final false
  static inline double_t CompareExchange(::by_ref<double_t> location1, double_t value, double_t comparand);

  /// @brief Method CompareExchange, addr 0x60d1e24, size 0x24, virtual false, abstract: false, final false
  static inline float_t CompareExchange(::by_ref<float_t> location1, float_t value, float_t comparand);

  /// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
  /// @brief Method CompareExchange, addr 0x60ce6d4, size 0x20, virtual false, abstract: false, final false
  static inline int32_t CompareExchange(::by_ref<int32_t> location1, int32_t value, int32_t comparand);

  /// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
  /// @brief Method CompareExchange, addr 0x60d1d88, size 0x38, virtual false, abstract: false, final false
  static inline int32_t CompareExchange(::by_ref<int32_t> location1, int32_t value, int32_t comparand, ::by_ref<bool> succeeded);

  /// @brief Method CompareExchange, addr 0x60d1f30, size 0x20, virtual false, abstract: false, final false
  static inline int64_t CompareExchange(::by_ref<int64_t> location1, int64_t value, int64_t comparand);

  /// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
  /// @brief Method CompareExchange, addr 0x60d1dc0, size 0x3c, virtual false, abstract: false, final false
  static inline void CompareExchange(::by_ref<::System::Object*> location1, ::by_ref<::System::Object*> value, ::by_ref<::System::Object*> comparand, ::by_ref<::System::Object*> result);

  /// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
  /// @brief Method Decrement, addr 0x60d1e48, size 0x20, virtual false, abstract: false, final false
  static inline int32_t Decrement(::by_ref<int32_t> location);

  /// @brief Method Decrement, addr 0x60d1e68, size 0x20, virtual false, abstract: false, final false
  static inline int64_t Decrement(::by_ref<int64_t> location);

  /// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
  /// @brief Method Exchange, addr 0x60d1fb4, size 0x20, virtual false, abstract: false, final false
  static inline ::System::IntPtr Exchange(::by_ref<::System::IntPtr> location1, ::System::IntPtr value);

  /// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
  /// @brief Method Exchange, addr 0x60d1ef0, size 0x20, virtual false, abstract: false, final false
  static inline ::System::Object* Exchange(::by_ref<::System::Object*> location1, ::System::Object* value);

  /// [ComVisible(false)]
  /// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
  /// [Intrinsic]
  /// @brief Method Exchange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T>
    requires(::cordl_internals::reference_type_constraint<T>)
  static inline T Exchange(::by_ref<T> location1, T value);

  /// @brief Method Exchange, addr 0x60d1fd4, size 0x20, virtual false, abstract: false, final false
  static inline double_t Exchange(::by_ref<double_t> location1, double_t value);

  /// @brief Method Exchange, addr 0x60d1f10, size 0x20, virtual false, abstract: false, final false
  static inline float_t Exchange(::by_ref<float_t> location1, float_t value);

  /// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
  /// @brief Method Exchange, addr 0x60cfba0, size 0x20, virtual false, abstract: false, final false
  static inline int32_t Exchange(::by_ref<int32_t> location1, int32_t value);

  /// @brief Method Exchange, addr 0x60d1f94, size 0x20, virtual false, abstract: false, final false
  static inline int64_t Exchange(::by_ref<int64_t> location1, int64_t value);

  /// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
  /// @brief Method Exchange, addr 0x60d1ec8, size 0x28, virtual false, abstract: false, final false
  static inline void Exchange(::by_ref<::System::Object*> location1, ::by_ref<::System::Object*> value, ::by_ref<::System::Object*> result);

  /// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
  /// @brief Method Increment, addr 0x60d1e88, size 0x20, virtual false, abstract: false, final false
  static inline int32_t Increment(::by_ref<int32_t> location);

  /// [ReliabilityContract((System.Runtime.ConstrainedExecution.Consistency)3, (System.Runtime.ConstrainedExecution.Cer)2)]
  /// @brief Method Increment, addr 0x60d1ea8, size 0x20, virtual false, abstract: false, final false
  static inline int64_t Increment(::by_ref<int64_t> location);

  /// @brief Method MemoryBarrier, addr 0x60d2058, size 0x8, virtual false, abstract: false, final false
  static inline void MemoryBarrier();

  /// @brief Method Read, addr 0x60d1ff4, size 0x1c, virtual false, abstract: false, final false
  static inline int64_t Read(::by_ref<int64_t> location);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Interlocked();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Interlocked", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Interlocked(Interlocked&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Interlocked", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Interlocked(Interlocked const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2755 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Threading::Interlocked) == 0x10, "Size mismatch!");

} // namespace System::Threading
