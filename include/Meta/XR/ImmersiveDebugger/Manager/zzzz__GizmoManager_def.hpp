#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Manager/GizmoManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/Utils/zzzz__InstanceHandle_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GizmoManager)
namespace Meta::XR::ImmersiveDebugger::Gizmo {
class GizmoRendererManager;
}
namespace Meta::XR::ImmersiveDebugger::Hierarchy {
class Item;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class GizmoManager___c__DisplayClass4_0;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class GizmoManager___c__DisplayClass4_1;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class IDebugManager;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class IDebugUIPanel;
}
namespace Meta::XR::ImmersiveDebugger::UserInterface {
class IMember;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
class InstanceCache;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
struct InstanceHandle;
}
namespace Meta::XR::ImmersiveDebugger {
class DebugMember;
}
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System::Reflection {
class MemberInfo;
}
namespace System {
class Type;
}
namespace System {
template <typename T1, typename T2> struct ValueTuple_2;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Manager {
class GizmoManager;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class GizmoManager___c__DisplayClass4_0;
}
namespace Meta::XR::ImmersiveDebugger::Manager {
class GizmoManager___c__DisplayClass4_1;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::GizmoManager);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0);
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1);
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.GizmoManager/<>c__DisplayClass4_0
class CORDL_TYPE GizmoManager___c__DisplayClass4_0 : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>4__this, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get___4__this, put = __cordl_internal_set___4__this)) ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager* __4__this;

  /// @brief Field gizmosList, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_gizmosList, put = __cordl_internal_set_gizmosList)) ::System::Collections::Generic::List_1<
      ::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>>* gizmosList;

  /// @brief Field memberToGizmoRendererManagerDict, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_memberToGizmoRendererManagerDict, put = __cordl_internal_set_memberToGizmoRendererManagerDict)) ::System::Collections::Generic::Dictionary_2<
      ::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>* memberToGizmoRendererManagerDict;

  /// @brief Field membersList, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_membersList, put = __cordl_internal_set_membersList)) ::System::Collections::Generic::List_1<
      ::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*>>* membersList;

  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type)) ::System::Type* type;

  static inline ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0* New_ctor();

  /// @brief Method <ProcessType>b__0, addr 0x58b45bc, size 0x1d4, virtual false, abstract: false, final false
  inline bool _ProcessType_b__0(::System::Reflection::MemberInfo* info, ::Meta::XR::ImmersiveDebugger::DebugMember* attribute);

  /// @brief Method <ProcessType>b__1, addr 0x58b4790, size 0x300, virtual false, abstract: false, final false
  inline void _ProcessType_b__1(::Meta::XR::ImmersiveDebugger::UserInterface::IMember* memberController, ::System::Reflection::MemberInfo* member,
                                ::Meta::XR::ImmersiveDebugger::DebugMember* attribute, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instance);

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager* const& __cordl_internal_get___4__this() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager*& __cordl_internal_get___4__this();

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>>* const&
  __cordl_internal_get_gizmosList() const;

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>>*&
  __cordl_internal_get_gizmosList();

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>* const&
  __cordl_internal_get_memberToGizmoRendererManagerDict() const;

  constexpr ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>*&
  __cordl_internal_get_memberToGizmoRendererManagerDict();

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*>>* const&
  __cordl_internal_get_membersList() const;

  constexpr ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*>>*& __cordl_internal_get_membersList();

  constexpr ::System::Type* const& __cordl_internal_get_type() const;

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr void __cordl_internal_set___4__this(::Meta::XR::ImmersiveDebugger::Manager::GizmoManager* value);

  constexpr void __cordl_internal_set_gizmosList(
      ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>>* value);

  constexpr void __cordl_internal_set_memberToGizmoRendererManagerDict(
      ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>* value);

  constexpr void
  __cordl_internal_set_membersList(::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*>>* value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  /// @brief Method .ctor, addr 0x58b3d80, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GizmoManager___c__DisplayClass4_0();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GizmoManager___c__DisplayClass4_0", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GizmoManager___c__DisplayClass4_0(GizmoManager___c__DisplayClass4_0&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GizmoManager___c__DisplayClass4_0", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GizmoManager___c__DisplayClass4_0(GizmoManager___c__DisplayClass4_0 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18398 };

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  /// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager* _____4__this;

  /// @brief Field gizmosList, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>>* ___gizmosList;

  /// @brief Field membersList, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::Meta::XR::ImmersiveDebugger::DebugMember*>>* ___membersList;

  /// @brief Field memberToGizmoRendererManagerDict, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>* ___memberToGizmoRendererManagerDict;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0, ___gizmosList) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0, ___membersList) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0, ___memberToGizmoRendererManagerDict) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0, 0x38>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
// Dependencies Meta.XR.ImmersiveDebugger.Utils.InstanceHandle, System.Object
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.GizmoManager/<>c__DisplayClass4_1
class CORDL_TYPE GizmoManager___c__DisplayClass4_1 : public ::System::Object {
public:
  // Declarations
  /// @brief Field CS$<>8__locals1, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_CS$__8__locals1,
                      put = __cordl_internal_set_CS$__8__locals1)) ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0* CS$__8__locals1;

  /// @brief Field instance, offset 0x18, size 0x18
  __declspec(property(get = __cordl_internal_get_instance, put = __cordl_internal_set_instance)) ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle instance;

  /// @brief Field member, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_member, put = __cordl_internal_set_member)) ::System::Reflection::MemberInfo* member;

  static inline ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1* New_ctor();

  /// @brief Method <ProcessType>g__GetState|3, addr 0x58b4c6c, size 0x6c, virtual false, abstract: false, final false
  inline bool _ProcessType_g__GetState_3();

  /// @brief Method <ProcessType>g__OnStateChanged|2, addr 0x58b4af4, size 0x7c, virtual false, abstract: false, final false
  inline void _ProcessType_g__OnStateChanged_2(bool state);

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0* const& __cordl_internal_get_CS$__8__locals1() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0*& __cordl_internal_get_CS$__8__locals1();

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle const& __cordl_internal_get_instance() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle& __cordl_internal_get_instance();

  constexpr ::System::Reflection::MemberInfo* const& __cordl_internal_get_member() const;

  constexpr ::System::Reflection::MemberInfo*& __cordl_internal_get_member();

  constexpr void __cordl_internal_set_CS$__8__locals1(::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0* value);

  constexpr void __cordl_internal_set_instance(::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle value);

  constexpr void __cordl_internal_set_member(::System::Reflection::MemberInfo* value);

  /// @brief Method .ctor, addr 0x58b4a90, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GizmoManager___c__DisplayClass4_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GizmoManager___c__DisplayClass4_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GizmoManager___c__DisplayClass4_1(GizmoManager___c__DisplayClass4_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GizmoManager___c__DisplayClass4_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GizmoManager___c__DisplayClass4_1(GizmoManager___c__DisplayClass4_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18399 };

  /// @brief Field member, offset: 0x10, size: 0x8, def value: None
  ::System::Reflection::MemberInfo* ___member;

  /// @brief Field instance, offset: 0x18, size: 0x18, def value: None
  ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle ___instance;

  /// @brief Field CS$<>8__locals1, offset: 0x30, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0* ___CS$__8__locals1;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1, ___member) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1, ___instance) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1, ___CS$__8__locals1) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1, 0x38>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger::Manager {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Manager.GizmoManager
class CORDL_TYPE GizmoManager : public ::System::Object {
public:
  // Declarations
  using __c__DisplayClass4_0 = ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0;

  using __c__DisplayClass4_1 = ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1;

  /// @brief Field GizmosDict, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_GizmosDict, put = __cordl_internal_set_GizmosDict)) ::System::Collections::Generic::Dictionary_2<
      ::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>>*>*
      GizmosDict;

  __declspec(property(get = get_TelemetryAnnotation)) ::StringW TelemetryAnnotation;

  /// @brief Field _instanceCache, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__instanceCache, put = __cordl_internal_set__instanceCache)) ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* _instanceCache;

  /// @brief Field _uiPanel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__uiPanel, put = __cordl_internal_set__uiPanel)) ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* _uiPanel;

  /// @brief Convert operator to "::Meta::XR::ImmersiveDebugger::Manager::IDebugManager"
  constexpr operator ::Meta::XR::ImmersiveDebugger::Manager::IDebugManager*() noexcept;

  /// @brief Method AddGizmo, addr 0x58b3f44, size 0x2b4, virtual false, abstract: false, final false
  static inline bool AddGizmo(::System::Type* type, ::System::Reflection::MemberInfo* member, ::Meta::XR::ImmersiveDebugger::DebugMember* gizmoAttribute,
                              ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* instanceCache, ::ByRef<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager*> gizmoRendererManager);

  /// @brief Method GetCountPerType, addr 0x58b448c, size 0x98, virtual true, abstract: false, final true
  inline int32_t GetCountPerType(::System::Type* type);

  static inline ::Meta::XR::ImmersiveDebugger::Manager::GizmoManager* New_ctor();

  /// @brief Method ProcessType, addr 0x58b3858, size 0x528, virtual true, abstract: false, final true
  inline void ProcessType(::System::Type* type);

  /// @brief Method ProcessTypeFromHierarchy, addr 0x58b4230, size 0x38, virtual true, abstract: false, final true
  inline void ProcessTypeFromHierarchy(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* item, ::System::Reflection::MemberInfo* memberInfo);

  /// @brief Method ProcessTypeFromInspector, addr 0x58b41f8, size 0x38, virtual true, abstract: false, final true
  inline void ProcessTypeFromInspector(::System::Type* type, ::Meta::XR::ImmersiveDebugger::Utils::InstanceHandle handle, ::System::Reflection::MemberInfo* memberInfo,
                                       ::Meta::XR::ImmersiveDebugger::DebugMember* memberAttribute);

  /// @brief Method RemoveGizmosForType, addr 0x58b3d84, size 0x1c0, virtual false, abstract: false, final false
  inline void RemoveGizmosForType(::System::Type* type);

  /// @brief Method Setup, addr 0x58b3850, size 0x8, virtual true, abstract: false, final true
  inline void Setup(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* panel, ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* cache);

  constexpr ::System::Collections::Generic::Dictionary_2<
      ::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>>*>* const&
  __cordl_internal_get_GizmosDict() const;

  constexpr ::System::Collections::Generic::Dictionary_2<
      ::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>>*>*&
  __cordl_internal_get_GizmosDict();

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* const& __cordl_internal_get__instanceCache() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*& __cordl_internal_get__instanceCache();

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* const& __cordl_internal_get__uiPanel() const;

  constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel*& __cordl_internal_get__uiPanel();

  constexpr void __cordl_internal_set_GizmosDict(
      ::System::Collections::Generic::Dictionary_2<
          ::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>>*>*
          value);

  constexpr void __cordl_internal_set__instanceCache(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* value);

  constexpr void __cordl_internal_set__uiPanel(::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* value);

  /// @brief Method .ctor, addr 0x58b4524, size 0x98, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_TelemetryAnnotation, addr 0x58b4448, size 0x44, virtual true, abstract: false, final true
  inline ::StringW get_TelemetryAnnotation();

  /// @brief Convert to "::Meta::XR::ImmersiveDebugger::Manager::IDebugManager"
  constexpr ::Meta::XR::ImmersiveDebugger::Manager::IDebugManager* i___Meta__XR__ImmersiveDebugger__Manager__IDebugManager() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GizmoManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GizmoManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GizmoManager(GizmoManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GizmoManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GizmoManager(GizmoManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18400 };

  /// @brief Field GizmosDict, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::Dictionary_2<
      ::System::Type*, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::System::Reflection::MemberInfo*, ::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager>>>*>*
      ___GizmosDict;

  /// @brief Field _uiPanel, offset: 0x18, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::UserInterface::IDebugUIPanel* ____uiPanel;

  /// @brief Field _instanceCache, offset: 0x20, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* ____instanceCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::GizmoManager, ___GizmosDict) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::GizmoManager, ____uiPanel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Manager::GizmoManager, ____instanceCache) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Manager::GizmoManager, 0x28>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Manager
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::GizmoManager);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::GizmoManager*, "Meta.XR.ImmersiveDebugger.Manager", "GizmoManager");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_0*, "Meta.XR.ImmersiveDebugger.Manager", "GizmoManager/<>c__DisplayClass4_0");
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Manager::GizmoManager___c__DisplayClass4_1*, "Meta.XR.ImmersiveDebugger.Manager", "GizmoManager/<>c__DisplayClass4_1");
