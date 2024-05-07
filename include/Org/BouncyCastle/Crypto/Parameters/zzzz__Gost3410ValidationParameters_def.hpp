#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Crypto/Parameters/Gost3410ValidationParameters.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Gost3410ValidationParameters)
namespace System {
class Object;
}
// Forward declare root types
namespace Org::BouncyCastle::Crypto::Parameters {
class Gost3410ValidationParameters;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters);
// Type: Org.BouncyCastle.Crypto.Parameters::Gost3410ValidationParameters
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Crypto::Parameters {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Crypto.Parameters::Gost3410ValidationParameters*
class CORDL_TYPE Gost3410ValidationParameters : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_C)) int32_t C;

  __declspec(property(get = get_CL)) int64_t CL;

  __declspec(property(get = get_X0)) int32_t X0;

  __declspec(property(get = get_X0L)) int64_t X0L;

  /// @brief Field c, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_c, put = __cordl_internal_set_c)) int32_t c;

  /// @brief Field cL, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_cL, put = __cordl_internal_set_cL)) int64_t cL;

  /// @brief Field x0, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_x0, put = __cordl_internal_set_x0)) int32_t x0;

  /// @brief Field x0L, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_x0L, put = __cordl_internal_set_x0L)) int64_t x0L;

  /// @brief Method Equals, addr 0x1194ff8, size 0xc8, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x11950c0, size 0x68, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  static inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* New_ctor(int32_t x0, int32_t c);

  static inline ::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters* New_ctor(int64_t x0L, int64_t cL);

  constexpr int32_t const& __cordl_internal_get_c() const;

  constexpr int32_t& __cordl_internal_get_c();

  constexpr int64_t const& __cordl_internal_get_cL() const;

  constexpr int64_t& __cordl_internal_get_cL();

  constexpr int32_t const& __cordl_internal_get_x0() const;

  constexpr int32_t& __cordl_internal_get_x0();

  constexpr int64_t const& __cordl_internal_get_x0L() const;

  constexpr int64_t& __cordl_internal_get_x0L();

  constexpr void __cordl_internal_set_c(int32_t value);

  constexpr void __cordl_internal_set_cL(int64_t value);

  constexpr void __cordl_internal_set_x0(int32_t value);

  constexpr void __cordl_internal_set_x0L(int64_t value);

  /// @brief Method .ctor, addr 0x1194f80, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int32_t x0, int32_t c);

  /// @brief Method .ctor, addr 0x1194fac, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(int64_t x0L, int64_t cL);

  /// @brief Method get_C, addr 0x1194fd8, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_C();

  /// @brief Method get_CL, addr 0x1194fe8, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_CL();

  /// @brief Method get_X0, addr 0x1194fe0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_X0();

  /// @brief Method get_X0L, addr 0x1194ff0, size 0x8, virtual false, abstract: false, final false
  inline int64_t get_X0L();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Gost3410ValidationParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Gost3410ValidationParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Gost3410ValidationParameters(Gost3410ValidationParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Gost3410ValidationParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Gost3410ValidationParameters(Gost3410ValidationParameters const&) = delete;

  /// @brief Field x0, offset: 0x10, size: 0x4, def value: None
  int32_t ___x0;

  /// @brief Field c, offset: 0x14, size: 0x4, def value: None
  int32_t ___c;

  /// @brief Field x0L, offset: 0x18, size: 0x8, def value: None
  int64_t ___x0L;

  /// @brief Field cL, offset: 0x20, size: 0x8, def value: None
  int64_t ___cL;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters, 0x28>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters, ___x0) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters, ___c) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters, ___x0L) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters, ___cL) == 0x20, "Offset mismatch!");

} // namespace Org::BouncyCastle::Crypto::Parameters
NEED_NO_BOX(::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Crypto::Parameters::Gost3410ValidationParameters*, "Org.BouncyCastle.Crypto.Parameters", "Gost3410ValidationParameters");
