#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(Vector2Extensions)
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class Vector2Extensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::Vector2Extensions);
// Type: ::Vector2Extensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::Vector2Extensions*
class CORDL_TYPE Vector2Extensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method SignedAngleToLine, addr 0xf91adc, size 0x1d4, virtual false, abstract: false, final false
  static inline float_t SignedAngleToLine(::UnityEngine::Vector2 vec, ::UnityEngine::Vector2 line);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Vector2Extensions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Vector2Extensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Vector2Extensions(Vector2Extensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Vector2Extensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Vector2Extensions(Vector2Extensions const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::Vector2Extensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::Vector2Extensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Vector2Extensions*, "", "Vector2Extensions");
