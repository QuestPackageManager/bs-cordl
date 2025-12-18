#pragma once
// IWYU pragma private; include "UnityEngine/ResourceManagement/Util/DefaultAllocationStrategy.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultAllocationStrategy)
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace UnityEngine::ResourceManagement::Util {
class IAllocationStrategy;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class DefaultAllocationStrategy;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy);
// Dependencies System.Object
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// CS Name: UnityEngine.ResourceManagement.Util.DefaultAllocationStrategy
class CORDL_TYPE DefaultAllocationStrategy : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::IAllocationStrategy"
  constexpr operator ::UnityEngine::ResourceManagement::Util::IAllocationStrategy*() noexcept;

  /// @brief Method New, addr 0x675f280, size 0x10, virtual true, abstract: false, final true
  inline ::System::Object* New(::System::Type* type, int32_t typeHash);

  static inline ::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy* New_ctor();

  /// @brief Method Release, addr 0x675f290, size 0x4, virtual true, abstract: false, final true
  inline void Release(int32_t typeHash, ::System::Object* obj);

  /// @brief Method .ctor, addr 0x675f294, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Convert to "::UnityEngine::ResourceManagement::Util::IAllocationStrategy"
  constexpr ::UnityEngine::ResourceManagement::Util::IAllocationStrategy* i___UnityEngine__ResourceManagement__Util__IAllocationStrategy() noexcept;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultAllocationStrategy();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DefaultAllocationStrategy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultAllocationStrategy(DefaultAllocationStrategy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultAllocationStrategy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultAllocationStrategy(DefaultAllocationStrategy const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18717 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy*, "UnityEngine.ResourceManagement.Util", "DefaultAllocationStrategy");
