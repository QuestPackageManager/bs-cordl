#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(StyleProperty)
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleProperty;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::StyleProperty);
// Type: UnityEngine.UIElements::StyleProperty
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 42, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::StyleProperty*
class CORDL_TYPE StyleProperty : public ::System::Object {
public:
  // Declarations
  /// @brief Field isCustomProperty, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_isCustomProperty, put = __cordl_internal_set_isCustomProperty)) bool isCustomProperty;

  /// @brief Field m_Line, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Line, put = __cordl_internal_set_m_Line)) int32_t m_Line;

  /// @brief Field m_Name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Name, put = __cordl_internal_set_m_Name))::StringW m_Name;

  /// @brief Field m_Values, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Values,
                      put = __cordl_internal_set_m_Values))::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> m_Values;

  __declspec(property(get = get_name))::StringW name;

  /// @brief Field requireVariableResolve, offset 0x29, size 0x1
  __declspec(property(get = __cordl_internal_get_requireVariableResolve, put = __cordl_internal_set_requireVariableResolve)) bool requireVariableResolve;

  __declspec(property(get = get_values))::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> values;

  static inline ::UnityEngine::UIElements::StyleProperty* New_ctor();

  constexpr bool const& __cordl_internal_get_isCustomProperty() const;

  constexpr bool& __cordl_internal_get_isCustomProperty();

  constexpr int32_t const& __cordl_internal_get_m_Line() const;

  constexpr int32_t& __cordl_internal_get_m_Line();

  constexpr ::StringW const& __cordl_internal_get_m_Name() const;

  constexpr ::StringW& __cordl_internal_get_m_Name();

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> const& __cordl_internal_get_m_Values() const;

  constexpr ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*>& __cordl_internal_get_m_Values();

  constexpr bool const& __cordl_internal_get_requireVariableResolve() const;

  constexpr bool& __cordl_internal_get_requireVariableResolve();

  constexpr void __cordl_internal_set_isCustomProperty(bool value);

  constexpr void __cordl_internal_set_m_Line(int32_t value);

  constexpr void __cordl_internal_set_m_Name(::StringW value);

  constexpr void __cordl_internal_set_m_Values(::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> value);

  constexpr void __cordl_internal_set_requireVariableResolve(bool value);

  /// @brief Method .ctor, addr 0x35be81c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_name, addr 0x35be80c, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_name();

  /// @brief Method get_values, addr 0x35be814, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> get_values();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StyleProperty();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StyleProperty", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StyleProperty(StyleProperty&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StyleProperty", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StyleProperty(StyleProperty const&) = delete;

  /// @brief Field m_Name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___m_Name;

  /// @brief Field m_Line, offset: 0x18, size: 0x4, def value: None
  int32_t ___m_Line;

  /// @brief Field m_Values, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::UIElements::StyleValueHandle, ::Array<::UnityEngine::UIElements::StyleValueHandle>*> ___m_Values;

  /// @brief Field isCustomProperty, offset: 0x28, size: 0x1, def value: None
  bool ___isCustomProperty;

  /// @brief Field requireVariableResolve, offset: 0x29, size: 0x1, def value: None
  bool ___requireVariableResolve;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::StyleProperty, 0x30>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleProperty, ___m_Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleProperty, ___m_Line) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleProperty, ___m_Values) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleProperty, ___isCustomProperty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::StyleProperty, ___requireVariableResolve) == 0x29, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::StyleProperty);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleProperty*, "UnityEngine.UIElements", "StyleProperty");
