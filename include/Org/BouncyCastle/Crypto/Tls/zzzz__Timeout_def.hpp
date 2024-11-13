#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Tls/Timeout.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Timeout)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Tls {
class Timeout;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Tls::Timeout);
// Type: Org.BouncyCastle.Crypto.Tls::Timeout
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Tls {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Tls::Timeout*
class CORDL_TYPE Timeout : public ::System::Object {
public:
  // Declarations
  /// @brief Field durationMillis, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_durationMillis, put = __cordl_internal_set_durationMillis)) int64_t durationMillis;

  /// @brief Field startMillis, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_startMillis, put = __cordl_internal_set_startMillis)) int64_t startMillis;

  /// @brief Method ConstrainWaitMillis, addr 0x23e8914, size 0xd0, virtual false, abstract: false, final false
  static inline int32_t ConstrainWaitMillis(int32_t waitMillis, ::Org::BouncyCastle::Crypto::Tls::Timeout* timeout, int64_t currentTimeMillis);

  /// @brief Method ForWaitMillis, addr 0x23e8a18, size 0x60, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::Timeout* ForWaitMillis(int32_t waitMillis);

  /// @brief Method ForWaitMillis, addr 0x23e8a78, size 0xcc, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Tls::Timeout* ForWaitMillis(int32_t waitMillis, int64_t currentTimeMillis);

  /// @brief Method GetWaitMillis, addr 0x23e89e4, size 0x34, virtual false, abstract: false, final false
  static inline int32_t GetWaitMillis(::Org::BouncyCastle::Crypto::Tls::Timeout* timeout, int64_t currentTimeMillis);

  /// @brief Method HasExpired, addr 0x23e8b44, size 0x1c, virtual false, abstract: false, final false
  static inline bool HasExpired(::Org::BouncyCastle::Crypto::Tls::Timeout* timeout, int64_t currentTimeMillis);

  static inline ::Org::BouncyCastle::Crypto::Tls::Timeout* New_ctor(int64_t durationMillis);

  static inline ::Org::BouncyCastle::Crypto::Tls::Timeout* New_ctor(int64_t durationMillis, int64_t currentTimeMillis);

  /// @brief Method RemainingMillis, addr 0x23e88b0, size 0x64, virtual false, abstract: false, final false
  inline int64_t RemainingMillis(int64_t currentTimeMillis);

  constexpr int64_t const& __cordl_internal_get_durationMillis() const;

  constexpr int64_t& __cordl_internal_get_durationMillis();

  constexpr int64_t const& __cordl_internal_get_startMillis() const;

  constexpr int64_t& __cordl_internal_get_startMillis();

  constexpr void __cordl_internal_set_durationMillis(int64_t value);

  constexpr void __cordl_internal_set_startMillis(int64_t value);

  /// @brief Method .ctor, addr 0x23e87ac, size 0x70, virtual false, abstract: false, final false
  inline void _ctor(int64_t durationMillis);

  /// @brief Method .ctor, addr 0x23e881c, size 0x94, virtual false, abstract: false, final false
  inline void _ctor(int64_t durationMillis, int64_t currentTimeMillis);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Timeout();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Timeout", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Timeout(Timeout&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Timeout", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Timeout(Timeout const&) = delete;

  /// @brief Field durationMillis, offset: 0x10, size: 0x8, def value: None
  int64_t ___durationMillis;

  /// @brief Field startMillis, offset: 0x18, size: 0x8, def value: None
  int64_t ___startMillis;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1286 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Tls::Timeout, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::Timeout, ___durationMillis) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Tls::Timeout, ___startMillis) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Tls
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Tls::Timeout);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Tls::Timeout*, "Org.BouncyCastle.Crypto.Tls", "Timeout");
