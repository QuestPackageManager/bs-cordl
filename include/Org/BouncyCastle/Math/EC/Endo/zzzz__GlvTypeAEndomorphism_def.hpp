#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(GlvTypeAEndomorphism)
namespace Org::BouncyCastle::Math::EC::Endo {
class ECEndomorphism;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class GlvEndomorphism;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class GlvTypeAParameters;
}
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math::EC {
class ECPointMap;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Endo {
class GlvTypeAEndomorphism;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism);
// Type: Org.BouncyCastle.Math.EC.Endo::GlvTypeAEndomorphism
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Endo {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Endo::GlvTypeAEndomorphism*
class CORDL_TYPE GlvTypeAEndomorphism : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_HasEfficientPointMap)) bool HasEfficientPointMap;

  __declspec(property(get = get_PointMap))::Org::BouncyCastle::Math::EC::ECPointMap* PointMap;

  /// @brief Field m_parameters, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_parameters, put = __cordl_internal_set_m_parameters))::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters* m_parameters;

  /// @brief Field m_pointMap, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_pointMap, put = __cordl_internal_set_m_pointMap))::Org::BouncyCastle::Math::EC::ECPointMap* m_pointMap;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism"
  constexpr operator ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism"
  constexpr operator ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*() noexcept;

  /// @brief Method DecomposeScalar, addr 0x10a72e0, size 0x7c, virtual true, abstract: false, final false
  inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> DecomposeScalar(::Org::BouncyCastle::Math::BigInteger* k);

  static inline ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters* parameters);

  constexpr ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*& __cordl_internal_get_m_parameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters*> const& __cordl_internal_get_m_parameters() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECPointMap*& __cordl_internal_get_m_pointMap();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPointMap*> const& __cordl_internal_get_m_pointMap() const;

  constexpr void __cordl_internal_set_m_parameters(::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters* value);

  constexpr void __cordl_internal_set_m_pointMap(::Org::BouncyCastle::Math::EC::ECPointMap* value);

  /// @brief Method .ctor, addr 0x10a7228, size 0xb8, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters* parameters);

  /// @brief Method get_HasEfficientPointMap, addr 0x10a7364, size 0x8, virtual true, abstract: false, final false
  inline bool get_HasEfficientPointMap();

  /// @brief Method get_PointMap, addr 0x10a735c, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPointMap* get_PointMap();

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism"
  constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* i___Org__BouncyCastle__Math__EC__Endo__ECEndomorphism() noexcept;

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism"
  constexpr ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism* i___Org__BouncyCastle__Math__EC__Endo__GlvEndomorphism() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GlvTypeAEndomorphism();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GlvTypeAEndomorphism", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GlvTypeAEndomorphism(GlvTypeAEndomorphism&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GlvTypeAEndomorphism", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GlvTypeAEndomorphism(GlvTypeAEndomorphism const&) = delete;

  /// @brief Field m_parameters, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Endo::GlvTypeAParameters* ___m_parameters;

  /// @brief Field m_pointMap, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPointMap* ___m_pointMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism, ___m_parameters) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism, ___m_pointMap) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Endo
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Endo::GlvTypeAEndomorphism*, "Org.BouncyCastle.Math.EC.Endo", "GlvTypeAEndomorphism");
