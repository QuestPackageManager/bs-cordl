#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KdfFeedbackBytesGenerator)
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
namespace Org::BouncyCastle::Crypto {
class IMacDerivationFunction;
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
// Type: Org.BouncyCastle.Crypto.Generators::KdfFeedbackBytesGenerator
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(912))
// CS Name: ::Org.BouncyCastle.Crypto.Generators::KdfFeedbackBytesGenerator*
class CORDL_TYPE KdfFeedbackBytesGenerator : public ::System::Object {
public:
  // Declarations
  /// @brief Field prf, offset 0x10, size 0x8
  __declspec(property(get = __get_prf, put = __set_prf))::Org::BouncyCastle::Crypto::IMac* prf;

  /// @brief Field h, offset 0x18, size 0x4
  __declspec(property(get = __get_h, put = __set_h)) int32_t h;

  /// @brief Field fixedInputData, offset 0x20, size 0x8
  __declspec(property(get = __get_fixedInputData, put = __set_fixedInputData))::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputData;

  /// @brief Field maxSizeExcl, offset 0x28, size 0x4
  __declspec(property(get = __get_maxSizeExcl, put = __set_maxSizeExcl)) int32_t maxSizeExcl;

  /// @brief Field ios, offset 0x30, size 0x8
  __declspec(property(get = __get_ios, put = __set_ios))::ArrayW<uint8_t, ::Array<uint8_t>*> ios;

  /// @brief Field iv, offset 0x38, size 0x8
  __declspec(property(get = __get_iv, put = __set_iv))::ArrayW<uint8_t, ::Array<uint8_t>*> iv;

  /// @brief Field useCounter, offset 0x40, size 0x1
  __declspec(property(get = __get_useCounter, put = __set_useCounter)) bool useCounter;

  /// @brief Field generatedBytes, offset 0x44, size 0x4
  __declspec(property(get = __get_generatedBytes, put = __set_generatedBytes)) int32_t generatedBytes;

  /// @brief Field k, offset 0x48, size 0x8
  __declspec(property(get = __get_k, put = __set_k))::ArrayW<uint8_t, ::Array<uint8_t>*> k;

  /// @brief Field IntegerMax, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_IntegerMax, put = setStaticF_IntegerMax))::Org::BouncyCastle::Math::BigInteger* IntegerMax;

  /// @brief Field Two, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_Two, put = setStaticF_Two))::Org::BouncyCastle::Math::BigInteger* Two;

  __declspec(property(get = get_Digest))::Org::BouncyCastle::Crypto::IDigest* Digest;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMacDerivationFunction"
  constexpr operator ::Org::BouncyCastle::Crypto::IMacDerivationFunction*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IMacDerivationFunction"
  constexpr ::Org::BouncyCastle::Crypto::IMacDerivationFunction* i___Org__BouncyCastle__Crypto__IMacDerivationFunction() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationFunction"
  constexpr operator ::Org::BouncyCastle::Crypto::IDerivationFunction*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationFunction"
  constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction* i___Org__BouncyCastle__Crypto__IDerivationFunction() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IMac*& __get_prf();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IMac*> const& __get_prf() const;

  constexpr void __set_prf(::Org::BouncyCastle::Crypto::IMac* value);

  constexpr int32_t& __get_h();

  constexpr int32_t const& __get_h() const;

  constexpr void __set_h(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_fixedInputData();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_fixedInputData() const;

  constexpr void __set_fixedInputData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_maxSizeExcl();

  constexpr int32_t const& __get_maxSizeExcl() const;

  constexpr void __set_maxSizeExcl(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_ios();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_ios() const;

  constexpr void __set_ios(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_iv();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_iv() const;

  constexpr void __set_iv(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr bool& __get_useCounter();

  constexpr bool const& __get_useCounter() const;

  constexpr void __set_useCounter(bool value);

  constexpr int32_t& __get_generatedBytes();

  constexpr int32_t const& __get_generatedBytes() const;

  constexpr void __set_generatedBytes(int32_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_k();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_k() const;

  constexpr void __set_k(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline void setStaticF_IntegerMax(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_IntegerMax();

  static inline void setStaticF_Two(::Org::BouncyCastle::Math::BigInteger* value);

  static inline ::Org::BouncyCastle::Math::BigInteger* getStaticF_Two();

  static inline ::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator* New_ctor(::Org::BouncyCastle::Crypto::IMac* prf);

  /// @brief Method .ctor, addr 0xefe8e8, size 0xe0, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IMac* prf);

  /// @brief Method Init, addr 0xefe9c8, size 0x2bc, virtual true, abstract: false, final true
  inline void Init(::Org::BouncyCastle::Crypto::IDerivationParameters* parameters);

  /// @brief Method get_Digest, addr 0xefec84, size 0x88, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::IDigest* get_Digest();

  /// @brief Method GenerateBytes, addr 0xefed0c, size 0x208, virtual true, abstract: false, final true
  inline int32_t GenerateBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff, int32_t length);

  /// @brief Method generateNext, addr 0xefef14, size 0x38c, virtual false, abstract: false, final false
  inline void generateNext();

  /// @brief Method GetMac, addr 0xeff2a0, size 0x8, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Crypto::IMac* GetMac();

  // Ctor Parameters [CppParam { name: "", ty: "KdfFeedbackBytesGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KdfFeedbackBytesGenerator(KdfFeedbackBytesGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KdfFeedbackBytesGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KdfFeedbackBytesGenerator(KdfFeedbackBytesGenerator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KdfFeedbackBytesGenerator();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator, 0x50>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator, ___prf) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator, ___h) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator, ___fixedInputData) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator, ___maxSizeExcl) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator, ___ios) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator, ___iv) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator, ___useCounter) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator, ___generatedBytes) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator, ___k) == 0x48, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::KdfFeedbackBytesGenerator*, "Org.BouncyCastle.Crypto.Generators", "KdfFeedbackBytesGenerator");
