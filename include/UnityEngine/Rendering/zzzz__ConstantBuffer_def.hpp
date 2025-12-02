#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ConstantBuffer.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConstantBuffer)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ConstantBufferBase;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class ConstantBuffer;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ConstantBuffer);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ConstantBuffer
class CORDL_TYPE ConstantBuffer : public ::System::Object {
public:
  // Declarations
  /// @brief Field m_RegisteredConstantBuffers, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_m_RegisteredConstantBuffers,
                      put = setStaticF_m_RegisteredConstantBuffers)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ConstantBufferBase*>* m_RegisteredConstantBuffers;

  static inline ::UnityEngine::Rendering::ConstantBuffer* New_ctor();

  /// @brief Method Push, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename CBType> static inline void Push(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<CBType> data, ::UnityEngine::ComputeShader* cs, int32_t shaderId);

  /// @brief Method Push, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename CBType> static inline void Push(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<CBType> data, ::UnityEngine::Material* mat, int32_t shaderId);

  /// @brief Method Push, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename CBType> static inline void Push(::ByRef<CBType> data, ::UnityEngine::ComputeShader* cs, int32_t shaderId);

  /// @brief Method Push, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename CBType> static inline void Push(::ByRef<CBType> data, ::UnityEngine::Material* mat, int32_t shaderId);

  /// @brief Method PushGlobal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename CBType> static inline void PushGlobal(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<CBType> data, int32_t shaderId);

  /// @brief Method PushGlobal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename CBType> static inline void PushGlobal(::ByRef<CBType> data, int32_t shaderId);

  /// @brief Method Register, addr 0x65375b0, size 0xd4, virtual false, abstract: false, final false
  static inline void Register(::UnityEngine::Rendering::ConstantBufferBase* cb);

  /// @brief Method ReleaseAll, addr 0x6537414, size 0x19c, virtual false, abstract: false, final false
  static inline void ReleaseAll();

  /// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename CBType> static inline void Set(::UnityEngine::Rendering::CommandBuffer* cmd, ::UnityEngine::ComputeShader* cs, int32_t shaderId);

  /// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename CBType> static inline void Set(::UnityEngine::ComputeShader* cs, int32_t shaderId);

  /// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename CBType> static inline void Set(::UnityEngine::Material* mat, int32_t shaderId);

  /// @brief Method SetGlobal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename CBType> static inline void SetGlobal(::UnityEngine::Rendering::CommandBuffer* cmd, int32_t shaderId);

  /// @brief Method SetGlobal, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename CBType> static inline void SetGlobal(int32_t shaderId);

  /// @brief Method UpdateData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename CBType> static inline void UpdateData(::UnityEngine::Rendering::CommandBuffer* cmd, ::ByRef<CBType> data);

  /// @brief Method UpdateData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename CBType> static inline void UpdateData(::ByRef<CBType> data);

  /// @brief Method .ctor, addr 0x6537684, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::ConstantBufferBase*>* getStaticF_m_RegisteredConstantBuffers();

  static inline void setStaticF_m_RegisteredConstantBuffers(::System::Collections::Generic::List_1<::UnityEngine::Rendering::ConstantBufferBase*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstantBuffer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConstantBuffer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstantBuffer(ConstantBuffer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstantBuffer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstantBuffer(ConstantBuffer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11854 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ConstantBuffer, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ConstantBuffer);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ConstantBuffer*, "UnityEngine.Rendering", "ConstantBuffer");
