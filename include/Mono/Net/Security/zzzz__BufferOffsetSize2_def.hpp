#pragma once
// IWYU pragma private; include "Mono\Net\Security\BufferOffsetSize2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Net/Security/zzzz__BufferOffsetSize_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BufferOffsetSize2)
// Forward declare root types
namespace Mono::Net::Security {
class BufferOffsetSize2;
}
// Write type traits
MARK_REF_T(::Mono::Net::Security::BufferOffsetSize2*);
DEFINE_IL2CPP_CLASS(::Mono::Net::Security::BufferOffsetSize2*, "Mono.Net.Security", "BufferOffsetSize2");
// Dependencies Mono.Net.Security.BufferOffsetSize
namespace Mono::Net::Security {
// Is value type: false
// CS Name: Mono.Net.Security.BufferOffsetSize2
class CORDL_TYPE BufferOffsetSize2 : public ::Mono::Net::Security::BufferOffsetSize {
public:
  // Declarations
  /// @brief Field InitialSize, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_InitialSize, put = __cordl_internal_set_InitialSize)) int32_t InitialSize;

  /// @brief Method AppendData, addr 0x5fd6918, size 0x60, virtual false, abstract: false, final false
  inline void AppendData(::ArrayW<uint8_t> buffer, int32_t offset, int32_t size);

  /// @brief Method MakeRoom, addr 0x5fd6858, size 0xc0, virtual false, abstract: false, final false
  inline void MakeRoom(int32_t size);

  static inline ::Mono::Net::Security::BufferOffsetSize2* New_ctor(int32_t size);

  /// @brief Method Reset, addr 0x5fd67f8, size 0x60, virtual false, abstract: false, final false
  inline void Reset();

  constexpr int32_t const& __cordl_internal_get_InitialSize() const;

  constexpr int32_t& __cordl_internal_get_InitialSize();

  constexpr void __cordl_internal_set_InitialSize(int32_t value);

  /// @brief Method .ctor, addr 0x5fd6784, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(int32_t size);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BufferOffsetSize2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BufferOffsetSize2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BufferOffsetSize2(BufferOffsetSize2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BufferOffsetSize2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BufferOffsetSize2(BufferOffsetSize2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11007 };

  /// @brief Field InitialSize, offset: 0x28, size: 0x4, def value: None
  int32_t ___InitialSize;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Net::Security::BufferOffsetSize2, ___InitialSize) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Mono::Net::Security::BufferOffsetSize2) == 0x30, "Size mismatch!");

} // namespace Mono::Net::Security
