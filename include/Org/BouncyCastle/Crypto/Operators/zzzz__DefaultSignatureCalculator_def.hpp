#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultSignatureCalculator)
namespace System {
class Object;
}
namespace System::IO {
class Stream;
}
namespace Org::BouncyCastle::Crypto::IO {
class SignerSink;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class DefaultSignatureCalculator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::DefaultSignatureCalculator);
// Type: Org.BouncyCastle.Crypto.Operators::DefaultSignatureCalculator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(999))
// CS Name: ::Org.BouncyCastle.Crypto.Operators::DefaultSignatureCalculator*
class CORDL_TYPE DefaultSignatureCalculator : public ::System::Object {
public:
  // Declarations
  /// @brief Field mSignerSink, offset 0x10, size 0x8
  __declspec(property(get = __get_mSignerSink, put = __set_mSignerSink))::Org::BouncyCastle::Crypto::IO::SignerSink* mSignerSink;

  __declspec(property(get = get_Stream))::System::IO::Stream* Stream;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IStreamCalculator"
  constexpr operator ::Org::BouncyCastle::Crypto::IStreamCalculator*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::IO::SignerSink*& __get_mSignerSink();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IO::SignerSink*> const& __get_mSignerSink() const;

  constexpr void __set_mSignerSink(::Org::BouncyCastle::Crypto::IO::SignerSink* value);

  static inline ::Org::BouncyCastle::Crypto::Operators::DefaultSignatureCalculator* New_ctor(::Org::BouncyCastle::Crypto::ISigner* signer);

  /// @brief Method .ctor, addr 0xf2ccb0, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::ISigner* signer);

  /// @brief Method get_Stream, addr 0xf2dd04, size 0x8, virtual true, abstract: false, final true
  inline ::System::IO::Stream* get_Stream();

  /// @brief Method GetResult, addr 0xf2dd0c, size 0x84, virtual true, abstract: false, final true
  inline ::System::Object* GetResult();

  // Ctor Parameters [CppParam { name: "", ty: "DefaultSignatureCalculator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultSignatureCalculator(DefaultSignatureCalculator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultSignatureCalculator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultSignatureCalculator(DefaultSignatureCalculator const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultSignatureCalculator();

public:
  /// @brief Field mSignerSink, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IO::SignerSink* ___mSignerSink;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::DefaultSignatureCalculator, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::DefaultSignatureCalculator, ___mSignerSink) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::DefaultSignatureCalculator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::DefaultSignatureCalculator*, "Org.BouncyCastle.Crypto.Operators", "DefaultSignatureCalculator");
