#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Bcpg/Sig/PreferredAlgorithms.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PreferredAlgorithms)
namespace Org::BouncyCastle::Bcpg {
struct SignatureSubpacketTag;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class PreferredAlgorithms;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms);
// Dependencies Org.BouncyCastle.Bcpg.SignatureSubpacket
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// CS Name: Org.BouncyCastle.Bcpg.Sig.PreferredAlgorithms
class CORDL_TYPE PreferredAlgorithms : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
  // Declarations
  /// @brief Method GetPreferences, addr 0x263d120, size 0xa8, virtual false, abstract: false, final false
  inline ::ArrayW<int32_t, ::Array<int32_t>*> GetPreferences();

  /// @brief Method IntToByteArray, addr 0x263cfe4, size 0xa0, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> IntToByteArray(::ArrayW<int32_t, ::Array<int32_t>*> v);

  static inline ::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms* New_ctor(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type, bool critical, bool isLongLength,
                                                                              ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms* New_ctor(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type, bool critical, ::ArrayW<int32_t, ::Array<int32_t>*> preferences);

  /// @brief Method .ctor, addr 0x263d084, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type, bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor, addr 0x263d0cc, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Bcpg::SignatureSubpacketTag type, bool critical, ::ArrayW<int32_t, ::Array<int32_t>*> preferences);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreferredAlgorithms();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PreferredAlgorithms", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreferredAlgorithms(PreferredAlgorithms&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreferredAlgorithms", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreferredAlgorithms(PreferredAlgorithms const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 539 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::Sig
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Sig::PreferredAlgorithms*, "Org.BouncyCastle.Bcpg.Sig", "PreferredAlgorithms");
