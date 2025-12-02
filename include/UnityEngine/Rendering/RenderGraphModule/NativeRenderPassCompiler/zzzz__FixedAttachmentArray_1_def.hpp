#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/NativeRenderPassCompiler/FixedAttachmentArray_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FixedAttachmentArray_1)
namespace Unity::Collections {
template <typename T> struct NativeArray_1;
}
// Forward declare root types
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
template <typename DataType> struct FixedAttachmentArray_1;
}
// Write type traits
MARK_GEN_VAL_T(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1);
// Dependencies
namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler {
// cpp template
template <typename DataType>
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler.FixedAttachmentArray`1<DataType>
struct CORDL_TYPE FixedAttachmentArray_1 {
public:
  // Declarations
  /// @brief Field Empty, offset 0xffffffff, size 0x48
  __declspec(property(get = getStaticF_Empty, put = setStaticF_Empty)) ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType> Empty;

  __declspec(property(get = get_Item)) DataType Item[];

  __declspec(property(get = get_size)) int32_t size;

  /// @brief Method Add, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t Add(::ByRef<DataType> data);

  /// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<DataType, ::Array<DataType>*> attachments);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Collections::NativeArray_1<DataType> attachments);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(int32_t numAttachments);

  static inline ::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType> getStaticF_Empty();

  /// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline ::ByRef<DataType> get_Item(int32_t index);

  /// @brief Method get_size, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline int32_t get_size();

  static inline void setStaticF_Empty(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1<DataType> value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr FixedAttachmentArray_1();

  // Ctor Parameters [CppParam { name: "a0", ty: "DataType", modifiers: "", def_value: None }, CppParam { name: "a1", ty: "DataType", modifiers: "", def_value: None }, CppParam { name: "a2", ty:
  // "DataType", modifiers: "", def_value: None }, CppParam { name: "a3", ty: "DataType", modifiers: "", def_value: None }, CppParam { name: "a4", ty: "DataType", modifiers: "", def_value: None },
  // CppParam { name: "a5", ty: "DataType", modifiers: "", def_value: None }, CppParam { name: "a6", ty: "DataType", modifiers: "", def_value: None }, CppParam { name: "a7", ty: "DataType", modifiers:
  // "", def_value: None }, CppParam { name: "activeAttachments", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FixedAttachmentArray_1(DataType a0, DataType a1, DataType a2, DataType a3, DataType a4, DataType a5, DataType a6, DataType a7, int32_t activeAttachments) noexcept;

  /// @brief Field MaxAttachments offset 0xffffffff size 0x4
  static constexpr int32_t MaxAttachments{ static_cast<int32_t>(0x8) };

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12453 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x48 };

  /// @brief Field a0, offset: 0x0, size: 0x8, def value: None
  DataType a0;

  /// @brief Field a1, offset: 0x8, size: 0x8, def value: None
  DataType a1;

  /// @brief Field a2, offset: 0x10, size: 0x8, def value: None
  DataType a2;

  /// @brief Field a3, offset: 0x18, size: 0x8, def value: None
  DataType a3;

  /// @brief Field a4, offset: 0x20, size: 0x8, def value: None
  DataType a4;

  /// @brief Field a5, offset: 0x28, size: 0x8, def value: None
  DataType a5;

  /// @brief Field a6, offset: 0x30, size: 0x8, def value: None
  DataType a6;

  /// @brief Field a7, offset: 0x38, size: 0x8, def value: None
  DataType a7;

  /// @brief Field activeAttachments, offset: 0x40, size: 0x4, def value: None
  int32_t activeAttachments;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::UnityEngine::Rendering::RenderGraphModule::NativeRenderPassCompiler::FixedAttachmentArray_1, "UnityEngine.Rendering.RenderGraphModule.NativeRenderPassCompiler",
                                      "FixedAttachmentArray`1");
