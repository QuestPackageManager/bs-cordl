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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14565))
// CS Name: ::MaterialPropertyBlockColorSetter*
class CORDL_TYPE MaterialPropertyBlockColorSetter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _useTestColor, offset 0x18, size 0x1
  __declspec(property(get = __get__useTestColor, put = __set__useTestColor)) bool _useTestColor;

  /// @brief Field _testColor, offset 0x1c, size 0x10
  __declspec(property(get = __get__testColor, put = __set__testColor))::UnityEngine::Color _testColor;

  /// @brief Field _property, offset 0x30, size 0x8
  __declspec(property(get = __get__property, put = __set__property))::StringW _property;

  /// @brief Field _materialPropertyBlockController, offset 0x38, size 0x8
  __declspec(property(get = __get__materialPropertyBlockController, put = __set__materialPropertyBlockController))::GlobalNamespace::MaterialPropertyBlockController* _materialPropertyBlockController;

  /// @brief Field _inverseAlpha, offset 0x40, size 0x1
  __declspec(property(get = __get__inverseAlpha, put = __set__inverseAlpha)) bool _inverseAlpha;

  /// @brief Field _multiplyWithAlpha, offset 0x41, size 0x1
  __declspec(property(get = __get__multiplyWithAlpha, put = __set__multiplyWithAlpha)) bool _multiplyWithAlpha;

  /// @brief Field _propertyId, offset 0x44, size 0x4
  __declspec(property(get = __get__propertyId, put = __set__propertyId)) int32_t _propertyId;

  /// @brief Field _isInitialized, offset 0x48, size 0x1
  __declspec(property(get = __get__isInitialized, put = __set__isInitialized)) bool _isInitialized;

  __declspec(property(get = get_color))::UnityEngine::Color color;

  __declspec(property(get = get_materialPropertyBlockController, put = set_materialPropertyBlockController))::GlobalNamespace::MaterialPropertyBlockController* materialPropertyBlockController;

  constexpr bool& __get__useTestColor();

  constexpr bool const& __get__useTestColor() const;

  constexpr void __set__useTestColor(bool value);

  constexpr ::UnityEngine::Color& __get__testColor();

  constexpr ::UnityEngine::Color const& __get__testColor() const;

  constexpr void __set__testColor(::UnityEngine::Color value);

  constexpr ::StringW& __get__property();

  constexpr ::StringW const& __get__property() const;

  constexpr void __set__property(::StringW value);

  constexpr ::GlobalNamespace::MaterialPropertyBlockController*& __get__materialPropertyBlockController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> const& __get__materialPropertyBlockController() const;

  constexpr void __set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController* value);

  constexpr bool& __get__inverseAlpha();

  constexpr bool const& __get__inverseAlpha() const;

  constexpr void __set__inverseAlpha(bool value);

  constexpr bool& __get__multiplyWithAlpha();

  constexpr bool const& __get__multiplyWithAlpha() const;

  constexpr void __set__multiplyWithAlpha(bool value);

  constexpr int32_t& __get__propertyId();

  constexpr int32_t const& __get__propertyId() const;

  constexpr void __set__propertyId(int32_t value);

  constexpr bool& __get__isInitialized();

  constexpr bool const& __get__isInitialized() const;

  constexpr void __set__isInitialized(bool value);

  /// @brief Method get_color addr 0x2114de0 size 0x2c virtual false final false
  inline ::UnityEngine::Color get_color();

  /// @brief Method get_materialPropertyBlockController addr 0x2114e0c size 0x8 virtual false final false
  inline ::GlobalNamespace::MaterialPropertyBlockController* get_materialPropertyBlockController();

  /// @brief Method set_materialPropertyBlockController addr 0x2114e14 size 0x8 virtual false final false
  inline void set_materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController* value);

  /// @brief Method Awake addr 0x2114e1c size 0x30 virtual false final false
  inline void Awake();

  /// @brief Method InitIfNeeded addr 0x2114e4c size 0x30 virtual false final false
  inline void InitIfNeeded();

  /// @brief Method SetColor addr 0x2114e7c size 0xac virtual false final false
  inline void SetColor(::UnityEngine::Color color);

  /// @brief Method OnValidate addr 0x2114f28 size 0x38 virtual false final false
  inline void OnValidate();

  /// @brief Method AddNecessaryComponents addr 0x2114f60 size 0xf0 virtual false final false
  inline void AddNecessaryComponents();

  static inline ::GlobalNamespace::MaterialPropertyBlockColorSetter* New_ctor();

  /// @brief Method .ctor addr 0x2115050 size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockColorSetter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyBlockColorSetter(MaterialPropertyBlockColorSetter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockColorSetter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyBlockColorSetter(MaterialPropertyBlockColorSetter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyBlockColorSetter();

public:
  /// @brief Field _useTestColor, offset: 0x18, size: 0x1, def value: None
  bool ____useTestColor;

  /// @brief Field _testColor, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Color ____testColor;

  /// @brief Field _property, offset: 0x30, size: 0x8, def value: None
  ::StringW ____property;

  /// @brief Field _materialPropertyBlockController, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MaterialPropertyBlockController* ____materialPropertyBlockController;

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

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyBlockColorSetter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyBlockColorSetter*, "", "MaterialPropertyBlockColorSetter");
