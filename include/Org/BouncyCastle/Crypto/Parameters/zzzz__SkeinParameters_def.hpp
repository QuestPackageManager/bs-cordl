#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/SkeinParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__ICipherParameters_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SkeinParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class SkeinParameters_Builder;
}
namespace System::Collections {
class IDictionary;
}
namespace System {
struct DateTime;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class SkeinParameters;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class SkeinParameters_Builder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters_Builder);
// Dependencies System.Object
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.SkeinParameters/Builder
class CORDL_TYPE SkeinParameters_Builder : public ::System::Object {
public:
  // Declarations
  /// @brief Field parameters, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_parameters, put = __cordl_internal_set_parameters)) ::System::Collections::IDictionary* parameters;

  /// @brief Method Build, addr 0x23c3088, size 0x60, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::SkeinParameters* Build();

  static inline ::Org::BouncyCastle::Crypto::Parameters::SkeinParameters_Builder* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Parameters::SkeinParameters_Builder* New_ctor(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Parameters::SkeinParameters_Builder* New_ctor(::System::Collections::IDictionary* paramsMap);

  /// @brief Method Set, addr 0x23c2bd0, size 0x170, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::SkeinParameters_Builder* Set(int32_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method SetKey, addr 0x23c2d40, size 0xc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::SkeinParameters_Builder* SetKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method SetKeyIdentifier, addr 0x23c3070, size 0xc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::SkeinParameters_Builder* SetKeyIdentifier(::ArrayW<uint8_t, ::Array<uint8_t>*> keyIdentifier);

  /// @brief Method SetNonce, addr 0x23c307c, size 0xc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::SkeinParameters_Builder* SetNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> nonce);

  /// @brief Method SetPersonalisation, addr 0x23c2d58, size 0x30c, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::SkeinParameters_Builder* SetPersonalisation(::System::DateTime date, ::StringW emailAddress, ::StringW distinguisher);

  /// @brief Method SetPersonalisation, addr 0x23c2d4c, size 0xc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::SkeinParameters_Builder* SetPersonalisation(::ArrayW<uint8_t, ::Array<uint8_t>*> personalisation);

  /// @brief Method SetPublicKey, addr 0x23c3064, size 0xc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::SkeinParameters_Builder* SetPublicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  constexpr ::System::Collections::IDictionary* const& __cordl_internal_get_parameters() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_parameters();

  constexpr void __cordl_internal_set_parameters(::System::Collections::IDictionary* value);

  /// @brief Method .ctor, addr 0x23c245c, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x23c2840, size 0x390, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters* parameters);

  /// @brief Method .ctor, addr 0x23c24c0, size 0x380, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* paramsMap);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SkeinParameters_Builder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SkeinParameters_Builder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SkeinParameters_Builder(SkeinParameters_Builder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SkeinParameters_Builder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SkeinParameters_Builder(SkeinParameters_Builder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1082 };

  /// @brief Field parameters, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters_Builder, ___parameters) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::SkeinParameters_Builder, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
// Dependencies Org.BouncyCastle.Crypto.ICipherParameters, System.Object
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Parameters.SkeinParameters
class CORDL_TYPE SkeinParameters : public ::System::Object {
public:
  // Declarations
  using Builder = ::Org::BouncyCastle::Crypto::Parameters::SkeinParameters_Builder;

  /// @brief Field parameters, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_parameters, put = __cordl_internal_set_parameters)) ::System::Collections::IDictionary* parameters;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  /// @brief Method GetKey, addr 0x23c1efc, size 0x110, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetKey();

  /// @brief Method GetKeyIdentifier, addr 0x23c2234, size 0x114, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetKeyIdentifier();

  /// @brief Method GetNonce, addr 0x23c2348, size 0x114, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetNonce();

  /// @brief Method GetParameters, addr 0x23c1ef4, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::IDictionary* GetParameters();

  /// @brief Method GetPersonalisation, addr 0x23c200c, size 0x114, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPersonalisation();

  /// @brief Method GetPublicKey, addr 0x23c2120, size 0x114, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPublicKey();

  static inline ::Org::BouncyCastle::Crypto::Parameters::SkeinParameters* New_ctor();

  static inline ::Org::BouncyCastle::Crypto::Parameters::SkeinParameters* New_ctor(::System::Collections::IDictionary* parameters);

  constexpr ::System::Collections::IDictionary* const& __cordl_internal_get_parameters() const;

  constexpr ::System::Collections::IDictionary*& __cordl_internal_get_parameters();

  constexpr void __cordl_internal_set_parameters(::System::Collections::IDictionary* value);

  /// @brief Method .ctor, addr 0x23c1e60, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x23c1ecc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* parameters);

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SkeinParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SkeinParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SkeinParameters(SkeinParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SkeinParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SkeinParameters(SkeinParameters const&) = delete;

  /// @brief Field PARAM_TYPE_CONFIG offset 0xffffffff size 0x4
  static constexpr int32_t PARAM_TYPE_CONFIG{ static_cast<int32_t>(0x4) };

  /// @brief Field PARAM_TYPE_KEY offset 0xffffffff size 0x4
  static constexpr int32_t PARAM_TYPE_KEY{ static_cast<int32_t>(0x0) };

  /// @brief Field PARAM_TYPE_KEY_IDENTIFIER offset 0xffffffff size 0x4
  static constexpr int32_t PARAM_TYPE_KEY_IDENTIFIER{ static_cast<int32_t>(0x10) };

  /// @brief Field PARAM_TYPE_MESSAGE offset 0xffffffff size 0x4
  static constexpr int32_t PARAM_TYPE_MESSAGE{ static_cast<int32_t>(0x30) };

  /// @brief Field PARAM_TYPE_NONCE offset 0xffffffff size 0x4
  static constexpr int32_t PARAM_TYPE_NONCE{ static_cast<int32_t>(0x14) };

  /// @brief Field PARAM_TYPE_OUTPUT offset 0xffffffff size 0x4
  static constexpr int32_t PARAM_TYPE_OUTPUT{ static_cast<int32_t>(0x3f) };

  /// @brief Field PARAM_TYPE_PERSONALISATION offset 0xffffffff size 0x4
  static constexpr int32_t PARAM_TYPE_PERSONALISATION{ static_cast<int32_t>(0x8) };

  /// @brief Field PARAM_TYPE_PUBLIC_KEY offset 0xffffffff size 0x4
  static constexpr int32_t PARAM_TYPE_PUBLIC_KEY{ static_cast<int32_t>(0xc) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1083 };

  /// @brief Field parameters, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters, ___parameters) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::SkeinParameters, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters*, "Org.BouncyCastle.Crypto.Parameters", "SkeinParameters");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters_Builder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters_Builder*, "Org.BouncyCastle.Crypto.Parameters", "SkeinParameters/Builder");
