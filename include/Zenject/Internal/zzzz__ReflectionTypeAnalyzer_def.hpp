#pragma once
// IWYU pragma private; include "Zenject/Internal/ReflectionTypeAnalyzer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionTypeAnalyzer)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
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
class MemberInfo;
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
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject::Internal {
class ReflectionTypeAnalyzer___c;
}
namespace Zenject::Internal {
class ReflectionTypeAnalyzer___c__DisplayClass11_0;
}
namespace Zenject::Internal {
class ReflectionTypeAnalyzer___c__DisplayClass5_0;
}
namespace Zenject::Internal {
class ReflectionTypeAnalyzer___c__DisplayClass5_1;
}
namespace Zenject::Internal {
class ReflectionTypeAnalyzer___c__DisplayClass6_0;
}
namespace Zenject::Internal {
class ReflectionTypeAnalyzer___c__DisplayClass6_1;
}
namespace Zenject::Internal {
class ReflectionTypeAnalyzer___c__DisplayClass7_0;
}
namespace Zenject::Internal {
class ReflectionTypeAnalyzer___c__DisplayClass7_1;
}
namespace Zenject::Internal {
class ReflectionTypeAnalyzer___c__DisplayClass8_0;
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
namespace Zenject::Internal {
class ReflectionTypeInfo;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class InjectableInfo;
}
// Forward declare root types
namespace Zenject::Internal {
class ReflectionTypeAnalyzer;
}
namespace Zenject::Internal {
class ReflectionTypeAnalyzer___c;
}
namespace Zenject::Internal {
class ReflectionTypeAnalyzer___c__DisplayClass11_0;
}
namespace Zenject::Internal {
class ReflectionTypeAnalyzer___c__DisplayClass5_0;
}
namespace Zenject::Internal {
class ReflectionTypeAnalyzer___c__DisplayClass5_1;
}
namespace Zenject::Internal {
class ReflectionTypeAnalyzer___c__DisplayClass6_0;
}
namespace Zenject::Internal {
class ReflectionTypeAnalyzer___c__DisplayClass6_1;
}
namespace Zenject::Internal {
class ReflectionTypeAnalyzer___c__DisplayClass7_0;
}
namespace Zenject::Internal {
class ReflectionTypeAnalyzer___c__DisplayClass7_1;
}
namespace Zenject::Internal {
class ReflectionTypeAnalyzer___c__DisplayClass8_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::Internal::ReflectionTypeAnalyzer);
MARK_REF_PTR_T(::Zenject::Internal::ReflectionTypeAnalyzer___c);
MARK_REF_PTR_T(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0);
MARK_REF_PTR_T(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0);
MARK_REF_PTR_T(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1);
MARK_REF_PTR_T(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0);
MARK_REF_PTR_T(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1);
MARK_REF_PTR_T(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0);
MARK_REF_PTR_T(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1);
MARK_REF_PTR_T(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0);
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ReflectionTypeAnalyzer/<>c
class CORDL_TYPE ReflectionTypeAnalyzer___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::Internal::ReflectionTypeAnalyzer___c* __9;

  /// @brief Field <>9__11_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_0, put = setStaticF___9__11_0)) ::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* __9__11_0;

  /// @brief Field <>9__11_1, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_1, put = setStaticF___9__11_1)) ::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* __9__11_1;

  /// @brief Field <>9__11_2, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__11_2, put = setStaticF___9__11_2)) ::System::Func_2<::System::Reflection::ConstructorInfo*, int32_t>* __9__11_2;

  /// @brief Field <>9__5_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__5_0, put = setStaticF___9__5_0)) ::System::Func_2<::System::Reflection::PropertyInfo*, bool>* __9__5_0;

  /// @brief Field <>9__6_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__6_0, put = setStaticF___9__6_0)) ::System::Func_2<::System::Reflection::FieldInfo*, bool>* __9__6_0;

  /// @brief Field <>9__7_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__7_0, put = setStaticF___9__7_0)) ::System::Func_2<::System::Reflection::MethodInfo*, bool>* __9__7_0;

  static inline ::Zenject::Internal::ReflectionTypeAnalyzer___c* New_ctor();

  /// @brief Method <GetFieldInfos>b__6_0, addr 0x4b5b72c, size 0x104, virtual false, abstract: false, final false
  inline bool _GetFieldInfos_b__6_0(::System::Reflection::FieldInfo* x);

  /// @brief Method <GetMethodInfos>b__7_0, addr 0x4b5b838, size 0x104, virtual false, abstract: false, final false
  inline bool _GetMethodInfos_b__7_0(::System::Reflection::MethodInfo* x);

  /// @brief Method <GetPropertyInfos>b__5_0, addr 0x4b5b620, size 0x104, virtual false, abstract: false, final false
  inline bool _GetPropertyInfos_b__5_0(::System::Reflection::PropertyInfo* x);

  /// @brief Method <TryGetInjectConstructor>b__11_0, addr 0x4b5b944, size 0x104, virtual false, abstract: false, final false
  inline bool _TryGetInjectConstructor_b__11_0(::System::Reflection::ConstructorInfo* c);

  /// @brief Method <TryGetInjectConstructor>b__11_1, addr 0x4b5ba50, size 0x18, virtual false, abstract: false, final false
  inline bool _TryGetInjectConstructor_b__11_1(::System::Reflection::ConstructorInfo* x);

  /// @brief Method <TryGetInjectConstructor>b__11_2, addr 0x4b5ba68, size 0x60, virtual false, abstract: false, final false
  inline int32_t _TryGetInjectConstructor_b__11_2(::System::Reflection::ConstructorInfo* x);

  /// @brief Method __zenCreate, addr 0x4b5bac8, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b5bb1c, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b5b618, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::Internal::ReflectionTypeAnalyzer___c* getStaticF___9();

  static inline ::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* getStaticF___9__11_0();

  static inline ::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* getStaticF___9__11_1();

  static inline ::System::Func_2<::System::Reflection::ConstructorInfo*, int32_t>* getStaticF___9__11_2();

  static inline ::System::Func_2<::System::Reflection::PropertyInfo*, bool>* getStaticF___9__5_0();

  static inline ::System::Func_2<::System::Reflection::FieldInfo*, bool>* getStaticF___9__6_0();

  static inline ::System::Func_2<::System::Reflection::MethodInfo*, bool>* getStaticF___9__7_0();

  static inline void setStaticF___9(::Zenject::Internal::ReflectionTypeAnalyzer___c* value);

  static inline void setStaticF___9__11_0(::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* value);

  static inline void setStaticF___9__11_1(::System::Func_2<::System::Reflection::ConstructorInfo*, bool>* value);

  static inline void setStaticF___9__11_2(::System::Func_2<::System::Reflection::ConstructorInfo*, int32_t>* value);

  static inline void setStaticF___9__5_0(::System::Func_2<::System::Reflection::PropertyInfo*, bool>* value);

  static inline void setStaticF___9__6_0(::System::Func_2<::System::Reflection::FieldInfo*, bool>* value);

  static inline void setStaticF___9__7_0(::System::Func_2<::System::Reflection::MethodInfo*, bool>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionTypeAnalyzer___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionTypeAnalyzer___c(ReflectionTypeAnalyzer___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionTypeAnalyzer___c(ReflectionTypeAnalyzer___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12725 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionTypeAnalyzer___c, 0x10>, "Size mismatch!");

} // namespace Zenject::Internal
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ReflectionTypeAnalyzer/<>c__DisplayClass11_0
class CORDL_TYPE ReflectionTypeAnalyzer___c__DisplayClass11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field c, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_c, put = __cordl_internal_set_c)) ::System::Reflection::ConstructorInfo* c;

  static inline ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0* New_ctor();

  /// @brief Method <TryGetInjectConstructor>b__3, addr 0x4b5bcd4, size 0xcc, virtual false, abstract: false, final false
  inline bool _TryGetInjectConstructor_b__3(::System::Type* a);

  constexpr ::System::Reflection::ConstructorInfo* const& __cordl_internal_get_c() const;

  constexpr ::System::Reflection::ConstructorInfo*& __cordl_internal_get_c();

  constexpr void __cordl_internal_set_c(::System::Reflection::ConstructorInfo* value);

  /// @brief Method __zenCreate, addr 0x4b5bda0, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b5bdf4, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b5ba48, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionTypeAnalyzer___c__DisplayClass11_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer___c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionTypeAnalyzer___c__DisplayClass11_0(ReflectionTypeAnalyzer___c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer___c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionTypeAnalyzer___c__DisplayClass11_0(ReflectionTypeAnalyzer___c__DisplayClass11_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12726 };

  /// @brief Field c, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::ConstructorInfo* ___c;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0, ___c) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0, 0x18>, "Size mismatch!");

} // namespace Zenject::Internal
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ReflectionTypeAnalyzer/<>c__DisplayClass5_0
class CORDL_TYPE ReflectionTypeAnalyzer___c__DisplayClass5_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  static inline ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0* New_ctor();

  /// @brief Method <GetPropertyInfos>b__1, addr 0x4b5bfb4, size 0xac, virtual false, abstract: false, final false
  inline ::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo* _GetPropertyInfos_b__1(::System::Reflection::PropertyInfo* x);

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method __zenCreate, addr 0x4b5c060, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b5c0b4, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b5bfac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionTypeAnalyzer___c__DisplayClass5_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer___c__DisplayClass5_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionTypeAnalyzer___c__DisplayClass5_0(ReflectionTypeAnalyzer___c__DisplayClass5_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer___c__DisplayClass5_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionTypeAnalyzer___c__DisplayClass5_0(ReflectionTypeAnalyzer___c__DisplayClass5_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12727 };

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0, ___type) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0, 0x18>, "Size mismatch!");

} // namespace Zenject::Internal
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ReflectionTypeAnalyzer/<>c__DisplayClass5_1
class CORDL_TYPE ReflectionTypeAnalyzer___c__DisplayClass5_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) ::System::Reflection::PropertyInfo* x;

  static inline ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1* New_ctor();

  /// @brief Method <GetPropertyInfos>b__2, addr 0x4b5c26c, size 0xcc, virtual false, abstract: false, final false
  inline bool _GetPropertyInfos_b__2(::System::Type* a);

  constexpr ::System::Reflection::PropertyInfo* const& __cordl_internal_get_x() const;

  constexpr ::System::Reflection::PropertyInfo*& __cordl_internal_get_x();

  constexpr void __cordl_internal_set_x(::System::Reflection::PropertyInfo* value);

  /// @brief Method __zenCreate, addr 0x4b5c338, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b5c38c, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b5b724, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionTypeAnalyzer___c__DisplayClass5_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer___c__DisplayClass5_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionTypeAnalyzer___c__DisplayClass5_1(ReflectionTypeAnalyzer___c__DisplayClass5_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer___c__DisplayClass5_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionTypeAnalyzer___c__DisplayClass5_1(ReflectionTypeAnalyzer___c__DisplayClass5_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12728 };

  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::PropertyInfo* ___x;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1, ___x) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1, 0x18>, "Size mismatch!");

} // namespace Zenject::Internal
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ReflectionTypeAnalyzer/<>c__DisplayClass6_0
class CORDL_TYPE ReflectionTypeAnalyzer___c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  static inline ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0* New_ctor();

  /// @brief Method <GetFieldInfos>b__1, addr 0x4b5c54c, size 0xac, virtual false, abstract: false, final false
  inline ::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo* _GetFieldInfos_b__1(::System::Reflection::FieldInfo* x);

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method __zenCreate, addr 0x4b5c5f8, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b5c64c, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b5c544, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionTypeAnalyzer___c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer___c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionTypeAnalyzer___c__DisplayClass6_0(ReflectionTypeAnalyzer___c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer___c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionTypeAnalyzer___c__DisplayClass6_0(ReflectionTypeAnalyzer___c__DisplayClass6_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12729 };

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0, ___type) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0, 0x18>, "Size mismatch!");

} // namespace Zenject::Internal
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ReflectionTypeAnalyzer/<>c__DisplayClass6_1
class CORDL_TYPE ReflectionTypeAnalyzer___c__DisplayClass6_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) ::System::Reflection::FieldInfo* x;

  static inline ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1* New_ctor();

  /// @brief Method <GetFieldInfos>b__2, addr 0x4b5c804, size 0xcc, virtual false, abstract: false, final false
  inline bool _GetFieldInfos_b__2(::System::Type* a);

  constexpr ::System::Reflection::FieldInfo* const& __cordl_internal_get_x() const;

  constexpr ::System::Reflection::FieldInfo*& __cordl_internal_get_x();

  constexpr void __cordl_internal_set_x(::System::Reflection::FieldInfo* value);

  /// @brief Method __zenCreate, addr 0x4b5c8d0, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b5c924, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b5b830, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionTypeAnalyzer___c__DisplayClass6_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer___c__DisplayClass6_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionTypeAnalyzer___c__DisplayClass6_1(ReflectionTypeAnalyzer___c__DisplayClass6_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer___c__DisplayClass6_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionTypeAnalyzer___c__DisplayClass6_1(ReflectionTypeAnalyzer___c__DisplayClass6_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12730 };

  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::FieldInfo* ___x;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1, ___x) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1, 0x18>, "Size mismatch!");

} // namespace Zenject::Internal
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ReflectionTypeAnalyzer/<>c__DisplayClass7_0
class CORDL_TYPE ReflectionTypeAnalyzer___c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__2, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___9__2,
                      put = __cordl_internal_set___9__2)) ::System::Func_2<::System::Reflection::ParameterInfo*, ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* __9__2;

  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  static inline ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0* New_ctor();

  /// @brief Method <GetMethodInfos>b__2, addr 0x4b5cae4, size 0x6c, virtual false, abstract: false, final false
  inline ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo* _GetMethodInfos_b__2(::System::Reflection::ParameterInfo* x);

  constexpr ::System::Func_2<::System::Reflection::ParameterInfo*, ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* const& __cordl_internal_get___9__2() const;

  constexpr ::System::Func_2<::System::Reflection::ParameterInfo*, ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>*& __cordl_internal_get___9__2();

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set___9__2(::System::Func_2<::System::Reflection::ParameterInfo*, ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method __zenCreate, addr 0x4b5cb50, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b5cba4, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b5cadc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionTypeAnalyzer___c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionTypeAnalyzer___c__DisplayClass7_0(ReflectionTypeAnalyzer___c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionTypeAnalyzer___c__DisplayClass7_0(ReflectionTypeAnalyzer___c__DisplayClass7_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12731 };

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  /// @brief Field <>9__2, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::System::Reflection::ParameterInfo*, ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo*>* _____9__2;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0, _____9__2) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0, 0x20>, "Size mismatch!");

} // namespace Zenject::Internal
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ReflectionTypeAnalyzer/<>c__DisplayClass7_1
class CORDL_TYPE ReflectionTypeAnalyzer___c__DisplayClass7_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field x, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_x, put = __cordl_internal_set_x)) ::System::Reflection::MethodInfo* x;

  static inline ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1* New_ctor();

  /// @brief Method <GetMethodInfos>b__1, addr 0x4b5cd5c, size 0x6c, virtual false, abstract: false, final false
  inline bool _GetMethodInfos_b__1(::System::Type* a);

  constexpr ::System::Reflection::MethodInfo* const& __cordl_internal_get_x() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_x();

  constexpr void __cordl_internal_set_x(::System::Reflection::MethodInfo* value);

  /// @brief Method __zenCreate, addr 0x4b5cdc8, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b5ce1c, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b5b93c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionTypeAnalyzer___c__DisplayClass7_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer___c__DisplayClass7_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionTypeAnalyzer___c__DisplayClass7_1(ReflectionTypeAnalyzer___c__DisplayClass7_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer___c__DisplayClass7_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionTypeAnalyzer___c__DisplayClass7_1(ReflectionTypeAnalyzer___c__DisplayClass7_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12732 };

  /// @brief Field x, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___x;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1, ___x) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1, 0x18>, "Size mismatch!");

} // namespace Zenject::Internal
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ReflectionTypeAnalyzer/<>c__DisplayClass8_0
class CORDL_TYPE ReflectionTypeAnalyzer___c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  static inline ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0* New_ctor();

  /// @brief Method <GetConstructorInfo>b__0, addr 0x4b5cfdc, size 0x6c, virtual false, abstract: false, final false
  inline ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo* _GetConstructorInfo_b__0(::System::Reflection::ParameterInfo* x);

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method __zenCreate, addr 0x4b5d048, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b5d09c, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b5cfd4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionTypeAnalyzer___c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer___c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionTypeAnalyzer___c__DisplayClass8_0(ReflectionTypeAnalyzer___c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer___c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionTypeAnalyzer___c__DisplayClass8_0(ReflectionTypeAnalyzer___c__DisplayClass8_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12733 };

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0, ___type) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0, 0x18>, "Size mismatch!");

} // namespace Zenject::Internal
// Dependencies System.Object
namespace Zenject::Internal {
// Is value type: false
// CS Name: Zenject.Internal.ReflectionTypeAnalyzer
class CORDL_TYPE ReflectionTypeAnalyzer : public ::System::Object {
public:
  // Declarations
  using __c = ::Zenject::Internal::ReflectionTypeAnalyzer___c;

  using __c__DisplayClass11_0 = ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0;

  using __c__DisplayClass5_0 = ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0;

  using __c__DisplayClass5_1 = ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1;

  using __c__DisplayClass6_0 = ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0;

  using __c__DisplayClass6_1 = ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1;

  using __c__DisplayClass7_0 = ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0;

  using __c__DisplayClass7_1 = ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1;

  using __c__DisplayClass8_0 = ::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0;

  /// @brief Field _injectAttributeTypes, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__injectAttributeTypes, put = setStaticF__injectAttributeTypes)) ::System::Collections::Generic::HashSet_1<::System::Type*>* _injectAttributeTypes;

  /// @brief Method AddCustomInjectAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline void AddCustomInjectAttribute();

  /// @brief Method AddCustomInjectAttribute, addr 0x4b5a260, size 0xd0, virtual false, abstract: false, final false
  static inline void AddCustomInjectAttribute(::System::Type* type);

  /// @brief Method CreateInjectableInfoForParam, addr 0x4b5b154, size 0x224, virtual false, abstract: false, final false
  static inline ::Zenject::Internal::ReflectionTypeInfo_InjectParameterInfo* CreateInjectableInfoForParam(::System::Type* parentType, ::System::Reflection::ParameterInfo* paramInfo);

  /// @brief Method GetConstructorInfo, addr 0x4b5a330, size 0x1f4, virtual false, abstract: false, final false
  static inline ::Zenject::Internal::ReflectionTypeInfo_InjectConstructorInfo* GetConstructorInfo(::System::Type* type);

  /// @brief Method GetFieldInfos, addr 0x4b5a94c, size 0x204, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectFieldInfo*>* GetFieldInfos(::System::Type* type);

  /// @brief Method GetInjectableInfoForMember, addr 0x4b5b378, size 0x244, virtual false, abstract: false, final false
  static inline ::Zenject::InjectableInfo* GetInjectableInfoForMember(::System::Type* parentType, ::System::Reflection::MemberInfo* memInfo);

  /// @brief Method GetMethodInfos, addr 0x4b5a524, size 0x428, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectMethodInfo*>* GetMethodInfos(::System::Type* type);

  /// @brief Method GetPropertyInfos, addr 0x4b5ab50, size 0x204, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::Zenject::Internal::ReflectionTypeInfo_InjectPropertyInfo*>* GetPropertyInfos(::System::Type* type);

  /// @brief Method GetReflectionInfo, addr 0x4b5570c, size 0x1e4, virtual false, abstract: false, final false
  static inline ::Zenject::Internal::ReflectionTypeInfo* GetReflectionInfo(::System::Type* type);

  /// @brief Method TryGetInjectConstructor, addr 0x4b5ad54, size 0x400, virtual false, abstract: false, final false
  static inline ::System::Reflection::ConstructorInfo* TryGetInjectConstructor(::System::Type* type);

  static inline ::System::Collections::Generic::HashSet_1<::System::Type*>* getStaticF__injectAttributeTypes();

  static inline void setStaticF__injectAttributeTypes(::System::Collections::Generic::HashSet_1<::System::Type*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReflectionTypeAnalyzer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReflectionTypeAnalyzer(ReflectionTypeAnalyzer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReflectionTypeAnalyzer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReflectionTypeAnalyzer(ReflectionTypeAnalyzer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12734 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::Internal::ReflectionTypeAnalyzer, 0x10>, "Size mismatch!");

} // namespace Zenject::Internal
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeAnalyzer);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeAnalyzer*, "Zenject.Internal", "ReflectionTypeAnalyzer");
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeAnalyzer___c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeAnalyzer___c*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c");
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass11_0*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass11_0");
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_0*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass5_0");
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass5_1*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass5_1");
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_0*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass6_0");
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass6_1*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass6_1");
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_0*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass7_0");
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass7_1*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass7_1");
NEED_NO_BOX(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ReflectionTypeAnalyzer___c__DisplayClass8_0*, "Zenject.Internal", "ReflectionTypeAnalyzer/<>c__DisplayClass8_0");
