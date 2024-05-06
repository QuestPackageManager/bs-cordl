#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/Sig/TrustSignature.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(TrustSignature)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class TrustSignature;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::Sig::TrustSignature);
// Type: Org.BouncyCastle.Bcpg.Sig::TrustSignature
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Bcpg.Sig::TrustSignature*
class CORDL_TYPE TrustSignature : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
  // Declarations
  __declspec(property(get = get_Depth)) int32_t Depth;

  __declspec(property(get = get_TrustAmount)) int32_t TrustAmount;

  /// @brief Method IntToByteArray, addr 0x142c9d0, size 0x7c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> IntToByteArray(int32_t v1, int32_t v2);

  static inline ::Org::BouncyCastle::Bcpg::Sig::TrustSignature* New_ctor(bool critical, int32_t depth, int32_t trustAmount);

  static inline ::Org::BouncyCastle::Bcpg::Sig::TrustSignature* New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x142ca94, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(bool critical, int32_t depth, int32_t trustAmount);

  /// @brief Method .ctor, addr 0x142ca4c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method get_Depth, addr 0x142cae4, size 0x28, virtual false, abstract: false, final false
  inline int32_t get_Depth();

  /// @brief Method get_TrustAmount, addr 0x142cb0c, size 0x2c, virtual false, abstract: false, final false
  inline int32_t get_TrustAmount();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrustSignature();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TrustSignature", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrustSignature(TrustSignature&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrustSignature", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrustSignature(TrustSignature const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::Sig::TrustSignature, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::Sig
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Sig::TrustSignature);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Sig::TrustSignature*, "Org.BouncyCastle.Bcpg.Sig", "TrustSignature");
