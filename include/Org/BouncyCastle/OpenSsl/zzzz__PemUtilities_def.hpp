#pragma once
// IWYU pragma private; include "Org/BouncyCastle/OpenSsl/PemUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PemUtilities)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
namespace Org::BouncyCastle::OpenSsl {
struct PemUtilities_PemBaseAlg;
}
namespace Org::BouncyCastle::OpenSsl {
struct PemUtilities_PemMode;
}
// Forward declare root types
namespace Org::BouncyCastle::OpenSsl {
struct PemUtilities_PemBaseAlg;
}
namespace Org::BouncyCastle::OpenSsl {
struct PemUtilities_PemMode;
}
namespace Org::BouncyCastle::OpenSsl {
class PemUtilities;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg);
MARK_VAL_T(::Org::BouncyCastle::OpenSsl::PemUtilities_PemMode);
MARK_REF_PTR_T(::Org::BouncyCastle::OpenSsl::PemUtilities);
// Dependencies
namespace Org::BouncyCastle::OpenSsl {
// Is value type: true
// CS Name: Org.BouncyCastle.OpenSsl.PemUtilities/PemBaseAlg
struct CORDL_TYPE PemUtilities_PemBaseAlg {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PemUtilities_PemBaseAlg_Unwrapped
  enum struct __PemUtilities_PemBaseAlg_Unwrapped : int32_t {
    __E_AES_128 = static_cast<int32_t>(0x0),
    __E_AES_192 = static_cast<int32_t>(0x1),
    __E_AES_256 = static_cast<int32_t>(0x2),
    __E_BF = static_cast<int32_t>(0x3),
    __E_DES = static_cast<int32_t>(0x4),
    __E_DES_EDE = static_cast<int32_t>(0x5),
    __E_DES_EDE3 = static_cast<int32_t>(0x6),
    __E_RC2 = static_cast<int32_t>(0x7),
    __E_RC2_40 = static_cast<int32_t>(0x8),
    __E_RC2_64 = static_cast<int32_t>(0x9),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PemUtilities_PemBaseAlg_Unwrapped() const noexcept {
    return static_cast<__PemUtilities_PemBaseAlg_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PemUtilities_PemBaseAlg();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PemUtilities_PemBaseAlg(int32_t value__) noexcept;

  /// @brief Field AES_128 value: I32(0)
  static ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg const AES_128;

  /// @brief Field AES_192 value: I32(1)
  static ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg const AES_192;

  /// @brief Field AES_256 value: I32(2)
  static ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg const AES_256;

  /// @brief Field BF value: I32(3)
  static ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg const BF;

  /// @brief Field DES value: I32(4)
  static ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg const DES;

  /// @brief Field DES_EDE value: I32(5)
  static ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg const DES_EDE;

  /// @brief Field DES_EDE3 value: I32(6)
  static ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg const DES_EDE3;

  /// @brief Field RC2 value: I32(7)
  static ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg const RC2;

  /// @brief Field RC2_40 value: I32(8)
  static ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg const RC2_40;

  /// @brief Field RC2_64 value: I32(9)
  static ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg const RC2_64;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1687 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg, 0x4>, "Size mismatch!");

} // namespace Org::BouncyCastle::OpenSsl
// Dependencies
namespace Org::BouncyCastle::OpenSsl {
// Is value type: true
// CS Name: Org.BouncyCastle.OpenSsl.PemUtilities/PemMode
struct CORDL_TYPE PemUtilities_PemMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __PemUtilities_PemMode_Unwrapped
  enum struct __PemUtilities_PemMode_Unwrapped : int32_t {
    __E_CBC = static_cast<int32_t>(0x0),
    __E_CFB = static_cast<int32_t>(0x1),
    __E_ECB = static_cast<int32_t>(0x2),
    __E_OFB = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __PemUtilities_PemMode_Unwrapped() const noexcept {
    return static_cast<__PemUtilities_PemMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr PemUtilities_PemMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr PemUtilities_PemMode(int32_t value__) noexcept;

  /// @brief Field CBC value: I32(0)
  static ::Org::BouncyCastle::OpenSsl::PemUtilities_PemMode const CBC;

  /// @brief Field CFB value: I32(1)
  static ::Org::BouncyCastle::OpenSsl::PemUtilities_PemMode const CFB;

  /// @brief Field ECB value: I32(2)
  static ::Org::BouncyCastle::OpenSsl::PemUtilities_PemMode const ECB;

  /// @brief Field OFB value: I32(3)
  static ::Org::BouncyCastle::OpenSsl::PemUtilities_PemMode const OFB;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1688 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::OpenSsl::PemUtilities_PemMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::OpenSsl::PemUtilities_PemMode, 0x4>, "Size mismatch!");

} // namespace Org::BouncyCastle::OpenSsl
// Dependencies System.Object
namespace Org::BouncyCastle::OpenSsl {
// Is value type: false
// CS Name: Org.BouncyCastle.OpenSsl.PemUtilities
class CORDL_TYPE PemUtilities : public ::System::Object {
public:
  // Declarations
  using PemBaseAlg = ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg;

  using PemMode = ::Org::BouncyCastle::OpenSsl::PemUtilities_PemMode;

  /// @brief Method Crypt, addr 0x34aacb8, size 0x54c, virtual false, abstract: false, final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Crypt(bool encrypt, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, ::ArrayW<char16_t, ::Array<char16_t>*> password, ::StringW dekAlgName,
                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method GetCipherParameters, addr 0x34add5c, size 0x184, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::ICipherParameters* GetCipherParameters(::ArrayW<char16_t, ::Array<char16_t>*> password, ::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg baseAlg,
                                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> salt);

  static inline ::Org::BouncyCastle::OpenSsl::PemUtilities* New_ctor();

  /// @brief Method ParseDekAlgName, addr 0x34ada08, size 0x354, virtual false, abstract: false, final false
  static inline void ParseDekAlgName(::StringW dekAlgName, ::ByRef<::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg> baseAlg, ::ByRef<::Org::BouncyCastle::OpenSsl::PemUtilities_PemMode> mode);

  /// @brief Method .ctor, addr 0x34adee0, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PemUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PemUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PemUtilities(PemUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PemUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PemUtilities(PemUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1689 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::OpenSsl::PemUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::OpenSsl
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::OpenSsl::PemUtilities_PemBaseAlg, "Org.BouncyCastle.OpenSsl", "PemUtilities/PemBaseAlg");
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::OpenSsl::PemUtilities_PemMode, "Org.BouncyCastle.OpenSsl", "PemUtilities/PemMode");
NEED_NO_BOX(::Org::BouncyCastle::OpenSsl::PemUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::OpenSsl::PemUtilities*, "Org.BouncyCastle.OpenSsl", "PemUtilities");
