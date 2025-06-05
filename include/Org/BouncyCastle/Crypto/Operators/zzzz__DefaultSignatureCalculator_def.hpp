#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Operators/DefaultSignatureCalculator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IStreamCalculator_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultSignatureCalculator)
namespace Org::BouncyCastle::Crypto::IO {
class SignerSink;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class DefaultSignatureCalculator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::DefaultSignatureCalculator);
// Dependencies Org.BouncyCastle.Crypto.IStreamCalculator, System.Object
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Operators.DefaultSignatureCalculator
class CORDL_TYPE DefaultSignatureCalculator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Stream)) ::System::IO::Stream* Stream;

  /// @brief Field mSignerSink, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mSignerSink, put = __cordl_internal_set_mSignerSink)) ::Org::BouncyCastle::Crypto::IO::SignerSink* mSignerSink;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IStreamCalculator"
  constexpr operator ::Org::BouncyCastle::Crypto::IStreamCalculator*() noexcept;

  /// @brief Method GetResult, addr 0x23b6b68, size 0x80, virtual true, abstract: false, final true
  inline ::System::Object* GetResult();

  static inline ::Org::BouncyCastle::Crypto::Operators::DefaultSignatureCalculator* New_ctor(::Org::BouncyCastle::Crypto::ISigner* signer);

  constexpr ::Org::BouncyCastle::Crypto::IO::SignerSink* const& __cordl_internal_get_mSignerSink() const;

  constexpr ::Org::BouncyCastle::Crypto::IO::SignerSink*& __cordl_internal_get_mSignerSink();

  constexpr void __cordl_internal_set_mSignerSink(::Org::BouncyCastle::Crypto::IO::SignerSink* value);

  /// @brief Method .ctor, addr 0x23b5b48, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::ISigner* signer);

  /// @brief Method get_Stream, addr 0x23b6b60, size 0x8, virtual true, abstract: false, final true
  inline ::System::IO::Stream* get_Stream();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IStreamCalculator"
  constexpr ::Org::BouncyCastle::Crypto::IStreamCalculator* i___Org__BouncyCastle__Crypto__IStreamCalculator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultSignatureCalculator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultSignatureCalculator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultSignatureCalculator(DefaultSignatureCalculator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultSignatureCalculator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultSignatureCalculator(DefaultSignatureCalculator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 999 };

  /// @brief Field mSignerSink, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IO::SignerSink* ___mSignerSink;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::DefaultSignatureCalculator, ___mSignerSink) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::DefaultSignatureCalculator, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::DefaultSignatureCalculator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::DefaultSignatureCalculator*, "Org.BouncyCastle.Crypto.Operators", "DefaultSignatureCalculator");
