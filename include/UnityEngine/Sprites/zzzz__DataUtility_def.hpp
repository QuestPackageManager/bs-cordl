#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DataUtility)
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Sprites {
class DataUtility;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Sprites::DataUtility);
// Type: UnityEngine.Sprites::DataUtility
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::Sprites {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10293))
// CS Name: ::UnityEngine.Sprites::DataUtility*
class CORDL_TYPE DataUtility : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetInnerUV, addr 0x2ce64f4, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetInnerUV(::UnityEngine::Sprite* sprite);

  /// @brief Method GetOuterUV, addr 0x2ce6504, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetOuterUV(::UnityEngine::Sprite* sprite);

  /// @brief Method GetPadding, addr 0x2ce6514, size 0x10, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector4 GetPadding(::UnityEngine::Sprite* sprite);

  /// @brief Method GetMinSize, addr 0x2ce6524, size 0x50, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector2 GetMinSize(::UnityEngine::Sprite* sprite);

  // Ctor Parameters [CppParam { name: "", ty: "DataUtility", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DataUtility(DataUtility&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DataUtility", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DataUtility(DataUtility const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DataUtility();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Sprites::DataUtility, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Sprites
NEED_NO_BOX(::UnityEngine::Sprites::DataUtility);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Sprites::DataUtility*, "UnityEngine.Sprites", "DataUtility");
