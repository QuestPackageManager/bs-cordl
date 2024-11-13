#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Operators/DefaultSignatureResult.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultSignatureResult)
namespace Org::BouncyCastle::Crypto {
class IBlockResult;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class DefaultSignatureResult;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult);
// Type: Org.BouncyCastle.Crypto.Operators::DefaultSignatureResult
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Operators::DefaultSignatureResult*
class CORDL_TYPE DefaultSignatureResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field mSigner, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mSigner, put = __cordl_internal_set_mSigner)) ::Org::BouncyCastle::Crypto::ISigner* mSigner;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockResult"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockResult*() noexcept;

  /// @brief Method Collect, addr 0x23815d4, size 0xa4, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Collect();

  /// @brief Method Collect, addr 0x2381678, size 0x40, virtual true, abstract: false, final true
  inline int32_t Collect(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff);

  static inline ::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult* New_ctor(::Org::BouncyCastle::Crypto::ISigner* signer);

  constexpr ::Org::BouncyCastle::Crypto::ISigner*& __cordl_internal_get_mSigner();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ISigner*> const& __cordl_internal_get_mSigner() const;

  constexpr void __cordl_internal_set_mSigner(::Org::BouncyCastle::Crypto::ISigner* value);

  /// @brief Method .ctor, addr 0x23815ac, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::ISigner* signer);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockResult"
  constexpr ::Org::BouncyCastle::Crypto::IBlockResult* i___Org__BouncyCastle__Crypto__IBlockResult() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultSignatureResult();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultSignatureResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultSignatureResult(DefaultSignatureResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultSignatureResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultSignatureResult(DefaultSignatureResult const&) = delete;

  /// @brief Field mSigner, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ISigner* ___mSigner;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1000 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult, ___mSigner) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::DefaultSignatureResult*, "Org.BouncyCastle.Crypto.Operators", "DefaultSignatureResult");
