#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/DebugInspector.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(DebugInspector)
namespace Meta::XR::ImmersiveDebugger {
class DebugInspector_InspectionRegistry;
}
namespace Meta::XR::ImmersiveDebugger {
class InspectedHandle;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger {
class DebugInspector;
}
namespace Meta::XR::ImmersiveDebugger {
class DebugInspector_InspectionRegistry;
}
// Write type traits
MARK_REF_T(::Meta::XR::ImmersiveDebugger::DebugInspector*);
MARK_REF_T(::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry*);
DEFINE_IL2CPP_CLASS(::Meta::XR::ImmersiveDebugger::DebugInspector*, "Meta.XR.ImmersiveDebugger", "DebugInspector");
DEFINE_IL2CPP_CLASS(::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry*, "Meta.XR.ImmersiveDebugger", "DebugInspector/InspectionRegistry");
// Dependencies System.Object
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.DebugInspector/InspectionRegistry
class CORDL_TYPE DebugInspector_InspectionRegistry : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Handles)) ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedHandle*>* Handles;

  /// @brief Field handles, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_handles, put = __cordl_internal_set_handles)) ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedHandle*>* handles;

  /// @brief Method Initialize, addr 0x5a3d594, size 0x2e8, virtual false, abstract: false, final false
  inline void Initialize(::Meta::XR::ImmersiveDebugger::DebugInspector* owner);

  static inline ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry* New_ctor();

  /// @brief Method TryGetHandle, addr 0x5a3df74, size 0x16c, virtual false, abstract: false, final false
  inline bool TryGetHandle(::UnityEngine::Component* component, ::by_ref<::Meta::XR::ImmersiveDebugger::InspectedHandle*> inspectedHandle);

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedHandle*>* const& __cordl_internal_get_handles() const;

  constexpr ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedHandle*>*& __cordl_internal_get_handles();

  constexpr void __cordl_internal_set_handles(::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedHandle*>* value);

  /// @brief Method .ctor, addr 0x5a3db0c, size 0x74, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Handles, addr 0x5a3db80, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedHandle*>* get_Handles();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugInspector_InspectionRegistry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugInspector_InspectionRegistry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugInspector_InspectionRegistry(DebugInspector_InspectionRegistry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugInspector_InspectionRegistry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugInspector_InspectionRegistry(DebugInspector_InspectionRegistry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18294 };

  /// @brief Field handles, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::Meta::XR::ImmersiveDebugger::InspectedHandle*>* ___handles;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry, ___handles) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry) == 0x18, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
// Dependencies UnityEngine.MonoBehaviour
namespace Meta::XR::ImmersiveDebugger {
// Is value type: false
// CS Name: Meta.XR.ImmersiveDebugger.DebugInspector
class CORDL_TYPE DebugInspector : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using InspectionRegistry = ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry;

  __declspec(property(get = get_Category)) ::StringW Category;

  __declspec(property(get = get_Registry)) ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry* Registry;

  /// @brief Field _category, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__category, put = __cordl_internal_set__category)) ::StringW _category;

  /// @brief Field registry, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_registry, put = __cordl_internal_set_registry)) ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry* registry;

  /// @brief Method Initialize, addr 0x5a3d57c, size 0x18, virtual false, abstract: false, final false
  inline void Initialize();

  static inline ::Meta::XR::ImmersiveDebugger::DebugInspector* New_ctor();

  /// @brief Method OnDisable, addr 0x5a3d9e8, size 0x58, virtual false, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x5a3d87c, size 0xb8, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnValidate, addr 0x5a3d578, size 0x4, virtual false, abstract: false, final false
  inline void OnValidate();

  constexpr ::StringW const& __cordl_internal_get__category() const;

  constexpr ::StringW& __cordl_internal_get__category();

  constexpr ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry* const& __cordl_internal_get_registry() const;

  constexpr ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry*& __cordl_internal_get_registry();

  constexpr void __cordl_internal_set__category(::StringW value);

  constexpr void __cordl_internal_set_registry(::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry* value);

  /// @brief Method .ctor, addr 0x5a3dab0, size 0x5c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Category, addr 0x5a3d568, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Category();

  /// @brief Method get_Registry, addr 0x5a3d570, size 0x8, virtual false, abstract: false, final false
  inline ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry* get_Registry();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugInspector();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugInspector", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugInspector(DebugInspector&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugInspector", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugInspector(DebugInspector const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18295 };

  /// @brief Field _category, offset: 0x20, size: 0x8, def value: None
  ::StringW ____category;

  /// @brief Field registry, offset: 0x28, size: 0x8, def value: None
  ::Meta::XR::ImmersiveDebugger::DebugInspector_InspectionRegistry* ___registry;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::DebugInspector, ____category) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::XR::ImmersiveDebugger::DebugInspector, ___registry) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::XR::ImmersiveDebugger::DebugInspector) == 0x30, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
