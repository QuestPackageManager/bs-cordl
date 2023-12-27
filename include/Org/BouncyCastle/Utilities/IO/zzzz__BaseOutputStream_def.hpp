#pragma once
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
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::IO {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(484))
// CS Name: ::Org.BouncyCastle.Utilities.IO::BaseOutputStream*
class CORDL_TYPE BaseOutputStream : public ::System::IO::Stream {
public:
  // Declarations
  /// @brief Field closed, offset 0x28, size 0x1
  __declspec(property(get = __get_closed, put = __set_closed)) bool closed;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  constexpr bool& __get_closed();

  constexpr bool const& __get_closed() const;

  constexpr void __set_closed(bool value);

  /// @brief Method get_CanRead addr 0x11bd534 size 0x8 virtual true final true
  inline bool get_CanRead();

  /// @brief Method get_CanSeek addr 0x11bd53c size 0x8 virtual true final true
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite addr 0x11bd544 size 0x10 virtual true final true
  inline bool get_CanWrite();

  /// @brief Method Close addr 0x11bd524 size 0x10 virtual true final false
  inline void Close();

  /// @brief Method Flush addr 0x11bd554 size 0x4 virtual true final false
  inline void Flush();

  /// @brief Method get_Length addr 0x11bd558 size 0x40 virtual true final true
  inline int64_t get_Length();

  /// @brief Method get_Position addr 0x11bd598 size 0x40 virtual true final true
  inline int64_t get_Position();

  /// @brief Method set_Position addr 0x11bd5d8 size 0x40 virtual true final true
  inline void set_Position(int64_t value);

  /// @brief Method Read addr 0x11bd618 size 0x40 virtual true final true
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Seek addr 0x11bd658 size 0x40 virtual true final true
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength addr 0x11bd698 size 0x40 virtual true final true
  inline void SetLength(int64_t value);

  /// @brief Method Write addr 0x11bd6d8 size 0x80 virtual true final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method Write addr 0x11bd758 size 0x28 virtual true final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer);

  /// @brief Method WriteByte addr 0x11bd780 size 0x8c virtual true final false
  inline void WriteByte(uint8_t b);

  static inline ::Org::BouncyCastle::Utilities::IO::BaseOutputStream* New_ctor();

  /// @brief Method .ctor addr 0x11bd2fc size 0x58 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "BaseOutputStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseOutputStream(BaseOutputStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseOutputStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseOutputStream(BaseOutputStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseOutputStream();

public:
  /// @brief Field closed, offset: 0x28, size: 0x1, def value: None
  bool ___closed;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::IO::BaseOutputStream, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::IO
NEED_NO_BOX(::Org::BouncyCastle::Utilities::IO::BaseOutputStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::IO::BaseOutputStream*, "Org.BouncyCastle.Utilities.IO", "BaseOutputStream");
