#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IntersectionMaskCircle_t_def.hpp"
#include "OVR/OpenVR/zzzz__IntersectionMaskRectangle_t_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VROverlayIntersectionMaskPrimitive_Data_t)
namespace OVR::OpenVR {
struct IntersectionMaskRectangle_t;
}
namespace OVR::OpenVR {
struct IntersectionMaskCircle_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VROverlayIntersectionMaskPrimitive_Data_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t);
// Type: OVR.OpenVR::VROverlayIntersectionMaskPrimitive_Data_t
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 1, natural_alignment: 4, packing: Some(1), specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8708)), TypeDefinitionIndex(TypeDefinitionIndex(8709))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8643))
// CS Name: ::OVR.OpenVR::VROverlayIntersectionMaskPrimitive_Data_t
struct CORDL_TYPE VROverlayIntersectionMaskPrimitive_Data_t {
public:
  // Declarations
  /// @brief Field m_Rectangle, offset 0x0, size 0x10
  __declspec(property(get = __get_m_Rectangle, put = __set_m_Rectangle))::OVR::OpenVR::IntersectionMaskRectangle_t m_Rectangle;

  /// @brief Field m_Circle, offset 0x0, size 0xc
  __declspec(property(get = __get_m_Circle, put = __set_m_Circle))::OVR::OpenVR::IntersectionMaskCircle_t m_Circle;

  constexpr ::OVR::OpenVR::IntersectionMaskRectangle_t& __get_m_Rectangle();

  constexpr ::OVR::OpenVR::IntersectionMaskRectangle_t const& __get_m_Rectangle() const;

  constexpr void __set_m_Rectangle(::OVR::OpenVR::IntersectionMaskRectangle_t value);

  constexpr ::OVR::OpenVR::IntersectionMaskCircle_t& __get_m_Circle();

  constexpr ::OVR::OpenVR::IntersectionMaskCircle_t const& __get_m_Circle() const;

  constexpr void __set_m_Circle(::OVR::OpenVR::IntersectionMaskCircle_t value);

  // Ctor Parameters [CppParam { name: "m_Rectangle", ty: "::OVR::OpenVR::IntersectionMaskRectangle_t", modifiers: "", def_value: None }, CppParam { name: "m_Circle", ty:
  // "::OVR::OpenVR::IntersectionMaskCircle_t", modifiers: "", def_value: None }]
  constexpr VROverlayIntersectionMaskPrimitive_Data_t(::OVR::OpenVR::IntersectionMaskRectangle_t m_Rectangle, ::OVR::OpenVR::IntersectionMaskCircle_t m_Circle) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VROverlayIntersectionMaskPrimitive_Data_t();

private:
  /// @brief Explicitly laid out type with union based offsets
  union {
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___m_Rectangle_padding[0x0];
      /// @brief Field m_Rectangle, offset: 0x0, size: 0x10, def value: None
      ::OVR::OpenVR::IntersectionMaskRectangle_t ___m_Rectangle;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___m_Rectangle_padding_forAlignment[0x0];
      /// @brief Field m_Rectangle, offset: 0x0, size: 0x10, def value: None
      ::OVR::OpenVR::IntersectionMaskRectangle_t ___m_Rectangle_forAlignment;
    };
#pragma pack(push, tp, 1)
    struct {
      /// @brief Padding field 0x0
      uint8_t ___m_Circle_padding[0x0];
      /// @brief Field m_Circle, offset: 0x0, size: 0xc, def value: None
      ::OVR::OpenVR::IntersectionMaskCircle_t ___m_Circle;
    };
#pragma pack(pop, tp)
    struct {
      /// @brief Padding field 0x0 for alignment
      uint8_t ___m_Circle_padding_forAlignment[0x0];
      /// @brief Field m_Circle, offset: 0x0, size: 0xc, def value: None
      ::OVR::OpenVR::IntersectionMaskCircle_t ___m_Circle_forAlignment;
    };
  };

public:
  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t, 0x10>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t, "OVR.OpenVR", "VROverlayIntersectionMaskPrimitive_Data_t");
