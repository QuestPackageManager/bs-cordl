#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Engines/XteaEngine.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XteaEngine)
namespace Org::BouncyCastle::Crypto {
class IBlockCipher;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Engines {
class XteaEngine;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Engines::XteaEngine);
// Type: Org.BouncyCastle.Crypto.Engines::XteaEngine
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 42, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Engines {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Engines::XteaEngine*
class CORDL_TYPE XteaEngine : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  __declspec(property(get = get_IsPartialBlockOkay)) bool IsPartialBlockOkay;

  /// @brief Field _S, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__S, put = __cordl_internal_set__S)) ::ArrayW<uint32_t, ::Array<uint32_t>*> _S;

  /// @brief Field _forEncryption, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get__forEncryption, put = __cordl_internal_set__forEncryption)) bool _forEncryption;

  /// @brief Field _initialised, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__initialised, put = __cordl_internal_set__initialised)) bool _initialised;

  /// @brief Field _sum0, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__sum0, put = __cordl_internal_set__sum0)) ::ArrayW<uint32_t, ::Array<uint32_t>*> _sum0;

  /// @brief Field _sum1, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__sum1, put = __cordl_internal_set__sum1)) ::ArrayW<uint32_t, ::Array<uint32_t>*> _sum1;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr operator ::Org::BouncyCastle::Crypto::IBlockCipher*() noexcept;

  /// @brief Method GetBlockSize, addr 0x233f064, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetBlockSize();

  /// @brief Method Init, addr 0x233f06c, size 0x140, virtual true, abstract: false, final false
  inline void Init(bool forEncryption, ::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Engines::XteaEngine* New_ctor();

  /// @brief Method ProcessBlock, addr 0x233f2b8, size 0x158, virtual true, abstract: false, final false
  inline int32_t ProcessBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method Reset, addr 0x233f614, size 0x4, virtual true, abstract: false, final false
  inline void Reset();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get__S() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get__S();

  constexpr bool const& __cordl_internal_get__forEncryption() const;

  constexpr bool& __cordl_internal_get__forEncryption();

  constexpr bool const& __cordl_internal_get__initialised() const;

  constexpr bool& __cordl_internal_get__initialised();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get__sum0() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get__sum0();

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*> const& __cordl_internal_get__sum1() const;

  constexpr ::ArrayW<uint32_t, ::Array<uint32_t>*>& __cordl_internal_get__sum1();

  constexpr void __cordl_internal_set__S(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set__forEncryption(bool value);

  constexpr void __cordl_internal_set__initialised(bool value);

  constexpr void __cordl_internal_set__sum0(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  constexpr void __cordl_internal_set__sum1(::ArrayW<uint32_t, ::Array<uint32_t>*> value);

  /// @brief Method .ctor, addr 0x233ef9c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method decryptBlock, addr 0x233f410, size 0x100, virtual false, abstract: false, final false
  inline int32_t decryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method encryptBlock, addr 0x233f510, size 0x104, virtual false, abstract: false, final false
  inline int32_t encryptBlock(::ArrayW<uint8_t, ::Array<uint8_t>*> inBytes, int32_t inOff, ::ArrayW<uint8_t, ::Array<uint8_t>*> outBytes, int32_t outOff);

  /// @brief Method get_AlgorithmName, addr 0x233f01c, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method get_IsPartialBlockOkay, addr 0x233f05c, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsPartialBlockOkay();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IBlockCipher"
  constexpr ::Org::BouncyCastle::Crypto::IBlockCipher* i___Org__BouncyCastle__Crypto__IBlockCipher() noexcept;

  /// @brief Method setKey, addr 0x233f1ac, size 0x10c, virtual false, abstract: false, final false
  inline void setKey(::ArrayW<uint8_t, ::Array<uint8_t>*> key);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XteaEngine();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XteaEngine", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XteaEngine(XteaEngine&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XteaEngine", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XteaEngine(XteaEngine const&) = delete;

  /// @brief Field _S, offset: 0x10, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ____S;

  /// @brief Field _sum0, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ____sum0;

  /// @brief Field _sum1, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<uint32_t, ::Array<uint32_t>*> ____sum1;

  /// @brief Field _initialised, offset: 0x28, size: 0x1, def value: None
  bool ____initialised;

  /// @brief Field _forEncryption, offset: 0x29, size: 0x1, def value: None
  bool ____forEncryption;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 885 };

  /// @brief Field block_size offset 0xffffffff size 0x4
  static constexpr int32_t block_size{ static_cast<int32_t>(0x8) };

  /// @brief Field delta offset 0xffffffff size 0x4
  static constexpr int32_t delta{ static_cast<int32_t>(0x9e3779b9) };

  /// @brief Field rounds offset 0xffffffff size 0x4
  static constexpr int32_t rounds{ static_cast<int32_t>(0x20) };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Engines::XteaEngine, 0x30>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::XteaEngine, ____S) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::XteaEngine, ____sum0) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::XteaEngine, ____sum1) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::XteaEngine, ____initialised) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Engines::XteaEngine, ____forEncryption) == 0x29, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Engines
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Engines::XteaEngine);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Engines::XteaEngine*, "Org.BouncyCastle.Crypto.Engines", "XteaEngine");
