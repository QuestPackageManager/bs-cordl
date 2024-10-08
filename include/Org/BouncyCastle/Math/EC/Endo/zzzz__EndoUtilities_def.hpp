#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Endo/EndoUtilities.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(EndoUtilities)
namespace Org::BouncyCastle::Math::EC::Endo {
class ECEndomorphism;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class EndoPreCompInfo;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class ScalarSplitParameters;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class __EndoUtilities__MapPointCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class IPreCompCallback;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
namespace Org::BouncyCastle::Math {
class BigInteger;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Endo {
class EndoUtilities;
}
namespace Org::BouncyCastle::Math::EC::Endo {
class __EndoUtilities__MapPointCallback;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Endo::EndoUtilities);
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback);
// Type: ::MapPointCallback
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Endo {
// Is value type: false
// CS Name: ::EndoUtilities::MapPointCallback*
class CORDL_TYPE __EndoUtilities__MapPointCallback : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_endomorphism, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_endomorphism, put = __cordl_internal_set_m_endomorphism)) ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* m_endomorphism;

  /// @brief Field m_point, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_point, put = __cordl_internal_set_m_point)) ::Org::BouncyCastle::Math::EC::ECPoint* m_point;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr operator ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback*() noexcept;

  /// @brief Method CheckExisting, addr 0x2476dcc, size 0x58, virtual false, abstract: false, final false
  inline bool CheckExisting(::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo* existingEndo, ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism);

  static inline ::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback* New_ctor(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism,
                                                                                                 ::Org::BouncyCastle::Math::EC::ECPoint* point);

  /// @brief Method Precompute, addr 0x2476bd4, size 0x1f8, virtual true, abstract: false, final true
  inline ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* Precompute(::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* existing);

  constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*& __cordl_internal_get_m_endomorphism();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*> const& __cordl_internal_get_m_endomorphism() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __cordl_internal_get_m_point();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> const& __cordl_internal_get_m_point() const;

  constexpr void __cordl_internal_set_m_endomorphism(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* value);

  constexpr void __cordl_internal_set_m_point(::Org::BouncyCastle::Math::EC::ECPoint* value);

  /// @brief Method .ctor, addr 0x2476b40, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism, ::Org::BouncyCastle::Math::EC::ECPoint* point);

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback"
  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::IPreCompCallback* i___Org__BouncyCastle__Math__EC__Multiplier__IPreCompCallback() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __EndoUtilities__MapPointCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__EndoUtilities__MapPointCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __EndoUtilities__MapPointCallback(__EndoUtilities__MapPointCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__EndoUtilities__MapPointCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __EndoUtilities__MapPointCallback(__EndoUtilities__MapPointCallback const&) = delete;

  /// @brief Field m_endomorphism, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* ___m_endomorphism;

  /// @brief Field m_point, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPoint* ___m_point;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1518 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback, ___m_endomorphism) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback, ___m_point) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Endo
// Type: Org.BouncyCastle.Math.EC.Endo::EndoUtilities
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Endo {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Endo::EndoUtilities*
class CORDL_TYPE EndoUtilities : public ::System::Object {
public:
  // Declarations
  using MapPointCallback = ::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback;

  /// @brief Field PRECOMP_NAME, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PRECOMP_NAME, put = setStaticF_PRECOMP_NAME)) ::StringW PRECOMP_NAME;

  /// @brief Method CalculateB, addr 0x247691c, size 0x100, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::BigInteger* CalculateB(::Org::BouncyCastle::Math::BigInteger* k, ::Org::BouncyCastle::Math::BigInteger* g, int32_t t);

  /// @brief Method DecomposeScalar, addr 0x24766e8, size 0x234, virtual false, abstract: false, final false
  static inline ::ArrayW<::Org::BouncyCastle::Math::BigInteger*, ::Array<::Org::BouncyCastle::Math::BigInteger*>*> DecomposeScalar(::Org::BouncyCastle::Math::EC::Endo::ScalarSplitParameters* p,
                                                                                                                                   ::Org::BouncyCastle::Math::BigInteger* k);

  /// @brief Method MapPoint, addr 0x2476a1c, size 0x124, virtual false, abstract: false, final false
  static inline ::Org::BouncyCastle::Math::EC::ECPoint* MapPoint(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* endomorphism, ::Org::BouncyCastle::Math::EC::ECPoint* p);

  static inline ::Org::BouncyCastle::Math::EC::Endo::EndoUtilities* New_ctor();

  /// @brief Method .ctor, addr 0x2476bcc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_PRECOMP_NAME();

  static inline void setStaticF_PRECOMP_NAME(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EndoUtilities();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EndoUtilities", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EndoUtilities(EndoUtilities&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EndoUtilities", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EndoUtilities(EndoUtilities const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1519 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Endo::EndoUtilities, 0x10>, "Size mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Endo
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Endo::EndoUtilities);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Endo::EndoUtilities*, "Org.BouncyCastle.Math.EC.Endo", "EndoUtilities");
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Endo::__EndoUtilities__MapPointCallback*, "Org.BouncyCastle.Math.EC.Endo", "EndoUtilities/MapPointCallback");
