#pragma once
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
class Object;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
struct GCHandle;
}
// Write type traits
MARK_VAL_T(::System::Runtime::InteropServices::GCHandle);
// Type: System.Runtime.InteropServices::GCHandle
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: true
// CS Name: ::System.Runtime.InteropServices::GCHandle
struct CORDL_TYPE GCHandle {
public:
  // Declarations
  __declspec(property(get = get_IsAllocated)) bool IsAllocated;

  __declspec(property(get = get_Target, put = set_Target))::System::Object* Target;

  /// @brief Method AddrOfPinnedObject, addr 0x2753ae8, size 0xe8, virtual false, abstract: false, final false
  inline void* AddrOfPinnedObject();

  /// @brief Method Alloc, addr 0x2753bd4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::GCHandle Alloc(::System::Object* value);

  /// @brief Method Alloc, addr 0x2753c28, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::GCHandle Alloc(::System::Object* value, ::System::Runtime::InteropServices::GCHandleType type);

  /// @brief Method CheckCurrentDomain, addr 0x2753e64, size 0x4, virtual false, abstract: false, final false
  static inline bool CheckCurrentDomain(void* handle);

  /// @brief Method Equals, addr 0x2753e70, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method Free, addr 0x2753c90, size 0xdc, virtual false, abstract: false, final false
  inline void Free();

  /// @brief Method FreeHandle, addr 0x2753d6c, size 0x4, virtual false, abstract: false, final false
  static inline void FreeHandle(void* handle);

  /// @brief Method FromIntPtr, addr 0x2753ef8, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::GCHandle FromIntPtr(void* value);

  /// @brief Method GetAddrOfPinnedObject, addr 0x2753bd0, size 0x4, virtual false, abstract: false, final false
  static inline void* GetAddrOfPinnedObject(void* handle);

  /// @brief Method GetHashCode, addr 0x2753ef0, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetTarget, addr 0x2753abc, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Object* GetTarget(void* handle);

  /// @brief Method GetTargetHandle, addr 0x27539fc, size 0x4, virtual false, abstract: false, final false
  static inline void* GetTargetHandle(::System::Object* obj, void* handle, ::System::Runtime::InteropServices::GCHandleType type);

  /// @brief Method ToIntPtr, addr 0x2753efc, size 0x4, virtual false, abstract: false, final false
  static inline void* ToIntPtr(::System::Runtime::InteropServices::GCHandle value);

  /// @brief Method .ctor, addr 0x2753918, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(void* h);

  /// @brief Method .ctor, addr 0x2753920, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* obj);

  /// @brief Method .ctor, addr 0x2753988, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* value, ::System::Runtime::InteropServices::GCHandleType type);

  /// @brief Method get_IsAllocated, addr 0x2753a00, size 0x54, virtual false, abstract: false, final false
  inline bool get_IsAllocated();

  /// @brief Method get_Target, addr 0x2753a54, size 0x68, virtual false, abstract: false, final false
  inline ::System::Object* get_Target();

  /// @brief Method op_Equality, addr 0x2753e68, size 0x8, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Runtime::InteropServices::GCHandle a, ::System::Runtime::InteropServices::GCHandle b);

  /// @brief Method op_Explicit, addr 0x2753d74, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::GCHandle op_Explicit___System__Runtime__InteropServices__GCHandle(void* value);

  /// @brief Method op_Explicit, addr 0x2753d70, size 0x4, virtual false, abstract: false, final false
  static inline void* op_Explicit_void_(::System::Runtime::InteropServices::GCHandle value);

  /// @brief Method set_Target, addr 0x2753ac0, size 0x28, virtual false, abstract: false, final false
  inline void set_Target(::System::Object* value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr GCHandle();

  // Ctor Parameters [CppParam { name: "handle", ty: "void*", modifiers: "", def_value: None }]
  constexpr GCHandle(void* handle) noexcept;

  /// @brief Field handle, offset: 0x0, size: 0x8, def value: None
  void* handle;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::GCHandle, 0x8>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::GCHandle, handle) == 0x0, "Offset mismatch!");

} // namespace System::Runtime::InteropServices
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::GCHandle, "System.Runtime.InteropServices", "GCHandle");
