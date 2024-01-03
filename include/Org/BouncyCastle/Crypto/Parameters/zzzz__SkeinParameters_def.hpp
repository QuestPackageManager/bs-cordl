#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SkeinParameters)
namespace Org::BouncyCastle::Crypto::Parameters {
class __SkeinParameters__Builder;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
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
class __SkeinParameters__Builder;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters);
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::__SkeinParameters__Builder);
// Type: ::Builder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1082))
// CS Name: ::SkeinParameters::Builder*
class CORDL_TYPE __SkeinParameters__Builder : public ::System::Object {
public:
  // Declarations
  /// @brief Field parameters, offset 0x10, size 0x8
  __declspec(property(get = __get_parameters, put = __set_parameters))::System::Collections::IDictionary* parameters;

  constexpr ::System::Collections::IDictionary*& __get_parameters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __get_parameters() const;

  constexpr void __set_parameters(::System::Collections::IDictionary* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::__SkeinParameters__Builder* New_ctor();

  /// @brief Method .ctor, addr 0xf3a818, size 0x64, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Parameters::__SkeinParameters__Builder* New_ctor(::System::Collections::IDictionary* paramsMap);

  /// @brief Method .ctor, addr 0xf3a87c, size 0x380, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* paramsMap);

  static inline ::Org::BouncyCastle::Crypto::Parameters::__SkeinParameters__Builder* New_ctor(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters* parameters);

  /// @brief Method .ctor, addr 0xf3abfc, size 0x390, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters* parameters);

  /// @brief Method Set, addr 0xf3af8c, size 0x178, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::__SkeinParameters__Builder* Set(int32_t type, ::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method SetKey, addr 0xf3b104, size 0xc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::__SkeinParameters__Builder* SetKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

  /// @brief Method SetPersonalisation, addr 0xf3b110, size 0xc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::__SkeinParameters__Builder* SetPersonalisation(::ArrayW<uint8_t, ::Array<uint8_t>*> personalisation);

  /// @brief Method SetPersonalisation, addr 0xf3b11c, size 0x2ec, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::__SkeinParameters__Builder* SetPersonalisation(::System::DateTime date, ::StringW emailAddress, ::StringW distinguisher);

  /// @brief Method SetPublicKey, addr 0xf3b408, size 0xc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::__SkeinParameters__Builder* SetPublicKey(::ArrayW<uint8_t, ::Array<uint8_t>*> publicKey);

  /// @brief Method SetKeyIdentifier, addr 0xf3b414, size 0xc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::__SkeinParameters__Builder* SetKeyIdentifier(::ArrayW<uint8_t, ::Array<uint8_t>*> keyIdentifier);

  /// @brief Method SetNonce, addr 0xf3b420, size 0xc, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::__SkeinParameters__Builder* SetNonce(::ArrayW<uint8_t, ::Array<uint8_t>*> nonce);

  /// @brief Method Build, addr 0xf3b42c, size 0x68, virtual false, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::Parameters::SkeinParameters* Build();

  // Ctor Parameters [CppParam { name: "", ty: "__SkeinParameters__Builder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SkeinParameters__Builder(__SkeinParameters__Builder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SkeinParameters__Builder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SkeinParameters__Builder(__SkeinParameters__Builder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SkeinParameters__Builder();

public:
  /// @brief Field parameters, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::__SkeinParameters__Builder, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::__SkeinParameters__Builder, ___parameters) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
// Type: Org.BouncyCastle.Crypto.Parameters::SkeinParameters
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1083))
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::SkeinParameters*
class CORDL_TYPE SkeinParameters : public ::System::Object {
public:
  // Declarations
  using Builder = ::Org::BouncyCastle::Crypto::Parameters::__SkeinParameters__Builder;

  /// @brief Field parameters, offset 0x10, size 0x8
  __declspec(property(get = __get_parameters, put = __set_parameters))::System::Collections::IDictionary* parameters;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr operator ::Org::BouncyCastle::Crypto::ICipherParameters*() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Crypto::ICipherParameters"
  constexpr ::Org::BouncyCastle::Crypto::ICipherParameters* i___Org__BouncyCastle__Crypto__ICipherParameters() noexcept;

  constexpr ::System::Collections::IDictionary*& __get_parameters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::IDictionary*> const& __get_parameters() const;

  constexpr void __set_parameters(::System::Collections::IDictionary* value);

  static inline ::Org::BouncyCastle::Crypto::Parameters::SkeinParameters* New_ctor();

  /// @brief Method .ctor, addr 0xf3a21c, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Org::BouncyCastle::Crypto::Parameters::SkeinParameters* New_ctor(::System::Collections::IDictionary* parameters);

  /// @brief Method .ctor, addr 0xf3a288, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::System::Collections::IDictionary* parameters);

  /// @brief Method GetParameters, addr 0xf3a2b0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::IDictionary* GetParameters();

  /// @brief Method GetKey, addr 0xf3a2b8, size 0x110, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetKey();

  /// @brief Method GetPersonalisation, addr 0xf3a3c8, size 0x114, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPersonalisation();

  /// @brief Method GetPublicKey, addr 0xf3a4dc, size 0x114, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetPublicKey();

  /// @brief Method GetKeyIdentifier, addr 0xf3a5f0, size 0x114, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetKeyIdentifier();

  /// @brief Method GetNonce, addr 0xf3a704, size 0x114, virtual false, abstract: false, final false
  inline ::ArrayW<uint8_t, ::Array<uint8_t>*> GetNonce();

  // Ctor Parameters [CppParam { name: "", ty: "SkeinParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SkeinParameters(SkeinParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SkeinParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SkeinParameters(SkeinParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SkeinParameters();

public:
  /// @brief Field parameters, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::IDictionary* ___parameters;

  /// @brief Field PARAM_TYPE_KEY offset 0xffffffff size 0x4
  static constexpr int32_t PARAM_TYPE_KEY{ static_cast<int32_t>(0x0) };

  /// @brief Field PARAM_TYPE_CONFIG offset 0xffffffff size 0x4
  static constexpr int32_t PARAM_TYPE_CONFIG{ static_cast<int32_t>(0x4) };

  /// @brief Field PARAM_TYPE_PERSONALISATION offset 0xffffffff size 0x4
  static constexpr int32_t PARAM_TYPE_PERSONALISATION{ static_cast<int32_t>(0x8) };

  /// @brief Field PARAM_TYPE_PUBLIC_KEY offset 0xffffffff size 0x4
  static constexpr int32_t PARAM_TYPE_PUBLIC_KEY{ static_cast<int32_t>(0xc) };

  /// @brief Field PARAM_TYPE_KEY_IDENTIFIER offset 0xffffffff size 0x4
  static constexpr int32_t PARAM_TYPE_KEY_IDENTIFIER{ static_cast<int32_t>(0x10) };

  /// @brief Field PARAM_TYPE_NONCE offset 0xffffffff size 0x4
  static constexpr int32_t PARAM_TYPE_NONCE{ static_cast<int32_t>(0x14) };

  /// @brief Field PARAM_TYPE_MESSAGE offset 0xffffffff size 0x4
  static constexpr int32_t PARAM_TYPE_MESSAGE{ static_cast<int32_t>(0x30) };

  /// @brief Field PARAM_TYPE_OUTPUT offset 0xffffffff size 0x4
  static constexpr int32_t PARAM_TYPE_OUTPUT{ static_cast<int32_t>(0x3f) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::SkeinParameters, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters, ___parameters) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters*, "Org.BouncyCastle.Crypto.Parameters", "SkeinParameters");
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::__SkeinParameters__Builder);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::__SkeinParameters__Builder*, "Org.BouncyCastle.Crypto.Parameters", "SkeinParameters/Builder");
