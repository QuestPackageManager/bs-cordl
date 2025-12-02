#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ConstantBuffer_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__ConstantBufferBase_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConstantBuffer_1)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Rendering {
template <typename CBType> class ConstantBuffer_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::Rendering::ConstantBuffer_1);
// Dependencies UnityEngine.Rendering.ConstantBufferBase
namespace UnityEngine::Rendering {
// cpp template
template <typename CBType>
// Is value type: false
// CS Name: UnityEngine.Rendering.ConstantBuffer`1<CBType>
class CORDL_TYPE ConstantBuffer_1 : public ::UnityEngine::Rendering::ConstantBufferBase {
public:
  // Declarations
  /// @brief Field m_Data, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Data, put = __cordl_internal_set_m_Data)) ::ArrayW<CBType, ::Array<CBType>*> m_Data;

  /// @brief Field m_GPUConstantBuffer, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GPUConstantBuffer, put = __cordl_internal_set_m_GPUConstantBuffer)) ::UnityEngine::ComputeBuffer* m_GPUConstantBuffer;

  /// @brief Field m_GlobalBindings, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_GlobalBindings, put = __cordl_internal_set_m_GlobalBindings)) ::System::Collections::Generic::HashSet_1<int32_t>* m_GlobalBindings;

  static inline ::UnityEngine::Rendering::ConstantBuffer_1<CBType>* New_ctor();

  /// @brief Method PushGlobal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void PushGlobal(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<CBType> data, int32_t shaderId);

  /// @brief Method PushGlobal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void PushGlobal(::ByRef<CBType> data, int32_t shaderId);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Release();

  /// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Set(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* cs, int32_t shaderId);

  /// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Set(::UnityEngine::ComputeShader* cs, int32_t shaderId);

  /// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Set(::UnityEngine::Material* mat, int32_t shaderId);

  /// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void Set(::UnityEngine::MaterialPropertyBlock* mpb, int32_t shaderId);

  /// @brief Method SetGlobal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetGlobal(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t shaderId);

  /// @brief Method SetGlobal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetGlobal(int32_t shaderId);

  /// @brief Method UpdateData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateData(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<CBType> data);

  /// @brief Method UpdateData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateData(::ByRef<CBType> data);

  constexpr ::ArrayW<CBType, ::Array<CBType>*> const& __cordl_internal_get_m_Data() const;

  constexpr ::ArrayW<CBType, ::Array<CBType>*>& __cordl_internal_get_m_Data();

  constexpr ::UnityEngine::ComputeBuffer* const& __cordl_internal_get_m_GPUConstantBuffer() const;

  constexpr ::UnityEngine::ComputeBuffer*& __cordl_internal_get_m_GPUConstantBuffer();

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>* const& __cordl_internal_get_m_GlobalBindings() const;

  constexpr ::System::Collections::Generic::HashSet_1<int32_t>*& __cordl_internal_get_m_GlobalBindings();

  constexpr void __cordl_internal_set_m_Data(::ArrayW<CBType, ::Array<CBType>*> value);

  constexpr void __cordl_internal_set_m_GPUConstantBuffer(::UnityEngine::ComputeBuffer* value);

  constexpr void __cordl_internal_set_m_GlobalBindings(::System::Collections::Generic::HashSet_1<int32_t>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstantBuffer_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConstantBuffer_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstantBuffer_1(ConstantBuffer_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstantBuffer_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstantBuffer_1(ConstantBuffer_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11856 };

  /// @brief Field m_GlobalBindings, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<int32_t>* ___m_GlobalBindings;

  /// @brief Field m_Data, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<CBType, ::Array<CBType>*> ___m_Data;

  /// @brief Field m_GPUConstantBuffer, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::ComputeBuffer* ___m_GPUConstantBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::Rendering::ConstantBuffer_1, "UnityEngine.Rendering", "ConstantBuffer`1");
