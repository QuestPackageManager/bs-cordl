#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Utilities/Encoders/zzzz__Base64Encoder_def.hpp"
CORDL_MODULE_EXPORT(UrlBase64Encoder)
// Forward declare root types
namespace Org::BouncyCastle::Utilities::Encoders {
class UrlBase64Encoder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder);
// Type: Org.BouncyCastle.Utilities.Encoders::UrlBase64Encoder
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Utilities::Encoders {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(1795))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1803))
// CS Name: ::Org.BouncyCastle.Utilities.Encoders::UrlBase64Encoder*
class CORDL_TYPE UrlBase64Encoder : public ::Org::BouncyCastle::Utilities::Encoders::Base64Encoder {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder* New_ctor();

  /// @brief Method .ctor, addr 0x118d5e0, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "UrlBase64Encoder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UrlBase64Encoder(UrlBase64Encoder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UrlBase64Encoder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UrlBase64Encoder(UrlBase64Encoder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UrlBase64Encoder();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder, 0x28>, "Size mismatch!");

} // namespace Org::BouncyCastle::Utilities::Encoders
NEED_NO_BOX(::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Utilities::Encoders::UrlBase64Encoder*, "Org.BouncyCastle.Utilities.Encoders", "UrlBase64Encoder");
