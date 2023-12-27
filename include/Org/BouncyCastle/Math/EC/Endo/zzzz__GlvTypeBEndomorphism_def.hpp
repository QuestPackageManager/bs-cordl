#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(GlvTypeBEndomorphism)
namespace Org::BouncyCastle::Math::EC {
class ECCurve;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class ECEndomorphism;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class GlvEndomorphism;
}
namespace Org::BouncyCastle::Math::EC {
class ECPointMap;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class GlvTypeBParameters;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Endo {
class GlvTypeBEndomorphism;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism);
// Type: Org.BouncyCastle.Math.EC.Endo::GlvTypeBEndomorphism
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Endo {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(1523))
// CS Name: ::Org.BouncyCastle.Math.EC.Endo::GlvTypeBEndomorphism*
class CORDL_TYPE GlvTypeBEndomorphism : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_parameters, offset 0x10, size 0x8
  __declspec(property(get = __get_m_parameters, put = __set_m_parameters))::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters* m_parameters;

  /// @brief Field m_pointMap, offset 0x18, size 0x8
  __declspec(property(get = __get_m_pointMap, put = __set_m_pointMap))::Org::BouncyCastle::Math::EC::ECPointMap* m_pointMap;

  __declspec(property(get = get_PointMap))::Org::BouncyCastle::Math::EC::ECPointMap* PointMap;

  __declspec(property(get = get_HasEfficientPointMap)) bool HasEfficientPointMap;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism"
  constexpr operator ::Org::BouncyCastle::Math::EC::Endo::GlvEndomorphism*() noexcept;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism"
  constexpr operator ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*() noexcept;

  constexpr ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*& __get_m_parameters();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters*> const& __get_m_parameters() const;

  constexpr void __set_m_parameters(::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters* value);

  constexpr ::Org::BouncyCastle::Math::EC::ECPointMap*& __get_m_pointMap();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPointMap*> const& __get_m_pointMap() const;

  constexpr void __set_m_pointMap(::Org::BouncyCastle::Math::EC::ECPointMap* value);

  static inline ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism* New_ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters* parameters);

  /// @brief Method .ctor addr 0x1035560 size 0xb8 virtual false final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::ECCurve* curve, ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters* parameters);

  /// @brief Method DecomposeScalar addr 0x1035618 size 0x7c virtual true final false
  inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> DecomposeScalar(::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method get_PointMap addr 0x1035694 size 0x8 virtual true final false
  inline ::Org::BouncyCastle::Math::EC::ECPointMap* get_PointMap();

  /// @brief Method get_HasEfficientPointMap addr 0x103569c size 0x8 virtual true final false
  inline bool get_HasEfficientPointMap();

  // Ctor Parameters [CppParam { name: "", ty: "GlvTypeBEndomorphism", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GlvTypeBEndomorphism(GlvTypeBEndomorphism&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GlvTypeBEndomorphism", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GlvTypeBEndomorphism(GlvTypeBEndomorphism const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GlvTypeBEndomorphism();

public:
  /// @brief Field m_parameters, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Endo::GlvTypeBParameters* ___m_parameters;

  /// @brief Field m_pointMap, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPointMap* ___m_pointMap;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism, 0x20>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Endo
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Endo::GlvTypeBEndomorphism*, "Org.BouncyCastle.Math.EC.Endo", "GlvTypeBEndomorphism");
