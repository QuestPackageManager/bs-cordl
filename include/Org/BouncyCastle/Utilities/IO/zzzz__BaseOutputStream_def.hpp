#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Utilities/IO/BaseOutputStream.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseOutputStream)
namespace System::IO {
struct SeekOrigin;
}
// Forward declare root types
namespace Org::BouncyCastle::Utilities::IO {
class BaseOutputStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::IO::BaseOutputStream);
// Type: Org.BouncyCastle.Utilities.IO::BaseOutputStream
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Utilities.IO::BaseOutputStream*
class CORDL_TYPE BaseOutputStream : public ::System::IO::Stream {
public:
  // Declarations
  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  /// @brief Field closed, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_closed, put = __cordl_internal_set_closed)) bool closed;

  /// @brief Method Close, addr 0x25ff164, size 0x10, virtual true, abstract: false, final false
  inline void Close();

  /// @brief Method Flush, addr 0x25ff194, size 0x4, virtual true, abstract: false, final false
  inline void Flush();

  static inline ::Org::BouncyCastle::Utilities::IO::BaseOutputStream* New_ctor();

  /// @brief Method Read, addr 0x25ff240, size 0x38, virtual true, abstract: false, final true
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Seek, addr 0x25ff278, size 0x38, virtual true, abstract: false, final true
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength, addr 0x25ff2b0, size 0x38, virtual true, abstract: false, final true
  inline void SetLength(int64_t value);

  /// @brief Method Write, addr 0x25ff368, size 0x28, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method Write, addr 0x25ff2e8, size 0x80, virtual true, abstract: false, final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteByte, addr 0x25ff390, size 0x8c, virtual true, abstract: false, final false
  inline void WriteByte(uint8_t b);

  constexpr bool const& __cordl_internal_get_closed() const;

  constexpr bool& __cordl_internal_get_closed();

  constexpr void __cordl_internal_set_closed(bool value);

  /// @brief Method .ctor, addr 0x25fef3c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_CanRead, addr 0x25ff174, size 0x8, virtual true, abstract: false, final true
  inline bool get_CanRead();

  /// @brief Method get_CanSeek, addr 0x25ff17c, size 0x8, virtual true, abstract: false, final true
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite, addr 0x25ff184, size 0x10, virtual true, abstract: false, final true
  inline bool get_CanWrite();

  /// @brief Method get_Length, addr 0x25ff198, size 0x38, virtual true, abstract: false, final true
  inline int64_t get_Length();

  /// @brief Method get_Position, addr 0x25ff1d0, size 0x38, virtual true, abstract: false, final true
  inline int64_t get_Position();

  /// @brief Method set_Position, addr 0x25ff208, size 0x38, virtual true, abstract: false, final true
  inline void set_Position(int64_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseOutputStream();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseOutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseOutputStream(BaseOutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseOutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseOutputStream(BaseOutputStream const&) = delete;

  /// @brief Field closed, offset: 0x28, size: 0x1, def value: None
  bool ___closed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 484 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::BaseOutputStream, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Utilities::IO::BaseOutputStream, ___closed) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Utilities::IO
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::BaseOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::BaseOutputStream*, "Org.BouncyCastle.Utilities.IO", "BaseOutputStream");
