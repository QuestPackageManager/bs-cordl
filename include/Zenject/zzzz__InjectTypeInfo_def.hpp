#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
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
namespace Zenject {
class __InjectTypeInfo__InjectConstructorInfo;
}
namespace Zenject {
class __InjectTypeInfo__InjectMemberInfo;
}
namespace Zenject {
class __InjectTypeInfo__InjectMethodInfo;
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
// CS Name: ::InjectTypeInfo::InjectMemberInfo*
class CORDL_TYPE __InjectTypeInfo__InjectMemberInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Info, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Info, put = __cordl_internal_set_Info))::Zenject::InjectableInfo* Info;

  /// @brief Field Setter, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Setter, put = __cordl_internal_set_Setter))::Zenject::ZenMemberSetterMethod* Setter;

  static inline ::Zenject::__InjectTypeInfo__InjectMemberInfo* New_ctor(::Zenject::ZenMemberSetterMethod* setter, ::Zenject::InjectableInfo* info);

  constexpr ::Zenject::InjectableInfo*& __cordl_internal_get_Info();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectableInfo*> const& __cordl_internal_get_Info() const;

  constexpr ::Zenject::ZenMemberSetterMethod*& __cordl_internal_get_Setter();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::ZenMemberSetterMethod*> const& __cordl_internal_get_Setter() const;

  constexpr void __cordl_internal_set_Info(::Zenject::InjectableInfo* value);

  constexpr void __cordl_internal_set_Setter(::Zenject::ZenMemberSetterMethod* value);

  /// @brief Method .ctor, addr 0x2fc972c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::ZenMemberSetterMethod* setter, ::Zenject::InjectableInfo* info);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InjectTypeInfo__InjectMemberInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InjectTypeInfo__InjectMemberInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InjectTypeInfo__InjectMemberInfo(__InjectTypeInfo__InjectMemberInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InjectTypeInfo__InjectMemberInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InjectTypeInfo__InjectMemberInfo(__InjectTypeInfo__InjectMemberInfo const&) = delete;

  /// @brief Field Setter, offset: 0x10, size: 0x8, def value: None
  ::Zenject::ZenMemberSetterMethod* ___Setter;

  /// @brief Field Info, offset: 0x18, size: 0x8, def value: None
  ::Zenject::InjectableInfo* ___Info;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__InjectTypeInfo__InjectMemberInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__InjectTypeInfo__InjectMemberInfo, ___Setter) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__InjectTypeInfo__InjectMemberInfo, ___Info) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::InjectConstructorInfo
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::InjectTypeInfo::InjectConstructorInfo*
class CORDL_TYPE __InjectTypeInfo__InjectConstructorInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Factory, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Factory, put = __cordl_internal_set_Factory))::Zenject::ZenFactoryMethod* Factory;

  /// @brief Field Parameters, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Parameters, put = __cordl_internal_set_Parameters))::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> Parameters;

  static inline ::Zenject::__InjectTypeInfo__InjectConstructorInfo* New_ctor(::Zenject::ZenFactoryMethod* factory,
                                                                             ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> parameters);

  constexpr ::Zenject::ZenFactoryMethod*& __cordl_internal_get_Factory();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::ZenFactoryMethod*> const& __cordl_internal_get_Factory() const;

  constexpr ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> const& __cordl_internal_get_Parameters() const;

  constexpr ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*>& __cordl_internal_get_Parameters();

  constexpr void __cordl_internal_set_Factory(::Zenject::ZenFactoryMethod* value);

  constexpr void __cordl_internal_set_Parameters(::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> value);

  /// @brief Method .ctor, addr 0x2fc9758, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::ZenFactoryMethod* factory, ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> parameters);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InjectTypeInfo__InjectConstructorInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InjectTypeInfo__InjectConstructorInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InjectTypeInfo__InjectConstructorInfo(__InjectTypeInfo__InjectConstructorInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InjectTypeInfo__InjectConstructorInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InjectTypeInfo__InjectConstructorInfo(__InjectTypeInfo__InjectConstructorInfo const&) = delete;

  /// @brief Field Factory, offset: 0x10, size: 0x8, def value: None
  ::Zenject::ZenFactoryMethod* ___Factory;

  /// @brief Field Parameters, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> ___Parameters;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__InjectTypeInfo__InjectConstructorInfo, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__InjectTypeInfo__InjectConstructorInfo, ___Factory) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__InjectTypeInfo__InjectConstructorInfo, ___Parameters) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::InjectMethodInfo
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::InjectTypeInfo::InjectMethodInfo*
class CORDL_TYPE __InjectTypeInfo__InjectMethodInfo : public ::System::Object {
public:
  // Declarations
  /// @brief Field Action, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_Action, put = __cordl_internal_set_Action))::Zenject::ZenInjectMethod* Action;

  /// @brief Field Name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Name, put = __cordl_internal_set_Name))::StringW Name;

  /// @brief Field Parameters, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_Parameters, put = __cordl_internal_set_Parameters))::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> Parameters;

  static inline ::Zenject::__InjectTypeInfo__InjectMethodInfo* New_ctor(::Zenject::ZenInjectMethod* action, ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> parameters,
                                                                        ::StringW name);

  constexpr ::Zenject::ZenInjectMethod*& __cordl_internal_get_Action();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::ZenInjectMethod*> const& __cordl_internal_get_Action() const;

  constexpr ::StringW const& __cordl_internal_get_Name() const;

  constexpr ::StringW& __cordl_internal_get_Name();

  constexpr ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> const& __cordl_internal_get_Parameters() const;

  constexpr ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*>& __cordl_internal_get_Parameters();

  constexpr void __cordl_internal_set_Action(::Zenject::ZenInjectMethod* value);

  constexpr void __cordl_internal_set_Name(::StringW value);

  constexpr void __cordl_internal_set_Parameters(::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> value);

  /// @brief Method .ctor, addr 0x2fc9784, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::ZenInjectMethod* action, ::ArrayW<::Zenject::InjectableInfo*, ::Array<::Zenject::InjectableInfo*>*> parameters, ::StringW name);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __InjectTypeInfo__InjectMethodInfo();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__InjectTypeInfo__InjectMethodInfo", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __InjectTypeInfo__InjectMethodInfo(__InjectTypeInfo__InjectMethodInfo&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__InjectTypeInfo__InjectMethodInfo", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __InjectTypeInfo__InjectMethodInfo(__InjectTypeInfo__InjectMethodInfo const&) = delete;

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

static_assert(offsetof(::Zenject::__InjectTypeInfo__InjectMethodInfo, ___Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__InjectTypeInfo__InjectMethodInfo, ___Action) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__InjectTypeInfo__InjectMethodInfo, ___Parameters) == 0x20, "Offset mismatch!");

} // namespace Zenject
// Type: Zenject::InjectTypeInfo
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::InjectTypeInfo*
class CORDL_TYPE InjectTypeInfo : public ::System::Object {
public:
  // Declarations
  using InjectConstructorInfo = ::Zenject::__InjectTypeInfo__InjectConstructorInfo;

  using InjectMemberInfo = ::Zenject::__InjectTypeInfo__InjectMemberInfo;

  using InjectMethodInfo = ::Zenject::__InjectTypeInfo__InjectMethodInfo;

  __declspec(property(get = get_AllInjectables))::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>* AllInjectables;

  __declspec(property(get = get_BaseTypeInfo, put = set_BaseTypeInfo))::Zenject::InjectTypeInfo* BaseTypeInfo;

  /// @brief Field CS$<>9__CachedAnonymousMethodDelegate2, offset 0xffffffff, size 0x8
  static __declspec(property(
      get = getStaticF_CS$__9__CachedAnonymousMethodDelegate2,
      put = setStaticF_CS$__9__CachedAnonymousMethodDelegate2))::System::Func_2<::Zenject::__InjectTypeInfo__InjectMemberInfo*, ::Zenject::InjectableInfo*>* CS$__9__CachedAnonymousMethodDelegate2;

  /// @brief Field CS$<>9__CachedAnonymousMethodDelegate3, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_CS$__9__CachedAnonymousMethodDelegate3, put = setStaticF_CS$__9__CachedAnonymousMethodDelegate3))::System::Func_2<
      ::Zenject::__InjectTypeInfo__InjectMethodInfo*, ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>*>* CS$__9__CachedAnonymousMethodDelegate3;

  /// @brief Field InjectConstructor, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_InjectConstructor, put = __cordl_internal_set_InjectConstructor))::Zenject::__InjectTypeInfo__InjectConstructorInfo* InjectConstructor;

  /// @brief Field InjectMembers, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_InjectMembers,
                      put = __cordl_internal_set_InjectMembers))::ArrayW<::Zenject::__InjectTypeInfo__InjectMemberInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMemberInfo*>*> InjectMembers;

  /// @brief Field InjectMethods, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_InjectMethods,
                      put = __cordl_internal_set_InjectMethods))::ArrayW<::Zenject::__InjectTypeInfo__InjectMethodInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMethodInfo*>*> InjectMethods;

  /// @brief Field Type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_Type, put = __cordl_internal_set_Type))::System::Type* Type;

  /// @brief Field <BaseTypeInfo>k__BackingField, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__BaseTypeInfo_k__BackingField, put = __cordl_internal_set__BaseTypeInfo_k__BackingField))::Zenject::InjectTypeInfo* _BaseTypeInfo_k__BackingField;

  static inline ::Zenject::InjectTypeInfo* New_ctor(::System::Type* type, ::Zenject::__InjectTypeInfo__InjectConstructorInfo* injectConstructor,
                                                    ::ArrayW<::Zenject::__InjectTypeInfo__InjectMethodInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMethodInfo*>*> injectMethods,
                                                    ::ArrayW<::Zenject::__InjectTypeInfo__InjectMemberInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMemberInfo*>*> injectMembers);

  constexpr ::Zenject::__InjectTypeInfo__InjectConstructorInfo*& __cordl_internal_get_InjectConstructor();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::__InjectTypeInfo__InjectConstructorInfo*> const& __cordl_internal_get_InjectConstructor() const;

  constexpr ::ArrayW<::Zenject::__InjectTypeInfo__InjectMemberInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMemberInfo*>*> const& __cordl_internal_get_InjectMembers() const;

  constexpr ::ArrayW<::Zenject::__InjectTypeInfo__InjectMemberInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMemberInfo*>*>& __cordl_internal_get_InjectMembers();

  constexpr ::ArrayW<::Zenject::__InjectTypeInfo__InjectMethodInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMethodInfo*>*> const& __cordl_internal_get_InjectMethods() const;

  constexpr ::ArrayW<::Zenject::__InjectTypeInfo__InjectMethodInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMethodInfo*>*>& __cordl_internal_get_InjectMethods();

  constexpr ::System::Type*& __cordl_internal_get_Type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_Type() const;

  constexpr ::Zenject::InjectTypeInfo*& __cordl_internal_get__BaseTypeInfo_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectTypeInfo*> const& __cordl_internal_get__BaseTypeInfo_k__BackingField() const;

  constexpr void __cordl_internal_set_InjectConstructor(::Zenject::__InjectTypeInfo__InjectConstructorInfo* value);

  constexpr void __cordl_internal_set_InjectMembers(::ArrayW<::Zenject::__InjectTypeInfo__InjectMemberInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMemberInfo*>*> value);

  constexpr void __cordl_internal_set_InjectMethods(::ArrayW<::Zenject::__InjectTypeInfo__InjectMethodInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMethodInfo*>*> value);

  constexpr void __cordl_internal_set_Type(::System::Type* value);

  constexpr void __cordl_internal_set__BaseTypeInfo_k__BackingField(::Zenject::InjectTypeInfo* value);

  /// @brief Method .ctor, addr 0x2fc9500, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::Zenject::__InjectTypeInfo__InjectConstructorInfo* injectConstructor,
                    ::ArrayW<::Zenject::__InjectTypeInfo__InjectMethodInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMethodInfo*>*> injectMethods,
                    ::ArrayW<::Zenject::__InjectTypeInfo__InjectMemberInfo*, ::Array<::Zenject::__InjectTypeInfo__InjectMemberInfo*>*> injectMembers);

  /// @brief Method <get_AllInjectables>b__0, addr 0x2fc96fc, size 0x18, virtual false, abstract: false, final false
  static inline ::Zenject::InjectableInfo* _get_AllInjectables_b__0(::Zenject::__InjectTypeInfo__InjectMemberInfo* x);

  /// @brief Method <get_AllInjectables>b__1, addr 0x2fc9714, size 0x18, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>* _get_AllInjectables_b__1(::Zenject::__InjectTypeInfo__InjectMethodInfo* x);

  static inline ::System::Func_2<::Zenject::__InjectTypeInfo__InjectMemberInfo*, ::Zenject::InjectableInfo*>* getStaticF_CS$__9__CachedAnonymousMethodDelegate2();

  static inline ::System::Func_2<::Zenject::__InjectTypeInfo__InjectMethodInfo*, ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>*>*
  getStaticF_CS$__9__CachedAnonymousMethodDelegate3();

  /// @brief Method get_AllInjectables, addr 0x2fc9550, size 0x1ac, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>* get_AllInjectables();

  /// @brief Method get_BaseTypeInfo, addr 0x2fc9540, size 0x8, virtual false, abstract: false, final false
  inline ::Zenject::InjectTypeInfo* get_BaseTypeInfo();

  static inline void setStaticF_CS$__9__CachedAnonymousMethodDelegate2(::System::Func_2<::Zenject::__InjectTypeInfo__InjectMemberInfo*, ::Zenject::InjectableInfo*>* value);

  static inline void setStaticF_CS$__9__CachedAnonymousMethodDelegate3(
      ::System::Func_2<::Zenject::__InjectTypeInfo__InjectMethodInfo*, ::System::Collections::Generic::IEnumerable_1<::Zenject::InjectableInfo*>*>* value);

  /// @brief Method set_BaseTypeInfo, addr 0x2fc9548, size 0x8, virtual false, abstract: false, final false
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

static_assert(offsetof(::Zenject::InjectTypeInfo, ___Type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectTypeInfo, ___InjectMethods) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectTypeInfo, ___InjectMembers) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectTypeInfo, ___InjectConstructor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Zenject::InjectTypeInfo, ____BaseTypeInfo_k__BackingField) == 0x30, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::InjectTypeInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InjectTypeInfo*, "Zenject", "InjectTypeInfo");
NEED_NO_BOX(::Zenject::__InjectTypeInfo__InjectConstructorInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__InjectTypeInfo__InjectConstructorInfo*, "Zenject", "InjectTypeInfo/InjectConstructorInfo");
NEED_NO_BOX(::Zenject::__InjectTypeInfo__InjectMemberInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__InjectTypeInfo__InjectMemberInfo*, "Zenject", "InjectTypeInfo/InjectMemberInfo");
NEED_NO_BOX(::Zenject::__InjectTypeInfo__InjectMethodInfo);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__InjectTypeInfo__InjectMethodInfo*, "Zenject", "InjectTypeInfo/InjectMethodInfo");
