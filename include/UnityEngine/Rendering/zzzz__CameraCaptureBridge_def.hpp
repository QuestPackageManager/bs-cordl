#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CameraCaptureBridge.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CameraCaptureBridge)
namespace System::Collections::Generic {
template <typename TKey, typename TValue> class Dictionary_2;
}
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace System::Collections::Generic {
template <typename T> class IEnumerator_1;
}
namespace System {
template <typename T1, typename T2> class Action_2;
}
namespace UnityEngine::Rendering {
class CameraCaptureBridge_CameraEntry;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class Camera;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class CameraCaptureBridge;
}
namespace UnityEngine::Rendering {
class CameraCaptureBridge_CameraEntry;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::CameraCaptureBridge);
MARK_REF_PTR_T(::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CameraCaptureBridge/CameraEntry
class CORDL_TYPE CameraCaptureBridge_CameraEntry : public ::System::Object {
public:
  // Declarations
  /// @brief Field actions, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_actions, put = __cordl_internal_set_actions)) ::System::Collections::Generic::HashSet_1<
      ::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* actions;

  /// @brief Field cachedEnumerator, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_cachedEnumerator, put = __cordl_internal_set_cachedEnumerator)) ::System::Collections::Generic::IEnumerator_1<
      ::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* cachedEnumerator;

  static inline ::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry* New_ctor();

  constexpr ::System::Collections::Generic::HashSet_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* const&
  __cordl_internal_get_actions() const;

  constexpr ::System::Collections::Generic::HashSet_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*& __cordl_internal_get_actions();

  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* const&
  __cordl_internal_get_cachedEnumerator() const;

  constexpr ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*&
  __cordl_internal_get_cachedEnumerator();

  constexpr void
  __cordl_internal_set_actions(::System::Collections::Generic::HashSet_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* value);

  constexpr void __cordl_internal_set_cachedEnumerator(
      ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* value);

  /// @brief Method .ctor, addr 0x659de84, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraCaptureBridge_CameraEntry();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CameraCaptureBridge_CameraEntry", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CameraCaptureBridge_CameraEntry(CameraCaptureBridge_CameraEntry&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CameraCaptureBridge_CameraEntry", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CameraCaptureBridge_CameraEntry(CameraCaptureBridge_CameraEntry const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12240 };

  /// @brief Field actions, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* ___actions;

  /// @brief Field cachedEnumerator, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>* ___cachedEnumerator;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry, ___actions) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry, ___cachedEnumerator) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CameraCaptureBridge
class CORDL_TYPE CameraCaptureBridge : public ::System::Object {
public:
  // Declarations
  using CameraEntry = ::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry;

  /// @brief Field _enabled, offset 0xffffffff, size 0x1
  __declspec(property(get = getStaticF__enabled, put = setStaticF__enabled)) bool _enabled;

  /// @brief Field actionDict, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_actionDict,
                      put =
                          setStaticF_actionDict)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry*>* actionDict;

  /// @brief Method AddCaptureAction, addr 0x659dc7c, size 0x208, virtual false, abstract: false, final false
  static inline void AddCaptureAction(::UnityEngine::Camera* camera, ::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>* action);

  /// @brief Method GetCachedCaptureActionsEnumerator, addr 0x659db28, size 0x154, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*
  GetCachedCaptureActionsEnumerator(::UnityEngine::Camera* camera);

  /// @brief Method GetCaptureActions, addr 0x659da0c, size 0x11c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::IEnumerator_1<::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>*>*
  GetCaptureActions(::UnityEngine::Camera* camera);

  /// @brief Method RemoveCaptureAction, addr 0x659de88, size 0x170, virtual false, abstract: false, final false
  static inline void RemoveCaptureAction(::UnityEngine::Camera* camera, ::System::Action_2<::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::CommandBuffer*>* action);

  static inline bool getStaticF__enabled();

  static inline ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry*>* getStaticF_actionDict();

  /// @brief Method get_enabled, addr 0x659d94c, size 0x5c, virtual false, abstract: false, final false
  static inline bool get_enabled();

  static inline void setStaticF__enabled(bool value);

  static inline void setStaticF_actionDict(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Camera>, ::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry*>* value);

  /// @brief Method set_enabled, addr 0x659d9a8, size 0x64, virtual false, abstract: false, final false
  static inline void set_enabled(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CameraCaptureBridge();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CameraCaptureBridge", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CameraCaptureBridge(CameraCaptureBridge&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CameraCaptureBridge", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CameraCaptureBridge(CameraCaptureBridge const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12241 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CameraCaptureBridge, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::CameraCaptureBridge);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CameraCaptureBridge*, "UnityEngine.Rendering", "CameraCaptureBridge");
NEED_NO_BOX(::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CameraCaptureBridge_CameraEntry*, "UnityEngine.Rendering", "CameraCaptureBridge/CameraEntry");
