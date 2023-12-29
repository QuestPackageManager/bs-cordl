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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12139))
// CS Name: ::UnityEngine.ProBuilder::UnwrapParameters*
class CORDL_TYPE UnwrapParameters : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_HardAngle, offset 0x10, size 0x4
  __declspec(property(get = __get_m_HardAngle, put = __set_m_HardAngle)) float_t m_HardAngle;

  /// @brief Field m_PackMargin, offset 0x14, size 0x4
  __declspec(property(get = __get_m_PackMargin, put = __set_m_PackMargin)) float_t m_PackMargin;

  /// @brief Field m_AngleError, offset 0x18, size 0x4
  __declspec(property(get = __get_m_AngleError, put = __set_m_AngleError)) float_t m_AngleError;

  /// @brief Field m_AreaError, offset 0x1c, size 0x4
  __declspec(property(get = __get_m_AreaError, put = __set_m_AreaError)) float_t m_AreaError;

  __declspec(property(get = get_hardAngle, put = set_hardAngle)) float_t hardAngle;

  __declspec(property(get = get_packMargin, put = set_packMargin)) float_t packMargin;

  __declspec(property(get = get_angleError, put = set_angleError)) float_t angleError;

  __declspec(property(get = get_areaError, put = set_areaError)) float_t areaError;

  constexpr float_t& __get_m_HardAngle();

  constexpr float_t const& __get_m_HardAngle() const;

  constexpr void __set_m_HardAngle(float_t value);

  constexpr float_t& __get_m_PackMargin();

  constexpr float_t const& __get_m_PackMargin() const;

  constexpr void __set_m_PackMargin(float_t value);

  constexpr float_t& __get_m_AngleError();

  constexpr float_t const& __get_m_AngleError() const;

  constexpr void __set_m_AngleError(float_t value);

  constexpr float_t& __get_m_AreaError();

  constexpr float_t const& __get_m_AreaError() const;

  constexpr void __set_m_AreaError(float_t value);

  /// @brief Method get_hardAngle addr 0x29fc294 size 0x8 virtual false final false
  inline float_t get_hardAngle();

  /// @brief Method set_hardAngle addr 0x29fc29c size 0x8 virtual false final false
  inline void set_hardAngle(float_t value);

  /// @brief Method get_packMargin addr 0x29fc2a4 size 0x8 virtual false final false
  inline float_t get_packMargin();

  /// @brief Method set_packMargin addr 0x29fc2ac size 0x8 virtual false final false
  inline void set_packMargin(float_t value);

  /// @brief Method get_angleError addr 0x29fc2b4 size 0x8 virtual false final false
  inline float_t get_angleError();

  /// @brief Method set_angleError addr 0x29fc2bc size 0x8 virtual false final false
  inline void set_angleError(float_t value);

  /// @brief Method get_areaError addr 0x29fc2c4 size 0x8 virtual false final false
  inline float_t get_areaError();

  /// @brief Method set_areaError addr 0x29fc2cc size 0x8 virtual false final false
  inline void set_areaError(float_t value);

  static inline ::UnityEngine::ProBuilder::UnwrapParameters* New_ctor();

  /// @brief Method .ctor addr 0x29f49e0 size 0x38 virtual false final false
  inline void _ctor();

  static inline ::UnityEngine::ProBuilder::UnwrapParameters* New_ctor(::UnityEngine::ProBuilder::UnwrapParameters* other);

  /// @brief Method .ctor addr 0x29fc2e4 size 0x88 virtual false final false
  inline void _ctor(::UnityEngine::ProBuilder::UnwrapParameters* other);

  /// @brief Method Reset addr 0x29fc2d4 size 0x10 virtual false final false
  inline void Reset();

  /// @brief Method ToString addr 0x29fc36c size 0x1ac virtual true final false
  inline ::StringW ToString();

  // Ctor Parameters [CppParam { name: "", ty: "UnwrapParameters", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UnwrapParameters(UnwrapParameters&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UnwrapParameters", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UnwrapParameters(UnwrapParameters const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UnwrapParameters();

public:
  /// @brief Field m_HardAngle, offset: 0x10, size: 0x4, def value: None
  float_t ___m_HardAngle;

  /// @brief Field m_PackMargin, offset: 0x14, size: 0x4, def value: None
  float_t ___m_PackMargin;

  /// @brief Field m_AngleError, offset: 0x18, size: 0x4, def value: None
  float_t ___m_AngleError;

  /// @brief Field m_AreaError, offset: 0x1c, size: 0x4, def value: None
  float_t ___m_AreaError;

  /// @brief Field k_HardAngle offset 0xffffffff size 0x4
  static constexpr float_t k_HardAngle{ 88.0 };

  /// @brief Field k_PackMargin offset 0xffffffff size 0x4
  static constexpr float_t k_PackMargin{ 20.0 };

  /// @brief Field k_AngleError offset 0xffffffff size 0x4
  static constexpr float_t k_AngleError{ 8.0 };

  /// @brief Field k_AreaError offset 0xffffffff size 0x4
  static constexpr float_t k_AreaError{ 15.0 };

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
