#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Bcpg/zzzz__SignatureSubpacket_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SignatureCreationTime)
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Bcpg::Sig {
class SignatureCreationTime;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime);
// Type: Org.BouncyCastle.Bcpg.Sig::SignatureCreationTime
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Bcpg::Sig {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(531))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(546))
// CS Name: ::Org.BouncyCastle.Bcpg.Sig::SignatureCreationTime*
class CORDL_TYPE SignatureCreationTime : public ::Org::BouncyCastle::Bcpg::SignatureSubpacket {
public:
  // Declarations
  /// @brief Method TimeToBytes addr 0x11579dc size 0xe8 virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> TimeToBytes(::System::DateTime time);

  static inline ::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime* New_ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  /// @brief Method .ctor addr 0x1157ac4 size 0x48 virtual false final false
  inline void _ctor(bool critical, bool isLongLength, ::ArrayW<uint8_t, ::Array<uint8_t>*> data);

  static inline ::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime* New_ctor(bool critical, ::System::DateTime date);

  /// @brief Method .ctor addr 0x1157b0c size 0x4c virtual false final false
  inline void _ctor(bool critical, ::System::DateTime date);

  /// @brief Method GetTime addr 0x1157b58 size 0xac virtual false final false
  inline ::System::DateTime GetTime();

  // Ctor Parameters [CppParam { name: "", ty: "SignatureCreationTime", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SignatureCreationTime(SignatureCreationTime&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SignatureCreationTime", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SignatureCreationTime(SignatureCreationTime const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SignatureCreationTime();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Bcpg::Sig
NEED_NO_BOX(::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Bcpg::Sig::SignatureCreationTime*, "Org.BouncyCastle.Bcpg.Sig", "SignatureCreationTime");
