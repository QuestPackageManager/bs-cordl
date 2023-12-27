#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Cryptography/zzzz__MD2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MD2Managed)
// Forward declare root types
namespace Mono::Security::Cryptography {
class MD2Managed;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Cryptography::MD2Managed);
// Type: Mono.Security.Cryptography::MD2Managed
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Mono::Security::Cryptography {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13790))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13791))
// CS Name: ::Mono.Security.Cryptography::MD2Managed*
class CORDL_TYPE MD2Managed : public ::Mono::Security::Cryptography::MD2 {
public:
  // Declarations
  /// @brief Field state, offset 0x28, size 0x8
  __declspec(property(get = __get_state, put = __set_state))::ArrayW<uint8_t, ::Array<uint8_t>*> state;

  /// @brief Field checksum, offset 0x30, size 0x8
  __declspec(property(get = __get_checksum, put = __set_checksum))::ArrayW<uint8_t, ::Array<uint8_t>*> checksum;

  /// @brief Field buffer, offset 0x38, size 0x8
  __declspec(property(get = __get_buffer, put = __set_buffer))::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field count, offset 0x40, size 0x4
  __declspec(property(get = __get_count, put = __set_count)) int32_t count;

  /// @brief Field x, offset 0x48, size 0x8
  __declspec(property(get = __get_x, put = __set_x))::ArrayW<uint8_t, ::Array<uint8_t>*> x;

  /// @brief Field PI_SUBST, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PI_SUBST, put = setStaticF_PI_SUBST))::ArrayW<uint8_t, ::Array<uint8_t>*> PI_SUBST;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_state();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_state() const;

  constexpr void __set_state(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_checksum();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_checksum() const;

  constexpr void __set_checksum(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_buffer() const;

  constexpr void __set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_count();

  constexpr int32_t const& __get_count() const;

  constexpr void __set_count(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_x();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_x() const;

  constexpr void __set_x(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_PI_SUBST(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_PI_SUBST();

  /// @brief Method Padding addr 0x240493c size 0x9c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Padding(int32_t nLength);

  static inline ::Mono::Security::Cryptography::MD2Managed* New_ctor();

  /// @brief Method .ctor addr 0x2404898 size 0xa4 virtual false final false
  inline void _ctor();

  /// @brief Method Initialize addr 0x24049d8 size 0x60 virtual true final false
  inline void Initialize();

  /// @brief Method HashCore addr 0x2404a38 size 0xdc virtual true final false
  inline void HashCore(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t ibStart, int32_t cbSize);

  /// @brief Method HashFinal addr 0x2404d6c size 0xf0 virtual true final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashFinal();

  /// @brief Method MD2Transform addr 0x2404b14 size 0x258 virtual false final false
  inline void MD2Transform(::ArrayW<uint8_t, ::Array<uint8_t>*> state, ::ArrayW<uint8_t, ::Array<uint8_t>*> checksum, ::ArrayW<uint8_t, ::Array<uint8_t>*> block, int32_t index);

  // Ctor Parameters [CppParam { name: "", ty: "MD2Managed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MD2Managed(MD2Managed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MD2Managed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MD2Managed(MD2Managed const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MD2Managed();

public:
  /// @brief Field state, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___state;

  /// @brief Field checksum, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___checksum;

  /// @brief Field buffer, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___buffer;

  /// @brief Field count, offset: 0x40, size: 0x4, def value: None
  int32_t ___count;

  /// @brief Field x, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___x;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::MD2Managed, 0x50>, "Size mismatch!");

} // namespace Mono::Security::Cryptography
NEED_NO_BOX(::Mono::Security::Cryptography::MD2Managed);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::MD2Managed*, "Mono.Security.Cryptography", "MD2Managed");
