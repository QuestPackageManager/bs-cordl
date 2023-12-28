#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Cryptography/zzzz__MD4_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MD4Managed)
// Forward declare root types
namespace Mono::Security::Cryptography {
class MD4Managed;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Cryptography::MD4Managed);
// Type: Mono.Security.Cryptography::MD4Managed
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2279))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2280))
// CS Name: ::Mono.Security.Cryptography::MD4Managed*
class CORDL_TYPE MD4Managed : public ::Mono::Security::Cryptography::MD4 {
public:
  // Declarations
  /// @brief Field state, offset 0x28, size 0x8
  __declspec(property(get = __get_state, put = __set_state))::ArrayW<uint32_t, ::Array<uint32_t>*> state;

  /// @brief Field buffer, offset 0x30, size 0x8
  __declspec(property(get = __get_buffer, put = __set_buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field count, offset 0x38, size 0x8
  __declspec(property(get = __get_count, put = __set_count))::ArrayW<uint32_t, ::Array<uint32_t>*> count;

  /// @brief Field x, offset 0x40, size 0x8
  __declspec(property(get = __get_x, put = __set_x))::ArrayW<uint32_t, ::Array<uint32_t>*> x;

  /// @brief Field digest, offset 0x48, size 0x8
  __declspec(property(get = __get_digest, put = __set_digest))::ArrayW<uint8_t, ::Array<uint8_t>*> digest;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_state();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_state() const;

  constexpr void __set_state(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_buffer() const;

  constexpr void __set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_count();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_count() const;

  constexpr void __set_count(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __get_x();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __get_x() const;

  constexpr void __set_x(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_digest();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_digest() const;

  constexpr void __set_digest(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Mono::Security::Cryptography::MD4Managed* New_ctor();

  /// @brief Method .ctor addr 0x2420f74 size 0xd0 virtual false final false
  inline void _ctor();

  /// @brief Method Initialize addr 0x2421044 size 0xb4 virtual true final false
  inline void Initialize();

  /// @brief Method HashCore addr 0x24210f8 size 0x124 virtual true final false
  inline void HashCore(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t ibStart, int32_t cbSize);

  /// @brief Method HashFinal addr 0x2421894 size 0xfc virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashFinal();

  /// @brief Method Padding addr 0x2421a88 size 0x78 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Padding(int32_t nLength);

  /// @brief Method F addr 0x2421b00 size 0x10 virtual false final false
  inline uint32_t F(uint32_t x, uint32_t y, uint32_t z);

  /// @brief Method G addr 0x2421b10 size 0x14 virtual false final false
  inline uint32_t G(uint32_t x, uint32_t y, uint32_t z);

  /// @brief Method H addr 0x2421b24 size 0xc virtual false final false
  inline uint32_t H(uint32_t x, uint32_t y, uint32_t z);

  /// @brief Method ROL addr 0x2421b30 size 0x10 virtual false final false
  inline uint32_t ROL(uint32_t x, uint8_t n);

  /// @brief Method FF addr 0x2421b40 size 0x2c virtual false final false
  inline void FF(ByRef<uint32_t> a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s);

  /// @brief Method GG addr 0x2421b6c size 0x3c virtual false final false
  inline void GG(ByRef<uint32_t> a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s);

  /// @brief Method HH addr 0x2421ba8 size 0x34 virtual false final false
  inline void HH(ByRef<uint32_t> a, uint32_t b, uint32_t c, uint32_t d, uint32_t x, uint8_t s);

  /// @brief Method Encode addr 0x2421990 size 0xf8 virtual false final false
  inline void Encode(::ArrayW<uint8_t, ::Array<uint8_t>*> output, ::ArrayW<uint32_t, ::Array<uint32_t>*> input);

  /// @brief Method Decode addr 0x2421bdc size 0xb4 virtual false final false
  inline void Decode(::ArrayW<uint32_t, ::Array<uint32_t>*> output, ::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t index);

  /// @brief Method MD4Transform addr 0x242121c size 0x678 virtual false final false
  inline void MD4Transform(::ArrayW<uint32_t, ::Array<uint32_t>*> state, ::ArrayW<uint8_t, ::Array<uint8_t>*> block, int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "MD4Managed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MD4Managed(MD4Managed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MD4Managed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MD4Managed(MD4Managed const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MD4Managed();

public:
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
static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::MD4Managed, 0x50>, "Size mismatch!");

} // namespace Mono::Security::Cryptography
NEED_NO_BOX(::Mono::Security::Cryptography::MD4Managed);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::MD4Managed*, "Mono.Security.Cryptography", "MD4Managed");
