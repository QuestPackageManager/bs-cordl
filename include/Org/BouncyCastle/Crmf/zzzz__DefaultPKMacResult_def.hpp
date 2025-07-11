#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crmf/DefaultPKMacResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IBlockResult_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultPKMacResult)
namespace Org::BouncyCastle::Crypto {
class IMac;
}
// Forward declare root types
namespace Org::BouncyCastle::Crmf {
class DefaultPKMacResult;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crmf::DefaultPKMacResult);
// Dependencies Org.BouncyCastle.Crypto.IBlockResult, System.Object
namespace Org::BouncyCastle::Crmf {
// Is value type: false
// CS Name: Org.BouncyCastle.Crmf.DefaultPKMacResult
class CORDL_TYPE DefaultPKMacResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field mac, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mac, put = __cordl_internal_set_mac)) ::Org::BouncyCastle::Crypto::IMac* mac;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockResult"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockResult*() noexcept;

  /// @brief Method Collect, addr 0x26866d8, size 0x148, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Collect();

  /// @brief Method Collect, addr 0x2686820, size 0x40, virtual true, abstract: false, final true
  inline int32_t Collect(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  static inline ::Org::BouncyCastle::Crmf::DefaultPKMacResult* New_ctor(::Org::BouncyCastle::Crypto::IMac* mac);

  constexpr ::Org::BouncyCastle::Crypto::IMac* const& __cordl_internal_get_mac() const;

  constexpr ::Org::BouncyCastle::Crypto::IMac*& __cordl_internal_get_mac();

  constexpr void __cordl_internal_set_mac(::Org::BouncyCastle::Crypto::IMac* value);

  /// @brief Method .ctor, addr 0x2686434, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IMac* mac);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockResult"
  constexpr ::Org::BouncyCastle::Crypto::IBlockResult* i___Org__BouncyCastle__Crypto__IBlockResult() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultPKMacResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultPKMacResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultPKMacResult(DefaultPKMacResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultPKMacResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultPKMacResult(DefaultPKMacResult const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 710 };

  /// @brief Field mac, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IMac* ___mac;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crmf::DefaultPKMacResult, ___mac) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crmf::DefaultPKMacResult, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crmf
NEED_NO_BOX(::Org::BouncyCastle::Crmf::DefaultPKMacResult);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crmf::DefaultPKMacResult*, "Org.BouncyCastle.Crmf", "DefaultPKMacResult");
