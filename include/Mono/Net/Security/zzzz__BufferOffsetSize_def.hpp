#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferOffsetSize)
// Forward declare root types
namespace Mono::Net::Security {
class BufferOffsetSize;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::BufferOffsetSize);
// Type: Mono.Net.Security::BufferOffsetSize
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 37, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7652))
// CS Name: ::Mono.Net.Security::BufferOffsetSize*
class CORDL_TYPE BufferOffsetSize : public ::System::Object {
public:
  // Declarations
  /// @brief Field Buffer, offset 0x10, size 0x8
  __declspec(property(get = __get_Buffer, put = __set_Buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> Buffer;

  /// @brief Field Offset, offset 0x18, size 0x4
  __declspec(property(get = __get_Offset, put = __set_Offset)) int32_t Offset;

  /// @brief Field Size, offset 0x1c, size 0x4
  __declspec(property(get = __get_Size, put = __set_Size)) int32_t Size;

  /// @brief Field TotalBytes, offset 0x20, size 0x4
  __declspec(property(get = __get_TotalBytes, put = __set_TotalBytes)) int32_t TotalBytes;

  /// @brief Field Complete, offset 0x24, size 0x1
  __declspec(property(get = __get_Complete, put = __set_Complete)) bool Complete;

  __declspec(property(get = get_EndOffset)) int32_t EndOffset;

  __declspec(property(get = get_Remaining)) int32_t Remaining;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_Buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_Buffer() const;

  constexpr void __set_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_Offset();

  constexpr int32_t const& __get_Offset() const;

  constexpr void __set_Offset(int32_t value);

  constexpr int32_t& __get_Size();

  constexpr int32_t const& __get_Size() const;

  constexpr void __set_Size(int32_t value);

  constexpr int32_t& __get_TotalBytes();

  constexpr int32_t const& __get_TotalBytes() const;

  constexpr void __set_TotalBytes(int32_t value);

  constexpr bool& __get_Complete();

  constexpr bool const& __get_Complete() const;

  constexpr void __set_Complete(bool value);

  /// @brief Method get_EndOffset addr 0x26a2d9c size 0xc virtual false final false
  inline int32_t get_EndOffset();

  /// @brief Method get_Remaining addr 0x26a2da8 size 0x28 virtual false final false
  inline int32_t get_Remaining();

  static inline ::Mono::Net::Security::BufferOffsetSize* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method .ctor addr 0x26a2dd0 size 0x104 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method ToString addr 0x26a2ed4 size 0xa0 virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "BufferOffsetSize", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferOffsetSize(BufferOffsetSize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferOffsetSize", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferOffsetSize(BufferOffsetSize const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferOffsetSize();

public:
  /// @brief Field Buffer, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Buffer;

  /// @brief Field Offset, offset: 0x18, size: 0x4, def value: None
  int32_t ___Offset;

  /// @brief Field Size, offset: 0x1c, size: 0x4, def value: None
  int32_t ___Size;

  /// @brief Field TotalBytes, offset: 0x20, size: 0x4, def value: None
  int32_t ___TotalBytes;

  /// @brief Field Complete, offset: 0x24, size: 0x1, def value: None
  bool ___Complete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::BufferOffsetSize, 0x28>, "Size mismatch!");

static_assert(offsetof(::Mono::Net::Security::BufferOffsetSize, ___Buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::BufferOffsetSize, ___Offset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::BufferOffsetSize, ___Size) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::BufferOffsetSize, ___TotalBytes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::BufferOffsetSize, ___Complete) == 0x24, "Offset mismatch!");

} // namespace Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::BufferOffsetSize);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::BufferOffsetSize*, "Mono.Net.Security", "BufferOffsetSize");
