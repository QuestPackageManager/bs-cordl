#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ColorPalette)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace UnityEngine::ProBuilder {
class IHasDefault;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ColorPalette;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::ColorPalette);
// Type: UnityEngine.ProBuilder::ColorPalette
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::ProBuilder {
// Is value type: false
// CS Name: ::UnityEngine.ProBuilder::ColorPalette*
class CORDL_TYPE ColorPalette : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  __declspec(property(get = get_Count)) int32_t Count;

  __declspec(property(get = get_Item, put = set_Item))::UnityEngine::Color Item[];

  /// @brief Field <current>k__BackingField, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get__current_k__BackingField, put = __cordl_internal_set__current_k__BackingField))::UnityEngine::Color _current_k__BackingField;

  __declspec(property(get = get_colors))::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Color>* colors;

  __declspec(property(get = get_current, put = set_current))::UnityEngine::Color current;

  /// @brief Field m_Colors, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Colors, put = __cordl_internal_set_m_Colors))::System::Collections::Generic::List_1<::UnityEngine::Color>* m_Colors;

  /// @brief Convert operator to "::UnityEngine::ProBuilder::IHasDefault"
  constexpr operator ::UnityEngine::ProBuilder::IHasDefault*() noexcept;

  static inline ::UnityEngine::ProBuilder::ColorPalette* New_ctor();

  /// @brief Method SetColors, addr 0x2c224c4, size 0xa4, virtual false, abstract: false, final false
  inline void SetColors(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Color>* colors);

  /// @brief Method SetDefaultValues, addr 0x2c22568, size 0x7c8, virtual true, abstract: false, final true
  inline void SetDefaultValues();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__current_k__BackingField() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__current_k__BackingField();

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>*& __cordl_internal_get_m_Colors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Color>*> const& __cordl_internal_get_m_Colors() const;

  constexpr void __cordl_internal_set__current_k__BackingField(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_m_Colors(::System::Collections::Generic::List_1<::UnityEngine::Color>* value);

  /// @brief Method .ctor, addr 0x2c22e58, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Count, addr 0x2c22e10, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_Count();

  /// @brief Method get_Item, addr 0x2c22d30, size 0x58, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_Item(int32_t i);

  /// @brief Method get_colors, addr 0x2c22448, size 0x7c, virtual false, abstract: false, final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Color>* get_colors();

  /// @brief Method get_current, addr 0x2c22430, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_current();

  /// @brief Convert to "::UnityEngine::ProBuilder::IHasDefault"
  constexpr ::UnityEngine::ProBuilder::IHasDefault* i___UnityEngine__ProBuilder__IHasDefault() noexcept;

  /// @brief Method set_Item, addr 0x2c22d88, size 0x88, virtual false, abstract: false, final false
  inline void set_Item(int32_t i, ::UnityEngine::Color value);

  /// @brief Method set_current, addr 0x2c2243c, size 0xc, virtual false, abstract: false, final false
  inline void set_current(::UnityEngine::Color value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorPalette();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ColorPalette", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorPalette(ColorPalette&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorPalette", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorPalette(ColorPalette const&) = delete;

  /// @brief Field <current>k__BackingField, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Color ____current_k__BackingField;

  /// @brief Field m_Colors, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::Color>* ___m_Colors;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::ColorPalette, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ColorPalette, ____current_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::ProBuilder::ColorPalette, ___m_Colors) == 0x28, "Offset mismatch!");

} // namespace UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::ColorPalette);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::ColorPalette*, "UnityEngine.ProBuilder", "ColorPalette");
