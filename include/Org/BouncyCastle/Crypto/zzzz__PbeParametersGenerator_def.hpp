#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/PbeParametersGenerator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PbeParametersGenerator)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto {
class PbeParametersGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::PbeParametersGenerator);
// Type: Org.BouncyCastle.Crypto::PbeParametersGenerator
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto::PbeParametersGenerator*
class CORDL_TYPE PbeParametersGenerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IterationCount)) int32_t IterationCount;

  __declspec(property(get = get_Password))::ArrayW<uint8_t, ::Array<uint8_t>*> Password;

  __declspec(property(get = get_Salt))::ArrayW<uint8_t, ::Array<uint8_t>*> Salt;

  /// @brief Field mIterationCount, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_mIterationCount, put = __cordl_internal_set_mIterationCount)) int32_t mIterationCount;

  /// @brief Field mPassword, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mPassword, put = __cordl_internal_set_mPassword))::ArrayW<uint8_t, ::Array<uint8_t>*> mPassword;

  /// @brief Field mSalt, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_mSalt, put = __cordl_internal_set_mSalt))::ArrayW<uint8_t, ::Array<uint8_t>*> mSalt;

  /// @brief Method GenerateDerivedMacParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedMacParameters(int32_t keySize);

  /// @brief Method GenerateDerivedParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::StringW algorithm, int32_t keySize);

  /// @brief Method GenerateDerivedParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(::StringW algorithm, int32_t keySize, int32_t ivSize);

  /// @brief Method GenerateDerivedParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(int32_t keySize);

  /// @brief Method GenerateDerivedParameters, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* GenerateDerivedParameters(int32_t keySize, int32_t ivSize);

  /// @brief Method GetPassword, addr 0x11611c8, size 0xc, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPassword();

  /// @brief Method GetSalt, addr 0x1161230, size 0xc, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetSalt();

  /// @brief Method Init, addr 0x116106c, size 0x100, virtual true, abstract: false, final false
  inline void Init(::ArrayW<uint8_t, ::Array<uint8_t>*> password, ::ArrayW<uint8_t, ::Array<uint8_t>*> salt, int32_t iterationCount);

  static inline ::Org::BouncyCastle::Crypto::PbeParametersGenerator* New_ctor();

  /// @brief Method Pkcs12PasswordToBytes, addr 0x11613f4, size 0x8, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Pkcs12PasswordToBytes(::ArrayW<char16_t, ::Array<char16_t>*> password);

  /// @brief Method Pkcs12PasswordToBytes, addr 0x11613fc, size 0xbc, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Pkcs12PasswordToBytes(::ArrayW<char16_t, ::Array<char16_t>*> password, bool wrongPkcs12Zero);

  /// @brief Method Pkcs5PasswordToBytes, addr 0x1161244, size 0x60, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Pkcs5PasswordToBytes(::ArrayW<char16_t, ::Array<char16_t>*> password);

  /// @brief Method Pkcs5PasswordToBytes, addr 0x11612a4, size 0x60, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Pkcs5PasswordToBytes(::StringW password);

  /// @brief Method Pkcs5PasswordToUtf8Bytes, addr 0x1161304, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Pkcs5PasswordToUtf8Bytes(::ArrayW<char16_t, ::Array<char16_t>*> password);

  /// @brief Method Pkcs5PasswordToUtf8Bytes, addr 0x116137c, size 0x78, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Pkcs5PasswordToUtf8Bytes(::StringW password);

  constexpr int32_t const& __cordl_internal_get_mIterationCount() const;

  constexpr int32_t& __cordl_internal_get_mIterationCount();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mPassword() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mPassword();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_mSalt() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_mSalt();

  constexpr void __cordl_internal_set_mIterationCount(int32_t value);

  constexpr void __cordl_internal_set_mPassword(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_mSalt(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0x1161064, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IterationCount, addr 0x116123c, size 0x8, virtual true, abstract: false, final false
  inline int32_t get_IterationCount();

  /// @brief Method get_Password, addr 0x116116c, size 0x5c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Password();

  /// @brief Method get_Salt, addr 0x11611d4, size 0x5c, virtual true, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Salt();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PbeParametersGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PbeParametersGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PbeParametersGenerator(PbeParametersGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PbeParametersGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PbeParametersGenerator(PbeParametersGenerator const&) = delete;

  /// @brief Field mPassword, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mPassword;

  /// @brief Field mSalt, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___mSalt;

  /// @brief Field mIterationCount, offset: 0x20, size: 0x4, def value: None
  int32_t ___mIterationCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::PbeParametersGenerator, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::PbeParametersGenerator, ___mPassword) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::PbeParametersGenerator, ___mSalt) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::PbeParametersGenerator, ___mIterationCount) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto
NEED_NO_BOX(::Org::BouncyCastle::Crypto::PbeParametersGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::PbeParametersGenerator*, "Org.BouncyCastle.Crypto", "PbeParametersGenerator");
