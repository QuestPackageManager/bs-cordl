#pragma once
// IWYU pragma private; include "Zenject/InjectTypeInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InjectTypeInfo)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Type;
}
namespace Zenject {
class InjectTypeInfo_InjectConstructorInfo;
}
namespace Zenject {
class InjectTypeInfo_InjectMemberInfo;
}
namespace Zenject {
class InjectTypeInfo_InjectMethodInfo;
}
namespace Zenject {
class InjectableInfo;
}
namespace Zenject {
class ZenFactoryMethod;
}
namespace Zenject {
class ZenInjectMethod;
}
namespace Zenject {
class ZenMemberSetterMethod;
}
// Forward declare root types
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class InjectTypeInfo_InjectConstructorInfo;
}
namespace Zenject {
class InjectTypeInfo_InjectMemberInfo;
}
namespace Zenject {
class InjectTypeInfo_InjectMethodInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::InjectTypeInfo);
MARK_REF_PTR_T(::Zenject::InjectTypeInfo_InjectConstructorInfo);
MARK_REF_PTR_T(::Zenject::InjectTypeInfo_InjectMemberInfo);
MARK_REF_PTR_T(::Zenject::InjectTypeInfo_InjectMethodInfo);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.InjectTypeInfo/InjectMemberInfo
class CORDL_TYPE InjectTypeInfo_InjectMemberInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Info, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Info, put = __cordl_internal_set_Info)) ::Zenject::InjectableInfo* Info;

  /// @brief Field Setter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Setter, put = __cordl_internal_set_Setter)) ::Zenject::ZenMemberSetterMethod* Setter;

  static inline ::Zenject::InjectTypeInfo_InjectMemberInfo* New_ctor(::Zenject::ZenMemberSetterMethod* setter, ::Zenject::InjectableInfo* info);

  constexpr ::Zenject::InjectableInfo* const& __cordl_internal_get_Info() const;

  constexpr ::Zenject::InjectableInfo*& __cordl_internal_get_Info();

  constexpr ::Zenject::ZenMemberSetterMethod* const& __cordl_internal_get_Setter() const;

  constexpr ::Zenject::ZenMemberSetterMethod*& __cordl_internal_get_Setter();

  constexpr void __cordl_internal_set_Info(::Zenject::InjectableInfo* value);

  constexpr void __cordl_internal_set_Setter(::Zenject::ZenMemberSetterMethod* value);

  /// @brief Method .ctor, addr 0x4af0750, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::ZenMemberSetterMethod* setter, ::Zenject::InjectableInfo* info);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InjectTypeInfo_InjectMemberInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InjectTypeInfo_InjectMemberInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InjectTypeInfo_InjectMemberInfo(InjectTypeInfo_InjectMemberInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InjectTypeInfo_InjectMemberInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InjectTypeInfo_InjectMemberInfo(InjectTypeInfo_InjectMemberInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18421 };

  /// @brief Field Setter, offset: 0x10, size: 0x8, def value: None
  ::Zenject::ZenMemberSetterMethod* ___Setter;

  /// @brief Field Info, offset: 0x18, size: 0x8, def value: None
  ::Zenject::InjectableInfo* ___Info;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::InjectTypeInfo_InjectMemberInfo, ___Setter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectTypeInfo_InjectMemberInfo, ___Info) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::InjectTypeInfo_InjectMemberInfo, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.InjectTypeInfo/InjectConstructorInfo
class CORDL_TYPE InjectTypeInfo_InjectConstructorInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Factory, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Factory, put = __cordl_internal_set_Factory)) ::Zenject::ZenFactoryMethod* Factory;

  /// @brief Field Parameters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Parameters, put = __cordl_internal_set_Parameters)) ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> Parameters;

  static inline ::Zenject::InjectTypeInfo_InjectConstructorInfo* New_ctor(::Zenject::ZenFactoryMethod* factory, ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> parameters);

  constexpr ::Zenject::ZenFactoryMethod* const& __cordl_internal_get_Factory() const;

  constexpr ::Zenject::ZenFactoryMethod*& __cordl_internal_get_Factory();

  constexpr ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> const& __cordl_internal_get_Parameters() const;

  constexpr ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*>& __cordl_internal_get_Parameters();

  constexpr void __cordl_internal_set_Factory(::Zenject::ZenFactoryMethod* value);

  constexpr void __cordl_internal_set_Parameters(::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> value);

  /// @brief Method .ctor, addr 0x4af077c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::ZenFactoryMethod* factory, ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> parameters);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InjectTypeInfo_InjectConstructorInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InjectTypeInfo_InjectConstructorInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InjectTypeInfo_InjectConstructorInfo(InjectTypeInfo_InjectConstructorInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InjectTypeInfo_InjectConstructorInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InjectTypeInfo_InjectConstructorInfo(InjectTypeInfo_InjectConstructorInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18422 };

  /// @brief Field Factory, offset: 0x10, size: 0x8, def value: None
  ::Zenject::ZenFactoryMethod* ___Factory;

  /// @brief Field Parameters, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> ___Parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::InjectTypeInfo_InjectConstructorInfo, ___Factory) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectTypeInfo_InjectConstructorInfo, ___Parameters) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::InjectTypeInfo_InjectConstructorInfo, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.InjectTypeInfo/InjectMethodInfo
class CORDL_TYPE InjectTypeInfo_InjectMethodInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Action, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Action, put = __cordl_internal_set_Action)) ::Zenject::ZenInjectMethod* Action;

  /// @brief Field Name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Name, put = __cordl_internal_set_Name)) ::StringW Name;

  /// @brief Field Parameters, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Parameters, put = __cordl_internal_set_Parameters)) ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> Parameters;

  static inline ::Zenject::InjectTypeInfo_InjectMethodInfo* New_ctor(::Zenject::ZenInjectMethod* action, ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> parameters,
                                                                     ::StringW name);

  constexpr ::Zenject::ZenInjectMethod* const& __cordl_internal_get_Action() const;

  constexpr ::Zenject::ZenInjectMethod*& __cordl_internal_get_Action();

  constexpr ::StringW const& __cordl_internal_get_Name() const;

  constexpr ::StringW& __cordl_internal_get_Name();

  constexpr ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> const& __cordl_internal_get_Parameters() const;

  constexpr ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*>& __cordl_internal_get_Parameters();

  constexpr void __cordl_internal_set_Action(::Zenject::ZenInjectMethod* value);

  constexpr void __cordl_internal_set_Name(::StringW value);

  constexpr void __cordl_internal_set_Parameters(::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> value);

  /// @brief Method .ctor, addr 0x4af07a8, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::ZenInjectMethod* action, ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> parameters, ::StringW name);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InjectTypeInfo_InjectMethodInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InjectTypeInfo_InjectMethodInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InjectTypeInfo_InjectMethodInfo(InjectTypeInfo_InjectMethodInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InjectTypeInfo_InjectMethodInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InjectTypeInfo_InjectMethodInfo(InjectTypeInfo_InjectMethodInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18423 };

  /// @brief Field Name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Name;

  /// @brief Field Action, offset: 0x18, size: 0x8, def value: None
  ::Zenject::ZenInjectMethod* ___Action;

  /// @brief Field Parameters, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> ___Parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::InjectTypeInfo_InjectMethodInfo, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectTypeInfo_InjectMethodInfo, ___Action) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectTypeInfo_InjectMethodInfo, ___Parameters) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::InjectTypeInfo_InjectMethodInfo, 0x28>, "Size mismatch!");

} // namespace Zenject
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.InjectTypeInfo
class CORDL_TYPE InjectTypeInfo : public ::System::Object {
public:
  // Declarations
  using InjectConstructorInfo = ::Zenject::InjectTypeInfo_InjectConstructorInfo;

  using InjectMemberInfo = ::Zenject::InjectTypeInfo_InjectMemberInfo;

  using InjectMethodInfo = ::Zenject::InjectTypeInfo_InjectMethodInfo;

  __declspec(property(get = get_AllInjectables)) ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>* AllInjectables;

  __declspec(property(get = get_BaseTypeInfo, put = set_BaseTypeInfo)) ::Zenject::InjectTypeInfo* BaseTypeInfo;

  /// @brief Field CS$<>9__CachedAnonymousMethodDelegate2, offset 0xffffffff, size 0x8
  __declspec(property(
      get = getStaticF_CS$__9__CachedAnonymousMethodDelegate2,
      put = setStaticF_CS$__9__CachedAnonymousMethodDelegate2)) ::System::Func_2<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Zenject::InjectableInfo*>* CS$__9__CachedAnonymousMethodDelegate2;

  /// @brief Field CS$<>9__CachedAnonymousMethodDelegate3, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_CS$__9__CachedAnonymousMethodDelegate3, put = setStaticF_CS$__9__CachedAnonymousMethodDelegate3)) ::System::Func_2<
      ::Zenject::InjectTypeInfo_InjectMethodInfo*, ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>*>* CS$__9__CachedAnonymousMethodDelegate3;

  /// @brief Field InjectConstructor, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_InjectConstructor, put = __cordl_internal_set_InjectConstructor)) ::Zenject::InjectTypeInfo_InjectConstructorInfo* InjectConstructor;

  /// @brief Field InjectMembers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_InjectMembers,
                      put = __cordl_internal_set_InjectMembers)) ::ArrayW<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMemberInfo*>*>
      InjectMembers;

  /// @brief Field InjectMethods, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_InjectMethods,
                      put = __cordl_internal_set_InjectMethods)) ::ArrayW<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMethodInfo*>*>
      InjectMethods;

  /// @brief Field Type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Type, put = __cordl_internal_set_Type)) ::System::Type* Type;

  /// @brief Field <BaseTypeInfo>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__BaseTypeInfo_k__BackingField, put = __cordl_internal_set__BaseTypeInfo_k__BackingField)) ::Zenject::InjectTypeInfo* _BaseTypeInfo_k__BackingField;

  static inline ::Zenject::InjectTypeInfo* New_ctor(::System::Type* type, ::Zenject::InjectTypeInfo_InjectConstructorInfo* injectConstructor,
                                                    ::ArrayW<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMethodInfo*>*> injectMethods,
                                                    ::ArrayW<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMemberInfo*>*> injectMembers);

  constexpr ::Zenject::InjectTypeInfo_InjectConstructorInfo* const& __cordl_internal_get_InjectConstructor() const;

  constexpr ::Zenject::InjectTypeInfo_InjectConstructorInfo*& __cordl_internal_get_InjectConstructor();

  constexpr ::ArrayW<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMemberInfo*>*> const& __cordl_internal_get_InjectMembers() const;

  constexpr ::ArrayW<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMemberInfo*>*>& __cordl_internal_get_InjectMembers();

  constexpr ::ArrayW<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMethodInfo*>*> const& __cordl_internal_get_InjectMethods() const;

  constexpr ::ArrayW<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMethodInfo*>*>& __cordl_internal_get_InjectMethods();

  constexpr ::System::Type* const& __cordl_internal_get_Type() const;

  constexpr ::System::Type*& __cordl_internal_get_Type();

  constexpr ::Zenject::InjectTypeInfo* const& __cordl_internal_get__BaseTypeInfo_k__BackingField() const;

  constexpr ::Zenject::InjectTypeInfo*& __cordl_internal_get__BaseTypeInfo_k__BackingField();

  constexpr void __cordl_internal_set_InjectConstructor(::Zenject::InjectTypeInfo_InjectConstructorInfo* value);

  constexpr void __cordl_internal_set_InjectMembers(::ArrayW<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMemberInfo*>*> value);

  constexpr void __cordl_internal_set_InjectMethods(::ArrayW<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMethodInfo*>*> value);

  constexpr void __cordl_internal_set_Type(::System::Type* value);

  constexpr void __cordl_internal_set__BaseTypeInfo_k__BackingField(::Zenject::InjectTypeInfo* value);

  /// @brief Method .ctor, addr 0x4af0524, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::Zenject::InjectTypeInfo_InjectConstructorInfo* injectConstructor,
                    ::ArrayW<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMethodInfo*>*> injectMethods,
                    ::ArrayW<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMemberInfo*>*> injectMembers);

  /// @brief Method <get_AllInjectables>b__0, addr 0x4af0720, size 0x18, virtual false, abstract: false, final false
  static inline ::Zenject::InjectableInfo* _get_AllInjectables_b__0(::Zenject::InjectTypeInfo_InjectMemberInfo* x);

  /// @brief Method <get_AllInjectables>b__1, addr 0x4af0738, size 0x18, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>* _get_AllInjectables_b__1(::Zenject::InjectTypeInfo_InjectMethodInfo* x);

  static inline ::System::Func_2<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Zenject::InjectableInfo*>* getStaticF_CS$__9__CachedAnonymousMethodDelegate2();

  static inline ::System::Func_2<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>*>*
  getStaticF_CS$__9__CachedAnonymousMethodDelegate3();

  /// @brief Method get_AllInjectables, addr 0x4af0574, size 0x1ac, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>* get_AllInjectables();

  /// @brief Method get_BaseTypeInfo, addr 0x4af0564, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::InjectTypeInfo* get_BaseTypeInfo();

  static inline void setStaticF_CS$__9__CachedAnonymousMethodDelegate2(::System::Func_2<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Zenject::InjectableInfo*>* value);

  static inline void
  setStaticF_CS$__9__CachedAnonymousMethodDelegate3(::System::Func_2<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>*>* value);

  /// @brief Method set_BaseTypeInfo, addr 0x4af056c, size 0x8, virtual false, abstract: false, final false
  inline void set_BaseTypeInfo(::Zenject::InjectTypeInfo* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InjectTypeInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InjectTypeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InjectTypeInfo(InjectTypeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InjectTypeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InjectTypeInfo(InjectTypeInfo const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18424 };

  /// @brief Field Type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___Type;

  /// @brief Field InjectMethods, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::Zenject::InjectTypeInfo_InjectMethodInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMethodInfo*>*> ___InjectMethods;

  /// @brief Field InjectMembers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::Zenject::InjectTypeInfo_InjectMemberInfo*, ::Array<::Zenject::InjectTypeInfo_InjectMemberInfo*>*> ___InjectMembers;

  /// @brief Field InjectConstructor, offset: 0x28, size: 0x8, def value: None
  ::Zenject::InjectTypeInfo_InjectConstructorInfo* ___InjectConstructor;

  /// @brief Field <BaseTypeInfo>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::Zenject::InjectTypeInfo* ____BaseTypeInfo_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::InjectTypeInfo, ___Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectTypeInfo, ___InjectMethods) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectTypeInfo, ___InjectMembers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectTypeInfo, ___InjectConstructor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectTypeInfo, ____BaseTypeInfo_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::InjectTypeInfo, 0x38>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::InjectTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectTypeInfo*, "Zenject", "InjectTypeInfo");
NEED_NO_BOX(::Zenject::InjectTypeInfo_InjectConstructorInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectTypeInfo_InjectConstructorInfo*, "Zenject", "InjectTypeInfo/InjectConstructorInfo");
NEED_NO_BOX(::Zenject::InjectTypeInfo_InjectMemberInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectTypeInfo_InjectMemberInfo*, "Zenject", "InjectTypeInfo/InjectMemberInfo");
NEED_NO_BOX(::Zenject::InjectTypeInfo_InjectMethodInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectTypeInfo_InjectMethodInfo*, "Zenject", "InjectTypeInfo/InjectMethodInfo");
