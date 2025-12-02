#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ConstantBufferBase.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ConstantBufferBase)
// Forward declare root types
namespace UnityEngine::Rendering {
class ConstantBufferBase;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::ConstantBufferBase);
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.ConstantBufferBase
class CORDL_TYPE ConstantBufferBase : public ::System::Object {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::ConstantBufferBase* New_ctor();

  /// @brief Method Release, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Release();

  /// @brief Method .ctor, addr 0x6537718, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ConstantBufferBase();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ConstantBufferBase", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ConstantBufferBase(ConstantBufferBase&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ConstantBufferBase", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ConstantBufferBase(ConstantBufferBase const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11855 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::ConstantBufferBase, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering
NEED_NO_BOX(::UnityEngine::Rendering::ConstantBufferBase);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::ConstantBufferBase*, "UnityEngine.Rendering", "ConstantBufferBase");
