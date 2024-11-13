#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/GCHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GCHandle)
namespace System::Runtime::InteropServices {
struct GCHandleType;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
struct GCHandle;
}
// Write type traits
MARK_VAL_T(::System::Runtime::InteropServices::GCHandle);
// Type: System.Runtime.InteropServices::GCHandle
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: true
// CS Name: ::System.Runtime.InteropServices::GCHandle
struct CORDL_TYPE GCHandle {
public:
  // Declarations
  __declspec(property(get = get_IsAllocated)) bool IsAllocated;

  __declspec(property(get = get_Target, put = set_Target)) ::System::Object* Target;

  /// @brief Method AddrOfPinnedObject, addr 0x3cb4380, size 0xe0, virtual false, abstract: false, final false
  inline ::System::IntPtr AddrOfPinnedObject();

  /// @brief Method Alloc, addr 0x3cb4464, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::GCHandle Alloc(::System::Object* value);

  /// @brief Method Alloc, addr 0x3cb4470, size 0x14, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::GCHandle Alloc(::System::Object* value, ::System::Runtime::InteropServices::GCHandleType type);

  /// @brief Method CheckCurrentDomain, addr 0x3cb45d8, size 0x4, virtual false, abstract: false, final false
  static inline bool CheckCurrentDomain(::System::IntPtr handle);

  /// @brief Method Equals, addr 0x3cb45e4, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Free, addr 0x3cb4484, size 0xa0, virtual false, abstract: false, final false
  inline void Free();

  /// @brief Method FreeHandle, addr 0x3cb4524, size 0x4, virtual false, abstract: false, final false
  static inline void FreeHandle(::System::IntPtr handle);

  /// @brief Method FromIntPtr, addr 0x3cb466c, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::GCHandle FromIntPtr(::System::IntPtr value);

  /// @brief Method GetAddrOfPinnedObject, addr 0x3cb4460, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetAddrOfPinnedObject(::System::IntPtr handle);

  /// @brief Method GetHashCode, addr 0x3cb4664, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetTarget, addr 0x3cb4354, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Object* GetTarget(::System::IntPtr handle);

  /// @brief Method GetTargetHandle, addr 0x3cb42d0, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetTargetHandle(::System::Object* obj, ::System::IntPtr handle, ::System::Runtime::InteropServices::GCHandleType type);

  /// @brief Method ToIntPtr, addr 0x3cb4670, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToIntPtr(::System::Runtime::InteropServices::GCHandle value);

  /// @brief Method .ctor, addr 0x3cb4278, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr h);

  /// @brief Method .ctor, addr 0x3cb4280, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* obj);

  /// @brief Method .ctor, addr 0x3cb42a4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* value, ::System::Runtime::InteropServices::GCHandleType type);

  /// @brief Method get_IsAllocated, addr 0x3cb42d4, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsAllocated();

  /// @brief Method get_Target, addr 0x3cb42e4, size 0x70, virtual false, abstract: false, final false
  inline ::System::Object* get_Target();

  /// @brief Method op_Equality, addr 0x3cb45dc, size 0x8, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Runtime::InteropServices::GCHandle a, ::System::Runtime::InteropServices::GCHandle b);

  /// @brief Method op_Explicit, addr 0x3cb4528, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr op_Explicit___System__IntPtr(::System::Runtime::InteropServices::GCHandle value);

  /// @brief Method op_Explicit, addr 0x3cb452c, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::GCHandle op_Explicit___System__Runtime__InteropServices__GCHandle(::System::IntPtr value);

  /// @brief Method set_Target, addr 0x3cb4358, size 0x28, virtual false, abstract: false, final false
  inline void set_Target(::System::Object* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GCHandle();

  // Ctor Parameters [CppParam { name: "handle", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr GCHandle(::System::IntPtr handle) noexcept;

  /// @brief Field handle, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr handle;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3336 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::GCHandle, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::GCHandle, handle) == 0x0, "Offset mismatch!");

} // namespace System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::GCHandle, "System.Runtime.InteropServices", "GCHandle");
