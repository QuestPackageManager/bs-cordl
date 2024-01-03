#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ParametersWithID)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class ParametersWithID;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::ParametersWithID);
// Type: Org.BouncyCastle.Crypto.Parameters::ParametersWithID
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1071))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::ParametersWithID*
class CORDL_TYPE ParametersWithID : public ::System::Object {
public:
  // Declarations
  /// @brief Field parameters, offset 0x10, size 0x8
  __declspec(property(get = __get_parameters, put = __set_parameters))::Org::BouncyCastle::Crypto::ICipherParameters* parameters;

  /// @brief Field id, offset 0x18, size 0x8
  __declspec(property(get = __get_id, put = __set_id))::ArrayW<uint8_t, ::Array<uint8_t>*> id;

  __declspec(property(get = get_Parameters))::Org::BouncyCastle::Crypto::ICipherParameters* Parameters;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters*& __get_parameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::ICipherParameters*> const& __get_parameters() const;

  constexpr void __set_parameters(::Org::BouncyCastle::Crypto::ICipherParameters* value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_id();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_id() const;

  constexpr void __set_id(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ParametersWithID* New_ctor(::Org::BouncyCastle::Crypto::ICipherParameters* parameters, ::ArrayW<uint8_t, ::Array<uint8_t>*> id);

  /// @brief Method .ctor, addr 0xf38ec4, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::ICipherParameters* parameters, ::ArrayW<uint8_t, ::Array<uint8_t>*> id);

  static inline ::Org::BouncyCastle::Crypto::Parameters::ParametersWithID* New_ctor(::Org::BouncyCastle::Crypto::ICipherParameters* parameters, ::ArrayW<uint8_t, ::Array<uint8_t>*> id, int32_t idOff,
                                                                                    int32_t idLen);

  /// @brief Method .ctor, addr 0xf38ee0, size 0x98, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::ICipherParameters* parameters, ::ArrayW<uint8_t, ::Array<uint8_t>*> id, int32_t idOff, int32_t idLen);

  /// @brief Method GetID, addr 0xf38f78, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetID();

  /// @brief Method get_Parameters, addr 0xf38f80, size 0x8, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::ICipherParameters* get_Parameters();

  // Ctor Parameters [CppParam { name: "", ty: "ParametersWithID", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ParametersWithID(ParametersWithID&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ParametersWithID", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ParametersWithID(ParametersWithID const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ParametersWithID();

public:
  /// @brief Field parameters, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::ICipherParameters* ___parameters;

  /// @brief Field id, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::ParametersWithID, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ParametersWithID, ___parameters) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::ParametersWithID, ___id) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::ParametersWithID);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::ParametersWithID*, "Org.BouncyCastle.Crypto.Parameters", "ParametersWithID");
