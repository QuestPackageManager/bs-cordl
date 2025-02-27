#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Signers/IsoTrailers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IsoTrailers)
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Signers {
class IsoTrailers;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Signers::IsoTrailers);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Signers {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Signers.IsoTrailers
class CORDL_TYPE IsoTrailers : public ::System::Object {
public:
  // Declarations
  /// @brief Field trailerMap, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_trailerMap, put = setStaticF_trailerMap)) ::System::Collections::IDictionary* trailerMap;

  /// @brief Method CreateTrailerMap, addr 0x23de494, size 0x674, virtual false, abstract: false, final false
  static inline ::System::Collections::IDictionary* CreateTrailerMap();

  /// @brief Method GetTrailer, addr 0x23dab78, size 0x184, virtual false, abstract: false, final false
  static inline int32_t GetTrailer(::Org::BouncyCastle::Crypto::IDigest* digest);

  static inline ::Org::BouncyCastle::Crypto::Signers::IsoTrailers* New_ctor();

  /// @brief Method NoTrailerAvailable, addr 0x23daa24, size 0x154, virtual false, abstract: false, final false
  static inline bool NoTrailerAvailable(::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method .ctor, addr 0x23deb54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::IDictionary* getStaticF_trailerMap();

  static inline void setStaticF_trailerMap(::System::Collections::IDictionary* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IsoTrailers();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IsoTrailers", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IsoTrailers(IsoTrailers&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IsoTrailers", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IsoTrailers(IsoTrailers const&) = delete;

  /// @brief Field TRAILER_IMPLICIT offset 0xffffffff size 0x4
  static constexpr int32_t TRAILER_IMPLICIT{ static_cast<int32_t>(0xbc) };

  /// @brief Field TRAILER_RIPEMD128 offset 0xffffffff size 0x4
  static constexpr int32_t TRAILER_RIPEMD128{ static_cast<int32_t>(0x32cc) };

  /// @brief Field TRAILER_RIPEMD160 offset 0xffffffff size 0x4
  static constexpr int32_t TRAILER_RIPEMD160{ static_cast<int32_t>(0x31cc) };

  /// @brief Field TRAILER_SHA1 offset 0xffffffff size 0x4
  static constexpr int32_t TRAILER_SHA1{ static_cast<int32_t>(0x33cc) };

  /// @brief Field TRAILER_SHA224 offset 0xffffffff size 0x4
  static constexpr int32_t TRAILER_SHA224{ static_cast<int32_t>(0x38cc) };

  /// @brief Field TRAILER_SHA256 offset 0xffffffff size 0x4
  static constexpr int32_t TRAILER_SHA256{ static_cast<int32_t>(0x34cc) };

  /// @brief Field TRAILER_SHA384 offset 0xffffffff size 0x4
  static constexpr int32_t TRAILER_SHA384{ static_cast<int32_t>(0x36cc) };

  /// @brief Field TRAILER_SHA512 offset 0xffffffff size 0x4
  static constexpr int32_t TRAILER_SHA512{ static_cast<int32_t>(0x35cc) };

  /// @brief Field TRAILER_SHA512_224 offset 0xffffffff size 0x4
  static constexpr int32_t TRAILER_SHA512_224{ static_cast<int32_t>(0x39cc) };

  /// @brief Field TRAILER_SHA512_256 offset 0xffffffff size 0x4
  static constexpr int32_t TRAILER_SHA512_256{ static_cast<int32_t>(0x40cc) };

  /// @brief Field TRAILER_WHIRLPOOL offset 0xffffffff size 0x4
  static constexpr int32_t TRAILER_WHIRLPOOL{ static_cast<int32_t>(0x37cc) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1148 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Signers::IsoTrailers, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Signers
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Signers::IsoTrailers);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Signers::IsoTrailers*, "Org.BouncyCastle.Crypto.Signers", "IsoTrailers");
