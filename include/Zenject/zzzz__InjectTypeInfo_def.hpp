#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(InjectTypeInfo)
namespace System {
class Type;
}
namespace Zenject {
class __InjectTypeInfo__InjectMethodInfo;
}
namespace Zenject {
class __InjectTypeInfo__InjectConstructorInfo;
}
namespace Zenject {
class __InjectTypeInfo__InjectMemberInfo;
}
namespace Zenject {
class InjectableInfo;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace Zenject {
class ZenFactoryMethod;
}
namespace Zenject {
class ZenMemberSetterMethod;
}
namespace Zenject {
class ZenInjectMethod;
}
// Forward declare root types
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class __InjectTypeInfo__InjectConstructorInfo;
}
namespace Zenject {
class __InjectTypeInfo__InjectMemberInfo;
}
namespace Zenject {
class __InjectTypeInfo__InjectMethodInfo;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::InjectTypeInfo);
MARK_REF_PTR_T(::Zenject::__InjectTypeInfo__InjectConstructorInfo);
MARK_REF_PTR_T(::Zenject::__InjectTypeInfo__InjectMemberInfo);
MARK_REF_PTR_T(::Zenject::__InjectTypeInfo__InjectMethodInfo);
// Type: ::InjectMemberInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15716))
// CS Name: ::InjectTypeInfo::InjectMemberInfo*
class CORDL_TYPE __InjectTypeInfo__InjectMemberInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Setter, offset 0x10, size 0x8
  __declspec(property(get = __get_Setter, put = __set_Setter))::Zenject::ZenMemberSetterMethod* Setter;

  /// @brief Field Info, offset 0x18, size 0x8
  __declspec(property(get = __get_Info, put = __set_Info))::Zenject::InjectableInfo* Info;

  constexpr ::Zenject::ZenMemberSetterMethod*& __get_Setter();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::ZenMemberSetterMethod*> const& __get_Setter() const;

  constexpr void __set_Setter(::Zenject::ZenMemberSetterMethod* value);

  constexpr ::Zenject::InjectableInfo*& __get_Info();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectableInfo*> const& __get_Info() const;

  constexpr void __set_Info(::Zenject::InjectableInfo* value);

  static inline ::Zenject::__InjectTypeInfo__InjectMemberInfo* New_ctor(::Zenject::ZenMemberSetterMethod* setter, ::Zenject::InjectableInfo* info);

  /// @brief Method .ctor addr 0x2eb9ebc size 0x2c virtual false final false
  inline void _ctor(::Zenject::ZenMemberSetterMethod* setter, ::Zenject::InjectableInfo* info);

  // Ctor Parameters [CppParam { name: "", ty: "__InjectTypeInfo__InjectMemberInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InjectTypeInfo__InjectMemberInfo(__InjectTypeInfo__InjectMemberInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InjectTypeInfo__InjectMemberInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InjectTypeInfo__InjectMemberInfo(__InjectTypeInfo__InjectMemberInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InjectTypeInfo__InjectMemberInfo();

public:
  /// @brief Field Setter, offset: 0x10, size: 0x8, def value: None
  ::Zenject::ZenMemberSetterMethod* ___Setter;

  /// @brief Field Info, offset: 0x18, size: 0x8, def value: None
  ::Zenject::InjectableInfo* ___Info;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__InjectTypeInfo__InjectMemberInfo, 0x20>, "Size mismatch!");

} // namespace Zenject
// Type: ::InjectConstructorInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15717))
// CS Name: ::InjectTypeInfo::InjectConstructorInfo*
class CORDL_TYPE __InjectTypeInfo__InjectConstructorInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Factory, offset 0x10, size 0x8
  __declspec(property(get = __get_Factory, put = __set_Factory))::Zenject::ZenFactoryMethod* Factory;

  /// @brief Field Parameters, offset 0x18, size 0x8
  __declspec(property(get = __get_Parameters, put = __set_Parameters))::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> Parameters;

  constexpr ::Zenject::ZenFactoryMethod*& __get_Factory();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::ZenFactoryMethod*> const& __get_Factory() const;

  constexpr void __set_Factory(::Zenject::ZenFactoryMethod* value);

  constexpr ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*>& __get_Parameters();

  constexpr ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> const& __get_Parameters() const;

  constexpr void __set_Parameters(::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> value);

  static inline ::Zenject::__InjectTypeInfo__InjectConstructorInfo* New_ctor(::Zenject::ZenFactoryMethod* factory,
                                                                             ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> parameters);

  /// @brief Method .ctor addr 0x2eb9ee8 size 0x2c virtual false final false
  inline void _ctor(::Zenject::ZenFactoryMethod* factory, ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> parameters);

  // Ctor Parameters [CppParam { name: "", ty: "__InjectTypeInfo__InjectConstructorInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InjectTypeInfo__InjectConstructorInfo(__InjectTypeInfo__InjectConstructorInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InjectTypeInfo__InjectConstructorInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InjectTypeInfo__InjectConstructorInfo(__InjectTypeInfo__InjectConstructorInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InjectTypeInfo__InjectConstructorInfo();

public:
  /// @brief Field Factory, offset: 0x10, size: 0x8, def value: None
  ::Zenject::ZenFactoryMethod* ___Factory;

  /// @brief Field Parameters, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> ___Parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__InjectTypeInfo__InjectConstructorInfo, 0x20>, "Size mismatch!");

} // namespace Zenject
// Type: ::InjectMethodInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15718))
// CS Name: ::InjectTypeInfo::InjectMethodInfo*
class CORDL_TYPE __InjectTypeInfo__InjectMethodInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Name, offset 0x10, size 0x8
  __declspec(property(get = __get_Name, put = __set_Name))::StringW Name;

  /// @brief Field Action, offset 0x18, size 0x8
  __declspec(property(get = __get_Action, put = __set_Action))::Zenject::ZenInjectMethod* Action;

  /// @brief Field Parameters, offset 0x20, size 0x8
  __declspec(property(get = __get_Parameters, put = __set_Parameters))::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> Parameters;

  constexpr ::StringW& __get_Name();

  constexpr ::StringW const& __get_Name() const;

  constexpr void __set_Name(::StringW value);

  constexpr ::Zenject::ZenInjectMethod*& __get_Action();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::ZenInjectMethod*> const& __get_Action() const;

  constexpr void __set_Action(::Zenject::ZenInjectMethod* value);

  constexpr ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*>& __get_Parameters();

  constexpr ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> const& __get_Parameters() const;

  constexpr void __set_Parameters(::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> value);

  static inline ::Zenject::__InjectTypeInfo__InjectMethodInfo* New_ctor(::Zenject::ZenInjectMethod* action, ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> parameters,
                                                                        ::StringW name);

  /// @brief Method .ctor addr 0x2eb9f14 size 0x3c virtual false final false
  inline void _ctor(::Zenject::ZenInjectMethod* action, ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> parameters, ::StringW name);

  // Ctor Parameters [CppParam { name: "", ty: "__InjectTypeInfo__InjectMethodInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InjectTypeInfo__InjectMethodInfo(__InjectTypeInfo__InjectMethodInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InjectTypeInfo__InjectMethodInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InjectTypeInfo__InjectMethodInfo(__InjectTypeInfo__InjectMethodInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InjectTypeInfo__InjectMethodInfo();

public:
  /// @brief Field Name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___Name;

  /// @brief Field Action, offset: 0x18, size: 0x8, def value: None
  ::Zenject::ZenInjectMethod* ___Action;

  /// @brief Field Parameters, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> ___Parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__InjectTypeInfo__InjectMethodInfo, 0x28>, "Size mismatch!");

} // namespace Zenject
// Type: Zenject::InjectTypeInfo
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15719))
// CS Name: ::Zenject::InjectTypeInfo*
class CORDL_TYPE InjectTypeInfo : public ::System::Object {
public:
  // Declarations
  using InjectMethodInfo = ::Zenject::__InjectTypeInfo__InjectMethodInfo;

  using InjectConstructorInfo = ::Zenject::__InjectTypeInfo__InjectConstructorInfo;

  using InjectMemberInfo = ::Zenject::__InjectTypeInfo__InjectMemberInfo;

  /// @brief Field Type, offset 0x10, size 0x8
  __declspec(property(get = __get_Type, put = __set_Type))::System::Type* Type;

  /// @brief Field InjectMethods, offset 0x18, size 0x8
  __declspec(property(get = __get_InjectMethods,
                      put = __set_InjectMethods))::ArrayW<::Zenject::__InjectTypeInfo__InjectMethodInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMethodInfo*>*> InjectMethods;

  /// @brief Field InjectMembers, offset 0x20, size 0x8
  __declspec(property(get = __get_InjectMembers,
                      put = __set_InjectMembers))::ArrayW<::Zenject::__InjectTypeInfo__InjectMemberInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMemberInfo*>*> InjectMembers;

  /// @brief Field InjectConstructor, offset 0x28, size 0x8
  __declspec(property(get = __get_InjectConstructor, put = __set_InjectConstructor))::Zenject::__InjectTypeInfo__InjectConstructorInfo* InjectConstructor;

  /// @brief Field <BaseTypeInfo>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __get__BaseTypeInfo_k__BackingField, put = __set__BaseTypeInfo_k__BackingField))::Zenject::InjectTypeInfo* _BaseTypeInfo_k__BackingField;

  /// @brief Field CS$<>9__CachedAnonymousMethodDelegate2, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_CS$__9__CachedAnonymousMethodDelegate2,
      put = setStaticF_CS$__9__CachedAnonymousMethodDelegate2))::System::Func_2<::Zenject::__InjectTypeInfo__InjectMemberInfo*, ::Zenject::InjectableInfo*>* CS$__9__CachedAnonymousMethodDelegate2;

  /// @brief Field CS$<>9__CachedAnonymousMethodDelegate3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CS$__9__CachedAnonymousMethodDelegate3, put = setStaticF_CS$__9__CachedAnonymousMethodDelegate3))::System::Func_2<
      ::Zenject::__InjectTypeInfo__InjectMethodInfo*, ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>*>* CS$__9__CachedAnonymousMethodDelegate3;

  __declspec(property(get = get_BaseTypeInfo, put = set_BaseTypeInfo))::Zenject::InjectTypeInfo* BaseTypeInfo;

  __declspec(property(get = get_AllInjectables))::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>* AllInjectables;

  constexpr ::System::Type*& __get_Type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_Type() const;

  constexpr void __set_Type(::System::Type* value);

  constexpr ::ArrayW<::Zenject::__InjectTypeInfo__InjectMethodInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMethodInfo*>*>& __get_InjectMethods();

  constexpr ::ArrayW<::Zenject::__InjectTypeInfo__InjectMethodInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMethodInfo*>*> const& __get_InjectMethods() const;

  constexpr void __set_InjectMethods(::ArrayW<::Zenject::__InjectTypeInfo__InjectMethodInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMethodInfo*>*> value);

  constexpr ::ArrayW<::Zenject::__InjectTypeInfo__InjectMemberInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMemberInfo*>*>& __get_InjectMembers();

  constexpr ::ArrayW<::Zenject::__InjectTypeInfo__InjectMemberInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMemberInfo*>*> const& __get_InjectMembers() const;

  constexpr void __set_InjectMembers(::ArrayW<::Zenject::__InjectTypeInfo__InjectMemberInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMemberInfo*>*> value);

  constexpr ::Zenject::__InjectTypeInfo__InjectConstructorInfo*& __get_InjectConstructor();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::__InjectTypeInfo__InjectConstructorInfo*> const& __get_InjectConstructor() const;

  constexpr void __set_InjectConstructor(::Zenject::__InjectTypeInfo__InjectConstructorInfo* value);

  constexpr ::Zenject::InjectTypeInfo*& __get__BaseTypeInfo_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectTypeInfo*> const& __get__BaseTypeInfo_k__BackingField() const;

  constexpr void __set__BaseTypeInfo_k__BackingField(::Zenject::InjectTypeInfo* value);

  static inline void setStaticF_CS$__9__CachedAnonymousMethodDelegate2(::System::Func_2<::Zenject::__InjectTypeInfo__InjectMemberInfo*, ::Zenject::InjectableInfo*>* value);

  static inline ::System::Func_2<::Zenject::__InjectTypeInfo__InjectMemberInfo*, ::Zenject::InjectableInfo*>* getStaticF_CS$__9__CachedAnonymousMethodDelegate2();

  static inline void setStaticF_CS$__9__CachedAnonymousMethodDelegate3(
      ::System::Func_2<::Zenject::__InjectTypeInfo__InjectMethodInfo*, ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>*>* value);

  static inline ::System::Func_2<::Zenject::__InjectTypeInfo__InjectMethodInfo*, ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>*>*
  getStaticF_CS$__9__CachedAnonymousMethodDelegate3();

  static inline ::Zenject::InjectTypeInfo* New_ctor(::System::Type* type, ::Zenject::__InjectTypeInfo__InjectConstructorInfo* injectConstructor,
                                                    ::ArrayW<::Zenject::__InjectTypeInfo__InjectMethodInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMethodInfo*>*> injectMethods,
                                                    ::ArrayW<::Zenject::__InjectTypeInfo__InjectMemberInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMemberInfo*>*> injectMembers);

  /// @brief Method .ctor addr 0x2eb9c90 size 0x40 virtual false final false
  inline void _ctor(::System::Type* type, ::Zenject::__InjectTypeInfo__InjectConstructorInfo* injectConstructor,
                    ::ArrayW<::Zenject::__InjectTypeInfo__InjectMethodInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMethodInfo*>*> injectMethods,
                    ::ArrayW<::Zenject::__InjectTypeInfo__InjectMemberInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMemberInfo*>*> injectMembers);

  /// @brief Method get_BaseTypeInfo addr 0x2eb9cd0 size 0x8 virtual false final false
  inline ::Zenject::InjectTypeInfo* get_BaseTypeInfo();

  /// @brief Method set_BaseTypeInfo addr 0x2eb9cd8 size 0x8 virtual false final false
  inline void set_BaseTypeInfo(::Zenject::InjectTypeInfo* value);

  /// @brief Method get_AllInjectables addr 0x2eb9ce0 size 0x1ac virtual false final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>* get_AllInjectables();

  /// @brief Method <get_AllInjectables>b__0 addr 0x2eb9e8c size 0x18 virtual false final false
  static inline ::Zenject::InjectableInfo* _get_AllInjectables_b__0(::Zenject::__InjectTypeInfo__InjectMemberInfo* x);

  /// @brief Method <get_AllInjectables>b__1 addr 0x2eb9ea4 size 0x18 virtual false final false
  static inline ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>* _get_AllInjectables_b__1(::Zenject::__InjectTypeInfo__InjectMethodInfo* x);

  // Ctor Parameters [CppParam { name: "", ty: "InjectTypeInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InjectTypeInfo(InjectTypeInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InjectTypeInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InjectTypeInfo(InjectTypeInfo const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InjectTypeInfo();

public:
  /// @brief Field Type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___Type;

  /// @brief Field InjectMethods, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::Zenject::__InjectTypeInfo__InjectMethodInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMethodInfo*>*> ___InjectMethods;

  /// @brief Field InjectMembers, offset: 0x20, size: 0x8, def value: None
  ::ArrayW<::Zenject::__InjectTypeInfo__InjectMemberInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMemberInfo*>*> ___InjectMembers;

  /// @brief Field InjectConstructor, offset: 0x28, size: 0x8, def value: None
  ::Zenject::__InjectTypeInfo__InjectConstructorInfo* ___InjectConstructor;

  /// @brief Field <BaseTypeInfo>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::Zenject::InjectTypeInfo* ____BaseTypeInfo_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::InjectTypeInfo, 0x38>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::InjectTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectTypeInfo*, "Zenject", "InjectTypeInfo");
NEED_NO_BOX(::Zenject::__InjectTypeInfo__InjectConstructorInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__InjectTypeInfo__InjectConstructorInfo*, "Zenject", "InjectTypeInfo/InjectConstructorInfo");
NEED_NO_BOX(::Zenject::__InjectTypeInfo__InjectMemberInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__InjectTypeInfo__InjectMemberInfo*, "Zenject", "InjectTypeInfo/InjectMemberInfo");
NEED_NO_BOX(::Zenject::__InjectTypeInfo__InjectMethodInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__InjectTypeInfo__InjectMethodInfo*, "Zenject", "InjectTypeInfo/InjectMethodInfo");
