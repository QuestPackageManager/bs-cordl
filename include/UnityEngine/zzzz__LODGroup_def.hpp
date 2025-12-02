#pragma once
// IWYU pragma private; include "UnityEngine/LODGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Component_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LODGroup)
namespace System {
struct IntPtr;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class LODGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::LODGroup);
// Dependencies UnityEngine.Component
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.LODGroup
class CORDL_TYPE LODGroup : public ::UnityEngine::Component {
public:
  // Declarations
  __declspec(property(get = get_localReferencePoint)) ::UnityEngine::Vector3 localReferencePoint;

  __declspec(property(get = get_size)) float_t size;

  /// @brief Method get_localReferencePoint, addr 0x68743f4, size 0xa0, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector3 get_localReferencePoint();

  /// @brief Method get_localReferencePoint_Injected, addr 0x6874494, size 0x44, virtual false, abstract: false, final false
  static inline void get_localReferencePoint_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector3> ret);

  /// @brief Method get_size, addr 0x68744d8, size 0x80, virtual false, abstract: false, final false
  inline float_t get_size();

  /// @brief Method get_size_Injected, addr 0x6874558, size 0x3c, virtual false, abstract: false, final false
  static inline float_t get_size_Injected(::System::IntPtr _unity_self);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LODGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LODGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LODGroup(LODGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LODGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LODGroup(LODGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10189 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::LODGroup, 0x18>, "Size mismatch!");

} // namespace UnityEngine
NEED_NO_BOX(::UnityEngine::LODGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LODGroup*, "UnityEngine", "LODGroup");
