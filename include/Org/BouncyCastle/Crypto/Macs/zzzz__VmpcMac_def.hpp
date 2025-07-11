#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Macs/VmpcMac.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Org/BouncyCastle/Crypto/zzzz__IMac_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VmpcMac)
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class VmpcMac;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Macs::VmpcMac);
// Dependencies Org.BouncyCastle.Crypto.IMac, System.Object
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// CS Name: Org.BouncyCastle.Crypto.Macs.VmpcMac
class CORDL_TYPE VmpcMac : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_AlgorithmName)) ::StringW AlgorithmName;

  /// @brief Field P, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_P, put = __cordl_internal_set_P)) ::ArrayW<uint8_t, ::Array<uint8_t>*> P;

  /// @brief Field T, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_T, put = __cordl_internal_set_T)) ::ArrayW<uint8_t, ::Array<uint8_t>*> T;

  /// @brief Field g, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_g, put = __cordl_internal_set_g)) uint8_t g;

  /// @brief Field n, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_n, put = __cordl_internal_set_n)) uint8_t n;

  /// @brief Field s, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_s, put = __cordl_internal_set_s)) uint8_t s;

  /// @brief Field workingIV, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_workingIV, put = __cordl_internal_set_workingIV)) ::ArrayW<uint8_t, ::Array<uint8_t>*> workingIV;

  /// @brief Field workingKey, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_workingKey, put = __cordl_internal_set_workingKey)) ::ArrayW<uint8_t, ::Array<uint8_t>*> workingKey;

  /// @brief Field x1, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get_x1, put = __cordl_internal_set_x1)) uint8_t x1;

  /// @brief Field x2, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get_x2, put = __cordl_internal_set_x2)) uint8_t x2;

  /// @brief Field x3, offset 0x42, size 0x1
  __declspec(property(get = __cordl_internal_get_x3, put = __cordl_internal_set_x3)) uint8_t x3;

  /// @brief Field x4, offset 0x43, size 0x1
  __declspec(property(get = __cordl_internal_get_x4, put = __cordl_internal_set_x4)) uint8_t x4;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
  constexpr operator ::Org::BouncyCastle::Crypto::IMac*() noexcept;

  /// @brief Method BlockUpdate, addr 0x239c380, size 0xf0, virtual true, abstract: false, final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  /// @brief Method DoFinal, addr 0x239b86c, size 0x448, virtual true, abstract: false, final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method GetMacSize, addr 0x239bcf4, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetMacSize();

  /// @brief Method Init, addr 0x239bcfc, size 0x1a4, virtual true, abstract: false, final false
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  static inline ::Org::BouncyCastle::Crypto::Macs::VmpcMac* New_ctor();

  /// @brief Method Reset, addr 0x239c098, size 0x9c, virtual true, abstract: false, final false
  inline void Reset();

  /// @brief Method Update, addr 0x239c134, size 0x24c, virtual true, abstract: false, final false
  inline void Update(uint8_t input);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_P() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_P();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_T() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_T();

  constexpr uint8_t const& __cordl_internal_get_g() const;

  constexpr uint8_t& __cordl_internal_get_g();

  constexpr uint8_t const& __cordl_internal_get_n() const;

  constexpr uint8_t& __cordl_internal_get_n();

  constexpr uint8_t const& __cordl_internal_get_s() const;

  constexpr uint8_t& __cordl_internal_get_s();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_workingIV() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_workingIV();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __cordl_internal_get_workingKey() const;

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __cordl_internal_get_workingKey();

  constexpr uint8_t const& __cordl_internal_get_x1() const;

  constexpr uint8_t& __cordl_internal_get_x1();

  constexpr uint8_t const& __cordl_internal_get_x2() const;

  constexpr uint8_t& __cordl_internal_get_x2();

  constexpr uint8_t const& __cordl_internal_get_x3() const;

  constexpr uint8_t& __cordl_internal_get_x3();

  constexpr uint8_t const& __cordl_internal_get_x4() const;

  constexpr uint8_t& __cordl_internal_get_x4();

  constexpr void __cordl_internal_set_P(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_T(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_g(uint8_t value);

  constexpr void __cordl_internal_set_n(uint8_t value);

  constexpr void __cordl_internal_set_s(uint8_t value);

  constexpr void __cordl_internal_set_workingIV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_workingKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr void __cordl_internal_set_x1(uint8_t value);

  constexpr void __cordl_internal_set_x2(uint8_t value);

  constexpr void __cordl_internal_set_x3(uint8_t value);

  constexpr void __cordl_internal_set_x4(uint8_t value);

  /// @brief Method .ctor, addr 0x239c470, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_AlgorithmName, addr 0x239bcb4, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_AlgorithmName();

  /// @brief Convert to "::Org::BouncyCastle::Crypto::IMac"
  constexpr ::Org::BouncyCastle::Crypto::IMac* i___Org__BouncyCastle__Crypto__IMac() noexcept;

  /// @brief Method initKey, addr 0x239bea0, size 0x1f8, virtual false, abstract: false, final false
  inline void initKey(::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes, ::ArrayW<uint8_t, ::Array<uint8_t>*> ivBytes);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VmpcMac();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VmpcMac", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VmpcMac(VmpcMac&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VmpcMac", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VmpcMac(VmpcMac const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 948 };

  /// @brief Field g, offset: 0x10, size: 0x1, def value: None
  uint8_t ___g;

  /// @brief Field n, offset: 0x11, size: 0x1, def value: None
  uint8_t ___n;

  /// @brief Field P, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___P;

  /// @brief Field s, offset: 0x20, size: 0x1, def value: None
  uint8_t ___s;

  /// @brief Field T, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___T;

  /// @brief Field workingIV, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___workingIV;

  /// @brief Field workingKey, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<uint8_t, ::Array<uint8_t>*> ___workingKey;

  /// @brief Field x1, offset: 0x40, size: 0x1, def value: None
  uint8_t ___x1;

  /// @brief Field x2, offset: 0x41, size: 0x1, def value: None
  uint8_t ___x2;

  /// @brief Field x3, offset: 0x42, size: 0x1, def value: None
  uint8_t ___x3;

  /// @brief Field x4, offset: 0x43, size: 0x1, def value: None
  uint8_t ___x4;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::VmpcMac, ___g) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::VmpcMac, ___n) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::VmpcMac, ___P) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::VmpcMac, ___s) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::VmpcMac, ___T) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::VmpcMac, ___workingIV) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::VmpcMac, ___workingKey) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::VmpcMac, ___x1) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::VmpcMac, ___x2) == 0x41, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::VmpcMac, ___x3) == 0x42, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Macs::VmpcMac, ___x4) == 0x43, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Macs::VmpcMac, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::VmpcMac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::VmpcMac*, "Org.BouncyCastle.Crypto.Macs", "VmpcMac");
