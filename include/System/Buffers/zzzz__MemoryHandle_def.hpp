#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MemoryHandle)
namespace System::Buffers {
class IPinnable;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Buffers {
struct MemoryHandle;
}
// Write type traits
MARK_VAL_T(::System::Buffers::MemoryHandle);
// Type: System.Buffers::MemoryHandle
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Buffers {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3336))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3884))
// CS Name: ::System.Buffers::MemoryHandle
struct CORDL_TYPE MemoryHandle {
public:
  // Declarations
  __declspec(property(get = get_Pointer))::cordl_internals::Ptr<void> Pointer;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  /// @brief Method .ctor, addr 0x258c520, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::cordl_internals::Ptr<void> pointer, ::System::Runtime::InteropServices::GCHandle handle, ::System::Buffers::IPinnable* pinnable);

  /// @brief Method get_Pointer, addr 0x258c52c, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<void> get_Pointer();

  /// @brief Method Dispose, addr 0x258c534, size 0xc8, virtual true, abstract: false, final true
  inline void Dispose();

  // Ctor Parameters [CppParam { name: "_pointer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle",
  // modifiers: "", def_value: None }, CppParam { name: "_pinnable", ty: "::System::Buffers::IPinnable*", modifiers: "", def_value: None }]
  constexpr MemoryHandle(::cordl_internals::Ptr<void> _pointer, ::System::Runtime::InteropServices::GCHandle _handle, ::System::Buffers::IPinnable* _pinnable) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryHandle();

  /// @brief Field _pointer, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<void> _pointer;

  /// @brief Field _handle, offset: 0x8, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle _handle;

  /// @brief Field _pinnable, offset: 0x10, size: 0x8, def value: None
  ::System::Buffers::IPinnable* _pinnable;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Buffers::MemoryHandle, 0x18>, "Size mismatch!");

static_assert(offsetof(::System::Buffers::MemoryHandle, _pointer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::MemoryHandle, _handle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::MemoryHandle, _pinnable) == 0x10, "Offset mismatch!");

} // namespace System::Buffers
DEFINE_IL2CPP_ARG_TYPE(::System::Buffers::MemoryHandle, "System.Buffers", "MemoryHandle");
