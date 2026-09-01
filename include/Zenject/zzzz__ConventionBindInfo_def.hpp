#pragma once
// IWYU pragma private; include "Zenject\ConventionBindInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
CORDL_MODULE_EXPORT(ConventionBindInfo)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class Assembly;
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
class ConventionBindInfo___c__DisplayClass7_0;
}
namespace Zenject {
class ConventionBindInfo___c__DisplayClass8_0;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class ConventionBindInfo;
}
namespace Zenject {
class ConventionBindInfo___c__DisplayClass7_0;
}
namespace Zenject {
class ConventionBindInfo___c__DisplayClass8_0;
}
// Write type traits
MARK_REF_T(::Zenject::ConventionBindInfo*);
MARK_REF_T(::Zenject::ConventionBindInfo___c__DisplayClass7_0*);
MARK_REF_T(::Zenject::ConventionBindInfo___c__DisplayClass8_0*);
DEFINE_IL2CPP_CLASS(::Zenject::ConventionBindInfo*, "Zenject", "ConventionBindInfo");
DEFINE_IL2CPP_CLASS(::Zenject::ConventionBindInfo___c__DisplayClass7_0*, "Zenject", "ConventionBindInfo/<>c__DisplayClass7_0");
DEFINE_IL2CPP_CLASS(::Zenject::ConventionBindInfo___c__DisplayClass8_0*, "Zenject", "ConventionBindInfo/<>c__DisplayClass8_0");
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ConventionBindInfo/<>c__DisplayClass7_0
class CORDL_TYPE ConventionBindInfo___c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field assembly, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_assembly, put = __cordl_internal_set_assembly)) ::System::Reflection::Assembly* assembly;

  static inline ::Zenject::ConventionBindInfo___c__DisplayClass7_0* New_ctor();

  /// @brief Method <ShouldIncludeAssembly>b__0, addr 0x6e4c6c8, size 0x24, virtual false, abstract: false, final false
  inline bool _ShouldIncludeAssembly_b__0(::System::Func_2<::System::Reflection::Assembly*, bool>* predicate);

  constexpr ::System::Reflection::Assembly* const& __cordl_internal_get_assembly() const;

  constexpr ::System::Reflection::Assembly*& __cordl_internal_get_assembly();

  constexpr void __cordl_internal_set_assembly(::System::Reflection::Assembly* value);

  /// @brief Method __zenCreate, addr 0x6e4c6ec, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x6e4c730, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x6e4c408, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConventionBindInfo___c__DisplayClass7_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConventionBindInfo___c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConventionBindInfo___c__DisplayClass7_0(ConventionBindInfo___c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConventionBindInfo___c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConventionBindInfo___c__DisplayClass7_0(ConventionBindInfo___c__DisplayClass7_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14038 };

  /// @brief Field assembly, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::Assembly* ___assembly;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ConventionBindInfo___c__DisplayClass7_0, ___assembly) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Zenject::ConventionBindInfo___c__DisplayClass7_0) == 0x18, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ConventionBindInfo/<>c__DisplayClass8_0
class CORDL_TYPE ConventionBindInfo___c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  static inline ::Zenject::ConventionBindInfo___c__DisplayClass8_0* New_ctor();

  /// @brief Method <ShouldIncludeType>b__0, addr 0x6e4c8c4, size 0x24, virtual false, abstract: false, final false
  inline bool _ShouldIncludeType_b__0(::System::Func_2<::System::Type*, bool>* predicate);

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method __zenCreate, addr 0x6e4c8e8, size 0x44, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x6e4c92c, size 0x194, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x6e4c4e8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConventionBindInfo___c__DisplayClass8_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConventionBindInfo___c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConventionBindInfo___c__DisplayClass8_0(ConventionBindInfo___c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConventionBindInfo___c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConventionBindInfo___c__DisplayClass8_0(ConventionBindInfo___c__DisplayClass8_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14039 };

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ConventionBindInfo___c__DisplayClass8_0, ___type) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Zenject::ConventionBindInfo___c__DisplayClass8_0) == 0x18, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ConventionBindInfo
class CORDL_TYPE ConventionBindInfo : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass7_0 = ::Zenject::ConventionBindInfo___c__DisplayClass7_0;

  using __c__DisplayClass8_0 = ::Zenject::ConventionBindInfo___c__DisplayClass8_0;

  /// @brief Field _assemblyFilters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__assemblyFilters,
                      put = __cordl_internal_set__assemblyFilters)) ::System::Collections::Generic::List_1<::System::Func_2<::System::Reflection::Assembly*, bool>*>* _assemblyFilters;

  /// @brief Field _assemblyTypeCache, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__assemblyTypeCache,
                      put = setStaticF__assemblyTypeCache)) ::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::ArrayW<::System::Type*>>* _assemblyTypeCache;

  /// @brief Field _typeFilters, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__typeFilters, put = __cordl_internal_set__typeFilters)) ::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>* _typeFilters;

  /// @brief Method AddAssemblyFilter, addr 0x6e4bc48, size 0xb4, virtual false, abstract: false, final false
  inline void AddAssemblyFilter(::System::Func_2<::System::Reflection::Assembly*, bool>* predicate);

  /// @brief Method AddTypeFilter, addr 0x6e4c25c, size 0xb4, virtual false, abstract: false, final false
  inline void AddTypeFilter(::System::Func_2<::System::Type*, bool>* predicate);

  /// @brief Method GetAllAssemblies, addr 0x6e4c310, size 0x1c, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* GetAllAssemblies();

  /// @brief Method GetTypes, addr 0x6e4c4ec, size 0x124, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Type*> GetTypes(::System::Reflection::Assembly* assembly);

  static inline ::Zenject::ConventionBindInfo* New_ctor();

  /// @brief Method NoDomainReloadInit, addr 0x6e4c198, size 0xc4, virtual false, abstract: false, final false
  static inline void NoDomainReloadInit();

  /// @brief Method ResolveTypes, addr 0x6e4ad1c, size 0x1c0, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::System::Type*>* ResolveTypes();

  /// @brief Method ShouldIncludeAssembly, addr 0x6e4c32c, size 0xdc, virtual false, abstract: false, final false
  inline bool ShouldIncludeAssembly(::System::Reflection::Assembly* assembly);

  /// @brief Method ShouldIncludeType, addr 0x6e4c40c, size 0xdc, virtual false, abstract: false, final false
  inline bool ShouldIncludeType(::System::Type* type);

  /// @brief Method <ResolveTypes>b__10_0, addr 0x6e4c6c4, size 0x4, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* _ResolveTypes_b__10_0(::System::Reflection::Assembly* assembly);

  constexpr ::System::Collections::Generic::List_1<::System::Func_2<::System::Reflection::Assembly*, bool>*>* const& __cordl_internal_get__assemblyFilters() const;

  constexpr ::System::Collections::Generic::List_1<::System::Func_2<::System::Reflection::Assembly*, bool>*>*& __cordl_internal_get__assemblyFilters();

  constexpr ::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>* const& __cordl_internal_get__typeFilters() const;

  constexpr ::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>*& __cordl_internal_get__typeFilters();

  constexpr void __cordl_internal_set__assemblyFilters(::System::Collections::Generic::List_1<::System::Func_2<::System::Reflection::Assembly*, bool>*>* value);

  constexpr void __cordl_internal_set__typeFilters(::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>* value);

  /// @brief Method .ctor, addr 0x6e4ac58, size 0xbc, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::ArrayW<::System::Type*>>* getStaticF__assemblyTypeCache();

  static inline void setStaticF__assemblyTypeCache(::System::Collections::Generic::Dictionary_2<::System::Reflection::Assembly*, ::ArrayW<::System::Type*>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConventionBindInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConventionBindInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConventionBindInfo(ConventionBindInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConventionBindInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConventionBindInfo(ConventionBindInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 14040 };

  /// @brief Field _typeFilters, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Func_2<::System::Type*, bool>*>* ____typeFilters;

  /// @brief Field _assemblyFilters, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::Func_2<::System::Reflection::Assembly*, bool>*>* ____assemblyFilters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ConventionBindInfo, ____typeFilters) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::ConventionBindInfo, ____assemblyFilters) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Zenject::ConventionBindInfo) == 0x20, "Size mismatch!");

} // namespace Zenject
