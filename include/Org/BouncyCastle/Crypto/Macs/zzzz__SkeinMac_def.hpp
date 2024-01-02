#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SkeinMac)
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto::Digests {
class SkeinEngine;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class SkeinMac;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Macs::SkeinMac);
// Type: Org.BouncyCastle.Crypto.Macs::SkeinMac
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(947))
// CS Name: ::Org.BouncyCastle.Crypto.Macs::SkeinMac*
class CORDL_TYPE SkeinMac : public ::System::Object {
public:
  // Declarations
  /// @brief Field engine, offset 0x10, size 0x8
  __declspec(property(get = __get_engine, put = __set_engine))::Org::BouncyCastle::Crypto::Digests::SkeinEngine* engine;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
  constexpr operator ::Org::BouncyCastle::Crypto::IMac*() noexcept;

  constexpr ::Org::BouncyCastle::Crypto::Digests::SkeinEngine*& __get_engine();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Crypto::Digests::SkeinEngine*> const& __get_engine() const;

  constexpr void __set_engine(::Org::BouncyCastle::Crypto::Digests::SkeinEngine* value);

  static inline ::Org::BouncyCastle::Crypto::Macs::SkeinMac* New_ctor(int32_t stateSizeBits, int32_t digestSizeBits);

  /// @brief Method .ctor, addr 0xf10f00, size 0x84, virtual false, abstract: false, final false
  inline void _ctor(int32_t stateSizeBits, int32_t digestSizeBits);

  static inline ::Org::BouncyCastle::Crypto::Macs::SkeinMac* New_ctor(::Org::BouncyCastle::Crypto::Macs::SkeinMac* mac);

  /// @brief Method .ctor, addr 0xf10f84, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Crypto::Macs::SkeinMac* mac);

  /// @brief Method get_AlgorithmName, addr 0xf11000, size 0x1b4, virtual true, abstract: false, final true
  inline ::StringW get_AlgorithmName();

  /// @brief Method Init, addr 0xf111b4, size 0x230, virtual true, abstract: false, final true
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method GetMacSize, addr 0xf113e4, size 0x1c, virtual true, abstract: false, final true
  inline int32_t GetMacSize();

  /// @brief Method Reset, addr 0xf11400, size 0x1c, virtual true, abstract: false, final true
  inline void Reset();

  /// @brief Method Update, addr 0xf1141c, size 0x1c, virtual true, abstract: false, final true
  inline void Update(uint8_t inByte);

  /// @brief Method BlockUpdate, addr 0xf11438, size 0x1c, virtual true, abstract: false, final true
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method DoFinal, addr 0xf11454, size 0x1c, virtual true, abstract: false, final true
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  // Ctor Parameters [CppParam { name: "", ty: "SkeinMac", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SkeinMac(SkeinMac&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SkeinMac", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SkeinMac(SkeinMac const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SkeinMac();

public:
  /// @brief Field engine, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Crypto::Digests::SkeinEngine* ___engine;

  /// @brief Field SKEIN_256 offset 0xffffffff size 0x4
  static constexpr int32_t SKEIN_256{ static_cast<int32_t>(0x100) };

  /// @brief Field SKEIN_512 offset 0xffffffff size 0x4
  static constexpr int32_t SKEIN_512{ static_cast<int32_t>(0x200) };

  /// @brief Field SKEIN_1024 offset 0xffffffff size 0x4
  static constexpr int32_t SKEIN_1024{ static_cast<int32_t>(0x400) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Macs::SkeinMac, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::SkeinMac, ___engine) == 0x10, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::SkeinMac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::SkeinMac*, "Org.BouncyCastle.Crypto.Macs", "SkeinMac");
