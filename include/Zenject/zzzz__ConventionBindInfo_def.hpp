#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(ConventionBindInfo)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace Zenject {
class __ConventionBindInfo____c__DisplayClass7_0;
}
namespace Zenject {
class __ConventionBindInfo____c__DisplayClass6_0;
}
namespace System {
class Type;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
class ConventionBindInfo;
}
namespace Zenject {
class __ConventionBindInfo____c__DisplayClass6_0;
}
namespace Zenject {
class __ConventionBindInfo____c__DisplayClass7_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ConventionBindInfo);
MARK_REF_PTR_T(::Zenject::__ConventionBindInfo____c__DisplayClass6_0);
MARK_REF_PTR_T(::Zenject::__ConventionBindInfo____c__DisplayClass7_0);
// Type: ::<>c__DisplayClass6_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10685))
// CS Name: ::ConventionBindInfo::<>c__DisplayClass6_0*
class CORDL_TYPE __ConventionBindInfo____c__DisplayClass6_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field assembly, offset 0x10, size 0x8
  __declspec(property(get = __get_assembly, put = __set_assembly))::System::Reflection::Assembly* assembly;

  constexpr ::System::Reflection::Assembly*& __get_assembly();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::Assembly*> const& __get_assembly() const;

  constexpr void __set_assembly(::System::Reflection::Assembly* value);

  static inline ::Zenject::__ConventionBindInfo____c__DisplayClass6_0* New_ctor();

  /// @brief Method .ctor addr 0x2ec8900 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ShouldIncludeAssembly>b__0 addr 0x2ec8b78 size 0x28 virtual false final false
  inline bool _ShouldIncludeAssembly_b__0(::System::Func_2<::System::Reflection::Assembly*, bool>* predicate);

  /// @brief Method __zenCreate addr 0x2ec8ba0 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2ec8bfc size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionBindInfo____c__DisplayClass6_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionBindInfo____c__DisplayClass6_0(__ConventionBindInfo____c__DisplayClass6_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionBindInfo____c__DisplayClass6_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionBindInfo____c__DisplayClass6_0(__ConventionBindInfo____c__DisplayClass6_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionBindInfo____c__DisplayClass6_0();

public:
  /// @brief Field assembly, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::Assembly* ___assembly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ConventionBindInfo____c__DisplayClass6_0, 0x18>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10686))
// CS Name: ::ConventionBindInfo::<>c__DisplayClass7_0*
class CORDL_TYPE __ConventionBindInfo____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __get_type, put = __set_type))::System::Type* type;

  constexpr ::System::Type*& __get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_type() const;

  constexpr void __set_type(::System::Type* value);

  static inline ::Zenject::__ConventionBindInfo____c__DisplayClass7_0* New_ctor();

  /// @brief Method .ctor addr 0x2ec89e0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ShouldIncludeType>b__0 addr 0x2ec8dbc size 0x28 virtual false final false
  inline bool _ShouldIncludeType_b__0(::System::Func_2<::System::Type*, bool>* predicate);

  /// @brief Method __zenCreate addr 0x2ec8de4 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2ec8e40 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionBindInfo____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ConventionBindInfo____c__DisplayClass7_0(__ConventionBindInfo____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ConventionBindInfo____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ConventionBindInfo____c__DisplayClass7_0(__ConventionBindInfo____c__DisplayClass7_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ConventionBindInfo____c__DisplayClass7_0();

public:
  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ConventionBindInfo____c__DisplayClass7_0, 0x18>, "Size mismatch!");

} // namespace Zenject
// Type: Zenject::ConventionBindInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10687))
// CS Name: ::Zenject::ConventionBindInfo*
class CORDL_TYPE ConventionBindInfo : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass7_0 = ::Zenject::__ConventionBindInfo____c__DisplayClass7_0;

  using __c__DisplayClass6_0 = ::Zenject::__ConventionBindInfo____c__DisplayClass6_0;

  /// @brief Field _typeFilters, offset 0x10, size 0x8
  __declspec(property(get = __get__typeFilters, put = __set__typeFilters))::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>* _typeFilters;

  /// @brief Field _assemblyFilters, offset 0x18, size 0x8
  __declspec(property(get = __get__assemblyFilters, put = __set__assemblyFilters))::System::Collections::Generic::List_1<::System::Func_2<::System::Reflection::Assembly*, bool>*>* _assemblyFilters;

  /// @brief Field _assemblyTypeCache, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF__assemblyTypeCache,
      put = setStaticF__assemblyTypeCache))::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* _assemblyTypeCache;

  constexpr ::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>*& __get__typeFilters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>*> const& __get__typeFilters() const;

  constexpr void __set__typeFilters(::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>* value);

  constexpr ::System::Collections::Generic::List_1<::System::Func_2<::System::Reflection::Assembly*, bool>*>*& __get__assemblyFilters();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Func_2<::System::Reflection::Assembly*, bool>*>*> const& __get__assemblyFilters() const;

  constexpr void __set__assemblyFilters(::System::Collections::Generic::List_1<::System::Func_2<::System::Reflection::Assembly*, bool>*>* value);

  static inline void setStaticF__assemblyTypeCache(::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* value);

  static inline ::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::ArrayW<::System::Type*, ::Array<::System::Type*>*>>* getStaticF__assemblyTypeCache();

  /// @brief Method AddAssemblyFilter addr 0x2ec8180 size 0xa8 virtual false final false
  inline void AddAssemblyFilter(::System::Func_2<::System::Reflection::Assembly*, bool>* predicate);

  /// @brief Method AddTypeFilter addr 0x2ec8760 size 0xa8 virtual false final false
  inline void AddTypeFilter(::System::Func_2<::System::Type*, bool>* predicate);

  /// @brief Method GetAllAssemblies addr 0x2ec8808 size 0x20 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* GetAllAssemblies();

  /// @brief Method ShouldIncludeAssembly addr 0x2ec8828 size 0xd8 virtual false final false
  inline bool ShouldIncludeAssembly(::System::Reflection::Assembly* assembly);

  /// @brief Method ShouldIncludeType addr 0x2ec8908 size 0xd8 virtual false final false
  inline bool ShouldIncludeType(::System::Type* type);

  /// @brief Method GetTypes addr 0x2ec89e8 size 0x100 virtual false final false
  inline ::ArrayW<::System::Type*, ::Array<::System::Type*>*> GetTypes(::System::Reflection::Assembly* assembly);

  /// @brief Method ResolveTypes addr 0x2ec7148 size 0x1b0 virtual false final false
  inline ::System::Collections::Generic::List_1<::System::Type*>* ResolveTypes();

  static inline ::Zenject::ConventionBindInfo* New_ctor();

  /// @brief Method .ctor addr 0x2ec7060 size 0xc0 virtual false final false
  inline void _ctor();

  /// @brief Method <ResolveTypes>b__9_0 addr 0x2ec8b74 size 0x4 virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* _ResolveTypes_b__9_0(::System::Reflection::Assembly* assembly);

  // Ctor Parameters [CppParam { name: "", ty: "ConventionBindInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConventionBindInfo(ConventionBindInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConventionBindInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConventionBindInfo(ConventionBindInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConventionBindInfo();

public:
  /// @brief Field _typeFilters, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>* ____typeFilters;

  /// @brief Field _assemblyFilters, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Func_2<::System::Reflection::Assembly*, bool>*>* ____assemblyFilters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ConventionBindInfo, 0x20>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ConventionBindInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConventionBindInfo*, "Zenject", "ConventionBindInfo");
NEED_NO_BOX(::Zenject::__ConventionBindInfo____c__DisplayClass6_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ConventionBindInfo____c__DisplayClass6_0*, "Zenject", "ConventionBindInfo/<>c__DisplayClass6_0");
NEED_NO_BOX(::Zenject::__ConventionBindInfo____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ConventionBindInfo____c__DisplayClass7_0*, "Zenject", "ConventionBindInfo/<>c__DisplayClass7_0");
