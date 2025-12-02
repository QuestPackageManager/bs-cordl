#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialPropertyValuesSetter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialPropertyValuesSetter)
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
class MaterialPropertyValuesSetter_PropertyNameColorValuePair;
}
namespace GlobalNamespace {
class MaterialPropertyValuesSetter_PropertyNameFloatValuePair;
}
namespace GlobalNamespace {
class MaterialPropertyValuesSetter_PropertyNameIntValuePair;
}
namespace GlobalNamespace {
class MaterialPropertyValuesSetter_PropertyNameVectorValuePair;
}
namespace GlobalNamespace {
class MaterialPropertyValuesSetter_PropertyValuePairBase;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyValuesSetter;
}
namespace GlobalNamespace {
class MaterialPropertyValuesSetter_PropertyNameColorValuePair;
}
namespace GlobalNamespace {
class MaterialPropertyValuesSetter_PropertyNameFloatValuePair;
}
namespace GlobalNamespace {
class MaterialPropertyValuesSetter_PropertyNameIntValuePair;
}
namespace GlobalNamespace {
class MaterialPropertyValuesSetter_PropertyNameVectorValuePair;
}
namespace GlobalNamespace {
class MaterialPropertyValuesSetter_PropertyValuePairBase;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyValuesSetter);
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair);
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair);
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair);
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair);
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaterialPropertyValuesSetter/PropertyValuePairBase
class CORDL_TYPE MaterialPropertyValuesSetter_PropertyValuePairBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field <propertyId>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__propertyId_k__BackingField, put = __cordl_internal_set__propertyId_k__BackingField)) int32_t _propertyId_k__BackingField;

  /// @brief Field _propertyName, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__propertyName, put = __cordl_internal_set__propertyName)) ::StringW _propertyName;

  __declspec(property(get = get_propertyId, put = set_propertyId)) int32_t propertyId;

  static inline ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase* New_ctor();

  /// @brief Method RefreshPropertyId, addr 0x565e074, size 0x20, virtual false, abstract: false, final false
  inline void RefreshPropertyId();

  constexpr int32_t const& __cordl_internal_get__propertyId_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__propertyId_k__BackingField();

  constexpr ::StringW const& __cordl_internal_get__propertyName() const;

  constexpr ::StringW& __cordl_internal_get__propertyName();

  constexpr void __cordl_internal_set__propertyId_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__propertyName(::StringW value);

  /// @brief Method .ctor, addr 0x565e0a8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_propertyId, addr 0x565e098, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_propertyId();

  /// @brief Method set_propertyId, addr 0x565e0a0, size 0x8, virtual false, abstract: false, final false
  inline void set_propertyId(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyValuesSetter_PropertyValuePairBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyValuesSetter_PropertyValuePairBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyValuesSetter_PropertyValuePairBase(MaterialPropertyValuesSetter_PropertyValuePairBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyValuesSetter_PropertyValuePairBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyValuesSetter_PropertyValuePairBase(MaterialPropertyValuesSetter_PropertyValuePairBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19742 };

  /// @brief Field _propertyName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____propertyName;

  /// @brief Field <propertyId>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____propertyId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase, ____propertyName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase, ____propertyId_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MaterialPropertyValuesSetter::PropertyValuePairBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaterialPropertyValuesSetter/PropertyNameFloatValuePair
class CORDL_TYPE MaterialPropertyValuesSetter_PropertyNameFloatValuePair : public ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase {
public:
  // Declarations
  /// @brief Field value, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) float_t value;

  static inline ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair* New_ctor();

  constexpr float_t const& __cordl_internal_get_value() const;

  constexpr float_t& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(float_t value);

  /// @brief Method .ctor, addr 0x565e0c8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyValuesSetter_PropertyNameFloatValuePair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyValuesSetter_PropertyNameFloatValuePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyValuesSetter_PropertyNameFloatValuePair(MaterialPropertyValuesSetter_PropertyNameFloatValuePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyValuesSetter_PropertyNameFloatValuePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyValuesSetter_PropertyNameFloatValuePair(MaterialPropertyValuesSetter_PropertyNameFloatValuePair const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19743 };

  /// @brief Field value, offset: 0x1c, size: 0x4, def value: None
  float_t ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair, ___value) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MaterialPropertyValuesSetter::PropertyValuePairBase
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaterialPropertyValuesSetter/PropertyNameIntValuePair
class CORDL_TYPE MaterialPropertyValuesSetter_PropertyNameIntValuePair : public ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase {
public:
  // Declarations
  /// @brief Field value, offset 0x1c, size 0x4
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) int32_t value;

  static inline ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair* New_ctor();

  constexpr int32_t const& __cordl_internal_get_value() const;

  constexpr int32_t& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_value(int32_t value);

  /// @brief Method .ctor, addr 0x565e0e8, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyValuesSetter_PropertyNameIntValuePair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyValuesSetter_PropertyNameIntValuePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyValuesSetter_PropertyNameIntValuePair(MaterialPropertyValuesSetter_PropertyNameIntValuePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyValuesSetter_PropertyNameIntValuePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyValuesSetter_PropertyNameIntValuePair(MaterialPropertyValuesSetter_PropertyNameIntValuePair const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19744 };

  /// @brief Field value, offset: 0x1c, size: 0x4, def value: None
  int32_t ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair, ___value) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MaterialPropertyValuesSetter::PropertyValuePairBase, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaterialPropertyValuesSetter/PropertyNameVectorValuePair
class CORDL_TYPE MaterialPropertyValuesSetter_PropertyNameVectorValuePair : public ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase {
public:
  // Declarations
  /// @brief Field vector, offset 0x1c, size 0x10
  __declspec(property(get = __cordl_internal_get_vector, put = __cordl_internal_set_vector)) ::UnityEngine::Vector4 vector;

  static inline ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair* New_ctor();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_vector() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_vector();

  constexpr void __cordl_internal_set_vector(::UnityEngine::Vector4 value);

  /// @brief Method .ctor, addr 0x565e108, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyValuesSetter_PropertyNameVectorValuePair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyValuesSetter_PropertyNameVectorValuePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyValuesSetter_PropertyNameVectorValuePair(MaterialPropertyValuesSetter_PropertyNameVectorValuePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyValuesSetter_PropertyNameVectorValuePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyValuesSetter_PropertyNameVectorValuePair(MaterialPropertyValuesSetter_PropertyNameVectorValuePair const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19745 };

  /// @brief Field vector, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___vector;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair, ___vector) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MaterialPropertyValuesSetter::PropertyValuePairBase, UnityEngine.Color
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaterialPropertyValuesSetter/PropertyNameColorValuePair
class CORDL_TYPE MaterialPropertyValuesSetter_PropertyNameColorValuePair : public ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase {
public:
  // Declarations
  /// @brief Field color, offset 0x1c, size 0x10
  __declspec(property(get = __cordl_internal_get_color, put = __cordl_internal_set_color)) ::UnityEngine::Color color;

  static inline ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair* New_ctor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get_color() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get_color();

  constexpr void __cordl_internal_set_color(::UnityEngine::Color value);

  /// @brief Method .ctor, addr 0x565e128, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyValuesSetter_PropertyNameColorValuePair();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyValuesSetter_PropertyNameColorValuePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyValuesSetter_PropertyNameColorValuePair(MaterialPropertyValuesSetter_PropertyNameColorValuePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyValuesSetter_PropertyNameColorValuePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyValuesSetter_PropertyNameColorValuePair(MaterialPropertyValuesSetter_PropertyNameColorValuePair const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19746 };

  /// @brief Field color, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair, ___color) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair, 0x30>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MaterialPropertyValuesSetter
class CORDL_TYPE MaterialPropertyValuesSetter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using PropertyNameColorValuePair = ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair;

  using PropertyNameFloatValuePair = ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair;

  using PropertyNameIntValuePair = ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair;

  using PropertyNameVectorValuePair = ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair;

  using PropertyValuePairBase = ::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase;

  /// @brief Field _colors, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__colors, put = __cordl_internal_set__colors)) ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair*,
                                                                                                        ::Array<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair*>*>
      _colors;

  /// @brief Field _floats, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__floats, put = __cordl_internal_set__floats)) ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair*,
                                                                                                        ::Array<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair*>*>
      _floats;

  /// @brief Field _ints, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__ints, put = __cordl_internal_set__ints)) ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair*,
                                                                                                    ::Array<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair*>*>
      _ints;

  /// @brief Field _materialPropertyBlockController, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__materialPropertyBlockController,
                      put = __cordl_internal_set__materialPropertyBlockController)) ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>
      _materialPropertyBlockController;

  /// @brief Field _vectors, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__vectors, put = __cordl_internal_set__vectors)) ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair*,
                                                                                                          ::Array<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair*>*>
      _vectors;

  /// @brief Method ApplyParams, addr 0x565de28, size 0x1ac, virtual false, abstract: false, final false
  inline void ApplyParams();

  static inline ::GlobalNamespace::MaterialPropertyValuesSetter* New_ctor();

  /// @brief Method OnValidate, addr 0x565dfd4, size 0xa0, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method RefreshPropertyIds, addr 0x565dcc0, size 0x168, virtual false, abstract: false, final false
  inline void RefreshPropertyIds();

  /// @brief Method Start, addr 0x565dca8, size 0x18, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair*, ::Array<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair*>*> const&
  __cordl_internal_get__colors() const;

  constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair*, ::Array<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair*>*>&
  __cordl_internal_get__colors();

  constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair*, ::Array<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair*>*> const&
  __cordl_internal_get__floats() const;

  constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair*, ::Array<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair*>*>&
  __cordl_internal_get__floats();

  constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair*, ::Array<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair*>*> const&
  __cordl_internal_get__ints() const;

  constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair*, ::Array<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair*>*>&
  __cordl_internal_get__ints();

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> const& __cordl_internal_get__materialPropertyBlockController() const;

  constexpr ::UnityW<::GlobalNamespace::MaterialPropertyBlockController>& __cordl_internal_get__materialPropertyBlockController();

  constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair*, ::Array<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair*>*> const&
  __cordl_internal_get__vectors() const;

  constexpr ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair*, ::Array<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair*>*>&
  __cordl_internal_get__vectors();

  constexpr void __cordl_internal_set__colors(
      ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair*, ::Array<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair*>*> value);

  constexpr void __cordl_internal_set__floats(
      ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair*, ::Array<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair*>*> value);

  constexpr void __cordl_internal_set__ints(
      ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair*, ::Array<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair*>*> value);

  constexpr void __cordl_internal_set__materialPropertyBlockController(::UnityW<::GlobalNamespace::MaterialPropertyBlockController> value);

  constexpr void __cordl_internal_set__vectors(
      ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair*, ::Array<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair*>*> value);

  /// @brief Method .ctor, addr 0x565e094, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyValuesSetter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyValuesSetter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyValuesSetter(MaterialPropertyValuesSetter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyValuesSetter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyValuesSetter(MaterialPropertyValuesSetter const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19747 };

  /// @brief Field _materialPropertyBlockController, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MaterialPropertyBlockController> ____materialPropertyBlockController;

  /// @brief Field _floats, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair*, ::Array<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair*>*> ____floats;

  /// @brief Field _vectors, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair*, ::Array<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair*>*> ____vectors;

  /// @brief Field _colors, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair*, ::Array<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair*>*> ____colors;

  /// @brief Field _ints, offset: 0x40, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair*, ::Array<::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair*>*> ____ints;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialPropertyValuesSetter, ____materialPropertyBlockController) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyValuesSetter, ____floats) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyValuesSetter, ____vectors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyValuesSetter, ____colors) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyValuesSetter, ____ints) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyValuesSetter, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyValuesSetter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyValuesSetter*, "", "MaterialPropertyValuesSetter");
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameColorValuePair*, "", "MaterialPropertyValuesSetter/PropertyNameColorValuePair");
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameFloatValuePair*, "", "MaterialPropertyValuesSetter/PropertyNameFloatValuePair");
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameIntValuePair*, "", "MaterialPropertyValuesSetter/PropertyNameIntValuePair");
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyValuesSetter_PropertyNameVectorValuePair*, "", "MaterialPropertyValuesSetter/PropertyNameVectorValuePair");
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyValuesSetter_PropertyValuePairBase*, "", "MaterialPropertyValuesSetter/PropertyValuePairBase");
