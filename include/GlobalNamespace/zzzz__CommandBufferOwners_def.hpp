#pragma once
// IWYU pragma private; include "GlobalNamespace/CommandBufferOwners.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(CommandBufferOwners)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class CommandBufferOwners;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CommandBufferOwners);
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: CommandBufferOwners
class CORDL_TYPE CommandBufferOwners : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_NumberOfOwners)) int32_t NumberOfOwners;

  /// @brief Field _owners, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__owners, put = __cordl_internal_set__owners)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Object>>* _owners;

  /// @brief Field commandBuffer, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_commandBuffer, put = __cordl_internal_set_commandBuffer)) ::UnityEngine::Rendering::CommandBuffer* commandBuffer;

  /// @brief Method AddOwner, addr 0x4081b54, size 0xa0, virtual false, abstract: false, final false
  inline void AddOwner(::UnityEngine::Object* owner);

  /// @brief Method ContainsOwner, addr 0x4081afc, size 0x58, virtual false, abstract: false, final false
  inline bool ContainsOwner(::UnityEngine::Object* owner);

  static inline ::GlobalNamespace::CommandBufferOwners* New_ctor();

  /// @brief Method RemoveOwner, addr 0x40818a4, size 0x60, virtual false, abstract: false, final false
  inline void RemoveOwner(::UnityEngine::Object* owner);

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get__owners() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get__owners();

  constexpr ::UnityEngine::Rendering::CommandBuffer* const& __cordl_internal_get_commandBuffer() const;

  constexpr ::UnityEngine::Rendering::CommandBuffer*& __cordl_internal_get_commandBuffer();

  constexpr void __cordl_internal_set__owners(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Object>>* value);

  constexpr void __cordl_internal_set_commandBuffer(::UnityEngine::Rendering::CommandBuffer* value);

  /// @brief Method .ctor, addr 0x4081bf4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_NumberOfOwners, addr 0x4081904, size 0x48, virtual false, abstract: false, final false
  inline int32_t get_NumberOfOwners();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CommandBufferOwners();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CommandBufferOwners", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CommandBufferOwners(CommandBufferOwners&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CommandBufferOwners", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CommandBufferOwners(CommandBufferOwners const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17865 };

  /// @brief Field _owners, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Object>>* ____owners;

  /// @brief Field commandBuffer, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::Rendering::CommandBuffer* ___commandBuffer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CommandBufferOwners, ____owners) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CommandBufferOwners, ___commandBuffer) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CommandBufferOwners, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CommandBufferOwners);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CommandBufferOwners*, "", "CommandBufferOwners");
