#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HEU_ThreadManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(HEU_ThreadManager)
namespace HoudiniEngineUnity {
class HEU_ThreadedTask;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_ThreadManager;
}
// Write type traits
MARK_REF_PTR_T(::HoudiniEngineUnity::HEU_ThreadManager);
// Dependencies System.Object
namespace HoudiniEngineUnity {
// Is value type: false
// CS Name: HoudiniEngineUnity.HEU_ThreadManager
class CORDL_TYPE HEU_ThreadManager : public ::System::Object {
public:
  // Declarations
  /// @brief Field _instance, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF__instance, put = setStaticF__instance)) ::HoudiniEngineUnity::HEU_ThreadManager* _instance;

  /// @brief Field _pendingAdd, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__pendingAdd, put = __cordl_internal_set__pendingAdd)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>* _pendingAdd;

  /// @brief Field _pendingRemove, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__pendingRemove,
                      put = __cordl_internal_set__pendingRemove)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>* _pendingRemove;

  /// @brief Field _tasks, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__tasks, put = __cordl_internal_set__tasks)) ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>* _tasks;

  /// @brief Method AddTask, addr 0x3a62a30, size 0xe8, virtual false, abstract: false, final false
  inline void AddTask(::HoudiniEngineUnity::HEU_ThreadedTask* task);

  /// @brief Method CreateInstance, addr 0x3a6264c, size 0x4, virtual false, abstract: false, final false
  static inline void CreateInstance();

  /// @brief Method Finalize, addr 0x3a62650, size 0x8, virtual true, abstract: false, final false
  inline void Finalize();

  static inline ::HoudiniEngineUnity::HEU_ThreadManager* New_ctor();

  /// @brief Method Register, addr 0x3a6265c, size 0x4, virtual false, abstract: false, final false
  inline void Register();

  /// @brief Method RemoveTask, addr 0x3a62b18, size 0xe8, virtual false, abstract: false, final false
  inline void RemoveTask(::HoudiniEngineUnity::HEU_ThreadedTask* task);

  /// @brief Method Unregister, addr 0x3a62658, size 0x4, virtual false, abstract: false, final false
  inline void Unregister();

  /// @brief Method Update, addr 0x3a62660, size 0x3d0, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>* const& __cordl_internal_get__pendingAdd() const;

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>*& __cordl_internal_get__pendingAdd();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>* const& __cordl_internal_get__pendingRemove() const;

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>*& __cordl_internal_get__pendingRemove();

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>* const& __cordl_internal_get__tasks() const;

  constexpr ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>*& __cordl_internal_get__tasks();

  constexpr void __cordl_internal_set__pendingAdd(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>* value);

  constexpr void __cordl_internal_set__pendingRemove(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>* value);

  constexpr void __cordl_internal_set__tasks(::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>* value);

  /// @brief Method .ctor, addr 0x3a62c00, size 0xac, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::HoudiniEngineUnity::HEU_ThreadManager* getStaticF__instance();

  /// @brief Method get_Instance, addr 0x3a62604, size 0x48, virtual false, abstract: false, final false
  static inline ::HoudiniEngineUnity::HEU_ThreadManager* get_Instance();

  static inline void setStaticF__instance(::HoudiniEngineUnity::HEU_ThreadManager* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_ThreadManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HEU_ThreadManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HEU_ThreadManager(HEU_ThreadManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HEU_ThreadManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HEU_ThreadManager(HEU_ThreadManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11804 };

  /// @brief Field _tasks, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>* ____tasks;

  /// @brief Field _pendingAdd, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>* ____pendingAdd;

  /// @brief Field _pendingRemove, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::HoudiniEngineUnity::HEU_ThreadedTask*>* ____pendingRemove;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HEU_ThreadManager, ____tasks) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ThreadManager, ____pendingAdd) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_ThreadManager, ____pendingRemove) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_ThreadManager, 0x28>, "Size mismatch!");

} // namespace HoudiniEngineUnity
NEED_NO_BOX(::HoudiniEngineUnity::HEU_ThreadManager);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_ThreadManager*, "HoudiniEngineUnity", "HEU_ThreadManager");
