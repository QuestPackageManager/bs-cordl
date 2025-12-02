#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/NativeListExtensions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NativeListExtensions)
namespace System {
template <typename T> struct ReadOnlySpan_1;
}
namespace Unity::Collections {
template <typename T> struct NativeList_1;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
class NativeListExtensions;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativeListExtensions);
// Dependencies System.Object
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
// Is value type: false
// CS Name: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.NativeListExtensions
class CORDL_TYPE NativeListExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method LastIndex, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline int32_t LastIndex(::ByRef<::Unity::Collections::NativeList_1<T>> list);

  /// @brief Method MakeReadOnlySpan, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> static inline ::System::ReadOnlySpan_1<T> MakeReadOnlySpan(::ByRef<::Unity::Collections::NativeList_1<T>> list, int32_t first, int32_t numElements);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeListExtensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeListExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeListExtensions(NativeListExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeListExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeListExtensions(NativeListExtensions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12450 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativeListExtensions, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler
NEED_NO_BOX(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativeListExtensions);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativeListExtensions*, "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler",
                       "NativeListExtensions");
