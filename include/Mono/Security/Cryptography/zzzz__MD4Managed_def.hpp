#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/MD4Managed.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Cryptography/zzzz__MD4_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MD4Managed)
// Forward declare root types
namespace Mono::Security::Cryptography {
class MD4Managed;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Cryptography::MD4Managed);
// Dependencies Mono.Security.Cryptography.MD4
namespace Mono::Security::Cryptography {
// Is value type: false
// CS Name: Mono.Security.Cryptography.MD4Managed
class CORDL_TYPE MD4Managed : public ::Mono::Security::Cryptography::MD4 {
public:
  // Declarations
  /// @brief Field buffer, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field count, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) ::ArrayW<uint32_t, ::Array<uint32_t>*> count;

  /// @brief Field digest, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_digest, put = __cordl_internal_set_digest)) ::ArrayW<uint8_t, ::Array<uint8_t>*> digest;

  /// @brief Field state, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state)) ::ArrayW<uint32_t, ::Array<uint32_t>*> state;

  /// @brief Field x, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) ::ArrayW<uint32_t, ::Array<uint32_t>*> x;

  /// @brief Method Decode, addr 0x3c64738, size 0xc8, virtual false, abstract: false, final false
  inline void Decode(::ArrayW<uint32_t, ::Array<uint32_t>*> output, ::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t index);

  /// @brief Method Encode, addr 0x3c644fc, size 0xf8, virtual false, abstract: false, final false
  inline void Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> output, ::ArrayW<uint32_t, ::Array<uint32_t>*> input);

  /// @brief Method F, addr 0x3c6466c, size 0x10, virtual false, abstract: false, final false
  inline uint32_t F(uint32_t x, uint32_t y, uint32_t z);

  /// @brief Method FF, addr 0x3c646a8, size 0x28, virtual false, abstract: false, final false
  inline void FF(::ByRef<uint32_t> a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s);

  /// @brief Method G, addr 0x3c6467c, size 0x14, virtual false, abstract: false, final false
  inline uint32_t G(uint32_t x, uint32_t y, uint32_t z);

  /// @brief Method GG, addr 0x3c646d0, size 0x38, virtual false, abstract: false, final false
  inline void GG(::ByRef<uint32_t> a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s);

  /// @brief Method H, addr 0x3c64690, size 0xc, virtual false, abstract: false, final false
  inline uint32_t H(uint32_t x, uint32_t y, uint32_t z);

  /// @brief Method HH, addr 0x3c64708, size 0x30, virtual false, abstract: false, final false
  inline void HH(::ByRef<uint32_t> a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s);

  /// @brief Method HashCore, addr 0x3c63c64, size 0x124, virtual true, abstract: false, final false
  inline void HashCore(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t ibStart, int32_t cbSize);

  /// @brief Method HashFinal, addr 0x3c64400, size 0xfc, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashFinal();

  /// @brief Method Initialize, addr 0x3c63bb0, size 0xb4, virtual true, abstract: false, final false
  inline void Initialize();

  /// @brief Method MD4Transform, addr 0x3c63d88, size 0x678, virtual false, abstract: false, final false
  inline void MD4Transform(::ArrayW<uint32_t, ::Array<uint32_t>*> state, ::ArrayW<uint8_t, ::Array<uint8_t>*> block, int32_t index);

  static inline ::Mono::Security::Cryptography::MD4Managed* New_ctor();

  /// @brief Method Padding, addr 0x3c645f4, size 0x78, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Padding(int32_t nLength);

  /// @brief Method ROL, addr 0x3c6469c, size 0xc, virtual false, abstract: false, final false
  inline uint32_t ROL(uint32_t x, uint8_t n);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buffer();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_count() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_count();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_digest() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_digest();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_state() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_state();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get_x() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get_x();

  constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_count(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_digest(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_state(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set_x(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  /// @brief Method .ctor, addr 0x3c63ae0, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MD4Managed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MD4Managed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MD4Managed(MD4Managed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MD4Managed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MD4Managed(MD4Managed const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 2280 };

  /// @brief Field state, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___state;

  /// @brief Field buffer, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buffer;

  /// @brief Field count, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___count;

  /// @brief Field x, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ___x;

  /// @brief Field digest, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___digest;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mono::Security::Cryptography::MD4Managed, ___state) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::MD4Managed, ___buffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::MD4Managed, ___count) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::MD4Managed, ___x) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::MD4Managed, ___digest) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::MD4Managed, 0x50>, "Size mismatch!");

} // namespace Mono::Security::Cryptography
NEED_NO_BOX(::Mono::Security::Cryptography::MD4Managed);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::MD4Managed*, "Mono.Security.Cryptography", "MD4Managed");
