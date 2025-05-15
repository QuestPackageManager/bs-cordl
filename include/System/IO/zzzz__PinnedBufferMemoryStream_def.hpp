#pragma once
// IWYU pragma private; include "System/IO/PinnedBufferMemoryStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__UnmanagedMemoryStream_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PinnedBufferMemoryStream)
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace System {
template <typename T> struct Span_1;
}
// Forward declare root types
namespace System::IO {
class PinnedBufferMemoryStream;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::PinnedBufferMemoryStream);
// Dependencies System.IO.UnmanagedMemoryStream, System.Runtime.InteropServices.GCHandle
namespace System::IO {
// Is value type: false
// CS Name: System.IO.PinnedBufferMemoryStream
class CORDL_TYPE PinnedBufferMemoryStream : public ::System::IO::UnmanagedMemoryStream {
public:
  // Declarations
  /// @brief Field _array, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__array, put = __cordl_internal_set__array)) ::ArrayW<uint8_t, ::Array<uint8_t>*> _array;

  /// @brief Field _pinningHandle, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__pinningHandle, put = __cordl_internal_set__pinningHandle)) ::System::Runtime::InteropServices::GCHandle _pinningHandle;

  /// @brief Method Dispose, addr 0x3d3beb4, size 0x50, virtual true, abstract: false, final false
  inline void Dispose(bool disposing);

  /// @brief Method Finalize, addr 0x3d3be10, size 0xa4, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::System::IO::PinnedBufferMemoryStream* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> array);

  /// @brief Method Read, addr 0x3d3b8fc, size 0x4, virtual true, abstract: false, final false
  inline int32_t Read(::System::Span_1<uint8_t> buffer);

  /// @brief Method Write, addr 0x3d3bb24, size 0x4, virtual true, abstract: false, final false
  inline void Write(::System::ReadOnlySpan_1<uint8_t> buffer);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get__array() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get__array();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __cordl_internal_get__pinningHandle() const;

  constexpr ::System::Runtime::InteropServices::GCHandle& __cordl_internal_get__pinningHandle();

  constexpr void __cordl_internal_set__array(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set__pinningHandle(::System::Runtime::InteropServices::GCHandle value);

  /// @brief Method .ctor, addr 0x3d3b5f8, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> array);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PinnedBufferMemoryStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PinnedBufferMemoryStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PinnedBufferMemoryStream(PinnedBufferMemoryStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PinnedBufferMemoryStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PinnedBufferMemoryStream(PinnedBufferMemoryStream const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 3572 };

  /// @brief Field _array, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____array;

  /// @brief Field _pinningHandle, offset: 0x70, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle ____pinningHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::IO::PinnedBufferMemoryStream, ____array) == 0x68, "Offset mismatch!");

static_assert(offsetof(::System::IO::PinnedBufferMemoryStream, ____pinningHandle) == 0x70, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::IO::PinnedBufferMemoryStream, 0x78>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::PinnedBufferMemoryStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::PinnedBufferMemoryStream*, "System.IO", "PinnedBufferMemoryStream");
