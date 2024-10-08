#pragma once
// IWYU pragma private; include "Org/BouncyCastle/Math/EC/Multiplier/ValidityPreCompInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ValidityPreCompInfo)
namespace Org::BouncyCastle::Math::EC::Multiplier {
class PreCompInfo;
}
// Forward declare root types
namespace Org::BouncyCastle::Math::EC::Multiplier {
class ValidityPreCompInfo;
}
// Write type traits
MARK_REF_PTR_T(::Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo);
// Type: Org.BouncyCastle.Math.EC.Multiplier::ValidityPreCompInfo
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 19, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Org::BouncyCastle::Math::EC::Multiplier {
// Is value type: false
// CS Name: ::Org.BouncyCastle.Math.EC.Multiplier::ValidityPreCompInfo*
class CORDL_TYPE ValidityPreCompInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field PRECOMP_NAME, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_PRECOMP_NAME, put = setStaticF_PRECOMP_NAME)) ::StringW PRECOMP_NAME;

  /// @brief Field curveEquationPassed, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_curveEquationPassed, put = __cordl_internal_set_curveEquationPassed)) bool curveEquationPassed;

  /// @brief Field failed, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_failed, put = __cordl_internal_set_failed)) bool failed;

  /// @brief Field orderPassed, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_orderPassed, put = __cordl_internal_set_orderPassed)) bool orderPassed;

  /// @brief Convert operator to "::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo"
  constexpr operator ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo*() noexcept;

  /// @brief Method HasCurveEquationPassed, addr 0x24790b4, size 0x8, virtual false, abstract: false, final false
  inline bool HasCurveEquationPassed();

  /// @brief Method HasFailed, addr 0x24790a0, size 0x8, virtual false, abstract: false, final false
  inline bool HasFailed();

  /// @brief Method HasOrderPassed, addr 0x24790c8, size 0x8, virtual false, abstract: false, final false
  inline bool HasOrderPassed();

  static inline ::Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo* New_ctor();

  /// @brief Method ReportCurveEquationPassed, addr 0x24790bc, size 0xc, virtual false, abstract: false, final false
  inline void ReportCurveEquationPassed();

  /// @brief Method ReportFailed, addr 0x24790a8, size 0xc, virtual false, abstract: false, final false
  inline void ReportFailed();

  /// @brief Method ReportOrderPassed, addr 0x24790d0, size 0xc, virtual false, abstract: false, final false
  inline void ReportOrderPassed();

  constexpr bool const& __cordl_internal_get_curveEquationPassed() const;

  constexpr bool& __cordl_internal_get_curveEquationPassed();

  constexpr bool const& __cordl_internal_get_failed() const;

  constexpr bool& __cordl_internal_get_failed();

  constexpr bool const& __cordl_internal_get_orderPassed() const;

  constexpr bool& __cordl_internal_get_orderPassed();

  constexpr void __cordl_internal_set_curveEquationPassed(bool value);

  constexpr void __cordl_internal_set_failed(bool value);

  constexpr void __cordl_internal_set_orderPassed(bool value);

  /// @brief Method .ctor, addr 0x247913c, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::StringW getStaticF_PRECOMP_NAME();

  /// @brief Convert to "::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo"
  constexpr ::Org::BouncyCastle::Math::EC::Multiplier::PreCompInfo* i___Org__BouncyCastle__Math__EC__Multiplier__PreCompInfo() noexcept;

  static inline void setStaticF_PRECOMP_NAME(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ValidityPreCompInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ValidityPreCompInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ValidityPreCompInfo(ValidityPreCompInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ValidityPreCompInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ValidityPreCompInfo(ValidityPreCompInfo const&) = delete;

  /// @brief Field failed, offset: 0x10, size: 0x1, def value: None
  bool ___failed;

  /// @brief Field curveEquationPassed, offset: 0x11, size: 0x1, def value: None
  bool ___curveEquationPassed;

  /// @brief Field orderPassed, offset: 0x12, size: 0x1, def value: None
  bool ___orderPassed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 1539 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo, 0x18>, "Size mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo, ___failed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo, ___curveEquationPassed) == 0x11, "Offset mismatch!");

static_assert(offsetof(::Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo, ___orderPassed) == 0x12, "Offset mismatch!");

} // namespace Org::BouncyCastle::Math::EC::Multiplier
NEED_NO_BOX(::Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo);
DEFINE_IL2CPP_ARG_TYPE(::Org::BouncyCastle::Math::EC::Multiplier::ValidityPreCompInfo*, "Org.BouncyCastle.Math.EC.Multiplier", "ValidityPreCompInfo");
