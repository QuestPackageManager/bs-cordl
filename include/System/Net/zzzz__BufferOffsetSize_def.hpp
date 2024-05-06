#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferOffsetSize)
// Forward declare root types
namespace System::Net {
class BufferOffsetSize;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::BufferOffsetSize);
// Type: System.Net::BufferOffsetSize
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Net {
// Is value type: false
// CS Name: ::System.Net::BufferOffsetSize*
class CORDL_TYPE BufferOffsetSize : public ::System::Object {
public:
  // Declarations
  /// @brief Field Buffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Buffer, put = __cordl_internal_set_Buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> Buffer;

  /// @brief Field Offset, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Offset, put = __cordl_internal_set_Offset)) int32_t Offset;

  /// @brief Field Size, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_Size, put = __cordl_internal_set_Size)) int32_t Size;

  static inline ::System::Net::BufferOffsetSize* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, bool copyBuffer);

  static inline ::System::Net::BufferOffsetSize* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, bool copyBuffer);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_Buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_Buffer();

  constexpr int32_t const& __cordl_internal_get_Offset() const;

  constexpr int32_t& __cordl_internal_get_Offset();

  constexpr int32_t const& __cordl_internal_get_Size() const;

  constexpr int32_t& __cordl_internal_get_Size();

  constexpr void __cordl_internal_set_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_Offset(int32_t value);

  constexpr void __cordl_internal_set_Size(int32_t value);

  /// @brief Method .ctor, addr 0x2fdcf58, size 0x20, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, bool copyBuffer);

  /// @brief Method .ctor, addr 0x2fdceac, size 0xac, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size, bool copyBuffer);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferOffsetSize();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BufferOffsetSize", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferOffsetSize(BufferOffsetSize&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferOffsetSize", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferOffsetSize(BufferOffsetSize const&) = delete;

  /// @brief Field Buffer, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___Buffer;

  /// @brief Field Offset, offset: 0x18, size: 0x4, def value: None
  int32_t ___Offset;

  /// @brief Field Size, offset: 0x1c, size: 0x4, def value: None
  int32_t ___Size;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::BufferOffsetSize, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Net::BufferOffsetSize, ___Buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Net::BufferOffsetSize, ___Offset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Net::BufferOffsetSize, ___Size) == 0x1c, "Offset mismatch!");

} // namespace System::Net
NEED_NO_BOX(::System::Net::BufferOffsetSize);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::BufferOffsetSize*, "System.Net", "BufferOffsetSize");
