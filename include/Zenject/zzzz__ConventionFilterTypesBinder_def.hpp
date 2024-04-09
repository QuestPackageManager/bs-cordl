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
namespace System::Text::RegularExpressions {
struct RegexOptions;
}
namespace System::Text::RegularExpressions {
class Regex;
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
namespace Zenject {
class ConventionBindInfo;
}
namespace Zenject {
class InjectTypeInfo;
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
// CS Name: ::ConventionFilterTypesBinder::<>c__DisplayClass2_0*
class CORDL_TYPE __ConventionFilterTypesBinder____c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field parentType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_parentType, put = __cordl_internal_set_parentType))::System::Type* parentType;

  static inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0* New_ctor();

  /// @brief Method <DerivingFromOrEqual>b__0, addr 0x34168c0, size 0x68, virtual false, abstract: false, final false
  inline bool _DerivingFromOrEqual_b__0(::System::Type* type);

  constexpr ::System::Type*& __cordl_internal_get_parentType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_parentType() const;

  constexpr void __cordl_internal_set_parentType(::System::Type* value);

  /// @brief Method __zenCreate, addr 0x3416928, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x3416984, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x3416028, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionFilterTypesBinder____c__DisplayClass2_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionFilterTypesBinder____c__DisplayClass2_0(__ConventionFilterTypesBinder____c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionFilterTypesBinder____c__DisplayClass2_0(__ConventionFilterTypesBinder____c__DisplayClass2_0 const&) = delete;

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
// CS Name: ::ConventionFilterTypesBinder::<>c__DisplayClass4_0*
class CORDL_TYPE __ConventionFilterTypesBinder____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field parentType, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_parentType, put = __cordl_internal_set_parentType))::System::Type* parentType;

  static inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0* New_ctor();

  /// @brief Method <DerivingFrom>b__0, addr 0x3416b44, size 0x68, virtual false, abstract: false, final false
  inline bool _DerivingFrom_b__0(::System::Type* type);

  constexpr ::System::Type*& __cordl_internal_get_parentType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_parentType() const;

  constexpr void __cordl_internal_set_parentType(::System::Type* value);

  /// @brief Method __zenCreate, addr 0x3416bac, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x3416c08, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x34160fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionFilterTypesBinder____c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionFilterTypesBinder____c__DisplayClass4_0(__ConventionFilterTypesBinder____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionFilterTypesBinder____c__DisplayClass4_0(__ConventionFilterTypesBinder____c__DisplayClass4_0 const&) = delete;

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
// CS Name: ::ConventionFilterTypesBinder::<>c__DisplayClass6_0*
class CORDL_TYPE __ConventionFilterTypesBinder____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field attribute, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_attribute, put = __cordl_internal_set_attribute))::System::Type* attribute;

  static inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0* New_ctor();

  /// @brief Method <WithAttribute>b__0, addr 0x3416dc8, size 0xc8, virtual false, abstract: false, final false
  inline bool _WithAttribute_b__0(::System::Type* t);

  constexpr ::System::Type*& __cordl_internal_get_attribute();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_attribute() const;

  constexpr void __cordl_internal_set_attribute(::System::Type* value);

  /// @brief Method __zenCreate, addr 0x3416e90, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x3416eec, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x3416224, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionFilterTypesBinder____c__DisplayClass6_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionFilterTypesBinder____c__DisplayClass6_0(__ConventionFilterTypesBinder____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionFilterTypesBinder____c__DisplayClass6_0(__ConventionFilterTypesBinder____c__DisplayClass6_0 const&) = delete;

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
// CS Name: ::ConventionFilterTypesBinder::<>c__DisplayClass8_0*
class CORDL_TYPE __ConventionFilterTypesBinder____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field attribute, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_attribute, put = __cordl_internal_set_attribute))::System::Type* attribute;

  static inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0* New_ctor();

  /// @brief Method <WithoutAttribute>b__0, addr 0x34170ac, size 0xd4, virtual false, abstract: false, final false
  inline bool _WithoutAttribute_b__0(::System::Type* t);

  constexpr ::System::Type*& __cordl_internal_get_attribute();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_attribute() const;

  constexpr void __cordl_internal_set_attribute(::System::Type* value);

  /// @brief Method __zenCreate, addr 0x3417180, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x34171dc, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x341634c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionFilterTypesBinder____c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionFilterTypesBinder____c__DisplayClass8_0(__ConventionFilterTypesBinder____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionFilterTypesBinder____c__DisplayClass8_0(__ConventionFilterTypesBinder____c__DisplayClass8_0 const&) = delete;

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
// CS Name: ::ConventionFilterTypesBinder::<>c__DisplayClass9_0`1<T>*
class CORDL_TYPE __ConventionFilterTypesBinder____c__DisplayClass9_0_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field predicate, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_predicate, put = __cordl_internal_set_predicate))::System::Func_2<T, bool>* predicate;

  static inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass9_0_1<T>* New_ctor();

  /// @brief Method <WithAttributeWhere>b__0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool _WithAttributeWhere_b__0(::System::Type* t);

  constexpr ::System::Func_2<T, bool>*& __cordl_internal_get_predicate();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<T, bool>*> const& __cordl_internal_get_predicate() const;

  constexpr void __cordl_internal_set_predicate(::System::Func_2<T, bool>* value);

  /// @brief Method __zenCreate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionFilterTypesBinder____c__DisplayClass9_0_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass9_0_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionFilterTypesBinder____c__DisplayClass9_0_1(__ConventionFilterTypesBinder____c__DisplayClass9_0_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass9_0_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionFilterTypesBinder____c__DisplayClass9_0_1(__ConventionFilterTypesBinder____c__DisplayClass9_0_1 const&) = delete;

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
// CS Name: ::ConventionFilterTypesBinder::<>c__DisplayClass13_0*
class CORDL_TYPE __ConventionFilterTypesBinder____c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field namespaces, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_namespaces, put = __cordl_internal_set_namespaces))::System::Collections::Generic::IEnumerable_1<::StringW>* namespaces;

  static inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0* New_ctor();

  /// @brief Method <InNamespaces>b__0, addr 0x341739c, size 0xd8, virtual false, abstract: false, final false
  inline bool _InNamespaces_b__0(::System::Type* t);

  constexpr ::System::Collections::Generic::IEnumerable_1<::StringW>*& __cordl_internal_get_namespaces();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IEnumerable_1<::StringW>*> const& __cordl_internal_get_namespaces() const;

  constexpr void __cordl_internal_set_namespaces(::System::Collections::Generic::IEnumerable_1<::StringW>* value);

  /// @brief Method __zenCreate, addr 0x341747c, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x34174d8, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x34164e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionFilterTypesBinder____c__DisplayClass13_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionFilterTypesBinder____c__DisplayClass13_0(__ConventionFilterTypesBinder____c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionFilterTypesBinder____c__DisplayClass13_0(__ConventionFilterTypesBinder____c__DisplayClass13_0 const&) = delete;

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
// CS Name: ::ConventionFilterTypesBinder::<>c__DisplayClass13_1*
class CORDL_TYPE __ConventionFilterTypesBinder____c__DisplayClass13_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field t, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_t, put = __cordl_internal_set_t))::System::Type* t;

  static inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1* New_ctor();

  /// @brief Method <InNamespaces>b__1, addr 0x3417698, size 0x8, virtual false, abstract: false, final false
  inline bool _InNamespaces_b__1(::StringW n);

  constexpr ::System::Type*& __cordl_internal_get_t();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_t() const;

  constexpr void __cordl_internal_set_t(::System::Type* value);

  /// @brief Method __zenCreate, addr 0x34176a0, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x34176fc, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x3417474, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionFilterTypesBinder____c__DisplayClass13_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass13_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionFilterTypesBinder____c__DisplayClass13_1(__ConventionFilterTypesBinder____c__DisplayClass13_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass13_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionFilterTypesBinder____c__DisplayClass13_1(__ConventionFilterTypesBinder____c__DisplayClass13_1 const&) = delete;

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
// CS Name: ::ConventionFilterTypesBinder::<>c__DisplayClass14_0*
class CORDL_TYPE __ConventionFilterTypesBinder____c__DisplayClass14_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field suffix, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_suffix, put = __cordl_internal_set_suffix))::StringW suffix;

  static inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0* New_ctor();

  /// @brief Method <WithSuffix>b__0, addr 0x34178bc, size 0x38, virtual false, abstract: false, final false
  inline bool _WithSuffix_b__0(::System::Type* t);

  constexpr ::StringW const& __cordl_internal_get_suffix() const;

  constexpr ::StringW& __cordl_internal_get_suffix();

  constexpr void __cordl_internal_set_suffix(::StringW value);

  /// @brief Method __zenCreate, addr 0x34178f4, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x3417950, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x34165bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionFilterTypesBinder____c__DisplayClass14_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass14_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionFilterTypesBinder____c__DisplayClass14_0(__ConventionFilterTypesBinder____c__DisplayClass14_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass14_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionFilterTypesBinder____c__DisplayClass14_0(__ConventionFilterTypesBinder____c__DisplayClass14_0 const&) = delete;

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
// CS Name: ::ConventionFilterTypesBinder::<>c__DisplayClass15_0*
class CORDL_TYPE __ConventionFilterTypesBinder____c__DisplayClass15_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field prefix, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_prefix, put = __cordl_internal_set_prefix))::StringW prefix;

  static inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0* New_ctor();

  /// @brief Method <WithPrefix>b__0, addr 0x3417b10, size 0x38, virtual false, abstract: false, final false
  inline bool _WithPrefix_b__0(::System::Type* t);

  constexpr ::StringW const& __cordl_internal_get_prefix() const;

  constexpr ::StringW& __cordl_internal_get_prefix();

  constexpr void __cordl_internal_set_prefix(::StringW value);

  /// @brief Method __zenCreate, addr 0x3417b48, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x3417ba4, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x3416690, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionFilterTypesBinder____c__DisplayClass15_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionFilterTypesBinder____c__DisplayClass15_0(__ConventionFilterTypesBinder____c__DisplayClass15_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass15_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionFilterTypesBinder____c__DisplayClass15_0(__ConventionFilterTypesBinder____c__DisplayClass15_0 const&) = delete;

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
// CS Name: ::ConventionFilterTypesBinder::<>c__DisplayClass18_0*
class CORDL_TYPE __ConventionFilterTypesBinder____c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field regex, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_regex, put = __cordl_internal_set_regex))::System::Text::RegularExpressions::Regex* regex;

  static inline ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0* New_ctor();

  /// @brief Method <MatchingRegex>b__0, addr 0x3417d64, size 0x3c, virtual false, abstract: false, final false
  inline bool _MatchingRegex_b__0(::System::Type* t);

  constexpr ::System::Text::RegularExpressions::Regex*& __cordl_internal_get_regex();

  constexpr ::cordl_internals::to_const_pointer<::System::Text::RegularExpressions::Regex*> const& __cordl_internal_get_regex() const;

  constexpr void __cordl_internal_set_regex(::System::Text::RegularExpressions::Regex* value);

  /// @brief Method __zenCreate, addr 0x3417da0, size 0x5c, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x3417dfc, size 0x1c0, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x34167e8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionFilterTypesBinder____c__DisplayClass18_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionFilterTypesBinder____c__DisplayClass18_0(__ConventionFilterTypesBinder____c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionFilterTypesBinder____c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionFilterTypesBinder____c__DisplayClass18_0(__ConventionFilterTypesBinder____c__DisplayClass18_0 const&) = delete;

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
// CS Name: ::Zenject::ConventionFilterTypesBinder*
class CORDL_TYPE ConventionFilterTypesBinder : public ::Zenject::ConventionAssemblySelectionBinder {
public:
  // Declarations
  using __c__DisplayClass13_0 = ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_0;

  using __c__DisplayClass13_1 = ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass13_1;

  using __c__DisplayClass14_0 = ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass14_0;

  using __c__DisplayClass15_0 = ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass15_0;

  using __c__DisplayClass18_0 = ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass18_0;

  using __c__DisplayClass2_0 = ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass2_0;

  using __c__DisplayClass4_0 = ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass4_0;

  using __c__DisplayClass6_0 = ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass6_0;

  using __c__DisplayClass8_0 = ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass8_0;

  template <typename T> using __c__DisplayClass9_0_1 = ::Zenject::__ConventionFilterTypesBinder____c__DisplayClass9_0_1<T>;

  /// @brief Method DerivingFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::ConventionFilterTypesBinder* DerivingFrom();

  /// @brief Method DerivingFrom, addr 0x3416030, size 0xcc, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* DerivingFrom(::System::Type* parentType);

  /// @brief Method DerivingFromOrEqual, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::ConventionFilterTypesBinder* DerivingFromOrEqual();

  /// @brief Method DerivingFromOrEqual, addr 0x3415f5c, size 0xcc, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* DerivingFromOrEqual(::System::Type* parentType);

  /// @brief Method InNamespace, addr 0x3416378, size 0xa0, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* InNamespace(::StringW ns);

  /// @brief Method InNamespaces, addr 0x3416418, size 0x4, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* InNamespaces(::ArrayW<::StringW, ::Array<::StringW>*> namespaces);

  /// @brief Method InNamespaces, addr 0x341641c, size 0xcc, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* InNamespaces(::System::Collections::Generic::IEnumerable_1<::StringW>* namespaces);

  /// @brief Method IsInNamespace, addr 0x34167f0, size 0xd0, virtual false, abstract: false, final false
  static inline bool IsInNamespace(::System::Type* type, ::StringW requiredNs);

  /// @brief Method MatchingRegex, addr 0x3416698, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* MatchingRegex(::StringW pattern);

  /// @brief Method MatchingRegex, addr 0x34166a0, size 0x7c, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* MatchingRegex(::StringW pattern, ::System::Text::RegularExpressions::RegexOptions options);

  /// @brief Method MatchingRegex, addr 0x341671c, size 0xcc, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* MatchingRegex(::System::Text::RegularExpressions::Regex* regex);

  static inline ::Zenject::ConventionFilterTypesBinder* New_ctor(::Zenject::ConventionBindInfo* bindInfo);

  /// @brief Method Where, addr 0x3416354, size 0x24, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* Where(::System::Func_2<::System::Type*, bool>* predicate);

  /// @brief Method WithAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::ConventionFilterTypesBinder* WithAttribute();

  /// @brief Method WithAttribute, addr 0x3416104, size 0x120, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* WithAttribute(::System::Type* attribute);

  /// @brief Method WithAttributeWhere, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::ConventionFilterTypesBinder* WithAttributeWhere(::System::Func_2<T, bool>* predicate);

  /// @brief Method WithPrefix, addr 0x34165c4, size 0xcc, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* WithPrefix(::StringW prefix);

  /// @brief Method WithSuffix, addr 0x34164f0, size 0xcc, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* WithSuffix(::StringW suffix);

  /// @brief Method WithoutAttribute, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline ::Zenject::ConventionFilterTypesBinder* WithoutAttribute();

  /// @brief Method WithoutAttribute, addr 0x341622c, size 0x120, virtual false, abstract: false, final false
  inline ::Zenject::ConventionFilterTypesBinder* WithoutAttribute(::System::Type* attribute);

  /// @brief Method .ctor, addr 0x3415f34, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::ConventionBindInfo* bindInfo);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConventionFilterTypesBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConventionFilterTypesBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConventionFilterTypesBinder(ConventionFilterTypesBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConventionFilterTypesBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConventionFilterTypesBinder(ConventionFilterTypesBinder const&) = delete;

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
