#pragma once
// IWYU pragma private; include "Zenject/Internal/ReflectionTypeInfo.hpp"
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
class ReflectionTypeInfo_InjectConstructorInfo;
}
namespace Zenject::Internal {
class ReflectionTypeInfo_InjectFieldInfo;
}
namespace Zenject::Internal {
class ReflectionTypeInfo_InjectMethodInfo;
}
namespace Zenject::Internal {
class ReflectionTypeInfo_InjectParameterInfo;
}
namespace Zenject::Internal {
class ReflectionTypeInfo_InjectPropertyInfo;
}
namespace Zenject {
class InjectableInfo;
}
// Forward declare root types
namespace Zenject::Internal {
class ReflectionTypeInfo;
}
namespace Zenject::Internal {
class ReflectionTypeInfo_InjectConstructorInfo;
}
namespace Zenject::Internal {
class ReflectionTypeInfo_InjectFieldInfo;
}
namespace Zenject::Internal {
class ReflectionTypeInfo_InjectMethodInfo;
}
namespace Zenject::Internal {
class ReflectionTypeInfo_InjectParameterInfo;
}
namespace Zenject::Internal {
class ReflectionTypeInfo_InjectPropertyInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::Internal::ReflectionTypeInfo);
MARK_REF_PTR_T(::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo);
MARK_REF_PTR_T(::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo);
MARK_REF_PTR_T(::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo);
MARK_REF_PTR_T(::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo);
MARK_REF_PTR_T(::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo);
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ReflectionTypeInfo/InjectFieldInfo
class CORDL_TYPE ReflectionTypeInfo_InjectFieldInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field FieldInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_FieldInfo, put = __cordl_internal_set_FieldInfo)) ::System::Reflection::FieldInfo* FieldInfo;

  /// @brief Field InjectableInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_InjectableInfo, put = __cordl_internal_set_InjectableInfo)) ::Zenject::InjectableInfo* InjectableInfo;

  static inline ::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo* New_ctor(::System::Reflection::FieldInfo* fieldInfo, ::Zenject::InjectableInfo* injectableInfo);

  constexpr ::System::Reflection::FieldInfo* const& __cordl_internal_get_FieldInfo() const;

  constexpr ::System::Reflection::FieldInfo*& __cordl_internal_get_FieldInfo();

  constexpr ::Zenject::InjectableInfo* const& __cordl_internal_get_InjectableInfo() const;

  constexpr ::Zenject::InjectableInfo*& __cordl_internal_get_InjectableInfo();

  constexpr void __cordl_internal_set_FieldInfo(::System::Reflection::FieldInfo* value);

  constexpr void __cordl_internal_set_InjectableInfo(::Zenject::InjectableInfo* value);

  /// @brief Method .ctor, addr 0x6c6c204, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::FieldInfo* fieldInfo, ::Zenject::InjectableInfo* injectableInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionTypeInfo_InjectFieldInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeInfo_InjectFieldInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionTypeInfo_InjectFieldInfo(ReflectionTypeInfo_InjectFieldInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeInfo_InjectFieldInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionTypeInfo_InjectFieldInfo(ReflectionTypeInfo_InjectFieldInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14701 };

  /// @brief Field FieldInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::FieldInfo* ___FieldInfo;

  /// @brief Field InjectableInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::InjectableInfo* ___InjectableInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo, ___FieldInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo, ___InjectableInfo) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo, 0x20>, "Size mismatch!");

} // namespace Zenject::Internal
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ReflectionTypeInfo/InjectParameterInfo
class CORDL_TYPE ReflectionTypeInfo_InjectParameterInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field InjectableInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_InjectableInfo, put = __cordl_internal_set_InjectableInfo)) ::Zenject::InjectableInfo* InjectableInfo;

  /// @brief Field ParameterInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ParameterInfo, put = __cordl_internal_set_ParameterInfo)) ::System::Reflection::ParameterInfo* ParameterInfo;

  static inline ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo* New_ctor(::System::Reflection::ParameterInfo* parameterInfo, ::Zenject::InjectableInfo* injectableInfo);

  constexpr ::Zenject::InjectableInfo* const& __cordl_internal_get_InjectableInfo() const;

  constexpr ::Zenject::InjectableInfo*& __cordl_internal_get_InjectableInfo();

  constexpr ::System::Reflection::ParameterInfo* const& __cordl_internal_get_ParameterInfo() const;

  constexpr ::System::Reflection::ParameterInfo*& __cordl_internal_get_ParameterInfo();

  constexpr void __cordl_internal_set_InjectableInfo(::Zenject::InjectableInfo* value);

  constexpr void __cordl_internal_set_ParameterInfo(::System::Reflection::ParameterInfo* value);

  /// @brief Method .ctor, addr 0x6c6c20c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::ParameterInfo* parameterInfo, ::Zenject::InjectableInfo* injectableInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionTypeInfo_InjectParameterInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeInfo_InjectParameterInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionTypeInfo_InjectParameterInfo(ReflectionTypeInfo_InjectParameterInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeInfo_InjectParameterInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionTypeInfo_InjectParameterInfo(ReflectionTypeInfo_InjectParameterInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14702 };

  /// @brief Field ParameterInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::ParameterInfo* ___ParameterInfo;

  /// @brief Field InjectableInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::InjectableInfo* ___InjectableInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo, ___ParameterInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo, ___InjectableInfo) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo, 0x20>, "Size mismatch!");

} // namespace Zenject::Internal
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ReflectionTypeInfo/InjectPropertyInfo
class CORDL_TYPE ReflectionTypeInfo_InjectPropertyInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field InjectableInfo, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_InjectableInfo, put = __cordl_internal_set_InjectableInfo)) ::Zenject::InjectableInfo* InjectableInfo;

  /// @brief Field PropertyInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_PropertyInfo, put = __cordl_internal_set_PropertyInfo)) ::System::Reflection::PropertyInfo* PropertyInfo;

  static inline ::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo* New_ctor(::System::Reflection::PropertyInfo* propertyInfo, ::Zenject::InjectableInfo* injectableInfo);

  constexpr ::Zenject::InjectableInfo* const& __cordl_internal_get_InjectableInfo() const;

  constexpr ::Zenject::InjectableInfo*& __cordl_internal_get_InjectableInfo();

  constexpr ::System::Reflection::PropertyInfo* const& __cordl_internal_get_PropertyInfo() const;

  constexpr ::System::Reflection::PropertyInfo*& __cordl_internal_get_PropertyInfo();

  constexpr void __cordl_internal_set_InjectableInfo(::Zenject::InjectableInfo* value);

  constexpr void __cordl_internal_set_PropertyInfo(::System::Reflection::PropertyInfo* value);

  /// @brief Method .ctor, addr 0x6c6c214, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::PropertyInfo* propertyInfo, ::Zenject::InjectableInfo* injectableInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionTypeInfo_InjectPropertyInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeInfo_InjectPropertyInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionTypeInfo_InjectPropertyInfo(ReflectionTypeInfo_InjectPropertyInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeInfo_InjectPropertyInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionTypeInfo_InjectPropertyInfo(ReflectionTypeInfo_InjectPropertyInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14703 };

  /// @brief Field PropertyInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::PropertyInfo* ___PropertyInfo;

  /// @brief Field InjectableInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::InjectableInfo* ___InjectableInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo, ___PropertyInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo, ___InjectableInfo) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo, 0x20>, "Size mismatch!");

} // namespace Zenject::Internal
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ReflectionTypeInfo/InjectMethodInfo
class CORDL_TYPE ReflectionTypeInfo_InjectMethodInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field MethodInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_MethodInfo, put = __cordl_internal_set_MethodInfo)) ::System::Reflection::MethodInfo* MethodInfo;

  /// @brief Field Parameters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Parameters,
                      put = __cordl_internal_set_Parameters)) ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* Parameters;

  static inline ::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo* New_ctor(::System::Reflection::MethodInfo* methodInfo,
                                                                                   ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* parameters);

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_MethodInfo() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_MethodInfo();

  constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* const& __cordl_internal_get_Parameters() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>*& __cordl_internal_get_Parameters();

  constexpr void __cordl_internal_set_MethodInfo(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_Parameters(::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* value);

  /// @brief Method .ctor, addr 0x6c6c21c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::MethodInfo* methodInfo, ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* parameters);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionTypeInfo_InjectMethodInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeInfo_InjectMethodInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionTypeInfo_InjectMethodInfo(ReflectionTypeInfo_InjectMethodInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeInfo_InjectMethodInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionTypeInfo_InjectMethodInfo(ReflectionTypeInfo_InjectMethodInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14704 };

  /// @brief Field MethodInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___MethodInfo;

  /// @brief Field Parameters, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* ___Parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo, ___MethodInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo, ___Parameters) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo, 0x20>, "Size mismatch!");

} // namespace Zenject::Internal
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ReflectionTypeInfo/InjectConstructorInfo
class CORDL_TYPE ReflectionTypeInfo_InjectConstructorInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field ConstructorInfo, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_ConstructorInfo, put = __cordl_internal_set_ConstructorInfo)) ::System::Reflection::ConstructorInfo* ConstructorInfo;

  /// @brief Field Parameters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Parameters,
                      put = __cordl_internal_set_Parameters)) ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* Parameters;

  static inline ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*
  New_ctor(::System::Reflection::ConstructorInfo* constructorInfo, ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* parameters);

  constexpr ::System::Reflection::ConstructorInfo* const& __cordl_internal_get_ConstructorInfo() const;

  constexpr ::System::Reflection::ConstructorInfo*& __cordl_internal_get_ConstructorInfo();

  constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* const& __cordl_internal_get_Parameters() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>*& __cordl_internal_get_Parameters();

  constexpr void __cordl_internal_set_ConstructorInfo(::System::Reflection::ConstructorInfo* value);

  constexpr void __cordl_internal_set_Parameters(::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* value);

  /// @brief Method .ctor, addr 0x6c6c224, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::System::Reflection::ConstructorInfo* constructorInfo, ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* parameters);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionTypeInfo_InjectConstructorInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeInfo_InjectConstructorInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionTypeInfo_InjectConstructorInfo(ReflectionTypeInfo_InjectConstructorInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeInfo_InjectConstructorInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionTypeInfo_InjectConstructorInfo(ReflectionTypeInfo_InjectConstructorInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14705 };

  /// @brief Field ConstructorInfo, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::ConstructorInfo* ___ConstructorInfo;

  /// @brief Field Parameters, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* ___Parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo, ___ConstructorInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo, ___Parameters) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo, 0x20>, "Size mismatch!");

} // namespace Zenject::Internal
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ReflectionTypeInfo
class CORDL_TYPE ReflectionTypeInfo : public ::System::Object {
public:
  // Declarations
  using InjectConstructorInfo = ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo;

  using InjectFieldInfo = ::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo;

  using InjectMethodInfo = ::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo;

  using InjectParameterInfo = ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo;

  using InjectPropertyInfo = ::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo;

  /// @brief Field BaseType, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_BaseType, put = __cordl_internal_set_BaseType)) ::System::Type* BaseType;

  /// @brief Field InjectConstructor, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_InjectConstructor, put = __cordl_internal_set_InjectConstructor)) ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo* InjectConstructor;

  /// @brief Field InjectFields, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_InjectFields,
                      put = __cordl_internal_set_InjectFields)) ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>* InjectFields;

  /// @brief Field InjectMethods, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_InjectMethods,
                      put = __cordl_internal_set_InjectMethods)) ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>* InjectMethods;

  /// @brief Field InjectProperties, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_InjectProperties,
                      put = __cordl_internal_set_InjectProperties)) ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>* InjectProperties;

  /// @brief Field Type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Type, put = __cordl_internal_set_Type)) ::System::Type* Type;

  static inline ::Zenject::Internal::ReflectionTypeInfo* New_ctor(::System::Type* type, ::System::Type* baseType, ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo* injectConstructor,
                                                                  ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>* injectMethods,
                                                                  ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>* injectFields,
                                                                  ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>* injectProperties);

  constexpr ::System::Type* const& __cordl_internal_get_BaseType() const;

  constexpr ::System::Type*& __cordl_internal_get_BaseType();

  constexpr ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo* const& __cordl_internal_get_InjectConstructor() const;

  constexpr ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*& __cordl_internal_get_InjectConstructor();

  constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>* const& __cordl_internal_get_InjectFields() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>*& __cordl_internal_get_InjectFields();

  constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>* const& __cordl_internal_get_InjectMethods() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>*& __cordl_internal_get_InjectMethods();

  constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>* const& __cordl_internal_get_InjectProperties() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>*& __cordl_internal_get_InjectProperties();

  constexpr ::System::Type* const& __cordl_internal_get_Type() const;

  constexpr ::System::Type*& __cordl_internal_get_Type();

  constexpr void __cordl_internal_set_BaseType(::System::Type* value);

  constexpr void __cordl_internal_set_InjectConstructor(::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo* value);

  constexpr void __cordl_internal_set_InjectFields(::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>* value);

  constexpr void __cordl_internal_set_InjectMethods(::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>* value);

  constexpr void __cordl_internal_set_InjectProperties(::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>* value);

  constexpr void __cordl_internal_set_Type(::System::Type* value);

  /// @brief Method .ctor, addr 0x6c6c1f4, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::System::Type* baseType, ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo* injectConstructor,
                    ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>* injectMethods,
                    ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>* injectFields,
                    ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>* injectProperties);

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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14706 };

  /// @brief Field Type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___Type;

  /// @brief Field BaseType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___BaseType;

  /// @brief Field InjectProperties, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>* ___InjectProperties;

  /// @brief Field InjectFields, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>* ___InjectFields;

  /// @brief Field InjectConstructor, offset: 0x30, size: 0x8, def value: None
  ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo* ___InjectConstructor;

  /// @brief Field InjectMethods, offset: 0x38, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>* ___InjectMethods;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::Internal::ReflectionTypeInfo, ___Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::ReflectionTypeInfo, ___BaseType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::ReflectionTypeInfo, ___InjectProperties) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::ReflectionTypeInfo, ___InjectFields) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::ReflectionTypeInfo, ___InjectConstructor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::ReflectionTypeInfo, ___InjectMethods) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionTypeInfo, 0x40>, "Size mismatch!");

} // namespace Zenject::Internal
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeInfo*, "Zenject.Internal", "ReflectionTypeInfo");
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo*, "Zenject.Internal", "ReflectionTypeInfo/InjectConstructorInfo");
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*, "Zenject.Internal", "ReflectionTypeInfo/InjectFieldInfo");
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*, "Zenject.Internal", "ReflectionTypeInfo/InjectMethodInfo");
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*, "Zenject.Internal", "ReflectionTypeInfo/InjectParameterInfo");
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*, "Zenject.Internal", "ReflectionTypeInfo/InjectPropertyInfo");
