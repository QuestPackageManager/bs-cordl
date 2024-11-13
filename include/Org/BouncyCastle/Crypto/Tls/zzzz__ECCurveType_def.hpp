#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/ECCurveType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ECCurveType)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class ECCurveType;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::ECCurveType);
// Type: Org.BouncyCastle.Crypto.Tls::ECCurveType
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::ECCurveType*
class CORDL_TYPE ECCurveType : public ::System::Object {
public:
  // Declarations
  static inline ::Org::BouncyCastle::Crypto::Tls::ECCurveType* New_ctor();

  /// @brief Method .ctor, addr 0x23e14bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ECCurveType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ECCurveType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ECCurveType(ECCurveType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ECCurveType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ECCurveType(ECCurveType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1239 };

  /// @brief Field explicit_char2 offset 0xffffffff size 0x1
  static constexpr uint8_t explicit_char2{ static_cast<uint8_t>(0x2u) };

  /// @brief Field explicit_prime offset 0xffffffff size 0x1
  static constexpr uint8_t explicit_prime{ static_cast<uint8_t>(0x1u) };

  /// @brief Field named_curve offset 0xffffffff size 0x1
  static constexpr uint8_t named_curve{ static_cast<uint8_t>(0x3u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::ECCurveType, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::ECCurveType);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::ECCurveType*, "Org.BouncyCastle.Crypto.Tls", "ECCurveType");
