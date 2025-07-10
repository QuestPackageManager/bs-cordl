#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/KdfCounterParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IDerivationParameters_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KdfCounterParameters)
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class KdfCounterParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters);
// Dependencies Org.BouncyCastle.Crypto.IDerivationParameters, System.Object
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.KdfCounterParameters
class CORDL_TYPE KdfCounterParameters : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_FixedInputData)) ::ArrayW<uint8_t, ::Array<uint8_t>*> FixedInputData;

  __declspec(property(get = get_FixedInputDataCounterPrefix)) ::ArrayW<uint8_t, ::Array<uint8_t>*> FixedInputDataCounterPrefix;

  __declspec(property(get = get_FixedInputDataCounterSuffix)) ::ArrayW<uint8_t, ::Array<uint8_t>*> FixedInputDataCounterSuffix;

  __declspec(property(get = get_Ki)) ::ArrayW<uint8_t, ::Array<uint8_t>*> Ki;

  __declspec(property(get = get_R)) int32_t R;

  /// @brief Field fixedInputDataCounterPrefix, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_fixedInputDataCounterPrefix, put = __cordl_internal_set_fixedInputDataCounterPrefix)) ::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputDataCounterPrefix;

  /// @brief Field fixedInputDataCounterSuffix, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_fixedInputDataCounterSuffix, put = __cordl_internal_set_fixedInputDataCounterSuffix)) ::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputDataCounterSuffix;

  /// @brief Field ki, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ki, put = __cordl_internal_set_ki)) ::ArrayW<uint8_t, ::Array<uint8_t>*> ki;

  /// @brief Field r, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_r, put = __cordl_internal_set_r)) int32_t r;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::IDerivationParameters*() noexcept;

  static inline ::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> ki, ::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputDataCounterPrefix,
                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputDataCounterSuffix, int32_t r);

  static inline ::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> ki, ::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputDataCounterSuffix,
                                                                                        int32_t r);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_fixedInputDataCounterPrefix() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_fixedInputDataCounterPrefix();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_fixedInputDataCounterSuffix() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_fixedInputDataCounterSuffix();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_ki() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_ki();

  constexpr int32_t const& __cordl_internal_get_r() const;

  constexpr int32_t& __cordl_internal_get_r();

  constexpr void __cordl_internal_set_fixedInputDataCounterPrefix(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_fixedInputDataCounterSuffix(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_ki(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_r(int32_t value);

  /// @brief Method .ctor, addr 0x23bfa1c, size 0x190, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> ki, ::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputDataCounterPrefix, ::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputDataCounterSuffix,
                    int32_t r);

  /// @brief Method .ctor, addr 0x23bfa0c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> ki, ::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputDataCounterSuffix, int32_t r);

  /// @brief Method get_FixedInputData, addr 0x23bfbb4, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_FixedInputData();

  /// @brief Method get_FixedInputDataCounterPrefix, addr 0x23bfc10, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_FixedInputDataCounterPrefix();

  /// @brief Method get_FixedInputDataCounterSuffix, addr 0x23bfc6c, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_FixedInputDataCounterSuffix();

  /// @brief Method get_Ki, addr 0x23bfbac, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Ki();

  /// @brief Method get_R, addr 0x23bfcc8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_R();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationParameters"
  constexpr ::Org::BouncyCastle::Crypto::IDerivationParameters* i___Org__BouncyCastle__Crypto__IDerivationParameters() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KdfCounterParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KdfCounterParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KdfCounterParameters(KdfCounterParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KdfCounterParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KdfCounterParameters(KdfCounterParameters const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1061 };

  /// @brief Field ki, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___ki;

  /// @brief Field fixedInputDataCounterPrefix, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___fixedInputDataCounterPrefix;

  /// @brief Field fixedInputDataCounterSuffix, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___fixedInputDataCounterSuffix;

  /// @brief Field r, offset: 0x28, size: 0x4, def value: None
  int32_t ___r;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters, ___ki) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters, ___fixedInputDataCounterPrefix) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters, ___fixedInputDataCounterSuffix) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters, ___r) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters*, "Org.BouncyCastle.Crypto.Parameters", "KdfCounterParameters");
