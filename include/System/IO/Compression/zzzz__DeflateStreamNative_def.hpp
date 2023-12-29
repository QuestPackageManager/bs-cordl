#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Runtime/InteropServices/zzzz__GCHandle_def.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeflateStreamNative)
namespace System {
class Exception;
}
namespace System::IO::Compression {
struct CompressionMode;
}
namespace System::IO::Compression {
class __DeflateStreamNative__SafeDeflateStreamHandle;
}
namespace System::IO {
class Stream;
}
namespace System::IO::Compression {
class __DeflateStreamNative__UnmanagedReadOrWrite;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::IO::Compression {
class DeflateStreamNative;
}
namespace System::IO::Compression {
class __DeflateStreamNative__SafeDeflateStreamHandle;
}
namespace System::IO::Compression {
class __DeflateStreamNative__UnmanagedReadOrWrite;
}
// Write type traits
MARK_REF_PTR_T(::System::IO::Compression::DeflateStreamNative);
MARK_REF_PTR_T(::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle);
MARK_REF_PTR_T(::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite);
// Type: ::UnmanagedReadOrWrite
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO::Compression {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2609))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8387))
// CS Name: ::DeflateStreamNative::UnmanagedReadOrWrite*
class CORDL_TYPE __DeflateStreamNative__UnmanagedReadOrWrite : public ::System::MulticastDelegate {
public:
  // Declarations
  static inline ::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite* New_ctor(::System::Object* object, void* method);

  /// @brief Method .ctor addr 0x27c620c size 0xc4 virtual false final false
  inline void _ctor(::System::Object* object, void* method);

  /// @brief Method Invoke addr 0x27c6a64 size 0x14 virtual true final false
  inline int32_t Invoke(void* buffer, int32_t length, void* data);

  // Ctor Parameters [CppParam { name: "", ty: "__DeflateStreamNative__UnmanagedReadOrWrite", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DeflateStreamNative__UnmanagedReadOrWrite(__DeflateStreamNative__UnmanagedReadOrWrite&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DeflateStreamNative__UnmanagedReadOrWrite", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DeflateStreamNative__UnmanagedReadOrWrite(__DeflateStreamNative__UnmanagedReadOrWrite const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DeflateStreamNative__UnmanagedReadOrWrite();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite, 0x80>, "Size mismatch!");

} // namespace System::IO::Compression
// Type: ::SafeDeflateStreamHandle
// SizeInfo { instance_size: 32, native_size: 8, calculated_instance_size: 32, calculated_native_size: 30, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::IO::Compression {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3331))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8388))
// CS Name: ::DeflateStreamNative::SafeDeflateStreamHandle*
class CORDL_TYPE __DeflateStreamNative__SafeDeflateStreamHandle : public ::System::Runtime::InteropServices::SafeHandle {
public:
  // Declarations
  __declspec(property(get = get_IsInvalid)) bool IsInvalid;

  /// @brief Method get_IsInvalid addr 0x27c6a78 size 0x54 virtual true final false
  inline bool get_IsInvalid();

  static inline ::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle* New_ctor();

  /// @brief Method .ctor addr 0x27c6a08 size 0x58 virtual false final false
  inline void _ctor();

  /// @brief Method ReleaseHandle addr 0x27c6acc size 0x88 virtual true final false
  inline bool ReleaseHandle();

  // Ctor Parameters [CppParam { name: "", ty: "__DeflateStreamNative__SafeDeflateStreamHandle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DeflateStreamNative__SafeDeflateStreamHandle(__DeflateStreamNative__SafeDeflateStreamHandle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DeflateStreamNative__SafeDeflateStreamHandle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DeflateStreamNative__SafeDeflateStreamHandle(__DeflateStreamNative__SafeDeflateStreamHandle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DeflateStreamNative__SafeDeflateStreamHandle();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle, 0x20>, "Size mismatch!");

} // namespace System::IO::Compression
// Type: System.IO.Compression::DeflateStreamNative
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 72, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::IO::Compression {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3332)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8389))
// CS Name: ::System.IO.Compression::DeflateStreamNative*
class CORDL_TYPE DeflateStreamNative : public ::System::Object {
public:
  // Declarations
  using SafeDeflateStreamHandle = ::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle;

  using UnmanagedReadOrWrite = ::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite;

  /// @brief Field feeder, offset 0x10, size 0x8
  __declspec(property(get = __get_feeder, put = __set_feeder))::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite* feeder;

  /// @brief Field base_stream, offset 0x18, size 0x8
  __declspec(property(get = __get_base_stream, put = __set_base_stream))::System::IO::Stream* base_stream;

  /// @brief Field z_stream, offset 0x20, size 0x8
  __declspec(property(get = __get_z_stream, put = __set_z_stream))::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle* z_stream;

  /// @brief Field data, offset 0x28, size 0x8
  __declspec(property(get = __get_data, put = __set_data))::System::Runtime::InteropServices::GCHandle data;

  /// @brief Field disposed, offset 0x30, size 0x1
  __declspec(property(get = __get_disposed, put = __set_disposed)) bool disposed;

  /// @brief Field io_buffer, offset 0x38, size 0x8
  __declspec(property(get = __get_io_buffer, put = __set_io_buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> io_buffer;

  /// @brief Field last_error, offset 0x40, size 0x8
  __declspec(property(get = __get_last_error, put = __set_last_error))::System::Exception* last_error;

  constexpr ::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite*& __get_feeder();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite*> const& __get_feeder() const;

  constexpr void __set_feeder(::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite* value);

  constexpr ::System::IO::Stream*& __get_base_stream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_base_stream() const;

  constexpr void __set_base_stream(::System::IO::Stream* value);

  constexpr ::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*& __get_z_stream();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*> const& __get_z_stream() const;

  constexpr void __set_z_stream(::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle* value);

  constexpr ::System::Runtime::InteropServices::GCHandle& __get_data();

  constexpr ::System::Runtime::InteropServices::GCHandle const& __get_data() const;

  constexpr void __set_data(::System::Runtime::InteropServices::GCHandle value);

  constexpr bool& __get_disposed();

  constexpr bool const& __get_disposed() const;

  constexpr void __set_disposed(bool value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_io_buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_io_buffer() const;

  constexpr void __set_io_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::System::Exception*& __get_last_error();

  constexpr ::cordl_internals::to_const_pointer<::System::Exception*> const& __get_last_error() const;

  constexpr void __set_last_error(::System::Exception* value);

  static inline ::System::IO::Compression::DeflateStreamNative* New_ctor();

  /// @brief Method .ctor addr 0x27c6204 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method Create addr 0x27c49ec size 0x134 virtual false final false
  static inline ::System::IO::Compression::DeflateStreamNative* Create(::System::IO::Stream* compressedStream, ::System::IO::Compression::CompressionMode mode, bool gzip);

  /// @brief Method Finalize addr 0x27c6368 size 0x98 virtual true final false
  inline void Finalize();

  /// @brief Method Dispose addr 0x27c4c7c size 0x104 virtual false final false
  inline void Dispose(bool disposing);

  /// @brief Method Flush addr 0x27c538c size 0x54 virtual false final false
  inline void Flush();

  /// @brief Method ReadZStream addr 0x27c4dc8 size 0x78 virtual false final false
  inline int32_t ReadZStream(void* buffer, int32_t length);

  /// @brief Method WriteZStream addr 0x27c5070 size 0x6c virtual false final false
  inline void WriteZStream(void* buffer, int32_t length);

  /// @brief Method UnmanagedRead addr 0x27c608c size 0xbc virtual false final false
  static inline int32_t UnmanagedRead(void* buffer, int32_t length, void* data);

  /// @brief Method UnmanagedRead addr 0x27c6690 size 0x1a4 virtual false final false
  inline int32_t UnmanagedRead(void* buffer, int32_t length);

  /// @brief Method UnmanagedWrite addr 0x27c6148 size 0xbc virtual false final false
  static inline int32_t UnmanagedWrite(void* buffer, int32_t length, void* data);

  /// @brief Method UnmanagedWrite addr 0x27c6834 size 0x1d4 virtual false final false
  inline int32_t UnmanagedWrite(void* buffer, int32_t length);

  /// @brief Method CheckResult addr 0x27c6464 size 0x134 virtual false final false
  inline void CheckResult(int32_t result, ::StringW where);

  /// @brief Method CreateZStream addr 0x27c62d0 size 0x98 virtual false final false
  static inline ::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle* CreateZStream(::System::IO::Compression::CompressionMode compress, bool gzip,
                                                                                                         ::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite* feeder, void* data);

  /// @brief Method CloseZStream addr 0x27c6a60 size 0x4 virtual false final false
  static inline int32_t CloseZStream(void* stream);

  /// @brief Method Flush addr 0x27c6400 size 0x64 virtual false final false
  static inline int32_t Flush(::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle* stream);

  /// @brief Method ReadZStream addr 0x27c6598 size 0x7c virtual false final false
  static inline int32_t ReadZStream(::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle* stream, void* buffer, int32_t length);

  /// @brief Method WriteZStream addr 0x27c6614 size 0x7c virtual false final false
  static inline int32_t WriteZStream(::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle* stream, void* buffer, int32_t length);

  // Ctor Parameters [CppParam { name: "", ty: "DeflateStreamNative", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DeflateStreamNative(DeflateStreamNative&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DeflateStreamNative", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DeflateStreamNative(DeflateStreamNative const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DeflateStreamNative();

public:
  /// @brief Field feeder, offset: 0x10, size: 0x8, def value: None
  ::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite* ___feeder;

  /// @brief Field base_stream, offset: 0x18, size: 0x8, def value: None
  ::System::IO::Stream* ___base_stream;

  /// @brief Field z_stream, offset: 0x20, size: 0x8, def value: None
  ::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle* ___z_stream;

  /// @brief Field data, offset: 0x28, size: 0x8, def value: None
  ::System::Runtime::InteropServices::GCHandle ___data;

  /// @brief Field disposed, offset: 0x30, size: 0x1, def value: None
  bool ___disposed;

  /// @brief Field io_buffer, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___io_buffer;

  /// @brief Field last_error, offset: 0x40, size: 0x8, def value: None
  ::System::Exception* ___last_error;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::IO::Compression::DeflateStreamNative, 0x48>, "Size mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateStreamNative, ___feeder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateStreamNative, ___base_stream) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateStreamNative, ___z_stream) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateStreamNative, ___data) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateStreamNative, ___disposed) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateStreamNative, ___io_buffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::IO::Compression::DeflateStreamNative, ___last_error) == 0x40, "Offset mismatch!");

} // namespace System::IO::Compression
NEED_NO_BOX(::System::IO::Compression::DeflateStreamNative);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::DeflateStreamNative*, "System.IO.Compression", "DeflateStreamNative");
NEED_NO_BOX(::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::__DeflateStreamNative__SafeDeflateStreamHandle*, "System.IO.Compression", "DeflateStreamNative/SafeDeflateStreamHandle");
NEED_NO_BOX(::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite);
DEFINE_IL2CPP_ARG_TYPE(::System::IO::Compression::__DeflateStreamNative__UnmanagedReadOrWrite*, "System.IO.Compression", "DeflateStreamNative/UnmanagedReadOrWrite");
