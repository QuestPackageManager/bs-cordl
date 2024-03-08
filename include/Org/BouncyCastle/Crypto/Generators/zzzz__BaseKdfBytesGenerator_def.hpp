#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(BaseKdfBytesGenerator)
namespace Org::BouncyCastle::Crypto {
class IDerivationFunction;
}
namespace Org::BouncyCastle::Crypto {
class IDerivationParameters;
}
namespace Org::BouncyCastle::Crypto {
class IDigest;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Generators {
class BaseKdfBytesGenerator;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Generators::BaseKdfBytesGenerator);
// Type: Org.BouncyCastle.Crypto.Generators::BaseKdfBytesGenerator
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Generators {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Generators::BaseKdfBytesGenerator*
class CORDL_TYPE BaseKdfBytesGenerator : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Digest))::Org::BouncyCastle::Crypto::IDigest* Digest;

  /// @brief Field counterStart, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_counterStart, put = __cordl_internal_set_counterStart)) int32_t counterStart;

  /// @brief Field digest, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_digest, put = __cordl_internal_set_digest))::Org::BouncyCastle::Crypto::IDigest* digest;

  /// @brief Field iv, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_iv, put = __cordl_internal_set_iv))::ArrayW<uint8_t, ::Array<uint8_t>*> iv;

  /// @brief Field shared, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_shared, put = __cordl_internal_set_shared))::ArrayW<uint8_t, ::Array<uint8_t>*> shared;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDerivationFunction"
  constexpr operator ::Org::BouncyCastle::Crypto::IDerivationFunction*() noexcept;

  /// @brief Method GenerateBytes, addr 0xf86acc, size 0x534, virtual true, abstract: false, final false
  inline int32_t GenerateBytes(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff, int32_t length);

  /// @brief Method Init, addr 0xf869b4, size 0x110, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::IDerivationParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Generators::BaseKdfBytesGenerator* New_ctor(int32_t counterStart, ::Org::BouncyCastle::Crypto::IDigest* digest);

  constexpr int32_t const& __cordl_internal_get_counterStart() const;

  constexpr int32_t& __cordl_internal_get_counterStart();

  constexpr ::Org::BouncyCastle::Crypto::IDigest*& __cordl_internal_get_digest();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::IDigest*> const& __cordl_internal_get_digest() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_iv() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_iv();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_shared() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_shared();

  constexpr void __cordl_internal_set_counterStart(int32_t value);

  constexpr void __cordl_internal_set_digest(::Org::BouncyCastle::Crypto::IDigest* value);

  constexpr void __cordl_internal_set_iv(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_shared(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  /// @brief Method .ctor, addr 0xf86984, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(int32_t counterStart, ::Org::BouncyCastle::Crypto::IDigest* digest);

  /// @brief Method get_Digest, addr 0xf86ac4, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Crypto::IDigest* get_Digest();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDerivationFunction"
  constexpr ::Org::BouncyCastle::Crypto::IDerivationFunction* i___Org__BouncyCastle__Crypto__IDerivationFunction() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseKdfBytesGenerator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseKdfBytesGenerator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseKdfBytesGenerator(BaseKdfBytesGenerator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseKdfBytesGenerator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseKdfBytesGenerator(BaseKdfBytesGenerator const&) = delete;

  /// @brief Field counterStart, offset: 0x10, size: 0x4, def value: None
  int32_t ___counterStart;

  /// @brief Field digest, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::IDigest* ___digest;

  /// @brief Field shared, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___shared;

  /// @brief Field iv, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___iv;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Generators::BaseKdfBytesGenerator, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::BaseKdfBytesGenerator, ___counterStart) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::BaseKdfBytesGenerator, ___digest) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::BaseKdfBytesGenerator, ___shared) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Generators::BaseKdfBytesGenerator, ___iv) == 0x28, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Generators
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Generators::BaseKdfBytesGenerator);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Generators::BaseKdfBytesGenerator*, "Org.BouncyCastle.Crypto.Generators", "BaseKdfBytesGenerator");
