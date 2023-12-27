#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewGameObjectDynamicContext_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByNewGameObjectMethod_6)
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class GameObjectContext;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7> class Action_7;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6> class __SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6> class SubContainerCreatorByNewGameObjectMethod_6;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6> class __SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::SubContainerCreatorByNewGameObjectMethod_6);
MARK_GEN_REF_PTR_T(::Zenject::__SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0);
// Type: ::<>c__DisplayClass2_0
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11269))
// CS Name: ::SubContainerCreatorByNewGameObjectMethod`6::<>c__DisplayClass2_0<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>*
class CORDL_TYPE __SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::SubContainerCreatorByNewGameObjectMethod_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* __4__this;

  /// @brief Field args, offset 0x18, size 0x8
  __declspec(property(get = __get_args, put = __set_args))::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args;

  constexpr ::Zenject::SubContainerCreatorByNewGameObjectMethod_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorByNewGameObjectMethod_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::SubContainerCreatorByNewGameObjectMethod_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* value);

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& __get_args();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> const& __get_args() const;

  constexpr void __set_args(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  static inline ::Zenject::__SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <AddInstallers>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _AddInstallers_b__0(::Zenject::DiContainer* subContainer);

  /// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0(__SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0(__SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::SubContainerCreatorByNewGameObjectMethod_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* _____4__this;

  /// @brief Field args, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* ___args;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: Zenject::SubContainerCreatorByNewGameObjectMethod`6
// SizeInfo { instance_size: 40, native_size: 40, calculated_instance_size: 40, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11255))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11270))
// CS Name: ::Zenject::SubContainerCreatorByNewGameObjectMethod`6<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6>*
class CORDL_TYPE SubContainerCreatorByNewGameObjectMethod_6 : public ::Zenject::SubContainerCreatorByNewGameObjectDynamicContext {
public:
  // Declarations
  using __c__DisplayClass2_0 = ::Zenject::__SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>;

  /// @brief Field _installerMethod, offset 0x20, size 0x8
  __declspec(property(get = __get__installerMethod, put = __set__installerMethod))::System::Action_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* _installerMethod;

  constexpr ::System::Action_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*& __get__installerMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*> const& __get__installerMethod() const;

  constexpr void __set__installerMethod(::System::Action_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* value);

  static inline ::Zenject::SubContainerCreatorByNewGameObjectMethod_6<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>*
  New_ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
           ::System::Action_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* installerMethod);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                    ::System::Action_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* installerMethod);

  /// @brief Method AddInstallers addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::GameObjectContext* context);

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewGameObjectMethod_6", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByNewGameObjectMethod_6(SubContainerCreatorByNewGameObjectMethod_6&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewGameObjectMethod_6", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByNewGameObjectMethod_6(SubContainerCreatorByNewGameObjectMethod_6 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByNewGameObjectMethod_6();

public:
  /// @brief Field _installerMethod, offset: 0x20, size: 0x8, def value: None
  ::System::Action_7<::Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6>* ____installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::SubContainerCreatorByNewGameObjectMethod_6, "Zenject", "SubContainerCreatorByNewGameObjectMethod`6");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__SubContainerCreatorByNewGameObjectMethod_6____c__DisplayClass2_0, "Zenject", "SubContainerCreatorByNewGameObjectMethod`6/<>c__DisplayClass2_0");
