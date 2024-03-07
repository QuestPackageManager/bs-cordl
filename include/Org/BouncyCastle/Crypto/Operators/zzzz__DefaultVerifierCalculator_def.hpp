#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultVerifierCalculator)
namespace Org::BouncyCastle::Crypto::IO {
class SignerSink;
}
namespace Org::BouncyCastle::Crypto {
class ISigner;
}
namespace Org::BouncyCastle::Crypto {
class IStreamCalculator;
}
namespace System::IO {
class Stream;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Operators {
class DefaultVerifierCalculator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator);
// Type: Org.BouncyCastle.Crypto.Operators::DefaultVerifierCalculator
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Operators {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Operators::DefaultVerifierCalculator*
class CORDL_TYPE DefaultVerifierCalculator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Stream))::System::IO::Stream* Stream;

  /// @brief Field mSignerSink, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_mSignerSink, put = __cordl_internal_set_mSignerSink))::Org::BouncyCastle::Crypto::IO::SignerSink* mSignerSink;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IStreamCalculator"
  constexpr operator ::Org::BouncyCastle::Crypto::IStreamCalculator*() noexcept;

  /// @brief Method GetResult, addr 0xfbf408, size 0x84, virtual true, abstract: false, final true
  inline ::System::Object* GetResult();

  static inline ::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator* New_ctor(::Org::BouncyCastle::Crypto::ISigner* signer);

  constexpr ::Org::BouncyCastle::Crypto::IO::SignerSink*& __cordl_internal_get_mSignerSink();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IO::SignerSink*> const& __cordl_internal_get_mSignerSink() const;

  constexpr void __cordl_internal_set_mSignerSink(::Org::BouncyCastle::Crypto::IO::SignerSink* value);

  /// @brief Method .ctor, addr 0xfbe548, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::ISigner* signer);

  /// @brief Method get_Stream, addr 0xfbf400, size 0x8, virtual true, abstract: false, final true
  inline ::System::IO::Stream* get_Stream();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IStreamCalculator"
  constexpr ::Org::BouncyCastle::Crypto::IStreamCalculator* i___Org__BouncyCastle__Crypto__IStreamCalculator() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultVerifierCalculator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultVerifierCalculator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultVerifierCalculator(DefaultVerifierCalculator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultVerifierCalculator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultVerifierCalculator(DefaultVerifierCalculator const&) = delete;

  /// @brief Field mSignerSink, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IO::SignerSink* ___mSignerSink;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator, ___mSignerSink) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Operators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Operators::DefaultVerifierCalculator*, "Org.BouncyCastle.Crypto.Operators", "DefaultVerifierCalculator");
