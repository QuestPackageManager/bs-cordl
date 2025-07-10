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
// Dependencies System.IntPtr
namespace System::Runtime::InteropServices {
// Is value type: true
// CS Name: System.Runtime.InteropServices.GCHandle
struct CORDL_TYPE GCHandle {
public:
  // Declarations
  __declspec(property(get = get_IsAllocated)) bool IsAllocated;

  __declspec(property(get = get_Target, put = set_Target)) ::System::Object* Target;

  /// @brief Method AddrOfPinnedObject, addr 0x3d15944, size 0xe0, virtual false, abstract: false, final false
  inline ::System::IntPtr AddrOfPinnedObject();

  /// @brief Method Alloc, addr 0x3d15a28, size 0xc, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::GCHandle Alloc(::System::Object* value);

  /// @brief Method Alloc, addr 0x3d15a34, size 0x14, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::GCHandle Alloc(::System::Object* value, ::System::Runtime::InteropServices::GCHandleType type);

  /// @brief Method CheckCurrentDomain, addr 0x3d15b9c, size 0x4, virtual false, abstract: false, final false
  static inline bool CheckCurrentDomain(::System::IntPtr handle);

  /// @brief Method Equals, addr 0x3d15ba8, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Free, addr 0x3d15a48, size 0xa0, virtual false, abstract: false, final false
  inline void Free();

  /// @brief Method FreeHandle, addr 0x3d15ae8, size 0x4, virtual false, abstract: false, final false
  static inline void FreeHandle(::System::IntPtr handle);

  /// @brief Method FromIntPtr, addr 0x3d15c30, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::GCHandle FromIntPtr(::System::IntPtr value);

  /// @brief Method GetAddrOfPinnedObject, addr 0x3d15a24, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetAddrOfPinnedObject(::System::IntPtr handle);

  /// @brief Method GetHashCode, addr 0x3d15c28, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetTarget, addr 0x3d15918, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Object* GetTarget(::System::IntPtr handle);

  /// @brief Method GetTargetHandle, addr 0x3d15894, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr GetTargetHandle(::System::Object* obj, ::System::IntPtr handle, ::System::Runtime::InteropServices::GCHandleType type);

  /// @brief Method ToIntPtr, addr 0x3d15c34, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr ToIntPtr(::System::Runtime::InteropServices::GCHandle value);

  /// @brief Method .ctor, addr 0x3d1583c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr h);

  /// @brief Method .ctor, addr 0x3d15844, size 0x24, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* obj);

  /// @brief Method .ctor, addr 0x3d15868, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* value, ::System::Runtime::InteropServices::GCHandleType type);

  /// @brief Method get_IsAllocated, addr 0x3d15898, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsAllocated();

  /// @brief Method get_Target, addr 0x3d158a8, size 0x70, virtual false, abstract: false, final false
  inline ::System::Object* get_Target();

  /// @brief Method op_Equality, addr 0x3d15ba0, size 0x8, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Runtime::InteropServices::GCHandle a, ::System::Runtime::InteropServices::GCHandle b);

  /// @brief Method op_Explicit, addr 0x3d15aec, size 0x4, virtual false, abstract: false, final false
  static inline ::System::IntPtr op_Explicit___System__IntPtr(::System::Runtime::InteropServices::GCHandle value);

  /// @brief Method op_Explicit, addr 0x3d15af0, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::GCHandle op_Explicit___System__Runtime__InteropServices__GCHandle(::System::IntPtr value);

  /// @brief Method set_Target, addr 0x3d1591c, size 0x28, virtual false, abstract: false, final false
  inline void set_Target(::System::Object* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GCHandle();

  // Ctor Parameters [CppParam { name: "handle", ty: "::System::IntPtr", modifiers: "", def_value: None }]
  constexpr GCHandle(::System::IntPtr handle) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3336 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field handle, offset: 0x0, size: 0x8, def value: None
  ::System::IntPtr handle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::InteropServices::GCHandle, handle) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::GCHandle, 0x8>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::GCHandle, "System.Runtime.InteropServices", "GCHandle");
