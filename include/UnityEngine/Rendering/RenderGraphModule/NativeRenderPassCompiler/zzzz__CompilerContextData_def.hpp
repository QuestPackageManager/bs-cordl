#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/CompilerContextData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CompilerContextData)
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct NativePassData;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
struct CompilerContextData_NativePassIterator;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator);
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.CompilerContextData/NativePassIterator
struct CORDL_TYPE CompilerContextData_NativePassIterator {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData Current;

  /// @brief Method GetEnumerator, addr 0x6637fc8, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator GetEnumerator();

  /// @brief Method MoveNext, addr 0x6638054, size 0x100, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method .ctor, addr 0x6637e64, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(Il2CppObject* ctx);

  /// @brief Method get_Current, addr 0x6637fd4, size 0x80, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::NativePassData> get_Current();

  // Ctor Parameters []
  // @brief default ctor
  constexpr CompilerContextData_NativePassIterator();

  // Ctor Parameters [CppParam { name: "m_Ctx", ty: "Il2CppObject*", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr CompilerContextData_NativePassIterator(Il2CppObject* m_Ctx, int32_t m_Index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12455 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Ctx, offset: 0x0, size: 0x8, def value: None
  Il2CppObject* m_Ctx;

  /// @brief Field m_Index, offset: 0x8, size: 0x4, def value: None
  int32_t m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator, m_Ctx) == 0x0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator, m_Index) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::CompilerContextData_NativePassIterator,
                       "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler", "CompilerContextData/NativePassIterator");
