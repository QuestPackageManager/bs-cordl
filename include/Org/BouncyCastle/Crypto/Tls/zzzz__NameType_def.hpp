#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/NameType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NameType)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class NameType;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::NameType);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.NameType
class CORDL_TYPE NameType : public ::System::Object {
public:
  // Declarations
  /// @brief Method IsValid, addr 0x2417698, size 0xc, virtual false, abstract: false, final false
  static inline bool IsValid(uint8_t nameType);

  static inline ::Org::BouncyCastle::Crypto::Tls::NameType* New_ctor();

  /// @brief Method .ctor, addr 0x24176a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NameType();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NameType", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NameType(NameType&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NameType", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NameType(NameType const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1256 };

  /// @brief Field host_name offset 0xffffffff size 0x1
  static constexpr uint8_t host_name{ static_cast<uint8_t>(0x0u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::NameType, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::NameType);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::NameType*, "Org.BouncyCastle.Crypto.Tls", "NameType");
