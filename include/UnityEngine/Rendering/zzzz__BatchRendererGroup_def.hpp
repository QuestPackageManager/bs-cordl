#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchRendererGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BatchRendererGroup)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Jobs {
struct JobHandle;
}
namespace UnityEngine::Rendering {
struct BatchCullingContext;
}
namespace UnityEngine::Rendering {
struct BatchCullingOutput;
}
namespace UnityEngine::Rendering {
struct BatchRendererCullingOutput;
}
namespace UnityEngine::Rendering {
class BatchRendererGroup_OnPerformCulling;
}
namespace UnityEngine::Rendering {
struct LODParameters;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class BatchRendererGroup;
}
namespace UnityEngine::Rendering {
class BatchRendererGroup_OnPerformCulling;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::BatchRendererGroup);
MARK_REF_PTR_T(::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling);
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.BatchRendererGroup/OnPerformCulling
class CORDL_TYPE BatchRendererGroup_OnPerformCulling : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x48c5304, size 0x7c, virtual true, abstract: false, final false
  inline ::Unity::Jobs::JobHandle Invoke(::UnityEngine::Rendering::BatchRendererGroup* rendererGroup, ::UnityEngine::Rendering::BatchCullingContext cullingContext,
                                         ::UnityEngine::Rendering::BatchCullingOutput cullingOutput, ::System::IntPtr userContext);

  static inline ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x48c5200, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchRendererGroup_OnPerformCulling();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BatchRendererGroup_OnPerformCulling", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BatchRendererGroup_OnPerformCulling(BatchRendererGroup_OnPerformCulling&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BatchRendererGroup_OnPerformCulling", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BatchRendererGroup_OnPerformCulling(BatchRendererGroup_OnPerformCulling const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11257 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.BatchRendererGroup
class CORDL_TYPE BatchRendererGroup : public ::System::Object {
public:
  // Declarations
  using OnPerformCulling = ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling;

  /// @brief Field m_GroupHandle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GroupHandle, put = __cordl_internal_set_m_GroupHandle)) ::System::IntPtr m_GroupHandle;

  /// @brief Field m_PerformCulling, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PerformCulling, put = __cordl_internal_set_m_PerformCulling)) ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling* m_PerformCulling;

  /// @brief Method InvokeOnPerformCulling, addr 0x48c4fbc, size 0x244, virtual false, abstract: false, final false
  static inline void InvokeOnPerformCulling(::UnityEngine::Rendering::BatchRendererGroup* group, ::ByRef<::UnityEngine::Rendering::BatchRendererCullingOutput> context,
                                            ::ByRef<::UnityEngine::Rendering::LODParameters> lodParameters, ::System::IntPtr userContext);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_GroupHandle() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_GroupHandle();

  constexpr ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling* const& __cordl_internal_get_m_PerformCulling() const;

  constexpr ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*& __cordl_internal_get_m_PerformCulling();

  constexpr void __cordl_internal_set_m_GroupHandle(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_PerformCulling(::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BatchRendererGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BatchRendererGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BatchRendererGroup(BatchRendererGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BatchRendererGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BatchRendererGroup(BatchRendererGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11258 };

  /// @brief Field m_GroupHandle, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_GroupHandle;

  /// @brief Field m_PerformCulling, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling* ___m_PerformCulling;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::BatchRendererGroup, ___m_GroupHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchRendererGroup, ___m_PerformCulling) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchRendererGroup, 0x20>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::BatchRendererGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchRendererGroup*, "UnityEngine.Rendering", "BatchRendererGroup");
NEED_NO_BOX(::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchRendererGroup_OnPerformCulling*, "UnityEngine.Rendering", "BatchRendererGroup/OnPerformCulling");
