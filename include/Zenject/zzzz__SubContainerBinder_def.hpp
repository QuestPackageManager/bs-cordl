#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(SubContainerBinder)
namespace Zenject {
class WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass17_0;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine {
class Object;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass24_0;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass22_0;
}
namespace Zenject {
class IBindingFinalizer;
}
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass12_0;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Type;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass10_0;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass20_0;
}
namespace Zenject {
class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass18_0;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass13_0;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass7_0;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass11_0;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass8_0;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class __SubContainerBinder____c__DisplayClass15_0;
}
namespace System {
class Object;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class BindStatement;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace Zenject {
class ISubContainerCreator;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10855))
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

  /// @brief Method .ctor addr 0x2d73710 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ByInstance>b__0 addr 0x2d74af0 size 0x68 virtual false final false
  inline ::Zenject::ISubContainerCreator* _ByInstance_b__0(::Zenject::DiContainer* _);

  /// @brief Method __zenCreate addr 0x2d74b58 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d74bb4 size 0x1c0 virtual false final false
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

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass7_0, ___subContainer) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass8_0
// SizeInfo { instance_size: 24, native_size: -1, calculated_instance_size: 24, calculated_native_size: 24, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10856))
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

  /// @brief Method .ctor addr 0x2d738a0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ByInstanceGetter>b__0 addr 0x2d74d74 size 0x68 virtual false final false
  inline ::Zenject::ISubContainerCreator* _ByInstanceGetter_b__0(::Zenject::DiContainer* _);

  /// @brief Method __zenCreate addr 0x2d74ddc size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d74e38 size 0x1c0 virtual false final false
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

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass8_0, ___subContainerGetter) == 0x10, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass10_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10857))
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

  /// @brief Method .ctor addr 0x2d73a90 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ByInstaller>b__0 addr 0x2d74ff8 size 0x7c virtual false final false
  inline ::Zenject::ISubContainerCreator* _ByInstaller_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x2d75074 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d750d0 size 0x1c0 virtual false final false
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

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass10_0, ___subContainerBindInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass10_0, ___installerType) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass11_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10858))
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

  /// @brief Method .ctor addr 0x2d73c1c size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ByMethod>b__0 addr 0x2d75290 size 0x7c virtual false final false
  inline ::Zenject::ISubContainerCreator* _ByMethod_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x2d7530c size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d75368 size 0x1c0 virtual false final false
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

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass11_0, ___subContainerBindInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass11_0, ___installerMethod) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass12_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10859))
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

  /// @brief Method .ctor addr 0x2d73da0 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ByNewGameObjectMethod>b__0 addr 0x2d75528 size 0x7c virtual false final false
  inline ::Zenject::ISubContainerCreator* _ByNewGameObjectMethod_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x2d755a4 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d75600 size 0x1c0 virtual false final false
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

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass12_0, ___gameObjectInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass12_0, ___installerMethod) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass13_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10860))
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

  /// @brief Method .ctor addr 0x2d73f80 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ByNewPrefabMethod>b__0 addr 0x2d757c0 size 0xb4 virtual false final false
  inline ::Zenject::ISubContainerCreator* _ByNewPrefabMethod_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x2d75874 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d758d0 size 0x1c0 virtual false final false
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

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass13_0, ___prefab) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass13_0, ___gameObjectInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass13_0, ___installerMethod) == 0x20, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass15_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10861))
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

  /// @brief Method .ctor addr 0x2d741cc size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ByNewGameObjectInstaller>b__0 addr 0x2d75a90 size 0x94 virtual false final false
  inline ::Zenject::ISubContainerCreator* _ByNewGameObjectInstaller_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x2d75b24 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d75b80 size 0x1c0 virtual false final false
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

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass15_0, ___gameObjectInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass15_0, ___installerType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass15_0, _____4__this) == 0x20, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass17_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10862))
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

  /// @brief Method .ctor addr 0x2d743cc size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ByNewPrefabInstaller>b__0 addr 0x2d75d40 size 0xd4 virtual false final false
  inline ::Zenject::ISubContainerCreator* _ByNewPrefabInstaller_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x2d75e14 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d75e70 size 0x1c0 virtual false final false
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

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass17_0, ___prefab) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass17_0, ___gameObjectInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass17_0, ___installerType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass17_0, _____4__this) == 0x28, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass18_0
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10863))
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

  /// @brief Method .ctor addr 0x2d74560 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ByNewPrefabResourceMethod>b__0 addr 0x2d76030 size 0xb4 virtual false final false
  inline ::Zenject::ISubContainerCreator* _ByNewPrefabResourceMethod_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x2d760e4 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d76140 size 0x1c0 virtual false final false
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

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass18_0, ___resourcePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass18_0, ___gameObjectInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass18_0, ___installerMethod) == 0x20, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass20_0
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10864))
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

  /// @brief Method .ctor addr 0x2d747c8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ByNewPrefabResourceInstaller>b__0 addr 0x2d76300 size 0xd4 virtual false final false
  inline ::Zenject::ISubContainerCreator* _ByNewPrefabResourceInstaller_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x2d763d4 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d76430 size 0x1c0 virtual false final false
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

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass20_0, ___resourcePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass20_0, ___gameObjectInfo) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass20_0, ___installerType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass20_0, _____4__this) == 0x28, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass22_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10865))
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

  /// @brief Method .ctor addr 0x2d74958 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ByNewContextPrefab>b__0 addr 0x2d765f0 size 0xb0 virtual false final false
  inline ::Zenject::ISubContainerCreator* _ByNewContextPrefab_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x2d766a0 size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d766fc size 0x1c0 virtual false final false
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

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass22_0, ___prefab) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass22_0, ___gameObjectInfo) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: ::<>c__DisplayClass24_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10866))
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

  /// @brief Method .ctor addr 0x2d74ae8 size 0x8 virtual false final false
  inline void _ctor();

  /// @brief Method <ByNewContextPrefabResource>b__0 addr 0x2d768bc size 0xb0 virtual false final false
  inline ::Zenject::ISubContainerCreator* _ByNewContextPrefabResource_b__0(::Zenject::DiContainer* container);

  /// @brief Method __zenCreate addr 0x2d7696c size 0x5c virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x2d769c8 size 0x1c0 virtual false final false
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

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass24_0, ___resourcePath) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__SubContainerBinder____c__DisplayClass24_0, ___gameObjectInfo) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: Zenject::SubContainerBinder
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10867))
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

  /// @brief Method .ctor addr 0x2d73560 size 0x50 virtual false final false
  inline void _ctor(::Zenject::BindInfo* bindInfo, ::Zenject::BindStatement* bindStatement, ::System::Object* subIdentifier, bool resolveAll);

  /// @brief Method set_SubFinalizer addr 0x2d735b0 size 0x1c virtual false final false
  inline void set_SubFinalizer(::Zenject::IBindingFinalizer* value);

  /// @brief Method ByInstance addr 0x2d735cc size 0x144 virtual false final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstance(::Zenject::DiContainer* subContainer);

  /// @brief Method ByInstanceGetter addr 0x2d7375c size 0x144 virtual false final false
  inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstanceGetter(::System::Func_2<::Zenject::InjectContext*, ::Zenject::DiContainer*>* subContainerGetter);

  /// @brief Method ByInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TInstaller> inline ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstaller();

  /// @brief Method ByInstaller addr 0x2d738a8 size 0x1e8 virtual false final false
  inline ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstaller(::System::Type* installerType);

  /// @brief Method ByMethod addr 0x2d73aa0 size 0x17c virtual false final false
  inline ::Zenject::WithKernelDefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* ByMethod(::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  /// @brief Method ByNewGameObjectMethod addr 0x2d73c24 size 0x17c virtual false final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectMethod(::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  /// @brief Method ByNewPrefabMethod addr 0x2d73df4 size 0x18c virtual false final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabMethod(::UnityEngine::Object* prefab, ::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  /// @brief Method ByNewGameObjectInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TInstaller> inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectInstaller();

  /// @brief Method ByNewGameObjectInstaller addr 0x2d73fe4 size 0x1e8 virtual false final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectInstaller(::System::Type* installerType);

  /// @brief Method ByNewPrefabInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TInstaller> inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabInstaller(::UnityEngine::Object* prefab);

  /// @brief Method ByNewPrefabInstaller addr 0x2d741d4 size 0x1f8 virtual false final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabInstaller(::UnityEngine::Object* prefab, ::System::Type* installerType);

  /// @brief Method ByNewPrefabResourceMethod addr 0x2d743d4 size 0x18c virtual false final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceMethod(::StringW resourcePath, ::System::Action_1<::Zenject::DiContainer*>* installerMethod);

  /// @brief Method ByNewPrefabResourceInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
  template <typename TInstaller> inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceInstaller(::StringW resourcePath);

  /// @brief Method ByNewPrefabResourceInstaller addr 0x2d745c4 size 0x204 virtual false final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceInstaller(::StringW resourcePath, ::System::Type* installerType);

  /// @brief Method ByNewPrefab addr 0x2d747d0 size 0x4 virtual false final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefab(::UnityEngine::Object* prefab);

  /// @brief Method ByNewContextPrefab addr 0x2d747d4 size 0x184 virtual false final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefab(::UnityEngine::Object* prefab);

  /// @brief Method ByNewPrefabResource addr 0x2d74960 size 0x4 virtual false final false
  inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResource(::StringW resourcePath);

  /// @brief Method ByNewContextPrefabResource addr 0x2d74964 size 0x184 virtual false final false
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

static_assert(offsetof(::Zenject::SubContainerBinder, ____bindInfo) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBinder, ____bindStatement) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBinder, ____subIdentifier) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerBinder, ____resolveAll) == 0x28, "Offset mismatch!");

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
