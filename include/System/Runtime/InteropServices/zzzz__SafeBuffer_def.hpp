#pragma once
// IWYU pragma private; include "System/Runtime/InteropServices/SafeBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_def.hpp"
#include "System/zzzz__UIntPtr_def.hpp"
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
// Dependencies Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid, System.UIntPtr
namespace System::Runtime::InteropServices {
// Is value type: false
// CS Name: System.Runtime.InteropServices.SafeBuffer
class CORDL_TYPE SafeBuffer : public ::Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
public:
  // Declarations
  /// @brief Field Uninitialized, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Uninitialized, put = setStaticF_Uninitialized)) ::System::UIntPtr Uninitialized;

  /// @brief Field _numBytes, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__numBytes, put = __cordl_internal_set__numBytes)) ::System::UIntPtr _numBytes;

  /// @brief Method AcquirePointer, addr 0x3d14344, size 0xd0, virtual false, abstract: false, final false
  inline void AcquirePointer(::ByRef<::cordl_internals::Ptr<uint8_t>> pointer);

  /// @brief Method NotInitialized, addr 0x3d14414, size 0x6c, virtual false, abstract: false, final false
  static inline ::System::InvalidOperationException* NotInitialized();

  /// @brief Method ReleasePointer, addr 0x3d14544, size 0xa8, virtual false, abstract: false, final false
  inline void ReleasePointer();

  constexpr ::System::UIntPtr const& __cordl_internal_get__numBytes() const;

  constexpr ::System::UIntPtr& __cordl_internal_get__numBytes();

  constexpr void __cordl_internal_set__numBytes(::System::UIntPtr value);

  static inline ::System::UIntPtr getStaticF_Uninitialized();

  static inline void setStaticF_Uninitialized(::System::UIntPtr value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SafeBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SafeBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SafeBuffer(SafeBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SafeBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SafeBuffer(SafeBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3309 };

  /// @brief Field _numBytes, offset: 0x20, size: 0x8, def value: None
  ::System::UIntPtr ____numBytes;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Runtime::InteropServices::SafeBuffer, ____numBytes) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Runtime::InteropServices::SafeBuffer, 0x28>, "Size mismatch!");

} // namespace System::Runtime::InteropServices
NEED_NO_BOX(::System::Runtime::InteropServices::SafeBuffer);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::InteropServices::SafeBuffer*, "System.Runtime.InteropServices", "SafeBuffer");
