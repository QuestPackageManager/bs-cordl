#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IScreenRaycaster.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IScreenRaycaster)
namespace System::Collections::Generic {
template <typename T> class IEnumerable_1;
}
namespace System {
template <typename T> struct Nullable_1;
}
namespace System {
template <typename T1, typename T2, typename T3> struct ValueTuple_3;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Ray;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IScreenRaycaster;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::IScreenRaycaster*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::IScreenRaycaster*, "UnityEngine.UIElements", "IScreenRaycaster");
// Dependencies
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IScreenRaycaster
class CORDL_TYPE IScreenRaycaster {
public:
  // Declarations
  /// @brief Method MakeRay, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IEnumerable_1<::System::ValueTuple_3<::UnityEngine::Ray, ::UnityW<::UnityEngine::Camera>, bool>>*
  MakeRay(::UnityEngine::Vector2 mousePosition, int32_t pointerId, ::System::Nullable_1<int32_t> targetDisplay);

  /// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline void Update();

  // Ctor Parameters [CppParam { name: "", ty: "IScreenRaycaster", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IScreenRaycaster(IScreenRaycaster const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4628 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
