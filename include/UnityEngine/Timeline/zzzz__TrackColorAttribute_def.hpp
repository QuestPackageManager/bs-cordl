#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Attribute_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TrackColorAttribute)
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::Timeline {
class TrackColorAttribute;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Timeline::TrackColorAttribute);
// Type: UnityEngine.Timeline::TrackColorAttribute
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Timeline {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(2547))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13864))
// CS Name: ::UnityEngine.Timeline::TrackColorAttribute*
class CORDL_TYPE TrackColorAttribute : public ::System::Attribute {
public:
  // Declarations
  /// @brief Field m_Color, offset 0x10, size 0x10
  __declspec(property(get = __get_m_Color, put = __set_m_Color))::UnityEngine::Color m_Color;

  __declspec(property(get = get_color))::UnityEngine::Color color;

  constexpr ::UnityEngine::Color& __get_m_Color();

  constexpr ::UnityEngine::Color const& __get_m_Color() const;

  constexpr void __set_m_Color(::UnityEngine::Color value);

  /// @brief Method get_color, addr 0x2c61a70, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  static inline ::UnityEngine::Timeline::TrackColorAttribute* New_ctor(float_t r, float_t g, float_t b);

  /// @brief Method .ctor, addr 0x2c61a7c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(float_t r, float_t g, float_t b);

  // Ctor Parameters [CppParam { name: "", ty: "TrackColorAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TrackColorAttribute(TrackColorAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TrackColorAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TrackColorAttribute(TrackColorAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TrackColorAttribute();

public:
  /// @brief Field m_Color, offset: 0x10, size: 0x10, def value: None
  ::UnityEngine::Color ___m_Color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Timeline::TrackColorAttribute, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Timeline::TrackColorAttribute, ___m_Color) == 0x10, "Offset mismatch!");

} // namespace UnityEngine::Timeline
NEED_NO_BOX(::UnityEngine::Timeline::TrackColorAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Timeline::TrackColorAttribute*, "UnityEngine.Timeline", "TrackColorAttribute");
