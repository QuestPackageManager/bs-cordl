#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SubContainerBinder)
namespace Zenject {
class __SubContainerBinder____c__DisplayClass18_0;
}
namespace Zenject {
class InjectContext;
}
namespace System {
template <typename T> class Action_1;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass20_0;
}
namespace Zenject {
class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass13_0;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass17_0;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass15_0;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass22_0;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass24_0;
}
namespace Zenject {
class BindStatement;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass11_0;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass10_0;
}
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace System {
class Type;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass12_0;
}
namespace System {
class Object;
}
namespace Zenject {
class IBindingFinalizer;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass8_0;
}
namespace UnityEngine {
class Object;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass7_0;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class ISubContainerCreator;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class GameObjectCreationParameters;
}
// Forward declare root types
namespace Zenject {
class SubContainerBinder;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass10_0;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass11_0;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass12_0;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass13_0;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass15_0;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass17_0;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass18_0;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass20_0;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass22_0;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass24_0;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass7_0;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass8_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerBinder);
MARK_REF_PTR_T(::Zenject::__SubContainerBinder____c__DisplayClass10_0);
MARK_REF_PTR_T(::Zenject::__SubContainerBinder____c__DisplayClass11_0);
MARK_REF_PTR_T(::Zenject::__SubContainerBinder____c__DisplayClass12_0);
MARK_REF_PTR_T(::Zenject::__SubContainerBinder____c__DisplayClass13_0);
MARK_REF_PTR_T(::Zenject::__SubContainerBinder____c__DisplayClass15_0);
MARK_REF_PTR_T(::Zenject::__SubContainerBinder____c__DisplayClass17_0);
MARK_REF_PTR_T(::Zenject::__SubContainerBinder____c__DisplayClass18_0);
MARK_REF_PTR_T(::Zenject::__SubContainerBinder____c__DisplayClass20_0);
MARK_REF_PTR_T(::Zenject::__SubContainerBinder____c__DisplayClass22_0);
MARK_REF_PTR_T(::Zenject::__SubContainerBinder____c__DisplayClass24_0);
MARK_REF_PTR_T(::Zenject::__SubContainerBinder____c__DisplayClass7_0);
MARK_REF_PTR_T(::Zenject::__SubContainerBinder____c__DisplayClass8_0);
// Type: ::<>c__DisplayClass7_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10927))
// CS Name: ::SubContainerBinder::<>c__DisplayClass7_0*
class CORDL_TYPE __SubContainerBinder____c__DisplayClass7_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field subContainer, offset 0x10, size 0x8
  __declspec(property(get = __get_subContainer, put = __set_subContainer))::Zenject::DiContainer* subContainer;

  constexpr ::Zenject::DiContainer*& __get_subContainer();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> const& __get_subContainer() const;

  constexpr void __set_subContainer(::Zenject::DiContainer* value);

  static inline ::Zenject::__SubContainerBinder____c__DisplayClass7_0* New_ctor();

  /// @brief Method .ctor addr 0x2edb490 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ByInstance>b__0 addr 0x2edc870 size 0x68 virtual false final false
  inline ::Zenject::ISubContainerCreator* _ByInstance_b__0(::Zenject::DiContainer* _);

  /// @brief Method __zenCreate addr 0x2edc8d8 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2edc934 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBinder____c__DisplayClass7_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubContainerBinder____c__DisplayClass7_0(__SubContainerBinder____c__DisplayClass7_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBinder____c__DisplayClass7_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubContainerBinder____c__DisplayClass7_0(__SubContainerBinder____c__DisplayClass7_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubContainerBinder____c__DisplayClass7_0();

public:
  /// @brief Field subContainer, offset: 0x10, size: 0x8, def value: None
  ::Zenject::DiContainer* ___subContainer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SubContainerBinder____c__DisplayClass7_0, 0x18>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10928))
// CS Name: ::SubContainerBinder::<>c__DisplayClass8_0*
class CORDL_TYPE __SubContainerBinder____c__DisplayClass8_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field subContainerGetter, offset 0x10, size 0x8
  __declspec(property(get = __get_subContainerGetter, put = __set_subContainerGetter))::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* subContainerGetter;

  constexpr ::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>*& __get_subContainerGetter();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>*> const& __get_subContainerGetter() const;

  constexpr void __set_subContainerGetter(::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* value);

  static inline ::Zenject::__SubContainerBinder____c__DisplayClass8_0* New_ctor();

  /// @brief Method .ctor addr 0x2edb620 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ByInstanceGetter>b__0 addr 0x2edcaf4 size 0x68 virtual false final false
  inline ::Zenject::ISubContainerCreator* _ByInstanceGetter_b__0(::Zenject::DiContainer* _);

  /// @brief Method __zenCreate addr 0x2edcb5c size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2edcbb8 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBinder____c__DisplayClass8_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubContainerBinder____c__DisplayClass8_0(__SubContainerBinder____c__DisplayClass8_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBinder____c__DisplayClass8_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubContainerBinder____c__DisplayClass8_0(__SubContainerBinder____c__DisplayClass8_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubContainerBinder____c__DisplayClass8_0();

public:
  /// @brief Field subContainerGetter, offset: 0x10, size: 0x8, def value: None
  ::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* ___subContainerGetter;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SubContainerBinder____c__DisplayClass8_0, 0x18>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass10_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10929))
// CS Name: ::SubContainerBinder::<>c__DisplayClass10_0*
class CORDL_TYPE __SubContainerBinder____c__DisplayClass10_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field subContainerBindInfo, offset 0x10, size 0x8
  __declspec(property(get = __get_subContainerBindInfo, put = __set_subContainerBindInfo))::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo;

  /// @brief Field installerType, offset 0x18, size 0x8
  __declspec(property(get = __get_installerType, put = __set_installerType))::System::Type* installerType;

  constexpr ::Zenject::SubContainerCreatorBindInfo*& __get_subContainerBindInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorBindInfo*> const& __get_subContainerBindInfo() const;

  constexpr void __set_subContainerBindInfo(::Zenject::SubContainerCreatorBindInfo* value);

  constexpr ::System::Type*& __get_installerType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_installerType() const;

  constexpr void __set_installerType(::System::Type* value);

  static inline ::Zenject::__SubContainerBinder____c__DisplayClass10_0* New_ctor();

  /// @brief Method .ctor addr 0x2edb810 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ByInstaller>b__0 addr 0x2edcd78 size 0x7c virtual false final false
  inline ::Zenject::ISubContainerCreator* _ByInstaller_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x2edcdf4 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2edce50 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBinder____c__DisplayClass10_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubContainerBinder____c__DisplayClass10_0(__SubContainerBinder____c__DisplayClass10_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBinder____c__DisplayClass10_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubContainerBinder____c__DisplayClass10_0(__SubContainerBinder____c__DisplayClass10_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubContainerBinder____c__DisplayClass10_0();

public:
  /// @brief Field subContainerBindInfo, offset: 0x10, size: 0x8, def value: None
  ::Zenject::SubContainerCreatorBindInfo* ___subContainerBindInfo;

  /// @brief Field installerType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___installerType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SubContainerBinder____c__DisplayClass10_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass11_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10930))
// CS Name: ::SubContainerBinder::<>c__DisplayClass11_0*
class CORDL_TYPE __SubContainerBinder____c__DisplayClass11_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field subContainerBindInfo, offset 0x10, size 0x8
  __declspec(property(get = __get_subContainerBindInfo, put = __set_subContainerBindInfo))::Zenject::SubContainerCreatorBindInfo* subContainerBindInfo;

  /// @brief Field installerMethod, offset 0x18, size 0x8
  __declspec(property(get = __get_installerMethod, put = __set_installerMethod))::System::Action_1<::Zenject::DiContainer*>* installerMethod;

  constexpr ::Zenject::SubContainerCreatorBindInfo*& __get_subContainerBindInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorBindInfo*> const& __get_subContainerBindInfo() const;

  constexpr void __set_subContainerBindInfo(::Zenject::SubContainerCreatorBindInfo* value);

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __get_installerMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __get_installerMethod() const;

  constexpr void __set_installerMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  static inline ::Zenject::__SubContainerBinder____c__DisplayClass11_0* New_ctor();

  /// @brief Method .ctor addr 0x2edb99c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ByMethod>b__0 addr 0x2edd010 size 0x7c virtual false final false
  inline ::Zenject::ISubContainerCreator* _ByMethod_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x2edd08c size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2edd0e8 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBinder____c__DisplayClass11_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubContainerBinder____c__DisplayClass11_0(__SubContainerBinder____c__DisplayClass11_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBinder____c__DisplayClass11_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubContainerBinder____c__DisplayClass11_0(__SubContainerBinder____c__DisplayClass11_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubContainerBinder____c__DisplayClass11_0();

public:
  /// @brief Field subContainerBindInfo, offset: 0x10, size: 0x8, def value: None
  ::Zenject::SubContainerCreatorBindInfo* ___subContainerBindInfo;

  /// @brief Field installerMethod, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SubContainerBinder____c__DisplayClass11_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass12_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10931))
// CS Name: ::SubContainerBinder::<>c__DisplayClass12_0*
class CORDL_TYPE __SubContainerBinder____c__DisplayClass12_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameObjectInfo, offset 0x10, size 0x8
  __declspec(property(get = __get_gameObjectInfo, put = __set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerMethod, offset 0x18, size 0x8
  __declspec(property(get = __get_installerMethod, put = __set_installerMethod))::System::Action_1<::Zenject::DiContainer*>* installerMethod;

  constexpr ::Zenject::GameObjectCreationParameters*& __get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get_gameObjectInfo() const;

  constexpr void __set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __get_installerMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __get_installerMethod() const;

  constexpr void __set_installerMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  static inline ::Zenject::__SubContainerBinder____c__DisplayClass12_0* New_ctor();

  /// @brief Method .ctor addr 0x2edbb20 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ByNewGameObjectMethod>b__0 addr 0x2edd2a8 size 0x7c virtual false final false
  inline ::Zenject::ISubContainerCreator* _ByNewGameObjectMethod_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x2edd324 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2edd380 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBinder____c__DisplayClass12_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubContainerBinder____c__DisplayClass12_0(__SubContainerBinder____c__DisplayClass12_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBinder____c__DisplayClass12_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubContainerBinder____c__DisplayClass12_0(__SubContainerBinder____c__DisplayClass12_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubContainerBinder____c__DisplayClass12_0();

public:
  /// @brief Field gameObjectInfo, offset: 0x10, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerMethod, offset: 0x18, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SubContainerBinder____c__DisplayClass12_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass13_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10932))
// CS Name: ::SubContainerBinder::<>c__DisplayClass13_0*
class CORDL_TYPE __SubContainerBinder____c__DisplayClass13_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field prefab, offset 0x10, size 0x8
  __declspec(property(get = __get_prefab, put = __set_prefab))::UnityEngine::Object* prefab;

  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __get_gameObjectInfo, put = __set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerMethod, offset 0x20, size 0x8
  __declspec(property(get = __get_installerMethod, put = __set_installerMethod))::System::Action_1<::Zenject::DiContainer*>* installerMethod;

  constexpr ::UnityEngine::Object*& __get_prefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> const& __get_prefab() const;

  constexpr void __set_prefab(::UnityEngine::Object* value);

  constexpr ::Zenject::GameObjectCreationParameters*& __get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get_gameObjectInfo() const;

  constexpr void __set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __get_installerMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __get_installerMethod() const;

  constexpr void __set_installerMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  static inline ::Zenject::__SubContainerBinder____c__DisplayClass13_0* New_ctor();

  /// @brief Method .ctor addr 0x2edbd00 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ByNewPrefabMethod>b__0 addr 0x2edd540 size 0xb4 virtual false final false
  inline ::Zenject::ISubContainerCreator* _ByNewPrefabMethod_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x2edd5f4 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2edd650 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBinder____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubContainerBinder____c__DisplayClass13_0(__SubContainerBinder____c__DisplayClass13_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBinder____c__DisplayClass13_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubContainerBinder____c__DisplayClass13_0(__SubContainerBinder____c__DisplayClass13_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubContainerBinder____c__DisplayClass13_0();

public:
  /// @brief Field prefab, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Object* ___prefab;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerMethod, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SubContainerBinder____c__DisplayClass13_0, 0x28>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass15_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10933))
// CS Name: ::SubContainerBinder::<>c__DisplayClass15_0*
class CORDL_TYPE __SubContainerBinder____c__DisplayClass15_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field gameObjectInfo, offset 0x10, size 0x8
  __declspec(property(get = __get_gameObjectInfo, put = __set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerType, offset 0x18, size 0x8
  __declspec(property(get = __get_installerType, put = __set_installerType))::System::Type* installerType;

  /// @brief Field <>4__this, offset 0x20, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::SubContainerBinder* __4__this;

  constexpr ::Zenject::GameObjectCreationParameters*& __get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get_gameObjectInfo() const;

  constexpr void __set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr ::System::Type*& __get_installerType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_installerType() const;

  constexpr void __set_installerType(::System::Type* value);

  constexpr ::Zenject::SubContainerBinder*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerBinder*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::SubContainerBinder* value);

  static inline ::Zenject::__SubContainerBinder____c__DisplayClass15_0* New_ctor();

  /// @brief Method .ctor addr 0x2edbf4c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ByNewGameObjectInstaller>b__0 addr 0x2edd810 size 0x94 virtual false final false
  inline ::Zenject::ISubContainerCreator* _ByNewGameObjectInstaller_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x2edd8a4 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2edd900 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBinder____c__DisplayClass15_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubContainerBinder____c__DisplayClass15_0(__SubContainerBinder____c__DisplayClass15_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBinder____c__DisplayClass15_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubContainerBinder____c__DisplayClass15_0(__SubContainerBinder____c__DisplayClass15_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubContainerBinder____c__DisplayClass15_0();

public:
  /// @brief Field gameObjectInfo, offset: 0x10, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerType, offset: 0x18, size: 0x8, def value: None
  ::System::Type* ___installerType;

  /// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
  ::Zenject::SubContainerBinder* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SubContainerBinder____c__DisplayClass15_0, 0x28>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass17_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10934))
// CS Name: ::SubContainerBinder::<>c__DisplayClass17_0*
class CORDL_TYPE __SubContainerBinder____c__DisplayClass17_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field prefab, offset 0x10, size 0x8
  __declspec(property(get = __get_prefab, put = __set_prefab))::UnityEngine::Object* prefab;

  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __get_gameObjectInfo, put = __set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerType, offset 0x20, size 0x8
  __declspec(property(get = __get_installerType, put = __set_installerType))::System::Type* installerType;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::SubContainerBinder* __4__this;

  constexpr ::UnityEngine::Object*& __get_prefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> const& __get_prefab() const;

  constexpr void __set_prefab(::UnityEngine::Object* value);

  constexpr ::Zenject::GameObjectCreationParameters*& __get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get_gameObjectInfo() const;

  constexpr void __set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr ::System::Type*& __get_installerType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_installerType() const;

  constexpr void __set_installerType(::System::Type* value);

  constexpr ::Zenject::SubContainerBinder*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerBinder*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::SubContainerBinder* value);

  static inline ::Zenject::__SubContainerBinder____c__DisplayClass17_0* New_ctor();

  /// @brief Method .ctor addr 0x2edc14c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ByNewPrefabInstaller>b__0 addr 0x2eddac0 size 0xd4 virtual false final false
  inline ::Zenject::ISubContainerCreator* _ByNewPrefabInstaller_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x2eddb94 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2eddbf0 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBinder____c__DisplayClass17_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubContainerBinder____c__DisplayClass17_0(__SubContainerBinder____c__DisplayClass17_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBinder____c__DisplayClass17_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubContainerBinder____c__DisplayClass17_0(__SubContainerBinder____c__DisplayClass17_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubContainerBinder____c__DisplayClass17_0();

public:
  /// @brief Field prefab, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Object* ___prefab;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___installerType;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Zenject::SubContainerBinder* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SubContainerBinder____c__DisplayClass17_0, 0x30>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass18_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10935))
// CS Name: ::SubContainerBinder::<>c__DisplayClass18_0*
class CORDL_TYPE __SubContainerBinder____c__DisplayClass18_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field resourcePath, offset 0x10, size 0x8
  __declspec(property(get = __get_resourcePath, put = __set_resourcePath))::StringW resourcePath;

  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __get_gameObjectInfo, put = __set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerMethod, offset 0x20, size 0x8
  __declspec(property(get = __get_installerMethod, put = __set_installerMethod))::System::Action_1<::Zenject::DiContainer*>* installerMethod;

  constexpr ::StringW& __get_resourcePath();

  constexpr ::StringW const& __get_resourcePath() const;

  constexpr void __set_resourcePath(::StringW value);

  constexpr ::Zenject::GameObjectCreationParameters*& __get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get_gameObjectInfo() const;

  constexpr void __set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr ::System::Action_1<::Zenject::DiContainer*>*& __get_installerMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::Zenject::DiContainer*>*> const& __get_installerMethod() const;

  constexpr void __set_installerMethod(::System::Action_1<::Zenject::DiContainer*>* value);

  static inline ::Zenject::__SubContainerBinder____c__DisplayClass18_0* New_ctor();

  /// @brief Method .ctor addr 0x2edc2e0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ByNewPrefabResourceMethod>b__0 addr 0x2edddb0 size 0xb4 virtual false final false
  inline ::Zenject::ISubContainerCreator* _ByNewPrefabResourceMethod_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x2edde64 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2eddec0 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBinder____c__DisplayClass18_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubContainerBinder____c__DisplayClass18_0(__SubContainerBinder____c__DisplayClass18_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBinder____c__DisplayClass18_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubContainerBinder____c__DisplayClass18_0(__SubContainerBinder____c__DisplayClass18_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubContainerBinder____c__DisplayClass18_0();

public:
  /// @brief Field resourcePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___resourcePath;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerMethod, offset: 0x20, size: 0x8, def value: None
  ::System::Action_1<::Zenject::DiContainer*>* ___installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SubContainerBinder____c__DisplayClass18_0, 0x28>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass20_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10936))
// CS Name: ::SubContainerBinder::<>c__DisplayClass20_0*
class CORDL_TYPE __SubContainerBinder____c__DisplayClass20_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field resourcePath, offset 0x10, size 0x8
  __declspec(property(get = __get_resourcePath, put = __set_resourcePath))::StringW resourcePath;

  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __get_gameObjectInfo, put = __set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  /// @brief Field installerType, offset 0x20, size 0x8
  __declspec(property(get = __get_installerType, put = __set_installerType))::System::Type* installerType;

  /// @brief Field <>4__this, offset 0x28, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::SubContainerBinder* __4__this;

  constexpr ::StringW& __get_resourcePath();

  constexpr ::StringW const& __get_resourcePath() const;

  constexpr void __set_resourcePath(::StringW value);

  constexpr ::Zenject::GameObjectCreationParameters*& __get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get_gameObjectInfo() const;

  constexpr void __set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  constexpr ::System::Type*& __get_installerType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __get_installerType() const;

  constexpr void __set_installerType(::System::Type* value);

  constexpr ::Zenject::SubContainerBinder*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerBinder*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::SubContainerBinder* value);

  static inline ::Zenject::__SubContainerBinder____c__DisplayClass20_0* New_ctor();

  /// @brief Method .ctor addr 0x2edc548 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ByNewPrefabResourceInstaller>b__0 addr 0x2ede080 size 0xd4 virtual false final false
  inline ::Zenject::ISubContainerCreator* _ByNewPrefabResourceInstaller_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x2ede154 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2ede1b0 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBinder____c__DisplayClass20_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubContainerBinder____c__DisplayClass20_0(__SubContainerBinder____c__DisplayClass20_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBinder____c__DisplayClass20_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubContainerBinder____c__DisplayClass20_0(__SubContainerBinder____c__DisplayClass20_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubContainerBinder____c__DisplayClass20_0();

public:
  /// @brief Field resourcePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___resourcePath;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  /// @brief Field installerType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ___installerType;

  /// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
  ::Zenject::SubContainerBinder* _____4__this;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SubContainerBinder____c__DisplayClass20_0, 0x30>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass22_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10937))
// CS Name: ::SubContainerBinder::<>c__DisplayClass22_0*
class CORDL_TYPE __SubContainerBinder____c__DisplayClass22_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field prefab, offset 0x10, size 0x8
  __declspec(property(get = __get_prefab, put = __set_prefab))::UnityEngine::Object* prefab;

  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __get_gameObjectInfo, put = __set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  constexpr ::UnityEngine::Object*& __get_prefab();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> const& __get_prefab() const;

  constexpr void __set_prefab(::UnityEngine::Object* value);

  constexpr ::Zenject::GameObjectCreationParameters*& __get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get_gameObjectInfo() const;

  constexpr void __set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  static inline ::Zenject::__SubContainerBinder____c__DisplayClass22_0* New_ctor();

  /// @brief Method .ctor addr 0x2edc6d8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ByNewContextPrefab>b__0 addr 0x2ede370 size 0xb0 virtual false final false
  inline ::Zenject::ISubContainerCreator* _ByNewContextPrefab_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x2ede420 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2ede47c size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBinder____c__DisplayClass22_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubContainerBinder____c__DisplayClass22_0(__SubContainerBinder____c__DisplayClass22_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBinder____c__DisplayClass22_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubContainerBinder____c__DisplayClass22_0(__SubContainerBinder____c__DisplayClass22_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubContainerBinder____c__DisplayClass22_0();

public:
  /// @brief Field prefab, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::Object* ___prefab;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SubContainerBinder____c__DisplayClass22_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass24_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10938))
// CS Name: ::SubContainerBinder::<>c__DisplayClass24_0*
class CORDL_TYPE __SubContainerBinder____c__DisplayClass24_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field resourcePath, offset 0x10, size 0x8
  __declspec(property(get = __get_resourcePath, put = __set_resourcePath))::StringW resourcePath;

  /// @brief Field gameObjectInfo, offset 0x18, size 0x8
  __declspec(property(get = __get_gameObjectInfo, put = __set_gameObjectInfo))::Zenject::GameObjectCreationParameters* gameObjectInfo;

  constexpr ::StringW& __get_resourcePath();

  constexpr ::StringW const& __get_resourcePath() const;

  constexpr void __set_resourcePath(::StringW value);

  constexpr ::Zenject::GameObjectCreationParameters*& __get_gameObjectInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> const& __get_gameObjectInfo() const;

  constexpr void __set_gameObjectInfo(::Zenject::GameObjectCreationParameters* value);

  static inline ::Zenject::__SubContainerBinder____c__DisplayClass24_0* New_ctor();

  /// @brief Method .ctor addr 0x2edc868 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ByNewContextPrefabResource>b__0 addr 0x2ede63c size 0xb0 virtual false final false
  inline ::Zenject::ISubContainerCreator* _ByNewContextPrefabResource_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x2ede6ec size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2ede748 size 0x1c0 virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBinder____c__DisplayClass24_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubContainerBinder____c__DisplayClass24_0(__SubContainerBinder____c__DisplayClass24_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerBinder____c__DisplayClass24_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubContainerBinder____c__DisplayClass24_0(__SubContainerBinder____c__DisplayClass24_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubContainerBinder____c__DisplayClass24_0();

public:
  /// @brief Field resourcePath, offset: 0x10, size: 0x8, def value: None
  ::StringW ___resourcePath;

  /// @brief Field gameObjectInfo, offset: 0x18, size: 0x8, def value: None
  ::Zenject::GameObjectCreationParameters* ___gameObjectInfo;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SubContainerBinder____c__DisplayClass24_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Type: Zenject::SubContainerBinder
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10939))
// CS Name: ::Zenject::SubContainerBinder*
class CORDL_TYPE SubContainerBinder : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass24_0 = ::Zenject::__SubContainerBinder____c__DisplayClass24_0;

  using __c__DisplayClass22_0 = ::Zenject::__SubContainerBinder____c__DisplayClass22_0;

  using __c__DisplayClass20_0 = ::Zenject::__SubContainerBinder____c__DisplayClass20_0;

  using __c__DisplayClass18_0 = ::Zenject::__SubContainerBinder____c__DisplayClass18_0;

  using __c__DisplayClass17_0 = ::Zenject::__SubContainerBinder____c__DisplayClass17_0;

  using __c__DisplayClass15_0 = ::Zenject::__SubContainerBinder____c__DisplayClass15_0;

  using __c__DisplayClass13_0 = ::Zenject::__SubContainerBinder____c__DisplayClass13_0;

  using __c__DisplayClass12_0 = ::Zenject::__SubContainerBinder____c__DisplayClass12_0;

  using __c__DisplayClass11_0 = ::Zenject::__SubContainerBinder____c__DisplayClass11_0;

  using __c__DisplayClass10_0 = ::Zenject::__SubContainerBinder____c__DisplayClass10_0;

  using __c__DisplayClass8_0 = ::Zenject::__SubContainerBinder____c__DisplayClass8_0;

  using __c__DisplayClass7_0 = ::Zenject::__SubContainerBinder____c__DisplayClass7_0;

  /// @brief Field _bindInfo, offset 0x10, size 0x8
  __declspec(property(get = __get__bindInfo, put = __set__bindInfo))::Zenject::BindInfo* _bindInfo;

  /// @brief Field _bindStatement, offset 0x18, size 0x8
  __declspec(property(get = __get__bindStatement, put = __set__bindStatement))::Zenject::BindStatement* _bindStatement;

  /// @brief Field _subIdentifier, offset 0x20, size 0x8
  __declspec(property(get = __get__subIdentifier, put = __set__subIdentifier))::System::Object* _subIdentifier;

  /// @brief Field _resolveAll, offset 0x28, size 0x1
  __declspec(property(get = __get__resolveAll, put = __set__resolveAll)) bool _resolveAll;

  __declspec(property(put = set_SubFinalizer))::Zenject::IBindingFinalizer* SubFinalizer;

  constexpr ::Zenject::BindInfo*& __get__bindInfo();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::BindInfo*> const& __get__bindInfo() const;

  constexpr void __set__bindInfo(::Zenject::BindInfo* value);

  constexpr ::Zenject::BindStatement*& __get__bindStatement();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::BindStatement*> const& __get__bindStatement() const;

  constexpr void __set__bindStatement(::Zenject::BindStatement* value);

  constexpr ::System::Object*& __get__subIdentifier();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get__subIdentifier() const;

  constexpr void __set__subIdentifier(::System::Object* value);

  constexpr bool& __get__resolveAll();

  constexpr bool const& __get__resolveAll() const;

  constexpr void __set__resolveAll(bool value);

  static inline ::Zenject::SubContainerBinder* New_ctor(::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement, ::System::Object* subIdentifier, bool resolveAll);

  /// @brief Method .ctor addr 0x2edb2e0 size 0x50 virtual false final false
  inline void _ctor(::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement, ::System::Object* subIdentifier, bool resolveAll);

  /// @brief Method set_SubFinalizer addr 0x2edb330 size 0x1c virtual false final false
  inline void set_SubFinalizer(::Zenject::IBindingFinalizer* value);

  /// @brief Method ByInstance addr 0x2edb34c size 0x144 virtual false final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstance(::Zenject::DiContainer* subContainer);

  /// @brief Method ByInstanceGetter addr 0x2edb4dc size 0x144 virtual false final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstanceGetter(::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* subContainerGetter);

  /// @brief Method ByInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TInstaller> inline ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstaller();

  /// @brief Method ByInstaller addr 0x2edb628 size 0x1e8 virtual false final false
  inline ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstaller(::System::Type* installerType);

  /// @brief Method ByMethod addr 0x2edb820 size 0x17c virtual false final false
  inline ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* ByMethod(::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  /// @brief Method ByNewGameObjectMethod addr 0x2edb9a4 size 0x17c virtual false final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectMethod(::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  /// @brief Method ByNewPrefabMethod addr 0x2edbb74 size 0x18c virtual false final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabMethod(::UnityEngine::Object* prefab, ::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  /// @brief Method ByNewGameObjectInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TInstaller> inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectInstaller();

  /// @brief Method ByNewGameObjectInstaller addr 0x2edbd64 size 0x1e8 virtual false final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectInstaller(::System::Type* installerType);

  /// @brief Method ByNewPrefabInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TInstaller> inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabInstaller(::UnityEngine::Object* prefab);

  /// @brief Method ByNewPrefabInstaller addr 0x2edbf54 size 0x1f8 virtual false final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabInstaller(::UnityEngine::Object* prefab, ::System::Type* installerType);

  /// @brief Method ByNewPrefabResourceMethod addr 0x2edc154 size 0x18c virtual false final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceMethod(::StringW resourcePath, ::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  /// @brief Method ByNewPrefabResourceInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TInstaller> inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceInstaller(::StringW resourcePath);

  /// @brief Method ByNewPrefabResourceInstaller addr 0x2edc344 size 0x204 virtual false final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceInstaller(::StringW resourcePath, ::System::Type* installerType);

  /// @brief Method ByNewPrefab addr 0x2edc550 size 0x4 virtual false final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefab(::UnityEngine::Object* prefab);

  /// @brief Method ByNewContextPrefab addr 0x2edc554 size 0x184 virtual false final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefab(::UnityEngine::Object* prefab);

  /// @brief Method ByNewPrefabResource addr 0x2edc6e0 size 0x4 virtual false final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResource(::StringW resourcePath);

  /// @brief Method ByNewContextPrefabResource addr 0x2edc6e4 size 0x184 virtual false final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefabResource(::StringW resourcePath);

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerBinder(SubContainerBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerBinder(SubContainerBinder const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerBinder();

public:
  /// @brief Field _bindInfo, offset: 0x10, size: 0x8, def value: None
  ::Zenject::BindInfo* ____bindInfo;

  /// @brief Field _bindStatement, offset: 0x18, size: 0x8, def value: None
  ::Zenject::BindStatement* ____bindStatement;

  /// @brief Field _subIdentifier, offset: 0x20, size: 0x8, def value: None
  ::System::Object* ____subIdentifier;

  /// @brief Field _resolveAll, offset: 0x28, size: 0x1, def value: None
  bool ____resolveAll;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerBinder, 0x30>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerBinder);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerBinder*, "Zenject", "SubContainerBinder");
NEED_NO_BOX(::Zenject::__SubContainerBinder____c__DisplayClass10_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SubContainerBinder____c__DisplayClass10_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass10_0");
NEED_NO_BOX(::Zenject::__SubContainerBinder____c__DisplayClass11_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SubContainerBinder____c__DisplayClass11_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass11_0");
NEED_NO_BOX(::Zenject::__SubContainerBinder____c__DisplayClass12_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SubContainerBinder____c__DisplayClass12_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass12_0");
NEED_NO_BOX(::Zenject::__SubContainerBinder____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SubContainerBinder____c__DisplayClass13_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass13_0");
NEED_NO_BOX(::Zenject::__SubContainerBinder____c__DisplayClass15_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SubContainerBinder____c__DisplayClass15_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass15_0");
NEED_NO_BOX(::Zenject::__SubContainerBinder____c__DisplayClass17_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SubContainerBinder____c__DisplayClass17_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass17_0");
NEED_NO_BOX(::Zenject::__SubContainerBinder____c__DisplayClass18_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SubContainerBinder____c__DisplayClass18_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass18_0");
NEED_NO_BOX(::Zenject::__SubContainerBinder____c__DisplayClass20_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SubContainerBinder____c__DisplayClass20_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass20_0");
NEED_NO_BOX(::Zenject::__SubContainerBinder____c__DisplayClass22_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SubContainerBinder____c__DisplayClass22_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass22_0");
NEED_NO_BOX(::Zenject::__SubContainerBinder____c__DisplayClass24_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SubContainerBinder____c__DisplayClass24_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass24_0");
NEED_NO_BOX(::Zenject::__SubContainerBinder____c__DisplayClass7_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SubContainerBinder____c__DisplayClass7_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass7_0");
NEED_NO_BOX(::Zenject::__SubContainerBinder____c__DisplayClass8_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SubContainerBinder____c__DisplayClass8_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass8_0");
