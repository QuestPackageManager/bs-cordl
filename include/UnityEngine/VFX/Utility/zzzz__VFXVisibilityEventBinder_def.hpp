#pragma once
// IWYU pragma private; include "UnityEngine/VFX/Utility/VFXVisibilityEventBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXEventBinderBase_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXVisibilityEventBinder)
namespace System {
class Object;
}
namespace UnityEngine::VFX::Utility {
struct VFXVisibilityEventBinder_Activation;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
struct VFXVisibilityEventBinder_Activation;
}
namespace UnityEngine::VFX::Utility {
class VFXVisibilityEventBinder;
}
// Write type traits
MARK_VAL_T(::UnityEngine::VFX::Utility::VFXVisibilityEventBinder_Activation);
MARK_REF_T(::UnityEngine::VFX::Utility::VFXVisibilityEventBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXVisibilityEventBinder_Activation, "UnityEngine.VFX.Utility", "VFXVisibilityEventBinder/Activation");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXVisibilityEventBinder*, "UnityEngine.VFX.Utility", "VFXVisibilityEventBinder");
// Dependencies
namespace UnityEngine::VFX::Utility {
// Is value type: true
// CS Name: UnityEngine.VFX.Utility.VFXVisibilityEventBinder/Activation
struct CORDL_TYPE VFXVisibilityEventBinder_Activation {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VFXVisibilityEventBinder_Activation_Unwrapped
  enum struct __VFXVisibilityEventBinder_Activation_Unwrapped : int32_t {
    __E_OnBecameVisible = static_cast<int32_t>(0x0),
    __E_OnBecameInvisible = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VFXVisibilityEventBinder_Activation_Unwrapped() const noexcept {
    return static_cast<__VFXVisibilityEventBinder_Activation_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXVisibilityEventBinder_Activation();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VFXVisibilityEventBinder_Activation(int32_t value__) noexcept;

  /// @brief Field OnBecameInvisible value: I32(1)
  static ::UnityEngine::VFX::Utility::VFXVisibilityEventBinder_Activation const OnBecameInvisible;

  /// @brief Field OnBecameVisible value: I32(0)
  static ::UnityEngine::VFX::Utility::VFXVisibilityEventBinder_Activation const OnBecameVisible;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19947 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXVisibilityEventBinder_Activation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXVisibilityEventBinder_Activation) == 0x4, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
// Dependencies UnityEngine.VFX.Utility.VFXEventBinderBase, UnityEngine.VFX.Utility.VFXVisibilityEventBinder::Activation
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXVisibilityEventBinder
class CORDL_TYPE VFXVisibilityEventBinder : public ::UnityEngine::VFX::Utility::VFXEventBinderBase {
public:
  // Declarations
  using Activation = ::UnityEngine::VFX::Utility::VFXVisibilityEventBinder_Activation;

  /// @brief Field activation, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_activation, put = __cordl_internal_set_activation)) ::UnityEngine::VFX::Utility::VFXVisibilityEventBinder_Activation activation;

  static inline ::UnityEngine::VFX::Utility::VFXVisibilityEventBinder* New_ctor();

  /// @brief Method OnBecameInvisible, addr 0x69dc4a4, size 0xb8, virtual false, abstract: false, final false
  inline void OnBecameInvisible();

  /// @brief Method OnBecameVisible, addr 0x69dc3f0, size 0xb4, virtual false, abstract: false, final false
  inline void OnBecameVisible();

  /// @brief Method SetEventAttribute, addr 0x69dc3ec, size 0x4, virtual true, abstract: false, final false
  inline void SetEventAttribute(::ArrayW<::System::Object*> parameters);

  constexpr ::UnityEngine::VFX::Utility::VFXVisibilityEventBinder_Activation const& __cordl_internal_get_activation() const;

  constexpr ::UnityEngine::VFX::Utility::VFXVisibilityEventBinder_Activation& __cordl_internal_get_activation();

  constexpr void __cordl_internal_set_activation(::UnityEngine::VFX::Utility::VFXVisibilityEventBinder_Activation value);

  /// @brief Method .ctor, addr 0x69dc55c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXVisibilityEventBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXVisibilityEventBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXVisibilityEventBinder(VFXVisibilityEventBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXVisibilityEventBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXVisibilityEventBinder(VFXVisibilityEventBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19948 };

  /// @brief Field activation, offset: 0x38, size: 0x4, def value: None
  ::UnityEngine::VFX::Utility::VFXVisibilityEventBinder_Activation ___activation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXVisibilityEventBinder, ___activation) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXVisibilityEventBinder) == 0x40, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
