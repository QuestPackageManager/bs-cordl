#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/BaseRenderFunc_2.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
CORDL_MODULE_EXPORT(BaseRenderFunc_2)
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
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
template <typename PassData, typename ContextType> class BaseRenderFunc_2;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2);
// Dependencies System.MulticastDelegate
namespace UnityEngine::Rendering::RenderGraphModule {
// cpp template
template <typename PassData, typename ContextType>
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.BaseRenderFunc`2<PassData,ContextType>
class CORDL_TYPE BaseRenderFunc_2 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(PassData data, ContextType renderGraphContext, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Invoke(PassData data, ContextType renderGraphContext);

  static inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<PassData, ContextType>* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BaseRenderFunc_2();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BaseRenderFunc_2", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BaseRenderFunc_2(BaseRenderFunc_2&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BaseRenderFunc_2", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BaseRenderFunc_2(BaseRenderFunc_2 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12391 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::RenderGraphModule
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2, "UnityEngine.Rendering.RenderGraphModule", "BaseRenderFunc`2");
