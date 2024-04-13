#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UnwrapParameters)
// Forward declare root types
namespace UnityEngine::ProBuilder {
class UnwrapParameters;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::UnwrapParameters);
// Type: UnityEngine.ProBuilder::UnwrapParameters
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder::UnwrapParameters*
class CORDL_TYPE UnwrapParameters : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_angleError, put = set_angleError)) float_t angleError;

  __declspec(property(get = get_areaError, put = set_areaError)) float_t areaError;

  __declspec(property(get = get_hardAngle, put = set_hardAngle)) float_t hardAngle;

  /// @brief Field m_AngleError, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AngleError, put = __cordl_internal_set_m_AngleError)) float_t m_AngleError;

  /// @brief Field m_AreaError, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AreaError, put = __cordl_internal_set_m_AreaError)) float_t m_AreaError;

  /// @brief Field m_HardAngle, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_m_HardAngle, put = __cordl_internal_set_m_HardAngle)) float_t m_HardAngle;

  /// @brief Field m_PackMargin, offset 0x14, size 0x4
  __declspec(property(get = __cordl_internal_get_m_PackMargin, put = __cordl_internal_set_m_PackMargin)) float_t m_PackMargin;

  __declspec(property(get = get_packMargin, put = set_packMargin)) float_t packMargin;

  static inline ::UnityEngine::ProBuilder::UnwrapParameters* New_ctor();

  static inline ::UnityEngine::ProBuilder::UnwrapParameters* New_ctor(::UnityEngine::ProBuilder::UnwrapParameters* other);

  /// @brief Method Reset, addr 0x30ad94c, size 0x10, virtual false, abstract: false, final false
  inline void Reset();

  /// @brief Method ToString, addr 0x30ad9e4, size 0x1ac, virtual true, abstract: false, final false
  inline ::StringW ToString();

  constexpr float_t const& __cordl_internal_get_m_AngleError() const;

  constexpr float_t& __cordl_internal_get_m_AngleError();

  constexpr float_t const& __cordl_internal_get_m_AreaError() const;

  constexpr float_t& __cordl_internal_get_m_AreaError();

  constexpr float_t const& __cordl_internal_get_m_HardAngle() const;

  constexpr float_t& __cordl_internal_get_m_HardAngle();

  constexpr float_t const& __cordl_internal_get_m_PackMargin() const;

  constexpr float_t& __cordl_internal_get_m_PackMargin();

  constexpr void __cordl_internal_set_m_AngleError(float_t value);

  constexpr void __cordl_internal_set_m_AreaError(float_t value);

  constexpr void __cordl_internal_set_m_HardAngle(float_t value);

  constexpr void __cordl_internal_set_m_PackMargin(float_t value);

  /// @brief Method .ctor, addr 0x30a6058, size 0x38, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x30ad95c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::ProBuilder::UnwrapParameters* other);

  /// @brief Method get_angleError, addr 0x30ad92c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_angleError();

  /// @brief Method get_areaError, addr 0x30ad93c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_areaError();

  /// @brief Method get_hardAngle, addr 0x30ad90c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_hardAngle();

  /// @brief Method get_packMargin, addr 0x30ad91c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_packMargin();

  /// @brief Method set_angleError, addr 0x30ad934, size 0x8, virtual false, abstract: false, final false
  inline void set_angleError(float_t value);

  /// @brief Method set_areaError, addr 0x30ad944, size 0x8, virtual false, abstract: false, final false
  inline void set_areaError(float_t value);

  /// @brief Method set_hardAngle, addr 0x30ad914, size 0x8, virtual false, abstract: false, final false
  inline void set_hardAngle(float_t value);

  /// @brief Method set_packMargin, addr 0x30ad924, size 0x8, virtual false, abstract: false, final false
  inline void set_packMargin(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnwrapParameters();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UnwrapParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnwrapParameters(UnwrapParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnwrapParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnwrapParameters(UnwrapParameters const&) = delete;

  /// @brief Field m_HardAngle, offset: 0x10, size: 0x4, def value: None
  float_t ___m_HardAngle;

  /// @brief Field m_PackMargin, offset: 0x14, size: 0x4, def value: None
  float_t ___m_PackMargin;

  /// @brief Field m_AngleError, offset: 0x18, size: 0x4, def value: None
  float_t ___m_AngleError;

  /// @brief Field m_AreaError, offset: 0x1c, size: 0x4, def value: None
  float_t ___m_AreaError;

  /// @brief Field k_AngleError offset 0xffffffff size 0x4
  static constexpr float_t k_AngleError{ 8.0 };

  /// @brief Field k_AreaError offset 0xffffffff size 0x4
  static constexpr float_t k_AreaError{ 15.0 };

  /// @brief Field k_HardAngle offset 0xffffffff size 0x4
  static constexpr float_t k_HardAngle{ 88.0 };

  /// @brief Field k_PackMargin offset 0xffffffff size 0x4
  static constexpr float_t k_PackMargin{ 20.0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::UnwrapParameters, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::UnwrapParameters, ___m_HardAngle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::UnwrapParameters, ___m_PackMargin) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::UnwrapParameters, ___m_AngleError) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::UnwrapParameters, ___m_AreaError) == 0x1c, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::UnwrapParameters);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::UnwrapParameters*, "UnityEngine.ProBuilder", "UnwrapParameters");
