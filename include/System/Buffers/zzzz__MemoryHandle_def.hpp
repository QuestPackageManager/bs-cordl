#pragma once
// IWYU pragma private; include "System/Buffers/MemoryHandle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(MemoryHandle)
namespace System::Buffers {
class IPinnable;
}
namespace System::Runtime::InteropServices {
struct GCHandle;
}
// Forward declare root types
namespace System::Buffers {
struct MemoryHandle;
}
// Write type traits
MARK_VAL_T(::System::Buffers::MemoryHandle);
// Dependencies System.IDisposable, System.Runtime.InteropServices.GCHandle
namespace System::Buffers {
// Is value type: true
// CS Name: System.Buffers.MemoryHandle
struct CORDL_TYPE MemoryHandle {
public:
  // Declarations
  __declspec(property(get = get_Pointer)) ::cordl_internals::Ptr<void> Pointer;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x3dce5a4, size 0xc8, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method .ctor, addr 0x3dce590, size 0xc, virtual false, abstract: false, final false
  inline void _ctor(::cordl_internals::Ptr<void> pointer, ::System::Runtime::InteropServices::GCHandle handle, ::System::Buffers::IPinnable* pinnable);

  /// @brief Method get_Pointer, addr 0x3dce59c, size 0x8, virtual false, abstract: false, final false
  inline ::cordl_internals::Ptr<void> get_Pointer();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr MemoryHandle();

  // Ctor Parameters [CppParam { name: "_pointer", ty: "::cordl_internals::Ptr<void>", modifiers: "", def_value: None }, CppParam { name: "_handle", ty: "::System::Runtime::InteropServices::GCHandle",
  // modifiers: "", def_value: None }, CppParam { name: "_pinnable", ty: "::System::Buffers::IPinnable*", modifiers: "", def_value: None }]
  constexpr MemoryHandle(::cordl_internals::Ptr<void> _pointer, ::System::Runtime::InteropServices::GCHandle _handle, ::System::Buffers::IPinnable* _pinnable) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3899 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field _pointer, offset: 0x0, size: 0x8, def value: None
  ::cordl_internals::Ptr<void> _pointer;

  /// @brief Field _handle, offset: 0x8, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle _handle;

  /// @brief Field _pinnable, offset: 0x10, size: 0x8, def value: None
  ::System::Buffers::IPinnable* _pinnable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Buffers::MemoryHandle, _pointer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::MemoryHandle, _handle) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Buffers::MemoryHandle, _pinnable) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Buffers::MemoryHandle, 0x18>, "Size mismatch!");

} // namespace System::Buffers
DEFINE_IL2CPP_ARG_TYPE(::System::Buffers::MemoryHandle, "System.Buffers", "MemoryHandle");
