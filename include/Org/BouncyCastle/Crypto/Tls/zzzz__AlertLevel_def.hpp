#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AlertLevel)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class AlertLevel;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::AlertLevel);
// Type: Org.BouncyCastle.Crypto.Tls::AlertLevel
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::AlertLevel*
class CORDL_TYPE AlertLevel : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetName, addr 0xfcce08, size 0xa8, virtual false, abstract: false, final false
  static inline ::StringW GetName(uint8_t alertDescription);

  /// @brief Method GetText, addr 0xfcceb0, size 0x17c, virtual false, abstract: false, final false
  static inline ::StringW GetText(uint8_t alertDescription);

  static inline ::Org::BouncyCastle::Crypto::Tls::AlertLevel* New_ctor();

  /// @brief Method .ctor, addr 0xfcd02c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AlertLevel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AlertLevel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AlertLevel(AlertLevel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AlertLevel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AlertLevel(AlertLevel const&) = delete;

  /// @brief Field fatal offset 0xffffffff size 0x1
  static constexpr uint8_t fatal{ static_cast<uint8_t>(0x2u) };

  /// @brief Field warning offset 0xffffffff size 0x1
  static constexpr uint8_t warning{ static_cast<uint8_t>(0x1u) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::AlertLevel, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::AlertLevel);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::AlertLevel*, "Org.BouncyCastle.Crypto.Tls", "AlertLevel");
