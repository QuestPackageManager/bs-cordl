#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IAllocationStrategy)
namespace System {
class Type;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class IAllocationStrategy;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::IAllocationStrategy);
// Type: UnityEngine.ResourceManagement.Util::IAllocationStrategy
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13977))
// CS Name: ::UnityEngine.ResourceManagement.Util::IAllocationStrategy*
class CORDL_TYPE IAllocationStrategy {
public:
  // Declarations
  /// @brief Method New, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Object* New(::System::Type* type, int32_t typeHash);

  /// @brief Method Release, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Release(int32_t typeHash, ::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "IAllocationStrategy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IAllocationStrategy(IAllocationStrategy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IAllocationStrategy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAllocationStrategy(IAllocationStrategy const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::IAllocationStrategy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::IAllocationStrategy*, "UnityEngine.ResourceManagement.Util", "IAllocationStrategy");
