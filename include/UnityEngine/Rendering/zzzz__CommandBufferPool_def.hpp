#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CommandBufferPool.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(CommandBufferPool)
namespace UnityEngine::Rendering {
class CommandBufferPool___c;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
template <typename T> class ObjectPool_1;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class CommandBufferPool;
}
namespace UnityEngine::Rendering {
class CommandBufferPool___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::CommandBufferPool);
MARK_REF_PTR_T(::UnityEngine::Rendering::CommandBufferPool___c);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CommandBufferPool/<>c
class CORDL_TYPE CommandBufferPool___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::CommandBufferPool___c* __9;

  static inline ::UnityEngine::Rendering::CommandBufferPool___c* New_ctor();

  /// @brief Method <.cctor>b__4_0, addr 0x65373fc, size 0x18, virtual false, abstract: false, final false
  inline void __cctor_b__4_0(::UnityEngine::Rendering::CommandBuffer* x);

  /// @brief Method .ctor, addr 0x65373f8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::CommandBufferPool___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::Rendering::CommandBufferPool___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandBufferPool___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandBufferPool___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandBufferPool___c(CommandBufferPool___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandBufferPool___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandBufferPool___c(CommandBufferPool___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11850 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CommandBufferPool___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CommandBufferPool
class CORDL_TYPE CommandBufferPool : public ::System::Object {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::CommandBufferPool___c;

  /// @brief Field s_BufferPool, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_BufferPool, put = setStaticF_s_BufferPool)) ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::CommandBuffer*>* s_BufferPool;

  /// @brief Method Get, addr 0x65370ac, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::CommandBuffer* Get();

  /// @brief Method Get, addr 0x6537160, size 0xa0, virtual false, abstract: false, final false
  static inline ::UnityEngine::Rendering::CommandBuffer* Get(::StringW name);

  /// @brief Method Release, addr 0x6537200, size 0x88, virtual false, abstract: false, final false
  static inline void Release(::UnityEngine::Rendering::CommandBuffer* buffer);

  static inline ::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::CommandBuffer*>* getStaticF_s_BufferPool();

  static inline void setStaticF_s_BufferPool(::UnityEngine::Rendering::ObjectPool_1<::UnityEngine::Rendering::CommandBuffer*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandBufferPool();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandBufferPool", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandBufferPool(CommandBufferPool&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandBufferPool", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandBufferPool(CommandBufferPool const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11851 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::CommandBufferPool, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::CommandBufferPool);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CommandBufferPool*, "UnityEngine.Rendering", "CommandBufferPool");
NEED_NO_BOX(::UnityEngine::Rendering::CommandBufferPool___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::CommandBufferPool___c*, "UnityEngine.Rendering", "CommandBufferPool/<>c");
