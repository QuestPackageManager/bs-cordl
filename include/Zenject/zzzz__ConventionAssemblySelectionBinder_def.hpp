#pragma once
// IWYU pragma private; include "Zenject/ConventionAssemblySelectionBinder.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConventionAssemblySelectionBinder)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
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
class ConventionAssemblySelectionBinder___c;
}
namespace Zenject {
class ConventionAssemblySelectionBinder___c__DisplayClass12_0;
}
namespace Zenject {
class ConventionBindInfo;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class ConventionAssemblySelectionBinder;
}
namespace Zenject {
class ConventionAssemblySelectionBinder___c;
}
namespace Zenject {
class ConventionAssemblySelectionBinder___c__DisplayClass12_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ConventionAssemblySelectionBinder);
MARK_REF_PTR_T(::Zenject::ConventionAssemblySelectionBinder___c);
MARK_REF_PTR_T(::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ConventionAssemblySelectionBinder/<>c
class CORDL_TYPE ConventionAssemblySelectionBinder___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::Zenject::ConventionAssemblySelectionBinder___c* __9;

  /// @brief Field <>9__8_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__8_0, put = setStaticF___9__8_0)) ::System::Func_2<::System::Type*, ::System::Reflection::Assembly*>* __9__8_0;

  static inline ::Zenject::ConventionAssemblySelectionBinder___c* New_ctor();

  /// @brief Method <FromAssembliesContaining>b__8_0, addr 0x4b01068, size 0x28, virtual false, abstract: false, final false
  inline ::System::Reflection::Assembly* _FromAssembliesContaining_b__8_0(::System::Type* t);

  /// @brief Method __zenCreate, addr 0x4b01090, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b010e4, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b01060, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Zenject::ConventionAssemblySelectionBinder___c* getStaticF___9();

  static inline ::System::Func_2<::System::Type*, ::System::Reflection::Assembly*>* getStaticF___9__8_0();

  static inline void setStaticF___9(::Zenject::ConventionAssemblySelectionBinder___c* value);

  static inline void setStaticF___9__8_0(::System::Func_2<::System::Type*, ::System::Reflection::Assembly*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConventionAssemblySelectionBinder___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConventionAssemblySelectionBinder___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConventionAssemblySelectionBinder___c(ConventionAssemblySelectionBinder___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConventionAssemblySelectionBinder___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConventionAssemblySelectionBinder___c(ConventionAssemblySelectionBinder___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12024 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ConventionAssemblySelectionBinder___c, 0x10>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ConventionAssemblySelectionBinder/<>c__DisplayClass12_0
class CORDL_TYPE ConventionAssemblySelectionBinder___c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field assemblies, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_assemblies, put = __cordl_internal_set_assemblies)) ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* assemblies;

  static inline ::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0* New_ctor();

  /// @brief Method <FromAssemblies>b__0, addr 0x4b0129c, size 0x58, virtual false, abstract: false, final false
  inline bool _FromAssemblies_b__0(::System::Reflection::Assembly* assembly);

  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* const& __cordl_internal_get_assemblies() const;

  constexpr ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>*& __cordl_internal_get_assemblies();

  constexpr void __cordl_internal_set_assemblies(::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* value);

  /// @brief Method __zenCreate, addr 0x4b012f4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b01348, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b00f40, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConventionAssemblySelectionBinder___c__DisplayClass12_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConventionAssemblySelectionBinder___c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConventionAssemblySelectionBinder___c__DisplayClass12_0(ConventionAssemblySelectionBinder___c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConventionAssemblySelectionBinder___c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConventionAssemblySelectionBinder___c__DisplayClass12_0(ConventionAssemblySelectionBinder___c__DisplayClass12_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12025 };

  /// @brief Field assemblies, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* ___assemblies;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0, ___assemblies) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0, 0x18>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.ConventionAssemblySelectionBinder
class CORDL_TYPE ConventionAssemblySelectionBinder : public ::System::Object {
public:
  // Declarations
  using __c = ::Zenject::ConventionAssemblySelectionBinder___c;

  using __c__DisplayClass12_0 = ::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0;

  __declspec(property(get = get_BindInfo, put = set_BindInfo)) ::Zenject::ConventionBindInfo* BindInfo;

  /// @brief Field <BindInfo>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__BindInfo_k__BackingField, put = __cordl_internal_set__BindInfo_k__BackingField)) ::Zenject::ConventionBindInfo* _BindInfo_k__BackingField;

  /// @brief Method FromAllAssemblies, addr 0x4b00c08, size 0x4, virtual false, abstract: false, final false
  inline void FromAllAssemblies();

  /// @brief Method FromAssemblies, addr 0x4b00e9c, size 0x4, virtual false, abstract: false, final false
  inline void FromAssemblies(::ArrayW<::System::Reflection::Assembly*, ::Array<::System::Reflection::Assembly*>*> assemblies);

  /// @brief Method FromAssemblies, addr 0x4b00d3c, size 0xc0, virtual false, abstract: false, final false
  inline void FromAssemblies(::System::Collections::Generic::IEnumerable_1<::System::Reflection::Assembly*>* assemblies);

  /// @brief Method FromAssembliesContaining, addr 0x4b00c0c, size 0x4, virtual false, abstract: false, final false
  inline void FromAssembliesContaining(::ArrayW<::System::Type*, ::Array<::System::Type*>*> types);

  /// @brief Method FromAssembliesContaining, addr 0x4b00c10, size 0x12c, virtual false, abstract: false, final false
  inline void FromAssembliesContaining(::System::Collections::Generic::IEnumerable_1<::System::Type*>* types);

  /// @brief Method FromAssembliesWhere, addr 0x4b00fec, size 0x18, virtual false, abstract: false, final false
  inline void FromAssembliesWhere(::System::Func_2<::System::Reflection::Assembly*, bool>* predicate);

  /// @brief Method FromAssembly, addr 0x4b00ea0, size 0xa0, virtual false, abstract: false, final false
  inline void FromAssembly(::System::Reflection::Assembly* assembly);

  /// @brief Method FromAssemblyContaining, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline void FromAssemblyContaining();

  /// @brief Method FromThisAssembly, addr 0x4b00dfc, size 0xa0, virtual false, abstract: false, final false
  inline void FromThisAssembly();

  static inline ::Zenject::ConventionAssemblySelectionBinder* New_ctor(::Zenject::ConventionBindInfo* bindInfo);

  constexpr ::Zenject::ConventionBindInfo* const& __cordl_internal_get__BindInfo_k__BackingField() const;

  constexpr ::Zenject::ConventionBindInfo*& __cordl_internal_get__BindInfo_k__BackingField();

  constexpr void __cordl_internal_set__BindInfo_k__BackingField(::Zenject::ConventionBindInfo* value);

  /// @brief Method .ctor, addr 0x4b00bd0, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::ConventionBindInfo* bindInfo);

  /// @brief Method get_BindInfo, addr 0x4b00bf8, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::ConventionBindInfo* get_BindInfo();

  /// @brief Method set_BindInfo, addr 0x4b00c00, size 0x8, virtual false, abstract: false, final false
  inline void set_BindInfo(::Zenject::ConventionBindInfo* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConventionAssemblySelectionBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConventionAssemblySelectionBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConventionAssemblySelectionBinder(ConventionAssemblySelectionBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConventionAssemblySelectionBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConventionAssemblySelectionBinder(ConventionAssemblySelectionBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12026 };

  /// @brief Field <BindInfo>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::Zenject::ConventionBindInfo* ____BindInfo_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::ConventionAssemblySelectionBinder, ____BindInfo_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::ConventionAssemblySelectionBinder, 0x18>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ConventionAssemblySelectionBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConventionAssemblySelectionBinder*, "Zenject", "ConventionAssemblySelectionBinder");
NEED_NO_BOX(::Zenject::ConventionAssemblySelectionBinder___c);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConventionAssemblySelectionBinder___c*, "Zenject", "ConventionAssemblySelectionBinder/<>c");
NEED_NO_BOX(::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ConventionAssemblySelectionBinder___c__DisplayClass12_0*, "Zenject", "ConventionAssemblySelectionBinder/<>c__DisplayClass12_0");
