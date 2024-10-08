#pragma once
// IWYU pragma private; include "Zenject/ProjectKernel.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__MonoKernel_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ProjectKernel)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T, typename TResult> class Func_2;
}
namespace System {
class Object;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class SceneContextRegistry;
}
namespace Zenject {
class SceneContext;
}
namespace Zenject {
class ZenjectSettings;
}
namespace Zenject {
class __ProjectKernel____c__DisplayClass4_0;
}
// Forward declare root types
namespace Zenject {
class ProjectKernel;
}
namespace Zenject {
class __ProjectKernel____c__DisplayClass4_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ProjectKernel);
MARK_REF_PTR_T(::Zenject::__ProjectKernel____c__DisplayClass4_0);
// Type: ::<>c__DisplayClass4_0
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::ProjectKernel::<>c__DisplayClass4_0*
class CORDL_TYPE __ProjectKernel____c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9__0, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___9__0, put = __cordl_internal_set___9__0)) ::System::Func_2<::UnityW<::Zenject::SceneContext>, int32_t>* __9__0;

  /// @brief Field sceneOrder, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_sceneOrder, put = __cordl_internal_set_sceneOrder)) ::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>* sceneOrder;

  static inline ::Zenject::__ProjectKernel____c__DisplayClass4_0* New_ctor();

  /// @brief Method <ForceUnloadAllScenes>b__0, addr 0x4ad1024, size 0x78, virtual false, abstract: false, final false
  inline int32_t _ForceUnloadAllScenes_b__0(::Zenject::SceneContext* x);

  constexpr ::System::Func_2<::UnityW<::Zenject::SceneContext>, int32_t>*& __cordl_internal_get___9__0();

  constexpr ::cordl_internals::to_const_pointer<::System::Func_2<::UnityW<::Zenject::SceneContext>, int32_t>*> const& __cordl_internal_get___9__0() const;

  constexpr ::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>*& __cordl_internal_get_sceneOrder();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>*> const& __cordl_internal_get_sceneOrder() const;

  constexpr void __cordl_internal_set___9__0(::System::Func_2<::UnityW<::Zenject::SceneContext>, int32_t>* value);

  constexpr void __cordl_internal_set_sceneOrder(::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>* value);

  /// @brief Method __zenCreate, addr 0x4ad109c, size 0x54, virtual false, abstract: false, final false
  static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*, ::Array<::System::Object*>*> P_0);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4ad10f0, size 0x1b8, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method .ctor, addr 0x4ad09d0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ProjectKernel____c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ProjectKernel____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ProjectKernel____c__DisplayClass4_0(__ProjectKernel____c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ProjectKernel____c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ProjectKernel____c__DisplayClass4_0(__ProjectKernel____c__DisplayClass4_0 const&) = delete;

  /// @brief Field sceneOrder, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityEngine::SceneManagement::Scene>* ___sceneOrder;

  /// @brief Field <>9__0, offset: 0x18, size: 0x8, def value: None
  ::System::Func_2<::UnityW<::Zenject::SceneContext>, int32_t>* _____9__0;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12623 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ProjectKernel____c__DisplayClass4_0, 0x20>, "Size mismatch!");

static_assert(offsetof(::Zenject::__ProjectKernel____c__DisplayClass4_0, ___sceneOrder) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Zenject::__ProjectKernel____c__DisplayClass4_0, _____9__0) == 0x18, "Offset mismatch!");

} // namespace Zenject
// Type: Zenject::ProjectKernel
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 80, minimum_alignment: 8, packing: None, specified_packing: None }
namespace Zenject {
// Is value type: false
// CS Name: ::Zenject::ProjectKernel*
class CORDL_TYPE ProjectKernel : public ::Zenject::MonoKernel {
public:
  // Declarations
  using __c__DisplayClass4_0 = ::Zenject::__ProjectKernel____c__DisplayClass4_0;

  /// @brief Field _contextRegistry, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__contextRegistry, put = __cordl_internal_set__contextRegistry)) ::Zenject::SceneContextRegistry* _contextRegistry;

  /// @brief Field _settings, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__settings, put = __cordl_internal_set__settings)) ::Zenject::ZenjectSettings* _settings;

  /// @brief Method DestroyEverythingInOrder, addr 0x4ad055c, size 0x98, virtual false, abstract: false, final false
  inline void DestroyEverythingInOrder();

  /// @brief Method ForceUnloadAllScenes, addr 0x4ad05f4, size 0x3dc, virtual false, abstract: false, final false
  inline void ForceUnloadAllScenes(bool immediate);

  static inline ::Zenject::ProjectKernel* New_ctor();

  /// @brief Method OnApplicationQuit, addr 0x4ad0534, size 0x28, virtual false, abstract: false, final false
  inline void OnApplicationQuit();

  constexpr ::Zenject::SceneContextRegistry*& __cordl_internal_get__contextRegistry();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::SceneContextRegistry*> const& __cordl_internal_get__contextRegistry() const;

  constexpr ::Zenject::ZenjectSettings*& __cordl_internal_get__settings();

  constexpr ::cordl_internals::to_const_pointer<::Zenject::ZenjectSettings*> const& __cordl_internal_get__settings() const;

  constexpr void __cordl_internal_set__contextRegistry(::Zenject::SceneContextRegistry* value);

  constexpr void __cordl_internal_set__settings(::Zenject::ZenjectSettings* value);

  /// @brief Method __zenCreateInjectTypeInfo, addr 0x4ad0c98, size 0x38c, virtual false, abstract: false, final false
  static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo();

  /// @brief Method __zenFieldSetter0, addr 0x4ad0a30, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter0(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method __zenFieldSetter1, addr 0x4ad0b64, size 0x134, virtual false, abstract: false, final false
  static inline void __zenFieldSetter1(::System::Object* P_0, ::System::Object* P_1);

  /// @brief Method .ctor, addr 0x4ad0a28, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ProjectKernel();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ProjectKernel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ProjectKernel(ProjectKernel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ProjectKernel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ProjectKernel(ProjectKernel const&) = delete;

  /// @brief Field _settings, offset: 0x40, size: 0x8, def value: None
  ::Zenject::ZenjectSettings* ____settings;

  /// @brief Field _contextRegistry, offset: 0x48, size: 0x8, def value: None
  ::Zenject::SceneContextRegistry* ____contextRegistry;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12624 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ProjectKernel, 0x50>, "Size mismatch!");

static_assert(offsetof(::Zenject::ProjectKernel, ____settings) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Zenject::ProjectKernel, ____contextRegistry) == 0x48, "Offset mismatch!");

} // namespace Zenject
NEED_NO_BOX(::Zenject::ProjectKernel);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ProjectKernel*, "Zenject", "ProjectKernel");
NEED_NO_BOX(::Zenject::__ProjectKernel____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ProjectKernel____c__DisplayClass4_0*, "Zenject", "ProjectKernel/<>c__DisplayClass4_0");
