#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Net/Security/zzzz__BufferOffsetSize_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferOffsetSize2)
// Forward declare root types
namespace Mono::Net::Security {
class BufferOffsetSize2;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Net::Security::BufferOffsetSize2);
// Type: Mono.Net.Security::BufferOffsetSize2
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace Mono::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8815))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8816))
// CS Name: ::Mono.Net.Security::BufferOffsetSize2*
class CORDL_TYPE BufferOffsetSize2 : public ::Mono::Net::Security::BufferOffsetSize {
public:
  // Declarations
  /// @brief Field InitialSize, offset 0x28, size 0x4
  __declspec(property(get = __get_InitialSize, put = __set_InitialSize)) int32_t InitialSize;

  constexpr int32_t& __get_InitialSize();

  constexpr int32_t const& __get_InitialSize() const;

  constexpr void __set_InitialSize(int32_t value);

  static inline ::Mono::Net::Security::BufferOffsetSize2* New_ctor(int32_t size);

  /// @brief Method .ctor, addr 0x281df80, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(int32_t size);

  /// @brief Method Reset, addr 0x281dff0, size 0x5c, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method MakeRoom, addr 0x281e04c, size 0xb4, virtual false, abstract: false, final false
  inline void MakeRoom(int32_t size);

  /// @brief Method AppendData, addr 0x281e100, size 0x60, virtual false, abstract: false, final false
  inline void AppendData(::ArrayW<uint8_t, ::Array<uint8_t>*> buffer, int32_t offset, int32_t size);

  // Ctor Parameters [CppParam { name: "", ty: "BufferOffsetSize2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferOffsetSize2(BufferOffsetSize2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferOffsetSize2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferOffsetSize2(BufferOffsetSize2 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferOffsetSize2();

public:
  /// @brief Field InitialSize, offset: 0x28, size: 0x4, def value: None
  int32_t ___InitialSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Net::Security::BufferOffsetSize2, 0x30>, "Size mismatch!");

static_assert(offsetof(::Mono::Net::Security::BufferOffsetSize2, ___InitialSize) == 0x28, "Offset mismatch!");

} // namespace Mono::Net::Security
NEED_NO_BOX(::Mono::Net::Security::BufferOffsetSize2);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Net::Security::BufferOffsetSize2*, "Mono.Net.Security", "BufferOffsetSize2");
