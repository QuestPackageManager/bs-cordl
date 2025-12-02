#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/OnCullingCompleteCallback.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(OnCullingCompleteCallback)
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
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
// Forward declare root types
namespace UnityEngine::Rendering {
class OnCullingCompleteCallback;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::OnCullingCompleteCallback);
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.OnCullingCompleteCallback
class CORDL_TYPE OnCullingCompleteCallback : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x65fcfe4, size 0xf0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::Unity::Jobs::JobHandle jobHandle, ::ByRef<::UnityEngine::Rendering::BatchCullingContext> cullingContext,
                                             ::ByRef<::UnityEngine::Rendering::BatchCullingOutput> cullingOutput, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x65fd0d4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<::UnityEngine::Rendering::BatchCullingContext> cullingContext, ::ByRef<::UnityEngine::Rendering::BatchCullingOutput> cullingOutput, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x65fcfd0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::Unity::Jobs::JobHandle jobHandle, ::ByRef<::UnityEngine::Rendering::BatchCullingContext> cullingContext, ::ByRef<::UnityEngine::Rendering::BatchCullingOutput> cullingOutput);

  static inline ::UnityEngine::Rendering::OnCullingCompleteCallback* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x65fcf64, size 0x6c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OnCullingCompleteCallback();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OnCullingCompleteCallback", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OnCullingCompleteCallback(OnCullingCompleteCallback&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OnCullingCompleteCallback", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OnCullingCompleteCallback(OnCullingCompleteCallback const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17617 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::OnCullingCompleteCallback, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::OnCullingCompleteCallback);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::OnCullingCompleteCallback*, "UnityEngine.Rendering", "OnCullingCompleteCallback");
