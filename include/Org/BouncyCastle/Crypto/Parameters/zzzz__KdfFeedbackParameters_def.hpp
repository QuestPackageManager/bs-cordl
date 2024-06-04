#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/KdfFeedbackParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KdfFeedbackParameters)
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class KdfFeedbackParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::KdfFeedbackParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::KdfFeedbackParameters
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::KdfFeedbackParameters*
class CORDL_TYPE KdfFeedbackParameters : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_FixedInputData))::ArrayW<uint8_t, ::Array<uint8_t>*> FixedInputData;

  __declspec(property(get = get_Iv))::ArrayW<uint8_t, ::Array<uint8_t>*> Iv;

  __declspec(property(get = get_Ki))::ArrayW<uint8_t, ::Array<uint8_t>*> Ki;

  __declspec(property(get = get_R)) int32_t R;

  /// @brief Field UNUSED_R, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_UNUSED_R, put = setStaticF_UNUSED_R)) int32_t UNUSED_R;

  __declspec(property(get = get_UseCounter)) bool UseCounter;

  /// @brief Field fixedInputData, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_fixedInputData, put = __cordl_internal_set_fixedInputData))::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputData;

  /// @brief Field iv, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_iv, put = __cordl_internal_set_iv))::ArrayW<uint8_t, ::Array<uint8_t>*> iv;

  /// @brief Field ki, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ki, put = __cordl_internal_set_ki))::ArrayW<uint8_t, ::Array<uint8_t>*> ki;

  /// @brief Field r, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_r, put = __cordl_internal_set_r)) int32_t r;

  /// @brief Field useCounter, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_useCounter, put = __cordl_internal_set_useCounter)) bool useCounter;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::IDerivationParameters*() noexcept;

  /// @brief Method CreateWithCounter, addr 0x119c58c, size 0xe0, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::KdfFeedbackParameters* CreateWithCounter(::ArrayW<uint8_t, ::Array<uint8_t>*> ki, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv,
                                                                                                  ::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputData, int32_t r);

  /// @brief Method CreateWithoutCounter, addr 0x119c66c, size 0x98, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Crypto::Parameters::KdfFeedbackParameters* CreateWithoutCounter(::ArrayW<uint8_t, ::Array<uint8_t>*> ki, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv,
                                                                                                     ::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputData);

  static inline ::Org::BouncyCastle::Crypto::Parameters::KdfFeedbackParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> ki, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv,
                                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputData, int32_t r, bool useCounter);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_fixedInputData() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_fixedInputData();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_iv() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_iv();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_ki() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_ki();

  constexpr int32_t const& __cordl_internal_get_r() const;

  constexpr int32_t& __cordl_internal_get_r();

  constexpr bool const& __cordl_internal_get_useCounter() const;

  constexpr bool& __cordl_internal_get_useCounter();

  constexpr void __cordl_internal_set_fixedInputData(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_iv(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_ki(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_r(int32_t value);

  constexpr void __cordl_internal_set_useCounter(bool value);

  /// @brief Method .ctor, addr 0x119c41c, size 0x170, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> ki, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv, ::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputData, int32_t r, bool useCounter);

  static inline int32_t getStaticF_UNUSED_R();

  /// @brief Method get_FixedInputData, addr 0x119c7cc, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_FixedInputData();

  /// @brief Method get_Iv, addr 0x119c760, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Iv();

  /// @brief Method get_Ki, addr 0x119c704, size 0x5c, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Ki();

  /// @brief Method get_R, addr 0x119c7c4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_R();

  /// @brief Method get_UseCounter, addr 0x119c7bc, size 0x8, virtual false, abstract: false, final false
  inline bool get_UseCounter();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationParameters"
  constexpr ::Org::BouncyCastle::Crypto::IDerivationParameters* i___Org__BouncyCastle__Crypto__IDerivationParameters() noexcept;

  static inline void setStaticF_UNUSED_R(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KdfFeedbackParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KdfFeedbackParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KdfFeedbackParameters(KdfFeedbackParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KdfFeedbackParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KdfFeedbackParameters(KdfFeedbackParameters const&) = delete;

  /// @brief Field ki, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___ki;

  /// @brief Field iv, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___iv;

  /// @brief Field useCounter, offset: 0x20, size: 0x1, def value: None
  bool ___useCounter;

  /// @brief Field r, offset: 0x24, size: 0x4, def value: None
  int32_t ___r;

  /// @brief Field fixedInputData, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___fixedInputData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::KdfFeedbackParameters, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::KdfFeedbackParameters, ___ki) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::KdfFeedbackParameters, ___iv) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::KdfFeedbackParameters, ___useCounter) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::KdfFeedbackParameters, ___r) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::KdfFeedbackParameters, ___fixedInputData) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::KdfFeedbackParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::KdfFeedbackParameters*, "Org.BouncyCastle.Crypto.Parameters", "KdfFeedbackParameters");
