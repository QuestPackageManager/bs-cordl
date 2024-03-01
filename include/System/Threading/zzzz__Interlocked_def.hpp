#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Interlocked)
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class Interlocked;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Interlocked);
// Type: System.Threading::Interlocked
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// CS Name: ::System.Threading::Interlocked*
class CORDL_TYPE Interlocked : public ::System::Object {
public:
  // Declarations
  /// @brief Method Add, addr 0x27127dc, size 0x4, virtual false, abstract: false, final false
  static inline int32_t Add(ByRef<int32_t> location1, int32_t value);

  /// @brief Method Add, addr 0x27127e0, size 0x4, virtual false, abstract: false, final false
  static inline int64_t Add(ByRef<int64_t> location1, int64_t value);

  /// @brief Method CompareExchange, addr 0x2712750, size 0x2c, virtual false, abstract: false, final false
  static inline ::System::Object* CompareExchange(ByRef<::System::Object*> location1, ::System::Object* value, ::System::Object* comparand);

  /// @brief Method CompareExchange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T CompareExchange(ByRef<T> location1, T value, T comparand);

  /// @brief Method CompareExchange, addr 0x27127c8, size 0x4, virtual false, abstract: false, final false
  static inline double_t CompareExchange(ByRef<double_t> location1, double_t value, double_t comparand);

  /// @brief Method CompareExchange, addr 0x271277c, size 0x4, virtual false, abstract: false, final false
  static inline float_t CompareExchange(ByRef<float_t> location1, float_t value, float_t comparand);

  /// @brief Method CompareExchange, addr 0x271061c, size 0x4, virtual false, abstract: false, final false
  static inline int32_t CompareExchange(ByRef<int32_t> location1, int32_t value, int32_t comparand);

  /// @brief Method CompareExchange, addr 0x2712748, size 0x4, virtual false, abstract: false, final false
  static inline int32_t CompareExchange(ByRef<int32_t> location1, int32_t value, int32_t comparand, ByRef<bool> succeeded);

  /// @brief Method CompareExchange, addr 0x27127c0, size 0x4, virtual false, abstract: false, final false
  static inline int64_t CompareExchange(ByRef<int64_t> location1, int64_t value, int64_t comparand);

  /// @brief Method CompareExchange, addr 0x271274c, size 0x4, virtual false, abstract: false, final false
  static inline void CompareExchange(ByRef<::System::Object*> location1, ByRef<::System::Object*> value, ByRef<::System::Object*> comparand, ByRef<::System::Object*> result);

  /// @brief Method CompareExchange, addr 0x27127c4, size 0x4, virtual false, abstract: false, final false
  static inline void* CompareExchange(ByRef<void*> location1, void* value, void* comparand);

  /// @brief Method Decrement, addr 0x2712780, size 0x4, virtual false, abstract: false, final false
  static inline int32_t Decrement(ByRef<int32_t> location);

  /// @brief Method Decrement, addr 0x2712784, size 0x4, virtual false, abstract: false, final false
  static inline int64_t Decrement(ByRef<int64_t> location);

  /// @brief Method Exchange, addr 0x2712798, size 0x24, virtual false, abstract: false, final false
  static inline ::System::Object* Exchange(ByRef<::System::Object*> location1, ::System::Object* value);

  /// @brief Method Exchange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Exchange(ByRef<T> location1, T value);

  /// @brief Method Exchange, addr 0x27127d4, size 0x4, virtual false, abstract: false, final false
  static inline double_t Exchange(ByRef<double_t> location1, double_t value);

  /// @brief Method Exchange, addr 0x27127bc, size 0x4, virtual false, abstract: false, final false
  static inline float_t Exchange(ByRef<float_t> location1, float_t value);

  /// @brief Method Exchange, addr 0x2712790, size 0x4, virtual false, abstract: false, final false
  static inline int32_t Exchange(ByRef<int32_t> location1, int32_t value);

  /// @brief Method Exchange, addr 0x27127cc, size 0x4, virtual false, abstract: false, final false
  static inline int64_t Exchange(ByRef<int64_t> location1, int64_t value);

  /// @brief Method Exchange, addr 0x2712794, size 0x4, virtual false, abstract: false, final false
  static inline void Exchange(ByRef<::System::Object*> location1, ByRef<::System::Object*> value, ByRef<::System::Object*> result);

  /// @brief Method Exchange, addr 0x27127d0, size 0x4, virtual false, abstract: false, final false
  static inline void* Exchange(ByRef<void*> location1, void* value);

  /// @brief Method Increment, addr 0x2712788, size 0x4, virtual false, abstract: false, final false
  static inline int32_t Increment(ByRef<int32_t> location);

  /// @brief Method Increment, addr 0x271278c, size 0x4, virtual false, abstract: false, final false
  static inline int64_t Increment(ByRef<int64_t> location);

  /// @brief Method MemoryBarrier, addr 0x27127e4, size 0x8, virtual false, abstract: false, final false
  static inline void MemoryBarrier();

  /// @brief Method Read, addr 0x27127d8, size 0x4, virtual false, abstract: false, final false
  static inline int64_t Read(ByRef<int64_t> location);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Interlocked();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Interlocked", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Interlocked(Interlocked&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Interlocked", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Interlocked(Interlocked const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Interlocked, 0x10>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::Interlocked);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Interlocked*, "System.Threading", "Interlocked");
