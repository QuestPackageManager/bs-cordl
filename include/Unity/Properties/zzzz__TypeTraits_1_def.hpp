#pragma once
// IWYU pragma private; include "Unity/Properties/TypeTraits_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TypeTraits_1)
// Forward declare root types
namespace Unity::Properties {
template <typename T> class TypeTraits_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Properties::TypeTraits_1);
// Dependencies System.Object
namespace Unity::Properties {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Unity.Properties.TypeTraits`1<T>
class CORDL_TYPE TypeTraits_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <CanBeNull>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__CanBeNull_k__BackingField, put = setStaticF__CanBeNull_k__BackingField)) bool _CanBeNull_k__BackingField;

  /// @brief Field <IsAbstractOrInterface>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__IsAbstractOrInterface_k__BackingField, put = setStaticF__IsAbstractOrInterface_k__BackingField)) bool _IsAbstractOrInterface_k__BackingField;

  /// @brief Field <IsAbstract>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__IsAbstract_k__BackingField, put = setStaticF__IsAbstract_k__BackingField)) bool _IsAbstract_k__BackingField;

  /// @brief Field <IsArray>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__IsArray_k__BackingField, put = setStaticF__IsArray_k__BackingField)) bool _IsArray_k__BackingField;

  /// @brief Field <IsContainer>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__IsContainer_k__BackingField, put = setStaticF__IsContainer_k__BackingField)) bool _IsContainer_k__BackingField;

  /// @brief Field <IsEnumFlags>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__IsEnumFlags_k__BackingField, put = setStaticF__IsEnumFlags_k__BackingField)) bool _IsEnumFlags_k__BackingField;

  /// @brief Field <IsEnum>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__IsEnum_k__BackingField, put = setStaticF__IsEnum_k__BackingField)) bool _IsEnum_k__BackingField;

  /// @brief Field <IsInterface>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__IsInterface_k__BackingField, put = setStaticF__IsInterface_k__BackingField)) bool _IsInterface_k__BackingField;

  /// @brief Field <IsLazyLoadReference>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__IsLazyLoadReference_k__BackingField, put = setStaticF__IsLazyLoadReference_k__BackingField)) bool _IsLazyLoadReference_k__BackingField;

  /// @brief Field <IsMultidimensionalArray>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__IsMultidimensionalArray_k__BackingField, put = setStaticF__IsMultidimensionalArray_k__BackingField)) bool _IsMultidimensionalArray_k__BackingField;

  /// @brief Field <IsNullable>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__IsNullable_k__BackingField, put = setStaticF__IsNullable_k__BackingField)) bool _IsNullable_k__BackingField;

  /// @brief Field <IsObject>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__IsObject_k__BackingField, put = setStaticF__IsObject_k__BackingField)) bool _IsObject_k__BackingField;

  /// @brief Field <IsPrimitiveOrString>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__IsPrimitiveOrString_k__BackingField, put = setStaticF__IsPrimitiveOrString_k__BackingField)) bool _IsPrimitiveOrString_k__BackingField;

  /// @brief Field <IsPrimitive>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__IsPrimitive_k__BackingField, put = setStaticF__IsPrimitive_k__BackingField)) bool _IsPrimitive_k__BackingField;

  /// @brief Field <IsString>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__IsString_k__BackingField, put = setStaticF__IsString_k__BackingField)) bool _IsString_k__BackingField;

  /// @brief Field <IsUnityObject>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__IsUnityObject_k__BackingField, put = setStaticF__IsUnityObject_k__BackingField)) bool _IsUnityObject_k__BackingField;

  /// @brief Field <IsValueType>k__BackingField, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__IsValueType_k__BackingField, put = setStaticF__IsValueType_k__BackingField)) bool _IsValueType_k__BackingField;

  static inline bool getStaticF__CanBeNull_k__BackingField();

  static inline bool getStaticF__IsAbstractOrInterface_k__BackingField();

  static inline bool getStaticF__IsAbstract_k__BackingField();

  static inline bool getStaticF__IsArray_k__BackingField();

  static inline bool getStaticF__IsContainer_k__BackingField();

  static inline bool getStaticF__IsEnumFlags_k__BackingField();

  static inline bool getStaticF__IsEnum_k__BackingField();

  static inline bool getStaticF__IsInterface_k__BackingField();

  static inline bool getStaticF__IsLazyLoadReference_k__BackingField();

  static inline bool getStaticF__IsMultidimensionalArray_k__BackingField();

  static inline bool getStaticF__IsNullable_k__BackingField();

  static inline bool getStaticF__IsObject_k__BackingField();

  static inline bool getStaticF__IsPrimitiveOrString_k__BackingField();

  static inline bool getStaticF__IsPrimitive_k__BackingField();

  static inline bool getStaticF__IsString_k__BackingField();

  static inline bool getStaticF__IsUnityObject_k__BackingField();

  static inline bool getStaticF__IsValueType_k__BackingField();

  /// @brief Method get_CanBeNull, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool get_CanBeNull();

  /// @brief Method get_IsAbstract, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool get_IsAbstract();

  /// @brief Method get_IsAbstractOrInterface, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool get_IsAbstractOrInterface();

  /// @brief Method get_IsArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool get_IsArray();

  /// @brief Method get_IsContainer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool get_IsContainer();

  /// @brief Method get_IsEnum, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool get_IsEnum();

  /// @brief Method get_IsInterface, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool get_IsInterface();

  /// @brief Method get_IsNullable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool get_IsNullable();

  /// @brief Method get_IsObject, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool get_IsObject();

  /// @brief Method get_IsPrimitive, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool get_IsPrimitive();

  /// @brief Method get_IsString, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool get_IsString();

  /// @brief Method get_IsValueType, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline bool get_IsValueType();

  static inline void setStaticF__CanBeNull_k__BackingField(bool value);

  static inline void setStaticF__IsAbstractOrInterface_k__BackingField(bool value);

  static inline void setStaticF__IsAbstract_k__BackingField(bool value);

  static inline void setStaticF__IsArray_k__BackingField(bool value);

  static inline void setStaticF__IsContainer_k__BackingField(bool value);

  static inline void setStaticF__IsEnumFlags_k__BackingField(bool value);

  static inline void setStaticF__IsEnum_k__BackingField(bool value);

  static inline void setStaticF__IsInterface_k__BackingField(bool value);

  static inline void setStaticF__IsLazyLoadReference_k__BackingField(bool value);

  static inline void setStaticF__IsMultidimensionalArray_k__BackingField(bool value);

  static inline void setStaticF__IsNullable_k__BackingField(bool value);

  static inline void setStaticF__IsObject_k__BackingField(bool value);

  static inline void setStaticF__IsPrimitiveOrString_k__BackingField(bool value);

  static inline void setStaticF__IsPrimitive_k__BackingField(bool value);

  static inline void setStaticF__IsString_k__BackingField(bool value);

  static inline void setStaticF__IsUnityObject_k__BackingField(bool value);

  static inline void setStaticF__IsValueType_k__BackingField(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeTraits_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeTraits_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeTraits_1(TypeTraits_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeTraits_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeTraits_1(TypeTraits_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17474 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Properties
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Properties::TypeTraits_1, "Unity.Properties", "TypeTraits`1");
