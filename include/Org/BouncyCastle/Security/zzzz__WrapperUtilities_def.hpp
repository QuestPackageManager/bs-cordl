#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Security/WrapperUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IWrapper_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(WrapperUtilities)
namespace Org::BouncyCastle::Asn1 {
class DerObjectIdentifier;
}
namespace Org::BouncyCastle::Crypto {
class IBufferedCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::Crypto {
class IWrapper;
}
namespace Org::BouncyCastle::Security {
class WrapperUtilities_BufferedCipherWrapper;
}
namespace Org::BouncyCastle::Security {
struct WrapperUtilities_WrapAlgorithm;
}
namespace System::Collections {
class IDictionary;
}
// Forward declare root types
namespace Org::BouncyCastle::Security {
struct WrapperUtilities_WrapAlgorithm;
}
namespace Org::BouncyCastle::Security {
class WrapperUtilities;
}
namespace Org::BouncyCastle::Security {
class WrapperUtilities_BufferedCipherWrapper;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::Security::WrapperUtilities_WrapAlgorithm);
MARK_REF_PTR_T(::Org::BouncyCastle::Security::WrapperUtilities);
MARK_REF_PTR_T(::Org::BouncyCastle::Security::WrapperUtilities_BufferedCipherWrapper);
// Dependencies
namespace Org::BouncyCastle::Security {
// Is value type: true
// CS Name: Org.BouncyCastle.Security.WrapperUtilities/WrapAlgorithm
struct CORDL_TYPE WrapperUtilities_WrapAlgorithm {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __WrapperUtilities_WrapAlgorithm_Unwrapped
  enum struct __WrapperUtilities_WrapAlgorithm_Unwrapped : int32_t {
    __E_AESWRAP = static_cast<int32_t>(0x0),
    __E_CAMELLIAWRAP = static_cast<int32_t>(0x1),
    __E_DESEDEWRAP = static_cast<int32_t>(0x2),
    __E_RC2WRAP = static_cast<int32_t>(0x3),
    __E_SEEDWRAP = static_cast<int32_t>(0x4),
    __E_DESEDERFC3211WRAP = static_cast<int32_t>(0x5),
    __E_AESRFC3211WRAP = static_cast<int32_t>(0x6),
    __E_CAMELLIARFC3211WRAP = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __WrapperUtilities_WrapAlgorithm_Unwrapped() const noexcept {
    return static_cast<__WrapperUtilities_WrapAlgorithm_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr WrapperUtilities_WrapAlgorithm();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr WrapperUtilities_WrapAlgorithm(int32_t value__) noexcept;

  /// @brief Field AESRFC3211WRAP value: I32(6)
  static ::Org::BouncyCastle::Security::WrapperUtilities_WrapAlgorithm const AESRFC3211WRAP;

  /// @brief Field AESWRAP value: I32(0)
  static ::Org::BouncyCastle::Security::WrapperUtilities_WrapAlgorithm const AESWRAP;

  /// @brief Field CAMELLIARFC3211WRAP value: I32(7)
  static ::Org::BouncyCastle::Security::WrapperUtilities_WrapAlgorithm const CAMELLIARFC3211WRAP;

  /// @brief Field CAMELLIAWRAP value: I32(1)
  static ::Org::BouncyCastle::Security::WrapperUtilities_WrapAlgorithm const CAMELLIAWRAP;

  /// @brief Field DESEDERFC3211WRAP value: I32(5)
  static ::Org::BouncyCastle::Security::WrapperUtilities_WrapAlgorithm const DESEDERFC3211WRAP;

  /// @brief Field DESEDEWRAP value: I32(2)
  static ::Org::BouncyCastle::Security::WrapperUtilities_WrapAlgorithm const DESEDEWRAP;

  /// @brief Field RC2WRAP value: I32(3)
  static ::Org::BouncyCastle::Security::WrapperUtilities_WrapAlgorithm const RC2WRAP;

  /// @brief Field SEEDWRAP value: I32(4)
  static ::Org::BouncyCastle::Security::WrapperUtilities_WrapAlgorithm const SEEDWRAP;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1760 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Security::WrapperUtilities_WrapAlgorithm, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::WrapperUtilities_WrapAlgorithm, 0x4>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
// Dependencies Org.BouncyCastle.Crypto.IWrapper, System.Object
namespace Org::BouncyCastle::Security {
// Is value type: false
// CS Name: Org.BouncyCastle.Security.WrapperUtilities/BufferedCipherWrapper
class CORDL_TYPE WrapperUtilities_BufferedCipherWrapper : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field cipher, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_cipher, put = __cordl_internal_set_cipher)) ::Org::BouncyCastle::Crypto::IBufferedCipher* cipher;

  /// @brief Field forWrapping, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_forWrapping, put = __cordl_internal_set_forWrapping)) bool forWrapping;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IWrapper"
  constexpr operator ::Org::BouncyCastle::Crypto::IWrapper*() noexcept;

  /// @brief Method Init, addr 0x25c9c38, size 0xc4, virtual true, abstract: false, final true
  inline void Init(bool forWrapping, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Security::WrapperUtilities_BufferedCipherWrapper* New_ctor(::Org::BouncyCastle::Crypto::IBufferedCipher* cipher);

  /// @brief Method Unwrap, addr 0x25c9e10, size 0x114, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Unwrap(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  /// @brief Method Wrap, addr 0x25c9cfc, size 0x114, virtual true, abstract: false, final true
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Wrap(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t length);

  constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher* const& __cordl_internal_get_cipher() const;

  constexpr ::Org::BouncyCastle::Crypto::IBufferedCipher*& __cordl_internal_get_cipher();

  constexpr bool const& __cordl_internal_get_forWrapping() const;

  constexpr bool& __cordl_internal_get_forWrapping();

  constexpr void __cordl_internal_set_cipher(::Org::BouncyCastle::Crypto::IBufferedCipher* value);

  constexpr void __cordl_internal_set_forWrapping(bool value);

  /// @brief Method .ctor, addr 0x25c9a68, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::IBufferedCipher* cipher);

  /// @brief Method get_AlgorithmName, addr 0x25c9b98, size 0xa0, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IWrapper"
  constexpr ::Org::BouncyCastle::Crypto::IWrapper* i___Org__BouncyCastle__Crypto__IWrapper() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WrapperUtilities_BufferedCipherWrapper();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WrapperUtilities_BufferedCipherWrapper", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WrapperUtilities_BufferedCipherWrapper(WrapperUtilities_BufferedCipherWrapper&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WrapperUtilities_BufferedCipherWrapper", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WrapperUtilities_BufferedCipherWrapper(WrapperUtilities_BufferedCipherWrapper const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1761 };

  /// @brief Field cipher, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IBufferedCipher* ___cipher;

  /// @brief Field forWrapping, offset: 0x18, size: 0x1, def value: None
  bool ___forWrapping;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Security::WrapperUtilities_BufferedCipherWrapper, ___cipher) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Security::WrapperUtilities_BufferedCipherWrapper, ___forWrapping) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::WrapperUtilities_BufferedCipherWrapper, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
// Dependencies System.Object
namespace Org::BouncyCastle::Security {
// Is value type: false
// CS Name: Org.BouncyCastle.Security.WrapperUtilities
class CORDL_TYPE WrapperUtilities : public ::System::Object {
public:
  // Declarations
  using BufferedCipherWrapper = ::Org::BouncyCastle::Security::WrapperUtilities_BufferedCipherWrapper;

  using WrapAlgorithm = ::Org::BouncyCastle::Security::WrapperUtilities_WrapAlgorithm;

  /// @brief Field algorithms, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_algorithms, put = setStaticF_algorithms)) ::System::Collections::IDictionary* algorithms;

  /// @brief Method GetAlgorithmName, addr 0x25c9a90, size 0x108, virtual false, abstract: false, final false
  static inline ::StringW GetAlgorithmName(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  /// @brief Method GetWrapper, addr 0x25c9530, size 0x538, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IWrapper* GetWrapper(::StringW algorithm);

  /// @brief Method GetWrapper, addr 0x25c94d0, size 0x60, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::IWrapper* GetWrapper(::Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);

  static inline ::Org::BouncyCastle::Security::WrapperUtilities* New_ctor();

  /// @brief Method .ctor, addr 0x25c8d10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::IDictionary* getStaticF_algorithms();

  static inline void setStaticF_algorithms(::System::Collections::IDictionary* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr WrapperUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "WrapperUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  WrapperUtilities(WrapperUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "WrapperUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  WrapperUtilities(WrapperUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1762 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Security::WrapperUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Security
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::WrapperUtilities_WrapAlgorithm, "Org.BouncyCastle.Security", "WrapperUtilities/WrapAlgorithm");
NEED_NO_BOX(::Org::BouncyCastle::Security::WrapperUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::WrapperUtilities*, "Org.BouncyCastle.Security", "WrapperUtilities");
NEED_NO_BOX(::Org::BouncyCastle::Security::WrapperUtilities_BufferedCipherWrapper);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Security::WrapperUtilities_BufferedCipherWrapper*, "Org.BouncyCastle.Security", "WrapperUtilities/BufferedCipherWrapper");
