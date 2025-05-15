#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/Sig/PrimaryUserId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PrimaryUserId)
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class PrimaryUserId;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::Sig::PrimaryUserId);
// Dependencies Org.BouncyCastle.Bcpg.SignatureSubpacket
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.Sig.PrimaryUserId
class CORDL_TYPE PrimaryUserId : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
  // Declarations
  /// @brief Method BooleanToByteArray, addr 0x263f558, size 0x6c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> BooleanToByteArray(bool val);

  /// @brief Method IsPrimaryUserId, addr 0x263f658, size 0x30, virtual false, abstract: false, final false
  inline bool IsPrimaryUserId();

  static inline ::Org::BouncyCastle::Bcpg::Sig::PrimaryUserId* New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::Org::BouncyCastle::Bcpg::Sig::PrimaryUserId* New_ctor(bool critical, bool isPrimaryUserId);

  /// @brief Method .ctor, addr 0x263f5c4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x263f60c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor(bool critical, bool isPrimaryUserId);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PrimaryUserId();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PrimaryUserId", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PrimaryUserId(PrimaryUserId&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PrimaryUserId", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PrimaryUserId(PrimaryUserId const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 540 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::Sig::PrimaryUserId, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::Sig
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Sig::PrimaryUserId);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Sig::PrimaryUserId*, "Org.BouncyCastle.Bcpg.Sig", "PrimaryUserId");
