#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(VmpcMac)
namespace Org::BouncyCastle::Crypto {
class IMac;
}
namespace Org::BouncyCastle::Crypto {
class ICipherParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Macs {
class VmpcMac;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Macs::VmpcMac);
// Type: Org.BouncyCastle.Crypto.Macs::VmpcMac
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 68, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Macs {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(948))
// CS Name: ::Org.BouncyCastle.Crypto.Macs::VmpcMac*
class CORDL_TYPE VmpcMac : public ::System::Object {
public:
  // Declarations
  /// @brief Field g, offset 0x10, size 0x1
  __declspec(property(get = __get_g, put = __set_g)) uint8_t g;

  /// @brief Field n, offset 0x11, size 0x1
  __declspec(property(get = __get_n, put = __set_n)) uint8_t n;

  /// @brief Field P, offset 0x18, size 0x8
  __declspec(property(get = __get_P, put = __set_P))::ArrayW<uint8_t, ::Array<uint8_t>*> P;

  /// @brief Field s, offset 0x20, size 0x1
  __declspec(property(get = __get_s, put = __set_s)) uint8_t s;

  /// @brief Field T, offset 0x28, size 0x8
  __declspec(property(get = __get_T, put = __set_T))::ArrayW<uint8_t, ::Array<uint8_t>*> T;

  /// @brief Field workingIV, offset 0x30, size 0x8
  __declspec(property(get = __get_workingIV, put = __set_workingIV))::ArrayW<uint8_t, ::Array<uint8_t>*> workingIV;

  /// @brief Field workingKey, offset 0x38, size 0x8
  __declspec(property(get = __get_workingKey, put = __set_workingKey))::ArrayW<uint8_t, ::Array<uint8_t>*> workingKey;

  /// @brief Field x1, offset 0x40, size 0x1
  __declspec(property(get = __get_x1, put = __set_x1)) uint8_t x1;

  /// @brief Field x2, offset 0x41, size 0x1
  __declspec(property(get = __get_x2, put = __set_x2)) uint8_t x2;

  /// @brief Field x3, offset 0x42, size 0x1
  __declspec(property(get = __get_x3, put = __set_x3)) uint8_t x3;

  /// @brief Field x4, offset 0x43, size 0x1
  __declspec(property(get = __get_x4, put = __set_x4)) uint8_t x4;

  __declspec(property(get = get_AlgorithmName))::StringW AlgorithmName;

  /// @brief Convert operator to "::Org::BouncyCastle::Crypto::IMac"
  constexpr operator ::Org::BouncyCastle::Crypto::IMac*() noexcept;

  constexpr uint8_t& __get_g();

  constexpr uint8_t const& __get_g() const;

  constexpr void __set_g(uint8_t value);

  constexpr uint8_t& __get_n();

  constexpr uint8_t const& __get_n() const;

  constexpr void __set_n(uint8_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_P();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_P() const;

  constexpr void __set_P(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr uint8_t& __get_s();

  constexpr uint8_t const& __get_s() const;

  constexpr void __set_s(uint8_t value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_T();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_T() const;

  constexpr void __set_T(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_workingIV();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_workingIV() const;

  constexpr void __set_workingIV(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*>& __get_workingKey();

  constexpr ::ArrayW<uint8_t, ::Array<uint8_t>*> const& __get_workingKey() const;

  constexpr void __set_workingKey(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

  constexpr uint8_t& __get_x1();

  constexpr uint8_t const& __get_x1() const;

  constexpr void __set_x1(uint8_t value);

  constexpr uint8_t& __get_x2();

  constexpr uint8_t const& __get_x2() const;

  constexpr void __set_x2(uint8_t value);

  constexpr uint8_t& __get_x3();

  constexpr uint8_t const& __get_x3() const;

  constexpr void __set_x3(uint8_t value);

  constexpr uint8_t& __get_x4();

  constexpr uint8_t const& __get_x4() const;

  constexpr void __set_x4(uint8_t value);

  /// @brief Method DoFinal addr 0xf11470 size 0x448 virtual true final false
  inline int32_t DoFinal(::ArrayW<uint8_t, ::Array<uint8_t>*> output, int32_t outOff);

  /// @brief Method get_AlgorithmName addr 0xf118b8 size 0x40 virtual true final false
  inline ::StringW get_AlgorithmName();

  /// @brief Method GetMacSize addr 0xf118f8 size 0x8 virtual true final false
  inline int32_t GetMacSize();

  /// @brief Method Init addr 0xf11900 size 0x1b0 virtual true final false
  inline void Init(::Org::BouncyCastle::Crypto::ICipherParameters* parameters);

  /// @brief Method initKey addr 0xf11ab0 size 0x1fc virtual false final false
  inline void initKey(::ArrayW<uint8_t, ::Array<uint8_t>*> keyBytes, ::ArrayW<uint8_t, ::Array<uint8_t>*> ivBytes);

  /// @brief Method Reset addr 0xf11cac size 0x9c virtual true final false
  inline void Reset();

  /// @brief Method Update addr 0xf11d48 size 0x24c virtual true final false
  inline void Update(uint8_t input);

  /// @brief Method BlockUpdate addr 0xf11f94 size 0xf4 virtual true final false
  inline void BlockUpdate(::ArrayW<uint8_t, ::Array<uint8_t>*> input, int32_t inOff, int32_t len);

  static inline ::Org::BouncyCastle::Crypto::Macs::VmpcMac* New_ctor();

  /// @brief Method .ctor addr 0xf12088 size 0x14 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "VmpcMac", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VmpcMac(VmpcMac&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VmpcMac", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VmpcMac(VmpcMac const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VmpcMac();

public:
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
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Macs::VmpcMac, 0x48>, "Size mismatch!");

} // namespace Org::BouncyCastle::Crypto::Macs
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Macs::VmpcMac);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Macs::VmpcMac*, "Org.BouncyCastle.Crypto.Macs", "VmpcMac");
