#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Endo/EndoPreCompInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EndoPreCompInfo)
namespace Org::BouncyCastle::Math::EC::Endo {
class ECEndomorphism;
}
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
namespace Org::BouncyCastle::Math::EC {
class ECPoint;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Endo {
class EndoPreCompInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo);
// Type: Org.BouncyCastle.Math.EC.Endo::EndoPreCompInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Endo {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Endo::EndoPreCompInfo*
class CORDL_TYPE EndoPreCompInfo : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Endomorphism, put = set_Endomorphism)) ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* Endomorphism;

  __declspec(property(get = get_MappedPoint, put = set_MappedPoint)) ::Org::BouncyCastle::Math::EC::ECPoint* MappedPoint;

  /// @brief Field m_endomorphism, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_endomorphism, put = __cordl_internal_set_m_endomorphism)) ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* m_endomorphism;

  /// @brief Field m_mappedPoint, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_mappedPoint, put = __cordl_internal_set_m_mappedPoint)) ::Org::BouncyCastle::Math::EC::ECPoint* m_mappedPoint;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo"
  constexpr operator ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*() noexcept;

  static inline ::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo* New_ctor();

  constexpr ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*& __cordl_internal_get_m_endomorphism();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism*> const& __cordl_internal_get_m_endomorphism() const;

  constexpr ::Org::BouncyCastle::Math::EC::ECPoint*& __cordl_internal_get_m_mappedPoint();

  constexpr ::cordl_internals::to_const_pointer<::Org::BouncyCastle::Math::EC::ECPoint*> const& __cordl_internal_get_m_mappedPoint() const;

  constexpr void __cordl_internal_set_m_endomorphism(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* value);

  constexpr void __cordl_internal_set_m_mappedPoint(::Org::BouncyCastle::Math::EC::ECPoint* value);

  /// @brief Method .ctor, addr 0x2481788, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Endomorphism, addr 0x2481768, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* get_Endomorphism();

  /// @brief Method get_MappedPoint, addr 0x2481778, size 0x8, virtual true, abstract: false, final false
  inline ::Org::BouncyCastle::Math::EC::ECPoint* get_MappedPoint();

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo"
  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* i___Org__BouncyCastle__Math__EC__Multiplier__PreCompInfo() noexcept;

  /// @brief Method set_Endomorphism, addr 0x2481770, size 0x8, virtual true, abstract: false, final false
  inline void set_Endomorphism(::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* value);

  /// @brief Method set_MappedPoint, addr 0x2481780, size 0x8, virtual true, abstract: false, final false
  inline void set_MappedPoint(::Org::BouncyCastle::Math::EC::ECPoint* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EndoPreCompInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "EndoPreCompInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EndoPreCompInfo(EndoPreCompInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EndoPreCompInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EndoPreCompInfo(EndoPreCompInfo const&) = delete;

  /// @brief Field m_endomorphism, offset: 0x10, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::Endo::ECEndomorphism* ___m_endomorphism;

  /// @brief Field m_mappedPoint, offset: 0x18, size: 0x8, def value: None
  ::Org::BouncyCastle::Math::EC::ECPoint* ___m_mappedPoint;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1517 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo, ___m_endomorphism) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo, ___m_mappedPoint) == 0x18, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Endo
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Endo::EndoPreCompInfo*, "Org.BouncyCastle.Math.EC.Endo", "EndoPreCompInfo");
