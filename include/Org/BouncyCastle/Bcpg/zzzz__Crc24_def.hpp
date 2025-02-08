#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/Crc24.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Crc24)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg {
class Crc24;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::Crc24);
// Dependencies System.Object
namespace Org::BouncyCastle::Bcpg {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.Crc24
class CORDL_TYPE Crc24 : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Value)) int32_t Value;

  /// @brief Field crc, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_crc, put = __cordl_internal_set_crc)) int32_t crc;

  /// @brief Method GetValue, addr 0x2647a0c, size 0x8, virtual false, abstract: false, final false
  inline int32_t GetValue();

  static inline ::Org::BouncyCastle::Bcpg::Crc24* New_ctor();

  /// @brief Method Reset, addr 0x2641ab8, size 0x10, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method Update, addr 0x2641ac8, size 0x34, virtual false, abstract: false, final false
  inline void Update(int32_t b);

  constexpr int32_t const& __cordl_internal_get_crc() const;

  constexpr int32_t& __cordl_internal_get_crc();

  constexpr void __cordl_internal_set_crc(int32_t value);

  /// @brief Method .ctor, addr 0x2640e2c, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Value, addr 0x2647a14, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Value();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Crc24();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Crc24", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Crc24(Crc24&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Crc24", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Crc24(Crc24 const&) = delete;

  /// @brief Field Crc24Init offset 0xffffffff size 0x4
  static constexpr int32_t Crc24Init{ static_cast<int32_t>(0xb704ce) };

  /// @brief Field Crc24Poly offset 0xffffffff size 0x4
  static constexpr int32_t Crc24Poly{ static_cast<int32_t>(0x1864cfb) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 561 };

  /// @brief Field crc, offset: 0x10, size: 0x4, def value: None
  int32_t ___crc;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Bcpg::Crc24, ___crc) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::Crc24, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Crc24);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Crc24*, "Org.BouncyCastle.Bcpg", "Crc24");
