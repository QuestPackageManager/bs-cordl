#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/Gizmo/GizmoRendererManager.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/XR/ImmersiveDebugger/zzzz__DebugGizmoType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(GizmoRendererManager)
namespace Meta::XR::ImmersiveDebugger::Gizmo {
class GizmoRenderer;
}
namespace Meta::XR::ImmersiveDebugger::Utils {
class InstanceCache;
}
namespace Meta::XR::ImmersiveDebugger {
struct DebugGizmoType;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
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
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger::Gizmo {
class GizmoRendererManager;
}
// Write type traits
MARK_REF_PTR_T(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager);
// Dependencies Meta.XR.ImmersiveDebugger.DebugGizmoType, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace Meta::XR::ImmersiveDebugger::Gizmo {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.Gizmo.GizmoRendererManager
class CORDL_TYPE GizmoRendererManager : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _classType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__classType, put = __cordl_internal_set__classType)) ::System::Type* _classType;

  /// @brief Field _enabledInstances, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__enabledInstances, put = __cordl_internal_set__enabledInstances)) ::System::Collections::Generic::HashSet_1<int32_t>* _enabledInstances;

  /// @brief Field _gizmoColor, offset 0x44, size 0x10
  __declspec(property(get = __cordl_internal_get__gizmoColor, put = __cordl_internal_set__gizmoColor)) ::UnityEngine::Color _gizmoColor;

  /// @brief Field _gizmoType, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__gizmoType, put = __cordl_internal_set__gizmoType)) ::Meta::XR::ImmersiveDebugger::DebugGizmoType _gizmoType;

  /// @brief Field _instanceCache, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__instanceCache, put = __cordl_internal_set__instanceCache)) ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* _instanceCache;

  /// @brief Field _isStatic, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__isStatic, put = __cordl_internal_set__isStatic)) bool _isStatic;

  /// @brief Field _memberInfo, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__memberInfo, put = __cordl_internal_set__memberInfo)) ::System::Reflection::MemberInfo* _memberInfo;

  /// @brief Field _renderers, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__renderers,
                      put = __cordl_internal_set__renderers)) ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer>>* _renderers;

  /// @brief Method AddGizmoRenderer, addr 0x585970c, size 0xf8, virtual false, abstract: false, final false
  inline void AddGizmoRenderer();

  /// @brief Method GetState, addr 0x584e574, size 0xb8, virtual false, abstract: false, final false
  inline bool GetState(::UnityEngine::Object* instance);

  static inline ::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager* New_ctor();

  /// @brief Method SetState, addr 0x584e40c, size 0xfc, virtual false, abstract: false, final false
  inline void SetState(::UnityEngine::Object* instance, bool state);

  /// @brief Method Setup, addr 0x584dc7c, size 0x68, virtual false, abstract: false, final false
  inline void Setup(::System::Type* classType, ::System::Reflection::MemberInfo* memberInfo, ::Meta::XR::ImmersiveDebugger::DebugGizmoType gizmoType, ::UnityEngine::Color gizmoColor,
                    ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* instanceCache);

  /// @brief Method Start, addr 0x5859708, size 0x4, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x5859804, size 0x2f8, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::System::Type* const& __cordl_internal_get__classType() const;

  constexpr ::System::Type*& __cordl_internal_get__classType();

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get__enabledInstances() const;

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get__enabledInstances();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__gizmoColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__gizmoColor();

  constexpr ::Meta::XR::ImmersiveDebugger::DebugGizmoType const& __cordl_internal_get__gizmoType() const;

  constexpr ::Meta::XR::ImmersiveDebugger::DebugGizmoType& __cordl_internal_get__gizmoType();

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* const& __cordl_internal_get__instanceCache() const;

  constexpr ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache*& __cordl_internal_get__instanceCache();

  constexpr bool const& __cordl_internal_get__isStatic() const;

  constexpr bool& __cordl_internal_get__isStatic();

  constexpr ::System::Reflection::MemberInfo* const& __cordl_internal_get__memberInfo() const;

  constexpr ::System::Reflection::MemberInfo*& __cordl_internal_get__memberInfo();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer>>* const& __cordl_internal_get__renderers() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer>>*& __cordl_internal_get__renderers();

  constexpr void __cordl_internal_set__classType(::System::Type* value);

  constexpr void __cordl_internal_set__enabledInstances(::System::Collections::Generic::HashSet_1<int32_t>* value);

  constexpr void __cordl_internal_set__gizmoColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__gizmoType(::Meta::XR::ImmersiveDebugger::DebugGizmoType value);

  constexpr void __cordl_internal_set__instanceCache(::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* value);

  constexpr void __cordl_internal_set__isStatic(bool value);

  constexpr void __cordl_internal_set__memberInfo(::System::Reflection::MemberInfo* value);

  constexpr void __cordl_internal_set__renderers(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer>>* value);

  /// @brief Method .ctor, addr 0x5859afc, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GizmoRendererManager();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GizmoRendererManager", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GizmoRendererManager(GizmoRendererManager&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GizmoRendererManager", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GizmoRendererManager(GizmoRendererManager const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18429 };

  /// @brief Field _classType, offset: 0x20, size: 0x8, def value: None
  ::System::Type* ____classType;

  /// @brief Field _memberInfo, offset: 0x28, size: 0x8, def value: None
  ::System::Reflection::MemberInfo* ____memberInfo;

  /// @brief Field _isStatic, offset: 0x30, size: 0x1, def value: None
  bool ____isStatic;

  /// @brief Field _instanceCache, offset: 0x38, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::Utils::InstanceCache* ____instanceCache;

  /// @brief Field _gizmoType, offset: 0x40, size: 0x4, def value: None
  ::Meta::XR::ImmersiveDebugger::DebugGizmoType ____gizmoType;

  /// @brief Field _gizmoColor, offset: 0x44, size: 0x10, def value: None
  ::UnityEngine::Color ____gizmoColor;

  /// @brief Field _renderers, offset: 0x58, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRenderer>>* ____renderers;

  /// @brief Field _enabledInstances, offset: 0x60, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ____enabledInstances;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager, ____classType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager, ____memberInfo) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager, ____isStatic) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager, ____instanceCache) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager, ____gizmoType) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager, ____gizmoColor) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager, ____renderers) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager, ____enabledInstances) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager, 0x68>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger::Gizmo
NEED_NO_BOX(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::Gizmo::GizmoRendererManager*, "Meta.XR.ImmersiveDebugger.Gizmo", "GizmoRendererManager");
