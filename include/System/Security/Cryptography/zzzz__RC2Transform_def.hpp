#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mono/Security/Cryptography/zzzz__SymmetricTransform_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(RC2Transform)
namespace System::Security::Cryptography {
class RC2;
}
// Forward declare root types
namespace System::Security::Cryptography {
class RC2Transform;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::RC2Transform);
// Type: System.Security.Cryptography::RC2Transform
// SizeInfo { instance_size: 112, native_size: -1, calculated_instance_size: 112, calculated_native_size: 108, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Security::Cryptography {
// Is value type: false
// CS Name: ::System.Security.Cryptography::RC2Transform*
class CORDL_TYPE RC2Transform : public ::Mono::Security::Cryptography::SymmetricTransform {
public:
  // Declarations
  /// @brief Field K, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_K, put = __cordl_internal_set_K))::ArrayW<uint16_t, ::Array<uint16_t>*> K;

  /// @brief Field R0, offset 0x58, size 0x2
  __declspec(property(get = __cordl_internal_get_R0, put = __cordl_internal_set_R0)) uint16_t R0;

  /// @brief Field R1, offset 0x5a, size 0x2
  __declspec(property(get = __cordl_internal_get_R1, put = __cordl_internal_set_R1)) uint16_t R1;

  /// @brief Field R2, offset 0x5c, size 0x2
  __declspec(property(get = __cordl_internal_get_R2, put = __cordl_internal_set_R2)) uint16_t R2;

  /// @brief Field R3, offset 0x5e, size 0x2
  __declspec(property(get = __cordl_internal_get_R3, put = __cordl_internal_set_R3)) uint16_t R3;

  /// @brief Field j, offset 0x68, size 0x4
  __declspec(property(get = __cordl_internal_get_j, put = __cordl_internal_set_j)) int32_t j;

  /// @brief Field pitable, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_pitable, put = setStaticF_pitable))::ArrayW<uint8_t, ::Array<uint8_t>*> pitable;

  /// @brief Method ECB, addr 0x25c8870, size 0x930, virtual true, abstract: false, final false
  inline void ECB(::ArrayW<uint8_t, ::Array<uint8_t>*> input, ::ArrayW<uint8_t, ::Array<uint8_t>*> output);

  static inline ::System::Security::Cryptography::RC2Transform* New_ctor(::System::Security::Cryptography::RC2* rc2Algo, bool encryption, ::ArrayW<uint8_t, ::Array<uint8_t>*> key,
                                                                         ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*> const& __cordl_internal_get_K() const;

  constexpr ::ArrayW<uint16_t, ::Array<uint16_t>*>& __cordl_internal_get_K();

  constexpr uint16_t const& __cordl_internal_get_R0() const;

  constexpr uint16_t& __cordl_internal_get_R0();

  constexpr uint16_t const& __cordl_internal_get_R1() const;

  constexpr uint16_t& __cordl_internal_get_R1();

  constexpr uint16_t const& __cordl_internal_get_R2() const;

  constexpr uint16_t& __cordl_internal_get_R2();

  constexpr uint16_t const& __cordl_internal_get_R3() const;

  constexpr uint16_t& __cordl_internal_get_R3();

  constexpr int32_t const& __cordl_internal_get_j() const;

  constexpr int32_t& __cordl_internal_get_j();

  constexpr void __cordl_internal_set_K(::ArrayW<uint16_t, ::Array<uint16_t>*> value);

  constexpr void __cordl_internal_set_R0(uint16_t value);

  constexpr void __cordl_internal_set_R1(uint16_t value);

  constexpr void __cordl_internal_set_R2(uint16_t value);

  constexpr void __cordl_internal_set_R3(uint16_t value);

  constexpr void __cordl_internal_set_j(int32_t value);

  /// @brief Method .ctor, addr 0x25c8328, size 0x548, virtual false, abstract: false, final false
  inline void _ctor(::System::Security::Cryptography::RC2* rc2Algo, bool encryption, ::ArrayW<uint8_t, ::Array<uint8_t>*> key, ::ArrayW<uint8_t, ::Array<uint8_t>*> iv);

  static inline ::ArrayW<uint8_t, ::Array<uint8_t>*> getStaticF_pitable();

  static inline void setStaticF_pitable(::ArrayW<uint8_t, ::Array<uint8_t>*> value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr RC2Transform();

public:
  // Ctor Parameters [CppParam { name: "", ty: "RC2Transform", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  RC2Transform(RC2Transform&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "RC2Transform", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  RC2Transform(RC2Transform const&) = delete;

  /// @brief Field R0, offset: 0x58, size: 0x2, def value: None
  uint16_t ___R0;

  /// @brief Field R1, offset: 0x5a, size: 0x2, def value: None
  uint16_t ___R1;

  /// @brief Field R2, offset: 0x5c, size: 0x2, def value: None
  uint16_t ___R2;

  /// @brief Field R3, offset: 0x5e, size: 0x2, def value: None
  uint16_t ___R3;

  /// @brief Field K, offset: 0x60, size: 0x8, def value: None
  ::ArrayW<uint16_t, ::Array<uint16_t>*> ___K;

  /// @brief Field j, offset: 0x68, size: 0x4, def value: None
  int32_t ___j;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::RC2Transform, 0x70>, "Size mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RC2Transform, ___R0) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RC2Transform, ___R1) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RC2Transform, ___R2) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RC2Transform, ___R3) == 0x5e, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RC2Transform, ___K) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Security::Cryptography::RC2Transform, ___j) == 0x68, "Offset mismatch!");

} // namespace System::Security::Cryptography
NEED_NO_BOX(::System::Security::Cryptography::RC2Transform);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::RC2Transform*, "System.Security.Cryptography", "RC2Transform");
