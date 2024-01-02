#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__ConventionAssemblySelectionBinder_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ConventionFilterTypesBinder)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace Zenject {
class __ConventionFilterTypesBinder____c__DisplayClass18_0;
}
namespace System::Text::RegularExpressions {
struct RegexOptions;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace Zenject {
class __ConventionFilterTypesBinder____c__DisplayClass8_0;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Zenject {
class __ConventionFilterTypesBinder____c__DisplayClass2_0;
}
namespace Zenject {
class __ConventionFilterTypesBinder____c__DisplayClass15_0;
}
namespace System {
class Type;
}
namespace Zenject {
class ConventionBindInfo;
}
namespace Zenject {
class __ConventionFilterTypesBinder____c__DisplayClass14_0;
}
namespace Zenject {
class __ConventionFilterTypesBinder____c__DisplayClass4_0;
}
namespace Zenject {
class __ConventionFilterTypesBinder____c__DisplayClass13_0;
}
namespace Zenject {
class __ConventionFilterTypesBinder____c__DisplayClass13_1;
}
namespace Zenject {
template <typename T> class __ConventionFilterTypesBinder____c__DisplayClass9_0_1;
}
namespace Zenject {
class __ConventionFilterTypesBinder____c__DisplayClass6_0;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class ConventionFilterTypesBinder;
}
namespace Zenject {
class __ConventionFilterTypesBinder____c__DisplayClass13_0;
}
namespace Zenject {
class __ConventionFilterTypesBinder____c__DisplayClass13_1;
}
namespace Zenject {
class __ConventionFilterTypesBinder____c__DisplayClass14_0;
}
namespace Zenject {
class __ConventionFilterTypesBinder____c__DisplayClass15_0;
}
namespace Zenject {
class __ConventionFilterTypesBinder____c__DisplayClass18_0;
}
namespace Zenject {
class __ConventionFilterTypesBinder____c__DisplayClass2_0;
}
namespace Zenject {
class __ConventionFilterTypesBinder____c__DisplayClass4_0;
}
namespace Zenject {
class __ConventionFilterTypesBinder____c__DisplayClass6_0;
}
namespace Zenject {
class __ConventionFilterTypesBinder____c__DisplayClass8_0;
}
namespace Zenject {
template <typename T> class __ConventionFilterTypesBinder____c__DisplayClass9_0_1;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ConventionFilterTypesBinder);
MARK_REF_PTR_T(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0);
MARK_REF_PTR_T(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1);
MARK_REF_PTR_T(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0);
MARK_REF_PTR_T(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0);
MARK_REF_PTR_T(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0);
MARK_REF_PTR_T(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0);
MARK_REF_PTR_T(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0);
MARK_REF_PTR_T(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0);
MARK_REF_PTR_T(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0);
MARK_GEN_REF_PTR_T(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass9_0_1);
// Type: ::<>c__DisplayClass2_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10688))
// CS Name: ::ConventionFilterTypesBinder::<>c__DisplayClass2_0*
class CORDL_TYPE __ConventionFilterTypesBinder____c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field parentType, offset 0x10, size 0x8
  __declspec(property(get = __get_parentType, put = __set_parentType))::System::Type* parentType;

  constexpr ::System::Type*& __get_parentType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_parentType() const;

  constexpr void __set_parentType(::System::Type* value);

  static inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ec90f4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DerivingFromOrEqual>b__0, addr 0x2ec998c, size 0x68, virtual false, abstract: false, final false
  inline bool _DerivingFromOrEqual_b__0(::System::Type* type);

  /// @brief Method __zenCreate, addr 0x2ec99f4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ec9a50, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionFilterTypesBinder____c__DisplayClass2_0(__ConventionFilterTypesBinder____c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionFilterTypesBinder____c__DisplayClass2_0(__ConventionFilterTypesBinder____c__DisplayClass2_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionFilterTypesBinder____c__DisplayClass2_0();

public:
  /// @brief Field parentType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___parentType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0, ___parentType) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10689))
// CS Name: ::ConventionFilterTypesBinder::<>c__DisplayClass4_0*
class CORDL_TYPE __ConventionFilterTypesBinder____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field parentType, offset 0x10, size 0x8
  __declspec(property(get = __get_parentType, put = __set_parentType))::System::Type* parentType;

  constexpr ::System::Type*& __get_parentType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_parentType() const;

  constexpr void __set_parentType(::System::Type* value);

  static inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ec91c8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <DerivingFrom>b__0, addr 0x2ec9c10, size 0x68, virtual false, abstract: false, final false
  inline bool _DerivingFrom_b__0(::System::Type* type);

  /// @brief Method __zenCreate, addr 0x2ec9c78, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ec9cd4, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionFilterTypesBinder____c__DisplayClass4_0(__ConventionFilterTypesBinder____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionFilterTypesBinder____c__DisplayClass4_0(__ConventionFilterTypesBinder____c__DisplayClass4_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionFilterTypesBinder____c__DisplayClass4_0();

public:
  /// @brief Field parentType, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___parentType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0, ___parentType) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10690))
// CS Name: ::ConventionFilterTypesBinder::<>c__DisplayClass6_0*
class CORDL_TYPE __ConventionFilterTypesBinder____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field attribute, offset 0x10, size 0x8
  __declspec(property(get = __get_attribute, put = __set_attribute))::System::Type* attribute;

  constexpr ::System::Type*& __get_attribute();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_attribute() const;

  constexpr void __set_attribute(::System::Type* value);

  static inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ec92f0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <WithAttribute>b__0, addr 0x2ec9e94, size 0xc8, virtual false, abstract: false, final false
  inline bool _WithAttribute_b__0(::System::Type* t);

  /// @brief Method __zenCreate, addr 0x2ec9f5c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ec9fb8, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionFilterTypesBinder____c__DisplayClass6_0(__ConventionFilterTypesBinder____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionFilterTypesBinder____c__DisplayClass6_0(__ConventionFilterTypesBinder____c__DisplayClass6_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionFilterTypesBinder____c__DisplayClass6_0();

public:
  /// @brief Field attribute, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___attribute;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0, ___attribute) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10691))
// CS Name: ::ConventionFilterTypesBinder::<>c__DisplayClass8_0*
class CORDL_TYPE __ConventionFilterTypesBinder____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field attribute, offset 0x10, size 0x8
  __declspec(property(get = __get_attribute, put = __set_attribute))::System::Type* attribute;

  constexpr ::System::Type*& __get_attribute();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_attribute() const;

  constexpr void __set_attribute(::System::Type* value);

  static inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ec9418, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <WithoutAttribute>b__0, addr 0x2eca178, size 0xd4, virtual false, abstract: false, final false
  inline bool _WithoutAttribute_b__0(::System::Type* t);

  /// @brief Method __zenCreate, addr 0x2eca24c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2eca2a8, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionFilterTypesBinder____c__DisplayClass8_0(__ConventionFilterTypesBinder____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionFilterTypesBinder____c__DisplayClass8_0(__ConventionFilterTypesBinder____c__DisplayClass8_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionFilterTypesBinder____c__DisplayClass8_0();

public:
  /// @brief Field attribute, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___attribute;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0, ___attribute) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass9_0`1
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10692))
// CS Name: ::ConventionFilterTypesBinder::<>c__DisplayClass9_0`1<T>*
class CORDL_TYPE __ConventionFilterTypesBinder____c__DisplayClass9_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field predicate, offset 0x10, size 0x8
  __declspec(property(get = __get_predicate, put = __set_predicate))::System::Func_2<T, bool>* predicate;

  constexpr ::System::Func_2<T, bool>*& __get_predicate();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<T, bool>*> const& __get_predicate() const;

  constexpr void __set_predicate(::System::Func_2<T, bool>* value);

  static inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass9_0_1<T>* New_ctor();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <WithAttributeWhere>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _WithAttributeWhere_b__0(::System::Type* t);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass9_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionFilterTypesBinder____c__DisplayClass9_0_1(__ConventionFilterTypesBinder____c__DisplayClass9_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass9_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionFilterTypesBinder____c__DisplayClass9_0_1(__ConventionFilterTypesBinder____c__DisplayClass9_0_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionFilterTypesBinder____c__DisplayClass9_0_1();

public:
  /// @brief Field predicate, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<T, bool>* ___predicate;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: ::<>c__DisplayClass13_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10693))
// CS Name: ::ConventionFilterTypesBinder::<>c__DisplayClass13_0*
class CORDL_TYPE __ConventionFilterTypesBinder____c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field namespaces, offset 0x10, size 0x8
  __declspec(property(get = __get_namespaces, put = __set_namespaces))::System::Collections::Generic::IEnumerable_1<::StringW>* namespaces;

  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& __get_namespaces();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::StringW>*> const& __get_namespaces() const;

  constexpr void __set_namespaces(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  static inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ec95b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <InNamespaces>b__0, addr 0x2eca468, size 0xd8, virtual false, abstract: false, final false
  inline bool _InNamespaces_b__0(::System::Type* t);

  /// @brief Method __zenCreate, addr 0x2eca548, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2eca5a4, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionFilterTypesBinder____c__DisplayClass13_0(__ConventionFilterTypesBinder____c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionFilterTypesBinder____c__DisplayClass13_0(__ConventionFilterTypesBinder____c__DisplayClass13_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionFilterTypesBinder____c__DisplayClass13_0();

public:
  /// @brief Field namespaces, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::StringW>* ___namespaces;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0, ___namespaces) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass13_1
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10694))
// CS Name: ::ConventionFilterTypesBinder::<>c__DisplayClass13_1*
class CORDL_TYPE __ConventionFilterTypesBinder____c__DisplayClass13_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field t, offset 0x10, size 0x8
  __declspec(property(get = __get_t, put = __set_t))::System::Type* t;

  constexpr ::System::Type*& __get_t();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_t() const;

  constexpr void __set_t(::System::Type* value);

  static inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1* New_ctor();

  /// @brief Method .ctor, addr 0x2eca540, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <InNamespaces>b__1, addr 0x2eca764, size 0x8, virtual false, abstract: false, final false
  inline bool _InNamespaces_b__1(::StringW n);

  /// @brief Method __zenCreate, addr 0x2eca76c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2eca7c8, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass13_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionFilterTypesBinder____c__DisplayClass13_1(__ConventionFilterTypesBinder____c__DisplayClass13_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass13_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionFilterTypesBinder____c__DisplayClass13_1(__ConventionFilterTypesBinder____c__DisplayClass13_1 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionFilterTypesBinder____c__DisplayClass13_1();

public:
  /// @brief Field t, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___t;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1, ___t) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass14_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10695))
// CS Name: ::ConventionFilterTypesBinder::<>c__DisplayClass14_0*
class CORDL_TYPE __ConventionFilterTypesBinder____c__DisplayClass14_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field suffix, offset 0x10, size 0x8
  __declspec(property(get = __get_suffix, put = __set_suffix))::StringW suffix;

  constexpr ::StringW& __get_suffix();

  constexpr ::StringW const& __get_suffix() const;

  constexpr void __set_suffix(::StringW value);

  static inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ec9688, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <WithSuffix>b__0, addr 0x2eca988, size 0x38, virtual false, abstract: false, final false
  inline bool _WithSuffix_b__0(::System::Type* t);

  /// @brief Method __zenCreate, addr 0x2eca9c0, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ecaa1c, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass14_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionFilterTypesBinder____c__DisplayClass14_0(__ConventionFilterTypesBinder____c__DisplayClass14_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass14_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionFilterTypesBinder____c__DisplayClass14_0(__ConventionFilterTypesBinder____c__DisplayClass14_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionFilterTypesBinder____c__DisplayClass14_0();

public:
  /// @brief Field suffix, offset: 0x10, size: 0x8, def value: None
  ::StringW ___suffix;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0, ___suffix) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass15_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10696))
// CS Name: ::ConventionFilterTypesBinder::<>c__DisplayClass15_0*
class CORDL_TYPE __ConventionFilterTypesBinder____c__DisplayClass15_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field prefix, offset 0x10, size 0x8
  __declspec(property(get = __get_prefix, put = __set_prefix))::StringW prefix;

  constexpr ::StringW& __get_prefix();

  constexpr ::StringW const& __get_prefix() const;

  constexpr void __set_prefix(::StringW value);

  static inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ec975c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <WithPrefix>b__0, addr 0x2ecabdc, size 0x38, virtual false, abstract: false, final false
  inline bool _WithPrefix_b__0(::System::Type* t);

  /// @brief Method __zenCreate, addr 0x2ecac14, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ecac70, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionFilterTypesBinder____c__DisplayClass15_0(__ConventionFilterTypesBinder____c__DisplayClass15_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass15_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionFilterTypesBinder____c__DisplayClass15_0(__ConventionFilterTypesBinder____c__DisplayClass15_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionFilterTypesBinder____c__DisplayClass15_0();

public:
  /// @brief Field prefix, offset: 0x10, size: 0x8, def value: None
  ::StringW ___prefix;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0, ___prefix) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass18_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10697))
// CS Name: ::ConventionFilterTypesBinder::<>c__DisplayClass18_0*
class CORDL_TYPE __ConventionFilterTypesBinder____c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field regex, offset 0x10, size 0x8
  __declspec(property(get = __get_regex, put = __set_regex))::System::Text::RegularExpressions::Regex* regex;

  constexpr ::System::Text::RegularExpressions::Regex*& __get_regex();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::Regex*> const& __get_regex() const;

  constexpr void __set_regex(::System::Text::RegularExpressions::Regex* value);

  static inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0* New_ctor();

  /// @brief Method .ctor, addr 0x2ec98b4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <MatchingRegex>b__0, addr 0x2ecae30, size 0x3c, virtual false, abstract: false, final false
  inline bool _MatchingRegex_b__0(::System::Type* t);

  /// @brief Method __zenCreate, addr 0x2ecae6c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x2ecaec8, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionFilterTypesBinder____c__DisplayClass18_0(__ConventionFilterTypesBinder____c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionFilterTypesBinder____c__DisplayClass18_0(__ConventionFilterTypesBinder____c__DisplayClass18_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionFilterTypesBinder____c__DisplayClass18_0();

public:
  /// @brief Field regex, offset: 0x10, size: 0x8, def value: None
  ::System::Text::RegularExpressions::Regex* ___regex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0, 0x18>, "Size mismatch!");

static_assert(offsetof(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0, ___regex) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: Zenject::ConventionFilterTypesBinder
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10684))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10698))
// CS Name: ::Zenject::ConventionFilterTypesBinder*
class CORDL_TYPE ConventionFilterTypesBinder : public ::Zenject::ConventionAssemblySelectionBinder {
public:
  // Declarations
  using __c__DisplayClass18_0 = ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0;

  using __c__DisplayClass15_0 = ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0;

  using __c__DisplayClass14_0 = ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0;

  using __c__DisplayClass13_1 = ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1;

  using __c__DisplayClass13_0 = ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0;

  template <typename T> using __c__DisplayClass9_0_1 = ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass9_0_1<T>;

  using __c__DisplayClass8_0 = ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0;

  using __c__DisplayClass6_0 = ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0;

  using __c__DisplayClass4_0 = ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0;

  using __c__DisplayClass2_0 = ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0;

  static inline ::Zenject::ConventionFilterTypesBinder* New_ctor(::Zenject::ConventionBindInfo* bindInfo);

  /// @brief Method .ctor, addr 0x2ec9000, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::ConventionBindInfo* bindInfo);

  /// @brief Method DerivingFromOrEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::ConventionFilterTypesBinder* DerivingFromOrEqual();

  /// @brief Method DerivingFromOrEqual, addr 0x2ec9028, size 0xcc, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* DerivingFromOrEqual(::System::Type* parentType);

  /// @brief Method DerivingFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::ConventionFilterTypesBinder* DerivingFrom();

  /// @brief Method DerivingFrom, addr 0x2ec90fc, size 0xcc, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* DerivingFrom(::System::Type* parentType);

  /// @brief Method WithAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::ConventionFilterTypesBinder* WithAttribute();

  /// @brief Method WithAttribute, addr 0x2ec91d0, size 0x120, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* WithAttribute(::System::Type* attribute);

  /// @brief Method WithoutAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::ConventionFilterTypesBinder* WithoutAttribute();

  /// @brief Method WithoutAttribute, addr 0x2ec92f8, size 0x120, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* WithoutAttribute(::System::Type* attribute);

  /// @brief Method WithAttributeWhere, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::ConventionFilterTypesBinder* WithAttributeWhere(::System::Func_2<T, bool>* predicate);

  /// @brief Method Where, addr 0x2ec9420, size 0x24, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* Where(::System::Func_2<::System::Type*, bool>* predicate);

  /// @brief Method InNamespace, addr 0x2ec9444, size 0xa0, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* InNamespace(::StringW ns);

  /// @brief Method InNamespaces, addr 0x2ec94e4, size 0x4, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* InNamespaces(::ArrayW<::StringW, ::Array<::StringW>*> namespaces);

  /// @brief Method InNamespaces, addr 0x2ec94e8, size 0xcc, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* InNamespaces(::System::Collections::Generic::IEnumerable_1<::StringW>* namespaces);

  /// @brief Method WithSuffix, addr 0x2ec95bc, size 0xcc, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* WithSuffix(::StringW suffix);

  /// @brief Method WithPrefix, addr 0x2ec9690, size 0xcc, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* WithPrefix(::StringW prefix);

  /// @brief Method MatchingRegex, addr 0x2ec9764, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* MatchingRegex(::StringW pattern);

  /// @brief Method MatchingRegex, addr 0x2ec976c, size 0x7c, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* MatchingRegex(::StringW pattern, ::System::Text::RegularExpressions::RegexOptions options);

  /// @brief Method MatchingRegex, addr 0x2ec97e8, size 0xcc, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* MatchingRegex(::System::Text::RegularExpressions::Regex* regex);

  /// @brief Method IsInNamespace, addr 0x2ec98bc, size 0xd0, virtual false, abstract: false, final false
  static inline bool IsInNamespace(::System::Type* type, ::StringW requiredNs);

  // Ctor Parameters [CppParam { name: "", ty: "ConventionFilterTypesBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConventionFilterTypesBinder(ConventionFilterTypesBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConventionFilterTypesBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConventionFilterTypesBinder(ConventionFilterTypesBinder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConventionFilterTypesBinder();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ConventionFilterTypesBinder, 0x18>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ConventionFilterTypesBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConventionFilterTypesBinder*, "Zenject", "ConventionFilterTypesBinder");
NEED_NO_BOX(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0*, "Zenject", "ConventionFilterTypesBinder/<>c__DisplayClass13_0");
NEED_NO_BOX(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1*, "Zenject", "ConventionFilterTypesBinder/<>c__DisplayClass13_1");
NEED_NO_BOX(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0*, "Zenject", "ConventionFilterTypesBinder/<>c__DisplayClass14_0");
NEED_NO_BOX(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0*, "Zenject", "ConventionFilterTypesBinder/<>c__DisplayClass15_0");
NEED_NO_BOX(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0*, "Zenject", "ConventionFilterTypesBinder/<>c__DisplayClass18_0");
NEED_NO_BOX(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0*, "Zenject", "ConventionFilterTypesBinder/<>c__DisplayClass2_0");
NEED_NO_BOX(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0*, "Zenject", "ConventionFilterTypesBinder/<>c__DisplayClass4_0");
NEED_NO_BOX(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0*, "Zenject", "ConventionFilterTypesBinder/<>c__DisplayClass6_0");
NEED_NO_BOX(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0*, "Zenject", "ConventionFilterTypesBinder/<>c__DisplayClass8_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__ConventionFilterTypesBinder____c__DisplayClass9_0_1, "Zenject", "ConventionFilterTypesBinder/<>c__DisplayClass9_0`1");
