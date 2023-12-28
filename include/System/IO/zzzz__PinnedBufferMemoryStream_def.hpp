#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__UnmanagedMemoryStream_def.hpp"
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
// Type: System.IO::PinnedBufferMemoryStream
// SizeInfo { instance_size: 120, native_size: -1, calculated_instance_size: 120, calculated_native_size: 120, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3587)), TypeDefinitionIndex(TypeDefinitionIndex(3336))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3569))
// CS Name: ::System.IO::PinnedBufferMemoryStream*
class CORDL_TYPE PinnedBufferMemoryStream : public ::System::IO::UnmanagedMemoryStream {
public:
  // Declarations
  /// @brief Field _array, offset 0x68, size 0x8
  __declspec(property(get = __get__array, put = __set__array))::ArrayW<uint8_t, ::Array<uint8_t>*> _array;

  /// @brief Field _pinningHandle, offset 0x70, size 0x8
  __declspec(property(get = __get__pinningHandle, put = __set__pinningHandle))::System::Runtime::InteropServices::GCHandle _pinningHandle;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get__array();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get__array() const;

  constexpr void __set__array(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Runtime::InteropServices::GCHandle& __get__pinningHandle();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __get__pinningHandle() const;

  constexpr void __set__pinningHandle(::System::Runtime::InteropServices::GCHandle value);

  static inline ::System::IO::PinnedBufferMemoryStream* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> array);

  /// @brief Method .ctor addr 0x2500294 size 0xb4 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> array);

  /// @brief Method Read addr 0x25005b4 size 0x4 virtual true final false
  inline int32_t Read(::System::Span_1<uint8_t> buffer);

  /// @brief Method Write addr 0x25007e4 size 0x4 virtual true final false
  inline void Write(::System::ReadOnlySpan_1<uint8_t> buffer);

  /// @brief Method Finalize addr 0x2500ae4 size 0xa4 virtual true final false
  inline void Finalize();

  /// @brief Method Dispose addr 0x2500b88 size 0x50 virtual true final false
  inline void Dispose(bool disposing);

  // Ctor Parameters [CppParam { name: "", ty: "PinnedBufferMemoryStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PinnedBufferMemoryStream(PinnedBufferMemoryStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PinnedBufferMemoryStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PinnedBufferMemoryStream(PinnedBufferMemoryStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PinnedBufferMemoryStream();

public:
  /// @brief Field _array, offset: 0x68, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ____array;

  /// @brief Field _pinningHandle, offset: 0x70, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle ____pinningHandle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::PinnedBufferMemoryStream, 0x78>, "Size mismatch!");

} // namespace System::IO
NEED_NO_BOX(::System::IO::PinnedBufferMemoryStream);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::PinnedBufferMemoryStream*, "System.IO", "PinnedBufferMemoryStream");
