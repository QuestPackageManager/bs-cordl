#pragma once
// IWYU pragma private; include "System/Threading/Volatile.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Volatile)
namespace System::Threading {
struct __Volatile__VolatileBoolean;
}
namespace System::Threading {
struct __Volatile__VolatileInt32;
}
namespace System::Threading {
struct __Volatile__VolatileObject;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class Volatile;
}
namespace System::Threading {
struct __Volatile__VolatileBoolean;
}
namespace System::Threading {
struct __Volatile__VolatileInt32;
}
namespace System::Threading {
struct __Volatile__VolatileObject;
}
// Write type traits
MARK_REF_PTR_T(::System::Threading::Volatile);
MARK_VAL_T(::System::Threading::__Volatile__VolatileBoolean);
MARK_VAL_T(::System::Threading::__Volatile__VolatileInt32);
MARK_VAL_T(::System::Threading::__Volatile__VolatileObject);
// Type: ::VolatileBoolean
// SizeInfo { instance_size: 1, native_size: 4, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: true
// CS Name: ::Volatile::VolatileBoolean
struct CORDL_TYPE __Volatile__VolatileBoolean {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Volatile__VolatileBoolean();

  // Ctor Parameters [CppParam { name: "Value", ty: "bool", modifiers: "", def_value: None }]
  constexpr __Volatile__VolatileBoolean(bool Value) noexcept;

  /// @brief Field Value, offset: 0x0, size: 0x1, def value: None
  bool Value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__Volatile__VolatileBoolean, 0x1>, "Size mismatch!");

static_assert(offsetof(::System::Threading::__Volatile__VolatileBoolean, Value) == 0x0, "Offset mismatch!");

} // namespace System::Threading
// Type: ::VolatileInt32
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: true
// CS Name: ::Volatile::VolatileInt32
struct CORDL_TYPE __Volatile__VolatileInt32 {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Volatile__VolatileInt32();

  // Ctor Parameters [CppParam { name: "Value", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Volatile__VolatileInt32(int32_t Value) noexcept;

  /// @brief Field Value, offset: 0x0, size: 0x4, def value: None
  int32_t Value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__Volatile__VolatileInt32, 0x4>, "Size mismatch!");

static_assert(offsetof(::System::Threading::__Volatile__VolatileInt32, Value) == 0x0, "Offset mismatch!");

} // namespace System::Threading
// Type: ::VolatileObject
// SizeInfo { instance_size: 8, native_size: -1, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: true
// CS Name: ::Volatile::VolatileObject
struct CORDL_TYPE __Volatile__VolatileObject {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Volatile__VolatileObject();

  // Ctor Parameters [CppParam { name: "Value", ty: "::System::Object*", modifiers: "", def_value: None }]
  constexpr __Volatile__VolatileObject(::System::Object* Value) noexcept;

  /// @brief Field Value, offset: 0x0, size: 0x8, def value: None
  ::System::Object* Value;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::__Volatile__VolatileObject, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::Threading::__Volatile__VolatileObject, Value) == 0x0, "Offset mismatch!");

} // namespace System::Threading
// Type: System.Threading::Volatile
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Threading {
// Is value type: false
// CS Name: ::System.Threading::Volatile*
class CORDL_TYPE Volatile : public ::System::Object {
public:
  // Declarations
  using VolatileBoolean = ::System::Threading::__Volatile__VolatileBoolean;

  using VolatileInt32 = ::System::Threading::__Volatile__VolatileInt32;

  using VolatileObject = ::System::Threading::__Volatile__VolatileObject;

  /// @brief Method Read, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline T Read(ByRef<T> location);

  /// @brief Method Read, addr 0x29da67c, size 0x18, virtual false, abstract: false, final false
  static inline bool Read(ByRef<bool> location);

  /// @brief Method Read, addr 0x29da6b8, size 0x18, virtual false, abstract: false, final false
  static inline int32_t Read(ByRef<int32_t> location);

  /// @brief Method Write, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void Write(ByRef<T> location, T value);

  /// @brief Method Write, addr 0x29da694, size 0x24, virtual false, abstract: false, final false
  static inline void Write(ByRef<bool> location, bool value);

  /// @brief Method Write, addr 0x29da6d0, size 0x24, virtual false, abstract: false, final false
  static inline void Write(ByRef<int32_t> location, int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Volatile();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Volatile", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Volatile(Volatile&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Volatile", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Volatile(Volatile const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Threading::Volatile, 0x10>, "Size mismatch!");

} // namespace System::Threading
NEED_NO_BOX(::System::Threading::Volatile);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::Volatile*, "System.Threading", "Volatile");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__Volatile__VolatileBoolean, "System.Threading", "Volatile/VolatileBoolean");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__Volatile__VolatileInt32, "System.Threading", "Volatile/VolatileInt32");
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::__Volatile__VolatileObject, "System.Threading", "Volatile/VolatileObject");
