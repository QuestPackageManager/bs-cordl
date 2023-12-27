#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KdfCounterParameters)
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class KdfCounterParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::KdfCounterParameters
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1061))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::KdfCounterParameters*
class CORDL_TYPE KdfCounterParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field ki, offset 0x10, size 0x8
  __declspec(property(get = __get_ki, put = __set_ki))::ArrayW<uint8_t, ::Array<uint8_t>*> ki;

  /// @brief Field fixedInputDataCounterPrefix, offset 0x18, size 0x8
  __declspec(property(get = __get_fixedInputDataCounterPrefix, put = __set_fixedInputDataCounterPrefix))::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputDataCounterPrefix;

  /// @brief Field fixedInputDataCounterSuffix, offset 0x20, size 0x8
  __declspec(property(get = __get_fixedInputDataCounterSuffix, put = __set_fixedInputDataCounterSuffix))::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputDataCounterSuffix;

  /// @brief Field r, offset 0x28, size 0x4
  __declspec(property(get = __get_r, put = __set_r)) int32_t r;

  __declspec(property(get = get_Ki))::ArrayW<uint8_t, ::Array<uint8_t>*> Ki;

  __declspec(property(get = get_FixedInputData))::ArrayW<uint8_t, ::Array<uint8_t>*> FixedInputData;

  __declspec(property(get = get_FixedInputDataCounterPrefix))::ArrayW<uint8_t, ::Array<uint8_t>*> FixedInputDataCounterPrefix;

  __declspec(property(get = get_FixedInputDataCounterSuffix))::ArrayW<uint8_t, ::Array<uint8_t>*> FixedInputDataCounterSuffix;

  __declspec(property(get = get_R)) int32_t R;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::IDerivationParameters*() noexcept;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_ki();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_ki() const;

  constexpr void __set_ki(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_fixedInputDataCounterPrefix();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_fixedInputDataCounterPrefix() const;

  constexpr void __set_fixedInputDataCounterPrefix(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_fixedInputDataCounterSuffix();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_fixedInputDataCounterSuffix() const;

  constexpr void __set_fixedInputDataCounterSuffix(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr int32_t& __get_r();

  constexpr int32_t const& __get_r() const;

  constexpr void __set_r(int32_t value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> ki, ::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputDataCounterSuffix,
                                                                                        int32_t r);

  /// @brief Method .ctor addr 0xf36d58 size 0x10 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> ki, ::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputDataCounterSuffix, int32_t r);

  static inline ::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters* New_ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> ki, ::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputDataCounterPrefix,
                                                                                        ::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputDataCounterSuffix, int32_t r);

  /// @brief Method .ctor addr 0xf36d68 size 0x190 virtual false final false
  inline void _ctor(::ArrayW<uint8_t, ::Array<uint8_t>*> ki, ::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputDataCounterPrefix, ::ArrayW<uint8_t, ::Array<uint8_t>*> fixedInputDataCounterSuffix,
                    int32_t r);

  /// @brief Method get_Ki addr 0xf36ef8 size 0x8 virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_Ki();

  /// @brief Method get_FixedInputData addr 0xf36f00 size 0x5c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_FixedInputData();

  /// @brief Method get_FixedInputDataCounterPrefix addr 0xf36f5c size 0x5c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_FixedInputDataCounterPrefix();

  /// @brief Method get_FixedInputDataCounterSuffix addr 0xf36fb8 size 0x5c virtual false final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> get_FixedInputDataCounterSuffix();

  /// @brief Method get_R addr 0xf37014 size 0x8 virtual false final false
  inline int32_t get_R();

  // Ctor Parameters [CppParam { name: "", ty: "KdfCounterParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KdfCounterParameters(KdfCounterParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KdfCounterParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KdfCounterParameters(KdfCounterParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KdfCounterParameters();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters, 0x30>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::KdfCounterParameters*, "Org.BouncyCastle.Crypto.Parameters", "KdfCounterParameters");
