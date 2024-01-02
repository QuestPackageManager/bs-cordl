#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
#include "System/zzzz__UIntPtr_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SafeBuffer)
namespace System {
class InvalidOperationException;
}
// Forward declare root types
namespace System::Runtime::InteropServices {
class SafeBuffer;
}
// Write type traits
MARK_REF_PTR_T(::System::Runtime::InteropServices::SafeBuffer);
// Type: System.Runtime.InteropServices::SafeBuffer
// SizeInfo { instance_size: 40, native_size: 8, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Runtime::InteropServices {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638)), TypeDefinitionIndex(TypeDefinitionIndex(2301))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3309))
// CS Name: ::System.Runtime.InteropServices::SafeBuffer*
class CORDL_TYPE SafeBuffer : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
public:
  // Declarations
  /// @brief Field _numBytes, offset 0x20, size 0x8
  __declspec(property(get = __get__numBytes, put = __set__numBytes)) void* _numBytes;

  /// @brief Field Uninitialized, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Uninitialized, put = setStaticF_Uninitialized)) void* Uninitialized;

  constexpr void*& __get__numBytes();

  constexpr void* const& __get__numBytes() const;

  constexpr void __set__numBytes(void* value);

  static inline void setStaticF_Uninitialized(void* value);

  static inline void* getStaticF_Uninitialized();

  /// @brief Method AcquirePointer, addr 0x24d6c00, size 0x108, virtual false, abstract: false, final false
  inline void AcquirePointer(ByRef<::cordl_internals::Ptr<uint8_t>> pointer);

  /// @brief Method ReleasePointer, addr 0x24d6e4c, size 0xdc, virtual false, abstract: false, final false
  inline void ReleasePointer();

  /// @brief Method NotInitialized, addr 0x24d6d08, size 0x74, virtual false, abstract: false, final false
  static inline ::System::InvalidOperationException* NotInitialized();

  // Ctor Parameters [CppParam { name: "", ty: "SafeBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SafeBuffer(SafeBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SafeBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SafeBuffer(SafeBuffer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeBuffer();

public:
  /// @brief Field _numBytes, offset: 0x20, size: 0x8, def value: None
  void* ____numBytes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::SafeBuffer, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Runtime::InteropServices::SafeBuffer, ____numBytes) == 0x20, "Offset mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::SafeBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::SafeBuffer*, "System.Runtime.InteropServices", "SafeBuffer");
