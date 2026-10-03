#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/TextureHandle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__ResourceHandle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextureHandle)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraph;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct ResourceHandle;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureDesc;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::TextureHandle);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::RenderGraphModule::TextureHandle, "UnityEngine.Rendering.RenderGraphModule", "TextureHandle");
// [IsReadOnly]
// [DebuggerDisplay("Texture ({handle.index})")]
// [MovedFrom(true, "UnityEngine.Experimental.Rendering.RenderGraphModule", "UnityEngine.Rendering.RenderGraphModule", null)]
// Dependencies UnityEngine.Rendering.RenderGraphModule.ResourceHandle
namespace UnityEngine::Rendering::RenderGraphModule {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.TextureHandle
struct CORDL_TYPE TextureHandle {
public:
  // Declarations
  /// @brief Field s_NullHandle, offset 0xffffffff, size 0x10
  __declspec(property(get = getStaticF_s_NullHandle, put = setStaticF_s_NullHandle)) ::UnityEngine::Rendering::RenderGraphModule::TextureHandle s_NullHandle;

  /// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>"
  constexpr operator ::System::IEquatable_1<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>*();

  /// @brief Method Equals, addr 0x6c13cfc, size 0x94, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6c13c28, size 0xd4, virtual true, abstract: false, final true
  inline bool Equals(::UnityEngine::Rendering::RenderGraphModule::TextureHandle other);

  /// @brief Method GetDescriptor, addr 0x6c140c4, size 0x48, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::TextureDesc GetDescriptor(::UnityEngine::Rendering::RenderGraphModule::RenderGraph* renderGraph);

  /// @brief Method GetHashCode, addr 0x6c13d90, size 0x58, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method IsBuiltin, addr 0x6c140bc, size 0x8, virtual false, abstract: false, final false
  inline bool IsBuiltin();

  /// @brief Method IsValid, addr 0x6c13fd8, size 0xe4, virtual false, abstract: false, final false
  inline bool IsValid();

  /// @brief Method .ctor, addr 0x6c13550, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::ResourceHandle> h);

  /// @brief Method .ctor, addr 0x6c0fef0, size 0x50, virtual false, abstract: false, final false
  inline void _ctor(int32_t handle, bool shared, bool builtin);

  static inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle getStaticF_s_NullHandle();

  /// @brief Method get_nullHandle, addr 0x6c134f4, size 0x5c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderGraphModule::TextureHandle get_nullHandle();

  /// @brief Convert to "::System::IEquatable_1<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>"
  constexpr ::System::IEquatable_1<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>* i___System__IEquatable_1___UnityEngine__Rendering__RenderGraphModule__TextureHandle_();

  /// @brief Method op_Equality, addr 0x6c13e58, size 0xc0, virtual false, abstract: false, final false
  static inline bool op_Equality(::UnityEngine::Rendering::RenderGraphModule::TextureHandle lhs, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rhs);

  /// @brief Method op_Implicit, addr 0x6c13a8c, size 0x19c, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RTHandle* op_Implicit___UnityEngine__Rendering__RTHandle_(::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture);

  /// @brief Method op_Implicit, addr 0x6c13568, size 0x1e0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::RenderTargetIdentifier op_Implicit___UnityEngine__Rendering__RenderTargetIdentifier(::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture);

  /// @brief Method op_Implicit, addr 0x6c138e8, size 0x1a4, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::RenderTexture> op_Implicit___UnityW___UnityEngine__RenderTexture_(::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture);

  /// @brief Method op_Implicit, addr 0x6c13748, size 0x1a0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Texture> op_Implicit___UnityW___UnityEngine__Texture_(::UnityEngine::Rendering::RenderGraphModule::TextureHandle texture);

  /// @brief Method op_Inequality, addr 0x6c13f18, size 0xc0, virtual false, abstract: false, final false
  static inline bool op_Inequality(::UnityEngine::Rendering::RenderGraphModule::TextureHandle lhs, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle rhs);

  static inline void setStaticF_s_NullHandle(::UnityEngine::Rendering::RenderGraphModule::TextureHandle value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextureHandle();

  // Ctor Parameters [CppParam { name: "handle", ty: "::UnityEngine::Rendering::RenderGraphModule::ResourceHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "builtin", ty:
  // "bool", modifiers: "", def_value: None, comment: None }]
  constexpr TextureHandle(::UnityEngine::Rendering::RenderGraphModule::ResourceHandle handle, bool builtin) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9374 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field handle, offset: 0x0, size: 0xc, def value: None
  ::UnityEngine::Rendering::RenderGraphModule::ResourceHandle handle;

  /// @brief Field builtin, offset: 0xc, size: 0x1, def value: None
  bool builtin;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureHandle, handle) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::TextureHandle, builtin) == 0xc, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::RenderGraphModule::TextureHandle) == 0x10, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule
