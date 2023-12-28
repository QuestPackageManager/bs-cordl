#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/IO/zzzz__Stream_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FilterStream)
namespace System::IO {
class Stream;
}
namespace System::IO {
struct SeekOrigin;
}
// Forward declare root types
namespace Org::BouncyCastle::Asn1::Utilities {
class FilterStream;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Asn1::Utilities::FilterStream);
// Type: Org.BouncyCastle.Asn1.Utilities::FilterStream
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Asn1::Utilities {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3619))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(322))
// CS Name: ::Org.BouncyCastle.Asn1.Utilities::FilterStream*
class CORDL_TYPE FilterStream : public ::System::IO::Stream {
public:
  // Declarations
  /// @brief Field s, offset 0x28, size 0x8
  __declspec(property(get = __get_s, put = __set_s))::System::IO::Stream* s;

  __declspec(property(get = get_CanRead)) bool CanRead;

  __declspec(property(get = get_CanSeek)) bool CanSeek;

  __declspec(property(get = get_CanWrite)) bool CanWrite;

  __declspec(property(get = get_Length)) int64_t Length;

  __declspec(property(get = get_Position, put = set_Position)) int64_t Position;

  constexpr ::System::IO::Stream*& __get_s();

  constexpr ::cordl_internals::to_const_pointer<::System::IO::Stream*> const& __get_s() const;

  constexpr void __set_s(::System::IO::Stream* value);

  static inline ::Org::BouncyCastle::Asn1::Utilities::FilterStream* New_ctor(::System::IO::Stream* s);

  /// @brief Method .ctor addr 0x107e7e0 size 0x6c virtual false final false
  inline void _ctor(::System::IO::Stream* s);

  /// @brief Method get_CanRead addr 0x107e84c size 0x20 virtual true final false
  inline bool get_CanRead();

  /// @brief Method get_CanSeek addr 0x107e86c size 0x20 virtual true final false
  inline bool get_CanSeek();

  /// @brief Method get_CanWrite addr 0x107e88c size 0x20 virtual true final false
  inline bool get_CanWrite();

  /// @brief Method get_Length addr 0x107e8ac size 0x20 virtual true final false
  inline int64_t get_Length();

  /// @brief Method get_Position addr 0x107e8cc size 0x24 virtual true final false
  inline int64_t get_Position();

  /// @brief Method set_Position addr 0x107e8f0 size 0x24 virtual true final false
  inline void set_Position(int64_t value);

  /// @brief Method Close addr 0x107e914 size 0x68 virtual true final false
  inline void Close();

  /// @brief Method Flush addr 0x107e97c size 0x24 virtual true final false
  inline void Flush();

  /// @brief Method Seek addr 0x107e9a0 size 0x24 virtual true final false
  inline int64_t Seek(int64_t offset, ::System::IO::SeekOrigin origin);

  /// @brief Method SetLength addr 0x107e9c4 size 0x24 virtual true final false
  inline void SetLength(int64_t value);

  /// @brief Method Read addr 0x107e9e8 size 0x24 virtual true final false
  inline int32_t Read(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method ReadByte addr 0x107ea0c size 0x24 virtual true final false
  inline int32_t ReadByte();

  /// @brief Method Write addr 0x107ea30 size 0x24 virtual true final false
  inline void Write(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t count);

  /// @brief Method WriteByte addr 0x107ea54 size 0x24 virtual true final false
  inline void WriteByte(uint8_t value);

  // Ctor Parameters [CppParam { name: "", ty: "FilterStream", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FilterStream(FilterStream&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FilterStream", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FilterStream(FilterStream const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FilterStream();

public:
  /// @brief Field s, offset: 0x28, size: 0x8, def value: None
  ::System::IO::Stream* ___s;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Asn1::Utilities::FilterStream, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Asn1::Utilities
NEED_NO_BOX(::Org::BouncyCastle::Asn1::Utilities::FilterStream);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Asn1::Utilities::FilterStream*, "Org.BouncyCastle.Asn1.Utilities", "FilterStream");
