#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialPropertyValuesSetter)
namespace GlobalNamespace {
class __MaterialPropertyValuesSetter__PropertyNameFloatValuePair;
}
namespace GlobalNamespace {
class __MaterialPropertyValuesSetter__PropertyNameIntValuePair;
}
namespace GlobalNamespace {
class __MaterialPropertyValuesSetter__PropertyNameVectorValuePair;
}
namespace GlobalNamespace {
class __MaterialPropertyValuesSetter__PropertyNameColorValuePair;
}
namespace GlobalNamespace {
class __MaterialPropertyValuesSetter__PropertyValuePairBase;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyValuesSetter;
}
namespace GlobalNamespace {
class __MaterialPropertyValuesSetter__PropertyNameColorValuePair;
}
namespace GlobalNamespace {
class __MaterialPropertyValuesSetter__PropertyNameFloatValuePair;
}
namespace GlobalNamespace {
class __MaterialPropertyValuesSetter__PropertyNameIntValuePair;
}
namespace GlobalNamespace {
class __MaterialPropertyValuesSetter__PropertyNameVectorValuePair;
}
namespace GlobalNamespace {
class __MaterialPropertyValuesSetter__PropertyValuePairBase;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MaterialPropertyValuesSetter);
MARK_REF_PTR_T(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair);
MARK_REF_PTR_T(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair);
MARK_REF_PTR_T(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair);
MARK_REF_PTR_T(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair);
MARK_REF_PTR_T(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase);
// Type: ::PropertyValuePairBase
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 28, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14572))
// CS Name: ::MaterialPropertyValuesSetter::PropertyValuePairBase*
class CORDL_TYPE __MaterialPropertyValuesSetter__PropertyValuePairBase : public ::System::Object {
public:
  // Declarations
  /// @brief Field _propertyName, offset 0x10, size 0x8
  __declspec(property(get = __get__propertyName, put = __set__propertyName))::StringW _propertyName;

  /// @brief Field <propertyId>k__BackingField, offset 0x18, size 0x4
  __declspec(property(get = __get__propertyId_k__BackingField, put = __set__propertyId_k__BackingField)) int32_t _propertyId_k__BackingField;

  __declspec(property(get = get_propertyId, put = set_propertyId)) int32_t propertyId;

  constexpr ::StringW& __get__propertyName();

  constexpr ::StringW const& __get__propertyName() const;

  constexpr void __set__propertyName(::StringW value);

  constexpr int32_t& __get__propertyId_k__BackingField();

  constexpr int32_t const& __get__propertyId_k__BackingField() const;

  constexpr void __set__propertyId_k__BackingField(int32_t value);

  /// @brief Method get_propertyId, addr 0x21158cc, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_propertyId();

  /// @brief Method set_propertyId, addr 0x21158d4, size 0x8, virtual false, abstract: false, final false
  inline void set_propertyId(int32_t value);

  static inline ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase* New_ctor();

  /// @brief Method .ctor, addr 0x21158dc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method RefreshPropertyId, addr 0x21158a4, size 0x20, virtual false, abstract: false, final false
  inline void RefreshPropertyId();

  // Ctor Parameters [CppParam { name: "", ty: "__MaterialPropertyValuesSetter__PropertyValuePairBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MaterialPropertyValuesSetter__PropertyValuePairBase(__MaterialPropertyValuesSetter__PropertyValuePairBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MaterialPropertyValuesSetter__PropertyValuePairBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MaterialPropertyValuesSetter__PropertyValuePairBase(__MaterialPropertyValuesSetter__PropertyValuePairBase const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MaterialPropertyValuesSetter__PropertyValuePairBase();

public:
  /// @brief Field _propertyName, offset: 0x10, size: 0x8, def value: None
  ::StringW ____propertyName;

  /// @brief Field <propertyId>k__BackingField, offset: 0x18, size: 0x4, def value: None
  int32_t ____propertyId_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase, ____propertyName) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase, ____propertyId_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PropertyNameFloatValuePair
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14573))
// CS Name: ::MaterialPropertyValuesSetter::PropertyNameFloatValuePair*
class CORDL_TYPE __MaterialPropertyValuesSetter__PropertyNameFloatValuePair : public ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase {
public:
  // Declarations
  /// @brief Field value, offset 0x1c, size 0x4
  __declspec(property(get = __get_value, put = __set_value)) float_t value;

  constexpr float_t& __get_value();

  constexpr float_t const& __get_value() const;

  constexpr void __set_value(float_t value);

  static inline ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair* New_ctor();

  /// @brief Method .ctor, addr 0x2115904, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MaterialPropertyValuesSetter__PropertyNameFloatValuePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MaterialPropertyValuesSetter__PropertyNameFloatValuePair(__MaterialPropertyValuesSetter__PropertyNameFloatValuePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MaterialPropertyValuesSetter__PropertyNameFloatValuePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MaterialPropertyValuesSetter__PropertyNameFloatValuePair(__MaterialPropertyValuesSetter__PropertyNameFloatValuePair const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MaterialPropertyValuesSetter__PropertyNameFloatValuePair();

public:
  /// @brief Field value, offset: 0x1c, size: 0x4, def value: None
  float_t ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair, ___value) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PropertyNameIntValuePair
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14574))
// CS Name: ::MaterialPropertyValuesSetter::PropertyNameIntValuePair*
class CORDL_TYPE __MaterialPropertyValuesSetter__PropertyNameIntValuePair : public ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase {
public:
  // Declarations
  /// @brief Field value, offset 0x1c, size 0x4
  __declspec(property(get = __get_value, put = __set_value)) int32_t value;

  constexpr int32_t& __get_value();

  constexpr int32_t const& __get_value() const;

  constexpr void __set_value(int32_t value);

  static inline ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair* New_ctor();

  /// @brief Method .ctor, addr 0x211592c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MaterialPropertyValuesSetter__PropertyNameIntValuePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MaterialPropertyValuesSetter__PropertyNameIntValuePair(__MaterialPropertyValuesSetter__PropertyNameIntValuePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MaterialPropertyValuesSetter__PropertyNameIntValuePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MaterialPropertyValuesSetter__PropertyNameIntValuePair(__MaterialPropertyValuesSetter__PropertyNameIntValuePair const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MaterialPropertyValuesSetter__PropertyNameIntValuePair();

public:
  /// @brief Field value, offset: 0x1c, size: 0x4, def value: None
  int32_t ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair, ___value) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PropertyNameVectorValuePair
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10246)), TypeDefinitionIndex(TypeDefinitionIndex(14572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14575))
// CS Name: ::MaterialPropertyValuesSetter::PropertyNameVectorValuePair*
class CORDL_TYPE __MaterialPropertyValuesSetter__PropertyNameVectorValuePair : public ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase {
public:
  // Declarations
  /// @brief Field vector, offset 0x1c, size 0x10
  __declspec(property(get = __get_vector, put = __set_vector))::UnityEngine::Vector4 vector;

  constexpr ::UnityEngine::Vector4& __get_vector();

  constexpr ::UnityEngine::Vector4 const& __get_vector() const;

  constexpr void __set_vector(::UnityEngine::Vector4 value);

  static inline ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair* New_ctor();

  /// @brief Method .ctor, addr 0x2115954, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MaterialPropertyValuesSetter__PropertyNameVectorValuePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MaterialPropertyValuesSetter__PropertyNameVectorValuePair(__MaterialPropertyValuesSetter__PropertyNameVectorValuePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MaterialPropertyValuesSetter__PropertyNameVectorValuePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MaterialPropertyValuesSetter__PropertyNameVectorValuePair(__MaterialPropertyValuesSetter__PropertyNameVectorValuePair const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MaterialPropertyValuesSetter__PropertyNameVectorValuePair();

public:
  /// @brief Field vector, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___vector;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair, ___vector) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::PropertyNameColorValuePair
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 44, minimum_alignment: 8, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(14572))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14576))
// CS Name: ::MaterialPropertyValuesSetter::PropertyNameColorValuePair*
class CORDL_TYPE __MaterialPropertyValuesSetter__PropertyNameColorValuePair : public ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase {
public:
  // Declarations
  /// @brief Field color, offset 0x1c, size 0x10
  __declspec(property(get = __get_color, put = __set_color))::UnityEngine::Color color;

  constexpr ::UnityEngine::Color& __get_color();

  constexpr ::UnityEngine::Color const& __get_color() const;

  constexpr void __set_color(::UnityEngine::Color value);

  static inline ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair* New_ctor();

  /// @brief Method .ctor, addr 0x211597c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__MaterialPropertyValuesSetter__PropertyNameColorValuePair", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __MaterialPropertyValuesSetter__PropertyNameColorValuePair(__MaterialPropertyValuesSetter__PropertyNameColorValuePair&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__MaterialPropertyValuesSetter__PropertyNameColorValuePair", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __MaterialPropertyValuesSetter__PropertyNameColorValuePair(__MaterialPropertyValuesSetter__PropertyNameColorValuePair const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __MaterialPropertyValuesSetter__PropertyNameColorValuePair();

public:
  /// @brief Field color, offset: 0x1c, size: 0x10, def value: None
  ::UnityEngine::Color ___color;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair, ___color) == 0x1c, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MaterialPropertyValuesSetter
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14577))
// CS Name: ::MaterialPropertyValuesSetter*
class CORDL_TYPE MaterialPropertyValuesSetter : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using PropertyNameColorValuePair = ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair;

  using PropertyNameVectorValuePair = ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair;

  using PropertyNameIntValuePair = ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair;

  using PropertyNameFloatValuePair = ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair;

  using PropertyValuePairBase = ::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase;

  /// @brief Field _materialPropertyBlockController, offset 0x18, size 0x8
  __declspec(property(get = __get__materialPropertyBlockController, put = __set__materialPropertyBlockController))::GlobalNamespace::MaterialPropertyBlockController* _materialPropertyBlockController;

  /// @brief Field _floats, offset 0x20, size 0x8
  __declspec(property(get = __get__floats, put = __set__floats))::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*,
                                                                         ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*>*> _floats;

  /// @brief Field _vectors, offset 0x28, size 0x8
  __declspec(property(get = __get__vectors, put = __set__vectors))::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*,
                                                                           ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*>*> _vectors;

  /// @brief Field _colors, offset 0x30, size 0x8
  __declspec(property(get = __get__colors, put = __set__colors))::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*,
                                                                         ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*>*> _colors;

  /// @brief Field _ints, offset 0x38, size 0x8
  __declspec(property(get = __get__ints, put = __set__ints))::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*,
                                                                     ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*>*> _ints;

  constexpr ::GlobalNamespace::MaterialPropertyBlockController*& __get__materialPropertyBlockController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MaterialPropertyBlockController*> const& __get__materialPropertyBlockController() const;

  constexpr void __set__materialPropertyBlockController(::GlobalNamespace::MaterialPropertyBlockController* value);

  constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*>*>&
  __get__floats();

  constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*>*> const&
  __get__floats() const;

  constexpr void __set__floats(
      ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*>*>&
  __get__vectors();

  constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*>*> const&
  __get__vectors() const;

  constexpr void __set__vectors(
      ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*>*>&
  __get__colors();

  constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*>*> const&
  __get__colors() const;

  constexpr void __set__colors(
      ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*>*> value);

  constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*>*>&
  __get__ints();

  constexpr ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*>*> const&
  __get__ints() const;

  constexpr void
  __set__ints(::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*>*> value);

  /// @brief Method Start, addr 0x21154f8, size 0x18, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnValidate, addr 0x211580c, size 0x98, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method RefreshPropertyIds, addr 0x2115510, size 0x158, virtual false, abstract: false, final false
  inline void RefreshPropertyIds();

  /// @brief Method ApplyParams, addr 0x2115668, size 0x1a4, virtual false, abstract: false, final false
  inline void ApplyParams();

  static inline ::GlobalNamespace::MaterialPropertyValuesSetter* New_ctor();

  /// @brief Method .ctor, addr 0x21158c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyValuesSetter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MaterialPropertyValuesSetter(MaterialPropertyValuesSetter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyValuesSetter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MaterialPropertyValuesSetter(MaterialPropertyValuesSetter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MaterialPropertyValuesSetter();

public:
  /// @brief Field _materialPropertyBlockController, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::MaterialPropertyBlockController* ____materialPropertyBlockController;

  /// @brief Field _floats, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*>*> ____floats;

  /// @brief Field _vectors, offset: 0x28, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*>*> ____vectors;

  /// @brief Field _colors, offset: 0x30, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*>*> ____colors;

  /// @brief Field _ints, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*, ::Array<::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*>*> ____ints;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MaterialPropertyValuesSetter, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyValuesSetter, ____materialPropertyBlockController) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyValuesSetter, ____floats) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyValuesSetter, ____vectors) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyValuesSetter, ____colors) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialPropertyValuesSetter, ____ints) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MaterialPropertyValuesSetter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MaterialPropertyValuesSetter*, "", "MaterialPropertyValuesSetter");
NEED_NO_BOX(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameColorValuePair*, "", "MaterialPropertyValuesSetter/PropertyNameColorValuePair");
NEED_NO_BOX(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameFloatValuePair*, "", "MaterialPropertyValuesSetter/PropertyNameFloatValuePair");
NEED_NO_BOX(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameIntValuePair*, "", "MaterialPropertyValuesSetter/PropertyNameIntValuePair");
NEED_NO_BOX(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyNameVectorValuePair*, "", "MaterialPropertyValuesSetter/PropertyNameVectorValuePair");
NEED_NO_BOX(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MaterialPropertyValuesSetter__PropertyValuePairBase*, "", "MaterialPropertyValuesSetter/PropertyValuePairBase");
