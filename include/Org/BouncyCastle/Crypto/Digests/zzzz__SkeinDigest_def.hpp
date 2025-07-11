#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Digests/SkeinDigest.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IDigest_def.hpp"
#include "Org/BouncyCastle/Utilities/zzzz__IMemoable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SkeinDigest)
namespace Org::BouncyCastle::Crypto::Digests {
class SkeinEngine;
}
namespace Org::BouncyCastle::Crypto::Parameters {
class SkeinParameters;
}
namespace Org::BouncyCastle::Utilities {
class IMemoable;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Digests {
class SkeinDigest;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Digests::SkeinDigest);
// Dependencies Org.BouncyCastle.Crypto.IDigest, Org.BouncyCastle.Utilities.IMemoable, System.Object
namespace Org::BouncyCastle::Crypto::Digests {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Digests.SkeinDigest
class CORDL_TYPE SkeinDigest : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field engine, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_engine, put = __cordl_internal_set_engine)) ::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr operator ::Org::BouncyCastle::Crypto::IDigest*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr operator ::Org::BouncyCastle::Utilities::IMemoable*() noexcept;

  /// @brief Method BlockUpdate, addr 0x2333db8, size 0x18, virtual true, abstract: false, final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, int32_t len);

  /// @brief Method Copy, addr 0x23339d8, size 0x58, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Utilities::IMemoable* Copy();

  /// @brief Method DoFinal, addr 0x2333e1c, size 0x18, virtual true, abstract: false, final true
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method GetByteLength, addr 0x2333c34, size 0x2c, virtual true, abstract: false, final true
  inline int32_t GetByteLength();

  /// @brief Method GetDigestSize, addr 0x2333c18, size 0x1c, virtual true, abstract: false, final true
  inline int32_t GetDigestSize();

  /// @brief Method Init, addr 0x2333748, size 0x18, virtual false, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::Parameters::SkeinParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Digests::SkeinDigest* New_ctor(::Org::BouncyCastle::Crypto::Digests::SkeinDigest* digest);

  static inline ::Org::BouncyCastle::Crypto::Digests::SkeinDigest* New_ctor(int32_t stateSizeBits, int32_t digestSizeBits);

  /// @brief Method Reset, addr 0x2333d14, size 0x18, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method Reset, addr 0x233382c, size 0x8c, virtual true, abstract: false, final true
  inline void Reset(::Org::BouncyCastle::Utilities::IMemoable* other);

  /// @brief Method Update, addr 0x2333d6c, size 0x18, virtual true, abstract: false, final true
  inline void Update(uint8_t inByte);

  constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine* const& __cordl_internal_get_engine() const;

  constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine*& __cordl_internal_get_engine();

  constexpr void __cordl_internal_set_engine(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* value);

  /// @brief Method .ctor, addr 0x2333760, size 0x74, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Digests::SkeinDigest* digest);

  /// @brief Method .ctor, addr 0x233353c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(int32_t stateSizeBits, int32_t digestSizeBits);

  /// @brief Method get_AlgorithmName, addr 0x2333a30, size 0x1c4, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IDigest"
  constexpr ::Org::BouncyCastle::Crypto::IDigest* i___Org__BouncyCastle__Crypto__IDigest() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Utilities::IMemoable"
  constexpr ::Org::BouncyCastle::Utilities::IMemoable* i___Org__BouncyCastle__Utilities__IMemoable() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SkeinDigest();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SkeinDigest", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SkeinDigest(SkeinDigest&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SkeinDigest", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SkeinDigest(SkeinDigest const&) = delete;

  /// @brief Field SKEIN_1024 offset 0xffffffff size 0x4
  static constexpr int32_t SKEIN_1024{ static_cast<int32_t>(0x400) };

  /// @brief Field SKEIN_256 offset 0xffffffff size 0x4
  static constexpr int32_t SKEIN_256{ static_cast<int32_t>(0x100) };

  /// @brief Field SKEIN_512 offset 0xffffffff size 0x4
  static constexpr int32_t SKEIN_512{ static_cast<int32_t>(0x200) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 776 };

  /// @brief Field engine, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Digests::SkeinEngine* ___engine;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Digests::SkeinDigest, ___engine) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Digests::SkeinDigest, 0x18>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Digests
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Digests::SkeinDigest);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Digests::SkeinDigest*, "Org.BouncyCastle.Crypto.Digests", "SkeinDigest");
