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
namespace System::Collections::ObjectModel {
template <typename T> class ReadOnlyCollection_1;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::ProBuilder {
class IHasDefault;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10178)), TypeDefinitionIndex(TypeDefinitionIndex(10137))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12040))
// CS Name: ::UnityEngine.ProBuilder::ColorPalette*
class CORDL_TYPE ColorPalette : public ::UnityEngine::ScriptableObject {
public:
  // Declarations
  /// @brief Field <current>k__BackingField, offset 0x18, size 0x10
  __declspec(property(get = __get__current_k__BackingField, put = __set__current_k__BackingField))::UnityEngine::Color _current_k__BackingField;

  /// @brief Field m_Colors, offset 0x28, size 0x8
  __declspec(property(get = __get_m_Colors, put = __set_m_Colors))::System::Collections::Generic::List_1<::UnityEngine::Color>* m_Colors;

  __declspec(property(get = get_current, put = set_current))::UnityEngine::Color current;

  __declspec(property(get = get_colors))::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Color>* colors;

  __declspec(property(get = get_Item, put = set_Item))::UnityEngine::Color Item[];

  __declspec(property(get = get_Count)) int32_t Count;

  /// @brief Convert operator to "::UnityEngine::ProBuilder::IHasDefault"
  constexpr operator ::UnityEngine::ProBuilder::IHasDefault*() noexcept;

  constexpr ::UnityEngine::Color& __get__current_k__BackingField();

  constexpr ::UnityEngine::Color const& __get__current_k__BackingField() const;

  constexpr void __set__current_k__BackingField(::UnityEngine::Color value);

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::Color>*& __get_m_Colors();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::Color>*> const& __get_m_Colors() const;

  constexpr void __set_m_Colors(::System::Collections::Generic::List_1<::UnityEngine::Color>* value);

  /// @brief Method get_current addr 0x29baa9c size 0xc virtual false final false
  inline ::UnityEngine::Color get_current();

  /// @brief Method set_current addr 0x29baaa8 size 0xc virtual false final false
  inline void set_current(::UnityEngine::Color value);

  /// @brief Method get_colors addr 0x29baab4 size 0x7c virtual false final false
  inline ::System::Collections::ObjectModel::ReadOnlyCollection_1<::UnityEngine::Color>* get_colors();

  /// @brief Method SetColors addr 0x29bab30 size 0xa4 virtual false final false
  inline void SetColors(::System::Collections::Generic::IEnumerable_1<::UnityEngine::Color>* colors);

  /// @brief Method SetDefaultValues addr 0x29babd4 size 0x7c8 virtual true final true
  inline void SetDefaultValues();

  /// @brief Method get_Item addr 0x29bb39c size 0x58 virtual false final false
  inline ::UnityEngine::Color get_Item(int32_t i);

  /// @brief Method set_Item addr 0x29bb3f4 size 0x88 virtual false final false
  inline void set_Item(int32_t i, ::UnityEngine::Color value);

  /// @brief Method get_Count addr 0x29bb47c size 0x48 virtual false final false
  inline int32_t get_Count();

  static inline ::UnityEngine::ProBuilder::ColorPalette* New_ctor();

  /// @brief Method .ctor addr 0x29bb4c4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "ColorPalette", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ColorPalette(ColorPalette&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ColorPalette", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ColorPalette(ColorPalette const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorPalette();

public:
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
