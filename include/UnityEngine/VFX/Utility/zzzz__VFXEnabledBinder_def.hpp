#pragma once
// IWYU pragma private; include "UnityEngine\VFX\Utility\VFXEnabledBinder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/VFX/Utility/zzzz__VFXBinderBase_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VFXEnabledBinder)
namespace UnityEngine::VFX::Utility {
class ExposedProperty;
}
namespace UnityEngine::VFX::Utility {
struct VFXEnabledBinder_Check;
}
namespace UnityEngine::VFX {
class VisualEffect;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::VFX::Utility {
struct VFXEnabledBinder_Check;
}
namespace UnityEngine::VFX::Utility {
class VFXEnabledBinder;
}
// Write type traits
MARK_VAL_T(::UnityEngine::VFX::Utility::VFXEnabledBinder_Check);
MARK_REF_T(::UnityEngine::VFX::Utility::VFXEnabledBinder*);
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXEnabledBinder_Check, "UnityEngine.VFX.Utility", "VFXEnabledBinder/Check");
DEFINE_IL2CPP_CLASS(::UnityEngine::VFX::Utility::VFXEnabledBinder*, "UnityEngine.VFX.Utility", "VFXEnabledBinder");
// Dependencies
namespace UnityEngine::VFX::Utility {
// Is value type: true
// CS Name: UnityEngine.VFX.Utility.VFXEnabledBinder/Check
struct CORDL_TYPE VFXEnabledBinder_Check {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __VFXEnabledBinder_Check_Unwrapped
  enum struct __VFXEnabledBinder_Check_Unwrapped : int32_t {
    __E_ActiveInHierarchy = static_cast<int32_t>(0x0),
    __E_ActiveSelf = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __VFXEnabledBinder_Check_Unwrapped() const noexcept {
    return static_cast<__VFXEnabledBinder_Check_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXEnabledBinder_Check();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr VFXEnabledBinder_Check(int32_t value__) noexcept;

  /// @brief Field ActiveInHierarchy value: I32(0)
  static ::UnityEngine::VFX::Utility::VFXEnabledBinder_Check const ActiveInHierarchy;

  /// @brief Field ActiveSelf value: I32(1)
  static ::UnityEngine::VFX::Utility::VFXEnabledBinder_Check const ActiveSelf;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19987 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXEnabledBinder_Check, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXEnabledBinder_Check) == 0x4, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
// Dependencies UnityEngine.VFX.Utility.VFXBinderBase, UnityEngine.VFX.Utility.VFXEnabledBinder::Check
namespace UnityEngine::VFX::Utility {
// Is value type: false
// CS Name: UnityEngine.VFX.Utility.VFXEnabledBinder
class CORDL_TYPE VFXEnabledBinder : public ::UnityEngine::VFX::Utility::VFXBinderBase {
public:
  // Declarations
  using Check = ::UnityEngine::VFX::Utility::VFXEnabledBinder_Check;

  __declspec(property(get = get_Property, put = set_Property)) ::StringW Property;

  /// @brief Field Target, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_Target, put = __cordl_internal_set_Target)) ::UnityW<::UnityEngine::GameObject> Target;

  /// @brief Field check, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_check, put = __cordl_internal_set_check)) ::UnityEngine::VFX::Utility::VFXEnabledBinder_Check check;

  /// @brief Field m_Property, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Property, put = __cordl_internal_set_m_Property)) ::UnityEngine::VFX::Utility::ExposedProperty* m_Property;

  /// @brief Method IsValid, addr 0x69e28b0, size 0xa8, virtual true, abstract: false, final false
  inline bool IsValid(::UnityEngine::VFX::VisualEffect* component);

  static inline ::UnityEngine::VFX::Utility::VFXEnabledBinder* New_ctor();

  /// @brief Method ToString, addr 0x69e29cc, size 0x138, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method UpdateBinding, addr 0x69e2958, size 0x74, virtual true, abstract: false, final false
  inline void UpdateBinding(::UnityEngine::VFX::VisualEffect* component);

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_Target() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_Target();

  constexpr ::UnityEngine::VFX::Utility::VFXEnabledBinder_Check const& __cordl_internal_get_check() const;

  constexpr ::UnityEngine::VFX::Utility::VFXEnabledBinder_Check& __cordl_internal_get_check();

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty* const& __cordl_internal_get_m_Property() const;

  constexpr ::UnityEngine::VFX::Utility::ExposedProperty*& __cordl_internal_get_m_Property();

  constexpr void __cordl_internal_set_Target(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_check(::UnityEngine::VFX::Utility::VFXEnabledBinder_Check value);

  constexpr void __cordl_internal_set_m_Property(::UnityEngine::VFX::Utility::ExposedProperty* value);

  /// @brief Method .ctor, addr 0x69e2b04, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_Property, addr 0x69e287c, size 0x18, virtual false, abstract: false, final false
  inline ::StringW get_Property();

  /// @brief Method set_Property, addr 0x69e2894, size 0x1c, virtual false, abstract: false, final false
  inline void set_Property(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr VFXEnabledBinder();

public:
  // Ctor Parameters [CppParam { name: "", ty: "VFXEnabledBinder", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  VFXEnabledBinder(VFXEnabledBinder&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "VFXEnabledBinder", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  VFXEnabledBinder(VFXEnabledBinder const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19988 };

  /// @brief Field check, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::VFX::Utility::VFXEnabledBinder_Check ___check;

  /// @brief Field m_Property, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::VFX::Utility::ExposedProperty* ___m_Property;

  /// @brief Field Target, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___Target;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::VFX::Utility::VFXEnabledBinder, ___check) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXEnabledBinder, ___m_Property) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::VFX::Utility::VFXEnabledBinder, ___Target) == 0x38, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::VFX::Utility::VFXEnabledBinder) == 0x40, "Size mismatch!");

} // namespace UnityEngine::VFX::Utility
