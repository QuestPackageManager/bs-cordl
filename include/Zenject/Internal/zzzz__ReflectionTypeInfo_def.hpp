#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ReflectionTypeInfo)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System {
class Type;
}
namespace Zenject::Internal {
class __ReflectionTypeInfo__InjectConstructorInfo;
}
namespace Zenject::Internal {
class __ReflectionTypeInfo__InjectFieldInfo;
}
namespace Zenject::Internal {
class __ReflectionTypeInfo__InjectMethodInfo;
}
namespace Zenject::Internal {
class __ReflectionTypeInfo__InjectParameterInfo;
}
namespace Zenject::Internal {
class __ReflectionTypeInfo__InjectPropertyInfo;
}
namespace Zenject {
class InjectableInfo;
}
// Forward declare root types
namespace Zenject::Internal {
class ReflectionTypeInfo;
}
namespace Zenject::Internal {
class __ReflectionTypeInfo__InjectConstructorInfo;
}
namespace Zenject::Internal {
class __ReflectionTypeInfo__InjectFieldInfo;
}
namespace Zenject::Internal {
class __ReflectionTypeInfo__InjectMethodInfo;
}
namespace Zenject::Internal {
class __ReflectionTypeInfo__InjectParameterInfo;
}
namespace Zenject::Internal {
class __ReflectionTypeInfo__InjectPropertyInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::Internal::ReflectionTypeInfo);
MARK_REF_PTR_T(::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo);
MARK_REF_PTR_T(::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo);
MARK_REF_PTR_T(::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo);
MARK_REF_PTR_T(::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo);
MARK_REF_PTR_T(::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo);
// Type: ::InjectFieldInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject::Internal {
// Is value type: false
// CS Name: ::ReflectionTypeInfo::InjectFieldInfo*
class CORDL_TYPE __ReflectionTypeInfo__InjectFieldInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field FieldInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_FieldInfo, put = __cordl_internal_set_FieldInfo))::System::Reflection::FieldInfo* FieldInfo;

  /// @brief Field InjectableInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_InjectableInfo, put = __cordl_internal_set_InjectableInfo))::Zenject::InjectableInfo* InjectableInfo;

  static inline ::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo* New_ctor(::System::Reflection::FieldInfo* fieldInfo, ::Zenject::InjectableInfo* injectableInfo);

  constexpr ::System::Reflection::FieldInfo*& __cordl_internal_get_FieldInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::FieldInfo*> const& __cordl_internal_get_FieldInfo() const;

  constexpr ::Zenject::InjectableInfo*& __cordl_internal_get_InjectableInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectableInfo*> const& __cordl_internal_get_InjectableInfo() const;

  constexpr void __cordl_internal_set_FieldInfo(::System::Reflection::FieldInfo* value);

  constexpr void __cordl_internal_set_InjectableInfo(::Zenject::InjectableInfo* value);

  /// @brief Method .ctor, addr 0x3032c20, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::FieldInfo* fieldInfo, ::Zenject::InjectableInfo* injectableInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionTypeInfo__InjectFieldInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeInfo__InjectFieldInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionTypeInfo__InjectFieldInfo(__ReflectionTypeInfo__InjectFieldInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeInfo__InjectFieldInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionTypeInfo__InjectFieldInfo(__ReflectionTypeInfo__InjectFieldInfo const&) = delete;

  /// @brief Field FieldInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::FieldInfo* ___FieldInfo;

  /// @brief Field InjectableInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::InjectableInfo* ___InjectableInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo, ___FieldInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo, ___InjectableInfo) == 0x18, "Offset mismatch!");

} // namespace Zenject::Internal
// Type: ::InjectParameterInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject::Internal {
// Is value type: false
// CS Name: ::ReflectionTypeInfo::InjectParameterInfo*
class CORDL_TYPE __ReflectionTypeInfo__InjectParameterInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field InjectableInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_InjectableInfo, put = __cordl_internal_set_InjectableInfo))::Zenject::InjectableInfo* InjectableInfo;

  /// @brief Field ParameterInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ParameterInfo, put = __cordl_internal_set_ParameterInfo))::System::Reflection::ParameterInfo* ParameterInfo;

  static inline ::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo* New_ctor(::System::Reflection::ParameterInfo* parameterInfo, ::Zenject::InjectableInfo* injectableInfo);

  constexpr ::Zenject::InjectableInfo*& __cordl_internal_get_InjectableInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectableInfo*> const& __cordl_internal_get_InjectableInfo() const;

  constexpr ::System::Reflection::ParameterInfo*& __cordl_internal_get_ParameterInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::ParameterInfo*> const& __cordl_internal_get_ParameterInfo() const;

  constexpr void __cordl_internal_set_InjectableInfo(::Zenject::InjectableInfo* value);

  constexpr void __cordl_internal_set_ParameterInfo(::System::Reflection::ParameterInfo* value);

  /// @brief Method .ctor, addr 0x3032c4c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::ParameterInfo* parameterInfo, ::Zenject::InjectableInfo* injectableInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionTypeInfo__InjectParameterInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeInfo__InjectParameterInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionTypeInfo__InjectParameterInfo(__ReflectionTypeInfo__InjectParameterInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeInfo__InjectParameterInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionTypeInfo__InjectParameterInfo(__ReflectionTypeInfo__InjectParameterInfo const&) = delete;

  /// @brief Field ParameterInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::ParameterInfo* ___ParameterInfo;

  /// @brief Field InjectableInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::InjectableInfo* ___InjectableInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo, ___ParameterInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo, ___InjectableInfo) == 0x18, "Offset mismatch!");

} // namespace Zenject::Internal
// Type: ::InjectPropertyInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject::Internal {
// Is value type: false
// CS Name: ::ReflectionTypeInfo::InjectPropertyInfo*
class CORDL_TYPE __ReflectionTypeInfo__InjectPropertyInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field InjectableInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_InjectableInfo, put = __cordl_internal_set_InjectableInfo))::Zenject::InjectableInfo* InjectableInfo;

  /// @brief Field PropertyInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyInfo, put = __cordl_internal_set_PropertyInfo))::System::Reflection::PropertyInfo* PropertyInfo;

  static inline ::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo* New_ctor(::System::Reflection::PropertyInfo* propertyInfo, ::Zenject::InjectableInfo* injectableInfo);

  constexpr ::Zenject::InjectableInfo*& __cordl_internal_get_InjectableInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectableInfo*> const& __cordl_internal_get_InjectableInfo() const;

  constexpr ::System::Reflection::PropertyInfo*& __cordl_internal_get_PropertyInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::PropertyInfo*> const& __cordl_internal_get_PropertyInfo() const;

  constexpr void __cordl_internal_set_InjectableInfo(::Zenject::InjectableInfo* value);

  constexpr void __cordl_internal_set_PropertyInfo(::System::Reflection::PropertyInfo* value);

  /// @brief Method .ctor, addr 0x3032c78, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::PropertyInfo* propertyInfo, ::Zenject::InjectableInfo* injectableInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionTypeInfo__InjectPropertyInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeInfo__InjectPropertyInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionTypeInfo__InjectPropertyInfo(__ReflectionTypeInfo__InjectPropertyInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeInfo__InjectPropertyInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionTypeInfo__InjectPropertyInfo(__ReflectionTypeInfo__InjectPropertyInfo const&) = delete;

  /// @brief Field PropertyInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::PropertyInfo* ___PropertyInfo;

  /// @brief Field InjectableInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::InjectableInfo* ___InjectableInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo, ___PropertyInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo, ___InjectableInfo) == 0x18, "Offset mismatch!");

} // namespace Zenject::Internal
// Type: ::InjectMethodInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject::Internal {
// Is value type: false
// CS Name: ::ReflectionTypeInfo::InjectMethodInfo*
class CORDL_TYPE __ReflectionTypeInfo__InjectMethodInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field MethodInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_MethodInfo, put = __cordl_internal_set_MethodInfo))::System::Reflection::MethodInfo* MethodInfo;

  /// @brief Field Parameters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Parameters,
                      put = __cordl_internal_set_Parameters))::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>* Parameters;

  static inline ::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*
  New_ctor(::System::Reflection::MethodInfo* methodInfo, ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>* parameters);

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_MethodInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const& __cordl_internal_get_MethodInfo() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*& __cordl_internal_get_Parameters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*> const&
  __cordl_internal_get_Parameters() const;

  constexpr void __cordl_internal_set_MethodInfo(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_Parameters(::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>* value);

  /// @brief Method .ctor, addr 0x3032ca4, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MethodInfo* methodInfo, ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>* parameters);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionTypeInfo__InjectMethodInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeInfo__InjectMethodInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionTypeInfo__InjectMethodInfo(__ReflectionTypeInfo__InjectMethodInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeInfo__InjectMethodInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionTypeInfo__InjectMethodInfo(__ReflectionTypeInfo__InjectMethodInfo const&) = delete;

  /// @brief Field MethodInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___MethodInfo;

  /// @brief Field Parameters, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>* ___Parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo, ___MethodInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo, ___Parameters) == 0x18, "Offset mismatch!");

} // namespace Zenject::Internal
// Type: ::InjectConstructorInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject::Internal {
// Is value type: false
// CS Name: ::ReflectionTypeInfo::InjectConstructorInfo*
class CORDL_TYPE __ReflectionTypeInfo__InjectConstructorInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field ConstructorInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ConstructorInfo, put = __cordl_internal_set_ConstructorInfo))::System::Reflection::ConstructorInfo* ConstructorInfo;

  /// @brief Field Parameters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Parameters,
                      put = __cordl_internal_set_Parameters))::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>* Parameters;

  static inline ::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*
  New_ctor(::System::Reflection::ConstructorInfo* constructorInfo, ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>* parameters);

  constexpr ::System::Reflection::ConstructorInfo*& __cordl_internal_get_ConstructorInfo();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::ConstructorInfo*> const& __cordl_internal_get_ConstructorInfo() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*& __cordl_internal_get_Parameters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*> const&
  __cordl_internal_get_Parameters() const;

  constexpr void __cordl_internal_set_ConstructorInfo(::System::Reflection::ConstructorInfo* value);

  constexpr void __cordl_internal_set_Parameters(::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>* value);

  /// @brief Method .ctor, addr 0x3032cd0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::ConstructorInfo* constructorInfo, ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>* parameters);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionTypeInfo__InjectConstructorInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeInfo__InjectConstructorInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionTypeInfo__InjectConstructorInfo(__ReflectionTypeInfo__InjectConstructorInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeInfo__InjectConstructorInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionTypeInfo__InjectConstructorInfo(__ReflectionTypeInfo__InjectConstructorInfo const&) = delete;

  /// @brief Field ConstructorInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::ConstructorInfo* ___ConstructorInfo;

  /// @brief Field Parameters, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>* ___Parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo, ___ConstructorInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo, ___Parameters) == 0x18, "Offset mismatch!");

} // namespace Zenject::Internal
// Type: Zenject.Internal::ReflectionTypeInfo
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 64, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject::Internal {
// Is value type: false
// CS Name: ::Zenject.Internal::ReflectionTypeInfo*
class CORDL_TYPE ReflectionTypeInfo : public ::System::Object {
public:
  // Declarations
  using InjectConstructorInfo = ::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo;

  using InjectFieldInfo = ::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo;

  using InjectMethodInfo = ::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo;

  using InjectParameterInfo = ::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo;

  using InjectPropertyInfo = ::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo;

  /// @brief Field BaseType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_BaseType, put = __cordl_internal_set_BaseType))::System::Type* BaseType;

  /// @brief Field InjectConstructor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_InjectConstructor, put = __cordl_internal_set_InjectConstructor))::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo* InjectConstructor;

  /// @brief Field InjectFields, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_InjectFields,
                      put = __cordl_internal_set_InjectFields))::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>* InjectFields;

  /// @brief Field InjectMethods, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_InjectMethods,
                      put = __cordl_internal_set_InjectMethods))::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>* InjectMethods;

  /// @brief Field InjectProperties, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_InjectProperties,
                      put = __cordl_internal_set_InjectProperties))::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>* InjectProperties;

  /// @brief Field Type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Type, put = __cordl_internal_set_Type))::System::Type* Type;

  static inline ::Zenject::Internal::ReflectionTypeInfo* New_ctor(::System::Type* type, ::System::Type* baseType, ::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo* injectConstructor,
                                                                  ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>* injectMethods,
                                                                  ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>* injectFields,
                                                                  ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>* injectProperties);

  constexpr ::System::Type*& __cordl_internal_get_BaseType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_BaseType() const;

  constexpr ::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*& __cordl_internal_get_InjectConstructor();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*> const& __cordl_internal_get_InjectConstructor() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>*& __cordl_internal_get_InjectFields();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>*> const& __cordl_internal_get_InjectFields() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>*& __cordl_internal_get_InjectMethods();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>*> const&
  __cordl_internal_get_InjectMethods() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>*& __cordl_internal_get_InjectProperties();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>*> const&
  __cordl_internal_get_InjectProperties() const;

  constexpr ::System::Type*& __cordl_internal_get_Type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_Type() const;

  constexpr void __cordl_internal_set_BaseType(::System::Type* value);

  constexpr void __cordl_internal_set_InjectConstructor(::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo* value);

  constexpr void __cordl_internal_set_InjectFields(::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>* value);

  constexpr void __cordl_internal_set_InjectMethods(::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>* value);

  constexpr void __cordl_internal_set_InjectProperties(::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>* value);

  constexpr void __cordl_internal_set_Type(::System::Type* value);

  /// @brief Method .ctor, addr 0x3032bcc, size 0x54, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Type* baseType, ::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo* injectConstructor,
                    ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>* injectMethods,
                    ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>* injectFields,
                    ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>* injectProperties);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionTypeInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionTypeInfo(ReflectionTypeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionTypeInfo(ReflectionTypeInfo const&) = delete;

  /// @brief Field Type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___Type;

  /// @brief Field BaseType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___BaseType;

  /// @brief Field InjectProperties, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>* ___InjectProperties;

  /// @brief Field InjectFields, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>* ___InjectFields;

  /// @brief Field InjectConstructor, offset: 0x30, size: 0x8, def value: None
  ::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo* ___InjectConstructor;

  /// @brief Field InjectMethods, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>* ___InjectMethods;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionTypeInfo, 0x40>, "Size mismatch!");

static_assert(offsetof(::Zenject::Internal::ReflectionTypeInfo, ___Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::ReflectionTypeInfo, ___BaseType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::ReflectionTypeInfo, ___InjectProperties) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::ReflectionTypeInfo, ___InjectFields) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::ReflectionTypeInfo, ___InjectConstructor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::ReflectionTypeInfo, ___InjectMethods) == 0x38, "Offset mismatch!");

} // namespace Zenject::Internal
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeInfo*, "Zenject.Internal", "ReflectionTypeInfo");
NEED_NO_BOX(::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo*, "Zenject.Internal", "ReflectionTypeInfo/InjectConstructorInfo");
NEED_NO_BOX(::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*, "Zenject.Internal", "ReflectionTypeInfo/InjectFieldInfo");
NEED_NO_BOX(::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*, "Zenject.Internal", "ReflectionTypeInfo/InjectMethodInfo");
NEED_NO_BOX(::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*, "Zenject.Internal", "ReflectionTypeInfo/InjectParameterInfo");
NEED_NO_BOX(::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*, "Zenject.Internal", "ReflectionTypeInfo/InjectPropertyInfo");
