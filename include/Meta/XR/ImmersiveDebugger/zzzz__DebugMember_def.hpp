#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/DebugMember.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugGizmoType_def.hpp"
#include "UnityEngine/Scripting/zzzz__PreserveAttribute_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DebugMember)
namespace Meta::XR::ImmersiveDebugger {
struct DebugColor;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger {
class DebugMember;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::DebugMember);
// Dependencies Meta.XR.ImmersiveDebugger.DebugGizmoType, UnityEngine.Color, UnityEngine.Scripting.PreserveAttribute
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.DebugMember
class CORDL_TYPE DebugMember : public ::UnityEngine::Scripting::PreserveAttribute {
public:
  // Declarations
  /// @brief Field Category, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Category, put = __cordl_internal_set_Category)) ::StringW Category;

  /// @brief Field Color, offset 0x18, size 0x10
  __declspec(property(get = __cordl_internal_get_Color, put = __cordl_internal_set_Color)) ::UnityEngine::Color Color;

  /// @brief Field Description, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_Description, put = __cordl_internal_set_Description)) ::StringW Description;

  /// @brief Field DisplayName, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_DisplayName, put = __cordl_internal_set_DisplayName)) ::StringW DisplayName;

  /// @brief Field GizmoType, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_GizmoType, put = __cordl_internal_set_GizmoType)) ::Meta::XR::ImmersiveDebugger::DebugGizmoType GizmoType;

  /// @brief Field Max, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get_Max, put = __cordl_internal_set_Max)) float_t Max;

  /// @brief Field Min, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_Min, put = __cordl_internal_set_Min)) float_t Min;

  /// @brief Field ParsedColors, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_ParsedColors,
                      put = setStaticF_ParsedColors)) ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::DebugColor, ::UnityEngine::Color>* ParsedColors;

  /// @brief Field ShowGizmoByDefault, offset 0x14, size 0x1
  __declspec(property(get = __cordl_internal_get_ShowGizmoByDefault, put = __cordl_internal_set_ShowGizmoByDefault)) bool ShowGizmoByDefault;

  /// @brief Field Tweakable, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_Tweakable, put = __cordl_internal_set_Tweakable)) bool Tweakable;

  static inline ::Meta::XR::ImmersiveDebugger::DebugMember* New_ctor(::Meta::XR::ImmersiveDebugger::DebugColor color);

  static inline ::Meta::XR::ImmersiveDebugger::DebugMember* New_ctor(::StringW colorString);

  constexpr ::StringW const& __cordl_internal_get_Category() const;

  constexpr ::StringW& __cordl_internal_get_Category();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_Color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_Color();

  constexpr ::StringW const& __cordl_internal_get_Description() const;

  constexpr ::StringW& __cordl_internal_get_Description();

  constexpr ::StringW const& __cordl_internal_get_DisplayName() const;

  constexpr ::StringW& __cordl_internal_get_DisplayName();

  constexpr ::Meta::XR::ImmersiveDebugger::DebugGizmoType const& __cordl_internal_get_GizmoType() const;

  constexpr ::Meta::XR::ImmersiveDebugger::DebugGizmoType& __cordl_internal_get_GizmoType();

  constexpr float_t const& __cordl_internal_get_Max() const;

  constexpr float_t& __cordl_internal_get_Max();

  constexpr float_t const& __cordl_internal_get_Min() const;

  constexpr float_t& __cordl_internal_get_Min();

  constexpr bool const& __cordl_internal_get_ShowGizmoByDefault() const;

  constexpr bool& __cordl_internal_get_ShowGizmoByDefault();

  constexpr bool const& __cordl_internal_get_Tweakable() const;

  constexpr bool& __cordl_internal_get_Tweakable();

  constexpr void __cordl_internal_set_Category(::StringW value);

  constexpr void __cordl_internal_set_Color(::UnityEngine::Color value);

  constexpr void __cordl_internal_set_Description(::StringW value);

  constexpr void __cordl_internal_set_DisplayName(::StringW value);

  constexpr void __cordl_internal_set_GizmoType(::Meta::XR::ImmersiveDebugger::DebugGizmoType value);

  constexpr void __cordl_internal_set_Max(float_t value);

  constexpr void __cordl_internal_set_Min(float_t value);

  constexpr void __cordl_internal_set_ShowGizmoByDefault(bool value);

  constexpr void __cordl_internal_set_Tweakable(bool value);

  /// @brief Method .ctor, addr 0x58a99c4, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::Meta::XR::ImmersiveDebugger::DebugColor color);

  /// @brief Method .ctor, addr 0x58a9a78, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::StringW colorString);

  static inline ::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::DebugColor, ::UnityEngine::Color>* getStaticF_ParsedColors();

  static inline void setStaticF_ParsedColors(::System::Collections::Generic::Dictionary_2<::Meta::XR::ImmersiveDebugger::DebugColor, ::UnityEngine::Color>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugMember();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugMember", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugMember(DebugMember&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugMember", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugMember(DebugMember const&) = delete;

  /// @brief Field DisplayNameTooltip offset 0xffffffff size 0x8
  static constexpr ::ConstString DisplayNameTooltip{ u"Optional name override to be used in the Inspector Panel" };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23215 };

  /// @brief Field GizmoType, offset: 0x10, size: 0x4, def value: None
  ::Meta::XR::ImmersiveDebugger::DebugGizmoType ___GizmoType;

  /// @brief Field ShowGizmoByDefault, offset: 0x14, size: 0x1, def value: None
  bool ___ShowGizmoByDefault;

  /// @brief Field Color, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Color ___Color;

  /// @brief Field Tweakable, offset: 0x28, size: 0x1, def value: None
  bool ___Tweakable;

  /// @brief Field Min, offset: 0x2c, size: 0x4, def value: None
  float_t ___Min;

  /// @brief Field Max, offset: 0x30, size: 0x4, def value: None
  float_t ___Max;

  /// @brief Field Category, offset: 0x38, size: 0x8, def value: None
  ::StringW ___Category;

  /// @brief Field Description, offset: 0x40, size: 0x8, def value: None
  ::StringW ___Description;

  /// @brief Field DisplayName, offset: 0x48, size: 0x8, def value: None
  ::StringW ___DisplayName;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::DebugMember, ___GizmoType) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::DebugMember, ___ShowGizmoByDefault) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::DebugMember, ___Color) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::DebugMember, ___Tweakable) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::DebugMember, ___Min) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::DebugMember, ___Max) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::DebugMember, ___Category) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::DebugMember, ___Description) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::DebugMember, ___DisplayName) == 0x48, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::DebugMember, 0x50>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::DebugMember);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::DebugMember*, "Meta.XR.ImmersiveDebugger", "DebugMember");
