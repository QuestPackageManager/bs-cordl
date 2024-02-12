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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2603))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3333))
// CS Name: ::System.Runtime.InteropServices::GCHandle
struct CORDL_TYPE GCHandle {
public:
  // Declarations
  __declspec(property(get = get_IsAllocated)) bool IsAllocated;

  __declspec(property(get = get_Target, put = set_Target))::System::Object* Target;

  /// @brief Method .ctor, addr 0x24f86ec, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(void* h);

  /// @brief Method .ctor, addr 0x24f86f4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* obj);

  /// @brief Method .ctor, addr 0x24f875c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* value, ::System::Runtime::InteropServices::GCHandleType type);

  /// @brief Method get_IsAllocated, addr 0x24f87d4, size 0x54, virtual false, abstract: false, final false
  inline bool get_IsAllocated();

  /// @brief Method get_Target, addr 0x24f8828, size 0x68, virtual false, abstract: false, final false
  inline ::System::Object* get_Target();

  /// @brief Method set_Target, addr 0x24f8894, size 0x28, virtual false, abstract: false, final false
  inline void set_Target(::System::Object* value);

  /// @brief Method AddrOfPinnedObject, addr 0x24f88bc, size 0xe8, virtual false, abstract: false, final false
  inline void* AddrOfPinnedObject();

  /// @brief Method Alloc, addr 0x24f89a8, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::GCHandle Alloc(::System::Object* value);

  /// @brief Method Alloc, addr 0x24f89fc, size 0x68, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::GCHandle Alloc(::System::Object* value, ::System::Runtime::InteropServices::GCHandleType type);

  /// @brief Method Free, addr 0x24f8a64, size 0xdc, virtual false, abstract: false, final false
  inline void Free();

  /// @brief Method op_Explicit, addr 0x24f8b44, size 0x4, virtual false, abstract: false, final false
  static inline void* op_Explicit_void_(::System::Runtime::InteropServices::GCHandle value);

  /// @brief Method op_Explicit, addr 0x24f8b48, size 0xf0, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::GCHandle op_Explicit___System__Runtime__InteropServices__GCHandle(void* value);

  /// @brief Method CheckCurrentDomain, addr 0x24f8c38, size 0x4, virtual false, abstract: false, final false
  static inline bool CheckCurrentDomain(void* handle);

  /// @brief Method GetTarget, addr 0x24f8890, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Object* GetTarget(void* handle);

  /// @brief Method GetTargetHandle, addr 0x24f87d0, size 0x4, virtual false, abstract: false, final false
  static inline void* GetTargetHandle(::System::Object* obj, void* handle, ::System::Runtime::InteropServices::GCHandleType type);

  /// @brief Method FreeHandle, addr 0x24f8b40, size 0x4, virtual false, abstract: false, final false
  static inline void FreeHandle(void* handle);

  /// @brief Method GetAddrOfPinnedObject, addr 0x24f89a4, size 0x4, virtual false, abstract: false, final false
  static inline void* GetAddrOfPinnedObject(void* handle);

  /// @brief Method op_Equality, addr 0x24f8c3c, size 0x8, virtual false, abstract: false, final false
  static inline bool op_Equality(::System::Runtime::InteropServices::GCHandle a, ::System::Runtime::InteropServices::GCHandle b);

  /// @brief Method Equals, addr 0x24f8c44, size 0x80, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* o);

  /// @brief Method GetHashCode, addr 0x24f8cc4, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method FromIntPtr, addr 0x24f8ccc, size 0x4, virtual false, abstract: false, final false
  static inline ::System::Runtime::InteropServices::GCHandle FromIntPtr(void* value);

  /// @brief Method ToIntPtr, addr 0x24f8cd0, size 0x4, virtual false, abstract: false, final false
  static inline void* ToIntPtr(::System::Runtime::InteropServices::GCHandle value);

  // Ctor Parameters [CppParam { name: "handle", ty: "void*", modifiers: "", def_value: None }]
  constexpr GCHandle(void* handle) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr GCHandle();

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
