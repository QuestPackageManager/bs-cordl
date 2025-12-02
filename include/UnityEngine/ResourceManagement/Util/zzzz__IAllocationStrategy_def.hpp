#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/IAllocationStrategy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IAllocationStrategy)
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class IAllocationStrategy;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::IAllocationStrategy);
// Dependencies
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Util.IAllocationStrategy
class CORDL_TYPE IAllocationStrategy {
public:
  // Declarations
  /// @brief Method New, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::System::Object* New(::System::Type* type, int32_t typeHash);

  /// @brief Method Release, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void Release(int32_t typeHash, ::System::Object* obj);

  // Ctor Parameters [CppParam { name: "", ty: "IAllocationStrategy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IAllocationStrategy(IAllocationStrategy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18701 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::IAllocationStrategy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::IAllocationStrategy*, "UnityEngine.ResourceManagement.Util", "IAllocationStrategy");
