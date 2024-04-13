#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialPropertyBlockColorSetter)
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockColorSetter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyBlockColorSetter);
// Type: ::MaterialPropertyBlockColorSetter
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MaterialPropertyBlockColorSetter*
class CORDL_TYPE MaterialPropertyBlockColorSetter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _inverseAlpha, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__inverseAlpha, put = __cordl_internal_set__inverseAlpha)) bool _inverseAlpha;

  /// @brief Field _isInitialized, offset 0x48, size 0x1
  __declspec(property(get = __cordl_internal_get__isInitialized, put = __cordl_internal_set__isInitialized)) bool _isInitialized;

  /// @brief Field _materialPropertyBlockController, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockController,
                      put = __cordl_internal_set__materialPropertyBlockController))::UnityW<::GlobalNamespace::MaterialPropertyBlockController> _materialPropertyBlockController;

  /// @brief Field _multiplyWithAlpha, offset 0x41, size 0x1
  __declspec(property(get = __cordl_internal_get__multiplyWithAlpha, put = __cordl_internal_set__multiplyWithAlpha)) bool _multiplyWithAlpha;

  /// @brief Field _property, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__property, put = __cordl_internal_set__property))::StringW _property;

  /// @brief Field _propertyId, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__propertyId, put = __cordl_internal_set__propertyId)) int32_t _propertyId;

  /// @brief Field _testColor, offset 0x1c, size 0x10
  __declspec(property(get = __cordl_internal_get__testColor, put = __cordl_internal_set__testColor))::UnityEngine::Color _testColor;

  /// @brief Field _useTestColor, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get__useTestColor, put = __cordl_internal_set__useTestColor)) bool _useTestColor;

  __declspec(property(get = get_color))::UnityEngine::Color color;

  __declspec(property(get = get_materialPropertyBlockController,
                      put = set_materialPropertyBlockController))::UnityW<::GlobalNamespace::MaterialPropertyBlockController> materialPropertyBlockController;

  /// @brief Method AddNecessaryComponents, addr 0x23ff0ec, size 0xf0, virtual false, abstract: false, final false
  inline void AddNecessaryComponents();

  /// @brief Method Awake, addr 0x23fefa8, size 0x30, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method InitIfNeeded, addr 0x23fefd8, size 0x30, virtual false, abstract: false, final false
  inline void InitIfNeeded();

  static inline ::GlobalNamespace::MaterialPropertyBlockColorSetter* New_ctor();

  /// @brief Method OnValidate, addr 0x23ff0b4, size 0x38, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method SetColor, addr 0x23ff008, size 0xac, virtual false, abstract: false, final false
  inline void SetColor(::UnityEngine::Color color);

  constexpr bool const& __cordl_internal_get__inverseAlpha() const;

  constexpr bool& __cordl_internal_get__inverseAlpha();

  constexpr bool const& __cordl_internal_get__isInitialized() const;

  constexpr bool& __cordl_internal_get__isInitialized();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__materialPropertyBlockController() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__materialPropertyBlockController();

  constexpr bool const& __cordl_internal_get__multiplyWithAlpha() const;

  constexpr bool& __cordl_internal_get__multiplyWithAlpha();

  constexpr ::StringW const& __cordl_internal_get__property() const;

  constexpr ::StringW& __cordl_internal_get__property();

  constexpr int32_t const& __cordl_internal_get__propertyId() const;

  constexpr int32_t& __cordl_internal_get__propertyId();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__testColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__testColor();

  constexpr bool const& __cordl_internal_get__useTestColor() const;

  constexpr bool& __cordl_internal_get__useTestColor();

  constexpr void __cordl_internal_set__inverseAlpha(bool value);

  constexpr void __cordl_internal_set__isInitialized(bool value);

  constexpr void __cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr void __cordl_internal_set__multiplyWithAlpha(bool value);

  constexpr void __cordl_internal_set__property(::StringW value);

  constexpr void __cordl_internal_set__propertyId(int32_t value);

  constexpr void __cordl_internal_set__testColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__useTestColor(bool value);

  /// @brief Method .ctor, addr 0x23ff1dc, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_color, addr 0x23fef6c, size 0x2c, virtual false, abstract: false, final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_materialPropertyBlockController, addr 0x23fef98, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> get_materialPropertyBlockController();

  /// @brief Method set_materialPropertyBlockController, addr 0x23fefa0, size 0x8, virtual false, abstract: false, final false
  inline void set_materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlockColorSetter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockColorSetter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyBlockColorSetter(MaterialPropertyBlockColorSetter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockColorSetter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyBlockColorSetter(MaterialPropertyBlockColorSetter const&) = delete;

  /// @brief Field _useTestColor, offset: 0x18, size: 0x1, def value: None
  bool ____useTestColor;

  /// @brief Field _testColor, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Color ____testColor;

  /// @brief Field _property, offset: 0x30, size: 0x8, def value: None
  ::StringW ____property;

  /// @brief Field _materialPropertyBlockController, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____materialPropertyBlockController;

  /// @brief Field _inverseAlpha, offset: 0x40, size: 0x1, def value: None
  bool ____inverseAlpha;

  /// @brief Field _multiplyWithAlpha, offset: 0x41, size: 0x1, def value: None
  bool ____multiplyWithAlpha;

  /// @brief Field _propertyId, offset: 0x44, size: 0x4, def value: None
  int32_t ____propertyId;

  /// @brief Field _isInitialized, offset: 0x48, size: 0x1, def value: None
  bool ____isInitialized;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyBlockColorSetter, 0x50>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockColorSetter, ____useTestColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockColorSetter, ____testColor) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockColorSetter, ____property) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockColorSetter, ____materialPropertyBlockController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockColorSetter, ____inverseAlpha) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockColorSetter, ____multiplyWithAlpha) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockColorSetter, ____propertyId) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyBlockColorSetter, ____isInitialized) == 0x48, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockColorSetter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockColorSetter*, "", "MaterialPropertyBlockColorSetter");
