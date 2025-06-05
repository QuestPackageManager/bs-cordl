#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/HeartbeatExtension.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HeartbeatExtension)
namespace System::IO {
class Stream;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class HeartbeatExtension;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Tls.HeartbeatExtension
class CORDL_TYPE HeartbeatExtension : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Mode)) uint8_t Mode;

  /// @brief Field mMode, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_mMode, put = __cordl_internal_set_mMode)) uint8_t mMode;

  /// @brief Method Encode, addr 0x2416f00, size 0x6c, virtual true, abstract: false, final false
  inline void Encode(::System::IO::Stream* output);

  static inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* New_ctor(uint8_t mode);

  /// @brief Method Parse, addr 0x2416f6c, size 0xd4, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension* Parse(::System::IO::Stream* input);

  constexpr uint8_t const& __cordl_internal_get_mMode() const;

  constexpr uint8_t& __cordl_internal_get_mMode();

  constexpr void __cordl_internal_set_mMode(uint8_t value);

  /// @brief Method .ctor, addr 0x2416e50, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(uint8_t mode);

  /// @brief Method get_Mode, addr 0x2416ef8, size 0x8, virtual true, abstract: false, final false
  inline uint8_t get_Mode();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HeartbeatExtension();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HeartbeatExtension", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HeartbeatExtension(HeartbeatExtension&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HeartbeatExtension", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HeartbeatExtension(HeartbeatExtension const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1247 };

  /// @brief Field mMode, offset: 0x10, size: 0x1, def value: None
  uint8_t ___mMode;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension, ___mMode) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::HeartbeatExtension*, "Org.BouncyCastle.Crypto.Tls", "HeartbeatExtension");
