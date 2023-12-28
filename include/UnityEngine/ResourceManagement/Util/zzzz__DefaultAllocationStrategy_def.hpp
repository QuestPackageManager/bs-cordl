#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DefaultAllocationStrategy)
namespace UnityEngine::ResourceManagement::Util {
class IAllocationStrategy;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class DefaultAllocationStrategy;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy);
// Type: UnityEngine.ResourceManagement.Util::DefaultAllocationStrategy
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13978))
// CS Name: ::UnityEngine.ResourceManagement.Util::DefaultAllocationStrategy*
class CORDL_TYPE DefaultAllocationStrategy : public ::System::Object {
public:
  // Declarations
  /// @brief Convert operator to "::UnityEngine::ResourceManagement::Util::IAllocationStrategy"
  constexpr operator ::UnityEngine::ResourceManagement::Util::IAllocationStrategy*() noexcept;

  /// @brief Method New addr 0x2bd2014 size 0xc virtual true final true
  inline ::System::Object* New(::System::Type* type, int32_t typeHash);

  /// @brief Method Release addr 0x2bd2020 size 0x4 virtual true final true
  inline void Release(int32_t typeHash, ::System::Object* obj);

  static inline ::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy* New_ctor();

  /// @brief Method .ctor addr 0x2bd2024 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "DefaultAllocationStrategy", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DefaultAllocationStrategy(DefaultAllocationStrategy&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DefaultAllocationStrategy", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DefaultAllocationStrategy(DefaultAllocationStrategy const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DefaultAllocationStrategy();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy, 0x10>, "Size mismatch!");

} // namespace UnityEngine::ResourceManagement::Util
NEED_NO_BOX(::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::Util::DefaultAllocationStrategy*, "UnityEngine.ResourceManagement.Util", "DefaultAllocationStrategy");
