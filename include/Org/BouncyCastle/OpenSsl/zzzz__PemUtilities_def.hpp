#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PemUtilities)
namespace Org::BouncyCastle::OpenSsl {
struct __PemUtilities__PemMode;
}
namespace Org::BouncyCastle::OpenSsl {
struct __PemUtilities__PemBaseAlg;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::OpenSsl {
struct __PemUtilities__PemBaseAlg;
}
namespace Org::BouncyCastle::OpenSsl {
struct __PemUtilities__PemMode;
}
namespace Org::BouncyCastle::OpenSsl {
class PemUtilities;
}
// Write type traits
MARK_VAL_T(::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg);
MARK_VAL_T(::Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode);
MARK_REF_PTR_T(::Org::BouncyCastle::OpenSsl::PemUtilities);
// Type: ::PemBaseAlg
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::OpenSsl {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1687))
// CS Name: ::PemUtilities::PemBaseAlg
struct CORDL_TYPE __PemUtilities__PemBaseAlg {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PemUtilities__PemBaseAlg_Unwrapped
  enum struct ____PemUtilities__PemBaseAlg_Unwrapped : int32_t {
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
  constexpr operator ____PemUtilities__PemBaseAlg_Unwrapped() const noexcept {
    return static_cast<____PemUtilities__PemBaseAlg_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PemUtilities__PemBaseAlg(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PemUtilities__PemBaseAlg();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field AES_128 value: static_cast<int32_t>(0x0)
  static ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg const AES_128;

  /// @brief Field AES_192 value: static_cast<int32_t>(0x1)
  static ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg const AES_192;

  /// @brief Field AES_256 value: static_cast<int32_t>(0x2)
  static ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg const AES_256;

  /// @brief Field BF value: static_cast<int32_t>(0x3)
  static ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg const BF;

  /// @brief Field DES value: static_cast<int32_t>(0x4)
  static ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg const DES;

  /// @brief Field DES_EDE value: static_cast<int32_t>(0x5)
  static ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg const DES_EDE;

  /// @brief Field DES_EDE3 value: static_cast<int32_t>(0x6)
  static ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg const DES_EDE3;

  /// @brief Field RC2 value: static_cast<int32_t>(0x7)
  static ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg const RC2;

  /// @brief Field RC2_40 value: static_cast<int32_t>(0x8)
  static ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg const RC2_40;

  /// @brief Field RC2_64 value: static_cast<int32_t>(0x9)
  static ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg const RC2_64;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg, 0x4>, "Size mismatch!");

} // namespace Org::BouncyCastle::OpenSsl
// Type: ::PemMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace Org::BouncyCastle::OpenSsl {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1688))
// CS Name: ::PemUtilities::PemMode
struct CORDL_TYPE __PemUtilities__PemMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____PemUtilities__PemMode_Unwrapped
  enum struct ____PemUtilities__PemMode_Unwrapped : int32_t {
    __E_CBC = static_cast<int32_t>(0x0),
    __E_CFB = static_cast<int32_t>(0x1),
    __E_ECB = static_cast<int32_t>(0x2),
    __E_OFB = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____PemUtilities__PemMode_Unwrapped() const noexcept {
    return static_cast<____PemUtilities__PemMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __PemUtilities__PemMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __PemUtilities__PemMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field CBC value: static_cast<int32_t>(0x0)
  static ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode const CBC;

  /// @brief Field CFB value: static_cast<int32_t>(0x1)
  static ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode const CFB;

  /// @brief Field ECB value: static_cast<int32_t>(0x2)
  static ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode const ECB;

  /// @brief Field OFB value: static_cast<int32_t>(0x3)
  static ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode const OFB;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode, 0x4>, "Size mismatch!");

} // namespace Org::BouncyCastle::OpenSsl
// Type: Org.BouncyCastle.OpenSsl::PemUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Org::BouncyCastle::OpenSsl {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1689))
// CS Name: ::Org.BouncyCastle.OpenSsl::PemUtilities*
class CORDL_TYPE PemUtilities : public ::System::Object {
public:
  // Declarations
  using PemMode = ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode;

  using PemBaseAlg = ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg;

  /// @brief Method ParseDekAlgName addr 0x10d3be8 size 0x358 virtual false final false
  static inline void ParseDekAlgName(::StringW dekAlgName, ByRef<::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg> baseAlg, ByRef<::Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode> mode);

  /// @brief Method Crypt addr 0x10d0f94 size 0x4fc virtual false final false
  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> Crypt(bool encrypt, ::ArrayW<uint8_t, ::Array<uint8_t>*> bytes, ::ArrayW<char16_t, ::Array<char16_t>*> password, ::StringW dekAlgName,
                                                           ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  /// @brief Method GetCipherParameters addr 0x10d3f40 size 0x140 virtual false final false
  static inline ::Org::BouncyCastle::Crypto::ICipherParameters* GetCipherParameters(::ArrayW<char16_t, ::Array<char16_t>*> password, ::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg baseAlg,
                                                                                    ::ArrayW<uint8_t, ::Array<uint8_t>*> salt);

  static inline ::Org::BouncyCastle::OpenSsl::PemUtilities* New_ctor();

  /// @brief Method .ctor addr 0x10d4080 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "PemUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PemUtilities(PemUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PemUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PemUtilities(PemUtilities const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PemUtilities();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::OpenSsl::PemUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::OpenSsl
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::OpenSsl::__PemUtilities__PemBaseAlg, "Org.BouncyCastle.OpenSsl", "PemUtilities/PemBaseAlg");
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::OpenSsl::__PemUtilities__PemMode, "Org.BouncyCastle.OpenSsl", "PemUtilities/PemMode");
NEED_NO_BOX(::Org::BouncyCastle::OpenSsl::PemUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::OpenSsl::PemUtilities*, "Org.BouncyCastle.OpenSsl", "PemUtilities");
