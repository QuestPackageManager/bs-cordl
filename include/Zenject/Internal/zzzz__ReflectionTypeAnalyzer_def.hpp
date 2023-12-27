#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionTypeAnalyzer)
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass8_0;
}
namespace Zenject::Internal {
class __ReflectionTypeInfo__InjectMethodInfo;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass5_0;
}
namespace System {
class Type;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass7_0;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass7_1;
}
namespace Zenject::Internal {
class __ReflectionTypeInfo__InjectConstructorInfo;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass11_0;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace Zenject {
class InjectableInfo;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass6_1;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass6_0;
}
namespace Zenject::Internal {
class __ReflectionTypeInfo__InjectFieldInfo;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass5_1;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c;
}
namespace Zenject::Internal {
class __ReflectionTypeInfo__InjectPropertyInfo;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject::Internal {
class __ReflectionTypeInfo__InjectParameterInfo;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System::Reflection {
class ParameterInfo;
}
namespace System::Reflection {
class ConstructorInfo;
}
namespace Zenject::Internal {
class ReflectionTypeInfo;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System::Reflection {
class FieldInfo;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System::Reflection {
class PropertyInfo;
}
// Forward declare root types
namespace Zenject::Internal {
class ReflectionTypeAnalyzer;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass11_0;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass5_0;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass5_1;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass6_0;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass6_1;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass7_0;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass7_1;
}
namespace Zenject::Internal {
class __ReflectionTypeAnalyzer____c__DisplayClass8_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::Internal::ReflectionTypeAnalyzer);
MARK_REF_PTR_T(::Zenject::Internal::__ReflectionTypeAnalyzer____c);
MARK_REF_PTR_T(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0);
MARK_REF_PTR_T(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0);
MARK_REF_PTR_T(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1);
MARK_REF_PTR_T(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0);
MARK_REF_PTR_T(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1);
MARK_REF_PTR_T(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0);
MARK_REF_PTR_T(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1);
MARK_REF_PTR_T(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0);
// Type: ::<>c__DisplayClass5_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11385))
// CS Name: ::ReflectionTypeAnalyzer::<>c__DisplayClass5_0*
class CORDL_TYPE __ReflectionTypeAnalyzer____c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __get_type, put = __set_type))::System::Type* type;

  constexpr ::System::Type*& __get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_type() const;

  constexpr void __set_type(::System::Type* value);

  static inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0* New_ctor();

  /// @brief Method .ctor addr 0x2f25e94 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetPropertyInfos>b__1 addr 0x2f25e9c size 0xb4 virtual false final false
  inline ::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo* _GetPropertyInfos_b__1(::System::Reflection::PropertyInfo* x);

  /// @brief Method __zenCreate addr 0x2f25f50 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2f25fac size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionTypeAnalyzer____c__DisplayClass5_0(__ReflectionTypeAnalyzer____c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionTypeAnalyzer____c__DisplayClass5_0(__ReflectionTypeAnalyzer____c__DisplayClass5_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionTypeAnalyzer____c__DisplayClass5_0();

public:
  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0, 0x18>, "Size mismatch!");

} // namespace Zenject::Internal
// Type: ::<>c__DisplayClass5_1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11386))
// CS Name: ::ReflectionTypeAnalyzer::<>c__DisplayClass5_1*
class CORDL_TYPE __ReflectionTypeAnalyzer____c__DisplayClass5_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __get_x, put = __set_x))::System::Reflection::PropertyInfo* x;

  constexpr ::System::Reflection::PropertyInfo*& __get_x();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::PropertyInfo*> const& __get_x() const;

  constexpr void __set_x(::System::Reflection::PropertyInfo* value);

  static inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1* New_ctor();

  /// @brief Method .ctor addr 0x2f2616c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetPropertyInfos>b__2 addr 0x2f26174 size 0xcc virtual false final false
  inline bool _GetPropertyInfos_b__2(::System::Type* a);

  /// @brief Method __zenCreate addr 0x2f26240 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2f2629c size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass5_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionTypeAnalyzer____c__DisplayClass5_1(__ReflectionTypeAnalyzer____c__DisplayClass5_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass5_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionTypeAnalyzer____c__DisplayClass5_1(__ReflectionTypeAnalyzer____c__DisplayClass5_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionTypeAnalyzer____c__DisplayClass5_1();

public:
  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::PropertyInfo* ___x;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1, 0x18>, "Size mismatch!");

} // namespace Zenject::Internal
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11387))
// CS Name: ::ReflectionTypeAnalyzer::<>c*
class CORDL_TYPE __ReflectionTypeAnalyzer____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9))::Zenject::Internal::__ReflectionTypeAnalyzer____c* __9;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0))::System::Func_2<::System::Reflection::PropertyInfo*, bool>* __9__5_0;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0))::System::Func_2<::System::Reflection::FieldInfo*, bool>* __9__6_0;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0))::System::Func_2<::System::Reflection::MethodInfo*, bool>* __9__7_0;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0))::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* __9__11_0;

  /// @brief Field <>9__11_1, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_1, put = setStaticF___9__11_1))::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* __9__11_1;

  /// @brief Field <>9__11_2, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9__11_2, put = setStaticF___9__11_2))::System::Func_2<::System::Reflection::ConstructorInfo*, int32_t>* __9__11_2;

  static inline void setStaticF___9(::Zenject::Internal::__ReflectionTypeAnalyzer____c* value);

  static inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c* getStaticF___9();

  static inline void setStaticF___9__5_0(::System::Func_2<::System::Reflection::PropertyInfo*, bool>* value);

  static inline ::System::Func_2<::System::Reflection::PropertyInfo*, bool>* getStaticF___9__5_0();

  static inline void setStaticF___9__6_0(::System::Func_2<::System::Reflection::FieldInfo*, bool>* value);

  static inline ::System::Func_2<::System::Reflection::FieldInfo*, bool>* getStaticF___9__6_0();

  static inline void setStaticF___9__7_0(::System::Func_2<::System::Reflection::MethodInfo*, bool>* value);

  static inline ::System::Func_2<::System::Reflection::MethodInfo*, bool>* getStaticF___9__7_0();

  static inline void setStaticF___9__11_0(::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* value);

  static inline ::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* getStaticF___9__11_0();

  static inline void setStaticF___9__11_1(::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* value);

  static inline ::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* getStaticF___9__11_1();

  static inline void setStaticF___9__11_2(::System::Func_2<::System::Reflection::ConstructorInfo*, int32_t>* value);

  static inline ::System::Func_2<::System::Reflection::ConstructorInfo*, int32_t>* getStaticF___9__11_2();

  static inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c* New_ctor();

  /// @brief Method .ctor addr 0x2f264c0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetPropertyInfos>b__5_0 addr 0x2f264c8 size 0x100 virtual false final false
  inline bool _GetPropertyInfos_b__5_0(::System::Reflection::PropertyInfo* x);

  /// @brief Method <GetFieldInfos>b__6_0 addr 0x2f265c8 size 0x100 virtual false final false
  inline bool _GetFieldInfos_b__6_0(::System::Reflection::FieldInfo* x);

  /// @brief Method <GetMethodInfos>b__7_0 addr 0x2f266d0 size 0x100 virtual false final false
  inline bool _GetMethodInfos_b__7_0(::System::Reflection::MethodInfo* x);

  /// @brief Method <TryGetInjectConstructor>b__11_0 addr 0x2f267d8 size 0x100 virtual false final false
  inline bool _TryGetInjectConstructor_b__11_0(::System::Reflection::ConstructorInfo* c);

  /// @brief Method <TryGetInjectConstructor>b__11_1 addr 0x2f268e0 size 0x18 virtual false final false
  inline bool _TryGetInjectConstructor_b__11_1(::System::Reflection::ConstructorInfo* x);

  /// @brief Method <TryGetInjectConstructor>b__11_2 addr 0x2f268f8 size 0x60 virtual false final false
  inline int32_t _TryGetInjectConstructor_b__11_2(::System::Reflection::ConstructorInfo* x);

  /// @brief Method __zenCreate addr 0x2f26958 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2f269b4 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionTypeAnalyzer____c(__ReflectionTypeAnalyzer____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionTypeAnalyzer____c(__ReflectionTypeAnalyzer____c const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionTypeAnalyzer____c();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ReflectionTypeAnalyzer____c, 0x10>, "Size mismatch!");

} // namespace Zenject::Internal
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11388))
// CS Name: ::ReflectionTypeAnalyzer::<>c__DisplayClass6_0*
class CORDL_TYPE __ReflectionTypeAnalyzer____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __get_type, put = __set_type))::System::Type* type;

  constexpr ::System::Type*& __get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_type() const;

  constexpr void __set_type(::System::Type* value);

  static inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0* New_ctor();

  /// @brief Method .ctor addr 0x2f26b74 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetFieldInfos>b__1 addr 0x2f26b7c size 0xb4 virtual false final false
  inline ::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo* _GetFieldInfos_b__1(::System::Reflection::FieldInfo* x);

  /// @brief Method __zenCreate addr 0x2f26c30 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2f26c8c size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionTypeAnalyzer____c__DisplayClass6_0(__ReflectionTypeAnalyzer____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionTypeAnalyzer____c__DisplayClass6_0(__ReflectionTypeAnalyzer____c__DisplayClass6_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionTypeAnalyzer____c__DisplayClass6_0();

public:
  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0, 0x18>, "Size mismatch!");

} // namespace Zenject::Internal
// Type: ::<>c__DisplayClass6_1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11389))
// CS Name: ::ReflectionTypeAnalyzer::<>c__DisplayClass6_1*
class CORDL_TYPE __ReflectionTypeAnalyzer____c__DisplayClass6_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __get_x, put = __set_x))::System::Reflection::FieldInfo* x;

  constexpr ::System::Reflection::FieldInfo*& __get_x();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::FieldInfo*> const& __get_x() const;

  constexpr void __set_x(::System::Reflection::FieldInfo* value);

  static inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1* New_ctor();

  /// @brief Method .ctor addr 0x2f266c8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetFieldInfos>b__2 addr 0x2f26e4c size 0xcc virtual false final false
  inline bool _GetFieldInfos_b__2(::System::Type* a);

  /// @brief Method __zenCreate addr 0x2f26f18 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2f26f74 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass6_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionTypeAnalyzer____c__DisplayClass6_1(__ReflectionTypeAnalyzer____c__DisplayClass6_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass6_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionTypeAnalyzer____c__DisplayClass6_1(__ReflectionTypeAnalyzer____c__DisplayClass6_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionTypeAnalyzer____c__DisplayClass6_1();

public:
  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::FieldInfo* ___x;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1, 0x18>, "Size mismatch!");

} // namespace Zenject::Internal
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11390))
// CS Name: ::ReflectionTypeAnalyzer::<>c__DisplayClass7_0*
class CORDL_TYPE __ReflectionTypeAnalyzer____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __get_type, put = __set_type))::System::Type* type;

  /// @brief Field <>9__2, offset 0x18, size 0x8
  __declspec(property(get = __get___9__2, put = __set___9__2))::System::Func_2<::System::Reflection::ParameterInfo*, ::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>* __9__2;

  constexpr ::System::Type*& __get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_type() const;

  constexpr void __set_type(::System::Type* value);

  constexpr ::System::Func_2<::System::Reflection::ParameterInfo*, ::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*& __get___9__2();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::System::Reflection::ParameterInfo*, ::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>*> const& __get___9__2() const;

  constexpr void __set___9__2(::System::Func_2<::System::Reflection::ParameterInfo*, ::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>* value);

  static inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0* New_ctor();

  /// @brief Method .ctor addr 0x2f27134 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetMethodInfos>b__2 addr 0x2f2713c size 0x6c virtual false final false
  inline ::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo* _GetMethodInfos_b__2(::System::Reflection::ParameterInfo* x);

  /// @brief Method __zenCreate addr 0x2f271a8 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2f27204 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionTypeAnalyzer____c__DisplayClass7_0(__ReflectionTypeAnalyzer____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionTypeAnalyzer____c__DisplayClass7_0(__ReflectionTypeAnalyzer____c__DisplayClass7_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionTypeAnalyzer____c__DisplayClass7_0();

public:
  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  /// @brief Field <>9__2, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::System::Reflection::ParameterInfo*, ::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo*>* _____9__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0, 0x20>, "Size mismatch!");

} // namespace Zenject::Internal
// Type: ::<>c__DisplayClass7_1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11391))
// CS Name: ::ReflectionTypeAnalyzer::<>c__DisplayClass7_1*
class CORDL_TYPE __ReflectionTypeAnalyzer____c__DisplayClass7_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __get_x, put = __set_x))::System::Reflection::MethodInfo* x;

  constexpr ::System::Reflection::MethodInfo*& __get_x();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const& __get_x() const;

  constexpr void __set_x(::System::Reflection::MethodInfo* value);

  static inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1* New_ctor();

  /// @brief Method .ctor addr 0x2f267d0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetMethodInfos>b__1 addr 0x2f273c4 size 0x6c virtual false final false
  inline bool _GetMethodInfos_b__1(::System::Type* a);

  /// @brief Method __zenCreate addr 0x2f27430 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2f2748c size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass7_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionTypeAnalyzer____c__DisplayClass7_1(__ReflectionTypeAnalyzer____c__DisplayClass7_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass7_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionTypeAnalyzer____c__DisplayClass7_1(__ReflectionTypeAnalyzer____c__DisplayClass7_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionTypeAnalyzer____c__DisplayClass7_1();

public:
  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___x;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1, 0x18>, "Size mismatch!");

} // namespace Zenject::Internal
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11392))
// CS Name: ::ReflectionTypeAnalyzer::<>c__DisplayClass8_0*
class CORDL_TYPE __ReflectionTypeAnalyzer____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __get_type, put = __set_type))::System::Type* type;

  constexpr ::System::Type*& __get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_type() const;

  constexpr void __set_type(::System::Type* value);

  static inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0* New_ctor();

  /// @brief Method .ctor addr 0x2f2764c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <GetConstructorInfo>b__0 addr 0x2f27654 size 0x6c virtual false final false
  inline ::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo* _GetConstructorInfo_b__0(::System::Reflection::ParameterInfo* x);

  /// @brief Method __zenCreate addr 0x2f276c0 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2f2771c size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionTypeAnalyzer____c__DisplayClass8_0(__ReflectionTypeAnalyzer____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionTypeAnalyzer____c__DisplayClass8_0(__ReflectionTypeAnalyzer____c__DisplayClass8_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionTypeAnalyzer____c__DisplayClass8_0();

public:
  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0, 0x18>, "Size mismatch!");

} // namespace Zenject::Internal
// Type: ::<>c__DisplayClass11_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11393))
// CS Name: ::ReflectionTypeAnalyzer::<>c__DisplayClass11_0*
class CORDL_TYPE __ReflectionTypeAnalyzer____c__DisplayClass11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field c, offset 0x10, size 0x8
  __declspec(property(get = __get_c, put = __set_c))::System::Reflection::ConstructorInfo* c;

  constexpr ::System::Reflection::ConstructorInfo*& __get_c();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::ConstructorInfo*> const& __get_c() const;

  constexpr void __set_c(::System::Reflection::ConstructorInfo* value);

  static inline ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0* New_ctor();

  /// @brief Method .ctor addr 0x2f268d8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <TryGetInjectConstructor>b__3 addr 0x2f278dc size 0xcc virtual false final false
  inline bool _TryGetInjectConstructor_b__3(::System::Type* a);

  /// @brief Method __zenCreate addr 0x2f279a8 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2f27a04 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ReflectionTypeAnalyzer____c__DisplayClass11_0(__ReflectionTypeAnalyzer____c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ReflectionTypeAnalyzer____c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ReflectionTypeAnalyzer____c__DisplayClass11_0(__ReflectionTypeAnalyzer____c__DisplayClass11_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ReflectionTypeAnalyzer____c__DisplayClass11_0();

public:
  /// @brief Field c, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::ConstructorInfo* ___c;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0, 0x18>, "Size mismatch!");

} // namespace Zenject::Internal
// Type: Zenject.Internal::ReflectionTypeAnalyzer
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11394))
// CS Name: ::Zenject.Internal::ReflectionTypeAnalyzer*
class CORDL_TYPE ReflectionTypeAnalyzer : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass11_0 = ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0;

  using __c__DisplayClass8_0 = ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0;

  using __c__DisplayClass7_1 = ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1;

  using __c__DisplayClass7_0 = ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0;

  using __c__DisplayClass6_1 = ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1;

  using __c__DisplayClass6_0 = ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0;

  using __c = ::Zenject::Internal::__ReflectionTypeAnalyzer____c;

  using __c__DisplayClass5_1 = ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1;

  using __c__DisplayClass5_0 = ::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0;

  /// @brief Field _injectAttributeTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF__injectAttributeTypes, put = setStaticF__injectAttributeTypes))::System::Collections::Generic::HashSet_1<::System::Type*>* _injectAttributeTypes;

  static inline void setStaticF__injectAttributeTypes(::System::Collections::Generic::HashSet_1<::System::Type*>* value);

  static inline ::System::Collections::Generic::HashSet_1<::System::Type*>* getStaticF__injectAttributeTypes();

  /// @brief Method AddCustomInjectAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename T> static inline void AddCustomInjectAttribute();

  /// @brief Method AddCustomInjectAttribute addr 0x2f23b28 size 0xd0 virtual false final false
  static inline void AddCustomInjectAttribute(::System::Type* type);

  /// @brief Method GetReflectionInfo addr 0x2f1f0e4 size 0x1e4 virtual false final false
  static inline ::Zenject::Internal::ReflectionTypeInfo* GetReflectionInfo(::System::Type* type);

  /// @brief Method GetPropertyInfos addr 0x2f24428 size 0x1f4 virtual false final false
  static inline ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectPropertyInfo*>* GetPropertyInfos(::System::Type* type);

  /// @brief Method GetFieldInfos addr 0x2f24234 size 0x1f4 virtual false final false
  static inline ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectFieldInfo*>* GetFieldInfos(::System::Type* type);

  /// @brief Method GetMethodInfos addr 0x2f23dfc size 0x438 virtual false final false
  static inline ::System::Collections::Generic::List_1<::Zenject::Internal::__ReflectionTypeInfo__InjectMethodInfo*>* GetMethodInfos(::System::Type* type);

  /// @brief Method GetConstructorInfo addr 0x2f23bf8 size 0x204 virtual false final false
  static inline ::Zenject::Internal::__ReflectionTypeInfo__InjectConstructorInfo* GetConstructorInfo(::System::Type* type);

  /// @brief Method CreateInjectableInfoForParam addr 0x2f24a20 size 0x22c virtual false final false
  static inline ::Zenject::Internal::__ReflectionTypeInfo__InjectParameterInfo* CreateInjectableInfoForParam(::System::Type* parentType, ::System::Reflection::ParameterInfo* paramInfo);

  /// @brief Method GetInjectableInfoForMember addr 0x2f24c4c size 0x1248 virtual false final false
  static inline ::Zenject::InjectableInfo* GetInjectableInfoForMember(::System::Type* parentType, ::System::Reflection::MemberInfo* memInfo);

  /// @brief Method TryGetInjectConstructor addr 0x2f2461c size 0x404 virtual false final false
  static inline ::System::Reflection::ConstructorInfo* TryGetInjectConstructor(::System::Type* type);

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionTypeAnalyzer(ReflectionTypeAnalyzer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionTypeAnalyzer(ReflectionTypeAnalyzer const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionTypeAnalyzer();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionTypeAnalyzer, 0x10>, "Size mismatch!");

} // namespace Zenject::Internal
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeAnalyzer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeAnalyzer*, "Zenject.Internal", "ReflectionTypeAnalyzer");
NEED_NO_BOX(::Zenject::Internal::__ReflectionTypeAnalyzer____c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ReflectionTypeAnalyzer____c*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c");
NEED_NO_BOX(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass11_0*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass11_0");
NEED_NO_BOX(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_0*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass5_0");
NEED_NO_BOX(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass5_1*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass5_1");
NEED_NO_BOX(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_0*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass6_0");
NEED_NO_BOX(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass6_1*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass6_1");
NEED_NO_BOX(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_0*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass7_0");
NEED_NO_BOX(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass7_1*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass7_1");
NEED_NO_BOX(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::__ReflectionTypeAnalyzer____c__DisplayClass8_0*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass8_0");
