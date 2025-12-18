#pragma once
// IWYU pragma private; include "Mono/Net/Security/BufferOffsetSize.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferOffsetSize)
// Forward declare root types
namespace Mono::Net::Security {
class BufferOffsetSize;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::BufferOffsetSize);
// Dependencies System.Object
namespace Mono::Net::Security {
// Is value type: false
// CS Name: Mono.Net.Security.BufferOffsetSize
class CORDL_TYPE BufferOffsetSize : public ::System::Object {
public:
  // Declarations
  /// @brief Field Buffer, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Buffer, put = __cordl_internal_set_Buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Buffer;

  /// @brief Field Complete, offset 0x24, size 0x1
  __declspec(property(get = __cordl_internal_get_Complete, put = __cordl_internal_set_Complete)) bool Complete;

  __declspec(property(get = get_EndOffset)) int32_t EndOffset;

  /// @brief Field Offset, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_Offset, put = __cordl_internal_set_Offset)) int32_t Offset;

  __declspec(property(get = get_Remaining)) int32_t Remaining;

  /// @brief Field Size, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_Size, put = __cordl_internal_set_Size)) int32_t Size;

  /// @brief Field TotalBytes, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_TotalBytes, put = __cordl_internal_set_TotalBytes)) int32_t TotalBytes;

  static inline ::Mono::Net::Security::BufferOffsetSize* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method ToString, addr 0x5e21b78, size 0xb4, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_Buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_Buffer();

  constexpr bool const& __cordl_internal_get_Complete() const;

  constexpr bool& __cordl_internal_get_Complete();

  constexpr int32_t const& __cordl_internal_get_Offset() const;

  constexpr int32_t& __cordl_internal_get_Offset();

  constexpr int32_t const& __cordl_internal_get_Size() const;

  constexpr int32_t& __cordl_internal_get_Size();

  constexpr int32_t const& __cordl_internal_get_TotalBytes() const;

  constexpr int32_t& __cordl_internal_get_TotalBytes();

  constexpr void __cordl_internal_set_Buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_Complete(bool value);

  constexpr void __cordl_internal_set_Offset(int32_t value);

  constexpr void __cordl_internal_set_Size(int32_t value);

  constexpr void __cordl_internal_set_TotalBytes(int32_t value);

  /// @brief Method .ctor, addr 0x5e21aa8, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  /// @brief Method get_EndOffset, addr 0x5e21a78, size 0xc, virtual false, abstract: false, final false
  inline int32_t get_EndOffset();

  /// @brief Method get_Remaining, addr 0x5e21a84, size 0x24, virtual false, abstract: false, final false
  inline int32_t get_Remaining();

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10983 };

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
static_assert(offsetof(::Mono::Net::Security::BufferOffsetSize, ___Buffer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::BufferOffsetSize, ___Offset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::BufferOffsetSize, ___Size) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::BufferOffsetSize, ___TotalBytes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Mono::Net::Security::BufferOffsetSize, ___Complete) == 0x24, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::BufferOffsetSize, 0x28>, "Size mismatch!");

} // namespace Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::BufferOffsetSize);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::BufferOffsetSize*, "Mono.Net.Security", "BufferOffsetSize");
