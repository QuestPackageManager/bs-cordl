#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultVerifierResult)
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto {
class IVerifier;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class DefaultVerifierResult;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult);
// Type: Org.BouncyCastle.Crypto.Operators::DefaultVerifierResult
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1003))
// CS Name: ::Org.BouncyCastle.Crypto.Operators::DefaultVerifierResult*
class CORDL_TYPE DefaultVerifierResult : public ::System::Object {
public:
  // Declarations
  /// @brief Field mSigner, offset 0x10, size 0x8
  __declspec(property(get = __get_mSigner, put = __set_mSigner))::Org::BouncyCastle::Crypto::ISigner* mSigner;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IVerifier"
  constexpr operator ::Org::BouncyCastle::Crypto::IVerifier*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::ISigner*& __get_mSigner();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ISigner*> const& __get_mSigner() const;

  constexpr void __set_mSigner(::Org::BouncyCastle::Crypto::ISigner* value);

  static inline ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult* New_ctor(::Org::BouncyCastle::Crypto::ISigner* signer);

  /// @brief Method .ctor, addr 0xf2df28, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::ISigner* signer);

  /// @brief Method IsVerified, addr 0xf2df50, size 0xac, virtual true, abstract: false, final true
  inline bool IsVerified(::ArrayW<uint8_t, ::Array<uint8_t>*> signature);

  /// @brief Method IsVerified, addr 0xf2dffc, size 0x88, virtual true, abstract: false, final true
  inline bool IsVerified(::ArrayW<uint8_t, ::Array<uint8_t>*> sig, int32_t sigOff, int32_t sigLen);

  // Ctor Parameters [CppParam { name: "", ty: "DefaultVerifierResult", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultVerifierResult(DefaultVerifierResult&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultVerifierResult", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultVerifierResult(DefaultVerifierResult const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultVerifierResult();

public:
  /// @brief Field mSigner, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ISigner* ___mSigner;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult, ___mSigner) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::DefaultVerifierResult*, "Org.BouncyCastle.Crypto.Operators", "DefaultVerifierResult");
