#pragma once
// IWYU pragma private; include "Mono/Security/Cryptography/MD2Managed.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Cryptography/zzzz__MD2_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MD2Managed)
// Forward declare root types
namespace Mono::Security::Cryptography {
class MD2Managed;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::Cryptography::MD2Managed);
// Dependencies Mono.Security.Cryptography.MD2
namespace Mono::Security::Cryptography {
// Is value type: false
// CS Name: Mono.Security.Cryptography.MD2Managed
class CORDL_TYPE MD2Managed : public ::Mono::Security::Cryptography::MD2 {
public:
  // Declarations
  /// @brief Field PI_SUBST, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_PI_SUBST, put = setStaticF_PI_SUBST)) ::ArrayW<uint8_t, ::Array<uint8_t>*> PI_SUBST;

  /// @brief Field buffer, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_buffer, put = __cordl_internal_set_buffer)) ::ArrayW<uint8_t, ::Array<uint8_t>*> buffer;

  /// @brief Field checksum, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_checksum, put = __cordl_internal_set_checksum)) ::ArrayW<uint8_t, ::Array<uint8_t>*> checksum;

  /// @brief Field count, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get_count, put = __cordl_internal_set_count)) int32_t count;

  /// @brief Field state, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_state, put = __cordl_internal_set_state)) ::ArrayW<uint8_t, ::Array<uint8_t>*> state;

  /// @brief Field x, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) ::ArrayW<uint8_t, ::Array<uint8_t>*> x;

  /// @brief Method HashCore, addr 0x588aa74, size 0xdc, virtual true, abstract: false, final false
  inline void HashCore(::ArrayW<uint8_t, ::Array<uint8_t>*> array, int32_t ibStart, int32_t cbSize);

  /// @brief Method HashFinal, addr 0x588adb8, size 0xf0, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> HashFinal();

  /// @brief Method Initialize, addr 0x588aa14, size 0x60, virtual true, abstract: false, final false
  inline void Initialize();

  /// @brief Method MD2Transform, addr 0x588ab50, size 0x268, virtual false, abstract: false, final false
  inline void MD2Transform(::ArrayW<uint8_t, ::Array<uint8_t>*> state, ::ArrayW<uint8_t, ::Array<uint8_t>*> checksum, ::ArrayW<uint8_t, ::Array<uint8_t>*> block, int32_t index);

  static inline ::Mono::Security::Cryptography::MD2Managed* New_ctor();

  /// @brief Method Padding, addr 0x588a74c, size 0x2c8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Padding(int32_t nLength);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_buffer() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_buffer();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_checksum() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_checksum();

  constexpr int32_t const& __cordl_internal_get_count() const;

  constexpr int32_t& __cordl_internal_get_count();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_state() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_state();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_x() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_x();

  constexpr void __cordl_internal_set_buffer(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_checksum(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_count(int32_t value);

  constexpr void __cordl_internal_set_state(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_x(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x588a6a0, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_PI_SUBST();

  static inline void setStaticF_PI_SUBST(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MD2Managed();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MD2Managed", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MD2Managed(MD2Managed&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MD2Managed", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MD2Managed(MD2Managed const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19261 };

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
static_assert(offsetof(::Mono::Security::Cryptography::MD2Managed, ___state) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::MD2Managed, ___checksum) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::MD2Managed, ___buffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::MD2Managed, ___count) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Mono::Security::Cryptography::MD2Managed, ___x) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Mono::Security::Cryptography::MD2Managed, 0x50>, "Size mismatch!");

} // namespace Mono::Security::Cryptography
NEED_NO_BOX(::Mono::Security::Cryptography::MD2Managed);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::Cryptography::MD2Managed*, "Mono.Security.Cryptography", "MD2Managed");
