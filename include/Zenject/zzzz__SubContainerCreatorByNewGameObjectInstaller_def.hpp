#pragma once
// IWYU pragma private; include "Zenject/SubContainerCreatorByNewGameObjectInstaller.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__SubContainerCreatorByNewGameObjectDynamicContext_def.hpp"
CORDL_MODULE_EXPORT(SubContainerCreatorByNewGameObjectInstaller)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class GameObjectContext;
}
namespace Zenject {
class GameObjectCreationParameters;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
class SubContainerCreatorByNewGameObjectInstaller;
}
namespace Zenject {
class SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerCreatorByNewGameObjectInstaller);
MARK_REF_PTR_T(::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0);
// Dependencies System.Object
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerCreatorByNewGameObjectInstaller/<>c__DisplayClass3_0
class CORDL_TYPE SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Zenject::SubContainerCreatorByNewGameObjectInstaller* __4__this;

  /// @brief Field args, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_args, put = __cordl_internal_set_args)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args;

  static inline ::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0* New_ctor();

  /// @brief Method <AddInstallers>b__0, addr 0x4b41f64, size 0x150, virtual false, abstract: false, final false
  inline void _AddInstallers_b__0(::Zenject::DiContainer* subContainer);

  constexpr ::Zenject::SubContainerCreatorByNewGameObjectInstaller* const& __cordl_internal_get___4__this() const;

  constexpr ::Zenject::SubContainerCreatorByNewGameObjectInstaller*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& __cordl_internal_get_args() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& __cordl_internal_get_args();

  constexpr void __cordl_internal_set___4__this(::Zenject::SubContainerCreatorByNewGameObjectInstaller* value);

  constexpr void __cordl_internal_set_args(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  /// @brief Method __zenCreate, addr 0x4b420b4, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4b42108, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4b41f00, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0(SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0(SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12598 };

  /// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
  ::Zenject::SubContainerCreatorByNewGameObjectInstaller* _____4__this;

  /// @brief Field args, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* ___args;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0, ___args) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0, 0x20>, "Size mismatch!");

} // namespace Zenject
// Dependencies Zenject.SubContainerCreatorByNewGameObjectDynamicContext
namespace Zenject {
// Is value type: false
// CS Name: Zenject.SubContainerCreatorByNewGameObjectInstaller
class CORDL_TYPE SubContainerCreatorByNewGameObjectInstaller : public ::Zenject::SubContainerCreatorByNewGameObjectDynamicContext {
public:
  // Declarations
  using __c__DisplayClass3_0 = ::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0;

  /// @brief Field _extraArgs, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__extraArgs, put = __cordl_internal_set__extraArgs)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* _extraArgs;

  /// @brief Field _installerType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__installerType, put = __cordl_internal_set__installerType)) ::System::Type* _installerType;

  /// @brief Method AddInstallers, addr 0x4b41e14, size 0xec, virtual true, abstract: false, final false
  inline void AddInstallers(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* args, ::Zenject::GameObjectContext* context);

  static inline ::Zenject::SubContainerCreatorByNewGameObjectInstaller* New_ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo,
                                                                                 ::System::Type* installerType, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs);

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* const& __cordl_internal_get__extraArgs() const;

  constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*& __cordl_internal_get__extraArgs();

  constexpr ::System::Type* const& __cordl_internal_get__installerType() const;

  constexpr ::System::Type*& __cordl_internal_get__installerType();

  constexpr void __cordl_internal_set__extraArgs(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* value);

  constexpr void __cordl_internal_set__installerType(::System::Type* value);

  /// @brief Method .ctor, addr 0x4b41d44, size 0xd0, virtual false, abstract: false, final false
  inline void _ctor(::Zenject::DiContainer* container, ::Zenject::GameObjectCreationParameters* gameObjectBindInfo, ::System::Type* installerType,
                    ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* extraArgs);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SubContainerCreatorByNewGameObjectInstaller();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewGameObjectInstaller", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SubContainerCreatorByNewGameObjectInstaller(SubContainerCreatorByNewGameObjectInstaller&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SubContainerCreatorByNewGameObjectInstaller", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SubContainerCreatorByNewGameObjectInstaller(SubContainerCreatorByNewGameObjectInstaller const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12599 };

  /// @brief Field _installerType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ____installerType;

  /// @brief Field _extraArgs, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* ____extraArgs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Zenject::SubContainerCreatorByNewGameObjectInstaller, ____installerType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Zenject::SubContainerCreatorByNewGameObjectInstaller, ____extraArgs) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerCreatorByNewGameObjectInstaller, 0x30>, "Size mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::SubContainerCreatorByNewGameObjectInstaller);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByNewGameObjectInstaller*, "Zenject", "SubContainerCreatorByNewGameObjectInstaller");
NEED_NO_BOX(::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerCreatorByNewGameObjectInstaller___c__DisplayClass3_0*, "Zenject", "SubContainerCreatorByNewGameObjectInstaller/<>c__DisplayClass3_0");
