#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Generators/KdfFeedbackBytesGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationFunction_def.hpp"
#include "Org/BouncyCastle/Crypto/zzzz__IMacDerivationFunction_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KdfFeedbackBytesGenerator)
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class KdfFeedbackBytesGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator);
// Dependencies Org.BouncyCastle.Crypto.IDerivationFunction, Org.BouncyCastle.Crypto.IMacDerivationFunction, System.Object
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Generators.KdfFeedbackBytesGenerator
class CORDL_TYPE KdfFeedbackBytesGenerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Digest)) ::Org::BouncyCastle::Crypto::IDigest* Digest;

  /// @brief Field IntegerMax, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_IntegerMax, put = setStaticF_IntegerMax)) ::Org::BouncyCastle::Math::BigInteger* IntegerMax;

  /// @brief Field Two, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_Two, put = setStaticF_Two)) ::Org::BouncyCastle::Math::BigInteger* Two;

  /// @brief Field fixedInputData, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_fixedInputData, put = __cordl_internal_set_fixedInputData)) ::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputData;

  /// @brief Field generatedBytes, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get_generatedBytes, put = __cordl_internal_set_generatedBytes)) int32_t generatedBytes;

  /// @brief Field h, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_h, put = __cordl_internal_set_h)) int32_t h;

  /// @brief Field ios, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_ios, put = __cordl_internal_set_ios)) ::ArrayW<uint8_t, ::Array<uint8_t>*> ios;

  /// @brief Field iv, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_iv, put = __cordl_internal_set_iv)) ::ArrayW<uint8_t, ::Array<uint8_t>*> iv;

  /// @brief Field k, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_k, put = __cordl_internal_set_k)) ::ArrayW<uint8_t, ::Array<uint8_t>*> k;

  /// @brief Field maxSizeExcl, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_maxSizeExcl, put = __cordl_internal_set_maxSizeExcl)) int32_t maxSizeExcl;

  /// @brief Field prf, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_prf, put = __cordl_internal_set_prf)) ::Org::BouncyCastle::Crypto::IMac* prf;

  /// @brief Field useCounter, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_useCounter, put = __cordl_internal_set_useCounter)) bool useCounter;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationFunction"
  constexpr operator ::Org::BouncyCastle::Crypto::IDerivationFunction*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMacDerivationFunction"
  constexpr operator ::Org::BouncyCastle::Crypto::IMacDerivationFunction*() noexcept;

  /// @brief Method GenerateBytes, addr 0x2389a64, size 0x200, virtual true, abstract: false, final true
  inline int32_t GenerateBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff, int32_t length);

  /// @brief Method GetMac, addr 0x2389fdc, size 0x8, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::IMac* GetMac();

  /// @brief Method Init, addr 0x2389728, size 0x2b4, virtual true, abstract: false, final true
  inline void Init(::Org::BouncyCastle::Crypto::IDerivationParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator* New_ctor(::Org::BouncyCastle::Crypto::IMac* prf);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_fixedInputData() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_fixedInputData();

  constexpr int32_t const& __cordl_internal_get_generatedBytes() const;

  constexpr int32_t& __cordl_internal_get_generatedBytes();

  constexpr int32_t const& __cordl_internal_get_h() const;

  constexpr int32_t& __cordl_internal_get_h();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_ios() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_ios();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_iv() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_iv();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_k() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_k();

  constexpr int32_t const& __cordl_internal_get_maxSizeExcl() const;

  constexpr int32_t& __cordl_internal_get_maxSizeExcl();

  constexpr ::Org::BouncyCastle::Crypto::IMac* const& __cordl_internal_get_prf() const;

  constexpr ::Org::BouncyCastle::Crypto::IMac*& __cordl_internal_get_prf();

  constexpr bool const& __cordl_internal_get_useCounter() const;

  constexpr bool& __cordl_internal_get_useCounter();

  constexpr void __cordl_internal_set_fixedInputData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_generatedBytes(int32_t value);

  constexpr void __cordl_internal_set_h(int32_t value);

  constexpr void __cordl_internal_set_ios(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_iv(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_k(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_maxSizeExcl(int32_t value);

  constexpr void __cordl_internal_set_prf(::Org::BouncyCastle::Crypto::IMac* value);

  constexpr void __cordl_internal_set_useCounter(bool value);

  /// @brief Method .ctor, addr 0x2389648, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IMac* prf);

  /// @brief Method generateNext, addr 0x2389c64, size 0x378, virtual false, abstract: false, final false
  inline void generateNext();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_IntegerMax();

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Two();

  /// @brief Method get_Digest, addr 0x23899dc, size 0x88, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::IDigest* get_Digest();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationFunction"
  constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction* i___Org__BouncyCastle__Crypto__IDerivationFunction() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IMacDerivationFunction"
  constexpr ::Org::BouncyCastle::Crypto::IMacDerivationFunction* i___Org__BouncyCastle__Crypto__IMacDerivationFunction() noexcept;

  static inline void setStaticF_IntegerMax(::Org::BouncyCastle::Math::BigInteger* value);

  static inline void setStaticF_Two(::Org::BouncyCastle::Math::BigInteger* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KdfFeedbackBytesGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KdfFeedbackBytesGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KdfFeedbackBytesGenerator(KdfFeedbackBytesGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KdfFeedbackBytesGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KdfFeedbackBytesGenerator(KdfFeedbackBytesGenerator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 912 };

  /// @brief Field prf, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IMac* ___prf;

  /// @brief Field h, offset: 0x18, size: 0x4, def value: None
  int32_t ___h;

  /// @brief Field fixedInputData, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___fixedInputData;

  /// @brief Field maxSizeExcl, offset: 0x28, size: 0x4, def value: None
  int32_t ___maxSizeExcl;

  /// @brief Field ios, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___ios;

  /// @brief Field iv, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___iv;

  /// @brief Field useCounter, offset: 0x40, size: 0x1, def value: None
  bool ___useCounter;

  /// @brief Field generatedBytes, offset: 0x44, size: 0x4, def value: None
  int32_t ___generatedBytes;

  /// @brief Field k, offset: 0x48, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___k;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator, ___prf) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator, ___h) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator, ___fixedInputData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator, ___maxSizeExcl) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator, ___ios) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator, ___iv) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator, ___useCounter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator, ___generatedBytes) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator, ___k) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator, 0x50>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*, "Org.BouncyCastle.Crypto.Generators", "KdfFeedbackBytesGenerator");
