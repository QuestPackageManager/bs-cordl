#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewPrefabDynamicContext_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByNewPrefabMethod_3)
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3> class __SubContainerCreatorByNewPrefabMethod_3____c__DisplayClass2_0;
}
namespace System {
template <typename T1, typename T2, typename T3, typename T4> class Action_4;
}
namespace Zenject {
class GameObjectContext;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IPrefabProvider;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
class Object;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3> class SubContainerCreatorByNewPrefabMethod_3;
}
namespace Zenject {
template <typename TParam1, typename TParam2, typename TParam3> class __SubContainerCreatorByNewPrefabMethod_3____c__DisplayClass2_0;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::SubContainerCreatorByNewPrefabMethod_3);
MARK_GEN_REF_PTR_T(::Zenject::__SubContainerCreatorByNewPrefabMethod_3____c__DisplayClass2_0);
// Type: ::<>c__DisplayClass2_0
// SizeInfo { instance_size: 32, native_size: 32, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11210))
// CS Name: ::SubContainerCreatorByNewPrefabMethod`3::<>c__DisplayClass2_0<TParam1,TParam2,TParam3>*
class CORDL_TYPE __SubContainerCreatorByNewPrefabMethod_3____c__DisplayClass2_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __get___4__this, put = __set___4__this))::Zenject::SubContainerCreatorByNewPrefabMethod_3<TParam1, TParam2, TParam3>* __4__this;

  /// @brief Field args, offset 0x18, size 0x8
  __declspec(property(get = __get_args, put = __set_args))::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args;

  constexpr ::Zenject::SubContainerCreatorByNewPrefabMethod_3<TParam1, TParam2, TParam3>*& __get___4__this();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorByNewPrefabMethod_3<TParam1, TParam2, TParam3>*> const& __get___4__this() const;

  constexpr void __set___4__this(::Zenject::SubContainerCreatorByNewPrefabMethod_3<TParam1, TParam2, TParam3>* value);

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& __get_args();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> const& __get_args() const;

  constexpr void __set_args(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  static inline ::Zenject::__SubContainerCreatorByNewPrefabMethod_3____c__DisplayClass2_0<TParam1, TParam2, TParam3>* New_ctor();

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor();

  /// @brief Method <AddInstallers>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _AddInstallers_b__0(::Zenject::DiContainer* subContainer);

  /// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerCreatorByNewPrefabMethod_3____c__DisplayClass2_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __SubContainerCreatorByNewPrefabMethod_3____c__DisplayClass2_0(__SubContainerCreatorByNewPrefabMethod_3____c__DisplayClass2_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__SubContainerCreatorByNewPrefabMethod_3____c__DisplayClass2_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __SubContainerCreatorByNewPrefabMethod_3____c__DisplayClass2_0(__SubContainerCreatorByNewPrefabMethod_3____c__DisplayClass2_0 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __SubContainerCreatorByNewPrefabMethod_3____c__DisplayClass2_0();

public:
  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::SubContainerCreatorByNewPrefabMethod_3<TParam1, TParam2, TParam3>* _____4__this;

  /// @brief Field args, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* ___args;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
// Type: Zenject::SubContainerCreatorByNewPrefabMethod`3
// SizeInfo { instance_size: 48, native_size: 48, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// cpp template
template <typename TParam1, typename TParam2, typename TParam3>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11202))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11211))
// CS Name: ::Zenject::SubContainerCreatorByNewPrefabMethod`3<TParam1,TParam2,TParam3>*
class CORDL_TYPE SubContainerCreatorByNewPrefabMethod_3 : public ::Zenject::SubContainerCreatorByNewPrefabDynamicContext {
public:
  // Declarations
  using __c__DisplayClass2_0 = ::Zenject::__SubContainerCreatorByNewPrefabMethod_3____c__DisplayClass2_0<TParam1, TParam2, TParam3>;

  /// @brief Field _installerMethod, offset 0x28, size 0x8
  __declspec(property(get = __get__installerMethod, put = __set__installerMethod))::System::Action_4<::Zenject::DiContainer*, TParam1, TParam2, TParam3>* _installerMethod;

  constexpr ::System::Action_4<::Zenject::DiContainer*, TParam1, TParam2, TParam3>*& __get__installerMethod();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_4<::Zenject::DiContainer*, TParam1, TParam2, TParam3>*> const& __get__installerMethod() const;

  constexpr void __set__installerMethod(::System::Action_4<::Zenject::DiContainer*, TParam1, TParam2, TParam3>* value);

  static inline ::Zenject::SubContainerCreatorByNewPrefabMethod_3<TParam1, TParam2, TParam3>* New_ctor(::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider,
                                                                                                       ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                                                                                                       ::System::Action_4<::Zenject::DiContainer*, TParam1, TParam2, TParam3>* installerMethod);

  /// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::IPrefabProvider* prefabProvider, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                    ::System::Action_4<::Zenject::DiContainer*, TParam1, TParam2, TParam3>* installerMethod);

  /// @brief Method AddInstallers addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::GameObjectContext* context);

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabMethod_3", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByNewPrefabMethod_3(SubContainerCreatorByNewPrefabMethod_3&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewPrefabMethod_3", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByNewPrefabMethod_3(SubContainerCreatorByNewPrefabMethod_3 const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByNewPrefabMethod_3();

public:
  /// @brief Field _installerMethod, offset: 0x28, size: 0x8, def value: None
  ::System::Action_4<::Zenject::DiContainer*, TParam1, TParam2, TParam3>* ____installerMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::SubContainerCreatorByNewPrefabMethod_3, "Zenject", "SubContainerCreatorByNewPrefabMethod`3");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__SubContainerCreatorByNewPrefabMethod_3____c__DisplayClass2_0, "Zenject", "SubContainerCreatorByNewPrefabMethod`3/<>c__DisplayClass2_0");
