#pragma once
// IWYU pragma private; include "Tayx/Graphy/Utils/G_ExtensionMethods.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(G_ExtensionMethods)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Tayx::Graphy::Utils {
class G_ExtensionMethods;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Utils::G_ExtensionMethods);
// Type: Tayx.Graphy.Utils::G_ExtensionMethods
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Tayx::Graphy::Utils {
// Is value type: false
// CS Name: ::Tayx.Graphy.Utils::G_ExtensionMethods*
class CORDL_TYPE G_ExtensionMethods : public ::System::Object {
public:
  // Declarations
  /// @brief Method SetAllActive, addr 0x306a868, size 0x164, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* SetAllActive(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* gameObjects,
                                                                                                          bool active);

  /// @brief Method SetAllActive, addr 0x306aa80, size 0x17c, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* SetAllActive(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* images,
                                                                                                         bool active);

  /// @brief Method SetOneActive, addr 0x306a9cc, size 0xb4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* SetOneActive(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Image>>* images,
                                                                                                         int32_t active);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr G_ExtensionMethods();

public:
  // Ctor Parameters [CppParam { name: "", ty: "G_ExtensionMethods", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  G_ExtensionMethods(G_ExtensionMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "G_ExtensionMethods", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  G_ExtensionMethods(G_ExtensionMethods const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Utils::G_ExtensionMethods, 0x10>, "Size mismatch!");

} // namespace Tayx::Graphy::Utils
NEED_NO_BOX(::Tayx::Graphy::Utils::G_ExtensionMethods);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Utils::G_ExtensionMethods*, "Tayx.Graphy.Utils", "G_ExtensionMethods");
