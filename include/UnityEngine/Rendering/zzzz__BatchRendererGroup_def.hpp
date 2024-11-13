#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/BatchRendererGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
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
struct LODParameters;
}
namespace UnityEngine::Rendering {
class __BatchRendererGroup__OnPerformCulling;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class BatchRendererGroup;
}
namespace UnityEngine::Rendering {
class __BatchRendererGroup__OnPerformCulling;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::BatchRendererGroup);
MARK_REF_PTR_T(::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling);
// Type: ::OnPerformCulling
// SizeInfo { instance_size: 128, native_size: 8, calculated_instance_size: 128, calculated_native_size: 128, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::BatchRendererGroup::OnPerformCulling*
class CORDL_TYPE __BatchRendererGroup__OnPerformCulling : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x48674b4, size 0x7c, virtual true, abstract: false, final false
  inline ::Unity::Jobs::JobHandle Invoke(::UnityEngine::Rendering::BatchRendererGroup* rendererGroup, ::UnityEngine::Rendering::BatchCullingContext cullingContext,
                                         ::UnityEngine::Rendering::BatchCullingOutput cullingOutput, ::System::IntPtr userContext);

  static inline ::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x48673b0, size 0x104, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __BatchRendererGroup__OnPerformCulling();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__BatchRendererGroup__OnPerformCulling", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __BatchRendererGroup__OnPerformCulling(__BatchRendererGroup__OnPerformCulling&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__BatchRendererGroup__OnPerformCulling", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __BatchRendererGroup__OnPerformCulling(__BatchRendererGroup__OnPerformCulling const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11219 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Type: UnityEngine.Rendering::BatchRendererGroup
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: ::UnityEngine.Rendering::BatchRendererGroup*
class CORDL_TYPE BatchRendererGroup : public ::System::Object {
public:
  // Declarations
  using OnPerformCulling = ::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling;

  /// @brief Field m_GroupHandle, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GroupHandle, put = __cordl_internal_set_m_GroupHandle)) ::System::IntPtr m_GroupHandle;

  /// @brief Field m_PerformCulling, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PerformCulling, put = __cordl_internal_set_m_PerformCulling)) ::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling* m_PerformCulling;

  /// @brief Method InvokeOnPerformCulling, addr 0x486716c, size 0x244, virtual false, abstract: false, final false
  static inline void InvokeOnPerformCulling(::UnityEngine::Rendering::BatchRendererGroup* group, ByRef<::UnityEngine::Rendering::BatchRendererCullingOutput> context,
                                            ByRef<::UnityEngine::Rendering::LODParameters> lodParameters, ::System::IntPtr userContext);

  constexpr ::System::IntPtr const& __cordl_internal_get_m_GroupHandle() const;

  constexpr ::System::IntPtr& __cordl_internal_get_m_GroupHandle();

  constexpr ::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*& __cordl_internal_get_m_PerformCulling();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*> const& __cordl_internal_get_m_PerformCulling() const;

  constexpr void __cordl_internal_set_m_GroupHandle(::System::IntPtr value);

  constexpr void __cordl_internal_set_m_PerformCulling(::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling* value);

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

  /// @brief Field m_GroupHandle, offset: 0x10, size: 0x8, def value: None
  ::System::IntPtr ___m_GroupHandle;

  /// @brief Field m_PerformCulling, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling* ___m_PerformCulling;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11220 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::BatchRendererGroup, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchRendererGroup, ___m_GroupHandle) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::BatchRendererGroup, ___m_PerformCulling) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::BatchRendererGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::BatchRendererGroup*, "UnityEngine.Rendering", "BatchRendererGroup");
NEED_NO_BOX(::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::__BatchRendererGroup__OnPerformCulling*, "UnityEngine.Rendering", "BatchRendererGroup/OnPerformCulling");
